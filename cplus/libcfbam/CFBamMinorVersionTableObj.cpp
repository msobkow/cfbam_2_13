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

	const std::string CFBamMinorVersionTableObj::CLASS_NAME( "CFBamMinorVersionTableObj" );
	const std::string CFBamMinorVersionTableObj::TABLE_NAME( "MinorVersion" );
	const std::string CFBamMinorVersionTableObj::TABLE_DBNAME( "mnvrdef" );

	CFBamMinorVersionTableObj::CFBamMinorVersionTableObj() {
		schema = NULL;
		members = new std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>();
		allMinorVersion = NULL;
		indexByTenantIdx = new std::map< cfint::CFIntMinorVersionByTenantIdxKey,
			std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>*>();
		indexByMajorVerIdx = new std::map< cfint::CFIntMinorVersionByMajorVerIdxKey,
			std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>*>();
		indexByNameIdx = new std::map< cfint::CFIntMinorVersionByNameIdxKey,
			cfint::ICFIntMinorVersionObj*>();
	}

	CFBamMinorVersionTableObj::CFBamMinorVersionTableObj( cfint::ICFIntSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>();
		allMinorVersion = NULL;
		indexByTenantIdx = new std::map< cfint::CFIntMinorVersionByTenantIdxKey,
			std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>*>();
		indexByMajorVerIdx = new std::map< cfint::CFIntMinorVersionByMajorVerIdxKey,
			std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>*>();
		indexByNameIdx = new std::map< cfint::CFIntMinorVersionByNameIdxKey,
			cfint::ICFIntMinorVersionObj*>();
	}

	CFBamMinorVersionTableObj::~CFBamMinorVersionTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByMajorVerIdx != NULL ) {
			delete indexByMajorVerIdx;
			indexByMajorVerIdx = NULL;
		}
		if( indexByNameIdx != NULL ) {
			delete indexByNameIdx;
			indexByNameIdx = NULL;
		}
		if( members != NULL ) {
			cfint::ICFIntMinorVersionObj* curMember;
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

	cfint::ICFIntSchemaObj* CFBamMinorVersionTableObj::getSchema() {
		return( schema );
	}

	void CFBamMinorVersionTableObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamMinorVersionTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamMinorVersionTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamMinorVersionTableObj::getObjQualifyingClassCode() {
		return( &cfsec::CFSecTenantBuff::CLASS_CODE );
	}


	void CFBamMinorVersionTableObj::minimizeMemory() {
		if( allMinorVersion != NULL ) {
			allMinorVersion->clear();
			delete allMinorVersion;
			allMinorVersion = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfint::CFIntMinorVersionByTenantIdxKey,
				std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfint::CFIntMinorVersionByTenantIdxKey,
				std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* curByTenantIdx = NULL;
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
		if( indexByMajorVerIdx != NULL ) {
			std::map< cfint::CFIntMinorVersionByMajorVerIdxKey,
				std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* >::iterator iterByMajorVerIdx = indexByMajorVerIdx->begin();
			std::map< cfint::CFIntMinorVersionByMajorVerIdxKey,
				std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* >::iterator endByMajorVerIdx = indexByMajorVerIdx->end();
			std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* curByMajorVerIdx = NULL;
			while( iterByMajorVerIdx != endByMajorVerIdx ) {
				curByMajorVerIdx = iterByMajorVerIdx->second;
				if( curByMajorVerIdx != NULL ) {
					curByMajorVerIdx->clear();
					delete curByMajorVerIdx;
					curByMajorVerIdx = NULL;
					iterByMajorVerIdx->second = NULL;
				}
				iterByMajorVerIdx ++;
			}
			indexByMajorVerIdx->clear();
		}
		if( indexByNameIdx != NULL ) {
			indexByNameIdx->clear();
		}
		if( members != NULL ) {
			cfint::ICFIntMinorVersionObj* cur = NULL;
			cfint::ICFIntMinorVersionEditObj* edit = NULL;
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

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::newInstance() {
		cfint::ICFIntMinorVersionObj* inst = dynamic_cast<cfint::ICFIntMinorVersionObj*>( new CFBamMinorVersionObj( schema ) );
		return( inst );
	}

	cfint::ICFIntMinorVersionEditObj* CFBamMinorVersionTableObj::newEditInstance( cfint::ICFIntMinorVersionObj* orig ) {
		cfint::ICFIntMinorVersionEditObj* edit = dynamic_cast<cfint::ICFIntMinorVersionEditObj*>( new CFBamMinorVersionEditObj( orig ));
		return( edit );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::realizeMinorVersion( cfint::ICFIntMinorVersionObj* Obj ) {
		static const std::string S_ProcName( "realizeMinorVersion" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfint::ICFIntMinorVersionObj* obj = Obj;
		cfint::ICFIntMinorVersionObj* existingObj = NULL;
		cfint::CFIntMinorVersionPKey* pkey = obj->getPKey();
		cfint::ICFIntMinorVersionObj* keepObj = NULL;
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
				cfint::CFIntMinorVersionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByMajorVerIdx != NULL ) {
				cfint::CFIntMinorVersionByMajorVerIdxKey keyMajorVerIdx;
				keyMajorVerIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyMajorVerIdx.setRequiredMajorVersionId( keepObj->getRequiredMajorVersionId() );
				auto searchMajorVerIdx = indexByMajorVerIdx->find( keyMajorVerIdx );
				if( searchMajorVerIdx != indexByMajorVerIdx->end() ) {
					std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* mapMajorVerIdx = searchMajorVerIdx->second;
					if( mapMajorVerIdx != NULL ) {
						auto removalProbe = mapMajorVerIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapMajorVerIdx->end() ) {
							mapMajorVerIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				cfint::CFIntMinorVersionByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyNameIdx.setRequiredMajorVersionId( keepObj->getRequiredMajorVersionId() );
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfint::CFIntMinorVersionBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfint::ICFIntMinorVersionObj* aTenantIdxObj =
					dynamic_cast<cfint::ICFIntMinorVersionObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfint::CFIntMinorVersionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByMajorVerIdx != NULL ) {
				static const std::string S_AMajorVerIdxObj( "aMajorVerIdxObj" );
				cfint::ICFIntMinorVersionObj* aMajorVerIdxObj =
					dynamic_cast<cfint::ICFIntMinorVersionObj*>( keepObj );
				if( aMajorVerIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AMajorVerIdxObj );
				}
				cfint::CFIntMinorVersionByMajorVerIdxKey keyMajorVerIdx;
				keyMajorVerIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyMajorVerIdx.setRequiredMajorVersionId( keepObj->getRequiredMajorVersionId() );
				auto searchIndexByMajorVerIdx = indexByMajorVerIdx->find( keyMajorVerIdx );
				if( searchIndexByMajorVerIdx != indexByMajorVerIdx->end() ) {
					std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* mapMajorVerIdx = searchIndexByMajorVerIdx->second;
					if( mapMajorVerIdx != NULL ) {
						mapMajorVerIdx->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(keepObj->getPKey()), aMajorVerIdxObj ) );
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfint::ICFIntMinorVersionObj* aNameIdxObj =
					dynamic_cast<cfint::ICFIntMinorVersionObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfint::CFIntMinorVersionByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyNameIdx.setRequiredMajorVersionId( keepObj->getRequiredMajorVersionId() );
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfint::CFIntMinorVersionByNameIdxKey, cfint::ICFIntMinorVersionObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( allMinorVersion != NULL ) {
				allMinorVersion->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfint::ICFIntMinorVersionObj* aTenantIdxObj =
					dynamic_cast<cfint::ICFIntMinorVersionObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfint::CFIntMinorVersionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByMajorVerIdx != NULL ) {
				static const std::string S_AMajorVerIdxObj( "aMajorVerIdxObj" );
				cfint::ICFIntMinorVersionObj* aMajorVerIdxObj =
					dynamic_cast<cfint::ICFIntMinorVersionObj*>( keepObj );
				if( aMajorVerIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AMajorVerIdxObj );
				}
				cfint::CFIntMinorVersionByMajorVerIdxKey keyMajorVerIdx;
				keyMajorVerIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyMajorVerIdx.setRequiredMajorVersionId( keepObj->getRequiredMajorVersionId() );
				auto searchIndexByMajorVerIdx = indexByMajorVerIdx->find( keyMajorVerIdx );
				if( searchIndexByMajorVerIdx != indexByMajorVerIdx->end() ) {
					std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* mapMajorVerIdx = searchIndexByMajorVerIdx->second;
					if( mapMajorVerIdx != NULL ) {
						mapMajorVerIdx->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(keepObj->getPKey()), aMajorVerIdxObj ) );
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfint::ICFIntMinorVersionObj* aNameIdxObj =
					dynamic_cast<cfint::ICFIntMinorVersionObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfint::CFIntMinorVersionByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyNameIdx.setRequiredMajorVersionId( keepObj->getRequiredMajorVersionId() );
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfint::CFIntMinorVersionByNameIdxKey, cfint::ICFIntMinorVersionObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( allMinorVersion != NULL ) {
				allMinorVersion->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamMinorVersionTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfint::ICFIntMinorVersionObj*> list;
		cfint::ICFIntMinorVersionObj* existingObj = readCachedMinorVersionByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfint::ICFIntMinorVersionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->reallyDeepDisposeMinorVersion( dynamic_cast<cfint::ICFIntMinorVersionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamMinorVersionTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfint::ICFIntMinorVersionObj*> list;
		std::vector<cfint::ICFIntMinorVersionObj*> matchesFound = readCachedMinorVersionByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfint::ICFIntMinorVersionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->reallyDeepDisposeMinorVersion( dynamic_cast<cfint::ICFIntMinorVersionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamMinorVersionTableObj::deepDisposeByMajorVerIdx( const int64_t TenantId,
			const int64_t MajorVersionId ) {
		static const std::string S_ProcName( "deepDisposeByMajorVerIdx" );
		std::vector<cfint::ICFIntMinorVersionObj*> list;
		std::vector<cfint::ICFIntMinorVersionObj*> matchesFound = readCachedMinorVersionByMajorVerIdx( TenantId,
				MajorVersionId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfint::ICFIntMinorVersionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->reallyDeepDisposeMinorVersion( dynamic_cast<cfint::ICFIntMinorVersionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamMinorVersionTableObj::deepDisposeByNameIdx( const int64_t TenantId,
			const int64_t MajorVersionId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByNameIdx" );
		std::vector<cfint::ICFIntMinorVersionObj*> list;
		cfint::ICFIntMinorVersionObj* existingObj = readCachedMinorVersionByNameIdx( TenantId,
				MajorVersionId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfint::ICFIntMinorVersionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->reallyDeepDisposeMinorVersion( dynamic_cast<cfint::ICFIntMinorVersionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamMinorVersionTableObj::reallyDeepDisposeMinorVersion( cfint::ICFIntMinorVersionObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeMinorVersion" );

		if( Obj == NULL ) {
			return;
		}

		cfint::ICFIntMinorVersionObj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->deepDisposeByMinorVersionIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->reallyDetachFromIndexesMinorVersion( dynamic_cast<cfint::ICFIntMinorVersionObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::createMinorVersion( cfint::ICFIntMinorVersionEditObj* Obj ) {
		static const std::string S_ProcName( "createMinorVersion" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntMinorVersionObj* obj = dynamic_cast<cfint::ICFIntMinorVersionObj*>( Obj->getOrig() );
		try {
			cfint::CFIntMinorVersionBuff* buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->createMinorVersion(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfint::CFIntMinorVersionBuff*>( cloneable ) );
			obj = dynamic_cast<cfint::ICFIntMinorVersionObj*>( obj->realize() );
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

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::readMinorVersion( cfint::CFIntMinorVersionPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readMinorVersion" );
		cfint::ICFIntMinorVersionObj* obj = NULL;
		cfint::ICFIntMinorVersionObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntMinorVersionBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfint::ICFIntMinorVersionObj*>( obj->realize() );
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

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::lockMinorVersion( cfint::CFIntMinorVersionPKey* pkey ) {
		static const std::string S_ProcName( "lockMinorVersion" );
		cfint::ICFIntMinorVersionObj* locked = NULL;
		cfint::CFIntMinorVersionBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfint::ICFIntMinorVersionObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfint::ICFIntMinorVersionObj*> CFBamMinorVersionTableObj::readAllMinorVersion( bool forceRead ) {
		static const std::string S_ProcName( "readAllMinorVersion" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntMinorVersionObj* realized = NULL;
		if( forceRead || ( allMinorVersion == NULL ) ) {
			std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* map = new std::map<cfint::CFIntMinorVersionPKey,cfint::ICFIntMinorVersionObj*>();
			allMinorVersion = map;
			std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->readAllDerived( schema->getAuthorization() );
			cfint::CFIntMinorVersionBuff* buff = NULL;
			cfint::ICFIntMinorVersionObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfint::ICFIntMinorVersionObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allMinorVersion->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allMinorVersion->size();
		std::vector<cfint::ICFIntMinorVersionObj*> arr;
		auto valIter = allMinorVersion->begin();
		size_t idx = 0;
		while( valIter != allMinorVersion->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::readMinorVersionByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readMinorVersionByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntMinorVersionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfint::ICFIntMinorVersionObj* obj = readMinorVersion( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfint::ICFIntMinorVersionObj*> CFBamMinorVersionTableObj::readMinorVersionByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readMinorVersionByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntMinorVersionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* dict;
		std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfint::CFIntMinorVersionByTenantIdxKey,
				std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>*>();
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
			dict = new std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>();
			cfint::ICFIntMinorVersionObj* obj;
			std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfint::CFIntMinorVersionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfint::ICFIntMinorVersionObj* realized = dynamic_cast<cfint::ICFIntMinorVersionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfint::CFIntMinorVersionByTenantIdxKey,
				std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfint::ICFIntMinorVersionObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfint::ICFIntMinorVersionObj*> CFBamMinorVersionTableObj::readMinorVersionByMajorVerIdx( const int64_t TenantId,
			const int64_t MajorVersionId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readMinorVersionByMajorVerIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntMinorVersionByMajorVerIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMajorVersionId( MajorVersionId );
		std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* dict;
		std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* oldDict;
		if( indexByMajorVerIdx == NULL ) {
			indexByMajorVerIdx = new std::map< cfint::CFIntMinorVersionByMajorVerIdxKey,
				std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>*>();
		}
		auto searchIndexByMajorVerIdx = indexByMajorVerIdx->find( key );
		if( searchIndexByMajorVerIdx != indexByMajorVerIdx->end() ) {
			oldDict = searchIndexByMajorVerIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>();
			cfint::ICFIntMinorVersionObj* obj;
			std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->readDerivedByMajorVerIdx( schema->getAuthorization(),
				TenantId,
				MajorVersionId );
			cfint::CFIntMinorVersionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfint::ICFIntMinorVersionObj* realized = dynamic_cast<cfint::ICFIntMinorVersionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByMajorVerIdx->erase( searchIndexByMajorVerIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByMajorVerIdx->insert( std::map< cfint::CFIntMinorVersionByMajorVerIdxKey,
				std::map< cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfint::ICFIntMinorVersionObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::readMinorVersionByNameIdx( const int64_t TenantId,
			const int64_t MajorVersionId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readMinorVersionByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntMinorVersionByNameIdxKey,
				cfint::ICFIntMinorVersionObj*>();
		}
		cfint::CFIntMinorVersionByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMajorVersionId( MajorVersionId );
		key.setRequiredName( Name );
		cfint::ICFIntMinorVersionObj* obj = NULL;
		cfint::ICFIntMinorVersionObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntMinorVersionBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->readDerivedByNameIdx( schema->getAuthorization(),
				TenantId,
				MajorVersionId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfint::ICFIntMinorVersionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfint::CFIntMinorVersionByNameIdxKey, cfint::ICFIntMinorVersionObj*>::value_type( key, dynamic_cast<cfint::ICFIntMinorVersionObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::readMinorVersionByLookupNameIdx( const int64_t TenantId,
			const int64_t MajorVersionId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readMinorVersionByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntMinorVersionByNameIdxKey,
				cfint::ICFIntMinorVersionObj*>();
		}
		cfint::CFIntMinorVersionByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMajorVersionId( MajorVersionId );
		key.setRequiredName( Name );
		cfint::ICFIntMinorVersionObj* obj = NULL;
		cfint::ICFIntMinorVersionObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				obj = searchIndexByNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntMinorVersionBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->readDerivedByLookupNameIdx( schema->getAuthorization(),
				TenantId,
				MajorVersionId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfint::ICFIntMinorVersionObj*>( dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfint::ICFIntMinorVersionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfint::CFIntMinorVersionByNameIdxKey, cfint::ICFIntMinorVersionObj*>::value_type( key, dynamic_cast<cfint::ICFIntMinorVersionObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::readCachedMinorVersion( cfint::CFIntMinorVersionPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readMinorVersion" );
		cfint::ICFIntMinorVersionObj* obj = NULL;
		cfint::ICFIntMinorVersionObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::readCachedMinorVersionByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedMinorVersionByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntMinorVersionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfint::ICFIntMinorVersionObj* obj = readCachedMinorVersion( &pkey );
		return( obj );
	}

	std::vector<cfint::ICFIntMinorVersionObj*> CFBamMinorVersionTableObj::readCachedMinorVersionByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedMinorVersionByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfint::ICFIntMinorVersionObj*> arr;
		cfint::CFIntMinorVersionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfint::ICFIntMinorVersionObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfint::ICFIntMinorVersionObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntMinorVersionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfint::ICFIntMinorVersionObj*> CFBamMinorVersionTableObj::readCachedMinorVersionByMajorVerIdx( const int64_t TenantId,
			const int64_t MajorVersionId )
	{
		static const std::string S_ProcName( "readCachedMinorVersionByMajorVerIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfint::ICFIntMinorVersionObj*> arr;
		cfint::CFIntMinorVersionByMajorVerIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMajorVersionId( MajorVersionId );
		std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* dict;
		if( indexByMajorVerIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByMajorVerIdx = indexByMajorVerIdx->find( key );
		if( searchIndexByMajorVerIdx != indexByMajorVerIdx->end() ) {
			dict = searchIndexByMajorVerIdx->second;
			size_t len = dict->size();
			std::vector<cfint::ICFIntMinorVersionObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfint::ICFIntMinorVersionObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntMinorVersionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::readCachedMinorVersionByNameIdx( const int64_t TenantId,
			const int64_t MajorVersionId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedMinorVersionByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntMinorVersionByNameIdxKey,
				cfint::ICFIntMinorVersionObj*>();
		}
		cfint::CFIntMinorVersionByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMajorVersionId( MajorVersionId );
		key.setRequiredName( Name );
		cfint::ICFIntMinorVersionObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntMinorVersionBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::readCachedMinorVersionByLookupNameIdx( const int64_t TenantId,
			const int64_t MajorVersionId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedMinorVersionByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntMinorVersionByNameIdxKey,
				cfint::ICFIntMinorVersionObj*>();
		}
		cfint::CFIntMinorVersionByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMajorVersionId( MajorVersionId );
		key.setRequiredName( Name );
		cfint::ICFIntMinorVersionObj* obj = NULL;
		cfint::ICFIntMinorVersionObj* realized = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntMinorVersionBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionTableObj::updateMinorVersion( cfint::ICFIntMinorVersionEditObj* Obj ) {
		static const std::string S_ProcName( "updateMinorVersion" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntMinorVersionObj* obj = dynamic_cast<cfint::ICFIntMinorVersionObj*>( Obj->getOrig() );
		try {
			cfint::CFIntMinorVersionBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->updateMinorVersion( schema->getAuthorization(),
				dynamic_cast<cfint::CFIntMinorVersionBuff*>( Obj->getMinorVersionBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfint::ICFIntMinorVersionObj*>( dynamic_cast<cfbam::CFBamMinorVersionTableObj*>( schema->getMinorVersionTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfint::ICFIntMinorVersionObj*>( obj->realize() );
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

	void CFBamMinorVersionTableObj::deleteMinorVersion( cfint::ICFIntMinorVersionEditObj* Obj ) {
		cfint::ICFIntMinorVersionObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->deleteMinorVersion( schema->getAuthorization(),
			obj->getMinorVersionBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamMinorVersionTableObj::deleteMinorVersionByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfint::CFIntMinorVersionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfint::ICFIntMinorVersionObj* obj = readMinorVersion( &pkey, true );
		if( obj != NULL ) {
			cfint::ICFIntMinorVersionEditObj* editObj = dynamic_cast<cfint::ICFIntMinorVersionEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfint::ICFIntMinorVersionEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamMinorVersionTableObj::deleteMinorVersionByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfint::ICFIntSchema*>( schema->getBackingStore() )->getTableMinorVersion()->deleteMinorVersionByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamMinorVersionTableObj::deleteMinorVersionByMajorVerIdx( const int64_t TenantId,
			const int64_t MajorVersionId )
	{
		dynamic_cast<cfint::ICFIntSchema*>( schema->getBackingStore() )->getTableMinorVersion()->deleteMinorVersionByMajorVerIdx( schema->getAuthorization(),
				TenantId,
				MajorVersionId );
		deepDisposeByMajorVerIdx( TenantId,
			MajorVersionId );
	}

	void CFBamMinorVersionTableObj::deleteMinorVersionByNameIdx( const int64_t TenantId,
			const int64_t MajorVersionId,
			const std::string& Name )
	{
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntMinorVersionByNameIdxKey,
				cfint::ICFIntMinorVersionObj*>();
		}
		cfint::CFIntMinorVersionByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMajorVersionId( MajorVersionId );
		key.setRequiredName( Name );
		cfint::ICFIntMinorVersionObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->deleteMinorVersionByNameIdx( schema->getAuthorization(),
				TenantId,
				MajorVersionId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->deleteMinorVersionByNameIdx( schema->getAuthorization(),
				TenantId,
				MajorVersionId,
				Name );
		}
		deepDisposeByNameIdx( TenantId,
			MajorVersionId,
			Name );
	}

	void CFBamMinorVersionTableObj::reallyDetachFromIndexesMinorVersion( cfint::ICFIntMinorVersionObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesMinorVersion" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfint::ICFIntMinorVersionObj* obj = Obj;
		cfint::CFIntMinorVersionPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfint::ICFIntMinorVersionObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfint::CFIntMinorVersionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByMajorVerIdx != NULL ) {
				cfint::CFIntMinorVersionByMajorVerIdxKey keyMajorVerIdx;
				keyMajorVerIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyMajorVerIdx.setRequiredMajorVersionId( obj->getRequiredMajorVersionId() );
				auto searchMajorVerIdx = indexByMajorVerIdx->find( keyMajorVerIdx );
				if( searchMajorVerIdx != indexByMajorVerIdx->end() ) {
					std::map<cfint::CFIntMinorVersionPKey, cfint::ICFIntMinorVersionObj*>* mapMajorVerIdx = searchMajorVerIdx->second;
					if( mapMajorVerIdx != NULL ) {
						auto removalProbe = mapMajorVerIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapMajorVerIdx->end() ) {
							mapMajorVerIdx->erase( removalProbe );
							if( mapMajorVerIdx->empty() ) {
								delete mapMajorVerIdx;
								mapMajorVerIdx = NULL;
								indexByMajorVerIdx->erase( searchMajorVerIdx );
							}
						}
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				cfint::CFIntMinorVersionByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyNameIdx.setRequiredMajorVersionId( obj->getRequiredMajorVersionId() );
				keyNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
