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

	const std::string CFBamEnumTagTableObj::CLASS_NAME( "CFBamEnumTagTableObj" );
	const std::string CFBamEnumTagTableObj::TABLE_NAME( "EnumTag" );
	const std::string CFBamEnumTagTableObj::TABLE_DBNAME( "enum_tag" );

	CFBamEnumTagTableObj::CFBamEnumTagTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>();
		allEnumTag = NULL;
		indexByEnumTagTenantIdx = new std::map< cfbam::CFBamEnumTagByEnumTagTenantIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		indexByEnumIdx = new std::map< cfbam::CFBamEnumTagByEnumIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamEnumTagByDefSchemaIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		indexByEnumNameIdx = new std::map< cfbam::CFBamEnumTagByEnumNameIdxKey,
			cfbam::ICFBamEnumTagObj*>();
		indexByPrevIdx = new std::map< cfbam::CFBamEnumTagByPrevIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamEnumTagByNextIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
	}

	CFBamEnumTagTableObj::CFBamEnumTagTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>();
		allEnumTag = NULL;
		indexByEnumTagTenantIdx = new std::map< cfbam::CFBamEnumTagByEnumTagTenantIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		indexByEnumIdx = new std::map< cfbam::CFBamEnumTagByEnumIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamEnumTagByDefSchemaIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		indexByEnumNameIdx = new std::map< cfbam::CFBamEnumTagByEnumNameIdxKey,
			cfbam::ICFBamEnumTagObj*>();
		indexByPrevIdx = new std::map< cfbam::CFBamEnumTagByPrevIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamEnumTagByNextIdxKey,
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
	}

	CFBamEnumTagTableObj::~CFBamEnumTagTableObj() {
		minimizeMemory();
		if( indexByEnumTagTenantIdx != NULL ) {
			delete indexByEnumTagTenantIdx;
			indexByEnumTagTenantIdx = NULL;
		}
		if( indexByEnumIdx != NULL ) {
			delete indexByEnumIdx;
			indexByEnumIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByEnumNameIdx != NULL ) {
			delete indexByEnumNameIdx;
			indexByEnumNameIdx = NULL;
		}
		if( indexByPrevIdx != NULL ) {
			delete indexByPrevIdx;
			indexByPrevIdx = NULL;
		}
		if( indexByNextIdx != NULL ) {
			delete indexByNextIdx;
			indexByNextIdx = NULL;
		}
		if( members != NULL ) {
			cfbam::ICFBamEnumTagObj* curMember;
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

	cfbam::ICFBamSchemaObj* CFBamEnumTagTableObj::getSchema() {
		return( schema );
	}

	void CFBamEnumTagTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamEnumTagTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamEnumTagTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamEnumTagTableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamEnumTagTableObj::minimizeMemory() {
		if( allEnumTag != NULL ) {
			allEnumTag->clear();
			delete allEnumTag;
			allEnumTag = NULL;
		}
		if( indexByEnumTagTenantIdx != NULL ) {
			std::map< cfbam::CFBamEnumTagByEnumTagTenantIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator iterByEnumTagTenantIdx = indexByEnumTagTenantIdx->begin();
			std::map< cfbam::CFBamEnumTagByEnumTagTenantIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator endByEnumTagTenantIdx = indexByEnumTagTenantIdx->end();
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* curByEnumTagTenantIdx = NULL;
			while( iterByEnumTagTenantIdx != endByEnumTagTenantIdx ) {
				curByEnumTagTenantIdx = iterByEnumTagTenantIdx->second;
				if( curByEnumTagTenantIdx != NULL ) {
					curByEnumTagTenantIdx->clear();
					delete curByEnumTagTenantIdx;
					curByEnumTagTenantIdx = NULL;
					iterByEnumTagTenantIdx->second = NULL;
				}
				iterByEnumTagTenantIdx ++;
			}
			indexByEnumTagTenantIdx->clear();
		}
		if( indexByEnumIdx != NULL ) {
			std::map< cfbam::CFBamEnumTagByEnumIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator iterByEnumIdx = indexByEnumIdx->begin();
			std::map< cfbam::CFBamEnumTagByEnumIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator endByEnumIdx = indexByEnumIdx->end();
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* curByEnumIdx = NULL;
			while( iterByEnumIdx != endByEnumIdx ) {
				curByEnumIdx = iterByEnumIdx->second;
				if( curByEnumIdx != NULL ) {
					curByEnumIdx->clear();
					delete curByEnumIdx;
					curByEnumIdx = NULL;
					iterByEnumIdx->second = NULL;
				}
				iterByEnumIdx ++;
			}
			indexByEnumIdx->clear();
		}
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamEnumTagByDefSchemaIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamEnumTagByDefSchemaIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* curByDefSchemaIdx = NULL;
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
		if( indexByEnumNameIdx != NULL ) {
			indexByEnumNameIdx->clear();
		}
		if( indexByPrevIdx != NULL ) {
			std::map< cfbam::CFBamEnumTagByPrevIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator iterByPrevIdx = indexByPrevIdx->begin();
			std::map< cfbam::CFBamEnumTagByPrevIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator endByPrevIdx = indexByPrevIdx->end();
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* curByPrevIdx = NULL;
			while( iterByPrevIdx != endByPrevIdx ) {
				curByPrevIdx = iterByPrevIdx->second;
				if( curByPrevIdx != NULL ) {
					curByPrevIdx->clear();
					delete curByPrevIdx;
					curByPrevIdx = NULL;
					iterByPrevIdx->second = NULL;
				}
				iterByPrevIdx ++;
			}
			indexByPrevIdx->clear();
		}
		if( indexByNextIdx != NULL ) {
			std::map< cfbam::CFBamEnumTagByNextIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator iterByNextIdx = indexByNextIdx->begin();
			std::map< cfbam::CFBamEnumTagByNextIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* >::iterator endByNextIdx = indexByNextIdx->end();
			std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* curByNextIdx = NULL;
			while( iterByNextIdx != endByNextIdx ) {
				curByNextIdx = iterByNextIdx->second;
				if( curByNextIdx != NULL ) {
					curByNextIdx->clear();
					delete curByNextIdx;
					curByNextIdx = NULL;
					iterByNextIdx->second = NULL;
				}
				iterByNextIdx ++;
			}
			indexByNextIdx->clear();
		}
		if( members != NULL ) {
			cfbam::ICFBamEnumTagObj* cur = NULL;
			cfbam::ICFBamEnumTagEditObj* edit = NULL;
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

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::newInstance() {
		cfbam::ICFBamEnumTagObj* inst = dynamic_cast<cfbam::ICFBamEnumTagObj*>( new CFBamEnumTagObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamEnumTagEditObj* CFBamEnumTagTableObj::newEditInstance( cfbam::ICFBamEnumTagObj* orig ) {
		cfbam::ICFBamEnumTagEditObj* edit = dynamic_cast<cfbam::ICFBamEnumTagEditObj*>( new CFBamEnumTagEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::realizeEnumTag( cfbam::ICFBamEnumTagObj* Obj ) {
		static const std::string S_ProcName( "realizeEnumTag" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamEnumTagObj* obj = Obj;
		cfbam::ICFBamEnumTagObj* existingObj = NULL;
		cfbam::CFBamEnumTagPKey* pkey = obj->getPKey();
		cfbam::ICFBamEnumTagObj* keepObj = NULL;
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
			if( indexByEnumTagTenantIdx != NULL ) {
				cfbam::CFBamEnumTagByEnumTagTenantIdxKey keyEnumTagTenantIdx;
				keyEnumTagTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchEnumTagTenantIdx = indexByEnumTagTenantIdx->find( keyEnumTagTenantIdx );
				if( searchEnumTagTenantIdx != indexByEnumTagTenantIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapEnumTagTenantIdx = searchEnumTagTenantIdx->second;
					if( mapEnumTagTenantIdx != NULL ) {
						auto removalProbe = mapEnumTagTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapEnumTagTenantIdx->end() ) {
							mapEnumTagTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByEnumIdx != NULL ) {
				cfbam::CFBamEnumTagByEnumIdxKey keyEnumIdx;
				keyEnumIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyEnumIdx.setRequiredEnumId( keepObj->getRequiredEnumId() );
				auto searchEnumIdx = indexByEnumIdx->find( keyEnumIdx );
				if( searchEnumIdx != indexByEnumIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapEnumIdx = searchEnumIdx->second;
					if( mapEnumIdx != NULL ) {
						auto removalProbe = mapEnumIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapEnumIdx->end() ) {
							mapEnumIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamEnumTagByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByEnumNameIdx != NULL ) {
				cfbam::CFBamEnumTagByEnumNameIdxKey keyEnumNameIdx;
				keyEnumNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyEnumNameIdx.setRequiredEnumId( keepObj->getRequiredEnumId() );
				keyEnumNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByEnumNameIdx->find( keyEnumNameIdx );
				if( removalProbe != indexByEnumNameIdx->end() ) {
					indexByEnumNameIdx->erase( removalProbe );
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamEnumTagByPrevIdxKey keyPrevIdx;
				if( keepObj->isOptionalPrevTenantIdNull() ) {
					keyPrevIdx.setOptionalPrevTenantIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevTenantIdValue( keepObj->getOptionalPrevTenantIdValue() );
				}
				if( keepObj->isOptionalPrevIdNull() ) {
					keyPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchPrevIdx = indexByPrevIdx->find( keyPrevIdx );
				if( searchPrevIdx != indexByPrevIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapPrevIdx = searchPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						auto removalProbe = mapPrevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPrevIdx->end() ) {
							mapPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				cfbam::CFBamEnumTagByNextIdxKey keyNextIdx;
				if( keepObj->isOptionalNextTenantIdNull() ) {
					keyNextIdx.setOptionalNextTenantIdNull();
				}
				else {
					keyNextIdx.setOptionalNextTenantIdValue( keepObj->getOptionalNextTenantIdValue() );
				}
				if( keepObj->isOptionalNextIdNull() ) {
					keyNextIdx.setOptionalNextIdNull();
				}
				else {
					keyNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchNextIdx = indexByNextIdx->find( keyNextIdx );
				if( searchNextIdx != indexByNextIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapNextIdx = searchNextIdx->second;
					if( mapNextIdx != NULL ) {
						auto removalProbe = mapNextIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapNextIdx->end() ) {
							mapNextIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfbam::CFBamEnumTagBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByEnumTagTenantIdx != NULL ) {
				static const std::string S_AEnumTagTenantIdxObj( "aEnumTagTenantIdxObj" );
				cfbam::ICFBamEnumTagObj* aEnumTagTenantIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aEnumTagTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEnumTagTenantIdxObj );
				}
				cfbam::CFBamEnumTagByEnumTagTenantIdxKey keyEnumTagTenantIdx;
				keyEnumTagTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByEnumTagTenantIdx = indexByEnumTagTenantIdx->find( keyEnumTagTenantIdx );
				if( searchIndexByEnumTagTenantIdx != indexByEnumTagTenantIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapEnumTagTenantIdx = searchIndexByEnumTagTenantIdx->second;
					if( mapEnumTagTenantIdx != NULL ) {
						mapEnumTagTenantIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aEnumTagTenantIdxObj ) );
					}
				}
			}

			if( indexByEnumIdx != NULL ) {
				static const std::string S_AEnumIdxObj( "aEnumIdxObj" );
				cfbam::ICFBamEnumTagObj* aEnumIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aEnumIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEnumIdxObj );
				}
				cfbam::CFBamEnumTagByEnumIdxKey keyEnumIdx;
				keyEnumIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyEnumIdx.setRequiredEnumId( keepObj->getRequiredEnumId() );
				auto searchIndexByEnumIdx = indexByEnumIdx->find( keyEnumIdx );
				if( searchIndexByEnumIdx != indexByEnumIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapEnumIdx = searchIndexByEnumIdx->second;
					if( mapEnumIdx != NULL ) {
						mapEnumIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aEnumIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamEnumTagObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamEnumTagByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByEnumNameIdx != NULL ) {
				static const std::string S_AEnumNameIdxObj( "aEnumNameIdxObj" );
				cfbam::ICFBamEnumTagObj* aEnumNameIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aEnumNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEnumNameIdxObj );
				}
				cfbam::CFBamEnumTagByEnumNameIdxKey keyEnumNameIdx;
				keyEnumNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyEnumNameIdx.setRequiredEnumId( keepObj->getRequiredEnumId() );
				keyEnumNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByEnumNameIdx->insert( std::map< cfbam::CFBamEnumTagByEnumNameIdxKey, cfbam::ICFBamEnumTagObj* >::value_type( keyEnumNameIdx, aEnumNameIdxObj ) );
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamEnumTagObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamEnumTagByPrevIdxKey keyPrevIdx;
				if( keepObj->isOptionalPrevTenantIdNull() ) {
					keyPrevIdx.setOptionalPrevTenantIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevTenantIdValue( keepObj->getOptionalPrevTenantIdValue() );
				}
				if( keepObj->isOptionalPrevIdNull() ) {
					keyPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByPrevIdx = indexByPrevIdx->find( keyPrevIdx );
				if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamEnumTagObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamEnumTagByNextIdxKey keyNextIdx;
				if( keepObj->isOptionalNextTenantIdNull() ) {
					keyNextIdx.setOptionalNextTenantIdNull();
				}
				else {
					keyNextIdx.setOptionalNextTenantIdValue( keepObj->getOptionalNextTenantIdValue() );
				}
				if( keepObj->isOptionalNextIdNull() ) {
					keyNextIdx.setOptionalNextIdNull();
				}
				else {
					keyNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByNextIdx = indexByNextIdx->find( keyNextIdx );
				if( searchIndexByNextIdx != indexByNextIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( allEnumTag != NULL ) {
				allEnumTag->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByEnumTagTenantIdx != NULL ) {
				static const std::string S_AEnumTagTenantIdxObj( "aEnumTagTenantIdxObj" );
				cfbam::ICFBamEnumTagObj* aEnumTagTenantIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aEnumTagTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEnumTagTenantIdxObj );
				}
				cfbam::CFBamEnumTagByEnumTagTenantIdxKey keyEnumTagTenantIdx;
				keyEnumTagTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByEnumTagTenantIdx = indexByEnumTagTenantIdx->find( keyEnumTagTenantIdx );
				if( searchIndexByEnumTagTenantIdx != indexByEnumTagTenantIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapEnumTagTenantIdx = searchIndexByEnumTagTenantIdx->second;
					if( mapEnumTagTenantIdx != NULL ) {
						mapEnumTagTenantIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aEnumTagTenantIdxObj ) );
					}
				}
			}

			if( indexByEnumIdx != NULL ) {
				static const std::string S_AEnumIdxObj( "aEnumIdxObj" );
				cfbam::ICFBamEnumTagObj* aEnumIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aEnumIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEnumIdxObj );
				}
				cfbam::CFBamEnumTagByEnumIdxKey keyEnumIdx;
				keyEnumIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyEnumIdx.setRequiredEnumId( keepObj->getRequiredEnumId() );
				auto searchIndexByEnumIdx = indexByEnumIdx->find( keyEnumIdx );
				if( searchIndexByEnumIdx != indexByEnumIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapEnumIdx = searchIndexByEnumIdx->second;
					if( mapEnumIdx != NULL ) {
						mapEnumIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aEnumIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamEnumTagObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamEnumTagByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByEnumNameIdx != NULL ) {
				static const std::string S_AEnumNameIdxObj( "aEnumNameIdxObj" );
				cfbam::ICFBamEnumTagObj* aEnumNameIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aEnumNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEnumNameIdxObj );
				}
				cfbam::CFBamEnumTagByEnumNameIdxKey keyEnumNameIdx;
				keyEnumNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyEnumNameIdx.setRequiredEnumId( keepObj->getRequiredEnumId() );
				keyEnumNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByEnumNameIdx->insert( std::map< cfbam::CFBamEnumTagByEnumNameIdxKey, cfbam::ICFBamEnumTagObj* >::value_type( keyEnumNameIdx, aEnumNameIdxObj ) );
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamEnumTagObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamEnumTagByPrevIdxKey keyPrevIdx;
				if( keepObj->isOptionalPrevTenantIdNull() ) {
					keyPrevIdx.setOptionalPrevTenantIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevTenantIdValue( keepObj->getOptionalPrevTenantIdValue() );
				}
				if( keepObj->isOptionalPrevIdNull() ) {
					keyPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByPrevIdx = indexByPrevIdx->find( keyPrevIdx );
				if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamEnumTagObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamEnumTagObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamEnumTagByNextIdxKey keyNextIdx;
				if( keepObj->isOptionalNextTenantIdNull() ) {
					keyNextIdx.setOptionalNextTenantIdNull();
				}
				else {
					keyNextIdx.setOptionalNextTenantIdValue( keepObj->getOptionalNextTenantIdValue() );
				}
				if( keepObj->isOptionalNextIdNull() ) {
					keyNextIdx.setOptionalNextIdNull();
				}
				else {
					keyNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByNextIdx = indexByNextIdx->find( keyNextIdx );
				if( searchIndexByNextIdx != indexByNextIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( allEnumTag != NULL ) {
				allEnumTag->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamEnumTagTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamEnumTagObj*> list;
		cfbam::ICFBamEnumTagObj* existingObj = readCachedEnumTagByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamEnumTagObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->reallyDeepDisposeEnumTag( dynamic_cast<cfbam::ICFBamEnumTagObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamEnumTagTableObj::deepDisposeByEnumTagTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByEnumTagTenantIdx" );
		std::vector<cfbam::ICFBamEnumTagObj*> list;
		std::vector<cfbam::ICFBamEnumTagObj*> matchesFound = readCachedEnumTagByEnumTagTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamEnumTagObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->reallyDeepDisposeEnumTag( dynamic_cast<cfbam::ICFBamEnumTagObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamEnumTagTableObj::deepDisposeByEnumIdx( const int64_t TenantId,
			const int64_t EnumId ) {
		static const std::string S_ProcName( "deepDisposeByEnumIdx" );
		std::vector<cfbam::ICFBamEnumTagObj*> list;
		std::vector<cfbam::ICFBamEnumTagObj*> matchesFound = readCachedEnumTagByEnumIdx( TenantId,
				EnumId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamEnumTagObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->reallyDeepDisposeEnumTag( dynamic_cast<cfbam::ICFBamEnumTagObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamEnumTagTableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamEnumTagObj*> list;
		std::vector<cfbam::ICFBamEnumTagObj*> matchesFound = readCachedEnumTagByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamEnumTagObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->reallyDeepDisposeEnumTag( dynamic_cast<cfbam::ICFBamEnumTagObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamEnumTagTableObj::deepDisposeByEnumNameIdx( const int64_t TenantId,
			const int64_t EnumId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByEnumNameIdx" );
		std::vector<cfbam::ICFBamEnumTagObj*> list;
		cfbam::ICFBamEnumTagObj* existingObj = readCachedEnumTagByEnumNameIdx( TenantId,
				EnumId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamEnumTagObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->reallyDeepDisposeEnumTag( dynamic_cast<cfbam::ICFBamEnumTagObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamEnumTagTableObj::deepDisposeByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByPrevIdx" );
		std::vector<cfbam::ICFBamEnumTagObj*> list;
		std::vector<cfbam::ICFBamEnumTagObj*> matchesFound = readCachedEnumTagByPrevIdx( PrevTenantId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamEnumTagObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->reallyDeepDisposeEnumTag( dynamic_cast<cfbam::ICFBamEnumTagObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamEnumTagTableObj::deepDisposeByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByNextIdx" );
		std::vector<cfbam::ICFBamEnumTagObj*> list;
		std::vector<cfbam::ICFBamEnumTagObj*> matchesFound = readCachedEnumTagByNextIdx( NextTenantId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamEnumTagObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->reallyDeepDisposeEnumTag( dynamic_cast<cfbam::ICFBamEnumTagObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamEnumTagTableObj::reallyDeepDisposeEnumTag( cfbam::ICFBamEnumTagObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeEnumTag" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamEnumTagObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->reallyDetachFromIndexesEnumTag( dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::createEnumTag( cfbam::ICFBamEnumTagEditObj* Obj ) {
		static const std::string S_ProcName( "createEnumTag" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamEnumTagObj* obj = dynamic_cast<cfbam::ICFBamEnumTagObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamEnumTagBuff* buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->createEnumTag(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
		cfbam::ICFBamEnumTagObj* prev = obj->getOptionalLookupPrev();
		if( prev != NULL ) {
			prev->read( true );
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

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::readEnumTag( cfbam::CFBamEnumTagPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readEnumTag" );
		cfbam::ICFBamEnumTagObj* obj = NULL;
		cfbam::ICFBamEnumTagObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamEnumTagBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
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

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::lockEnumTag( cfbam::CFBamEnumTagPKey* pkey ) {
		static const std::string S_ProcName( "lockEnumTag" );
		cfbam::ICFBamEnumTagObj* locked = NULL;
		cfbam::CFBamEnumTagBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamEnumTagObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readAllEnumTag( bool forceRead ) {
		static const std::string S_ProcName( "readAllEnumTag" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamEnumTagObj* realized = NULL;
		if( forceRead || ( allEnumTag == NULL ) ) {
			std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* map = new std::map<cfbam::CFBamEnumTagPKey,cfbam::ICFBamEnumTagObj*>();
			allEnumTag = map;
			std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamEnumTagBuff* buff = NULL;
			cfbam::ICFBamEnumTagObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allEnumTag->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allEnumTag->size();
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		auto valIter = allEnumTag->begin();
		size_t idx = 0;
		while( valIter != allEnumTag->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::readEnumTagByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readEnumTagByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamEnumTagPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamEnumTagObj* obj = readEnumTag( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readEnumTagByEnumTagTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readEnumTagByEnumTagTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamEnumTagByEnumTagTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* oldDict;
		if( indexByEnumTagTenantIdx == NULL ) {
			indexByEnumTagTenantIdx = new std::map< cfbam::CFBamEnumTagByEnumTagTenantIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		}
		auto searchIndexByEnumTagTenantIdx = indexByEnumTagTenantIdx->find( key );
		if( searchIndexByEnumTagTenantIdx != indexByEnumTagTenantIdx->end() ) {
			oldDict = searchIndexByEnumTagTenantIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>();
			cfbam::ICFBamEnumTagObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->readDerivedByEnumTagTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamEnumTagBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamEnumTagObj* realized = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByEnumTagTenantIdx->erase( searchIndexByEnumTagTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByEnumTagTenantIdx->insert( std::map< cfbam::CFBamEnumTagByEnumTagTenantIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readEnumTagByEnumIdx( const int64_t TenantId,
			const int64_t EnumId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readEnumTagByEnumIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamEnumTagByEnumIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredEnumId( EnumId );
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* oldDict;
		if( indexByEnumIdx == NULL ) {
			indexByEnumIdx = new std::map< cfbam::CFBamEnumTagByEnumIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		}
		auto searchIndexByEnumIdx = indexByEnumIdx->find( key );
		if( searchIndexByEnumIdx != indexByEnumIdx->end() ) {
			oldDict = searchIndexByEnumIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>();
			cfbam::ICFBamEnumTagObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->readDerivedByEnumIdx( schema->getAuthorization(),
				TenantId,
				EnumId );
			cfbam::CFBamEnumTagBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamEnumTagObj* realized = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByEnumIdx->erase( searchIndexByEnumIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByEnumIdx->insert( std::map< cfbam::CFBamEnumTagByEnumIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readEnumTagByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readEnumTagByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamEnumTagByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamEnumTagByDefSchemaIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
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
			dict = new std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>();
			cfbam::ICFBamEnumTagObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamEnumTagBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamEnumTagObj* realized = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamEnumTagByDefSchemaIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::readEnumTagByEnumNameIdx( const int64_t TenantId,
			const int64_t EnumId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readEnumTagByEnumNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByEnumNameIdx == NULL ) {
			indexByEnumNameIdx = new std::map< cfbam::CFBamEnumTagByEnumNameIdxKey,
				cfbam::ICFBamEnumTagObj*>();
		}
		cfbam::CFBamEnumTagByEnumNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredEnumId( EnumId );
		key.setRequiredName( Name );
		cfbam::ICFBamEnumTagObj* obj = NULL;
		cfbam::ICFBamEnumTagObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByEnumNameIdx = indexByEnumNameIdx->find( key );
			if( searchIndexByEnumNameIdx != indexByEnumNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByEnumNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamEnumTagBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->readDerivedByEnumNameIdx( schema->getAuthorization(),
				TenantId,
				EnumId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByEnumNameIdx->insert( std::map< cfbam::CFBamEnumTagByEnumNameIdxKey, cfbam::ICFBamEnumTagObj*>::value_type( key, dynamic_cast<cfbam::ICFBamEnumTagObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readEnumTagByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readEnumTagByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamEnumTagByPrevIdxKey key;
		if( PrevTenantId == NULL ) {
			key.setOptionalPrevTenantIdNull();
		}
		else {
			key.setOptionalPrevTenantIdValue( *PrevTenantId );
		}
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* oldDict;
		if( indexByPrevIdx == NULL ) {
			indexByPrevIdx = new std::map< cfbam::CFBamEnumTagByPrevIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		}
		auto searchIndexByPrevIdx = indexByPrevIdx->find( key );
		if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
			oldDict = searchIndexByPrevIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>();
			cfbam::ICFBamEnumTagObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->readDerivedByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
			cfbam::CFBamEnumTagBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamEnumTagObj* realized = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPrevIdx->erase( searchIndexByPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPrevIdx->insert( std::map< cfbam::CFBamEnumTagByPrevIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readEnumTagByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readEnumTagByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamEnumTagByNextIdxKey key;
		if( NextTenantId == NULL ) {
			key.setOptionalNextTenantIdNull();
		}
		else {
			key.setOptionalNextTenantIdValue( *NextTenantId );
		}
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* oldDict;
		if( indexByNextIdx == NULL ) {
			indexByNextIdx = new std::map< cfbam::CFBamEnumTagByNextIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>*>();
		}
		auto searchIndexByNextIdx = indexByNextIdx->find( key );
		if( searchIndexByNextIdx != indexByNextIdx->end() ) {
			oldDict = searchIndexByNextIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>();
			cfbam::ICFBamEnumTagObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->readDerivedByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
			cfbam::CFBamEnumTagBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamEnumTagObj* realized = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByNextIdx->erase( searchIndexByNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByNextIdx->insert( std::map< cfbam::CFBamEnumTagByNextIdxKey,
				std::map< cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::readCachedEnumTag( cfbam::CFBamEnumTagPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readEnumTag" );
		cfbam::ICFBamEnumTagObj* obj = NULL;
		cfbam::ICFBamEnumTagObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::readCachedEnumTagByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedEnumTagByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamEnumTagPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamEnumTagObj* obj = readCachedEnumTag( &pkey );
		return( obj );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readCachedEnumTagByEnumTagTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedEnumTagByEnumTagTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		cfbam::CFBamEnumTagByEnumTagTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		if( indexByEnumTagTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByEnumTagTenantIdx = indexByEnumTagTenantIdx->find( key );
		if( searchIndexByEnumTagTenantIdx != indexByEnumTagTenantIdx->end() ) {
			dict = searchIndexByEnumTagTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamEnumTagObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamEnumTagObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamEnumTagBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readCachedEnumTagByEnumIdx( const int64_t TenantId,
			const int64_t EnumId )
	{
		static const std::string S_ProcName( "readCachedEnumTagByEnumIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		cfbam::CFBamEnumTagByEnumIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredEnumId( EnumId );
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		if( indexByEnumIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByEnumIdx = indexByEnumIdx->find( key );
		if( searchIndexByEnumIdx != indexByEnumIdx->end() ) {
			dict = searchIndexByEnumIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamEnumTagObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamEnumTagObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamEnumTagBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readCachedEnumTagByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedEnumTagByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		cfbam::CFBamEnumTagByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamEnumTagObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamEnumTagObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamEnumTagBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::readCachedEnumTagByEnumNameIdx( const int64_t TenantId,
			const int64_t EnumId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedEnumTagByEnumNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByEnumNameIdx == NULL ) {
			indexByEnumNameIdx = new std::map< cfbam::CFBamEnumTagByEnumNameIdxKey,
				cfbam::ICFBamEnumTagObj*>();
		}
		cfbam::CFBamEnumTagByEnumNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredEnumId( EnumId );
		key.setRequiredName( Name );
		cfbam::ICFBamEnumTagObj* obj = NULL;
		auto searchIndexByEnumNameIdx = indexByEnumNameIdx->find( key );
		if( searchIndexByEnumNameIdx != indexByEnumNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByEnumNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamEnumTagBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readCachedEnumTagByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedEnumTagByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		cfbam::CFBamEnumTagByPrevIdxKey key;
		if( PrevTenantId == NULL ) {
			key.setOptionalPrevTenantIdNull();
		}
		else {
			key.setOptionalPrevTenantIdValue( *PrevTenantId );
		}
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		if( indexByPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPrevIdx = indexByPrevIdx->find( key );
		if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
			dict = searchIndexByPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamEnumTagObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamEnumTagObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamEnumTagBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamEnumTagObj*> CFBamEnumTagTableObj::readCachedEnumTagByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedEnumTagByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamEnumTagObj*> arr;
		cfbam::CFBamEnumTagByNextIdxKey key;
		if( NextTenantId == NULL ) {
			key.setOptionalNextTenantIdNull();
		}
		else {
			key.setOptionalNextTenantIdValue( *NextTenantId );
		}
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* dict;
		if( indexByNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByNextIdx = indexByNextIdx->find( key );
		if( searchIndexByNextIdx != indexByNextIdx->end() ) {
			dict = searchIndexByNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamEnumTagObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamEnumTagObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamEnumTagBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::updateEnumTag( cfbam::ICFBamEnumTagEditObj* Obj ) {
		static const std::string S_ProcName( "updateEnumTag" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamEnumTagObj* obj = dynamic_cast<cfbam::ICFBamEnumTagObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamEnumTagBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->updateEnumTag( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamEnumTagBuff*>( Obj->getEnumTagBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamEnumTagObj*>( dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
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

	void CFBamEnumTagTableObj::deleteEnumTag( cfbam::ICFBamEnumTagEditObj* Obj ) {
		cfbam::ICFBamEnumTagObj* obj = Obj;
		cfbam::ICFBamEnumTagObj* prev = obj->getOptionalLookupPrev();
		cfbam::ICFBamEnumTagObj* next = obj->getOptionalLookupNext();
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->deleteEnumTag( schema->getAuthorization(),
			obj->getEnumTagBuff() );
		if( prev != NULL ) {
			prev->read( true );
		}
		if( next != NULL ) {
			next->read( true );
		}
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamEnumTagTableObj::deleteEnumTagByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamEnumTagPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamEnumTagObj* obj = readEnumTag( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamEnumTagEditObj* editObj = dynamic_cast<cfbam::ICFBamEnumTagEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamEnumTagEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamEnumTagTableObj::deleteEnumTagByEnumTagTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->deleteEnumTagByEnumTagTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByEnumTagTenantIdx( TenantId );
	}

	void CFBamEnumTagTableObj::deleteEnumTagByEnumIdx( const int64_t TenantId,
			const int64_t EnumId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->deleteEnumTagByEnumIdx( schema->getAuthorization(),
				TenantId,
				EnumId );
		deepDisposeByEnumIdx( TenantId,
			EnumId );
	}

	void CFBamEnumTagTableObj::deleteEnumTagByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->deleteEnumTagByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamEnumTagTableObj::deleteEnumTagByEnumNameIdx( const int64_t TenantId,
			const int64_t EnumId,
			const std::string& Name )
	{
		if( indexByEnumNameIdx == NULL ) {
			indexByEnumNameIdx = new std::map< cfbam::CFBamEnumTagByEnumNameIdxKey,
				cfbam::ICFBamEnumTagObj*>();
		}
		cfbam::CFBamEnumTagByEnumNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredEnumId( EnumId );
		key.setRequiredName( Name );
		cfbam::ICFBamEnumTagObj* obj = NULL;
		auto searchIndexByEnumNameIdx = indexByEnumNameIdx->find( key );
		if( searchIndexByEnumNameIdx != indexByEnumNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->deleteEnumTagByEnumNameIdx( schema->getAuthorization(),
				TenantId,
				EnumId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->deleteEnumTagByEnumNameIdx( schema->getAuthorization(),
				TenantId,
				EnumId,
				Name );
		}
		deepDisposeByEnumNameIdx( TenantId,
			EnumId,
			Name );
	}

	void CFBamEnumTagTableObj::deleteEnumTagByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->deleteEnumTagByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
		deepDisposeByPrevIdx( PrevTenantId,
			PrevId );
	}

	void CFBamEnumTagTableObj::deleteEnumTagByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->deleteEnumTagByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
		deepDisposeByNextIdx( NextTenantId,
			NextId );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::moveUpEnumTag( cfbam::ICFBamEnumTagObj* Obj ) {
		static const std::string S_ProcName( "moveUpEnumTag" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamEnumTagObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamEnumTagBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->moveBuffUp( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getEnumTagBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
			cfbam::ICFBamEnumTagObj* prev = obj->getOptionalLookupPrev( true );
			cfbam::ICFBamEnumTagObj* next = obj->getOptionalLookupNext( true );
			if( next != NULL ) {
				cfbam::ICFBamEnumTagObj* gnext = next->getOptionalLookupNext( true );
			}
		}
		return( obj );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagTableObj::moveDownEnumTag( cfbam::ICFBamEnumTagObj* Obj ) {
		static const std::string S_ProcName( "moveDownEnumTag" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamEnumTagObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamEnumTagBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->moveBuffDown( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getEnumTagBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamEnumTagTableObj*>( schema->getEnumTagTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamEnumTagObj*>( obj->realize() );
			cfbam::ICFBamEnumTagObj* prev = obj->getOptionalLookupPrev( true );
			if( prev != NULL ) {
				cfbam::ICFBamEnumTagObj* gprev = prev->getOptionalLookupPrev( true );
			}
			cfbam::ICFBamEnumTagObj* next = obj->getOptionalLookupNext( true );
		}
		return( obj );
	}

	void CFBamEnumTagTableObj::reallyDetachFromIndexesEnumTag( cfbam::ICFBamEnumTagObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesEnumTag" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamEnumTagObj* obj = Obj;
		cfbam::CFBamEnumTagPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamEnumTagObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByEnumTagTenantIdx != NULL ) {
				cfbam::CFBamEnumTagByEnumTagTenantIdxKey keyEnumTagTenantIdx;
				keyEnumTagTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchEnumTagTenantIdx = indexByEnumTagTenantIdx->find( keyEnumTagTenantIdx );
				if( searchEnumTagTenantIdx != indexByEnumTagTenantIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapEnumTagTenantIdx = searchEnumTagTenantIdx->second;
					if( mapEnumTagTenantIdx != NULL ) {
						auto removalProbe = mapEnumTagTenantIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapEnumTagTenantIdx->end() ) {
							mapEnumTagTenantIdx->erase( removalProbe );
							if( mapEnumTagTenantIdx->empty() ) {
								delete mapEnumTagTenantIdx;
								mapEnumTagTenantIdx = NULL;
								indexByEnumTagTenantIdx->erase( searchEnumTagTenantIdx );
							}
						}
					}
				}
			}

			if( indexByEnumIdx != NULL ) {
				cfbam::CFBamEnumTagByEnumIdxKey keyEnumIdx;
				keyEnumIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyEnumIdx.setRequiredEnumId( obj->getRequiredEnumId() );
				auto searchEnumIdx = indexByEnumIdx->find( keyEnumIdx );
				if( searchEnumIdx != indexByEnumIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapEnumIdx = searchEnumIdx->second;
					if( mapEnumIdx != NULL ) {
						auto removalProbe = mapEnumIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapEnumIdx->end() ) {
							mapEnumIdx->erase( removalProbe );
							if( mapEnumIdx->empty() ) {
								delete mapEnumIdx;
								mapEnumIdx = NULL;
								indexByEnumIdx->erase( searchEnumIdx );
							}
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamEnumTagByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *(obj->getPKey()) );
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

			if( indexByEnumNameIdx != NULL ) {
				cfbam::CFBamEnumTagByEnumNameIdxKey keyEnumNameIdx;
				keyEnumNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyEnumNameIdx.setRequiredEnumId( obj->getRequiredEnumId() );
				keyEnumNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByEnumNameIdx->find( keyEnumNameIdx );
				if( removalProbe != indexByEnumNameIdx->end() ) {
					indexByEnumNameIdx->erase( removalProbe );
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamEnumTagByPrevIdxKey keyPrevIdx;
				if( obj->isOptionalPrevTenantIdNull() ) {
					keyPrevIdx.setOptionalPrevTenantIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevTenantIdValue( obj->getOptionalPrevTenantIdValue() );
				}
				if( obj->isOptionalPrevIdNull() ) {
					keyPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevIdValue( obj->getOptionalPrevIdValue() );
				}
				auto searchPrevIdx = indexByPrevIdx->find( keyPrevIdx );
				if( searchPrevIdx != indexByPrevIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapPrevIdx = searchPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						auto removalProbe = mapPrevIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapPrevIdx->end() ) {
							mapPrevIdx->erase( removalProbe );
							if( mapPrevIdx->empty() ) {
								delete mapPrevIdx;
								mapPrevIdx = NULL;
								indexByPrevIdx->erase( searchPrevIdx );
							}
						}
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				cfbam::CFBamEnumTagByNextIdxKey keyNextIdx;
				if( obj->isOptionalNextTenantIdNull() ) {
					keyNextIdx.setOptionalNextTenantIdNull();
				}
				else {
					keyNextIdx.setOptionalNextTenantIdValue( obj->getOptionalNextTenantIdValue() );
				}
				if( obj->isOptionalNextIdNull() ) {
					keyNextIdx.setOptionalNextIdNull();
				}
				else {
					keyNextIdx.setOptionalNextIdValue( obj->getOptionalNextIdValue() );
				}
				auto searchNextIdx = indexByNextIdx->find( keyNextIdx );
				if( searchNextIdx != indexByNextIdx->end() ) {
					std::map<cfbam::CFBamEnumTagPKey, cfbam::ICFBamEnumTagObj*>* mapNextIdx = searchNextIdx->second;
					if( mapNextIdx != NULL ) {
						auto removalProbe = mapNextIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapNextIdx->end() ) {
							mapNextIdx->erase( removalProbe );
							if( mapNextIdx->empty() ) {
								delete mapNextIdx;
								mapNextIdx = NULL;
								indexByNextIdx->erase( searchNextIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
