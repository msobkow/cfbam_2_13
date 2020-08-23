// Description: C++18 Table Object implementation for CFBam.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
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

	const std::string CFBamISOLangTableObj::CLASS_NAME( "CFBamISOLangTableObj" );
	const std::string CFBamISOLangTableObj::TABLE_NAME( "ISOLang" );
	const std::string CFBamISOLangTableObj::TABLE_DBNAME( "iso_lang" );

	CFBamISOLangTableObj::CFBamISOLangTableObj() {
		schema = NULL;
		members = new std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>();
		allISOLang = NULL;
		indexByCode3Idx = new std::map< cfsec::CFSecISOLangByCode3IdxKey,
			cfsec::ICFSecISOLangObj*>();
		indexByCode2Idx = new std::map< cfsec::CFSecISOLangByCode2IdxKey,
			std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>*>();
	}

	CFBamISOLangTableObj::CFBamISOLangTableObj( cfsec::ICFSecSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>();
		allISOLang = NULL;
		indexByCode3Idx = new std::map< cfsec::CFSecISOLangByCode3IdxKey,
			cfsec::ICFSecISOLangObj*>();
		indexByCode2Idx = new std::map< cfsec::CFSecISOLangByCode2IdxKey,
			std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>*>();
	}

	CFBamISOLangTableObj::~CFBamISOLangTableObj() {
		minimizeMemory();
		if( indexByCode3Idx != NULL ) {
			delete indexByCode3Idx;
			indexByCode3Idx = NULL;
		}
		if( indexByCode2Idx != NULL ) {
			delete indexByCode2Idx;
			indexByCode2Idx = NULL;
		}
		if( members != NULL ) {
			cfsec::ICFSecISOLangObj* curMember;
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

	cfsec::ICFSecSchemaObj* CFBamISOLangTableObj::getSchema() {
		return( schema );
	}

	void CFBamISOLangTableObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamISOLangTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamISOLangTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamISOLangTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFBamISOLangTableObj::minimizeMemory() {
		if( allISOLang != NULL ) {
			allISOLang->clear();
			delete allISOLang;
			allISOLang = NULL;
		}
		if( indexByCode3Idx != NULL ) {
			indexByCode3Idx->clear();
		}
		if( indexByCode2Idx != NULL ) {
			std::map< cfsec::CFSecISOLangByCode2IdxKey,
				std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* >::iterator iterByCode2Idx = indexByCode2Idx->begin();
			std::map< cfsec::CFSecISOLangByCode2IdxKey,
				std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* >::iterator endByCode2Idx = indexByCode2Idx->end();
			std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* curByCode2Idx = NULL;
			while( iterByCode2Idx != endByCode2Idx ) {
				curByCode2Idx = iterByCode2Idx->second;
				if( curByCode2Idx != NULL ) {
					curByCode2Idx->clear();
					delete curByCode2Idx;
					curByCode2Idx = NULL;
					iterByCode2Idx->second = NULL;
				}
				iterByCode2Idx ++;
			}
			indexByCode2Idx->clear();
		}
		if( members != NULL ) {
			cfsec::ICFSecISOLangObj* cur = NULL;
			cfsec::ICFSecISOLangEditObj* edit = NULL;
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

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::newInstance() {
		cfsec::ICFSecISOLangObj* inst = dynamic_cast<cfsec::ICFSecISOLangObj*>( new CFBamISOLangObj( schema ) );
		return( inst );
	}

	cfsec::ICFSecISOLangEditObj* CFBamISOLangTableObj::newEditInstance( cfsec::ICFSecISOLangObj* orig ) {
		cfsec::ICFSecISOLangEditObj* edit = dynamic_cast<cfsec::ICFSecISOLangEditObj*>( new CFBamISOLangEditObj( orig ));
		return( edit );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::realizeISOLang( cfsec::ICFSecISOLangObj* Obj ) {
		static const std::string S_ProcName( "realizeISOLang" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecISOLangObj* obj = Obj;
		cfsec::ICFSecISOLangObj* existingObj = NULL;
		cfsec::CFSecISOLangPKey* pkey = obj->getPKey();
		cfsec::ICFSecISOLangObj* keepObj = NULL;
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
			if( indexByCode3Idx != NULL ) {
				cfsec::CFSecISOLangByCode3IdxKey keyCode3Idx;
				keyCode3Idx.setRequiredISO6392Code( keepObj->getRequiredISO6392Code() );
				auto removalProbe = indexByCode3Idx->find( keyCode3Idx );
				if( removalProbe != indexByCode3Idx->end() ) {
					indexByCode3Idx->erase( removalProbe );
				}
			}

			if( indexByCode2Idx != NULL ) {
				cfsec::CFSecISOLangByCode2IdxKey keyCode2Idx;
				if( keepObj->isOptionalISO6391CodeNull() ) {
					keyCode2Idx.setOptionalISO6391CodeNull();
				}
				else {
					keyCode2Idx.setOptionalISO6391CodeValue( keepObj->getOptionalISO6391CodeValue() );
				}
				auto searchCode2Idx = indexByCode2Idx->find( keyCode2Idx );
				if( searchCode2Idx != indexByCode2Idx->end() ) {
					std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* mapCode2Idx = searchCode2Idx->second;
					if( mapCode2Idx != NULL ) {
						auto removalProbe = mapCode2Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapCode2Idx->end() ) {
							mapCode2Idx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfsec::CFSecISOLangBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByCode3Idx != NULL ) {
				static const std::string S_ACode3IdxObj( "aCode3IdxObj" );
				cfsec::ICFSecISOLangObj* aCode3IdxObj =
					dynamic_cast<cfsec::ICFSecISOLangObj*>( keepObj );
				if( aCode3IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACode3IdxObj );
				}
				cfsec::CFSecISOLangByCode3IdxKey keyCode3Idx;
				keyCode3Idx.setRequiredISO6392Code( keepObj->getRequiredISO6392Code() );
				indexByCode3Idx->insert( std::map< cfsec::CFSecISOLangByCode3IdxKey, cfsec::ICFSecISOLangObj* >::value_type( keyCode3Idx, aCode3IdxObj ) );
			}

			if( indexByCode2Idx != NULL ) {
				static const std::string S_ACode2IdxObj( "aCode2IdxObj" );
				cfsec::ICFSecISOLangObj* aCode2IdxObj =
					dynamic_cast<cfsec::ICFSecISOLangObj*>( keepObj );
				if( aCode2IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACode2IdxObj );
				}
				cfsec::CFSecISOLangByCode2IdxKey keyCode2Idx;
				if( keepObj->isOptionalISO6391CodeNull() ) {
					keyCode2Idx.setOptionalISO6391CodeNull();
				}
				else {
					keyCode2Idx.setOptionalISO6391CodeValue( keepObj->getOptionalISO6391CodeValue() );
				}
				auto searchIndexByCode2Idx = indexByCode2Idx->find( keyCode2Idx );
				if( searchIndexByCode2Idx != indexByCode2Idx->end() ) {
					std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* mapCode2Idx = searchIndexByCode2Idx->second;
					if( mapCode2Idx != NULL ) {
						mapCode2Idx->insert( std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj* >::value_type( *(keepObj->getPKey()), aCode2IdxObj ) );
					}
				}
			}

			if( allISOLang != NULL ) {
				allISOLang->insert( std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByCode3Idx != NULL ) {
				static const std::string S_ACode3IdxObj( "aCode3IdxObj" );
				cfsec::ICFSecISOLangObj* aCode3IdxObj =
					dynamic_cast<cfsec::ICFSecISOLangObj*>( keepObj );
				if( aCode3IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACode3IdxObj );
				}
				cfsec::CFSecISOLangByCode3IdxKey keyCode3Idx;
				keyCode3Idx.setRequiredISO6392Code( keepObj->getRequiredISO6392Code() );
				indexByCode3Idx->insert( std::map< cfsec::CFSecISOLangByCode3IdxKey, cfsec::ICFSecISOLangObj* >::value_type( keyCode3Idx, aCode3IdxObj ) );
			}

			if( indexByCode2Idx != NULL ) {
				static const std::string S_ACode2IdxObj( "aCode2IdxObj" );
				cfsec::ICFSecISOLangObj* aCode2IdxObj =
					dynamic_cast<cfsec::ICFSecISOLangObj*>( keepObj );
				if( aCode2IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACode2IdxObj );
				}
				cfsec::CFSecISOLangByCode2IdxKey keyCode2Idx;
				if( keepObj->isOptionalISO6391CodeNull() ) {
					keyCode2Idx.setOptionalISO6391CodeNull();
				}
				else {
					keyCode2Idx.setOptionalISO6391CodeValue( keepObj->getOptionalISO6391CodeValue() );
				}
				auto searchIndexByCode2Idx = indexByCode2Idx->find( keyCode2Idx );
				if( searchIndexByCode2Idx != indexByCode2Idx->end() ) {
					std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* mapCode2Idx = searchIndexByCode2Idx->second;
					if( mapCode2Idx != NULL ) {
						mapCode2Idx->insert( std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj* >::value_type( *(keepObj->getPKey()), aCode2IdxObj ) );
					}
				}
			}

			if( allISOLang != NULL ) {
				allISOLang->insert( std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamISOLangTableObj::deepDisposeByIdIdx( const int16_t ISOLangId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfsec::ICFSecISOLangObj*> list;
		cfsec::ICFSecISOLangObj* existingObj = readCachedISOLangByIdIdx( ISOLangId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecISOLangObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->reallyDeepDisposeISOLang( dynamic_cast<cfsec::ICFSecISOLangObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamISOLangTableObj::deepDisposeByCode3Idx( const std::string& ISO6392Code ) {
		static const std::string S_ProcName( "deepDisposeByCode3Idx" );
		std::vector<cfsec::ICFSecISOLangObj*> list;
		cfsec::ICFSecISOLangObj* existingObj = readCachedISOLangByCode3Idx( ISO6392Code );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecISOLangObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->reallyDeepDisposeISOLang( dynamic_cast<cfsec::ICFSecISOLangObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamISOLangTableObj::deepDisposeByCode2Idx( const std::string* ISO6391Code ) {
		static const std::string S_ProcName( "deepDisposeByCode2Idx" );
		std::vector<cfsec::ICFSecISOLangObj*> list;
		std::vector<cfsec::ICFSecISOLangObj*> matchesFound = readCachedISOLangByCode2Idx( ISO6391Code );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfsec::ICFSecISOLangObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->reallyDeepDisposeISOLang( dynamic_cast<cfsec::ICFSecISOLangObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamISOLangTableObj::reallyDeepDisposeISOLang( cfsec::ICFSecISOLangObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeISOLang" );

		if( Obj == NULL ) {
			return;
		}

		cfsec::ICFSecISOLangObj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamISOCtryLangTableObj*>( schema->getISOCtryLangTableObj() )->deepDisposeByLangIdx( obj->getRequiredISOLangId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->reallyDetachFromIndexesISOLang( dynamic_cast<cfsec::ICFSecISOLangObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::createISOLang( cfsec::ICFSecISOLangEditObj* Obj ) {
		static const std::string S_ProcName( "createISOLang" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecISOLangObj* obj = dynamic_cast<cfsec::ICFSecISOLangObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecISOLangBuff* buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->createISOLang(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfsec::CFSecISOLangBuff*>( cloneable ) );
			obj = dynamic_cast<cfsec::ICFSecISOLangObj*>( obj->realize() );
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

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::readISOLang( cfsec::CFSecISOLangPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readISOLang" );
		cfsec::ICFSecISOLangObj* obj = NULL;
		cfsec::ICFSecISOLangObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecISOLangBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredISOLangId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfsec::ICFSecISOLangObj*>( obj->realize() );
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

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::lockISOLang( cfsec::CFSecISOLangPKey* pkey ) {
		static const std::string S_ProcName( "lockISOLang" );
		cfsec::ICFSecISOLangObj* locked = NULL;
		cfsec::CFSecISOLangBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfsec::ICFSecISOLangObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfsec::ICFSecISOLangObj*> CFBamISOLangTableObj::readAllISOLang( bool forceRead ) {
		static const std::string S_ProcName( "readAllISOLang" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecISOLangObj* realized = NULL;
		if( forceRead || ( allISOLang == NULL ) ) {
			std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* map = new std::map<cfsec::CFSecISOLangPKey,cfsec::ICFSecISOLangObj*>();
			allISOLang = map;
			std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->readAllDerived( schema->getAuthorization() );
			cfsec::CFSecISOLangBuff* buff = NULL;
			cfsec::ICFSecISOLangObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfsec::ICFSecISOLangObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allISOLang->insert( std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allISOLang->size();
		std::vector<cfsec::ICFSecISOLangObj*> arr;
		auto valIter = allISOLang->begin();
		size_t idx = 0;
		while( valIter != allISOLang->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::readISOLangByIdIdx( const int16_t ISOLangId, bool forceRead )
	{
		static const std::string S_ProcName( "readISOLangByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecISOLangPKey pkey;
		pkey.setRequiredISOLangId( ISOLangId );
		cfsec::ICFSecISOLangObj* obj = readISOLang( &pkey, forceRead );
		return( obj );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::readISOLangByCode3Idx( const std::string& ISO6392Code, bool forceRead )
	{
		static const std::string S_ProcName( "readISOLangByCode3Idx" );
		static const std::string S_Realized( "realized" );
		if( indexByCode3Idx == NULL ) {
			indexByCode3Idx = new std::map< cfsec::CFSecISOLangByCode3IdxKey,
				cfsec::ICFSecISOLangObj*>();
		}
		cfsec::CFSecISOLangByCode3IdxKey key;
		key.setRequiredISO6392Code( ISO6392Code );
		cfsec::ICFSecISOLangObj* obj = NULL;
		cfsec::ICFSecISOLangObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByCode3Idx = indexByCode3Idx->find( key );
			if( searchIndexByCode3Idx != indexByCode3Idx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByCode3Idx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecISOLangBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->readDerivedByCode3Idx( schema->getAuthorization(),
				ISO6392Code );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecISOLangObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByCode3Idx->insert( std::map< cfsec::CFSecISOLangByCode3IdxKey, cfsec::ICFSecISOLangObj*>::value_type( key, dynamic_cast<cfsec::ICFSecISOLangObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfsec::ICFSecISOLangObj*> CFBamISOLangTableObj::readISOLangByCode2Idx( const std::string* ISO6391Code,
		bool forceRead )
	{
		static const std::string S_ProcName( "readISOLangByCode2Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecISOLangByCode2IdxKey key;
		if( ISO6391Code == NULL ) {
			key.setOptionalISO6391CodeNull();
		}
		else {
			key.setOptionalISO6391CodeValue( *ISO6391Code );
		}
		std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* dict;
		std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* oldDict;
		if( indexByCode2Idx == NULL ) {
			indexByCode2Idx = new std::map< cfsec::CFSecISOLangByCode2IdxKey,
				std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>*>();
		}
		auto searchIndexByCode2Idx = indexByCode2Idx->find( key );
		if( searchIndexByCode2Idx != indexByCode2Idx->end() ) {
			oldDict = searchIndexByCode2Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>();
			cfsec::ICFSecISOLangObj* obj;
			std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->readDerivedByCode2Idx( schema->getAuthorization(),
				ISO6391Code );
			cfsec::CFSecISOLangBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfsec::ICFSecISOLangObj* realized = dynamic_cast<cfsec::ICFSecISOLangObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByCode2Idx->erase( searchIndexByCode2Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByCode2Idx->insert( std::map< cfsec::CFSecISOLangByCode2IdxKey,
				std::map< cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfsec::ICFSecISOLangObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::readISOLangByLookupCode3Idx( const std::string& ISO6392Code, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readISOLangByLookupCode3Idx" );
		if( indexByCode3Idx == NULL ) {
			indexByCode3Idx = new std::map< cfsec::CFSecISOLangByCode3IdxKey,
				cfsec::ICFSecISOLangObj*>();
		}
		cfsec::CFSecISOLangByCode3IdxKey key;
		key.setRequiredISO6392Code( ISO6392Code );
		cfsec::ICFSecISOLangObj* obj = NULL;
		cfsec::ICFSecISOLangObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByCode3Idx = indexByCode3Idx->find( key );
			if( searchIndexByCode3Idx != indexByCode3Idx->end() ) {
				obj = searchIndexByCode3Idx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecISOLangBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->readDerivedByLookupCode3Idx( schema->getAuthorization(),
				ISO6392Code );
			if( buff != NULL ) {
				obj = dynamic_cast<cfsec::ICFSecISOLangObj*>( dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecISOLangObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByCode3Idx->insert( std::map< cfsec::CFSecISOLangByCode3IdxKey, cfsec::ICFSecISOLangObj*>::value_type( key, dynamic_cast<cfsec::ICFSecISOLangObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::readCachedISOLang( cfsec::CFSecISOLangPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readISOLang" );
		cfsec::ICFSecISOLangObj* obj = NULL;
		cfsec::ICFSecISOLangObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::readCachedISOLangByIdIdx( const int16_t ISOLangId )
	{
		static const std::string S_ProcName( "readCachedISOLangByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecISOLangPKey pkey;
		pkey.setRequiredISOLangId( ISOLangId );
		cfsec::ICFSecISOLangObj* obj = readCachedISOLang( &pkey );
		return( obj );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::readCachedISOLangByCode3Idx( const std::string& ISO6392Code )
	{
		static const std::string S_ProcName( "readCachedISOLangByCode3Idx" );
		static const std::string S_Realized( "realized" );
		if( indexByCode3Idx == NULL ) {
			indexByCode3Idx = new std::map< cfsec::CFSecISOLangByCode3IdxKey,
				cfsec::ICFSecISOLangObj*>();
		}
		cfsec::CFSecISOLangByCode3IdxKey key;
		key.setRequiredISO6392Code( ISO6392Code );
		cfsec::ICFSecISOLangObj* obj = NULL;
		auto searchIndexByCode3Idx = indexByCode3Idx->find( key );
		if( searchIndexByCode3Idx != indexByCode3Idx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByCode3Idx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecISOLangBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfsec::ICFSecISOLangObj*> CFBamISOLangTableObj::readCachedISOLangByCode2Idx( const std::string* ISO6391Code )
	{
		static const std::string S_ProcName( "readCachedISOLangByCode2Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfsec::ICFSecISOLangObj*> arr;
		cfsec::CFSecISOLangByCode2IdxKey key;
		if( ISO6391Code == NULL ) {
			key.setOptionalISO6391CodeNull();
		}
		else {
			key.setOptionalISO6391CodeValue( *ISO6391Code );
		}
		std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* dict;
		if( indexByCode2Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByCode2Idx = indexByCode2Idx->find( key );
		if( searchIndexByCode2Idx != indexByCode2Idx->end() ) {
			dict = searchIndexByCode2Idx->second;
			size_t len = dict->size();
			std::vector<cfsec::ICFSecISOLangObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfsec::ICFSecISOLangObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecISOLangBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::readCachedISOLangByLookupCode3Idx( const std::string& ISO6392Code )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedISOLangByLookupCode3Idx" );
		if( indexByCode3Idx == NULL ) {
			indexByCode3Idx = new std::map< cfsec::CFSecISOLangByCode3IdxKey,
				cfsec::ICFSecISOLangObj*>();
		}
		cfsec::CFSecISOLangByCode3IdxKey key;
		key.setRequiredISO6392Code( ISO6392Code );
		cfsec::ICFSecISOLangObj* obj = NULL;
		cfsec::ICFSecISOLangObj* realized = NULL;
		auto searchIndexByCode3Idx = indexByCode3Idx->find( key );
		if( searchIndexByCode3Idx != indexByCode3Idx->end() ) {
			obj = searchIndexByCode3Idx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecISOLangBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangTableObj::updateISOLang( cfsec::ICFSecISOLangEditObj* Obj ) {
		static const std::string S_ProcName( "updateISOLang" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecISOLangObj* obj = dynamic_cast<cfsec::ICFSecISOLangObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecISOLangBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->updateISOLang( schema->getAuthorization(),
				dynamic_cast<cfsec::CFSecISOLangBuff*>( Obj->getISOLangBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfsec::ICFSecISOLangObj*>( dynamic_cast<cfbam::CFBamISOLangTableObj*>( schema->getISOLangTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfsec::ICFSecISOLangObj*>( obj->realize() );
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

	void CFBamISOLangTableObj::deleteISOLang( cfsec::ICFSecISOLangEditObj* Obj ) {
		cfsec::ICFSecISOLangObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->deleteISOLang( schema->getAuthorization(),
			obj->getISOLangBuff() );
		deepDisposeByIdIdx( obj->getRequiredISOLangId() );
	}

	void CFBamISOLangTableObj::deleteISOLangByIdIdx( const int16_t ISOLangId )
	{
		cfsec::CFSecISOLangPKey pkey;
		pkey.setRequiredISOLangId( ISOLangId );
		cfsec::ICFSecISOLangObj* obj = readISOLang( &pkey, true );
		if( obj != NULL ) {
			cfsec::ICFSecISOLangEditObj* editObj = dynamic_cast<cfsec::ICFSecISOLangEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfsec::ICFSecISOLangEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamISOLangTableObj::deleteISOLangByCode3Idx( const std::string& ISO6392Code )
	{
		if( indexByCode3Idx == NULL ) {
			indexByCode3Idx = new std::map< cfsec::CFSecISOLangByCode3IdxKey,
				cfsec::ICFSecISOLangObj*>();
		}
		cfsec::CFSecISOLangByCode3IdxKey key;
		key.setRequiredISO6392Code( ISO6392Code );
		cfsec::ICFSecISOLangObj* obj = NULL;
		auto searchIndexByCode3Idx = indexByCode3Idx->find( key );
		if( searchIndexByCode3Idx != indexByCode3Idx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->deleteISOLangByCode3Idx( schema->getAuthorization(),
				ISO6392Code );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->deleteISOLangByCode3Idx( schema->getAuthorization(),
				ISO6392Code );
		}
		deepDisposeByCode3Idx( ISO6392Code );
	}

	void CFBamISOLangTableObj::deleteISOLangByCode2Idx( const std::string* ISO6391Code )
	{
		dynamic_cast<cfsec::ICFSecSchema*>( schema->getBackingStore() )->getTableISOLang()->deleteISOLangByCode2Idx( schema->getAuthorization(),
				ISO6391Code );
		deepDisposeByCode2Idx( ISO6391Code );
	}

	void CFBamISOLangTableObj::reallyDetachFromIndexesISOLang( cfsec::ICFSecISOLangObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesISOLang" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecISOLangObj* obj = Obj;
		cfsec::CFSecISOLangPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfsec::ICFSecISOLangObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByCode3Idx != NULL ) {
				cfsec::CFSecISOLangByCode3IdxKey keyCode3Idx;
				keyCode3Idx.setRequiredISO6392Code( obj->getRequiredISO6392Code() );
				auto removalProbe = indexByCode3Idx->find( keyCode3Idx );
				if( removalProbe != indexByCode3Idx->end() ) {
					indexByCode3Idx->erase( removalProbe );
				}
			}

			if( indexByCode2Idx != NULL ) {
				cfsec::CFSecISOLangByCode2IdxKey keyCode2Idx;
				if( obj->isOptionalISO6391CodeNull() ) {
					keyCode2Idx.setOptionalISO6391CodeNull();
				}
				else {
					keyCode2Idx.setOptionalISO6391CodeValue( obj->getOptionalISO6391CodeValue() );
				}
				auto searchCode2Idx = indexByCode2Idx->find( keyCode2Idx );
				if( searchCode2Idx != indexByCode2Idx->end() ) {
					std::map<cfsec::CFSecISOLangPKey, cfsec::ICFSecISOLangObj*>* mapCode2Idx = searchCode2Idx->second;
					if( mapCode2Idx != NULL ) {
						auto removalProbe = mapCode2Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapCode2Idx->end() ) {
							mapCode2Idx->erase( removalProbe );
							if( mapCode2Idx->empty() ) {
								delete mapCode2Idx;
								mapCode2Idx = NULL;
								indexByCode2Idx->erase( searchCode2Idx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
