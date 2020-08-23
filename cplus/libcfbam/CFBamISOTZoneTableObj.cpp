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

	const std::string CFBamISOTZoneTableObj::CLASS_NAME( "CFBamISOTZoneTableObj" );
	const std::string CFBamISOTZoneTableObj::TABLE_NAME( "ISOTZone" );
	const std::string CFBamISOTZoneTableObj::TABLE_DBNAME( "ISOTz" );

	CFBamISOTZoneTableObj::CFBamISOTZoneTableObj() {
		schema = NULL;
		members = new std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>();
		allISOTZone = NULL;
		indexByOffsetIdx = new std::map< cfsec::CFSecISOTZoneByOffsetIdxKey,
			std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>*>();
		indexByUTZNameIdx = new std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey,
			cfsec::ICFSecISOTZoneObj*>();
		indexByIso8601Idx = new std::map< cfsec::CFSecISOTZoneByIso8601IdxKey,
			std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>*>();
	}

	CFBamISOTZoneTableObj::CFBamISOTZoneTableObj( cfsec::ICFSecSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>();
		allISOTZone = NULL;
		indexByOffsetIdx = new std::map< cfsec::CFSecISOTZoneByOffsetIdxKey,
			std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>*>();
		indexByUTZNameIdx = new std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey,
			cfsec::ICFSecISOTZoneObj*>();
		indexByIso8601Idx = new std::map< cfsec::CFSecISOTZoneByIso8601IdxKey,
			std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>*>();
	}

	CFBamISOTZoneTableObj::~CFBamISOTZoneTableObj() {
		minimizeMemory();
		if( indexByOffsetIdx != NULL ) {
			delete indexByOffsetIdx;
			indexByOffsetIdx = NULL;
		}
		if( indexByUTZNameIdx != NULL ) {
			delete indexByUTZNameIdx;
			indexByUTZNameIdx = NULL;
		}
		if( indexByIso8601Idx != NULL ) {
			delete indexByIso8601Idx;
			indexByIso8601Idx = NULL;
		}
		if( members != NULL ) {
			cfsec::ICFSecISOTZoneObj* curMember;
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

	cfsec::ICFSecSchemaObj* CFBamISOTZoneTableObj::getSchema() {
		return( schema );
	}

	void CFBamISOTZoneTableObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamISOTZoneTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamISOTZoneTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamISOTZoneTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFBamISOTZoneTableObj::minimizeMemory() {
		if( allISOTZone != NULL ) {
			allISOTZone->clear();
			delete allISOTZone;
			allISOTZone = NULL;
		}
		if( indexByOffsetIdx != NULL ) {
			std::map< cfsec::CFSecISOTZoneByOffsetIdxKey,
				std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* >::iterator iterByOffsetIdx = indexByOffsetIdx->begin();
			std::map< cfsec::CFSecISOTZoneByOffsetIdxKey,
				std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* >::iterator endByOffsetIdx = indexByOffsetIdx->end();
			std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* curByOffsetIdx = NULL;
			while( iterByOffsetIdx != endByOffsetIdx ) {
				curByOffsetIdx = iterByOffsetIdx->second;
				if( curByOffsetIdx != NULL ) {
					curByOffsetIdx->clear();
					delete curByOffsetIdx;
					curByOffsetIdx = NULL;
					iterByOffsetIdx->second = NULL;
				}
				iterByOffsetIdx ++;
			}
			indexByOffsetIdx->clear();
		}
		if( indexByUTZNameIdx != NULL ) {
			indexByUTZNameIdx->clear();
		}
		if( indexByIso8601Idx != NULL ) {
			std::map< cfsec::CFSecISOTZoneByIso8601IdxKey,
				std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* >::iterator iterByIso8601Idx = indexByIso8601Idx->begin();
			std::map< cfsec::CFSecISOTZoneByIso8601IdxKey,
				std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* >::iterator endByIso8601Idx = indexByIso8601Idx->end();
			std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* curByIso8601Idx = NULL;
			while( iterByIso8601Idx != endByIso8601Idx ) {
				curByIso8601Idx = iterByIso8601Idx->second;
				if( curByIso8601Idx != NULL ) {
					curByIso8601Idx->clear();
					delete curByIso8601Idx;
					curByIso8601Idx = NULL;
					iterByIso8601Idx->second = NULL;
				}
				iterByIso8601Idx ++;
			}
			indexByIso8601Idx->clear();
		}
		if( members != NULL ) {
			cfsec::ICFSecISOTZoneObj* cur = NULL;
			cfsec::ICFSecISOTZoneEditObj* edit = NULL;
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

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::newInstance() {
		cfsec::ICFSecISOTZoneObj* inst = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( new CFBamISOTZoneObj( schema ) );
		return( inst );
	}

	cfsec::ICFSecISOTZoneEditObj* CFBamISOTZoneTableObj::newEditInstance( cfsec::ICFSecISOTZoneObj* orig ) {
		cfsec::ICFSecISOTZoneEditObj* edit = dynamic_cast<cfsec::ICFSecISOTZoneEditObj*>( new CFBamISOTZoneEditObj( orig ));
		return( edit );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::realizeISOTZone( cfsec::ICFSecISOTZoneObj* Obj ) {
		static const std::string S_ProcName( "realizeISOTZone" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecISOTZoneObj* obj = Obj;
		cfsec::ICFSecISOTZoneObj* existingObj = NULL;
		cfsec::CFSecISOTZonePKey* pkey = obj->getPKey();
		cfsec::ICFSecISOTZoneObj* keepObj = NULL;
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
			if( indexByOffsetIdx != NULL ) {
				cfsec::CFSecISOTZoneByOffsetIdxKey keyOffsetIdx;
				keyOffsetIdx.setRequiredTZHourOffset( keepObj->getRequiredTZHourOffset() );
				keyOffsetIdx.setRequiredTZMinOffset( keepObj->getRequiredTZMinOffset() );
				auto searchOffsetIdx = indexByOffsetIdx->find( keyOffsetIdx );
				if( searchOffsetIdx != indexByOffsetIdx->end() ) {
					std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* mapOffsetIdx = searchOffsetIdx->second;
					if( mapOffsetIdx != NULL ) {
						auto removalProbe = mapOffsetIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapOffsetIdx->end() ) {
							mapOffsetIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUTZNameIdx != NULL ) {
				cfsec::CFSecISOTZoneByUTZNameIdxKey keyUTZNameIdx;
				keyUTZNameIdx.setRequiredTZName( keepObj->getRequiredTZName() );
				auto removalProbe = indexByUTZNameIdx->find( keyUTZNameIdx );
				if( removalProbe != indexByUTZNameIdx->end() ) {
					indexByUTZNameIdx->erase( removalProbe );
				}
			}

			if( indexByIso8601Idx != NULL ) {
				cfsec::CFSecISOTZoneByIso8601IdxKey keyIso8601Idx;
				keyIso8601Idx.setRequiredIso8601( keepObj->getRequiredIso8601() );
				auto searchIso8601Idx = indexByIso8601Idx->find( keyIso8601Idx );
				if( searchIso8601Idx != indexByIso8601Idx->end() ) {
					std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* mapIso8601Idx = searchIso8601Idx->second;
					if( mapIso8601Idx != NULL ) {
						auto removalProbe = mapIso8601Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapIso8601Idx->end() ) {
							mapIso8601Idx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByOffsetIdx != NULL ) {
				static const std::string S_AOffsetIdxObj( "aOffsetIdxObj" );
				cfsec::ICFSecISOTZoneObj* aOffsetIdxObj =
					dynamic_cast<cfsec::ICFSecISOTZoneObj*>( keepObj );
				if( aOffsetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AOffsetIdxObj );
				}
				cfsec::CFSecISOTZoneByOffsetIdxKey keyOffsetIdx;
				keyOffsetIdx.setRequiredTZHourOffset( keepObj->getRequiredTZHourOffset() );
				keyOffsetIdx.setRequiredTZMinOffset( keepObj->getRequiredTZMinOffset() );
				auto searchIndexByOffsetIdx = indexByOffsetIdx->find( keyOffsetIdx );
				if( searchIndexByOffsetIdx != indexByOffsetIdx->end() ) {
					std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* mapOffsetIdx = searchIndexByOffsetIdx->second;
					if( mapOffsetIdx != NULL ) {
						mapOffsetIdx->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(keepObj->getPKey()), aOffsetIdxObj ) );
					}
				}
			}

			if( indexByUTZNameIdx != NULL ) {
				static const std::string S_AUTZNameIdxObj( "aUTZNameIdxObj" );
				cfsec::ICFSecISOTZoneObj* aUTZNameIdxObj =
					dynamic_cast<cfsec::ICFSecISOTZoneObj*>( keepObj );
				if( aUTZNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUTZNameIdxObj );
				}
				cfsec::CFSecISOTZoneByUTZNameIdxKey keyUTZNameIdx;
				keyUTZNameIdx.setRequiredTZName( keepObj->getRequiredTZName() );
				indexByUTZNameIdx->insert( std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey, cfsec::ICFSecISOTZoneObj* >::value_type( keyUTZNameIdx, aUTZNameIdxObj ) );
			}

			if( indexByIso8601Idx != NULL ) {
				static const std::string S_AIso8601IdxObj( "aIso8601IdxObj" );
				cfsec::ICFSecISOTZoneObj* aIso8601IdxObj =
					dynamic_cast<cfsec::ICFSecISOTZoneObj*>( keepObj );
				if( aIso8601IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIso8601IdxObj );
				}
				cfsec::CFSecISOTZoneByIso8601IdxKey keyIso8601Idx;
				keyIso8601Idx.setRequiredIso8601( keepObj->getRequiredIso8601() );
				auto searchIndexByIso8601Idx = indexByIso8601Idx->find( keyIso8601Idx );
				if( searchIndexByIso8601Idx != indexByIso8601Idx->end() ) {
					std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* mapIso8601Idx = searchIndexByIso8601Idx->second;
					if( mapIso8601Idx != NULL ) {
						mapIso8601Idx->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(keepObj->getPKey()), aIso8601IdxObj ) );
					}
				}
			}

			if( allISOTZone != NULL ) {
				allISOTZone->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByOffsetIdx != NULL ) {
				static const std::string S_AOffsetIdxObj( "aOffsetIdxObj" );
				cfsec::ICFSecISOTZoneObj* aOffsetIdxObj =
					dynamic_cast<cfsec::ICFSecISOTZoneObj*>( keepObj );
				if( aOffsetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AOffsetIdxObj );
				}
				cfsec::CFSecISOTZoneByOffsetIdxKey keyOffsetIdx;
				keyOffsetIdx.setRequiredTZHourOffset( keepObj->getRequiredTZHourOffset() );
				keyOffsetIdx.setRequiredTZMinOffset( keepObj->getRequiredTZMinOffset() );
				auto searchIndexByOffsetIdx = indexByOffsetIdx->find( keyOffsetIdx );
				if( searchIndexByOffsetIdx != indexByOffsetIdx->end() ) {
					std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* mapOffsetIdx = searchIndexByOffsetIdx->second;
					if( mapOffsetIdx != NULL ) {
						mapOffsetIdx->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(keepObj->getPKey()), aOffsetIdxObj ) );
					}
				}
			}

			if( indexByUTZNameIdx != NULL ) {
				static const std::string S_AUTZNameIdxObj( "aUTZNameIdxObj" );
				cfsec::ICFSecISOTZoneObj* aUTZNameIdxObj =
					dynamic_cast<cfsec::ICFSecISOTZoneObj*>( keepObj );
				if( aUTZNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUTZNameIdxObj );
				}
				cfsec::CFSecISOTZoneByUTZNameIdxKey keyUTZNameIdx;
				keyUTZNameIdx.setRequiredTZName( keepObj->getRequiredTZName() );
				indexByUTZNameIdx->insert( std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey, cfsec::ICFSecISOTZoneObj* >::value_type( keyUTZNameIdx, aUTZNameIdxObj ) );
			}

			if( indexByIso8601Idx != NULL ) {
				static const std::string S_AIso8601IdxObj( "aIso8601IdxObj" );
				cfsec::ICFSecISOTZoneObj* aIso8601IdxObj =
					dynamic_cast<cfsec::ICFSecISOTZoneObj*>( keepObj );
				if( aIso8601IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIso8601IdxObj );
				}
				cfsec::CFSecISOTZoneByIso8601IdxKey keyIso8601Idx;
				keyIso8601Idx.setRequiredIso8601( keepObj->getRequiredIso8601() );
				auto searchIndexByIso8601Idx = indexByIso8601Idx->find( keyIso8601Idx );
				if( searchIndexByIso8601Idx != indexByIso8601Idx->end() ) {
					std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* mapIso8601Idx = searchIndexByIso8601Idx->second;
					if( mapIso8601Idx != NULL ) {
						mapIso8601Idx->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(keepObj->getPKey()), aIso8601IdxObj ) );
					}
				}
			}

			if( allISOTZone != NULL ) {
				allISOTZone->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamISOTZoneTableObj::deepDisposeByIdIdx( const int16_t ISOTZoneId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfsec::ICFSecISOTZoneObj*> list;
		cfsec::ICFSecISOTZoneObj* existingObj = readCachedISOTZoneByIdIdx( ISOTZoneId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecISOTZoneObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->reallyDeepDisposeISOTZone( dynamic_cast<cfsec::ICFSecISOTZoneObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamISOTZoneTableObj::deepDisposeByOffsetIdx( const int16_t TZHourOffset,
			const int16_t TZMinOffset ) {
		static const std::string S_ProcName( "deepDisposeByOffsetIdx" );
		std::vector<cfsec::ICFSecISOTZoneObj*> list;
		std::vector<cfsec::ICFSecISOTZoneObj*> matchesFound = readCachedISOTZoneByOffsetIdx( TZHourOffset,
				TZMinOffset );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfsec::ICFSecISOTZoneObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->reallyDeepDisposeISOTZone( dynamic_cast<cfsec::ICFSecISOTZoneObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamISOTZoneTableObj::deepDisposeByUTZNameIdx( const std::string& TZName ) {
		static const std::string S_ProcName( "deepDisposeByUTZNameIdx" );
		std::vector<cfsec::ICFSecISOTZoneObj*> list;
		cfsec::ICFSecISOTZoneObj* existingObj = readCachedISOTZoneByUTZNameIdx( TZName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecISOTZoneObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->reallyDeepDisposeISOTZone( dynamic_cast<cfsec::ICFSecISOTZoneObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamISOTZoneTableObj::deepDisposeByIso8601Idx( const std::string& Iso8601 ) {
		static const std::string S_ProcName( "deepDisposeByIso8601Idx" );
		std::vector<cfsec::ICFSecISOTZoneObj*> list;
		std::vector<cfsec::ICFSecISOTZoneObj*> matchesFound = readCachedISOTZoneByIso8601Idx( Iso8601 );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfsec::ICFSecISOTZoneObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->reallyDeepDisposeISOTZone( dynamic_cast<cfsec::ICFSecISOTZoneObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamISOTZoneTableObj::reallyDeepDisposeISOTZone( cfsec::ICFSecISOTZoneObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeISOTZone" );

		if( Obj == NULL ) {
			return;
		}

		cfsec::ICFSecISOTZoneObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->reallyDetachFromIndexesISOTZone( dynamic_cast<cfsec::ICFSecISOTZoneObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::createISOTZone( cfsec::ICFSecISOTZoneEditObj* Obj ) {
		static const std::string S_ProcName( "createISOTZone" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecISOTZoneObj* obj = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecISOTZoneBuff* buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->createISOTZone(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( cloneable ) );
			obj = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( obj->realize() );
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

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::readISOTZone( cfsec::CFSecISOTZonePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readISOTZone" );
		cfsec::ICFSecISOTZoneObj* obj = NULL;
		cfsec::ICFSecISOTZoneObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecISOTZoneBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredISOTZoneId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( obj->realize() );
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

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::lockISOTZone( cfsec::CFSecISOTZonePKey* pkey ) {
		static const std::string S_ProcName( "lockISOTZone" );
		cfsec::ICFSecISOTZoneObj* locked = NULL;
		cfsec::CFSecISOTZoneBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfsec::ICFSecISOTZoneObj*> CFBamISOTZoneTableObj::readAllISOTZone( bool forceRead ) {
		static const std::string S_ProcName( "readAllISOTZone" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecISOTZoneObj* realized = NULL;
		if( forceRead || ( allISOTZone == NULL ) ) {
			std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* map = new std::map<cfsec::CFSecISOTZonePKey,cfsec::ICFSecISOTZoneObj*>();
			allISOTZone = map;
			std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->readAllDerived( schema->getAuthorization() );
			cfsec::CFSecISOTZoneBuff* buff = NULL;
			cfsec::ICFSecISOTZoneObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allISOTZone->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allISOTZone->size();
		std::vector<cfsec::ICFSecISOTZoneObj*> arr;
		auto valIter = allISOTZone->begin();
		size_t idx = 0;
		while( valIter != allISOTZone->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::readISOTZoneByIdIdx( const int16_t ISOTZoneId, bool forceRead )
	{
		static const std::string S_ProcName( "readISOTZoneByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecISOTZonePKey pkey;
		pkey.setRequiredISOTZoneId( ISOTZoneId );
		cfsec::ICFSecISOTZoneObj* obj = readISOTZone( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfsec::ICFSecISOTZoneObj*> CFBamISOTZoneTableObj::readISOTZoneByOffsetIdx( const int16_t TZHourOffset,
			const int16_t TZMinOffset,
		bool forceRead )
	{
		static const std::string S_ProcName( "readISOTZoneByOffsetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecISOTZoneByOffsetIdxKey key;
		key.setRequiredTZHourOffset( TZHourOffset );
		key.setRequiredTZMinOffset( TZMinOffset );
		std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* dict;
		std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* oldDict;
		if( indexByOffsetIdx == NULL ) {
			indexByOffsetIdx = new std::map< cfsec::CFSecISOTZoneByOffsetIdxKey,
				std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>*>();
		}
		auto searchIndexByOffsetIdx = indexByOffsetIdx->find( key );
		if( searchIndexByOffsetIdx != indexByOffsetIdx->end() ) {
			oldDict = searchIndexByOffsetIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>();
			cfsec::ICFSecISOTZoneObj* obj;
			std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->readDerivedByOffsetIdx( schema->getAuthorization(),
				TZHourOffset,
				TZMinOffset );
			cfsec::CFSecISOTZoneBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfsec::ICFSecISOTZoneObj* realized = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByOffsetIdx->erase( searchIndexByOffsetIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByOffsetIdx->insert( std::map< cfsec::CFSecISOTZoneByOffsetIdxKey,
				std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfsec::ICFSecISOTZoneObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::readISOTZoneByUTZNameIdx( const std::string& TZName, bool forceRead )
	{
		static const std::string S_ProcName( "readISOTZoneByUTZNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUTZNameIdx == NULL ) {
			indexByUTZNameIdx = new std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey,
				cfsec::ICFSecISOTZoneObj*>();
		}
		cfsec::CFSecISOTZoneByUTZNameIdxKey key;
		key.setRequiredTZName( TZName );
		cfsec::ICFSecISOTZoneObj* obj = NULL;
		cfsec::ICFSecISOTZoneObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUTZNameIdx = indexByUTZNameIdx->find( key );
			if( searchIndexByUTZNameIdx != indexByUTZNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUTZNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecISOTZoneBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->readDerivedByUTZNameIdx( schema->getAuthorization(),
				TZName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUTZNameIdx->insert( std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey, cfsec::ICFSecISOTZoneObj*>::value_type( key, dynamic_cast<cfsec::ICFSecISOTZoneObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfsec::ICFSecISOTZoneObj*> CFBamISOTZoneTableObj::readISOTZoneByIso8601Idx( const std::string& Iso8601,
		bool forceRead )
	{
		static const std::string S_ProcName( "readISOTZoneByIso8601Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecISOTZoneByIso8601IdxKey key;
		key.setRequiredIso8601( Iso8601 );
		std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* dict;
		std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* oldDict;
		if( indexByIso8601Idx == NULL ) {
			indexByIso8601Idx = new std::map< cfsec::CFSecISOTZoneByIso8601IdxKey,
				std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>*>();
		}
		auto searchIndexByIso8601Idx = indexByIso8601Idx->find( key );
		if( searchIndexByIso8601Idx != indexByIso8601Idx->end() ) {
			oldDict = searchIndexByIso8601Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>();
			cfsec::ICFSecISOTZoneObj* obj;
			std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->readDerivedByIso8601Idx( schema->getAuthorization(),
				Iso8601 );
			cfsec::CFSecISOTZoneBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfsec::ICFSecISOTZoneObj* realized = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByIso8601Idx->erase( searchIndexByIso8601Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByIso8601Idx->insert( std::map< cfsec::CFSecISOTZoneByIso8601IdxKey,
				std::map< cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfsec::ICFSecISOTZoneObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::readISOTZoneByLookupUTZNameIdx( const std::string& TZName, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readISOTZoneByLookupUTZNameIdx" );
		if( indexByUTZNameIdx == NULL ) {
			indexByUTZNameIdx = new std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey,
				cfsec::ICFSecISOTZoneObj*>();
		}
		cfsec::CFSecISOTZoneByUTZNameIdxKey key;
		key.setRequiredTZName( TZName );
		cfsec::ICFSecISOTZoneObj* obj = NULL;
		cfsec::ICFSecISOTZoneObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUTZNameIdx = indexByUTZNameIdx->find( key );
			if( searchIndexByUTZNameIdx != indexByUTZNameIdx->end() ) {
				obj = searchIndexByUTZNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecISOTZoneBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->readDerivedByLookupUTZNameIdx( schema->getAuthorization(),
				TZName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUTZNameIdx->insert( std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey, cfsec::ICFSecISOTZoneObj*>::value_type( key, dynamic_cast<cfsec::ICFSecISOTZoneObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::readCachedISOTZone( cfsec::CFSecISOTZonePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readISOTZone" );
		cfsec::ICFSecISOTZoneObj* obj = NULL;
		cfsec::ICFSecISOTZoneObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::readCachedISOTZoneByIdIdx( const int16_t ISOTZoneId )
	{
		static const std::string S_ProcName( "readCachedISOTZoneByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecISOTZonePKey pkey;
		pkey.setRequiredISOTZoneId( ISOTZoneId );
		cfsec::ICFSecISOTZoneObj* obj = readCachedISOTZone( &pkey );
		return( obj );
	}

	std::vector<cfsec::ICFSecISOTZoneObj*> CFBamISOTZoneTableObj::readCachedISOTZoneByOffsetIdx( const int16_t TZHourOffset,
			const int16_t TZMinOffset )
	{
		static const std::string S_ProcName( "readCachedISOTZoneByOffsetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfsec::ICFSecISOTZoneObj*> arr;
		cfsec::CFSecISOTZoneByOffsetIdxKey key;
		key.setRequiredTZHourOffset( TZHourOffset );
		key.setRequiredTZMinOffset( TZMinOffset );
		std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* dict;
		if( indexByOffsetIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByOffsetIdx = indexByOffsetIdx->find( key );
		if( searchIndexByOffsetIdx != indexByOffsetIdx->end() ) {
			dict = searchIndexByOffsetIdx->second;
			size_t len = dict->size();
			std::vector<cfsec::ICFSecISOTZoneObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfsec::ICFSecISOTZoneObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecISOTZoneBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::readCachedISOTZoneByUTZNameIdx( const std::string& TZName )
	{
		static const std::string S_ProcName( "readCachedISOTZoneByUTZNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUTZNameIdx == NULL ) {
			indexByUTZNameIdx = new std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey,
				cfsec::ICFSecISOTZoneObj*>();
		}
		cfsec::CFSecISOTZoneByUTZNameIdxKey key;
		key.setRequiredTZName( TZName );
		cfsec::ICFSecISOTZoneObj* obj = NULL;
		auto searchIndexByUTZNameIdx = indexByUTZNameIdx->find( key );
		if( searchIndexByUTZNameIdx != indexByUTZNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUTZNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecISOTZoneBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfsec::ICFSecISOTZoneObj*> CFBamISOTZoneTableObj::readCachedISOTZoneByIso8601Idx( const std::string& Iso8601 )
	{
		static const std::string S_ProcName( "readCachedISOTZoneByIso8601Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfsec::ICFSecISOTZoneObj*> arr;
		cfsec::CFSecISOTZoneByIso8601IdxKey key;
		key.setRequiredIso8601( Iso8601 );
		std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* dict;
		if( indexByIso8601Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByIso8601Idx = indexByIso8601Idx->find( key );
		if( searchIndexByIso8601Idx != indexByIso8601Idx->end() ) {
			dict = searchIndexByIso8601Idx->second;
			size_t len = dict->size();
			std::vector<cfsec::ICFSecISOTZoneObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfsec::ICFSecISOTZoneObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecISOTZoneBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::readCachedISOTZoneByLookupUTZNameIdx( const std::string& TZName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedISOTZoneByLookupUTZNameIdx" );
		if( indexByUTZNameIdx == NULL ) {
			indexByUTZNameIdx = new std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey,
				cfsec::ICFSecISOTZoneObj*>();
		}
		cfsec::CFSecISOTZoneByUTZNameIdxKey key;
		key.setRequiredTZName( TZName );
		cfsec::ICFSecISOTZoneObj* obj = NULL;
		cfsec::ICFSecISOTZoneObj* realized = NULL;
		auto searchIndexByUTZNameIdx = indexByUTZNameIdx->find( key );
		if( searchIndexByUTZNameIdx != indexByUTZNameIdx->end() ) {
			obj = searchIndexByUTZNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecISOTZoneBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneTableObj::updateISOTZone( cfsec::ICFSecISOTZoneEditObj* Obj ) {
		static const std::string S_ProcName( "updateISOTZone" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecISOTZoneObj* obj = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecISOTZoneBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->updateISOTZone( schema->getAuthorization(),
				dynamic_cast<cfsec::CFSecISOTZoneBuff*>( Obj->getISOTZoneBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( dynamic_cast<cfbam::CFBamISOTZoneTableObj*>( schema->getISOTZoneTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfsec::ICFSecISOTZoneObj*>( obj->realize() );
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

	void CFBamISOTZoneTableObj::deleteISOTZone( cfsec::ICFSecISOTZoneEditObj* Obj ) {
		cfsec::ICFSecISOTZoneObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->deleteISOTZone( schema->getAuthorization(),
			obj->getISOTZoneBuff() );
		deepDisposeByIdIdx( obj->getRequiredISOTZoneId() );
	}

	void CFBamISOTZoneTableObj::deleteISOTZoneByIdIdx( const int16_t ISOTZoneId )
	{
		cfsec::CFSecISOTZonePKey pkey;
		pkey.setRequiredISOTZoneId( ISOTZoneId );
		cfsec::ICFSecISOTZoneObj* obj = readISOTZone( &pkey, true );
		if( obj != NULL ) {
			cfsec::ICFSecISOTZoneEditObj* editObj = dynamic_cast<cfsec::ICFSecISOTZoneEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfsec::ICFSecISOTZoneEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamISOTZoneTableObj::deleteISOTZoneByOffsetIdx( const int16_t TZHourOffset,
			const int16_t TZMinOffset )
	{
		dynamic_cast<cfsec::ICFSecSchema*>( schema->getBackingStore() )->getTableISOTZone()->deleteISOTZoneByOffsetIdx( schema->getAuthorization(),
				TZHourOffset,
				TZMinOffset );
		deepDisposeByOffsetIdx( TZHourOffset,
			TZMinOffset );
	}

	void CFBamISOTZoneTableObj::deleteISOTZoneByUTZNameIdx( const std::string& TZName )
	{
		if( indexByUTZNameIdx == NULL ) {
			indexByUTZNameIdx = new std::map< cfsec::CFSecISOTZoneByUTZNameIdxKey,
				cfsec::ICFSecISOTZoneObj*>();
		}
		cfsec::CFSecISOTZoneByUTZNameIdxKey key;
		key.setRequiredTZName( TZName );
		cfsec::ICFSecISOTZoneObj* obj = NULL;
		auto searchIndexByUTZNameIdx = indexByUTZNameIdx->find( key );
		if( searchIndexByUTZNameIdx != indexByUTZNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->deleteISOTZoneByUTZNameIdx( schema->getAuthorization(),
				TZName );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->deleteISOTZoneByUTZNameIdx( schema->getAuthorization(),
				TZName );
		}
		deepDisposeByUTZNameIdx( TZName );
	}

	void CFBamISOTZoneTableObj::deleteISOTZoneByIso8601Idx( const std::string& Iso8601 )
	{
		dynamic_cast<cfsec::ICFSecSchema*>( schema->getBackingStore() )->getTableISOTZone()->deleteISOTZoneByIso8601Idx( schema->getAuthorization(),
				Iso8601 );
		deepDisposeByIso8601Idx( Iso8601 );
	}

	void CFBamISOTZoneTableObj::reallyDetachFromIndexesISOTZone( cfsec::ICFSecISOTZoneObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesISOTZone" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecISOTZoneObj* obj = Obj;
		cfsec::CFSecISOTZonePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfsec::ICFSecISOTZoneObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByOffsetIdx != NULL ) {
				cfsec::CFSecISOTZoneByOffsetIdxKey keyOffsetIdx;
				keyOffsetIdx.setRequiredTZHourOffset( obj->getRequiredTZHourOffset() );
				keyOffsetIdx.setRequiredTZMinOffset( obj->getRequiredTZMinOffset() );
				auto searchOffsetIdx = indexByOffsetIdx->find( keyOffsetIdx );
				if( searchOffsetIdx != indexByOffsetIdx->end() ) {
					std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* mapOffsetIdx = searchOffsetIdx->second;
					if( mapOffsetIdx != NULL ) {
						auto removalProbe = mapOffsetIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapOffsetIdx->end() ) {
							mapOffsetIdx->erase( removalProbe );
							if( mapOffsetIdx->empty() ) {
								delete mapOffsetIdx;
								mapOffsetIdx = NULL;
								indexByOffsetIdx->erase( searchOffsetIdx );
							}
						}
					}
				}
			}

			if( indexByUTZNameIdx != NULL ) {
				cfsec::CFSecISOTZoneByUTZNameIdxKey keyUTZNameIdx;
				keyUTZNameIdx.setRequiredTZName( obj->getRequiredTZName() );
				auto removalProbe = indexByUTZNameIdx->find( keyUTZNameIdx );
				if( removalProbe != indexByUTZNameIdx->end() ) {
					indexByUTZNameIdx->erase( removalProbe );
				}
			}

			if( indexByIso8601Idx != NULL ) {
				cfsec::CFSecISOTZoneByIso8601IdxKey keyIso8601Idx;
				keyIso8601Idx.setRequiredIso8601( obj->getRequiredIso8601() );
				auto searchIso8601Idx = indexByIso8601Idx->find( keyIso8601Idx );
				if( searchIso8601Idx != indexByIso8601Idx->end() ) {
					std::map<cfsec::CFSecISOTZonePKey, cfsec::ICFSecISOTZoneObj*>* mapIso8601Idx = searchIso8601Idx->second;
					if( mapIso8601Idx != NULL ) {
						auto removalProbe = mapIso8601Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapIso8601Idx->end() ) {
							mapIso8601Idx->erase( removalProbe );
							if( mapIso8601Idx->empty() ) {
								delete mapIso8601Idx;
								mapIso8601Idx = NULL;
								indexByIso8601Idx->erase( searchIso8601Idx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
