// Description: C++18 Table Object implementation for CFBam.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFInt 2.13 Internet Essentials
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

	const std::string CFBamLicenseTableObj::CLASS_NAME( "CFBamLicenseTableObj" );
	const std::string CFBamLicenseTableObj::TABLE_NAME( "License" );
	const std::string CFBamLicenseTableObj::TABLE_DBNAME( "licn" );

	CFBamLicenseTableObj::CFBamLicenseTableObj() {
		schema = NULL;
		members = new std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>();
		allLicense = NULL;
		indexByLicnTenantIdx = new std::map< cfint::CFIntLicenseByLicnTenantIdxKey,
			std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>*>();
		indexByDomainIdx = new std::map< cfint::CFIntLicenseByDomainIdxKey,
			std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>*>();
		indexByUNameIdx = new std::map< cfint::CFIntLicenseByUNameIdxKey,
			cfint::ICFIntLicenseObj*>();
	}

	CFBamLicenseTableObj::CFBamLicenseTableObj( cfint::ICFIntSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>();
		allLicense = NULL;
		indexByLicnTenantIdx = new std::map< cfint::CFIntLicenseByLicnTenantIdxKey,
			std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>*>();
		indexByDomainIdx = new std::map< cfint::CFIntLicenseByDomainIdxKey,
			std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>*>();
		indexByUNameIdx = new std::map< cfint::CFIntLicenseByUNameIdxKey,
			cfint::ICFIntLicenseObj*>();
	}

	CFBamLicenseTableObj::~CFBamLicenseTableObj() {
		minimizeMemory();
		if( indexByLicnTenantIdx != NULL ) {
			delete indexByLicnTenantIdx;
			indexByLicnTenantIdx = NULL;
		}
		if( indexByDomainIdx != NULL ) {
			delete indexByDomainIdx;
			indexByDomainIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( members != NULL ) {
			cfint::ICFIntLicenseObj* curMember;
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

	cfint::ICFIntSchemaObj* CFBamLicenseTableObj::getSchema() {
		return( schema );
	}

	void CFBamLicenseTableObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamLicenseTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamLicenseTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamLicenseTableObj::getObjQualifyingClassCode() {
		return( &cfsec::CFSecTenantBuff::CLASS_CODE );
	}


	void CFBamLicenseTableObj::minimizeMemory() {
		if( allLicense != NULL ) {
			allLicense->clear();
			delete allLicense;
			allLicense = NULL;
		}
		if( indexByLicnTenantIdx != NULL ) {
			std::map< cfint::CFIntLicenseByLicnTenantIdxKey,
				std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* >::iterator iterByLicnTenantIdx = indexByLicnTenantIdx->begin();
			std::map< cfint::CFIntLicenseByLicnTenantIdxKey,
				std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* >::iterator endByLicnTenantIdx = indexByLicnTenantIdx->end();
			std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* curByLicnTenantIdx = NULL;
			while( iterByLicnTenantIdx != endByLicnTenantIdx ) {
				curByLicnTenantIdx = iterByLicnTenantIdx->second;
				if( curByLicnTenantIdx != NULL ) {
					curByLicnTenantIdx->clear();
					delete curByLicnTenantIdx;
					curByLicnTenantIdx = NULL;
					iterByLicnTenantIdx->second = NULL;
				}
				iterByLicnTenantIdx ++;
			}
			indexByLicnTenantIdx->clear();
		}
		if( indexByDomainIdx != NULL ) {
			std::map< cfint::CFIntLicenseByDomainIdxKey,
				std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* >::iterator iterByDomainIdx = indexByDomainIdx->begin();
			std::map< cfint::CFIntLicenseByDomainIdxKey,
				std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* >::iterator endByDomainIdx = indexByDomainIdx->end();
			std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* curByDomainIdx = NULL;
			while( iterByDomainIdx != endByDomainIdx ) {
				curByDomainIdx = iterByDomainIdx->second;
				if( curByDomainIdx != NULL ) {
					curByDomainIdx->clear();
					delete curByDomainIdx;
					curByDomainIdx = NULL;
					iterByDomainIdx->second = NULL;
				}
				iterByDomainIdx ++;
			}
			indexByDomainIdx->clear();
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( members != NULL ) {
			cfint::ICFIntLicenseObj* cur = NULL;
			cfint::ICFIntLicenseEditObj* edit = NULL;
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

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::newInstance() {
		cfint::ICFIntLicenseObj* inst = dynamic_cast<cfint::ICFIntLicenseObj*>( new CFBamLicenseObj( schema ) );
		return( inst );
	}

	cfint::ICFIntLicenseEditObj* CFBamLicenseTableObj::newEditInstance( cfint::ICFIntLicenseObj* orig ) {
		cfint::ICFIntLicenseEditObj* edit = dynamic_cast<cfint::ICFIntLicenseEditObj*>( new CFBamLicenseEditObj( orig ));
		return( edit );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::realizeLicense( cfint::ICFIntLicenseObj* Obj ) {
		static const std::string S_ProcName( "realizeLicense" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfint::ICFIntLicenseObj* obj = Obj;
		cfint::ICFIntLicenseObj* existingObj = NULL;
		cfint::CFIntLicensePKey* pkey = obj->getPKey();
		cfint::ICFIntLicenseObj* keepObj = NULL;
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
			if( indexByLicnTenantIdx != NULL ) {
				cfint::CFIntLicenseByLicnTenantIdxKey keyLicnTenantIdx;
				keyLicnTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchLicnTenantIdx = indexByLicnTenantIdx->find( keyLicnTenantIdx );
				if( searchLicnTenantIdx != indexByLicnTenantIdx->end() ) {
					std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* mapLicnTenantIdx = searchLicnTenantIdx->second;
					if( mapLicnTenantIdx != NULL ) {
						auto removalProbe = mapLicnTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapLicnTenantIdx->end() ) {
							mapLicnTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDomainIdx != NULL ) {
				cfint::CFIntLicenseByDomainIdxKey keyDomainIdx;
				keyDomainIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyDomainIdx.setRequiredTopDomainId( keepObj->getRequiredTopDomainId() );
				auto searchDomainIdx = indexByDomainIdx->find( keyDomainIdx );
				if( searchDomainIdx != indexByDomainIdx->end() ) {
					std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* mapDomainIdx = searchDomainIdx->second;
					if( mapDomainIdx != NULL ) {
						auto removalProbe = mapDomainIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDomainIdx->end() ) {
							mapDomainIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfint::CFIntLicenseByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTopDomainId( keepObj->getRequiredTopDomainId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfint::CFIntLicenseBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByLicnTenantIdx != NULL ) {
				static const std::string S_ALicnTenantIdxObj( "aLicnTenantIdxObj" );
				cfint::ICFIntLicenseObj* aLicnTenantIdxObj =
					dynamic_cast<cfint::ICFIntLicenseObj*>( keepObj );
				if( aLicnTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALicnTenantIdxObj );
				}
				cfint::CFIntLicenseByLicnTenantIdxKey keyLicnTenantIdx;
				keyLicnTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByLicnTenantIdx = indexByLicnTenantIdx->find( keyLicnTenantIdx );
				if( searchIndexByLicnTenantIdx != indexByLicnTenantIdx->end() ) {
					std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* mapLicnTenantIdx = searchIndexByLicnTenantIdx->second;
					if( mapLicnTenantIdx != NULL ) {
						mapLicnTenantIdx->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(keepObj->getPKey()), aLicnTenantIdxObj ) );
					}
				}
			}

			if( indexByDomainIdx != NULL ) {
				static const std::string S_ADomainIdxObj( "aDomainIdxObj" );
				cfint::ICFIntLicenseObj* aDomainIdxObj =
					dynamic_cast<cfint::ICFIntLicenseObj*>( keepObj );
				if( aDomainIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADomainIdxObj );
				}
				cfint::CFIntLicenseByDomainIdxKey keyDomainIdx;
				keyDomainIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyDomainIdx.setRequiredTopDomainId( keepObj->getRequiredTopDomainId() );
				auto searchIndexByDomainIdx = indexByDomainIdx->find( keyDomainIdx );
				if( searchIndexByDomainIdx != indexByDomainIdx->end() ) {
					std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* mapDomainIdx = searchIndexByDomainIdx->second;
					if( mapDomainIdx != NULL ) {
						mapDomainIdx->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(keepObj->getPKey()), aDomainIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfint::ICFIntLicenseObj* aUNameIdxObj =
					dynamic_cast<cfint::ICFIntLicenseObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfint::CFIntLicenseByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTopDomainId( keepObj->getRequiredTopDomainId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfint::CFIntLicenseByUNameIdxKey, cfint::ICFIntLicenseObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allLicense != NULL ) {
				allLicense->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByLicnTenantIdx != NULL ) {
				static const std::string S_ALicnTenantIdxObj( "aLicnTenantIdxObj" );
				cfint::ICFIntLicenseObj* aLicnTenantIdxObj =
					dynamic_cast<cfint::ICFIntLicenseObj*>( keepObj );
				if( aLicnTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALicnTenantIdxObj );
				}
				cfint::CFIntLicenseByLicnTenantIdxKey keyLicnTenantIdx;
				keyLicnTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByLicnTenantIdx = indexByLicnTenantIdx->find( keyLicnTenantIdx );
				if( searchIndexByLicnTenantIdx != indexByLicnTenantIdx->end() ) {
					std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* mapLicnTenantIdx = searchIndexByLicnTenantIdx->second;
					if( mapLicnTenantIdx != NULL ) {
						mapLicnTenantIdx->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(keepObj->getPKey()), aLicnTenantIdxObj ) );
					}
				}
			}

			if( indexByDomainIdx != NULL ) {
				static const std::string S_ADomainIdxObj( "aDomainIdxObj" );
				cfint::ICFIntLicenseObj* aDomainIdxObj =
					dynamic_cast<cfint::ICFIntLicenseObj*>( keepObj );
				if( aDomainIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADomainIdxObj );
				}
				cfint::CFIntLicenseByDomainIdxKey keyDomainIdx;
				keyDomainIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyDomainIdx.setRequiredTopDomainId( keepObj->getRequiredTopDomainId() );
				auto searchIndexByDomainIdx = indexByDomainIdx->find( keyDomainIdx );
				if( searchIndexByDomainIdx != indexByDomainIdx->end() ) {
					std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* mapDomainIdx = searchIndexByDomainIdx->second;
					if( mapDomainIdx != NULL ) {
						mapDomainIdx->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(keepObj->getPKey()), aDomainIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfint::ICFIntLicenseObj* aUNameIdxObj =
					dynamic_cast<cfint::ICFIntLicenseObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfint::CFIntLicenseByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTopDomainId( keepObj->getRequiredTopDomainId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfint::CFIntLicenseByUNameIdxKey, cfint::ICFIntLicenseObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allLicense != NULL ) {
				allLicense->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamLicenseTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfint::ICFIntLicenseObj*> list;
		cfint::ICFIntLicenseObj* existingObj = readCachedLicenseByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfint::ICFIntLicenseObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntLicenseBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->reallyDeepDisposeLicense( dynamic_cast<cfint::ICFIntLicenseObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamLicenseTableObj::deepDisposeByLicnTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByLicnTenantIdx" );
		std::vector<cfint::ICFIntLicenseObj*> list;
		std::vector<cfint::ICFIntLicenseObj*> matchesFound = readCachedLicenseByLicnTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfint::ICFIntLicenseObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntLicenseBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->reallyDeepDisposeLicense( dynamic_cast<cfint::ICFIntLicenseObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamLicenseTableObj::deepDisposeByDomainIdx( const int64_t TenantId,
			const int64_t TopDomainId ) {
		static const std::string S_ProcName( "deepDisposeByDomainIdx" );
		std::vector<cfint::ICFIntLicenseObj*> list;
		std::vector<cfint::ICFIntLicenseObj*> matchesFound = readCachedLicenseByDomainIdx( TenantId,
				TopDomainId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfint::ICFIntLicenseObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntLicenseBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->reallyDeepDisposeLicense( dynamic_cast<cfint::ICFIntLicenseObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamLicenseTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t TopDomainId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfint::ICFIntLicenseObj*> list;
		cfint::ICFIntLicenseObj* existingObj = readCachedLicenseByUNameIdx( TenantId,
				TopDomainId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfint::ICFIntLicenseObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntLicenseBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->reallyDeepDisposeLicense( dynamic_cast<cfint::ICFIntLicenseObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamLicenseTableObj::reallyDeepDisposeLicense( cfint::ICFIntLicenseObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeLicense" );

		if( Obj == NULL ) {
			return;
		}

		cfint::ICFIntLicenseObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfint::CFIntLicenseBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->reallyDetachFromIndexesLicense( dynamic_cast<cfint::ICFIntLicenseObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::createLicense( cfint::ICFIntLicenseEditObj* Obj ) {
		static const std::string S_ProcName( "createLicense" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntLicenseObj* obj = dynamic_cast<cfint::ICFIntLicenseObj*>( Obj->getOrig() );
		try {
			cfint::CFIntLicenseBuff* buff = dynamic_cast<cfint::CFIntLicenseBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->createLicense(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfint::CFIntLicenseBuff*>( cloneable ) );
			obj = dynamic_cast<cfint::ICFIntLicenseObj*>( obj->realize() );
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

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::readLicense( cfint::CFIntLicensePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readLicense" );
		cfint::ICFIntLicenseObj* obj = NULL;
		cfint::ICFIntLicenseObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntLicenseBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfint::ICFIntLicenseObj*>( obj->realize() );
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

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::lockLicense( cfint::CFIntLicensePKey* pkey ) {
		static const std::string S_ProcName( "lockLicense" );
		cfint::ICFIntLicenseObj* locked = NULL;
		cfint::CFIntLicenseBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfint::ICFIntLicenseObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfint::ICFIntLicenseObj*> CFBamLicenseTableObj::readAllLicense( bool forceRead ) {
		static const std::string S_ProcName( "readAllLicense" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntLicenseObj* realized = NULL;
		if( forceRead || ( allLicense == NULL ) ) {
			std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* map = new std::map<cfint::CFIntLicensePKey,cfint::ICFIntLicenseObj*>();
			allLicense = map;
			std::TCFLibOwningVector<cfint::CFIntLicenseBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->readAllDerived( schema->getAuthorization() );
			cfint::CFIntLicenseBuff* buff = NULL;
			cfint::ICFIntLicenseObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfint::ICFIntLicenseObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allLicense->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allLicense->size();
		std::vector<cfint::ICFIntLicenseObj*> arr;
		auto valIter = allLicense->begin();
		size_t idx = 0;
		while( valIter != allLicense->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::readLicenseByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readLicenseByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntLicensePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfint::ICFIntLicenseObj* obj = readLicense( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfint::ICFIntLicenseObj*> CFBamLicenseTableObj::readLicenseByLicnTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readLicenseByLicnTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntLicenseByLicnTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* dict;
		std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* oldDict;
		if( indexByLicnTenantIdx == NULL ) {
			indexByLicnTenantIdx = new std::map< cfint::CFIntLicenseByLicnTenantIdxKey,
				std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>*>();
		}
		auto searchIndexByLicnTenantIdx = indexByLicnTenantIdx->find( key );
		if( searchIndexByLicnTenantIdx != indexByLicnTenantIdx->end() ) {
			oldDict = searchIndexByLicnTenantIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>();
			cfint::ICFIntLicenseObj* obj;
			std::TCFLibOwningVector<cfint::CFIntLicenseBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->readDerivedByLicnTenantIdx( schema->getAuthorization(),
				TenantId );
			cfint::CFIntLicenseBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfint::ICFIntLicenseObj* realized = dynamic_cast<cfint::ICFIntLicenseObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByLicnTenantIdx->erase( searchIndexByLicnTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByLicnTenantIdx->insert( std::map< cfint::CFIntLicenseByLicnTenantIdxKey,
				std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfint::ICFIntLicenseObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfint::ICFIntLicenseObj*> CFBamLicenseTableObj::readLicenseByDomainIdx( const int64_t TenantId,
			const int64_t TopDomainId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readLicenseByDomainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntLicenseByDomainIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTopDomainId( TopDomainId );
		std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* dict;
		std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* oldDict;
		if( indexByDomainIdx == NULL ) {
			indexByDomainIdx = new std::map< cfint::CFIntLicenseByDomainIdxKey,
				std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>*>();
		}
		auto searchIndexByDomainIdx = indexByDomainIdx->find( key );
		if( searchIndexByDomainIdx != indexByDomainIdx->end() ) {
			oldDict = searchIndexByDomainIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>();
			cfint::ICFIntLicenseObj* obj;
			std::TCFLibOwningVector<cfint::CFIntLicenseBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->readDerivedByDomainIdx( schema->getAuthorization(),
				TenantId,
				TopDomainId );
			cfint::CFIntLicenseBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfint::ICFIntLicenseObj* realized = dynamic_cast<cfint::ICFIntLicenseObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDomainIdx->erase( searchIndexByDomainIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDomainIdx->insert( std::map< cfint::CFIntLicenseByDomainIdxKey,
				std::map< cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfint::ICFIntLicenseObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::readLicenseByUNameIdx( const int64_t TenantId,
			const int64_t TopDomainId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readLicenseByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntLicenseByUNameIdxKey,
				cfint::ICFIntLicenseObj*>();
		}
		cfint::CFIntLicenseByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTopDomainId( TopDomainId );
		key.setRequiredName( Name );
		cfint::ICFIntLicenseObj* obj = NULL;
		cfint::ICFIntLicenseObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntLicenseBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				TopDomainId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfint::ICFIntLicenseObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfint::CFIntLicenseByUNameIdxKey, cfint::ICFIntLicenseObj*>::value_type( key, dynamic_cast<cfint::ICFIntLicenseObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::readLicenseByLookupUNameIdx( const int64_t TenantId,
			const int64_t TopDomainId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readLicenseByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntLicenseByUNameIdxKey,
				cfint::ICFIntLicenseObj*>();
		}
		cfint::CFIntLicenseByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTopDomainId( TopDomainId );
		key.setRequiredName( Name );
		cfint::ICFIntLicenseObj* obj = NULL;
		cfint::ICFIntLicenseObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntLicenseBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				TenantId,
				TopDomainId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfint::ICFIntLicenseObj*>( dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfint::ICFIntLicenseObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfint::CFIntLicenseByUNameIdxKey, cfint::ICFIntLicenseObj*>::value_type( key, dynamic_cast<cfint::ICFIntLicenseObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::readCachedLicense( cfint::CFIntLicensePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readLicense" );
		cfint::ICFIntLicenseObj* obj = NULL;
		cfint::ICFIntLicenseObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::readCachedLicenseByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedLicenseByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntLicensePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfint::ICFIntLicenseObj* obj = readCachedLicense( &pkey );
		return( obj );
	}

	std::vector<cfint::ICFIntLicenseObj*> CFBamLicenseTableObj::readCachedLicenseByLicnTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedLicenseByLicnTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfint::ICFIntLicenseObj*> arr;
		cfint::CFIntLicenseByLicnTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* dict;
		if( indexByLicnTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByLicnTenantIdx = indexByLicnTenantIdx->find( key );
		if( searchIndexByLicnTenantIdx != indexByLicnTenantIdx->end() ) {
			dict = searchIndexByLicnTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfint::ICFIntLicenseObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfint::ICFIntLicenseObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntLicenseBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfint::ICFIntLicenseObj*> CFBamLicenseTableObj::readCachedLicenseByDomainIdx( const int64_t TenantId,
			const int64_t TopDomainId )
	{
		static const std::string S_ProcName( "readCachedLicenseByDomainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfint::ICFIntLicenseObj*> arr;
		cfint::CFIntLicenseByDomainIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTopDomainId( TopDomainId );
		std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* dict;
		if( indexByDomainIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDomainIdx = indexByDomainIdx->find( key );
		if( searchIndexByDomainIdx != indexByDomainIdx->end() ) {
			dict = searchIndexByDomainIdx->second;
			size_t len = dict->size();
			std::vector<cfint::ICFIntLicenseObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfint::ICFIntLicenseObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntLicenseBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::readCachedLicenseByUNameIdx( const int64_t TenantId,
			const int64_t TopDomainId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedLicenseByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntLicenseByUNameIdxKey,
				cfint::ICFIntLicenseObj*>();
		}
		cfint::CFIntLicenseByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTopDomainId( TopDomainId );
		key.setRequiredName( Name );
		cfint::ICFIntLicenseObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntLicenseBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::readCachedLicenseByLookupUNameIdx( const int64_t TenantId,
			const int64_t TopDomainId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedLicenseByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntLicenseByUNameIdxKey,
				cfint::ICFIntLicenseObj*>();
		}
		cfint::CFIntLicenseByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTopDomainId( TopDomainId );
		key.setRequiredName( Name );
		cfint::ICFIntLicenseObj* obj = NULL;
		cfint::ICFIntLicenseObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntLicenseBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseTableObj::updateLicense( cfint::ICFIntLicenseEditObj* Obj ) {
		static const std::string S_ProcName( "updateLicense" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntLicenseObj* obj = dynamic_cast<cfint::ICFIntLicenseObj*>( Obj->getOrig() );
		try {
			cfint::CFIntLicenseBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->updateLicense( schema->getAuthorization(),
				dynamic_cast<cfint::CFIntLicenseBuff*>( Obj->getLicenseBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfint::ICFIntLicenseObj*>( dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfint::ICFIntLicenseObj*>( obj->realize() );
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

	void CFBamLicenseTableObj::deleteLicense( cfint::ICFIntLicenseEditObj* Obj ) {
		cfint::ICFIntLicenseObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->deleteLicense( schema->getAuthorization(),
			obj->getLicenseBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamLicenseTableObj::deleteLicenseByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfint::CFIntLicensePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfint::ICFIntLicenseObj* obj = readLicense( &pkey, true );
		if( obj != NULL ) {
			cfint::ICFIntLicenseEditObj* editObj = dynamic_cast<cfint::ICFIntLicenseEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfint::ICFIntLicenseEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamLicenseTableObj::deleteLicenseByLicnTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfint::ICFIntSchema*>( schema->getBackingStore() )->getTableLicense()->deleteLicenseByLicnTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByLicnTenantIdx( TenantId );
	}

	void CFBamLicenseTableObj::deleteLicenseByDomainIdx( const int64_t TenantId,
			const int64_t TopDomainId )
	{
		dynamic_cast<cfint::ICFIntSchema*>( schema->getBackingStore() )->getTableLicense()->deleteLicenseByDomainIdx( schema->getAuthorization(),
				TenantId,
				TopDomainId );
		deepDisposeByDomainIdx( TenantId,
			TopDomainId );
	}

	void CFBamLicenseTableObj::deleteLicenseByUNameIdx( const int64_t TenantId,
			const int64_t TopDomainId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntLicenseByUNameIdxKey,
				cfint::ICFIntLicenseObj*>();
		}
		cfint::CFIntLicenseByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTopDomainId( TopDomainId );
		key.setRequiredName( Name );
		cfint::ICFIntLicenseObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->deleteLicenseByUNameIdx( schema->getAuthorization(),
				TenantId,
				TopDomainId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->deleteLicenseByUNameIdx( schema->getAuthorization(),
				TenantId,
				TopDomainId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			TopDomainId,
			Name );
	}

	void CFBamLicenseTableObj::reallyDetachFromIndexesLicense( cfint::ICFIntLicenseObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesLicense" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfint::ICFIntLicenseObj* obj = Obj;
		cfint::CFIntLicensePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfint::ICFIntLicenseObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByLicnTenantIdx != NULL ) {
				cfint::CFIntLicenseByLicnTenantIdxKey keyLicnTenantIdx;
				keyLicnTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchLicnTenantIdx = indexByLicnTenantIdx->find( keyLicnTenantIdx );
				if( searchLicnTenantIdx != indexByLicnTenantIdx->end() ) {
					std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* mapLicnTenantIdx = searchLicnTenantIdx->second;
					if( mapLicnTenantIdx != NULL ) {
						auto removalProbe = mapLicnTenantIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapLicnTenantIdx->end() ) {
							mapLicnTenantIdx->erase( removalProbe );
							if( mapLicnTenantIdx->empty() ) {
								delete mapLicnTenantIdx;
								mapLicnTenantIdx = NULL;
								indexByLicnTenantIdx->erase( searchLicnTenantIdx );
							}
						}
					}
				}
			}

			if( indexByDomainIdx != NULL ) {
				cfint::CFIntLicenseByDomainIdxKey keyDomainIdx;
				keyDomainIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyDomainIdx.setRequiredTopDomainId( obj->getRequiredTopDomainId() );
				auto searchDomainIdx = indexByDomainIdx->find( keyDomainIdx );
				if( searchDomainIdx != indexByDomainIdx->end() ) {
					std::map<cfint::CFIntLicensePKey, cfint::ICFIntLicenseObj*>* mapDomainIdx = searchDomainIdx->second;
					if( mapDomainIdx != NULL ) {
						auto removalProbe = mapDomainIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapDomainIdx->end() ) {
							mapDomainIdx->erase( removalProbe );
							if( mapDomainIdx->empty() ) {
								delete mapDomainIdx;
								mapDomainIdx = NULL;
								indexByDomainIdx->erase( searchDomainIdx );
							}
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfint::CFIntLicenseByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTopDomainId( obj->getRequiredTopDomainId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
