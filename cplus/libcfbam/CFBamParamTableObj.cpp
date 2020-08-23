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

	const std::string CFBamParamTableObj::CLASS_NAME( "CFBamParamTableObj" );
	const std::string CFBamParamTableObj::TABLE_NAME( "Param" );
	const std::string CFBamParamTableObj::TABLE_DBNAME( "srvprm" );

	CFBamParamTableObj::CFBamParamTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
		allParam = NULL;
		indexByUNameIdx = new std::map< cfbam::CFBamParamByUNameIdxKey,
			cfbam::ICFBamParamObj*>();
		indexByValTentIdx = new std::map< cfbam::CFBamParamByValTentIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByServerMethodIdx = new std::map< cfbam::CFBamParamByServerMethodIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamParamByDefSchemaIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByServerTypeIdx = new std::map< cfbam::CFBamParamByServerTypeIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamParamByPrevIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamParamByNextIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByContPrevIdx = new std::map< cfbam::CFBamParamByContPrevIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByContNextIdx = new std::map< cfbam::CFBamParamByContNextIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
	}

	CFBamParamTableObj::CFBamParamTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
		allParam = NULL;
		indexByUNameIdx = new std::map< cfbam::CFBamParamByUNameIdxKey,
			cfbam::ICFBamParamObj*>();
		indexByValTentIdx = new std::map< cfbam::CFBamParamByValTentIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByServerMethodIdx = new std::map< cfbam::CFBamParamByServerMethodIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamParamByDefSchemaIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByServerTypeIdx = new std::map< cfbam::CFBamParamByServerTypeIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamParamByPrevIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamParamByNextIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByContPrevIdx = new std::map< cfbam::CFBamParamByContPrevIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		indexByContNextIdx = new std::map< cfbam::CFBamParamByContNextIdxKey,
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
	}

	CFBamParamTableObj::~CFBamParamTableObj() {
		minimizeMemory();
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexByValTentIdx != NULL ) {
			delete indexByValTentIdx;
			indexByValTentIdx = NULL;
		}
		if( indexByServerMethodIdx != NULL ) {
			delete indexByServerMethodIdx;
			indexByServerMethodIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByServerTypeIdx != NULL ) {
			delete indexByServerTypeIdx;
			indexByServerTypeIdx = NULL;
		}
		if( indexByPrevIdx != NULL ) {
			delete indexByPrevIdx;
			indexByPrevIdx = NULL;
		}
		if( indexByNextIdx != NULL ) {
			delete indexByNextIdx;
			indexByNextIdx = NULL;
		}
		if( indexByContPrevIdx != NULL ) {
			delete indexByContPrevIdx;
			indexByContPrevIdx = NULL;
		}
		if( indexByContNextIdx != NULL ) {
			delete indexByContNextIdx;
			indexByContNextIdx = NULL;
		}
		if( members != NULL ) {
			cfbam::ICFBamParamObj* curMember;
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

	cfbam::ICFBamSchemaObj* CFBamParamTableObj::getSchema() {
		return( schema );
	}

	void CFBamParamTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamParamTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamParamTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamParamTableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamParamTableObj::minimizeMemory() {
		if( allParam != NULL ) {
			allParam->clear();
			delete allParam;
			allParam = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( indexByValTentIdx != NULL ) {
			std::map< cfbam::CFBamParamByValTentIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator iterByValTentIdx = indexByValTentIdx->begin();
			std::map< cfbam::CFBamParamByValTentIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator endByValTentIdx = indexByValTentIdx->end();
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* curByValTentIdx = NULL;
			while( iterByValTentIdx != endByValTentIdx ) {
				curByValTentIdx = iterByValTentIdx->second;
				if( curByValTentIdx != NULL ) {
					curByValTentIdx->clear();
					delete curByValTentIdx;
					curByValTentIdx = NULL;
					iterByValTentIdx->second = NULL;
				}
				iterByValTentIdx ++;
			}
			indexByValTentIdx->clear();
		}
		if( indexByServerMethodIdx != NULL ) {
			std::map< cfbam::CFBamParamByServerMethodIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator iterByServerMethodIdx = indexByServerMethodIdx->begin();
			std::map< cfbam::CFBamParamByServerMethodIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator endByServerMethodIdx = indexByServerMethodIdx->end();
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* curByServerMethodIdx = NULL;
			while( iterByServerMethodIdx != endByServerMethodIdx ) {
				curByServerMethodIdx = iterByServerMethodIdx->second;
				if( curByServerMethodIdx != NULL ) {
					curByServerMethodIdx->clear();
					delete curByServerMethodIdx;
					curByServerMethodIdx = NULL;
					iterByServerMethodIdx->second = NULL;
				}
				iterByServerMethodIdx ++;
			}
			indexByServerMethodIdx->clear();
		}
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamParamByDefSchemaIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamParamByDefSchemaIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* curByDefSchemaIdx = NULL;
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
		if( indexByServerTypeIdx != NULL ) {
			std::map< cfbam::CFBamParamByServerTypeIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator iterByServerTypeIdx = indexByServerTypeIdx->begin();
			std::map< cfbam::CFBamParamByServerTypeIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator endByServerTypeIdx = indexByServerTypeIdx->end();
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* curByServerTypeIdx = NULL;
			while( iterByServerTypeIdx != endByServerTypeIdx ) {
				curByServerTypeIdx = iterByServerTypeIdx->second;
				if( curByServerTypeIdx != NULL ) {
					curByServerTypeIdx->clear();
					delete curByServerTypeIdx;
					curByServerTypeIdx = NULL;
					iterByServerTypeIdx->second = NULL;
				}
				iterByServerTypeIdx ++;
			}
			indexByServerTypeIdx->clear();
		}
		if( indexByPrevIdx != NULL ) {
			std::map< cfbam::CFBamParamByPrevIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator iterByPrevIdx = indexByPrevIdx->begin();
			std::map< cfbam::CFBamParamByPrevIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator endByPrevIdx = indexByPrevIdx->end();
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* curByPrevIdx = NULL;
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
			std::map< cfbam::CFBamParamByNextIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator iterByNextIdx = indexByNextIdx->begin();
			std::map< cfbam::CFBamParamByNextIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator endByNextIdx = indexByNextIdx->end();
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* curByNextIdx = NULL;
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
		if( indexByContPrevIdx != NULL ) {
			std::map< cfbam::CFBamParamByContPrevIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator iterByContPrevIdx = indexByContPrevIdx->begin();
			std::map< cfbam::CFBamParamByContPrevIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator endByContPrevIdx = indexByContPrevIdx->end();
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* curByContPrevIdx = NULL;
			while( iterByContPrevIdx != endByContPrevIdx ) {
				curByContPrevIdx = iterByContPrevIdx->second;
				if( curByContPrevIdx != NULL ) {
					curByContPrevIdx->clear();
					delete curByContPrevIdx;
					curByContPrevIdx = NULL;
					iterByContPrevIdx->second = NULL;
				}
				iterByContPrevIdx ++;
			}
			indexByContPrevIdx->clear();
		}
		if( indexByContNextIdx != NULL ) {
			std::map< cfbam::CFBamParamByContNextIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator iterByContNextIdx = indexByContNextIdx->begin();
			std::map< cfbam::CFBamParamByContNextIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* >::iterator endByContNextIdx = indexByContNextIdx->end();
			std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* curByContNextIdx = NULL;
			while( iterByContNextIdx != endByContNextIdx ) {
				curByContNextIdx = iterByContNextIdx->second;
				if( curByContNextIdx != NULL ) {
					curByContNextIdx->clear();
					delete curByContNextIdx;
					curByContNextIdx = NULL;
					iterByContNextIdx->second = NULL;
				}
				iterByContNextIdx ++;
			}
			indexByContNextIdx->clear();
		}
		if( members != NULL ) {
			cfbam::ICFBamParamObj* cur = NULL;
			cfbam::ICFBamParamEditObj* edit = NULL;
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

	cfbam::ICFBamParamObj* CFBamParamTableObj::newInstance() {
		cfbam::ICFBamParamObj* inst = dynamic_cast<cfbam::ICFBamParamObj*>( new CFBamParamObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamParamEditObj* CFBamParamTableObj::newEditInstance( cfbam::ICFBamParamObj* orig ) {
		cfbam::ICFBamParamEditObj* edit = dynamic_cast<cfbam::ICFBamParamEditObj*>( new CFBamParamEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::realizeParam( cfbam::ICFBamParamObj* Obj ) {
		static const std::string S_ProcName( "realizeParam" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamParamObj* obj = Obj;
		cfbam::ICFBamParamObj* existingObj = NULL;
		cfbam::CFBamParamPKey* pkey = obj->getPKey();
		cfbam::ICFBamParamObj* keepObj = NULL;
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
				cfbam::CFBamParamByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByValTentIdx != NULL ) {
				cfbam::CFBamParamByValTentIdxKey keyValTentIdx;
				keyValTentIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchValTentIdx = indexByValTentIdx->find( keyValTentIdx );
				if( searchValTentIdx != indexByValTentIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapValTentIdx = searchValTentIdx->second;
					if( mapValTentIdx != NULL ) {
						auto removalProbe = mapValTentIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapValTentIdx->end() ) {
							mapValTentIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByServerMethodIdx != NULL ) {
				cfbam::CFBamParamByServerMethodIdxKey keyServerMethodIdx;
				keyServerMethodIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyServerMethodIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				auto searchServerMethodIdx = indexByServerMethodIdx->find( keyServerMethodIdx );
				if( searchServerMethodIdx != indexByServerMethodIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapServerMethodIdx = searchServerMethodIdx->second;
					if( mapServerMethodIdx != NULL ) {
						auto removalProbe = mapServerMethodIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapServerMethodIdx->end() ) {
							mapServerMethodIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamParamByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByServerTypeIdx != NULL ) {
				cfbam::CFBamParamByServerTypeIdxKey keyServerTypeIdx;
				if( keepObj->isOptionalTypeTenantIdNull() ) {
					keyServerTypeIdx.setOptionalTypeTenantIdNull();
				}
				else {
					keyServerTypeIdx.setOptionalTypeTenantIdValue( keepObj->getOptionalTypeTenantIdValue() );
				}
				if( keepObj->isOptionalTypeIdNull() ) {
					keyServerTypeIdx.setOptionalTypeIdNull();
				}
				else {
					keyServerTypeIdx.setOptionalTypeIdValue( keepObj->getOptionalTypeIdValue() );
				}
				auto searchServerTypeIdx = indexByServerTypeIdx->find( keyServerTypeIdx );
				if( searchServerTypeIdx != indexByServerTypeIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapServerTypeIdx = searchServerTypeIdx->second;
					if( mapServerTypeIdx != NULL ) {
						auto removalProbe = mapServerTypeIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapServerTypeIdx->end() ) {
							mapServerTypeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamParamByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapPrevIdx = searchPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						auto removalProbe = mapPrevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPrevIdx->end() ) {
							mapPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				cfbam::CFBamParamByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapNextIdx = searchNextIdx->second;
					if( mapNextIdx != NULL ) {
						auto removalProbe = mapNextIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapNextIdx->end() ) {
							mapNextIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByContPrevIdx != NULL ) {
				cfbam::CFBamParamByContPrevIdxKey keyContPrevIdx;
				keyContPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContPrevIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyContPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyContPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchContPrevIdx = indexByContPrevIdx->find( keyContPrevIdx );
				if( searchContPrevIdx != indexByContPrevIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapContPrevIdx = searchContPrevIdx->second;
					if( mapContPrevIdx != NULL ) {
						auto removalProbe = mapContPrevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapContPrevIdx->end() ) {
							mapContPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByContNextIdx != NULL ) {
				cfbam::CFBamParamByContNextIdxKey keyContNextIdx;
				keyContNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContNextIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyContNextIdx.setOptionalNextIdNull();
				}
				else {
					keyContNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchContNextIdx = indexByContNextIdx->find( keyContNextIdx );
				if( searchContNextIdx != indexByContNextIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapContNextIdx = searchContNextIdx->second;
					if( mapContNextIdx != NULL ) {
						auto removalProbe = mapContNextIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapContNextIdx->end() ) {
							mapContNextIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfbam::CFBamParamBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamParamObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamParamByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamParamByUNameIdxKey, cfbam::ICFBamParamObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByValTentIdx != NULL ) {
				static const std::string S_AValTentIdxObj( "aValTentIdxObj" );
				cfbam::ICFBamParamObj* aValTentIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aValTentIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AValTentIdxObj );
				}
				cfbam::CFBamParamByValTentIdxKey keyValTentIdx;
				keyValTentIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByValTentIdx = indexByValTentIdx->find( keyValTentIdx );
				if( searchIndexByValTentIdx != indexByValTentIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapValTentIdx = searchIndexByValTentIdx->second;
					if( mapValTentIdx != NULL ) {
						mapValTentIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aValTentIdxObj ) );
					}
				}
			}

			if( indexByServerMethodIdx != NULL ) {
				static const std::string S_AServerMethodIdxObj( "aServerMethodIdxObj" );
				cfbam::ICFBamParamObj* aServerMethodIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aServerMethodIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AServerMethodIdxObj );
				}
				cfbam::CFBamParamByServerMethodIdxKey keyServerMethodIdx;
				keyServerMethodIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyServerMethodIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				auto searchIndexByServerMethodIdx = indexByServerMethodIdx->find( keyServerMethodIdx );
				if( searchIndexByServerMethodIdx != indexByServerMethodIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapServerMethodIdx = searchIndexByServerMethodIdx->second;
					if( mapServerMethodIdx != NULL ) {
						mapServerMethodIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aServerMethodIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamParamObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamParamByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByServerTypeIdx != NULL ) {
				static const std::string S_AServerTypeIdxObj( "aServerTypeIdxObj" );
				cfbam::ICFBamParamObj* aServerTypeIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aServerTypeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AServerTypeIdxObj );
				}
				cfbam::CFBamParamByServerTypeIdxKey keyServerTypeIdx;
				if( keepObj->isOptionalTypeTenantIdNull() ) {
					keyServerTypeIdx.setOptionalTypeTenantIdNull();
				}
				else {
					keyServerTypeIdx.setOptionalTypeTenantIdValue( keepObj->getOptionalTypeTenantIdValue() );
				}
				if( keepObj->isOptionalTypeIdNull() ) {
					keyServerTypeIdx.setOptionalTypeIdNull();
				}
				else {
					keyServerTypeIdx.setOptionalTypeIdValue( keepObj->getOptionalTypeIdValue() );
				}
				auto searchIndexByServerTypeIdx = indexByServerTypeIdx->find( keyServerTypeIdx );
				if( searchIndexByServerTypeIdx != indexByServerTypeIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapServerTypeIdx = searchIndexByServerTypeIdx->second;
					if( mapServerTypeIdx != NULL ) {
						mapServerTypeIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aServerTypeIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamParamObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamParamByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamParamObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamParamByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( indexByContPrevIdx != NULL ) {
				static const std::string S_AContPrevIdxObj( "aContPrevIdxObj" );
				cfbam::ICFBamParamObj* aContPrevIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aContPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AContPrevIdxObj );
				}
				cfbam::CFBamParamByContPrevIdxKey keyContPrevIdx;
				keyContPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContPrevIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyContPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyContPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByContPrevIdx = indexByContPrevIdx->find( keyContPrevIdx );
				if( searchIndexByContPrevIdx != indexByContPrevIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapContPrevIdx = searchIndexByContPrevIdx->second;
					if( mapContPrevIdx != NULL ) {
						mapContPrevIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aContPrevIdxObj ) );
					}
				}
			}

			if( indexByContNextIdx != NULL ) {
				static const std::string S_AContNextIdxObj( "aContNextIdxObj" );
				cfbam::ICFBamParamObj* aContNextIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aContNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AContNextIdxObj );
				}
				cfbam::CFBamParamByContNextIdxKey keyContNextIdx;
				keyContNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContNextIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyContNextIdx.setOptionalNextIdNull();
				}
				else {
					keyContNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByContNextIdx = indexByContNextIdx->find( keyContNextIdx );
				if( searchIndexByContNextIdx != indexByContNextIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapContNextIdx = searchIndexByContNextIdx->second;
					if( mapContNextIdx != NULL ) {
						mapContNextIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aContNextIdxObj ) );
					}
				}
			}

			if( allParam != NULL ) {
				allParam->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamParamObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamParamByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamParamByUNameIdxKey, cfbam::ICFBamParamObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByValTentIdx != NULL ) {
				static const std::string S_AValTentIdxObj( "aValTentIdxObj" );
				cfbam::ICFBamParamObj* aValTentIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aValTentIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AValTentIdxObj );
				}
				cfbam::CFBamParamByValTentIdxKey keyValTentIdx;
				keyValTentIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByValTentIdx = indexByValTentIdx->find( keyValTentIdx );
				if( searchIndexByValTentIdx != indexByValTentIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapValTentIdx = searchIndexByValTentIdx->second;
					if( mapValTentIdx != NULL ) {
						mapValTentIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aValTentIdxObj ) );
					}
				}
			}

			if( indexByServerMethodIdx != NULL ) {
				static const std::string S_AServerMethodIdxObj( "aServerMethodIdxObj" );
				cfbam::ICFBamParamObj* aServerMethodIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aServerMethodIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AServerMethodIdxObj );
				}
				cfbam::CFBamParamByServerMethodIdxKey keyServerMethodIdx;
				keyServerMethodIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyServerMethodIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				auto searchIndexByServerMethodIdx = indexByServerMethodIdx->find( keyServerMethodIdx );
				if( searchIndexByServerMethodIdx != indexByServerMethodIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapServerMethodIdx = searchIndexByServerMethodIdx->second;
					if( mapServerMethodIdx != NULL ) {
						mapServerMethodIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aServerMethodIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamParamObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamParamByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByServerTypeIdx != NULL ) {
				static const std::string S_AServerTypeIdxObj( "aServerTypeIdxObj" );
				cfbam::ICFBamParamObj* aServerTypeIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aServerTypeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AServerTypeIdxObj );
				}
				cfbam::CFBamParamByServerTypeIdxKey keyServerTypeIdx;
				if( keepObj->isOptionalTypeTenantIdNull() ) {
					keyServerTypeIdx.setOptionalTypeTenantIdNull();
				}
				else {
					keyServerTypeIdx.setOptionalTypeTenantIdValue( keepObj->getOptionalTypeTenantIdValue() );
				}
				if( keepObj->isOptionalTypeIdNull() ) {
					keyServerTypeIdx.setOptionalTypeIdNull();
				}
				else {
					keyServerTypeIdx.setOptionalTypeIdValue( keepObj->getOptionalTypeIdValue() );
				}
				auto searchIndexByServerTypeIdx = indexByServerTypeIdx->find( keyServerTypeIdx );
				if( searchIndexByServerTypeIdx != indexByServerTypeIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapServerTypeIdx = searchIndexByServerTypeIdx->second;
					if( mapServerTypeIdx != NULL ) {
						mapServerTypeIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aServerTypeIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamParamObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamParamByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamParamObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamParamByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( indexByContPrevIdx != NULL ) {
				static const std::string S_AContPrevIdxObj( "aContPrevIdxObj" );
				cfbam::ICFBamParamObj* aContPrevIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aContPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AContPrevIdxObj );
				}
				cfbam::CFBamParamByContPrevIdxKey keyContPrevIdx;
				keyContPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContPrevIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyContPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyContPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByContPrevIdx = indexByContPrevIdx->find( keyContPrevIdx );
				if( searchIndexByContPrevIdx != indexByContPrevIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapContPrevIdx = searchIndexByContPrevIdx->second;
					if( mapContPrevIdx != NULL ) {
						mapContPrevIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aContPrevIdxObj ) );
					}
				}
			}

			if( indexByContNextIdx != NULL ) {
				static const std::string S_AContNextIdxObj( "aContNextIdxObj" );
				cfbam::ICFBamParamObj* aContNextIdxObj =
					dynamic_cast<cfbam::ICFBamParamObj*>( keepObj );
				if( aContNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AContNextIdxObj );
				}
				cfbam::CFBamParamByContNextIdxKey keyContNextIdx;
				keyContNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContNextIdx.setRequiredServerMethodId( keepObj->getRequiredServerMethodId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyContNextIdx.setOptionalNextIdNull();
				}
				else {
					keyContNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByContNextIdx = indexByContNextIdx->find( keyContNextIdx );
				if( searchIndexByContNextIdx != indexByContNextIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapContNextIdx = searchIndexByContNextIdx->second;
					if( mapContNextIdx != NULL ) {
						mapContNextIdx->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), aContNextIdxObj ) );
					}
				}
			}

			if( allParam != NULL ) {
				allParam->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamParamTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		cfbam::ICFBamParamObj* existingObj = readCachedParamByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		cfbam::ICFBamParamObj* existingObj = readCachedParamByUNameIdx( TenantId,
				ServerMethodId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::deepDisposeByValTentIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByValTentIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		std::vector<cfbam::ICFBamParamObj*> matchesFound = readCachedParamByValTentIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::deepDisposeByServerMethodIdx( const int64_t TenantId,
			const int64_t ServerMethodId ) {
		static const std::string S_ProcName( "deepDisposeByServerMethodIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		std::vector<cfbam::ICFBamParamObj*> matchesFound = readCachedParamByServerMethodIdx( TenantId,
				ServerMethodId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		std::vector<cfbam::ICFBamParamObj*> matchesFound = readCachedParamByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::deepDisposeByServerTypeIdx( const int64_t* TypeTenantId,
			const int64_t* TypeId ) {
		static const std::string S_ProcName( "deepDisposeByServerTypeIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		std::vector<cfbam::ICFBamParamObj*> matchesFound = readCachedParamByServerTypeIdx( TypeTenantId,
				TypeId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::deepDisposeByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByPrevIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		std::vector<cfbam::ICFBamParamObj*> matchesFound = readCachedParamByPrevIdx( PrevTenantId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::deepDisposeByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByNextIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		std::vector<cfbam::ICFBamParamObj*> matchesFound = readCachedParamByNextIdx( NextTenantId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::deepDisposeByContPrevIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByContPrevIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		std::vector<cfbam::ICFBamParamObj*> matchesFound = readCachedParamByContPrevIdx( TenantId,
				ServerMethodId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::deepDisposeByContNextIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByContNextIdx" );
		std::vector<cfbam::ICFBamParamObj*> list;
		std::vector<cfbam::ICFBamParamObj*> matchesFound = readCachedParamByContNextIdx( TenantId,
				ServerMethodId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamParamObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDeepDisposeParam( dynamic_cast<cfbam::ICFBamParamObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamParamTableObj::reallyDeepDisposeParam( cfbam::ICFBamParamObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeParam" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamParamObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->reallyDetachFromIndexesParam( dynamic_cast<cfbam::ICFBamParamObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::createParam( cfbam::ICFBamParamEditObj* Obj ) {
		static const std::string S_ProcName( "createParam" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamParamObj* obj = dynamic_cast<cfbam::ICFBamParamObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamParamBuff* buff = dynamic_cast<cfbam::CFBamParamBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->createParam(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamParamBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
		cfbam::ICFBamParamObj* prev = obj->getOptionalLookupPrev();
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

	cfbam::ICFBamParamObj* CFBamParamTableObj::readParam( cfbam::CFBamParamPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readParam" );
		cfbam::ICFBamParamObj* obj = NULL;
		cfbam::ICFBamParamObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamParamBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
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

	cfbam::ICFBamParamObj* CFBamParamTableObj::lockParam( cfbam::CFBamParamPKey* pkey ) {
		static const std::string S_ProcName( "lockParam" );
		cfbam::ICFBamParamObj* locked = NULL;
		cfbam::CFBamParamBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamParamObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readAllParam( bool forceRead ) {
		static const std::string S_ProcName( "readAllParam" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamParamObj* realized = NULL;
		if( forceRead || ( allParam == NULL ) ) {
			std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* map = new std::map<cfbam::CFBamParamPKey,cfbam::ICFBamParamObj*>();
			allParam = map;
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamParamBuff* buff = NULL;
			cfbam::ICFBamParamObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allParam->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allParam->size();
		std::vector<cfbam::ICFBamParamObj*> arr;
		auto valIter = allParam->begin();
		size_t idx = 0;
		while( valIter != allParam->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::readParamByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readParamByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamParamObj* obj = readParam( &pkey, forceRead );
		return( obj );
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::readParamByUNameIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readParamByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamParamByUNameIdxKey,
				cfbam::ICFBamParamObj*>();
		}
		cfbam::CFBamParamByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		key.setRequiredName( Name );
		cfbam::ICFBamParamObj* obj = NULL;
		cfbam::ICFBamParamObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamParamBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				ServerMethodId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamParamByUNameIdxKey, cfbam::ICFBamParamObj*>::value_type( key, dynamic_cast<cfbam::ICFBamParamObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readParamByValTentIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readParamByValTentIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamByValTentIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* oldDict;
		if( indexByValTentIdx == NULL ) {
			indexByValTentIdx = new std::map< cfbam::CFBamParamByValTentIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		}
		auto searchIndexByValTentIdx = indexByValTentIdx->find( key );
		if( searchIndexByValTentIdx != indexByValTentIdx->end() ) {
			oldDict = searchIndexByValTentIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
			cfbam::ICFBamParamObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByValTentIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamParamBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamParamObj* realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByValTentIdx->erase( searchIndexByValTentIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByValTentIdx->insert( std::map< cfbam::CFBamParamByValTentIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamParamObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readParamByServerMethodIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readParamByServerMethodIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamByServerMethodIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* oldDict;
		if( indexByServerMethodIdx == NULL ) {
			indexByServerMethodIdx = new std::map< cfbam::CFBamParamByServerMethodIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		}
		auto searchIndexByServerMethodIdx = indexByServerMethodIdx->find( key );
		if( searchIndexByServerMethodIdx != indexByServerMethodIdx->end() ) {
			oldDict = searchIndexByServerMethodIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
			cfbam::ICFBamParamObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByServerMethodIdx( schema->getAuthorization(),
				TenantId,
				ServerMethodId );
			cfbam::CFBamParamBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamParamObj* realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByServerMethodIdx->erase( searchIndexByServerMethodIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByServerMethodIdx->insert( std::map< cfbam::CFBamParamByServerMethodIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamParamObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readParamByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readParamByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamParamByDefSchemaIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
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
			dict = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
			cfbam::ICFBamParamObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamParamBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamParamObj* realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamParamByDefSchemaIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamParamObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readParamByServerTypeIdx( const int64_t* TypeTenantId,
			const int64_t* TypeId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readParamByServerTypeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamByServerTypeIdxKey key;
		if( TypeTenantId == NULL ) {
			key.setOptionalTypeTenantIdNull();
		}
		else {
			key.setOptionalTypeTenantIdValue( *TypeTenantId );
		}
		if( TypeId == NULL ) {
			key.setOptionalTypeIdNull();
		}
		else {
			key.setOptionalTypeIdValue( *TypeId );
		}
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* oldDict;
		if( indexByServerTypeIdx == NULL ) {
			indexByServerTypeIdx = new std::map< cfbam::CFBamParamByServerTypeIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		}
		auto searchIndexByServerTypeIdx = indexByServerTypeIdx->find( key );
		if( searchIndexByServerTypeIdx != indexByServerTypeIdx->end() ) {
			oldDict = searchIndexByServerTypeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
			cfbam::ICFBamParamObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByServerTypeIdx( schema->getAuthorization(),
				TypeTenantId,
				TypeId );
			cfbam::CFBamParamBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamParamObj* realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByServerTypeIdx->erase( searchIndexByServerTypeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByServerTypeIdx->insert( std::map< cfbam::CFBamParamByServerTypeIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamParamObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readParamByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readParamByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamByPrevIdxKey key;
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
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* oldDict;
		if( indexByPrevIdx == NULL ) {
			indexByPrevIdx = new std::map< cfbam::CFBamParamByPrevIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
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
			dict = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
			cfbam::ICFBamParamObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
			cfbam::CFBamParamBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamParamObj* realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPrevIdx->erase( searchIndexByPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPrevIdx->insert( std::map< cfbam::CFBamParamByPrevIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamParamObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readParamByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readParamByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamByNextIdxKey key;
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
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* oldDict;
		if( indexByNextIdx == NULL ) {
			indexByNextIdx = new std::map< cfbam::CFBamParamByNextIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
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
			dict = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
			cfbam::ICFBamParamObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
			cfbam::CFBamParamBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamParamObj* realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByNextIdx->erase( searchIndexByNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByNextIdx->insert( std::map< cfbam::CFBamParamByNextIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamParamObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readParamByContPrevIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readParamByContPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamByContPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* oldDict;
		if( indexByContPrevIdx == NULL ) {
			indexByContPrevIdx = new std::map< cfbam::CFBamParamByContPrevIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		}
		auto searchIndexByContPrevIdx = indexByContPrevIdx->find( key );
		if( searchIndexByContPrevIdx != indexByContPrevIdx->end() ) {
			oldDict = searchIndexByContPrevIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
			cfbam::ICFBamParamObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByContPrevIdx( schema->getAuthorization(),
				TenantId,
				ServerMethodId,
				PrevId );
			cfbam::CFBamParamBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamParamObj* realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByContPrevIdx->erase( searchIndexByContPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByContPrevIdx->insert( std::map< cfbam::CFBamParamByContPrevIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamParamObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readParamByContNextIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readParamByContNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamByContNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* oldDict;
		if( indexByContNextIdx == NULL ) {
			indexByContNextIdx = new std::map< cfbam::CFBamParamByContNextIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>*>();
		}
		auto searchIndexByContNextIdx = indexByContNextIdx->find( key );
		if( searchIndexByContNextIdx != indexByContNextIdx->end() ) {
			oldDict = searchIndexByContNextIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>();
			cfbam::ICFBamParamObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByContNextIdx( schema->getAuthorization(),
				TenantId,
				ServerMethodId,
				NextId );
			cfbam::CFBamParamBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamParamObj* realized = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByContNextIdx->erase( searchIndexByContNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByContNextIdx->insert( std::map< cfbam::CFBamParamByContNextIdxKey,
				std::map< cfbam::CFBamParamPKey, cfbam::ICFBamParamObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamParamObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::readCachedParam( cfbam::CFBamParamPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readParam" );
		cfbam::ICFBamParamObj* obj = NULL;
		cfbam::ICFBamParamObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::readCachedParamByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedParamByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamParamPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamParamObj* obj = readCachedParam( &pkey );
		return( obj );
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::readCachedParamByUNameIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedParamByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamParamByUNameIdxKey,
				cfbam::ICFBamParamObj*>();
		}
		cfbam::CFBamParamByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		key.setRequiredName( Name );
		cfbam::ICFBamParamObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamParamBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readCachedParamByValTentIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedParamByValTentIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamParamObj*> arr;
		cfbam::CFBamParamByValTentIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		if( indexByValTentIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByValTentIdx = indexByValTentIdx->find( key );
		if( searchIndexByValTentIdx != indexByValTentIdx->end() ) {
			dict = searchIndexByValTentIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamParamObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamParamObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamParamBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readCachedParamByServerMethodIdx( const int64_t TenantId,
			const int64_t ServerMethodId )
	{
		static const std::string S_ProcName( "readCachedParamByServerMethodIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamParamObj*> arr;
		cfbam::CFBamParamByServerMethodIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		if( indexByServerMethodIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByServerMethodIdx = indexByServerMethodIdx->find( key );
		if( searchIndexByServerMethodIdx != indexByServerMethodIdx->end() ) {
			dict = searchIndexByServerMethodIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamParamObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamParamObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamParamBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readCachedParamByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedParamByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamParamObj*> arr;
		cfbam::CFBamParamByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamParamObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamParamObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamParamBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readCachedParamByServerTypeIdx( const int64_t* TypeTenantId,
			const int64_t* TypeId )
	{
		static const std::string S_ProcName( "readCachedParamByServerTypeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamParamObj*> arr;
		cfbam::CFBamParamByServerTypeIdxKey key;
		if( TypeTenantId == NULL ) {
			key.setOptionalTypeTenantIdNull();
		}
		else {
			key.setOptionalTypeTenantIdValue( *TypeTenantId );
		}
		if( TypeId == NULL ) {
			key.setOptionalTypeIdNull();
		}
		else {
			key.setOptionalTypeIdValue( *TypeId );
		}
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		if( indexByServerTypeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByServerTypeIdx = indexByServerTypeIdx->find( key );
		if( searchIndexByServerTypeIdx != indexByServerTypeIdx->end() ) {
			dict = searchIndexByServerTypeIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamParamObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamParamObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamParamBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readCachedParamByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedParamByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamParamObj*> arr;
		cfbam::CFBamParamByPrevIdxKey key;
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
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		if( indexByPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPrevIdx = indexByPrevIdx->find( key );
		if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
			dict = searchIndexByPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamParamObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamParamObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamParamBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readCachedParamByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedParamByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamParamObj*> arr;
		cfbam::CFBamParamByNextIdxKey key;
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
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		if( indexByNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByNextIdx = indexByNextIdx->find( key );
		if( searchIndexByNextIdx != indexByNextIdx->end() ) {
			dict = searchIndexByNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamParamObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamParamObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamParamBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readCachedParamByContPrevIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedParamByContPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamParamObj*> arr;
		cfbam::CFBamParamByContPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		if( indexByContPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByContPrevIdx = indexByContPrevIdx->find( key );
		if( searchIndexByContPrevIdx != indexByContPrevIdx->end() ) {
			dict = searchIndexByContPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamParamObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamParamObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamParamBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamParamTableObj::readCachedParamByContNextIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedParamByContNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamParamObj*> arr;
		cfbam::CFBamParamByContNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* dict;
		if( indexByContNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByContNextIdx = indexByContNextIdx->find( key );
		if( searchIndexByContNextIdx != indexByContNextIdx->end() ) {
			dict = searchIndexByContNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamParamObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamParamObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamParamBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::updateParam( cfbam::ICFBamParamEditObj* Obj ) {
		static const std::string S_ProcName( "updateParam" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamParamObj* obj = dynamic_cast<cfbam::ICFBamParamObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamParamBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->updateParam( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamParamBuff*>( Obj->getParamBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamParamObj*>( dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
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

	void CFBamParamTableObj::deleteParam( cfbam::ICFBamParamEditObj* Obj ) {
		cfbam::ICFBamParamObj* obj = Obj;
		cfbam::ICFBamParamObj* prev = obj->getOptionalLookupPrev();
		cfbam::ICFBamParamObj* next = obj->getOptionalLookupNext();
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParam( schema->getAuthorization(),
			obj->getParamBuff() );
		if( prev != NULL ) {
			prev->read( true );
		}
		if( next != NULL ) {
			next->read( true );
		}
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamParamTableObj::deleteParamByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamParamPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamParamObj* obj = readParam( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamParamEditObj* editObj = dynamic_cast<cfbam::ICFBamParamEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamParamEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamParamTableObj::deleteParamByUNameIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamParamByUNameIdxKey,
				cfbam::ICFBamParamObj*>();
		}
		cfbam::CFBamParamByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		key.setRequiredName( Name );
		cfbam::ICFBamParamObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByUNameIdx( schema->getAuthorization(),
				TenantId,
				ServerMethodId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByUNameIdx( schema->getAuthorization(),
				TenantId,
				ServerMethodId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			ServerMethodId,
			Name );
	}

	void CFBamParamTableObj::deleteParamByValTentIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByValTentIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByValTentIdx( TenantId );
	}

	void CFBamParamTableObj::deleteParamByServerMethodIdx( const int64_t TenantId,
			const int64_t ServerMethodId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByServerMethodIdx( schema->getAuthorization(),
				TenantId,
				ServerMethodId );
		deepDisposeByServerMethodIdx( TenantId,
			ServerMethodId );
	}

	void CFBamParamTableObj::deleteParamByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamParamTableObj::deleteParamByServerTypeIdx( const int64_t* TypeTenantId,
			const int64_t* TypeId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByServerTypeIdx( schema->getAuthorization(),
				TypeTenantId,
				TypeId );
		deepDisposeByServerTypeIdx( TypeTenantId,
			TypeId );
	}

	void CFBamParamTableObj::deleteParamByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
		deepDisposeByPrevIdx( PrevTenantId,
			PrevId );
	}

	void CFBamParamTableObj::deleteParamByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
		deepDisposeByNextIdx( NextTenantId,
			NextId );
	}

	void CFBamParamTableObj::deleteParamByContPrevIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByContPrevIdx( schema->getAuthorization(),
				TenantId,
				ServerMethodId,
				PrevId );
		deepDisposeByContPrevIdx( TenantId,
			ServerMethodId,
			PrevId );
	}

	void CFBamParamTableObj::deleteParamByContNextIdx( const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->deleteParamByContNextIdx( schema->getAuthorization(),
				TenantId,
				ServerMethodId,
				NextId );
		deepDisposeByContNextIdx( TenantId,
			ServerMethodId,
			NextId );
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::moveUpParam( cfbam::ICFBamParamObj* Obj ) {
		static const std::string S_ProcName( "moveUpParam" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamParamObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamParamBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->moveBuffUp( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getParamBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
			cfbam::ICFBamParamObj* prev = obj->getOptionalLookupPrev( true );
			cfbam::ICFBamParamObj* next = obj->getOptionalLookupNext( true );
			if( next != NULL ) {
				cfbam::ICFBamParamObj* gnext = next->getOptionalLookupNext( true );
			}
		}
		return( obj );
	}

	cfbam::ICFBamParamObj* CFBamParamTableObj::moveDownParam( cfbam::ICFBamParamObj* Obj ) {
		static const std::string S_ProcName( "moveDownParam" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamParamObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamParamBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->moveBuffDown( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getParamBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamParamTableObj*>( schema->getParamTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamParamObj*>( obj->realize() );
			cfbam::ICFBamParamObj* prev = obj->getOptionalLookupPrev( true );
			if( prev != NULL ) {
				cfbam::ICFBamParamObj* gprev = prev->getOptionalLookupPrev( true );
			}
			cfbam::ICFBamParamObj* next = obj->getOptionalLookupNext( true );
		}
		return( obj );
	}

	void CFBamParamTableObj::reallyDetachFromIndexesParam( cfbam::ICFBamParamObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesParam" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamParamObj* obj = Obj;
		cfbam::CFBamParamPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamParamObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamParamByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredServerMethodId( obj->getRequiredServerMethodId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByValTentIdx != NULL ) {
				cfbam::CFBamParamByValTentIdxKey keyValTentIdx;
				keyValTentIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchValTentIdx = indexByValTentIdx->find( keyValTentIdx );
				if( searchValTentIdx != indexByValTentIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapValTentIdx = searchValTentIdx->second;
					if( mapValTentIdx != NULL ) {
						auto removalProbe = mapValTentIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapValTentIdx->end() ) {
							mapValTentIdx->erase( removalProbe );
							if( mapValTentIdx->empty() ) {
								delete mapValTentIdx;
								mapValTentIdx = NULL;
								indexByValTentIdx->erase( searchValTentIdx );
							}
						}
					}
				}
			}

			if( indexByServerMethodIdx != NULL ) {
				cfbam::CFBamParamByServerMethodIdxKey keyServerMethodIdx;
				keyServerMethodIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyServerMethodIdx.setRequiredServerMethodId( obj->getRequiredServerMethodId() );
				auto searchServerMethodIdx = indexByServerMethodIdx->find( keyServerMethodIdx );
				if( searchServerMethodIdx != indexByServerMethodIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapServerMethodIdx = searchServerMethodIdx->second;
					if( mapServerMethodIdx != NULL ) {
						auto removalProbe = mapServerMethodIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapServerMethodIdx->end() ) {
							mapServerMethodIdx->erase( removalProbe );
							if( mapServerMethodIdx->empty() ) {
								delete mapServerMethodIdx;
								mapServerMethodIdx = NULL;
								indexByServerMethodIdx->erase( searchServerMethodIdx );
							}
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamParamByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
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

			if( indexByServerTypeIdx != NULL ) {
				cfbam::CFBamParamByServerTypeIdxKey keyServerTypeIdx;
				if( obj->isOptionalTypeTenantIdNull() ) {
					keyServerTypeIdx.setOptionalTypeTenantIdNull();
				}
				else {
					keyServerTypeIdx.setOptionalTypeTenantIdValue( obj->getOptionalTypeTenantIdValue() );
				}
				if( obj->isOptionalTypeIdNull() ) {
					keyServerTypeIdx.setOptionalTypeIdNull();
				}
				else {
					keyServerTypeIdx.setOptionalTypeIdValue( obj->getOptionalTypeIdValue() );
				}
				auto searchServerTypeIdx = indexByServerTypeIdx->find( keyServerTypeIdx );
				if( searchServerTypeIdx != indexByServerTypeIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapServerTypeIdx = searchServerTypeIdx->second;
					if( mapServerTypeIdx != NULL ) {
						auto removalProbe = mapServerTypeIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapServerTypeIdx->end() ) {
							mapServerTypeIdx->erase( removalProbe );
							if( mapServerTypeIdx->empty() ) {
								delete mapServerTypeIdx;
								mapServerTypeIdx = NULL;
								indexByServerTypeIdx->erase( searchServerTypeIdx );
							}
						}
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamParamByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapPrevIdx = searchPrevIdx->second;
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
				cfbam::CFBamParamByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapNextIdx = searchNextIdx->second;
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

			if( indexByContPrevIdx != NULL ) {
				cfbam::CFBamParamByContPrevIdxKey keyContPrevIdx;
				keyContPrevIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyContPrevIdx.setRequiredServerMethodId( obj->getRequiredServerMethodId() );
				if( obj->isOptionalPrevIdNull() ) {
					keyContPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyContPrevIdx.setOptionalPrevIdValue( obj->getOptionalPrevIdValue() );
				}
				auto searchContPrevIdx = indexByContPrevIdx->find( keyContPrevIdx );
				if( searchContPrevIdx != indexByContPrevIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapContPrevIdx = searchContPrevIdx->second;
					if( mapContPrevIdx != NULL ) {
						auto removalProbe = mapContPrevIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapContPrevIdx->end() ) {
							mapContPrevIdx->erase( removalProbe );
							if( mapContPrevIdx->empty() ) {
								delete mapContPrevIdx;
								mapContPrevIdx = NULL;
								indexByContPrevIdx->erase( searchContPrevIdx );
							}
						}
					}
				}
			}

			if( indexByContNextIdx != NULL ) {
				cfbam::CFBamParamByContNextIdxKey keyContNextIdx;
				keyContNextIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyContNextIdx.setRequiredServerMethodId( obj->getRequiredServerMethodId() );
				if( obj->isOptionalNextIdNull() ) {
					keyContNextIdx.setOptionalNextIdNull();
				}
				else {
					keyContNextIdx.setOptionalNextIdValue( obj->getOptionalNextIdValue() );
				}
				auto searchContNextIdx = indexByContNextIdx->find( keyContNextIdx );
				if( searchContNextIdx != indexByContNextIdx->end() ) {
					std::map<cfbam::CFBamParamPKey, cfbam::ICFBamParamObj*>* mapContNextIdx = searchContNextIdx->second;
					if( mapContNextIdx != NULL ) {
						auto removalProbe = mapContNextIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapContNextIdx->end() ) {
							mapContNextIdx->erase( removalProbe );
							if( mapContNextIdx->empty() ) {
								delete mapContNextIdx;
								mapContNextIdx = NULL;
								indexByContNextIdx->erase( searchContNextIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
