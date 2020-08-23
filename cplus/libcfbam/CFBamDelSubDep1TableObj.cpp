// Description: C++18 Table Object implementation for CFBam.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
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

	const std::string CFBamDelSubDep1TableObj::CLASS_NAME( "CFBamDelSubDep1TableObj" );
	const std::string CFBamDelSubDep1TableObj::TABLE_NAME( "DelSubDep1" );
	const std::string CFBamDelSubDep1TableObj::TABLE_DBNAME( "delsubdep1" );

	CFBamDelSubDep1TableObj::CFBamDelSubDep1TableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>();
		allDelSubDep1 = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamDelDepByDefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		indexByDelDepIdx = new std::map< cfbam::CFBamDelDepByDelDepIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		indexByDelTopDepIdx = new std::map< cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamDelSubDep1ByUNameIdxKey,
			cfbam::ICFBamDelSubDep1Obj*>();
	}

	CFBamDelSubDep1TableObj::CFBamDelSubDep1TableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>();
		allDelSubDep1 = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamDelDepByDefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		indexByDelDepIdx = new std::map< cfbam::CFBamDelDepByDelDepIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		indexByDelTopDepIdx = new std::map< cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamDelSubDep1ByUNameIdxKey,
			cfbam::ICFBamDelSubDep1Obj*>();
	}

	CFBamDelSubDep1TableObj::~CFBamDelSubDep1TableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByDelDepIdx != NULL ) {
			delete indexByDelDepIdx;
			indexByDelDepIdx = NULL;
		}
		if( indexByDelTopDepIdx != NULL ) {
			delete indexByDelTopDepIdx;
			indexByDelTopDepIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
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

	cfbam::ICFBamSchemaObj* CFBamDelSubDep1TableObj::getSchema() {
		return( schema );
	}

	void CFBamDelSubDep1TableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamDelSubDep1TableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamDelSubDep1TableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamDelSubDep1TableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamDelSubDep1TableObj::minimizeMemory() {
		if( allDelSubDep1 != NULL ) {
			allDelSubDep1->clear();
			delete allDelSubDep1;
			allDelSubDep1 = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* curByTenantIdx = NULL;
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
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamDelDepByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamDelDepByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* curByDefSchemaIdx = NULL;
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
		if( indexByDelDepIdx != NULL ) {
			std::map< cfbam::CFBamDelDepByDelDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* >::iterator iterByDelDepIdx = indexByDelDepIdx->begin();
			std::map< cfbam::CFBamDelDepByDelDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* >::iterator endByDelDepIdx = indexByDelDepIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* curByDelDepIdx = NULL;
			while( iterByDelDepIdx != endByDelDepIdx ) {
				curByDelDepIdx = iterByDelDepIdx->second;
				if( curByDelDepIdx != NULL ) {
					curByDelDepIdx->clear();
					delete curByDelDepIdx;
					curByDelDepIdx = NULL;
					iterByDelDepIdx->second = NULL;
				}
				iterByDelDepIdx ++;
			}
			indexByDelDepIdx->clear();
		}
		if( indexByDelTopDepIdx != NULL ) {
			std::map< cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* >::iterator iterByDelTopDepIdx = indexByDelTopDepIdx->begin();
			std::map< cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* >::iterator endByDelTopDepIdx = indexByDelTopDepIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* curByDelTopDepIdx = NULL;
			while( iterByDelTopDepIdx != endByDelTopDepIdx ) {
				curByDelTopDepIdx = iterByDelTopDepIdx->second;
				if( curByDelTopDepIdx != NULL ) {
					curByDelTopDepIdx->clear();
					delete curByDelTopDepIdx;
					curByDelTopDepIdx = NULL;
					iterByDelTopDepIdx->second = NULL;
				}
				iterByDelTopDepIdx ++;
			}
			indexByDelTopDepIdx->clear();
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::newInstance() {
		cfbam::ICFBamDelSubDep1Obj* inst = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( new CFBamDelSubDep1Obj( schema ) );
		return( inst );
	}

	cfbam::ICFBamDelSubDep1EditObj* CFBamDelSubDep1TableObj::newEditInstance( cfbam::ICFBamDelSubDep1Obj* orig ) {
		cfbam::ICFBamDelSubDep1EditObj* edit = dynamic_cast<cfbam::ICFBamDelSubDep1EditObj*>( new CFBamDelSubDep1EditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::realizeDelSubDep1( cfbam::ICFBamDelSubDep1Obj* Obj ) {
		static const std::string S_ProcName( "realizeDelSubDep1" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamDelSubDep1Obj* obj = Obj;
		cfbam::ICFBamDelSubDep1Obj* existingObj = NULL;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		cfbam::ICFBamDelSubDep1Obj* keepObj = NULL;
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
				cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamDelDepByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *pkey );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDelDepIdx != NULL ) {
				cfbam::CFBamDelDepByDelDepIdxKey keyDelDepIdx;
				keyDelDepIdx.setRequiredRelationTenantId( keepObj->getRequiredRelationTenantId() );
				keyDelDepIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				auto searchDelDepIdx = indexByDelDepIdx->find( keyDelDepIdx );
				if( searchDelDepIdx != indexByDelDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDelDepIdx = searchDelDepIdx->second;
					if( mapDelDepIdx != NULL ) {
						auto removalProbe = mapDelDepIdx->find( *pkey );
						if( removalProbe != mapDelDepIdx->end() ) {
							mapDelDepIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDelTopDepIdx != NULL ) {
				cfbam::CFBamDelSubDep1ByDelTopDepIdxKey keyDelTopDepIdx;
				keyDelTopDepIdx.setRequiredDelTopDepTenantId( keepObj->getRequiredDelTopDepTenantId() );
				keyDelTopDepIdx.setRequiredDelTopDepId( keepObj->getRequiredDelTopDepId() );
				auto searchDelTopDepIdx = indexByDelTopDepIdx->find( keyDelTopDepIdx );
				if( searchDelTopDepIdx != indexByDelTopDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDelTopDepIdx = searchDelTopDepIdx->second;
					if( mapDelTopDepIdx != NULL ) {
						auto removalProbe = mapDelTopDepIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDelTopDepIdx->end() ) {
							mapDelTopDepIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamDelSubDep1ByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredDelTopDepTenantId( keepObj->getRequiredDelTopDepTenantId() );
				keyUNameIdx.setRequiredDelTopDepId( keepObj->getRequiredDelTopDepId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( dynamic_cast<cfbam::CFBamDelDepTableObj*>( schema->getDelDepTableObj() )->realizeDelDep( Obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamDelDepByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByDelDepIdx != NULL ) {
				static const std::string S_ADelDepIdxObj( "aDelDepIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aDelDepIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aDelDepIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADelDepIdxObj );
				}
				cfbam::CFBamDelDepByDelDepIdxKey keyDelDepIdx;
				keyDelDepIdx.setRequiredRelationTenantId( keepObj->getRequiredRelationTenantId() );
				keyDelDepIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				auto searchIndexByDelDepIdx = indexByDelDepIdx->find( keyDelDepIdx );
				if( searchIndexByDelDepIdx != indexByDelDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDelDepIdx = searchIndexByDelDepIdx->second;
					if( mapDelDepIdx != NULL ) {
						mapDelDepIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), aDelDepIdxObj ) );
					}
				}
			}

			if( indexByDelTopDepIdx != NULL ) {
				static const std::string S_ADelTopDepIdxObj( "aDelTopDepIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aDelTopDepIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aDelTopDepIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADelTopDepIdxObj );
				}
				cfbam::CFBamDelSubDep1ByDelTopDepIdxKey keyDelTopDepIdx;
				keyDelTopDepIdx.setRequiredDelTopDepTenantId( keepObj->getRequiredDelTopDepTenantId() );
				keyDelTopDepIdx.setRequiredDelTopDepId( keepObj->getRequiredDelTopDepId() );
				auto searchIndexByDelTopDepIdx = indexByDelTopDepIdx->find( keyDelTopDepIdx );
				if( searchIndexByDelTopDepIdx != indexByDelTopDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDelTopDepIdx = searchIndexByDelTopDepIdx->second;
					if( mapDelTopDepIdx != NULL ) {
						mapDelTopDepIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), aDelTopDepIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamDelSubDep1ByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredDelTopDepTenantId( keepObj->getRequiredDelTopDepTenantId() );
				keyUNameIdx.setRequiredDelTopDepId( keepObj->getRequiredDelTopDepId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamDelSubDep1ByUNameIdxKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allDelSubDep1 != NULL ) {
				allDelSubDep1->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( dynamic_cast<cfbam::CFBamDelDepTableObj*>( schema->getDelDepTableObj() )->realizeDelDep( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamDelDepByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByDelDepIdx != NULL ) {
				static const std::string S_ADelDepIdxObj( "aDelDepIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aDelDepIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aDelDepIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADelDepIdxObj );
				}
				cfbam::CFBamDelDepByDelDepIdxKey keyDelDepIdx;
				keyDelDepIdx.setRequiredRelationTenantId( keepObj->getRequiredRelationTenantId() );
				keyDelDepIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				auto searchIndexByDelDepIdx = indexByDelDepIdx->find( keyDelDepIdx );
				if( searchIndexByDelDepIdx != indexByDelDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDelDepIdx = searchIndexByDelDepIdx->second;
					if( mapDelDepIdx != NULL ) {
						mapDelDepIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), aDelDepIdxObj ) );
					}
				}
			}

			if( indexByDelTopDepIdx != NULL ) {
				static const std::string S_ADelTopDepIdxObj( "aDelTopDepIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aDelTopDepIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aDelTopDepIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADelTopDepIdxObj );
				}
				cfbam::CFBamDelSubDep1ByDelTopDepIdxKey keyDelTopDepIdx;
				keyDelTopDepIdx.setRequiredDelTopDepTenantId( keepObj->getRequiredDelTopDepTenantId() );
				keyDelTopDepIdx.setRequiredDelTopDepId( keepObj->getRequiredDelTopDepId() );
				auto searchIndexByDelTopDepIdx = indexByDelTopDepIdx->find( keyDelTopDepIdx );
				if( searchIndexByDelTopDepIdx != indexByDelTopDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDelTopDepIdx = searchIndexByDelTopDepIdx->second;
					if( mapDelTopDepIdx != NULL ) {
						mapDelTopDepIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), aDelTopDepIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamDelSubDep1Obj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamDelSubDep1ByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredDelTopDepTenantId( keepObj->getRequiredDelTopDepTenantId() );
				keyUNameIdx.setRequiredDelTopDepId( keepObj->getRequiredDelTopDepId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamDelSubDep1ByUNameIdxKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allDelSubDep1 != NULL ) {
				allDelSubDep1->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFBamDelSubDep1TableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> list;
		cfbam::ICFBamDelSubDep1Obj* existingObj = readCachedDelSubDep1ByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamDelSubDep1Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDeepDisposeDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamDelSubDep1TableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> list;
		std::vector<cfbam::ICFBamDelSubDep1Obj*> matchesFound = readCachedDelSubDep1ByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamDelSubDep1Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDeepDisposeDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamDelSubDep1TableObj::reallyDeepDisposeDelSubDep1( cfbam::ICFBamDelSubDep1Obj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeDelSubDep1" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamDelSubDep1Obj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamDelSubDep2TableObj*>( schema->getDelSubDep2TableObj() )->deepDisposeByContDelDep1Idx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDetachFromIndexesDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj ) );
		}

		dynamic_cast<cfbam::CFBamDelDepTableObj*>( schema->getDelDepTableObj() )->reallyDeepDisposeDelDep( dynamic_cast<cfbam::ICFBamDelDepObj*>( obj ) );
	}

	void CFBamDelSubDep1TableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> list;
		std::vector<cfbam::ICFBamDelSubDep1Obj*> matchesFound = readCachedDelSubDep1ByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamDelSubDep1Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDeepDisposeDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamDelSubDep1TableObj::deepDisposeByDelDepIdx( const int64_t RelationTenantId,
			const int64_t RelationId ) {
		static const std::string S_ProcName( "deepDisposeByDelDepIdx" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> list;
		std::vector<cfbam::ICFBamDelSubDep1Obj*> matchesFound = readCachedDelSubDep1ByDelDepIdx( RelationTenantId,
				RelationId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamDelSubDep1Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDeepDisposeDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamDelSubDep1TableObj::deepDisposeByDelTopDepIdx( const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId ) {
		static const std::string S_ProcName( "deepDisposeByDelTopDepIdx" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> list;
		std::vector<cfbam::ICFBamDelSubDep1Obj*> matchesFound = readCachedDelSubDep1ByDelTopDepIdx( DelTopDepTenantId,
				DelTopDepId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamDelSubDep1Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDeepDisposeDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamDelSubDep1TableObj::deepDisposeByUNameIdx( const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> list;
		cfbam::ICFBamDelSubDep1Obj* existingObj = readCachedDelSubDep1ByUNameIdx( DelTopDepTenantId,
				DelTopDepId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamDelSubDep1Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDeepDisposeDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::createDelSubDep1( cfbam::ICFBamDelSubDep1EditObj* Obj ) {
		static const std::string S_ProcName( "createDelSubDep1" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamDelSubDep1Obj* obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( Obj->getOrig() );
		try {
			cfbam::CFBamDelSubDep1Buff* buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->createDelSubDep1(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj->realize() );
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

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::readDelSubDep1( cfbam::CFBamScopePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readDelSubDep1" );
		cfbam::ICFBamDelSubDep1Obj* obj = NULL;
		cfbam::ICFBamDelSubDep1Obj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamDelSubDep1Buff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj->realize() );
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

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::lockDelSubDep1( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_ProcName( "lockDelSubDep1" );
		cfbam::ICFBamDelSubDep1Obj* locked = NULL;
		cfbam::CFBamDelSubDep1Buff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelSubDep1TableObj::readAllDelSubDep1( bool forceRead ) {
		static const std::string S_ProcName( "readAllDelSubDep1" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamDelSubDep1Obj* realized = NULL;
		if( forceRead || ( allDelSubDep1 == NULL ) ) {
			std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* map = new std::map<cfbam::CFBamScopePKey,cfbam::ICFBamDelSubDep1Obj*>();
			allDelSubDep1 = map;
			std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamDelSubDep1Buff* buff = NULL;
			cfbam::ICFBamDelSubDep1Obj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allDelSubDep1->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allDelSubDep1->size();
		std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
		auto valIter = allDelSubDep1->begin();
		size_t idx = 0;
		while( valIter != allDelSubDep1->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::readDelSubDep1ByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readDelSubDep1ByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamDelSubDep1Obj* obj = readDelSubDep1( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelSubDep1TableObj::readDelSubDep1ByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDelSubDep1ByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>();
			cfbam::ICFBamScopeObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamScopeBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamDelSubDep1Obj* realized = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelSubDep1TableObj::readDelSubDep1ByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDelSubDep1ByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamDelDepByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamDelDepByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>();
			cfbam::ICFBamDelDepObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelDep()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamDelDepBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamDelSubDep1Obj* realized = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamDelDepByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelSubDep1TableObj::readDelSubDep1ByDelDepIdx( const int64_t RelationTenantId,
			const int64_t RelationId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDelSubDep1ByDelDepIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamDelDepByDelDepIdxKey key;
		key.setRequiredRelationTenantId( RelationTenantId );
		key.setRequiredRelationId( RelationId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* oldDict;
		if( indexByDelDepIdx == NULL ) {
			indexByDelDepIdx = new std::map< cfbam::CFBamDelDepByDelDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		}
		auto searchIndexByDelDepIdx = indexByDelDepIdx->find( key );
		if( searchIndexByDelDepIdx != indexByDelDepIdx->end() ) {
			oldDict = searchIndexByDelDepIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>();
			cfbam::ICFBamDelDepObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelDep()->readDerivedByDelDepIdx( schema->getAuthorization(),
				RelationTenantId,
				RelationId );
			cfbam::CFBamDelDepBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamDelSubDep1Obj* realized = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDelDepIdx->erase( searchIndexByDelDepIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDelDepIdx->insert( std::map< cfbam::CFBamDelDepByDelDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelSubDep1TableObj::readDelSubDep1ByDelTopDepIdx( const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDelSubDep1ByDelTopDepIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamDelSubDep1ByDelTopDepIdxKey key;
		key.setRequiredDelTopDepTenantId( DelTopDepTenantId );
		key.setRequiredDelTopDepId( DelTopDepId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* oldDict;
		if( indexByDelTopDepIdx == NULL ) {
			indexByDelTopDepIdx = new std::map< cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>*>();
		}
		auto searchIndexByDelTopDepIdx = indexByDelTopDepIdx->find( key );
		if( searchIndexByDelTopDepIdx != indexByDelTopDepIdx->end() ) {
			oldDict = searchIndexByDelTopDepIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>();
			cfbam::ICFBamDelSubDep1Obj* obj;
			std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->readDerivedByDelTopDepIdx( schema->getAuthorization(),
				DelTopDepTenantId,
				DelTopDepId );
			cfbam::CFBamDelSubDep1Buff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamDelSubDep1Obj* realized = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDelTopDepIdx->erase( searchIndexByDelTopDepIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDelTopDepIdx->insert( std::map< cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::readDelSubDep1ByUNameIdx( const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readDelSubDep1ByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamDelSubDep1ByUNameIdxKey,
				cfbam::ICFBamDelSubDep1Obj*>();
		}
		cfbam::CFBamDelSubDep1ByUNameIdxKey key;
		key.setRequiredDelTopDepTenantId( DelTopDepTenantId );
		key.setRequiredDelTopDepId( DelTopDepId );
		key.setRequiredName( Name );
		cfbam::ICFBamDelSubDep1Obj* obj = NULL;
		cfbam::ICFBamDelSubDep1Obj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamDelSubDep1Buff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->readDerivedByUNameIdx( schema->getAuthorization(),
				DelTopDepTenantId,
				DelTopDepId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamDelSubDep1ByUNameIdxKey, cfbam::ICFBamDelSubDep1Obj*>::value_type( key, dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::readCachedDelSubDep1( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readDelSubDep1" );
		cfbam::ICFBamDelSubDep1Obj* obj = NULL;
		cfbam::ICFBamDelSubDep1Obj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::readCachedDelSubDep1ByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedDelSubDep1ByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamDelSubDep1Obj* obj = readCachedDelSubDep1( &pkey );
		return( obj );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelSubDep1TableObj::readCachedDelSubDep1ByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedDelSubDep1ByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamDelSubDep1Obj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamScopeBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelSubDep1TableObj::readCachedDelSubDep1ByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedDelSubDep1ByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
		cfbam::CFBamDelDepByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamDelSubDep1Obj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamDelDepBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelSubDep1TableObj::readCachedDelSubDep1ByDelDepIdx( const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readCachedDelSubDep1ByDelDepIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
		cfbam::CFBamDelDepByDelDepIdxKey key;
		key.setRequiredRelationTenantId( RelationTenantId );
		key.setRequiredRelationId( RelationId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* dict;
		if( indexByDelDepIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDelDepIdx = indexByDelDepIdx->find( key );
		if( searchIndexByDelDepIdx != indexByDelDepIdx->end() ) {
			dict = searchIndexByDelDepIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamDelSubDep1Obj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamDelDepBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelSubDep1TableObj::readCachedDelSubDep1ByDelTopDepIdx( const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId )
	{
		static const std::string S_ProcName( "readCachedDelSubDep1ByDelTopDepIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
		cfbam::CFBamDelSubDep1ByDelTopDepIdxKey key;
		key.setRequiredDelTopDepTenantId( DelTopDepTenantId );
		key.setRequiredDelTopDepId( DelTopDepId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* dict;
		if( indexByDelTopDepIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDelTopDepIdx = indexByDelTopDepIdx->find( key );
		if( searchIndexByDelTopDepIdx != indexByDelTopDepIdx->end() ) {
			dict = searchIndexByDelTopDepIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamDelSubDep1Obj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamDelSubDep1Obj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::readCachedDelSubDep1ByUNameIdx( const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedDelSubDep1ByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamDelSubDep1ByUNameIdxKey,
				cfbam::ICFBamDelSubDep1Obj*>();
		}
		cfbam::CFBamDelSubDep1ByUNameIdxKey key;
		key.setRequiredDelTopDepTenantId( DelTopDepTenantId );
		key.setRequiredDelTopDepId( DelTopDepId );
		key.setRequiredName( Name );
		cfbam::ICFBamDelSubDep1Obj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1TableObj::updateDelSubDep1( cfbam::ICFBamDelSubDep1EditObj* Obj ) {
		static const std::string S_ProcName( "updateDelSubDep1" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamDelSubDep1Obj* obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( Obj->getOrig() );
		try {
			cfbam::CFBamDelSubDep1Buff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->updateDelSubDep1( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( Obj->getDelSubDep1Buff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj->realize() );
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

	void CFBamDelSubDep1TableObj::deleteDelSubDep1( cfbam::ICFBamDelSubDep1EditObj* Obj ) {
		cfbam::ICFBamDelSubDep1Obj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->deleteDelSubDep1( schema->getAuthorization(),
			obj->getDelSubDep1Buff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamDelSubDep1TableObj::deleteDelSubDep1ByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamDelSubDep1Obj* obj = readDelSubDep1( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamDelSubDep1EditObj* editObj = dynamic_cast<cfbam::ICFBamDelSubDep1EditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamDelSubDep1EditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamDelSubDep1TableObj::deleteDelSubDep1ByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->deleteDelSubDep1ByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamDelSubDep1TableObj::deleteDelSubDep1ByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->deleteDelSubDep1ByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamDelSubDep1TableObj::deleteDelSubDep1ByDelDepIdx( const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->deleteDelSubDep1ByDelDepIdx( schema->getAuthorization(),
				RelationTenantId,
				RelationId );
		deepDisposeByDelDepIdx( RelationTenantId,
			RelationId );
	}

	void CFBamDelSubDep1TableObj::deleteDelSubDep1ByDelTopDepIdx( const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->deleteDelSubDep1ByDelTopDepIdx( schema->getAuthorization(),
				DelTopDepTenantId,
				DelTopDepId );
		deepDisposeByDelTopDepIdx( DelTopDepTenantId,
			DelTopDepId );
	}

	void CFBamDelSubDep1TableObj::deleteDelSubDep1ByUNameIdx( const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamDelSubDep1ByUNameIdxKey,
				cfbam::ICFBamDelSubDep1Obj*>();
		}
		cfbam::CFBamDelSubDep1ByUNameIdxKey key;
		key.setRequiredDelTopDepTenantId( DelTopDepTenantId );
		key.setRequiredDelTopDepId( DelTopDepId );
		key.setRequiredName( Name );
		cfbam::ICFBamDelSubDep1Obj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->deleteDelSubDep1ByUNameIdx( schema->getAuthorization(),
				DelTopDepTenantId,
				DelTopDepId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep1()->deleteDelSubDep1ByUNameIdx( schema->getAuthorization(),
				DelTopDepTenantId,
				DelTopDepId,
				Name );
		}
		deepDisposeByUNameIdx( DelTopDepTenantId,
			DelTopDepId,
			Name );
	}

	void CFBamDelSubDep1TableObj::reallyDetachFromIndexesDelSubDep1( cfbam::ICFBamDelSubDep1Obj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesDelSubDep1" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamDelSubDep1Obj* obj = Obj;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamDelSubDep1Obj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
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

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamDelDepByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
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

			if( indexByDelDepIdx != NULL ) {
				cfbam::CFBamDelDepByDelDepIdxKey keyDelDepIdx;
				keyDelDepIdx.setRequiredRelationTenantId( obj->getRequiredRelationTenantId() );
				keyDelDepIdx.setRequiredRelationId( obj->getRequiredRelationId() );
				auto searchDelDepIdx = indexByDelDepIdx->find( keyDelDepIdx );
				if( searchDelDepIdx != indexByDelDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDelDepIdx = searchDelDepIdx->second;
					if( mapDelDepIdx != NULL ) {
						auto removalProbe = mapDelDepIdx->find( *pkey );
						if( removalProbe != mapDelDepIdx->end() ) {
							mapDelDepIdx->erase( removalProbe );
							if( mapDelDepIdx->empty() ) {
								delete mapDelDepIdx;
								mapDelDepIdx = NULL;
								indexByDelDepIdx->erase( searchDelDepIdx );
							}
						}
					}
				}
			}

			if( indexByDelTopDepIdx != NULL ) {
				cfbam::CFBamDelSubDep1ByDelTopDepIdxKey keyDelTopDepIdx;
				keyDelTopDepIdx.setRequiredDelTopDepTenantId( obj->getRequiredDelTopDepTenantId() );
				keyDelTopDepIdx.setRequiredDelTopDepId( obj->getRequiredDelTopDepId() );
				auto searchDelTopDepIdx = indexByDelTopDepIdx->find( keyDelTopDepIdx );
				if( searchDelTopDepIdx != indexByDelTopDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamDelSubDep1Obj*>* mapDelTopDepIdx = searchDelTopDepIdx->second;
					if( mapDelTopDepIdx != NULL ) {
						auto removalProbe = mapDelTopDepIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapDelTopDepIdx->end() ) {
							mapDelTopDepIdx->erase( removalProbe );
							if( mapDelTopDepIdx->empty() ) {
								delete mapDelTopDepIdx;
								mapDelTopDepIdx = NULL;
								indexByDelTopDepIdx->erase( searchDelTopDepIdx );
							}
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamDelSubDep1ByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredDelTopDepTenantId( obj->getRequiredDelTopDepTenantId() );
				keyUNameIdx.setRequiredDelTopDepId( obj->getRequiredDelTopDepId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
			dynamic_cast<cfbam::CFBamDelDepTableObj*>( schema->getDelDepTableObj() )->reallyDetachFromIndexesDelDep( Obj );
	}


}
