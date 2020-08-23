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

	const std::string CFBamSecUserTableObj::CLASS_NAME( "CFBamSecUserTableObj" );
	const std::string CFBamSecUserTableObj::TABLE_NAME( "SecUser" );
	const std::string CFBamSecUserTableObj::TABLE_DBNAME( "SecUser" );

	CFBamSecUserTableObj::CFBamSecUserTableObj() {
		schema = NULL;
		members = new std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>();
		allSecUser = NULL;
		indexByULoginIdx = new std::map< cfsec::CFSecSecUserByULoginIdxKey,
			cfsec::ICFSecSecUserObj*>();
		indexByEMConfIdx = new std::map< cfsec::CFSecSecUserByEMConfIdxKey,
			std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>*>();
		indexByPwdResetIdx = new std::map< cfsec::CFSecSecUserByPwdResetIdxKey,
			std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>*>();
		indexByDefDevIdx = new std::map< cfsec::CFSecSecUserByDefDevIdxKey,
			std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>*>();
	}

	CFBamSecUserTableObj::CFBamSecUserTableObj( cfsec::ICFSecSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>();
		allSecUser = NULL;
		indexByULoginIdx = new std::map< cfsec::CFSecSecUserByULoginIdxKey,
			cfsec::ICFSecSecUserObj*>();
		indexByEMConfIdx = new std::map< cfsec::CFSecSecUserByEMConfIdxKey,
			std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>*>();
		indexByPwdResetIdx = new std::map< cfsec::CFSecSecUserByPwdResetIdxKey,
			std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>*>();
		indexByDefDevIdx = new std::map< cfsec::CFSecSecUserByDefDevIdxKey,
			std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>*>();
	}

	CFBamSecUserTableObj::~CFBamSecUserTableObj() {
		minimizeMemory();
		if( indexByULoginIdx != NULL ) {
			delete indexByULoginIdx;
			indexByULoginIdx = NULL;
		}
		if( indexByEMConfIdx != NULL ) {
			delete indexByEMConfIdx;
			indexByEMConfIdx = NULL;
		}
		if( indexByPwdResetIdx != NULL ) {
			delete indexByPwdResetIdx;
			indexByPwdResetIdx = NULL;
		}
		if( indexByDefDevIdx != NULL ) {
			delete indexByDefDevIdx;
			indexByDefDevIdx = NULL;
		}
		if( members != NULL ) {
			cfsec::ICFSecSecUserObj* curMember;
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

	cfsec::ICFSecSchemaObj* CFBamSecUserTableObj::getSchema() {
		return( schema );
	}

	void CFBamSecUserTableObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamSecUserTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamSecUserTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamSecUserTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFBamSecUserTableObj::minimizeMemory() {
		if( allSecUser != NULL ) {
			allSecUser->clear();
			delete allSecUser;
			allSecUser = NULL;
		}
		if( indexByULoginIdx != NULL ) {
			indexByULoginIdx->clear();
		}
		if( indexByEMConfIdx != NULL ) {
			std::map< cfsec::CFSecSecUserByEMConfIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* >::iterator iterByEMConfIdx = indexByEMConfIdx->begin();
			std::map< cfsec::CFSecSecUserByEMConfIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* >::iterator endByEMConfIdx = indexByEMConfIdx->end();
			std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* curByEMConfIdx = NULL;
			while( iterByEMConfIdx != endByEMConfIdx ) {
				curByEMConfIdx = iterByEMConfIdx->second;
				if( curByEMConfIdx != NULL ) {
					curByEMConfIdx->clear();
					delete curByEMConfIdx;
					curByEMConfIdx = NULL;
					iterByEMConfIdx->second = NULL;
				}
				iterByEMConfIdx ++;
			}
			indexByEMConfIdx->clear();
		}
		if( indexByPwdResetIdx != NULL ) {
			std::map< cfsec::CFSecSecUserByPwdResetIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* >::iterator iterByPwdResetIdx = indexByPwdResetIdx->begin();
			std::map< cfsec::CFSecSecUserByPwdResetIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* >::iterator endByPwdResetIdx = indexByPwdResetIdx->end();
			std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* curByPwdResetIdx = NULL;
			while( iterByPwdResetIdx != endByPwdResetIdx ) {
				curByPwdResetIdx = iterByPwdResetIdx->second;
				if( curByPwdResetIdx != NULL ) {
					curByPwdResetIdx->clear();
					delete curByPwdResetIdx;
					curByPwdResetIdx = NULL;
					iterByPwdResetIdx->second = NULL;
				}
				iterByPwdResetIdx ++;
			}
			indexByPwdResetIdx->clear();
		}
		if( indexByDefDevIdx != NULL ) {
			std::map< cfsec::CFSecSecUserByDefDevIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* >::iterator iterByDefDevIdx = indexByDefDevIdx->begin();
			std::map< cfsec::CFSecSecUserByDefDevIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* >::iterator endByDefDevIdx = indexByDefDevIdx->end();
			std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* curByDefDevIdx = NULL;
			while( iterByDefDevIdx != endByDefDevIdx ) {
				curByDefDevIdx = iterByDefDevIdx->second;
				if( curByDefDevIdx != NULL ) {
					curByDefDevIdx->clear();
					delete curByDefDevIdx;
					curByDefDevIdx = NULL;
					iterByDefDevIdx->second = NULL;
				}
				iterByDefDevIdx ++;
			}
			indexByDefDevIdx->clear();
		}
		if( members != NULL ) {
			cfsec::ICFSecSecUserObj* cur = NULL;
			cfsec::ICFSecSecUserEditObj* edit = NULL;
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

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::newInstance() {
		cfsec::ICFSecSecUserObj* inst = dynamic_cast<cfsec::ICFSecSecUserObj*>( new CFBamSecUserObj( schema ) );
		return( inst );
	}

	cfsec::ICFSecSecUserEditObj* CFBamSecUserTableObj::newEditInstance( cfsec::ICFSecSecUserObj* orig ) {
		cfsec::ICFSecSecUserEditObj* edit = dynamic_cast<cfsec::ICFSecSecUserEditObj*>( new CFBamSecUserEditObj( orig ));
		return( edit );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::realizeSecUser( cfsec::ICFSecSecUserObj* Obj ) {
		static const std::string S_ProcName( "realizeSecUser" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecSecUserObj* obj = Obj;
		cfsec::ICFSecSecUserObj* existingObj = NULL;
		cfsec::CFSecSecUserPKey* pkey = obj->getPKey();
		cfsec::ICFSecSecUserObj* keepObj = NULL;
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
			if( indexByULoginIdx != NULL ) {
				cfsec::CFSecSecUserByULoginIdxKey keyULoginIdx;
				keyULoginIdx.setRequiredLoginId( keepObj->getRequiredLoginId() );
				auto removalProbe = indexByULoginIdx->find( keyULoginIdx );
				if( removalProbe != indexByULoginIdx->end() ) {
					indexByULoginIdx->erase( removalProbe );
				}
			}

			if( indexByEMConfIdx != NULL ) {
				cfsec::CFSecSecUserByEMConfIdxKey keyEMConfIdx;
				if( keepObj->isOptionalEMailConfirmUuidNull() ) {
					keyEMConfIdx.setOptionalEMailConfirmUuidNull();
				}
				else {
					keyEMConfIdx.setOptionalEMailConfirmUuidValue( keepObj->getOptionalEMailConfirmUuidValue() );
				}
				auto searchEMConfIdx = indexByEMConfIdx->find( keyEMConfIdx );
				if( searchEMConfIdx != indexByEMConfIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapEMConfIdx = searchEMConfIdx->second;
					if( mapEMConfIdx != NULL ) {
						auto removalProbe = mapEMConfIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapEMConfIdx->end() ) {
							mapEMConfIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByPwdResetIdx != NULL ) {
				cfsec::CFSecSecUserByPwdResetIdxKey keyPwdResetIdx;
				if( keepObj->isOptionalPasswordResetUuidNull() ) {
					keyPwdResetIdx.setOptionalPasswordResetUuidNull();
				}
				else {
					keyPwdResetIdx.setOptionalPasswordResetUuidValue( keepObj->getOptionalPasswordResetUuidValue() );
				}
				auto searchPwdResetIdx = indexByPwdResetIdx->find( keyPwdResetIdx );
				if( searchPwdResetIdx != indexByPwdResetIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapPwdResetIdx = searchPwdResetIdx->second;
					if( mapPwdResetIdx != NULL ) {
						auto removalProbe = mapPwdResetIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPwdResetIdx->end() ) {
							mapPwdResetIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefDevIdx != NULL ) {
				cfsec::CFSecSecUserByDefDevIdxKey keyDefDevIdx;
				if( keepObj->isOptionalDfltDevUserIdNull() ) {
					keyDefDevIdx.setOptionalDfltDevUserIdNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevUserIdValue( keepObj->getOptionalDfltDevUserIdValue() );
				}
				if( keepObj->isOptionalDfltDevNameNull() ) {
					keyDefDevIdx.setOptionalDfltDevNameNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevNameValue( keepObj->getOptionalDfltDevNameValue() );
				}
				auto searchDefDevIdx = indexByDefDevIdx->find( keyDefDevIdx );
				if( searchDefDevIdx != indexByDefDevIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapDefDevIdx = searchDefDevIdx->second;
					if( mapDefDevIdx != NULL ) {
						auto removalProbe = mapDefDevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDefDevIdx->end() ) {
							mapDefDevIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfsec::CFSecSecUserBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByULoginIdx != NULL ) {
				static const std::string S_AULoginIdxObj( "aULoginIdxObj" );
				cfsec::ICFSecSecUserObj* aULoginIdxObj =
					dynamic_cast<cfsec::ICFSecSecUserObj*>( keepObj );
				if( aULoginIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AULoginIdxObj );
				}
				cfsec::CFSecSecUserByULoginIdxKey keyULoginIdx;
				keyULoginIdx.setRequiredLoginId( keepObj->getRequiredLoginId() );
				indexByULoginIdx->insert( std::map< cfsec::CFSecSecUserByULoginIdxKey, cfsec::ICFSecSecUserObj* >::value_type( keyULoginIdx, aULoginIdxObj ) );
			}

			if( indexByEMConfIdx != NULL ) {
				static const std::string S_AEMConfIdxObj( "aEMConfIdxObj" );
				cfsec::ICFSecSecUserObj* aEMConfIdxObj =
					dynamic_cast<cfsec::ICFSecSecUserObj*>( keepObj );
				if( aEMConfIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEMConfIdxObj );
				}
				cfsec::CFSecSecUserByEMConfIdxKey keyEMConfIdx;
				if( keepObj->isOptionalEMailConfirmUuidNull() ) {
					keyEMConfIdx.setOptionalEMailConfirmUuidNull();
				}
				else {
					keyEMConfIdx.setOptionalEMailConfirmUuidValue( keepObj->getOptionalEMailConfirmUuidValue() );
				}
				auto searchIndexByEMConfIdx = indexByEMConfIdx->find( keyEMConfIdx );
				if( searchIndexByEMConfIdx != indexByEMConfIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapEMConfIdx = searchIndexByEMConfIdx->second;
					if( mapEMConfIdx != NULL ) {
						mapEMConfIdx->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(keepObj->getPKey()), aEMConfIdxObj ) );
					}
				}
			}

			if( indexByPwdResetIdx != NULL ) {
				static const std::string S_APwdResetIdxObj( "aPwdResetIdxObj" );
				cfsec::ICFSecSecUserObj* aPwdResetIdxObj =
					dynamic_cast<cfsec::ICFSecSecUserObj*>( keepObj );
				if( aPwdResetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APwdResetIdxObj );
				}
				cfsec::CFSecSecUserByPwdResetIdxKey keyPwdResetIdx;
				if( keepObj->isOptionalPasswordResetUuidNull() ) {
					keyPwdResetIdx.setOptionalPasswordResetUuidNull();
				}
				else {
					keyPwdResetIdx.setOptionalPasswordResetUuidValue( keepObj->getOptionalPasswordResetUuidValue() );
				}
				auto searchIndexByPwdResetIdx = indexByPwdResetIdx->find( keyPwdResetIdx );
				if( searchIndexByPwdResetIdx != indexByPwdResetIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapPwdResetIdx = searchIndexByPwdResetIdx->second;
					if( mapPwdResetIdx != NULL ) {
						mapPwdResetIdx->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(keepObj->getPKey()), aPwdResetIdxObj ) );
					}
				}
			}

			if( indexByDefDevIdx != NULL ) {
				static const std::string S_ADefDevIdxObj( "aDefDevIdxObj" );
				cfsec::ICFSecSecUserObj* aDefDevIdxObj =
					dynamic_cast<cfsec::ICFSecSecUserObj*>( keepObj );
				if( aDefDevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefDevIdxObj );
				}
				cfsec::CFSecSecUserByDefDevIdxKey keyDefDevIdx;
				if( keepObj->isOptionalDfltDevUserIdNull() ) {
					keyDefDevIdx.setOptionalDfltDevUserIdNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevUserIdValue( keepObj->getOptionalDfltDevUserIdValue() );
				}
				if( keepObj->isOptionalDfltDevNameNull() ) {
					keyDefDevIdx.setOptionalDfltDevNameNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevNameValue( keepObj->getOptionalDfltDevNameValue() );
				}
				auto searchIndexByDefDevIdx = indexByDefDevIdx->find( keyDefDevIdx );
				if( searchIndexByDefDevIdx != indexByDefDevIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapDefDevIdx = searchIndexByDefDevIdx->second;
					if( mapDefDevIdx != NULL ) {
						mapDefDevIdx->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(keepObj->getPKey()), aDefDevIdxObj ) );
					}
				}
			}

			if( allSecUser != NULL ) {
				allSecUser->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByULoginIdx != NULL ) {
				static const std::string S_AULoginIdxObj( "aULoginIdxObj" );
				cfsec::ICFSecSecUserObj* aULoginIdxObj =
					dynamic_cast<cfsec::ICFSecSecUserObj*>( keepObj );
				if( aULoginIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AULoginIdxObj );
				}
				cfsec::CFSecSecUserByULoginIdxKey keyULoginIdx;
				keyULoginIdx.setRequiredLoginId( keepObj->getRequiredLoginId() );
				indexByULoginIdx->insert( std::map< cfsec::CFSecSecUserByULoginIdxKey, cfsec::ICFSecSecUserObj* >::value_type( keyULoginIdx, aULoginIdxObj ) );
			}

			if( indexByEMConfIdx != NULL ) {
				static const std::string S_AEMConfIdxObj( "aEMConfIdxObj" );
				cfsec::ICFSecSecUserObj* aEMConfIdxObj =
					dynamic_cast<cfsec::ICFSecSecUserObj*>( keepObj );
				if( aEMConfIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEMConfIdxObj );
				}
				cfsec::CFSecSecUserByEMConfIdxKey keyEMConfIdx;
				if( keepObj->isOptionalEMailConfirmUuidNull() ) {
					keyEMConfIdx.setOptionalEMailConfirmUuidNull();
				}
				else {
					keyEMConfIdx.setOptionalEMailConfirmUuidValue( keepObj->getOptionalEMailConfirmUuidValue() );
				}
				auto searchIndexByEMConfIdx = indexByEMConfIdx->find( keyEMConfIdx );
				if( searchIndexByEMConfIdx != indexByEMConfIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapEMConfIdx = searchIndexByEMConfIdx->second;
					if( mapEMConfIdx != NULL ) {
						mapEMConfIdx->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(keepObj->getPKey()), aEMConfIdxObj ) );
					}
				}
			}

			if( indexByPwdResetIdx != NULL ) {
				static const std::string S_APwdResetIdxObj( "aPwdResetIdxObj" );
				cfsec::ICFSecSecUserObj* aPwdResetIdxObj =
					dynamic_cast<cfsec::ICFSecSecUserObj*>( keepObj );
				if( aPwdResetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APwdResetIdxObj );
				}
				cfsec::CFSecSecUserByPwdResetIdxKey keyPwdResetIdx;
				if( keepObj->isOptionalPasswordResetUuidNull() ) {
					keyPwdResetIdx.setOptionalPasswordResetUuidNull();
				}
				else {
					keyPwdResetIdx.setOptionalPasswordResetUuidValue( keepObj->getOptionalPasswordResetUuidValue() );
				}
				auto searchIndexByPwdResetIdx = indexByPwdResetIdx->find( keyPwdResetIdx );
				if( searchIndexByPwdResetIdx != indexByPwdResetIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapPwdResetIdx = searchIndexByPwdResetIdx->second;
					if( mapPwdResetIdx != NULL ) {
						mapPwdResetIdx->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(keepObj->getPKey()), aPwdResetIdxObj ) );
					}
				}
			}

			if( indexByDefDevIdx != NULL ) {
				static const std::string S_ADefDevIdxObj( "aDefDevIdxObj" );
				cfsec::ICFSecSecUserObj* aDefDevIdxObj =
					dynamic_cast<cfsec::ICFSecSecUserObj*>( keepObj );
				if( aDefDevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefDevIdxObj );
				}
				cfsec::CFSecSecUserByDefDevIdxKey keyDefDevIdx;
				if( keepObj->isOptionalDfltDevUserIdNull() ) {
					keyDefDevIdx.setOptionalDfltDevUserIdNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevUserIdValue( keepObj->getOptionalDfltDevUserIdValue() );
				}
				if( keepObj->isOptionalDfltDevNameNull() ) {
					keyDefDevIdx.setOptionalDfltDevNameNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevNameValue( keepObj->getOptionalDfltDevNameValue() );
				}
				auto searchIndexByDefDevIdx = indexByDefDevIdx->find( keyDefDevIdx );
				if( searchIndexByDefDevIdx != indexByDefDevIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapDefDevIdx = searchIndexByDefDevIdx->second;
					if( mapDefDevIdx != NULL ) {
						mapDefDevIdx->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(keepObj->getPKey()), aDefDevIdxObj ) );
					}
				}
			}

			if( allSecUser != NULL ) {
				allSecUser->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamSecUserTableObj::deepDisposeByIdIdx( const uuid_ptr_t SecUserId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfsec::ICFSecSecUserObj*> list;
		cfsec::ICFSecSecUserObj* existingObj = readCachedSecUserByIdIdx( SecUserId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfsec::ICFSecSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSecUserTableObj::deepDisposeByULoginIdx( const std::string& LoginId ) {
		static const std::string S_ProcName( "deepDisposeByULoginIdx" );
		std::vector<cfsec::ICFSecSecUserObj*> list;
		cfsec::ICFSecSecUserObj* existingObj = readCachedSecUserByULoginIdx( LoginId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfsec::ICFSecSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSecUserTableObj::deepDisposeByEMConfIdx( const uuid_ptr_t EMailConfirmUuid ) {
		static const std::string S_ProcName( "deepDisposeByEMConfIdx" );
		std::vector<cfsec::ICFSecSecUserObj*> list;
		std::vector<cfsec::ICFSecSecUserObj*> matchesFound = readCachedSecUserByEMConfIdx( EMailConfirmUuid );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfsec::ICFSecSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfsec::ICFSecSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSecUserTableObj::deepDisposeByPwdResetIdx( const uuid_ptr_t PasswordResetUuid ) {
		static const std::string S_ProcName( "deepDisposeByPwdResetIdx" );
		std::vector<cfsec::ICFSecSecUserObj*> list;
		std::vector<cfsec::ICFSecSecUserObj*> matchesFound = readCachedSecUserByPwdResetIdx( PasswordResetUuid );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfsec::ICFSecSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfsec::ICFSecSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSecUserTableObj::deepDisposeByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName ) {
		static const std::string S_ProcName( "deepDisposeByDefDevIdx" );
		std::vector<cfsec::ICFSecSecUserObj*> list;
		std::vector<cfsec::ICFSecSecUserObj*> matchesFound = readCachedSecUserByDefDevIdx( DfltDevUserId,
				DfltDevName );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfsec::ICFSecSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfsec::ICFSecSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSecUserTableObj::reallyDeepDisposeSecUser( cfsec::ICFSecSecUserObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecUser" );

		if( Obj == NULL ) {
			return;
		}

		cfsec::ICFSecSecUserObj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamTSecGrpMembTableObj*>( schema->getTSecGrpMembTableObj() )->deepDisposeByUserIdx( obj->getRequiredSecUserId() );
		dynamic_cast<cfbam::CFBamSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->deepDisposeByUserIdx( obj->getRequiredSecUserId() );
		dynamic_cast<cfbam::CFBamSecSessionTableObj*>( schema->getSecSessionTableObj() )->deepDisposeBySecUserIdx( obj->getRequiredSecUserId() );
		dynamic_cast<cfbam::CFBamSecSessionTableObj*>( schema->getSecSessionTableObj() )->deepDisposeBySecProxyIdx( obj->getRequiredSecUserIdReference() );
		dynamic_cast<cfbam::CFBamSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->deepDisposeByUserIdx( obj->getRequiredSecUserId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfsec::CFSecSecUserBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDetachFromIndexesSecUser( dynamic_cast<cfsec::ICFSecSecUserObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::createSecUser( cfsec::ICFSecSecUserEditObj* Obj ) {
		static const std::string S_ProcName( "createSecUser" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecSecUserObj* obj = dynamic_cast<cfsec::ICFSecSecUserObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecSecUserBuff* buff = dynamic_cast<cfsec::CFSecSecUserBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->createSecUser(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfsec::CFSecSecUserBuff*>( cloneable ) );
			obj = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
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

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::readSecUser( cfsec::CFSecSecUserPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecUser" );
		cfsec::ICFSecSecUserObj* obj = NULL;
		cfsec::ICFSecSecUserObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecSecUserBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredSecUserId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
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

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::lockSecUser( cfsec::CFSecSecUserPKey* pkey ) {
		static const std::string S_ProcName( "lockSecUser" );
		cfsec::ICFSecSecUserObj* locked = NULL;
		cfsec::CFSecSecUserBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfsec::ICFSecSecUserObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::readAllSecUser( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecUser" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecSecUserObj* realized = NULL;
		if( forceRead || ( allSecUser == NULL ) ) {
			std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* map = new std::map<cfsec::CFSecSecUserPKey,cfsec::ICFSecSecUserObj*>();
			allSecUser = map;
			std::TCFLibOwningVector<cfsec::CFSecSecUserBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->readAllDerived( schema->getAuthorization() );
			cfsec::CFSecSecUserBuff* buff = NULL;
			cfsec::ICFSecSecUserObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecUser->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecUser->size();
		std::vector<cfsec::ICFSecSecUserObj*> arr;
		auto valIter = allSecUser->begin();
		size_t idx = 0;
		while( valIter != allSecUser->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::pageAllSecUser(const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecUser" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* map = NULL;
		cfsec::CFSecSecUserBuff* buff = NULL;
		cfsec::ICFSecSecUserObj* obj = NULL;
		cfsec::ICFSecSecUserObj* realized = NULL;
		std::vector<cfsec::ICFSecSecUserObj*> arrayList;
		try {
			map = new std::map<cfsec::CFSecSecUserPKey,cfsec::ICFSecSecUserObj*>();
			std::TCFLibOwningVector<cfsec::CFSecSecUserBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->pageAllBuff( schema->getAuthorization(),
				priorSecUserId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
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

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::readSecUserByIdIdx( const uuid_ptr_t SecUserId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecUserPKey pkey;
		pkey.setRequiredSecUserId( SecUserId );
		cfsec::ICFSecSecUserObj* obj = readSecUser( &pkey, forceRead );
		return( obj );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::readSecUserByULoginIdx( const std::string& LoginId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByULoginIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfsec::CFSecSecUserByULoginIdxKey,
				cfsec::ICFSecSecUserObj*>();
		}
		cfsec::CFSecSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfsec::ICFSecSecUserObj* obj = NULL;
		cfsec::ICFSecSecUserObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
			if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByULoginIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecSecUserBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByULoginIdx( schema->getAuthorization(),
				LoginId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByULoginIdx->insert( std::map< cfsec::CFSecSecUserByULoginIdxKey, cfsec::ICFSecSecUserObj*>::value_type( key, dynamic_cast<cfsec::ICFSecSecUserObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::readSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByEMConfIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecUserByEMConfIdxKey key;
		if( EMailConfirmUuid == NULL ) {
			key.setOptionalEMailConfirmUuidNull();
		}
		else {
			key.setOptionalEMailConfirmUuidValue( EMailConfirmUuid );
		}
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* dict;
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* oldDict;
		if( indexByEMConfIdx == NULL ) {
			indexByEMConfIdx = new std::map< cfsec::CFSecSecUserByEMConfIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>*>();
		}
		auto searchIndexByEMConfIdx = indexByEMConfIdx->find( key );
		if( searchIndexByEMConfIdx != indexByEMConfIdx->end() ) {
			oldDict = searchIndexByEMConfIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>();
			cfsec::ICFSecSecUserObj* obj;
			std::TCFLibOwningVector<cfsec::CFSecSecUserBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByEMConfIdx( schema->getAuthorization(),
				EMailConfirmUuid );
			cfsec::CFSecSecUserBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfsec::ICFSecSecUserObj* realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByEMConfIdx->erase( searchIndexByEMConfIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByEMConfIdx->insert( std::map< cfsec::CFSecSecUserByEMConfIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfsec::ICFSecSecUserObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::readSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByPwdResetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecUserByPwdResetIdxKey key;
		if( PasswordResetUuid == NULL ) {
			key.setOptionalPasswordResetUuidNull();
		}
		else {
			key.setOptionalPasswordResetUuidValue( PasswordResetUuid );
		}
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* dict;
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* oldDict;
		if( indexByPwdResetIdx == NULL ) {
			indexByPwdResetIdx = new std::map< cfsec::CFSecSecUserByPwdResetIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>*>();
		}
		auto searchIndexByPwdResetIdx = indexByPwdResetIdx->find( key );
		if( searchIndexByPwdResetIdx != indexByPwdResetIdx->end() ) {
			oldDict = searchIndexByPwdResetIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>();
			cfsec::ICFSecSecUserObj* obj;
			std::TCFLibOwningVector<cfsec::CFSecSecUserBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByPwdResetIdx( schema->getAuthorization(),
				PasswordResetUuid );
			cfsec::CFSecSecUserBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfsec::ICFSecSecUserObj* realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPwdResetIdx->erase( searchIndexByPwdResetIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPwdResetIdx->insert( std::map< cfsec::CFSecSecUserByPwdResetIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfsec::ICFSecSecUserObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::readSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByDefDevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecUserByDefDevIdxKey key;
		if( DfltDevUserId == NULL ) {
			key.setOptionalDfltDevUserIdNull();
		}
		else {
			key.setOptionalDfltDevUserIdValue( DfltDevUserId );
		}
		if( DfltDevName == NULL ) {
			key.setOptionalDfltDevNameNull();
		}
		else {
			key.setOptionalDfltDevNameValue( *DfltDevName );
		}
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* dict;
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* oldDict;
		if( indexByDefDevIdx == NULL ) {
			indexByDefDevIdx = new std::map< cfsec::CFSecSecUserByDefDevIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>*>();
		}
		auto searchIndexByDefDevIdx = indexByDefDevIdx->find( key );
		if( searchIndexByDefDevIdx != indexByDefDevIdx->end() ) {
			oldDict = searchIndexByDefDevIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>();
			cfsec::ICFSecSecUserObj* obj;
			std::TCFLibOwningVector<cfsec::CFSecSecUserBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByDefDevIdx( schema->getAuthorization(),
				DfltDevUserId,
				DfltDevName );
			cfsec::CFSecSecUserBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfsec::ICFSecSecUserObj* realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefDevIdx->erase( searchIndexByDefDevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefDevIdx->insert( std::map< cfsec::CFSecSecUserByDefDevIdxKey,
				std::map< cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfsec::ICFSecSecUserObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::readSecUserByLookupULoginIdx( const std::string& LoginId, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readSecUserByLookupULoginIdx" );
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfsec::CFSecSecUserByULoginIdxKey,
				cfsec::ICFSecSecUserObj*>();
		}
		cfsec::CFSecSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfsec::ICFSecSecUserObj* obj = NULL;
		cfsec::ICFSecSecUserObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
			if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
				obj = searchIndexByULoginIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecSecUserBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByLookupULoginIdx( schema->getAuthorization(),
				LoginId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfsec::ICFSecSecUserObj*>( dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByULoginIdx->insert( std::map< cfsec::CFSecSecUserByULoginIdxKey, cfsec::ICFSecSecUserObj*>::value_type( key, dynamic_cast<cfsec::ICFSecSecUserObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::readCachedSecUser( cfsec::CFSecSecUserPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecUser" );
		cfsec::ICFSecSecUserObj* obj = NULL;
		cfsec::ICFSecSecUserObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::readCachedSecUserByIdIdx( const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readCachedSecUserByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecUserPKey pkey;
		pkey.setRequiredSecUserId( SecUserId );
		cfsec::ICFSecSecUserObj* obj = readCachedSecUser( &pkey );
		return( obj );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::readCachedSecUserByULoginIdx( const std::string& LoginId )
	{
		static const std::string S_ProcName( "readCachedSecUserByULoginIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfsec::CFSecSecUserByULoginIdxKey,
				cfsec::ICFSecSecUserObj*>();
		}
		cfsec::CFSecSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfsec::ICFSecSecUserObj* obj = NULL;
		auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
		if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByULoginIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecSecUserBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::readCachedSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid )
	{
		static const std::string S_ProcName( "readCachedSecUserByEMConfIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfsec::ICFSecSecUserObj*> arr;
		cfsec::CFSecSecUserByEMConfIdxKey key;
		if( EMailConfirmUuid == NULL ) {
			key.setOptionalEMailConfirmUuidNull();
		}
		else {
			key.setOptionalEMailConfirmUuidValue( EMailConfirmUuid );
		}
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* dict;
		if( indexByEMConfIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByEMConfIdx = indexByEMConfIdx->find( key );
		if( searchIndexByEMConfIdx != indexByEMConfIdx->end() ) {
			dict = searchIndexByEMConfIdx->second;
			size_t len = dict->size();
			std::vector<cfsec::ICFSecSecUserObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfsec::ICFSecSecUserObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecSecUserBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::readCachedSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid )
	{
		static const std::string S_ProcName( "readCachedSecUserByPwdResetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfsec::ICFSecSecUserObj*> arr;
		cfsec::CFSecSecUserByPwdResetIdxKey key;
		if( PasswordResetUuid == NULL ) {
			key.setOptionalPasswordResetUuidNull();
		}
		else {
			key.setOptionalPasswordResetUuidValue( PasswordResetUuid );
		}
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* dict;
		if( indexByPwdResetIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPwdResetIdx = indexByPwdResetIdx->find( key );
		if( searchIndexByPwdResetIdx != indexByPwdResetIdx->end() ) {
			dict = searchIndexByPwdResetIdx->second;
			size_t len = dict->size();
			std::vector<cfsec::ICFSecSecUserObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfsec::ICFSecSecUserObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecSecUserBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::readCachedSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName )
	{
		static const std::string S_ProcName( "readCachedSecUserByDefDevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfsec::ICFSecSecUserObj*> arr;
		cfsec::CFSecSecUserByDefDevIdxKey key;
		if( DfltDevUserId == NULL ) {
			key.setOptionalDfltDevUserIdNull();
		}
		else {
			key.setOptionalDfltDevUserIdValue( DfltDevUserId );
		}
		if( DfltDevName == NULL ) {
			key.setOptionalDfltDevNameNull();
		}
		else {
			key.setOptionalDfltDevNameValue( *DfltDevName );
		}
		std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* dict;
		if( indexByDefDevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefDevIdx = indexByDefDevIdx->find( key );
		if( searchIndexByDefDevIdx != indexByDefDevIdx->end() ) {
			dict = searchIndexByDefDevIdx->second;
			size_t len = dict->size();
			std::vector<cfsec::ICFSecSecUserObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfsec::ICFSecSecUserObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecSecUserBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::readCachedSecUserByLookupULoginIdx( const std::string& LoginId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedSecUserByLookupULoginIdx" );
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfsec::CFSecSecUserByULoginIdxKey,
				cfsec::ICFSecSecUserObj*>();
		}
		cfsec::CFSecSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfsec::ICFSecSecUserObj* obj = NULL;
		cfsec::ICFSecSecUserObj* realized = NULL;
		auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
		if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
			obj = searchIndexByULoginIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecSecUserBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::pageSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageSecUserByEMConfIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecUserByEMConfIdxKey key;
		if( EMailConfirmUuid == NULL ) {
			key.setOptionalEMailConfirmUuidNull();
		}
		else {
			key.setOptionalEMailConfirmUuidValue( EMailConfirmUuid );
		}
		cfsec::ICFSecSecUserObj* obj;
		std::TCFLibOwningVector<cfsec::CFSecSecUserBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->pageBuffByEMConfIdx( schema->getAuthorization(),
				EMailConfirmUuid,
				priorSecUserId );
		std::vector<cfsec::ICFSecSecUserObj*> retList;
		retList.reserve( buffList.size() );
		cfsec::CFSecSecUserBuff* buff;
		cfsec::ICFSecSecUserObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
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

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::pageSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageSecUserByPwdResetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecUserByPwdResetIdxKey key;
		if( PasswordResetUuid == NULL ) {
			key.setOptionalPasswordResetUuidNull();
		}
		else {
			key.setOptionalPasswordResetUuidValue( PasswordResetUuid );
		}
		cfsec::ICFSecSecUserObj* obj;
		std::TCFLibOwningVector<cfsec::CFSecSecUserBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->pageBuffByPwdResetIdx( schema->getAuthorization(),
				PasswordResetUuid,
				priorSecUserId );
		std::vector<cfsec::ICFSecSecUserObj*> retList;
		retList.reserve( buffList.size() );
		cfsec::CFSecSecUserBuff* buff;
		cfsec::ICFSecSecUserObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
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

	std::vector<cfsec::ICFSecSecUserObj*> CFBamSecUserTableObj::pageSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageSecUserByDefDevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecUserByDefDevIdxKey key;
		if( DfltDevUserId == NULL ) {
			key.setOptionalDfltDevUserIdNull();
		}
		else {
			key.setOptionalDfltDevUserIdValue( DfltDevUserId );
		}
		if( DfltDevName == NULL ) {
			key.setOptionalDfltDevNameNull();
		}
		else {
			key.setOptionalDfltDevNameValue( *DfltDevName );
		}
		cfsec::ICFSecSecUserObj* obj;
		std::TCFLibOwningVector<cfsec::CFSecSecUserBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->pageBuffByDefDevIdx( schema->getAuthorization(),
				DfltDevUserId,
				DfltDevName,
				priorSecUserId );
		std::vector<cfsec::ICFSecSecUserObj*> retList;
		retList.reserve( buffList.size() );
		cfsec::CFSecSecUserBuff* buff;
		cfsec::ICFSecSecUserObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
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

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::updateSecUser( cfsec::ICFSecSecUserEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecUser" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecSecUserObj* obj = dynamic_cast<cfsec::ICFSecSecUserObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecSecUserBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->updateSecUser( schema->getAuthorization(),
				dynamic_cast<cfsec::CFSecSecUserBuff*>( Obj->getSecUserBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfsec::ICFSecSecUserObj*>( dynamic_cast<cfbam::CFBamSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfsec::ICFSecSecUserObj*>( obj->realize() );
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

	void CFBamSecUserTableObj::deleteSecUser( cfsec::ICFSecSecUserEditObj* Obj ) {
		cfsec::ICFSecSecUserObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUser( schema->getAuthorization(),
			obj->getSecUserBuff() );
		deepDisposeByIdIdx( obj->getRequiredSecUserId() );
	}

	void CFBamSecUserTableObj::deleteSecUserByIdIdx( const uuid_ptr_t SecUserId )
	{
		cfsec::CFSecSecUserPKey pkey;
		pkey.setRequiredSecUserId( SecUserId );
		cfsec::ICFSecSecUserObj* obj = readSecUser( &pkey, true );
		if( obj != NULL ) {
			cfsec::ICFSecSecUserEditObj* editObj = dynamic_cast<cfsec::ICFSecSecUserEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfsec::ICFSecSecUserEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamSecUserTableObj::deleteSecUserByULoginIdx( const std::string& LoginId )
	{
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfsec::CFSecSecUserByULoginIdxKey,
				cfsec::ICFSecSecUserObj*>();
		}
		cfsec::CFSecSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfsec::ICFSecSecUserObj* obj = NULL;
		auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
		if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByULoginIdx( schema->getAuthorization(),
				LoginId );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByULoginIdx( schema->getAuthorization(),
				LoginId );
		}
		deepDisposeByULoginIdx( LoginId );
	}

	void CFBamSecUserTableObj::deleteSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid )
	{
		dynamic_cast<cfsec::ICFSecSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByEMConfIdx( schema->getAuthorization(),
				EMailConfirmUuid );
		deepDisposeByEMConfIdx( EMailConfirmUuid );
	}

	void CFBamSecUserTableObj::deleteSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid )
	{
		dynamic_cast<cfsec::ICFSecSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByPwdResetIdx( schema->getAuthorization(),
				PasswordResetUuid );
		deepDisposeByPwdResetIdx( PasswordResetUuid );
	}

	void CFBamSecUserTableObj::deleteSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName )
	{
		dynamic_cast<cfsec::ICFSecSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByDefDevIdx( schema->getAuthorization(),
				DfltDevUserId,
				DfltDevName );
		deepDisposeByDefDevIdx( DfltDevUserId,
			DfltDevName );
	}

	void CFBamSecUserTableObj::reallyDetachFromIndexesSecUser( cfsec::ICFSecSecUserObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecUser" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecSecUserObj* obj = Obj;
		cfsec::CFSecSecUserPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfsec::ICFSecSecUserObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByULoginIdx != NULL ) {
				cfsec::CFSecSecUserByULoginIdxKey keyULoginIdx;
				keyULoginIdx.setRequiredLoginId( obj->getRequiredLoginId() );
				auto removalProbe = indexByULoginIdx->find( keyULoginIdx );
				if( removalProbe != indexByULoginIdx->end() ) {
					indexByULoginIdx->erase( removalProbe );
				}
			}

			if( indexByEMConfIdx != NULL ) {
				cfsec::CFSecSecUserByEMConfIdxKey keyEMConfIdx;
				if( obj->isOptionalEMailConfirmUuidNull() ) {
					keyEMConfIdx.setOptionalEMailConfirmUuidNull();
				}
				else {
					keyEMConfIdx.setOptionalEMailConfirmUuidValue( obj->getOptionalEMailConfirmUuidValue() );
				}
				auto searchEMConfIdx = indexByEMConfIdx->find( keyEMConfIdx );
				if( searchEMConfIdx != indexByEMConfIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapEMConfIdx = searchEMConfIdx->second;
					if( mapEMConfIdx != NULL ) {
						auto removalProbe = mapEMConfIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapEMConfIdx->end() ) {
							mapEMConfIdx->erase( removalProbe );
							if( mapEMConfIdx->empty() ) {
								delete mapEMConfIdx;
								mapEMConfIdx = NULL;
								indexByEMConfIdx->erase( searchEMConfIdx );
							}
						}
					}
				}
			}

			if( indexByPwdResetIdx != NULL ) {
				cfsec::CFSecSecUserByPwdResetIdxKey keyPwdResetIdx;
				if( obj->isOptionalPasswordResetUuidNull() ) {
					keyPwdResetIdx.setOptionalPasswordResetUuidNull();
				}
				else {
					keyPwdResetIdx.setOptionalPasswordResetUuidValue( obj->getOptionalPasswordResetUuidValue() );
				}
				auto searchPwdResetIdx = indexByPwdResetIdx->find( keyPwdResetIdx );
				if( searchPwdResetIdx != indexByPwdResetIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapPwdResetIdx = searchPwdResetIdx->second;
					if( mapPwdResetIdx != NULL ) {
						auto removalProbe = mapPwdResetIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapPwdResetIdx->end() ) {
							mapPwdResetIdx->erase( removalProbe );
							if( mapPwdResetIdx->empty() ) {
								delete mapPwdResetIdx;
								mapPwdResetIdx = NULL;
								indexByPwdResetIdx->erase( searchPwdResetIdx );
							}
						}
					}
				}
			}

			if( indexByDefDevIdx != NULL ) {
				cfsec::CFSecSecUserByDefDevIdxKey keyDefDevIdx;
				if( obj->isOptionalDfltDevUserIdNull() ) {
					keyDefDevIdx.setOptionalDfltDevUserIdNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevUserIdValue( obj->getOptionalDfltDevUserIdValue() );
				}
				if( obj->isOptionalDfltDevNameNull() ) {
					keyDefDevIdx.setOptionalDfltDevNameNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevNameValue( obj->getOptionalDfltDevNameValue() );
				}
				auto searchDefDevIdx = indexByDefDevIdx->find( keyDefDevIdx );
				if( searchDefDevIdx != indexByDefDevIdx->end() ) {
					std::map<cfsec::CFSecSecUserPKey, cfsec::ICFSecSecUserObj*>* mapDefDevIdx = searchDefDevIdx->second;
					if( mapDefDevIdx != NULL ) {
						auto removalProbe = mapDefDevIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapDefDevIdx->end() ) {
							mapDefDevIdx->erase( removalProbe );
							if( mapDefDevIdx->empty() ) {
								delete mapDefDevIdx;
								mapDefDevIdx = NULL;
								indexByDefDevIdx->erase( searchDefDevIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserTableObj::getSystemUser() {
		static const std::string S_System( "system" );
		bool transactionStarted = schema->beginTransaction();
		cfsec::ICFSecSecUserObj* secUserObj;
		try {
			secUserObj = schema->getSecUserTableObj()->readSecUserByULoginIdx( S_System );
			if( secUserObj == NULL ) {
				secUserObj = schema->getSecUserTableObj()->readSecUserByULoginIdx( S_System, true );
				if( secUserObj == NULL ) {
					secUserObj = newInstance();
					cfsec::ICFSecSecUserEditObj* secUserEdit = secUserObj->beginEdit();
					secUserEdit->setRequiredEMailAddress( S_System );
					secUserObj = secUserEdit->create();
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
		return( secUserObj );
	}


}
