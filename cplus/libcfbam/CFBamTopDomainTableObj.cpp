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

	const std::string CFBamTopDomainTableObj::CLASS_NAME( "CFBamTopDomainTableObj" );
	const std::string CFBamTopDomainTableObj::TABLE_NAME( "TopDomain" );
	const std::string CFBamTopDomainTableObj::TABLE_DBNAME( "tdomdef" );

	CFBamTopDomainTableObj::CFBamTopDomainTableObj() {
		schema = NULL;
		members = new std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>();
		allTopDomain = NULL;
		indexByTenantIdx = new std::map< cfint::CFIntTopDomainByTenantIdxKey,
			std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>*>();
		indexByTldIdx = new std::map< cfint::CFIntTopDomainByTldIdxKey,
			std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>*>();
		indexByNameIdx = new std::map< cfint::CFIntTopDomainByNameIdxKey,
			cfint::ICFIntTopDomainObj*>();
	}

	CFBamTopDomainTableObj::CFBamTopDomainTableObj( cfint::ICFIntSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>();
		allTopDomain = NULL;
		indexByTenantIdx = new std::map< cfint::CFIntTopDomainByTenantIdxKey,
			std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>*>();
		indexByTldIdx = new std::map< cfint::CFIntTopDomainByTldIdxKey,
			std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>*>();
		indexByNameIdx = new std::map< cfint::CFIntTopDomainByNameIdxKey,
			cfint::ICFIntTopDomainObj*>();
	}

	CFBamTopDomainTableObj::~CFBamTopDomainTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByTldIdx != NULL ) {
			delete indexByTldIdx;
			indexByTldIdx = NULL;
		}
		if( indexByNameIdx != NULL ) {
			delete indexByNameIdx;
			indexByNameIdx = NULL;
		}
		if( members != NULL ) {
			cfint::ICFIntTopDomainObj* curMember;
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

	cfint::ICFIntSchemaObj* CFBamTopDomainTableObj::getSchema() {
		return( schema );
	}

	void CFBamTopDomainTableObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamTopDomainTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamTopDomainTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamTopDomainTableObj::getObjQualifyingClassCode() {
		return( &cfsec::CFSecTenantBuff::CLASS_CODE );
	}


	void CFBamTopDomainTableObj::minimizeMemory() {
		if( allTopDomain != NULL ) {
			allTopDomain->clear();
			delete allTopDomain;
			allTopDomain = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfint::CFIntTopDomainByTenantIdxKey,
				std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfint::CFIntTopDomainByTenantIdxKey,
				std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* curByTenantIdx = NULL;
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
		if( indexByTldIdx != NULL ) {
			std::map< cfint::CFIntTopDomainByTldIdxKey,
				std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* >::iterator iterByTldIdx = indexByTldIdx->begin();
			std::map< cfint::CFIntTopDomainByTldIdxKey,
				std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* >::iterator endByTldIdx = indexByTldIdx->end();
			std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* curByTldIdx = NULL;
			while( iterByTldIdx != endByTldIdx ) {
				curByTldIdx = iterByTldIdx->second;
				if( curByTldIdx != NULL ) {
					curByTldIdx->clear();
					delete curByTldIdx;
					curByTldIdx = NULL;
					iterByTldIdx->second = NULL;
				}
				iterByTldIdx ++;
			}
			indexByTldIdx->clear();
		}
		if( indexByNameIdx != NULL ) {
			indexByNameIdx->clear();
		}
		if( members != NULL ) {
			cfint::ICFIntTopDomainObj* cur = NULL;
			cfint::ICFIntTopDomainEditObj* edit = NULL;
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

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::newInstance() {
		cfint::ICFIntTopDomainObj* inst = dynamic_cast<cfint::ICFIntTopDomainObj*>( new CFBamTopDomainObj( schema ) );
		return( inst );
	}

	cfint::ICFIntTopDomainEditObj* CFBamTopDomainTableObj::newEditInstance( cfint::ICFIntTopDomainObj* orig ) {
		cfint::ICFIntTopDomainEditObj* edit = dynamic_cast<cfint::ICFIntTopDomainEditObj*>( new CFBamTopDomainEditObj( orig ));
		return( edit );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::realizeTopDomain( cfint::ICFIntTopDomainObj* Obj ) {
		static const std::string S_ProcName( "realizeTopDomain" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfint::ICFIntTopDomainObj* obj = Obj;
		cfint::ICFIntTopDomainObj* existingObj = NULL;
		cfint::CFIntTopDomainPKey* pkey = obj->getPKey();
		cfint::ICFIntTopDomainObj* keepObj = NULL;
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
				cfint::CFIntTopDomainByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByTldIdx != NULL ) {
				cfint::CFIntTopDomainByTldIdxKey keyTldIdx;
				keyTldIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyTldIdx.setRequiredTldId( keepObj->getRequiredTldId() );
				auto searchTldIdx = indexByTldIdx->find( keyTldIdx );
				if( searchTldIdx != indexByTldIdx->end() ) {
					std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* mapTldIdx = searchTldIdx->second;
					if( mapTldIdx != NULL ) {
						auto removalProbe = mapTldIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTldIdx->end() ) {
							mapTldIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				cfint::CFIntTopDomainByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyNameIdx.setRequiredTldId( keepObj->getRequiredTldId() );
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfint::CFIntTopDomainBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfint::ICFIntTopDomainObj* aTenantIdxObj =
					dynamic_cast<cfint::ICFIntTopDomainObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfint::CFIntTopDomainByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByTldIdx != NULL ) {
				static const std::string S_ATldIdxObj( "aTldIdxObj" );
				cfint::ICFIntTopDomainObj* aTldIdxObj =
					dynamic_cast<cfint::ICFIntTopDomainObj*>( keepObj );
				if( aTldIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATldIdxObj );
				}
				cfint::CFIntTopDomainByTldIdxKey keyTldIdx;
				keyTldIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyTldIdx.setRequiredTldId( keepObj->getRequiredTldId() );
				auto searchIndexByTldIdx = indexByTldIdx->find( keyTldIdx );
				if( searchIndexByTldIdx != indexByTldIdx->end() ) {
					std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* mapTldIdx = searchIndexByTldIdx->second;
					if( mapTldIdx != NULL ) {
						mapTldIdx->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(keepObj->getPKey()), aTldIdxObj ) );
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfint::ICFIntTopDomainObj* aNameIdxObj =
					dynamic_cast<cfint::ICFIntTopDomainObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfint::CFIntTopDomainByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyNameIdx.setRequiredTldId( keepObj->getRequiredTldId() );
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfint::CFIntTopDomainByNameIdxKey, cfint::ICFIntTopDomainObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( allTopDomain != NULL ) {
				allTopDomain->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfint::ICFIntTopDomainObj* aTenantIdxObj =
					dynamic_cast<cfint::ICFIntTopDomainObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfint::CFIntTopDomainByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByTldIdx != NULL ) {
				static const std::string S_ATldIdxObj( "aTldIdxObj" );
				cfint::ICFIntTopDomainObj* aTldIdxObj =
					dynamic_cast<cfint::ICFIntTopDomainObj*>( keepObj );
				if( aTldIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATldIdxObj );
				}
				cfint::CFIntTopDomainByTldIdxKey keyTldIdx;
				keyTldIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyTldIdx.setRequiredTldId( keepObj->getRequiredTldId() );
				auto searchIndexByTldIdx = indexByTldIdx->find( keyTldIdx );
				if( searchIndexByTldIdx != indexByTldIdx->end() ) {
					std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* mapTldIdx = searchIndexByTldIdx->second;
					if( mapTldIdx != NULL ) {
						mapTldIdx->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(keepObj->getPKey()), aTldIdxObj ) );
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfint::ICFIntTopDomainObj* aNameIdxObj =
					dynamic_cast<cfint::ICFIntTopDomainObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfint::CFIntTopDomainByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyNameIdx.setRequiredTldId( keepObj->getRequiredTldId() );
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfint::CFIntTopDomainByNameIdxKey, cfint::ICFIntTopDomainObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( allTopDomain != NULL ) {
				allTopDomain->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamTopDomainTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfint::ICFIntTopDomainObj*> list;
		cfint::ICFIntTopDomainObj* existingObj = readCachedTopDomainByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfint::ICFIntTopDomainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->reallyDeepDisposeTopDomain( dynamic_cast<cfint::ICFIntTopDomainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTopDomainTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfint::ICFIntTopDomainObj*> list;
		std::vector<cfint::ICFIntTopDomainObj*> matchesFound = readCachedTopDomainByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfint::ICFIntTopDomainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->reallyDeepDisposeTopDomain( dynamic_cast<cfint::ICFIntTopDomainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTopDomainTableObj::deepDisposeByTldIdx( const int64_t TenantId,
			const int64_t TldId ) {
		static const std::string S_ProcName( "deepDisposeByTldIdx" );
		std::vector<cfint::ICFIntTopDomainObj*> list;
		std::vector<cfint::ICFIntTopDomainObj*> matchesFound = readCachedTopDomainByTldIdx( TenantId,
				TldId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfint::ICFIntTopDomainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->reallyDeepDisposeTopDomain( dynamic_cast<cfint::ICFIntTopDomainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTopDomainTableObj::deepDisposeByNameIdx( const int64_t TenantId,
			const int64_t TldId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByNameIdx" );
		std::vector<cfint::ICFIntTopDomainObj*> list;
		cfint::ICFIntTopDomainObj* existingObj = readCachedTopDomainByNameIdx( TenantId,
				TldId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfint::ICFIntTopDomainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->reallyDeepDisposeTopDomain( dynamic_cast<cfint::ICFIntTopDomainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTopDomainTableObj::reallyDeepDisposeTopDomain( cfint::ICFIntTopDomainObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeTopDomain" );

		if( Obj == NULL ) {
			return;
		}

		cfint::ICFIntTopDomainObj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamTopProjectTableObj*>( schema->getTopProjectTableObj() )->deepDisposeByTopDomainIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		dynamic_cast<cfbam::CFBamLicenseTableObj*>( schema->getLicenseTableObj() )->deepDisposeByDomainIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->reallyDetachFromIndexesTopDomain( dynamic_cast<cfint::ICFIntTopDomainObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::createTopDomain( cfint::ICFIntTopDomainEditObj* Obj ) {
		static const std::string S_ProcName( "createTopDomain" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntTopDomainObj* obj = dynamic_cast<cfint::ICFIntTopDomainObj*>( Obj->getOrig() );
		try {
			cfint::CFIntTopDomainBuff* buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->createTopDomain(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfint::CFIntTopDomainBuff*>( cloneable ) );
			obj = dynamic_cast<cfint::ICFIntTopDomainObj*>( obj->realize() );
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

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::readTopDomain( cfint::CFIntTopDomainPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTopDomain" );
		cfint::ICFIntTopDomainObj* obj = NULL;
		cfint::ICFIntTopDomainObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntTopDomainBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfint::ICFIntTopDomainObj*>( obj->realize() );
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

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::lockTopDomain( cfint::CFIntTopDomainPKey* pkey ) {
		static const std::string S_ProcName( "lockTopDomain" );
		cfint::ICFIntTopDomainObj* locked = NULL;
		cfint::CFIntTopDomainBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfint::ICFIntTopDomainObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfint::ICFIntTopDomainObj*> CFBamTopDomainTableObj::readAllTopDomain( bool forceRead ) {
		static const std::string S_ProcName( "readAllTopDomain" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntTopDomainObj* realized = NULL;
		if( forceRead || ( allTopDomain == NULL ) ) {
			std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* map = new std::map<cfint::CFIntTopDomainPKey,cfint::ICFIntTopDomainObj*>();
			allTopDomain = map;
			std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->readAllDerived( schema->getAuthorization() );
			cfint::CFIntTopDomainBuff* buff = NULL;
			cfint::ICFIntTopDomainObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfint::ICFIntTopDomainObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allTopDomain->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allTopDomain->size();
		std::vector<cfint::ICFIntTopDomainObj*> arr;
		auto valIter = allTopDomain->begin();
		size_t idx = 0;
		while( valIter != allTopDomain->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::readTopDomainByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readTopDomainByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntTopDomainPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfint::ICFIntTopDomainObj* obj = readTopDomain( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfint::ICFIntTopDomainObj*> CFBamTopDomainTableObj::readTopDomainByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTopDomainByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntTopDomainByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* dict;
		std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfint::CFIntTopDomainByTenantIdxKey,
				std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>*>();
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
			dict = new std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>();
			cfint::ICFIntTopDomainObj* obj;
			std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfint::CFIntTopDomainBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfint::ICFIntTopDomainObj* realized = dynamic_cast<cfint::ICFIntTopDomainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfint::CFIntTopDomainByTenantIdxKey,
				std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfint::ICFIntTopDomainObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfint::ICFIntTopDomainObj*> CFBamTopDomainTableObj::readTopDomainByTldIdx( const int64_t TenantId,
			const int64_t TldId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTopDomainByTldIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntTopDomainByTldIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTldId( TldId );
		std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* dict;
		std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* oldDict;
		if( indexByTldIdx == NULL ) {
			indexByTldIdx = new std::map< cfint::CFIntTopDomainByTldIdxKey,
				std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>*>();
		}
		auto searchIndexByTldIdx = indexByTldIdx->find( key );
		if( searchIndexByTldIdx != indexByTldIdx->end() ) {
			oldDict = searchIndexByTldIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>();
			cfint::ICFIntTopDomainObj* obj;
			std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->readDerivedByTldIdx( schema->getAuthorization(),
				TenantId,
				TldId );
			cfint::CFIntTopDomainBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfint::ICFIntTopDomainObj* realized = dynamic_cast<cfint::ICFIntTopDomainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTldIdx->erase( searchIndexByTldIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTldIdx->insert( std::map< cfint::CFIntTopDomainByTldIdxKey,
				std::map< cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfint::ICFIntTopDomainObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::readTopDomainByNameIdx( const int64_t TenantId,
			const int64_t TldId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readTopDomainByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntTopDomainByNameIdxKey,
				cfint::ICFIntTopDomainObj*>();
		}
		cfint::CFIntTopDomainByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTldId( TldId );
		key.setRequiredName( Name );
		cfint::ICFIntTopDomainObj* obj = NULL;
		cfint::ICFIntTopDomainObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntTopDomainBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->readDerivedByNameIdx( schema->getAuthorization(),
				TenantId,
				TldId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfint::ICFIntTopDomainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfint::CFIntTopDomainByNameIdxKey, cfint::ICFIntTopDomainObj*>::value_type( key, dynamic_cast<cfint::ICFIntTopDomainObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::readTopDomainByLookupNameIdx( const int64_t TenantId,
			const int64_t TldId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readTopDomainByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntTopDomainByNameIdxKey,
				cfint::ICFIntTopDomainObj*>();
		}
		cfint::CFIntTopDomainByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTldId( TldId );
		key.setRequiredName( Name );
		cfint::ICFIntTopDomainObj* obj = NULL;
		cfint::ICFIntTopDomainObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				obj = searchIndexByNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntTopDomainBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->readDerivedByLookupNameIdx( schema->getAuthorization(),
				TenantId,
				TldId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfint::ICFIntTopDomainObj*>( dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfint::ICFIntTopDomainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfint::CFIntTopDomainByNameIdxKey, cfint::ICFIntTopDomainObj*>::value_type( key, dynamic_cast<cfint::ICFIntTopDomainObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::readCachedTopDomain( cfint::CFIntTopDomainPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTopDomain" );
		cfint::ICFIntTopDomainObj* obj = NULL;
		cfint::ICFIntTopDomainObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::readCachedTopDomainByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedTopDomainByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntTopDomainPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfint::ICFIntTopDomainObj* obj = readCachedTopDomain( &pkey );
		return( obj );
	}

	std::vector<cfint::ICFIntTopDomainObj*> CFBamTopDomainTableObj::readCachedTopDomainByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedTopDomainByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfint::ICFIntTopDomainObj*> arr;
		cfint::CFIntTopDomainByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfint::ICFIntTopDomainObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfint::ICFIntTopDomainObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntTopDomainBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfint::ICFIntTopDomainObj*> CFBamTopDomainTableObj::readCachedTopDomainByTldIdx( const int64_t TenantId,
			const int64_t TldId )
	{
		static const std::string S_ProcName( "readCachedTopDomainByTldIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfint::ICFIntTopDomainObj*> arr;
		cfint::CFIntTopDomainByTldIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTldId( TldId );
		std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* dict;
		if( indexByTldIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTldIdx = indexByTldIdx->find( key );
		if( searchIndexByTldIdx != indexByTldIdx->end() ) {
			dict = searchIndexByTldIdx->second;
			size_t len = dict->size();
			std::vector<cfint::ICFIntTopDomainObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfint::ICFIntTopDomainObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntTopDomainBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::readCachedTopDomainByNameIdx( const int64_t TenantId,
			const int64_t TldId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedTopDomainByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntTopDomainByNameIdxKey,
				cfint::ICFIntTopDomainObj*>();
		}
		cfint::CFIntTopDomainByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTldId( TldId );
		key.setRequiredName( Name );
		cfint::ICFIntTopDomainObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntTopDomainBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::readCachedTopDomainByLookupNameIdx( const int64_t TenantId,
			const int64_t TldId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedTopDomainByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntTopDomainByNameIdxKey,
				cfint::ICFIntTopDomainObj*>();
		}
		cfint::CFIntTopDomainByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTldId( TldId );
		key.setRequiredName( Name );
		cfint::ICFIntTopDomainObj* obj = NULL;
		cfint::ICFIntTopDomainObj* realized = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntTopDomainBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainTableObj::updateTopDomain( cfint::ICFIntTopDomainEditObj* Obj ) {
		static const std::string S_ProcName( "updateTopDomain" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntTopDomainObj* obj = dynamic_cast<cfint::ICFIntTopDomainObj*>( Obj->getOrig() );
		try {
			cfint::CFIntTopDomainBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->updateTopDomain( schema->getAuthorization(),
				dynamic_cast<cfint::CFIntTopDomainBuff*>( Obj->getTopDomainBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfint::ICFIntTopDomainObj*>( dynamic_cast<cfbam::CFBamTopDomainTableObj*>( schema->getTopDomainTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfint::ICFIntTopDomainObj*>( obj->realize() );
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

	void CFBamTopDomainTableObj::deleteTopDomain( cfint::ICFIntTopDomainEditObj* Obj ) {
		cfint::ICFIntTopDomainObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->deleteTopDomain( schema->getAuthorization(),
			obj->getTopDomainBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamTopDomainTableObj::deleteTopDomainByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfint::CFIntTopDomainPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfint::ICFIntTopDomainObj* obj = readTopDomain( &pkey, true );
		if( obj != NULL ) {
			cfint::ICFIntTopDomainEditObj* editObj = dynamic_cast<cfint::ICFIntTopDomainEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfint::ICFIntTopDomainEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamTopDomainTableObj::deleteTopDomainByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfint::ICFIntSchema*>( schema->getBackingStore() )->getTableTopDomain()->deleteTopDomainByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamTopDomainTableObj::deleteTopDomainByTldIdx( const int64_t TenantId,
			const int64_t TldId )
	{
		dynamic_cast<cfint::ICFIntSchema*>( schema->getBackingStore() )->getTableTopDomain()->deleteTopDomainByTldIdx( schema->getAuthorization(),
				TenantId,
				TldId );
		deepDisposeByTldIdx( TenantId,
			TldId );
	}

	void CFBamTopDomainTableObj::deleteTopDomainByNameIdx( const int64_t TenantId,
			const int64_t TldId,
			const std::string& Name )
	{
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfint::CFIntTopDomainByNameIdxKey,
				cfint::ICFIntTopDomainObj*>();
		}
		cfint::CFIntTopDomainByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTldId( TldId );
		key.setRequiredName( Name );
		cfint::ICFIntTopDomainObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->deleteTopDomainByNameIdx( schema->getAuthorization(),
				TenantId,
				TldId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->deleteTopDomainByNameIdx( schema->getAuthorization(),
				TenantId,
				TldId,
				Name );
		}
		deepDisposeByNameIdx( TenantId,
			TldId,
			Name );
	}

	void CFBamTopDomainTableObj::reallyDetachFromIndexesTopDomain( cfint::ICFIntTopDomainObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesTopDomain" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfint::ICFIntTopDomainObj* obj = Obj;
		cfint::CFIntTopDomainPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfint::ICFIntTopDomainObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfint::CFIntTopDomainByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByTldIdx != NULL ) {
				cfint::CFIntTopDomainByTldIdxKey keyTldIdx;
				keyTldIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyTldIdx.setRequiredTldId( obj->getRequiredTldId() );
				auto searchTldIdx = indexByTldIdx->find( keyTldIdx );
				if( searchTldIdx != indexByTldIdx->end() ) {
					std::map<cfint::CFIntTopDomainPKey, cfint::ICFIntTopDomainObj*>* mapTldIdx = searchTldIdx->second;
					if( mapTldIdx != NULL ) {
						auto removalProbe = mapTldIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapTldIdx->end() ) {
							mapTldIdx->erase( removalProbe );
							if( mapTldIdx->empty() ) {
								delete mapTldIdx;
								mapTldIdx = NULL;
								indexByTldIdx->erase( searchTldIdx );
							}
						}
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				cfint::CFIntTopDomainByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyNameIdx.setRequiredTldId( obj->getRequiredTldId() );
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
