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

	const std::string CFBamURLProtocolTableObj::CLASS_NAME( "CFBamURLProtocolTableObj" );
	const std::string CFBamURLProtocolTableObj::TABLE_NAME( "URLProtocol" );
	const std::string CFBamURLProtocolTableObj::TABLE_DBNAME( "URLProto" );

	CFBamURLProtocolTableObj::CFBamURLProtocolTableObj() {
		schema = NULL;
		members = new std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>();
		allURLProtocol = NULL;
		indexByUNameIdx = new std::map< cfint::CFIntURLProtocolByUNameIdxKey,
			cfint::ICFIntURLProtocolObj*>();
		indexByIsSecureIdx = new std::map< cfint::CFIntURLProtocolByIsSecureIdxKey,
			std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>*>();
	}

	CFBamURLProtocolTableObj::CFBamURLProtocolTableObj( cfint::ICFIntSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>();
		allURLProtocol = NULL;
		indexByUNameIdx = new std::map< cfint::CFIntURLProtocolByUNameIdxKey,
			cfint::ICFIntURLProtocolObj*>();
		indexByIsSecureIdx = new std::map< cfint::CFIntURLProtocolByIsSecureIdxKey,
			std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>*>();
	}

	CFBamURLProtocolTableObj::~CFBamURLProtocolTableObj() {
		minimizeMemory();
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexByIsSecureIdx != NULL ) {
			delete indexByIsSecureIdx;
			indexByIsSecureIdx = NULL;
		}
		if( members != NULL ) {
			cfint::ICFIntURLProtocolObj* curMember;
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

	cfint::ICFIntSchemaObj* CFBamURLProtocolTableObj::getSchema() {
		return( schema );
	}

	void CFBamURLProtocolTableObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamURLProtocolTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamURLProtocolTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamURLProtocolTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFBamURLProtocolTableObj::minimizeMemory() {
		if( allURLProtocol != NULL ) {
			allURLProtocol->clear();
			delete allURLProtocol;
			allURLProtocol = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( indexByIsSecureIdx != NULL ) {
			std::map< cfint::CFIntURLProtocolByIsSecureIdxKey,
				std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* >::iterator iterByIsSecureIdx = indexByIsSecureIdx->begin();
			std::map< cfint::CFIntURLProtocolByIsSecureIdxKey,
				std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* >::iterator endByIsSecureIdx = indexByIsSecureIdx->end();
			std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* curByIsSecureIdx = NULL;
			while( iterByIsSecureIdx != endByIsSecureIdx ) {
				curByIsSecureIdx = iterByIsSecureIdx->second;
				if( curByIsSecureIdx != NULL ) {
					curByIsSecureIdx->clear();
					delete curByIsSecureIdx;
					curByIsSecureIdx = NULL;
					iterByIsSecureIdx->second = NULL;
				}
				iterByIsSecureIdx ++;
			}
			indexByIsSecureIdx->clear();
		}
		if( members != NULL ) {
			cfint::ICFIntURLProtocolObj* cur = NULL;
			cfint::ICFIntURLProtocolEditObj* edit = NULL;
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

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::newInstance() {
		cfint::ICFIntURLProtocolObj* inst = dynamic_cast<cfint::ICFIntURLProtocolObj*>( new CFBamURLProtocolObj( schema ) );
		return( inst );
	}

	cfint::ICFIntURLProtocolEditObj* CFBamURLProtocolTableObj::newEditInstance( cfint::ICFIntURLProtocolObj* orig ) {
		cfint::ICFIntURLProtocolEditObj* edit = dynamic_cast<cfint::ICFIntURLProtocolEditObj*>( new CFBamURLProtocolEditObj( orig ));
		return( edit );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::realizeURLProtocol( cfint::ICFIntURLProtocolObj* Obj ) {
		static const std::string S_ProcName( "realizeURLProtocol" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfint::ICFIntURLProtocolObj* obj = Obj;
		cfint::ICFIntURLProtocolObj* existingObj = NULL;
		cfint::CFIntURLProtocolPKey* pkey = obj->getPKey();
		cfint::ICFIntURLProtocolObj* keepObj = NULL;
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
				cfint::CFIntURLProtocolByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByIsSecureIdx != NULL ) {
				cfint::CFIntURLProtocolByIsSecureIdxKey keyIsSecureIdx;
				keyIsSecureIdx.setRequiredIsSecure( keepObj->getRequiredIsSecure() );
				auto searchIsSecureIdx = indexByIsSecureIdx->find( keyIsSecureIdx );
				if( searchIsSecureIdx != indexByIsSecureIdx->end() ) {
					std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* mapIsSecureIdx = searchIsSecureIdx->second;
					if( mapIsSecureIdx != NULL ) {
						auto removalProbe = mapIsSecureIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapIsSecureIdx->end() ) {
							mapIsSecureIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfint::CFIntURLProtocolBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfint::ICFIntURLProtocolObj* aUNameIdxObj =
					dynamic_cast<cfint::ICFIntURLProtocolObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfint::CFIntURLProtocolByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfint::CFIntURLProtocolByUNameIdxKey, cfint::ICFIntURLProtocolObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByIsSecureIdx != NULL ) {
				static const std::string S_AIsSecureIdxObj( "aIsSecureIdxObj" );
				cfint::ICFIntURLProtocolObj* aIsSecureIdxObj =
					dynamic_cast<cfint::ICFIntURLProtocolObj*>( keepObj );
				if( aIsSecureIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIsSecureIdxObj );
				}
				cfint::CFIntURLProtocolByIsSecureIdxKey keyIsSecureIdx;
				keyIsSecureIdx.setRequiredIsSecure( keepObj->getRequiredIsSecure() );
				auto searchIndexByIsSecureIdx = indexByIsSecureIdx->find( keyIsSecureIdx );
				if( searchIndexByIsSecureIdx != indexByIsSecureIdx->end() ) {
					std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* mapIsSecureIdx = searchIndexByIsSecureIdx->second;
					if( mapIsSecureIdx != NULL ) {
						mapIsSecureIdx->insert( std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj* >::value_type( *(keepObj->getPKey()), aIsSecureIdxObj ) );
					}
				}
			}

			if( allURLProtocol != NULL ) {
				allURLProtocol->insert( std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfint::ICFIntURLProtocolObj* aUNameIdxObj =
					dynamic_cast<cfint::ICFIntURLProtocolObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfint::CFIntURLProtocolByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfint::CFIntURLProtocolByUNameIdxKey, cfint::ICFIntURLProtocolObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByIsSecureIdx != NULL ) {
				static const std::string S_AIsSecureIdxObj( "aIsSecureIdxObj" );
				cfint::ICFIntURLProtocolObj* aIsSecureIdxObj =
					dynamic_cast<cfint::ICFIntURLProtocolObj*>( keepObj );
				if( aIsSecureIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIsSecureIdxObj );
				}
				cfint::CFIntURLProtocolByIsSecureIdxKey keyIsSecureIdx;
				keyIsSecureIdx.setRequiredIsSecure( keepObj->getRequiredIsSecure() );
				auto searchIndexByIsSecureIdx = indexByIsSecureIdx->find( keyIsSecureIdx );
				if( searchIndexByIsSecureIdx != indexByIsSecureIdx->end() ) {
					std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* mapIsSecureIdx = searchIndexByIsSecureIdx->second;
					if( mapIsSecureIdx != NULL ) {
						mapIsSecureIdx->insert( std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj* >::value_type( *(keepObj->getPKey()), aIsSecureIdxObj ) );
					}
				}
			}

			if( allURLProtocol != NULL ) {
				allURLProtocol->insert( std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamURLProtocolTableObj::deepDisposeByIdIdx( const int32_t URLProtocolId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfint::ICFIntURLProtocolObj*> list;
		cfint::ICFIntURLProtocolObj* existingObj = readCachedURLProtocolByIdIdx( URLProtocolId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfint::ICFIntURLProtocolObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->reallyDeepDisposeURLProtocol( dynamic_cast<cfint::ICFIntURLProtocolObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamURLProtocolTableObj::deepDisposeByUNameIdx( const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfint::ICFIntURLProtocolObj*> list;
		cfint::ICFIntURLProtocolObj* existingObj = readCachedURLProtocolByUNameIdx( Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfint::ICFIntURLProtocolObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->reallyDeepDisposeURLProtocol( dynamic_cast<cfint::ICFIntURLProtocolObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamURLProtocolTableObj::deepDisposeByIsSecureIdx( const bool IsSecure ) {
		static const std::string S_ProcName( "deepDisposeByIsSecureIdx" );
		std::vector<cfint::ICFIntURLProtocolObj*> list;
		std::vector<cfint::ICFIntURLProtocolObj*> matchesFound = readCachedURLProtocolByIsSecureIdx( IsSecure );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfint::ICFIntURLProtocolObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->reallyDeepDisposeURLProtocol( dynamic_cast<cfint::ICFIntURLProtocolObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamURLProtocolTableObj::reallyDeepDisposeURLProtocol( cfint::ICFIntURLProtocolObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeURLProtocol" );

		if( Obj == NULL ) {
			return;
		}

		cfint::ICFIntURLProtocolObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->reallyDetachFromIndexesURLProtocol( dynamic_cast<cfint::ICFIntURLProtocolObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::createURLProtocol( cfint::ICFIntURLProtocolEditObj* Obj ) {
		static const std::string S_ProcName( "createURLProtocol" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntURLProtocolObj* obj = dynamic_cast<cfint::ICFIntURLProtocolObj*>( Obj->getOrig() );
		try {
			cfint::CFIntURLProtocolBuff* buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->createURLProtocol(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfint::CFIntURLProtocolBuff*>( cloneable ) );
			obj = dynamic_cast<cfint::ICFIntURLProtocolObj*>( obj->realize() );
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

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::readURLProtocol( cfint::CFIntURLProtocolPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readURLProtocol" );
		cfint::ICFIntURLProtocolObj* obj = NULL;
		cfint::ICFIntURLProtocolObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntURLProtocolBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredURLProtocolId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfint::ICFIntURLProtocolObj*>( obj->realize() );
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

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::lockURLProtocol( cfint::CFIntURLProtocolPKey* pkey ) {
		static const std::string S_ProcName( "lockURLProtocol" );
		cfint::ICFIntURLProtocolObj* locked = NULL;
		cfint::CFIntURLProtocolBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfint::ICFIntURLProtocolObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfint::ICFIntURLProtocolObj*> CFBamURLProtocolTableObj::readAllURLProtocol( bool forceRead ) {
		static const std::string S_ProcName( "readAllURLProtocol" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntURLProtocolObj* realized = NULL;
		if( forceRead || ( allURLProtocol == NULL ) ) {
			std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* map = new std::map<cfint::CFIntURLProtocolPKey,cfint::ICFIntURLProtocolObj*>();
			allURLProtocol = map;
			std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->readAllDerived( schema->getAuthorization() );
			cfint::CFIntURLProtocolBuff* buff = NULL;
			cfint::ICFIntURLProtocolObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfint::ICFIntURLProtocolObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allURLProtocol->insert( std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allURLProtocol->size();
		std::vector<cfint::ICFIntURLProtocolObj*> arr;
		auto valIter = allURLProtocol->begin();
		size_t idx = 0;
		while( valIter != allURLProtocol->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::readURLProtocolByIdIdx( const int32_t URLProtocolId, bool forceRead )
	{
		static const std::string S_ProcName( "readURLProtocolByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntURLProtocolPKey pkey;
		pkey.setRequiredURLProtocolId( URLProtocolId );
		cfint::ICFIntURLProtocolObj* obj = readURLProtocol( &pkey, forceRead );
		return( obj );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::readURLProtocolByUNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readURLProtocolByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntURLProtocolByUNameIdxKey,
				cfint::ICFIntURLProtocolObj*>();
		}
		cfint::CFIntURLProtocolByUNameIdxKey key;
		key.setRequiredName( Name );
		cfint::ICFIntURLProtocolObj* obj = NULL;
		cfint::ICFIntURLProtocolObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntURLProtocolBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->readDerivedByUNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfint::ICFIntURLProtocolObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfint::CFIntURLProtocolByUNameIdxKey, cfint::ICFIntURLProtocolObj*>::value_type( key, dynamic_cast<cfint::ICFIntURLProtocolObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfint::ICFIntURLProtocolObj*> CFBamURLProtocolTableObj::readURLProtocolByIsSecureIdx( const bool IsSecure,
		bool forceRead )
	{
		static const std::string S_ProcName( "readURLProtocolByIsSecureIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntURLProtocolByIsSecureIdxKey key;
		key.setRequiredIsSecure( IsSecure );
		std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* dict;
		std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* oldDict;
		if( indexByIsSecureIdx == NULL ) {
			indexByIsSecureIdx = new std::map< cfint::CFIntURLProtocolByIsSecureIdxKey,
				std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>*>();
		}
		auto searchIndexByIsSecureIdx = indexByIsSecureIdx->find( key );
		if( searchIndexByIsSecureIdx != indexByIsSecureIdx->end() ) {
			oldDict = searchIndexByIsSecureIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>();
			cfint::ICFIntURLProtocolObj* obj;
			std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->readDerivedByIsSecureIdx( schema->getAuthorization(),
				IsSecure );
			cfint::CFIntURLProtocolBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfint::ICFIntURLProtocolObj* realized = dynamic_cast<cfint::ICFIntURLProtocolObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByIsSecureIdx->erase( searchIndexByIsSecureIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByIsSecureIdx->insert( std::map< cfint::CFIntURLProtocolByIsSecureIdxKey,
				std::map< cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfint::ICFIntURLProtocolObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::readURLProtocolByLookupUNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readURLProtocolByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntURLProtocolByUNameIdxKey,
				cfint::ICFIntURLProtocolObj*>();
		}
		cfint::CFIntURLProtocolByUNameIdxKey key;
		key.setRequiredName( Name );
		cfint::ICFIntURLProtocolObj* obj = NULL;
		cfint::ICFIntURLProtocolObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfint::CFIntURLProtocolBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfint::ICFIntURLProtocolObj*>( dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfint::ICFIntURLProtocolObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfint::CFIntURLProtocolByUNameIdxKey, cfint::ICFIntURLProtocolObj*>::value_type( key, dynamic_cast<cfint::ICFIntURLProtocolObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::readCachedURLProtocol( cfint::CFIntURLProtocolPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readURLProtocol" );
		cfint::ICFIntURLProtocolObj* obj = NULL;
		cfint::ICFIntURLProtocolObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::readCachedURLProtocolByIdIdx( const int32_t URLProtocolId )
	{
		static const std::string S_ProcName( "readCachedURLProtocolByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfint::CFIntURLProtocolPKey pkey;
		pkey.setRequiredURLProtocolId( URLProtocolId );
		cfint::ICFIntURLProtocolObj* obj = readCachedURLProtocol( &pkey );
		return( obj );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::readCachedURLProtocolByUNameIdx( const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedURLProtocolByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntURLProtocolByUNameIdxKey,
				cfint::ICFIntURLProtocolObj*>();
		}
		cfint::CFIntURLProtocolByUNameIdxKey key;
		key.setRequiredName( Name );
		cfint::ICFIntURLProtocolObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntURLProtocolBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfint::ICFIntURLProtocolObj*> CFBamURLProtocolTableObj::readCachedURLProtocolByIsSecureIdx( const bool IsSecure )
	{
		static const std::string S_ProcName( "readCachedURLProtocolByIsSecureIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfint::ICFIntURLProtocolObj*> arr;
		cfint::CFIntURLProtocolByIsSecureIdxKey key;
		key.setRequiredIsSecure( IsSecure );
		std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* dict;
		if( indexByIsSecureIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByIsSecureIdx = indexByIsSecureIdx->find( key );
		if( searchIndexByIsSecureIdx != indexByIsSecureIdx->end() ) {
			dict = searchIndexByIsSecureIdx->second;
			size_t len = dict->size();
			std::vector<cfint::ICFIntURLProtocolObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfint::ICFIntURLProtocolObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntURLProtocolBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::readCachedURLProtocolByLookupUNameIdx( const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedURLProtocolByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntURLProtocolByUNameIdxKey,
				cfint::ICFIntURLProtocolObj*>();
		}
		cfint::CFIntURLProtocolByUNameIdxKey key;
		key.setRequiredName( Name );
		cfint::ICFIntURLProtocolObj* obj = NULL;
		cfint::ICFIntURLProtocolObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfint::CFIntURLProtocolBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolTableObj::updateURLProtocol( cfint::ICFIntURLProtocolEditObj* Obj ) {
		static const std::string S_ProcName( "updateURLProtocol" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfint::ICFIntURLProtocolObj* obj = dynamic_cast<cfint::ICFIntURLProtocolObj*>( Obj->getOrig() );
		try {
			cfint::CFIntURLProtocolBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->updateURLProtocol( schema->getAuthorization(),
				dynamic_cast<cfint::CFIntURLProtocolBuff*>( Obj->getURLProtocolBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfint::ICFIntURLProtocolObj*>( dynamic_cast<cfbam::CFBamURLProtocolTableObj*>( schema->getURLProtocolTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfint::ICFIntURLProtocolObj*>( obj->realize() );
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

	void CFBamURLProtocolTableObj::deleteURLProtocol( cfint::ICFIntURLProtocolEditObj* Obj ) {
		cfint::ICFIntURLProtocolObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->deleteURLProtocol( schema->getAuthorization(),
			obj->getURLProtocolBuff() );
		deepDisposeByIdIdx( obj->getRequiredURLProtocolId() );
	}

	void CFBamURLProtocolTableObj::deleteURLProtocolByIdIdx( const int32_t URLProtocolId )
	{
		cfint::CFIntURLProtocolPKey pkey;
		pkey.setRequiredURLProtocolId( URLProtocolId );
		cfint::ICFIntURLProtocolObj* obj = readURLProtocol( &pkey, true );
		if( obj != NULL ) {
			cfint::ICFIntURLProtocolEditObj* editObj = dynamic_cast<cfint::ICFIntURLProtocolEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfint::ICFIntURLProtocolEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamURLProtocolTableObj::deleteURLProtocolByUNameIdx( const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfint::CFIntURLProtocolByUNameIdxKey,
				cfint::ICFIntURLProtocolObj*>();
		}
		cfint::CFIntURLProtocolByUNameIdxKey key;
		key.setRequiredName( Name );
		cfint::ICFIntURLProtocolObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->deleteURLProtocolByUNameIdx( schema->getAuthorization(),
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->deleteURLProtocolByUNameIdx( schema->getAuthorization(),
				Name );
		}
		deepDisposeByUNameIdx( Name );
	}

	void CFBamURLProtocolTableObj::deleteURLProtocolByIsSecureIdx( const bool IsSecure )
	{
		dynamic_cast<cfint::ICFIntSchema*>( schema->getBackingStore() )->getTableURLProtocol()->deleteURLProtocolByIsSecureIdx( schema->getAuthorization(),
				IsSecure );
		deepDisposeByIsSecureIdx( IsSecure );
	}

	void CFBamURLProtocolTableObj::reallyDetachFromIndexesURLProtocol( cfint::ICFIntURLProtocolObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesURLProtocol" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfint::ICFIntURLProtocolObj* obj = Obj;
		cfint::CFIntURLProtocolPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfint::ICFIntURLProtocolObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByUNameIdx != NULL ) {
				cfint::CFIntURLProtocolByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByIsSecureIdx != NULL ) {
				cfint::CFIntURLProtocolByIsSecureIdxKey keyIsSecureIdx;
				keyIsSecureIdx.setRequiredIsSecure( obj->getRequiredIsSecure() );
				auto searchIsSecureIdx = indexByIsSecureIdx->find( keyIsSecureIdx );
				if( searchIsSecureIdx != indexByIsSecureIdx->end() ) {
					std::map<cfint::CFIntURLProtocolPKey, cfint::ICFIntURLProtocolObj*>* mapIsSecureIdx = searchIsSecureIdx->second;
					if( mapIsSecureIdx != NULL ) {
						auto removalProbe = mapIsSecureIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapIsSecureIdx->end() ) {
							mapIsSecureIdx->erase( removalProbe );
							if( mapIsSecureIdx->empty() ) {
								delete mapIsSecureIdx;
								mapIsSecureIdx = NULL;
								indexByIsSecureIdx->erase( searchIsSecureIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
