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

	const std::string CFBamRelationTableObj::CLASS_NAME( "CFBamRelationTableObj" );
	const std::string CFBamRelationTableObj::TABLE_NAME( "Relation" );
	const std::string CFBamRelationTableObj::TABLE_DBNAME( "reldef" );

	CFBamRelationTableObj::CFBamRelationTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
		allRelation = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamRelationByUNameIdxKey,
			cfbam::ICFBamRelationObj*>();
		indexByRelnTenantIdx = new std::map< cfbam::CFBamRelationByRelnTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByRelTableIdx = new std::map< cfbam::CFBamRelationByRelTableIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamRelationByDefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByFromKeyIdx = new std::map< cfbam::CFBamRelationByFromKeyIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByToTblIdx = new std::map< cfbam::CFBamRelationByToTblIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByToKeyIdx = new std::map< cfbam::CFBamRelationByToKeyIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByNarrowedIdx = new std::map< cfbam::CFBamRelationByNarrowedIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
	}

	CFBamRelationTableObj::CFBamRelationTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
		allRelation = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamRelationByUNameIdxKey,
			cfbam::ICFBamRelationObj*>();
		indexByRelnTenantIdx = new std::map< cfbam::CFBamRelationByRelnTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByRelTableIdx = new std::map< cfbam::CFBamRelationByRelTableIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamRelationByDefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByFromKeyIdx = new std::map< cfbam::CFBamRelationByFromKeyIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByToTblIdx = new std::map< cfbam::CFBamRelationByToTblIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByToKeyIdx = new std::map< cfbam::CFBamRelationByToKeyIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		indexByNarrowedIdx = new std::map< cfbam::CFBamRelationByNarrowedIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
	}

	CFBamRelationTableObj::~CFBamRelationTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexByRelnTenantIdx != NULL ) {
			delete indexByRelnTenantIdx;
			indexByRelnTenantIdx = NULL;
		}
		if( indexByRelTableIdx != NULL ) {
			delete indexByRelTableIdx;
			indexByRelTableIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByFromKeyIdx != NULL ) {
			delete indexByFromKeyIdx;
			indexByFromKeyIdx = NULL;
		}
		if( indexByToTblIdx != NULL ) {
			delete indexByToTblIdx;
			indexByToTblIdx = NULL;
		}
		if( indexByToKeyIdx != NULL ) {
			delete indexByToKeyIdx;
			indexByToKeyIdx = NULL;
		}
		if( indexByNarrowedIdx != NULL ) {
			delete indexByNarrowedIdx;
			indexByNarrowedIdx = NULL;
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

	cfbam::ICFBamSchemaObj* CFBamRelationTableObj::getSchema() {
		return( schema );
	}

	void CFBamRelationTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamRelationTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamRelationTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamRelationTableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamRelationTableObj::minimizeMemory() {
		if( allRelation != NULL ) {
			allRelation->clear();
			delete allRelation;
			allRelation = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* curByTenantIdx = NULL;
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
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( indexByRelnTenantIdx != NULL ) {
			std::map< cfbam::CFBamRelationByRelnTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator iterByRelnTenantIdx = indexByRelnTenantIdx->begin();
			std::map< cfbam::CFBamRelationByRelnTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator endByRelnTenantIdx = indexByRelnTenantIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* curByRelnTenantIdx = NULL;
			while( iterByRelnTenantIdx != endByRelnTenantIdx ) {
				curByRelnTenantIdx = iterByRelnTenantIdx->second;
				if( curByRelnTenantIdx != NULL ) {
					curByRelnTenantIdx->clear();
					delete curByRelnTenantIdx;
					curByRelnTenantIdx = NULL;
					iterByRelnTenantIdx->second = NULL;
				}
				iterByRelnTenantIdx ++;
			}
			indexByRelnTenantIdx->clear();
		}
		if( indexByRelTableIdx != NULL ) {
			std::map< cfbam::CFBamRelationByRelTableIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator iterByRelTableIdx = indexByRelTableIdx->begin();
			std::map< cfbam::CFBamRelationByRelTableIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator endByRelTableIdx = indexByRelTableIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* curByRelTableIdx = NULL;
			while( iterByRelTableIdx != endByRelTableIdx ) {
				curByRelTableIdx = iterByRelTableIdx->second;
				if( curByRelTableIdx != NULL ) {
					curByRelTableIdx->clear();
					delete curByRelTableIdx;
					curByRelTableIdx = NULL;
					iterByRelTableIdx->second = NULL;
				}
				iterByRelTableIdx ++;
			}
			indexByRelTableIdx->clear();
		}
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamRelationByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamRelationByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* curByDefSchemaIdx = NULL;
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
		if( indexByFromKeyIdx != NULL ) {
			std::map< cfbam::CFBamRelationByFromKeyIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator iterByFromKeyIdx = indexByFromKeyIdx->begin();
			std::map< cfbam::CFBamRelationByFromKeyIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator endByFromKeyIdx = indexByFromKeyIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* curByFromKeyIdx = NULL;
			while( iterByFromKeyIdx != endByFromKeyIdx ) {
				curByFromKeyIdx = iterByFromKeyIdx->second;
				if( curByFromKeyIdx != NULL ) {
					curByFromKeyIdx->clear();
					delete curByFromKeyIdx;
					curByFromKeyIdx = NULL;
					iterByFromKeyIdx->second = NULL;
				}
				iterByFromKeyIdx ++;
			}
			indexByFromKeyIdx->clear();
		}
		if( indexByToTblIdx != NULL ) {
			std::map< cfbam::CFBamRelationByToTblIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator iterByToTblIdx = indexByToTblIdx->begin();
			std::map< cfbam::CFBamRelationByToTblIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator endByToTblIdx = indexByToTblIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* curByToTblIdx = NULL;
			while( iterByToTblIdx != endByToTblIdx ) {
				curByToTblIdx = iterByToTblIdx->second;
				if( curByToTblIdx != NULL ) {
					curByToTblIdx->clear();
					delete curByToTblIdx;
					curByToTblIdx = NULL;
					iterByToTblIdx->second = NULL;
				}
				iterByToTblIdx ++;
			}
			indexByToTblIdx->clear();
		}
		if( indexByToKeyIdx != NULL ) {
			std::map< cfbam::CFBamRelationByToKeyIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator iterByToKeyIdx = indexByToKeyIdx->begin();
			std::map< cfbam::CFBamRelationByToKeyIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator endByToKeyIdx = indexByToKeyIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* curByToKeyIdx = NULL;
			while( iterByToKeyIdx != endByToKeyIdx ) {
				curByToKeyIdx = iterByToKeyIdx->second;
				if( curByToKeyIdx != NULL ) {
					curByToKeyIdx->clear();
					delete curByToKeyIdx;
					curByToKeyIdx = NULL;
					iterByToKeyIdx->second = NULL;
				}
				iterByToKeyIdx ++;
			}
			indexByToKeyIdx->clear();
		}
		if( indexByNarrowedIdx != NULL ) {
			std::map< cfbam::CFBamRelationByNarrowedIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator iterByNarrowedIdx = indexByNarrowedIdx->begin();
			std::map< cfbam::CFBamRelationByNarrowedIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* >::iterator endByNarrowedIdx = indexByNarrowedIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* curByNarrowedIdx = NULL;
			while( iterByNarrowedIdx != endByNarrowedIdx ) {
				curByNarrowedIdx = iterByNarrowedIdx->second;
				if( curByNarrowedIdx != NULL ) {
					curByNarrowedIdx->clear();
					delete curByNarrowedIdx;
					curByNarrowedIdx = NULL;
					iterByNarrowedIdx->second = NULL;
				}
				iterByNarrowedIdx ++;
			}
			indexByNarrowedIdx->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::newInstance() {
		cfbam::ICFBamRelationObj* inst = dynamic_cast<cfbam::ICFBamRelationObj*>( new CFBamRelationObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamRelationEditObj* CFBamRelationTableObj::newEditInstance( cfbam::ICFBamRelationObj* orig ) {
		cfbam::ICFBamRelationEditObj* edit = dynamic_cast<cfbam::ICFBamRelationEditObj*>( new CFBamRelationEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::realizeRelation( cfbam::ICFBamRelationObj* Obj ) {
		static const std::string S_ProcName( "realizeRelation" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamRelationObj* obj = Obj;
		cfbam::ICFBamRelationObj* existingObj = NULL;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		cfbam::ICFBamRelationObj* keepObj = NULL;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamRelationByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByRelnTenantIdx != NULL ) {
				cfbam::CFBamRelationByRelnTenantIdxKey keyRelnTenantIdx;
				keyRelnTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchRelnTenantIdx = indexByRelnTenantIdx->find( keyRelnTenantIdx );
				if( searchRelnTenantIdx != indexByRelnTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapRelnTenantIdx = searchRelnTenantIdx->second;
					if( mapRelnTenantIdx != NULL ) {
						auto removalProbe = mapRelnTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapRelnTenantIdx->end() ) {
							mapRelnTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByRelTableIdx != NULL ) {
				cfbam::CFBamRelationByRelTableIdxKey keyRelTableIdx;
				keyRelTableIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelTableIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				auto searchRelTableIdx = indexByRelTableIdx->find( keyRelTableIdx );
				if( searchRelTableIdx != indexByRelTableIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapRelTableIdx = searchRelTableIdx->second;
					if( mapRelTableIdx != NULL ) {
						auto removalProbe = mapRelTableIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapRelTableIdx->end() ) {
							mapRelTableIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamRelationByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByFromKeyIdx != NULL ) {
				cfbam::CFBamRelationByFromKeyIdxKey keyFromKeyIdx;
				keyFromKeyIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyFromKeyIdx.setRequiredFromIndexId( keepObj->getRequiredFromIndexId() );
				auto searchFromKeyIdx = indexByFromKeyIdx->find( keyFromKeyIdx );
				if( searchFromKeyIdx != indexByFromKeyIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapFromKeyIdx = searchFromKeyIdx->second;
					if( mapFromKeyIdx != NULL ) {
						auto removalProbe = mapFromKeyIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapFromKeyIdx->end() ) {
							mapFromKeyIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByToTblIdx != NULL ) {
				cfbam::CFBamRelationByToTblIdxKey keyToTblIdx;
				keyToTblIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyToTblIdx.setRequiredToTableId( keepObj->getRequiredToTableId() );
				auto searchToTblIdx = indexByToTblIdx->find( keyToTblIdx );
				if( searchToTblIdx != indexByToTblIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapToTblIdx = searchToTblIdx->second;
					if( mapToTblIdx != NULL ) {
						auto removalProbe = mapToTblIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapToTblIdx->end() ) {
							mapToTblIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByToKeyIdx != NULL ) {
				cfbam::CFBamRelationByToKeyIdxKey keyToKeyIdx;
				keyToKeyIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyToKeyIdx.setRequiredToIndexId( keepObj->getRequiredToIndexId() );
				auto searchToKeyIdx = indexByToKeyIdx->find( keyToKeyIdx );
				if( searchToKeyIdx != indexByToKeyIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapToKeyIdx = searchToKeyIdx->second;
					if( mapToKeyIdx != NULL ) {
						auto removalProbe = mapToKeyIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapToKeyIdx->end() ) {
							mapToKeyIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNarrowedIdx != NULL ) {
				cfbam::CFBamRelationByNarrowedIdxKey keyNarrowedIdx;
				if( keepObj->isOptionalNarrowedTenantIdNull() ) {
					keyNarrowedIdx.setOptionalNarrowedTenantIdNull();
				}
				else {
					keyNarrowedIdx.setOptionalNarrowedTenantIdValue( keepObj->getOptionalNarrowedTenantIdValue() );
				}
				if( keepObj->isOptionalNarrowedIdNull() ) {
					keyNarrowedIdx.setOptionalNarrowedIdNull();
				}
				else {
					keyNarrowedIdx.setOptionalNarrowedIdValue( keepObj->getOptionalNarrowedIdValue() );
				}
				auto searchNarrowedIdx = indexByNarrowedIdx->find( keyNarrowedIdx );
				if( searchNarrowedIdx != indexByNarrowedIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapNarrowedIdx = searchNarrowedIdx->second;
					if( mapNarrowedIdx != NULL ) {
						auto removalProbe = mapNarrowedIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapNarrowedIdx->end() ) {
							mapNarrowedIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfbam::ICFBamRelationObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->realizeScope( Obj ) );
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
				cfbam::ICFBamRelationObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamRelationObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamRelationByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamRelationByUNameIdxKey, cfbam::ICFBamRelationObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByRelnTenantIdx != NULL ) {
				static const std::string S_ARelnTenantIdxObj( "aRelnTenantIdxObj" );
				cfbam::ICFBamRelationObj* aRelnTenantIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aRelnTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelnTenantIdxObj );
				}
				cfbam::CFBamRelationByRelnTenantIdxKey keyRelnTenantIdx;
				keyRelnTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByRelnTenantIdx = indexByRelnTenantIdx->find( keyRelnTenantIdx );
				if( searchIndexByRelnTenantIdx != indexByRelnTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapRelnTenantIdx = searchIndexByRelnTenantIdx->second;
					if( mapRelnTenantIdx != NULL ) {
						mapRelnTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aRelnTenantIdxObj ) );
					}
				}
			}

			if( indexByRelTableIdx != NULL ) {
				static const std::string S_ARelTableIdxObj( "aRelTableIdxObj" );
				cfbam::ICFBamRelationObj* aRelTableIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aRelTableIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelTableIdxObj );
				}
				cfbam::CFBamRelationByRelTableIdxKey keyRelTableIdx;
				keyRelTableIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelTableIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				auto searchIndexByRelTableIdx = indexByRelTableIdx->find( keyRelTableIdx );
				if( searchIndexByRelTableIdx != indexByRelTableIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapRelTableIdx = searchIndexByRelTableIdx->second;
					if( mapRelTableIdx != NULL ) {
						mapRelTableIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aRelTableIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamRelationObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamRelationByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByFromKeyIdx != NULL ) {
				static const std::string S_AFromKeyIdxObj( "aFromKeyIdxObj" );
				cfbam::ICFBamRelationObj* aFromKeyIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aFromKeyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFromKeyIdxObj );
				}
				cfbam::CFBamRelationByFromKeyIdxKey keyFromKeyIdx;
				keyFromKeyIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyFromKeyIdx.setRequiredFromIndexId( keepObj->getRequiredFromIndexId() );
				auto searchIndexByFromKeyIdx = indexByFromKeyIdx->find( keyFromKeyIdx );
				if( searchIndexByFromKeyIdx != indexByFromKeyIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapFromKeyIdx = searchIndexByFromKeyIdx->second;
					if( mapFromKeyIdx != NULL ) {
						mapFromKeyIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aFromKeyIdxObj ) );
					}
				}
			}

			if( indexByToTblIdx != NULL ) {
				static const std::string S_AToTblIdxObj( "aToTblIdxObj" );
				cfbam::ICFBamRelationObj* aToTblIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aToTblIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToTblIdxObj );
				}
				cfbam::CFBamRelationByToTblIdxKey keyToTblIdx;
				keyToTblIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyToTblIdx.setRequiredToTableId( keepObj->getRequiredToTableId() );
				auto searchIndexByToTblIdx = indexByToTblIdx->find( keyToTblIdx );
				if( searchIndexByToTblIdx != indexByToTblIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapToTblIdx = searchIndexByToTblIdx->second;
					if( mapToTblIdx != NULL ) {
						mapToTblIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aToTblIdxObj ) );
					}
				}
			}

			if( indexByToKeyIdx != NULL ) {
				static const std::string S_AToKeyIdxObj( "aToKeyIdxObj" );
				cfbam::ICFBamRelationObj* aToKeyIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aToKeyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToKeyIdxObj );
				}
				cfbam::CFBamRelationByToKeyIdxKey keyToKeyIdx;
				keyToKeyIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyToKeyIdx.setRequiredToIndexId( keepObj->getRequiredToIndexId() );
				auto searchIndexByToKeyIdx = indexByToKeyIdx->find( keyToKeyIdx );
				if( searchIndexByToKeyIdx != indexByToKeyIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapToKeyIdx = searchIndexByToKeyIdx->second;
					if( mapToKeyIdx != NULL ) {
						mapToKeyIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aToKeyIdxObj ) );
					}
				}
			}

			if( indexByNarrowedIdx != NULL ) {
				static const std::string S_ANarrowedIdxObj( "aNarrowedIdxObj" );
				cfbam::ICFBamRelationObj* aNarrowedIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aNarrowedIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANarrowedIdxObj );
				}
				cfbam::CFBamRelationByNarrowedIdxKey keyNarrowedIdx;
				if( keepObj->isOptionalNarrowedTenantIdNull() ) {
					keyNarrowedIdx.setOptionalNarrowedTenantIdNull();
				}
				else {
					keyNarrowedIdx.setOptionalNarrowedTenantIdValue( keepObj->getOptionalNarrowedTenantIdValue() );
				}
				if( keepObj->isOptionalNarrowedIdNull() ) {
					keyNarrowedIdx.setOptionalNarrowedIdNull();
				}
				else {
					keyNarrowedIdx.setOptionalNarrowedIdValue( keepObj->getOptionalNarrowedIdValue() );
				}
				auto searchIndexByNarrowedIdx = indexByNarrowedIdx->find( keyNarrowedIdx );
				if( searchIndexByNarrowedIdx != indexByNarrowedIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapNarrowedIdx = searchIndexByNarrowedIdx->second;
					if( mapNarrowedIdx != NULL ) {
						mapNarrowedIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aNarrowedIdxObj ) );
					}
				}
			}

			if( allRelation != NULL ) {
				allRelation->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfbam::ICFBamRelationObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->realizeScope( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamRelationObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamRelationObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamRelationByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamRelationByUNameIdxKey, cfbam::ICFBamRelationObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByRelnTenantIdx != NULL ) {
				static const std::string S_ARelnTenantIdxObj( "aRelnTenantIdxObj" );
				cfbam::ICFBamRelationObj* aRelnTenantIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aRelnTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelnTenantIdxObj );
				}
				cfbam::CFBamRelationByRelnTenantIdxKey keyRelnTenantIdx;
				keyRelnTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByRelnTenantIdx = indexByRelnTenantIdx->find( keyRelnTenantIdx );
				if( searchIndexByRelnTenantIdx != indexByRelnTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapRelnTenantIdx = searchIndexByRelnTenantIdx->second;
					if( mapRelnTenantIdx != NULL ) {
						mapRelnTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aRelnTenantIdxObj ) );
					}
				}
			}

			if( indexByRelTableIdx != NULL ) {
				static const std::string S_ARelTableIdxObj( "aRelTableIdxObj" );
				cfbam::ICFBamRelationObj* aRelTableIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aRelTableIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelTableIdxObj );
				}
				cfbam::CFBamRelationByRelTableIdxKey keyRelTableIdx;
				keyRelTableIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelTableIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				auto searchIndexByRelTableIdx = indexByRelTableIdx->find( keyRelTableIdx );
				if( searchIndexByRelTableIdx != indexByRelTableIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapRelTableIdx = searchIndexByRelTableIdx->second;
					if( mapRelTableIdx != NULL ) {
						mapRelTableIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aRelTableIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamRelationObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamRelationByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByFromKeyIdx != NULL ) {
				static const std::string S_AFromKeyIdxObj( "aFromKeyIdxObj" );
				cfbam::ICFBamRelationObj* aFromKeyIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aFromKeyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFromKeyIdxObj );
				}
				cfbam::CFBamRelationByFromKeyIdxKey keyFromKeyIdx;
				keyFromKeyIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyFromKeyIdx.setRequiredFromIndexId( keepObj->getRequiredFromIndexId() );
				auto searchIndexByFromKeyIdx = indexByFromKeyIdx->find( keyFromKeyIdx );
				if( searchIndexByFromKeyIdx != indexByFromKeyIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapFromKeyIdx = searchIndexByFromKeyIdx->second;
					if( mapFromKeyIdx != NULL ) {
						mapFromKeyIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aFromKeyIdxObj ) );
					}
				}
			}

			if( indexByToTblIdx != NULL ) {
				static const std::string S_AToTblIdxObj( "aToTblIdxObj" );
				cfbam::ICFBamRelationObj* aToTblIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aToTblIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToTblIdxObj );
				}
				cfbam::CFBamRelationByToTblIdxKey keyToTblIdx;
				keyToTblIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyToTblIdx.setRequiredToTableId( keepObj->getRequiredToTableId() );
				auto searchIndexByToTblIdx = indexByToTblIdx->find( keyToTblIdx );
				if( searchIndexByToTblIdx != indexByToTblIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapToTblIdx = searchIndexByToTblIdx->second;
					if( mapToTblIdx != NULL ) {
						mapToTblIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aToTblIdxObj ) );
					}
				}
			}

			if( indexByToKeyIdx != NULL ) {
				static const std::string S_AToKeyIdxObj( "aToKeyIdxObj" );
				cfbam::ICFBamRelationObj* aToKeyIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aToKeyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToKeyIdxObj );
				}
				cfbam::CFBamRelationByToKeyIdxKey keyToKeyIdx;
				keyToKeyIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyToKeyIdx.setRequiredToIndexId( keepObj->getRequiredToIndexId() );
				auto searchIndexByToKeyIdx = indexByToKeyIdx->find( keyToKeyIdx );
				if( searchIndexByToKeyIdx != indexByToKeyIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapToKeyIdx = searchIndexByToKeyIdx->second;
					if( mapToKeyIdx != NULL ) {
						mapToKeyIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aToKeyIdxObj ) );
					}
				}
			}

			if( indexByNarrowedIdx != NULL ) {
				static const std::string S_ANarrowedIdxObj( "aNarrowedIdxObj" );
				cfbam::ICFBamRelationObj* aNarrowedIdxObj =
					dynamic_cast<cfbam::ICFBamRelationObj*>( keepObj );
				if( aNarrowedIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANarrowedIdxObj );
				}
				cfbam::CFBamRelationByNarrowedIdxKey keyNarrowedIdx;
				if( keepObj->isOptionalNarrowedTenantIdNull() ) {
					keyNarrowedIdx.setOptionalNarrowedTenantIdNull();
				}
				else {
					keyNarrowedIdx.setOptionalNarrowedTenantIdValue( keepObj->getOptionalNarrowedTenantIdValue() );
				}
				if( keepObj->isOptionalNarrowedIdNull() ) {
					keyNarrowedIdx.setOptionalNarrowedIdNull();
				}
				else {
					keyNarrowedIdx.setOptionalNarrowedIdValue( keepObj->getOptionalNarrowedIdValue() );
				}
				auto searchIndexByNarrowedIdx = indexByNarrowedIdx->find( keyNarrowedIdx );
				if( searchIndexByNarrowedIdx != indexByNarrowedIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapNarrowedIdx = searchIndexByNarrowedIdx->second;
					if( mapNarrowedIdx != NULL ) {
						mapNarrowedIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), aNarrowedIdxObj ) );
					}
				}
			}

			if( allRelation != NULL ) {
				allRelation->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFBamRelationTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		cfbam::ICFBamRelationObj* existingObj = readCachedRelationByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> matchesFound = readCachedRelationByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationTableObj::reallyDeepDisposeRelation( cfbam::ICFBamRelationObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeRelation" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamRelationObj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamPopTopDepTableObj*>( schema->getPopTopDepTableObj() )->deepDisposeByContRelIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByRelationIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDetachFromIndexesRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( obj ) );
		}

		dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDeepDisposeScope( dynamic_cast<cfbam::ICFBamScopeObj*>( obj ) );
	}

	void CFBamRelationTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		cfbam::ICFBamRelationObj* existingObj = readCachedRelationByUNameIdx( TenantId,
				TableId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationTableObj::deepDisposeByRelnTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByRelnTenantIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> matchesFound = readCachedRelationByRelnTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationTableObj::deepDisposeByRelTableIdx( const int64_t TenantId,
			const int64_t TableId ) {
		static const std::string S_ProcName( "deepDisposeByRelTableIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> matchesFound = readCachedRelationByRelTableIdx( TenantId,
				TableId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationTableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> matchesFound = readCachedRelationByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationTableObj::deepDisposeByFromKeyIdx( const int64_t TenantId,
			const int64_t FromIndexId ) {
		static const std::string S_ProcName( "deepDisposeByFromKeyIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> matchesFound = readCachedRelationByFromKeyIdx( TenantId,
				FromIndexId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationTableObj::deepDisposeByToTblIdx( const int64_t TenantId,
			const int64_t ToTableId ) {
		static const std::string S_ProcName( "deepDisposeByToTblIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> matchesFound = readCachedRelationByToTblIdx( TenantId,
				ToTableId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationTableObj::deepDisposeByToKeyIdx( const int64_t TenantId,
			const int64_t ToIndexId ) {
		static const std::string S_ProcName( "deepDisposeByToKeyIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> matchesFound = readCachedRelationByToKeyIdx( TenantId,
				ToIndexId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationTableObj::deepDisposeByNarrowedIdx( const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId ) {
		static const std::string S_ProcName( "deepDisposeByNarrowedIdx" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> matchesFound = readCachedRelationByNarrowedIdx( NarrowedTenantId,
				NarrowedId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::createRelation( cfbam::ICFBamRelationEditObj* Obj ) {
		static const std::string S_ProcName( "createRelation" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamRelationObj* obj = dynamic_cast<cfbam::ICFBamRelationObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamRelationBuff* buff = dynamic_cast<cfbam::CFBamRelationBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->createRelation(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamRelationBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
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

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::readRelation( cfbam::CFBamScopePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readRelation" );
		cfbam::ICFBamRelationObj* obj = NULL;
		cfbam::ICFBamRelationObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamRelationBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::ICFBamRelationObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
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

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::lockRelation( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_ProcName( "lockRelation" );
		cfbam::ICFBamRelationObj* locked = NULL;
		cfbam::CFBamRelationBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::ICFBamRelationObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamRelationObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readAllRelation( bool forceRead ) {
		static const std::string S_ProcName( "readAllRelation" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamRelationObj* realized = NULL;
		if( forceRead || ( allRelation == NULL ) ) {
			std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* map = new std::map<cfbam::CFBamScopePKey,cfbam::ICFBamRelationObj*>();
			allRelation = map;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamRelationBuff* buff = NULL;
			cfbam::ICFBamRelationObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allRelation->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allRelation->size();
		std::vector<cfbam::ICFBamRelationObj*> arr;
		auto valIter = allRelation->begin();
		size_t idx = 0;
		while( valIter != allRelation->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::readRelationByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamRelationObj* obj = readRelation( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readRelationByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
			cfbam::ICFBamScopeObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamScopeBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationObj* realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::readRelationByUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationByUNameIdxKey,
				cfbam::ICFBamRelationObj*>();
		}
		cfbam::CFBamRelationByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationObj* obj = NULL;
		cfbam::ICFBamRelationObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamRelationBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				TableId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamRelationByUNameIdxKey, cfbam::ICFBamRelationObj*>::value_type( key, dynamic_cast<cfbam::ICFBamRelationObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readRelationByRelnTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByRelnTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationByRelnTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* oldDict;
		if( indexByRelnTenantIdx == NULL ) {
			indexByRelnTenantIdx = new std::map< cfbam::CFBamRelationByRelnTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		}
		auto searchIndexByRelnTenantIdx = indexByRelnTenantIdx->find( key );
		if( searchIndexByRelnTenantIdx != indexByRelnTenantIdx->end() ) {
			oldDict = searchIndexByRelnTenantIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
			cfbam::ICFBamRelationObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByRelnTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamRelationBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationObj* realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRelnTenantIdx->erase( searchIndexByRelnTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRelnTenantIdx->insert( std::map< cfbam::CFBamRelationByRelnTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readRelationByRelTableIdx( const int64_t TenantId,
			const int64_t TableId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByRelTableIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationByRelTableIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* oldDict;
		if( indexByRelTableIdx == NULL ) {
			indexByRelTableIdx = new std::map< cfbam::CFBamRelationByRelTableIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		}
		auto searchIndexByRelTableIdx = indexByRelTableIdx->find( key );
		if( searchIndexByRelTableIdx != indexByRelTableIdx->end() ) {
			oldDict = searchIndexByRelTableIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
			cfbam::ICFBamRelationObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByRelTableIdx( schema->getAuthorization(),
				TenantId,
				TableId );
			cfbam::CFBamRelationBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationObj* realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRelTableIdx->erase( searchIndexByRelTableIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRelTableIdx->insert( std::map< cfbam::CFBamRelationByRelTableIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readRelationByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamRelationByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
			cfbam::ICFBamRelationObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamRelationBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationObj* realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamRelationByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readRelationByFromKeyIdx( const int64_t TenantId,
			const int64_t FromIndexId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByFromKeyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationByFromKeyIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredFromIndexId( FromIndexId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* oldDict;
		if( indexByFromKeyIdx == NULL ) {
			indexByFromKeyIdx = new std::map< cfbam::CFBamRelationByFromKeyIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		}
		auto searchIndexByFromKeyIdx = indexByFromKeyIdx->find( key );
		if( searchIndexByFromKeyIdx != indexByFromKeyIdx->end() ) {
			oldDict = searchIndexByFromKeyIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
			cfbam::ICFBamRelationObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByFromKeyIdx( schema->getAuthorization(),
				TenantId,
				FromIndexId );
			cfbam::CFBamRelationBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationObj* realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByFromKeyIdx->erase( searchIndexByFromKeyIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByFromKeyIdx->insert( std::map< cfbam::CFBamRelationByFromKeyIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readRelationByToTblIdx( const int64_t TenantId,
			const int64_t ToTableId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByToTblIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationByToTblIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredToTableId( ToTableId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* oldDict;
		if( indexByToTblIdx == NULL ) {
			indexByToTblIdx = new std::map< cfbam::CFBamRelationByToTblIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		}
		auto searchIndexByToTblIdx = indexByToTblIdx->find( key );
		if( searchIndexByToTblIdx != indexByToTblIdx->end() ) {
			oldDict = searchIndexByToTblIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
			cfbam::ICFBamRelationObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByToTblIdx( schema->getAuthorization(),
				TenantId,
				ToTableId );
			cfbam::CFBamRelationBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationObj* realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByToTblIdx->erase( searchIndexByToTblIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByToTblIdx->insert( std::map< cfbam::CFBamRelationByToTblIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readRelationByToKeyIdx( const int64_t TenantId,
			const int64_t ToIndexId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByToKeyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationByToKeyIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredToIndexId( ToIndexId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* oldDict;
		if( indexByToKeyIdx == NULL ) {
			indexByToKeyIdx = new std::map< cfbam::CFBamRelationByToKeyIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		}
		auto searchIndexByToKeyIdx = indexByToKeyIdx->find( key );
		if( searchIndexByToKeyIdx != indexByToKeyIdx->end() ) {
			oldDict = searchIndexByToKeyIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
			cfbam::ICFBamRelationObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByToKeyIdx( schema->getAuthorization(),
				TenantId,
				ToIndexId );
			cfbam::CFBamRelationBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationObj* realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByToKeyIdx->erase( searchIndexByToKeyIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByToKeyIdx->insert( std::map< cfbam::CFBamRelationByToKeyIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readRelationByNarrowedIdx( const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationByNarrowedIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationByNarrowedIdxKey key;
		if( NarrowedTenantId == NULL ) {
			key.setOptionalNarrowedTenantIdNull();
		}
		else {
			key.setOptionalNarrowedTenantIdValue( *NarrowedTenantId );
		}
		if( NarrowedId == NULL ) {
			key.setOptionalNarrowedIdNull();
		}
		else {
			key.setOptionalNarrowedIdValue( *NarrowedId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* oldDict;
		if( indexByNarrowedIdx == NULL ) {
			indexByNarrowedIdx = new std::map< cfbam::CFBamRelationByNarrowedIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>*>();
		}
		auto searchIndexByNarrowedIdx = indexByNarrowedIdx->find( key );
		if( searchIndexByNarrowedIdx != indexByNarrowedIdx->end() ) {
			oldDict = searchIndexByNarrowedIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>();
			cfbam::ICFBamRelationObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByNarrowedIdx( schema->getAuthorization(),
				NarrowedTenantId,
				NarrowedId );
			cfbam::CFBamRelationBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationObj* realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByNarrowedIdx->erase( searchIndexByNarrowedIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByNarrowedIdx->insert( std::map< cfbam::CFBamRelationByNarrowedIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::readRelationByLookupUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readRelationByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationByUNameIdxKey,
				cfbam::ICFBamRelationObj*>();
		}
		cfbam::CFBamRelationByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationObj* obj = NULL;
		cfbam::ICFBamRelationObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamRelationBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				TenantId,
				TableId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamRelationObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamRelationByUNameIdxKey, cfbam::ICFBamRelationObj*>::value_type( key, dynamic_cast<cfbam::ICFBamRelationObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::readCachedRelation( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readRelation" );
		cfbam::ICFBamRelationObj* obj = NULL;
		cfbam::ICFBamRelationObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::readCachedRelationByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedRelationByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamRelationObj* obj = readCachedRelation( &pkey );
		return( obj );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readCachedRelationByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedRelationByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationObj*> arr;
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationObj* obj;
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

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::readCachedRelationByUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedRelationByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationByUNameIdxKey,
				cfbam::ICFBamRelationObj*>();
		}
		cfbam::CFBamRelationByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readCachedRelationByRelnTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedRelationByRelnTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationObj*> arr;
		cfbam::CFBamRelationByRelnTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		if( indexByRelnTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRelnTenantIdx = indexByRelnTenantIdx->find( key );
		if( searchIndexByRelnTenantIdx != indexByRelnTenantIdx->end() ) {
			dict = searchIndexByRelnTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readCachedRelationByRelTableIdx( const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readCachedRelationByRelTableIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationObj*> arr;
		cfbam::CFBamRelationByRelTableIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		if( indexByRelTableIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRelTableIdx = indexByRelTableIdx->find( key );
		if( searchIndexByRelTableIdx != indexByRelTableIdx->end() ) {
			dict = searchIndexByRelTableIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readCachedRelationByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedRelationByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationObj*> arr;
		cfbam::CFBamRelationByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readCachedRelationByFromKeyIdx( const int64_t TenantId,
			const int64_t FromIndexId )
	{
		static const std::string S_ProcName( "readCachedRelationByFromKeyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationObj*> arr;
		cfbam::CFBamRelationByFromKeyIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredFromIndexId( FromIndexId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		if( indexByFromKeyIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByFromKeyIdx = indexByFromKeyIdx->find( key );
		if( searchIndexByFromKeyIdx != indexByFromKeyIdx->end() ) {
			dict = searchIndexByFromKeyIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readCachedRelationByToTblIdx( const int64_t TenantId,
			const int64_t ToTableId )
	{
		static const std::string S_ProcName( "readCachedRelationByToTblIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationObj*> arr;
		cfbam::CFBamRelationByToTblIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredToTableId( ToTableId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		if( indexByToTblIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByToTblIdx = indexByToTblIdx->find( key );
		if( searchIndexByToTblIdx != indexByToTblIdx->end() ) {
			dict = searchIndexByToTblIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readCachedRelationByToKeyIdx( const int64_t TenantId,
			const int64_t ToIndexId )
	{
		static const std::string S_ProcName( "readCachedRelationByToKeyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationObj*> arr;
		cfbam::CFBamRelationByToKeyIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredToIndexId( ToIndexId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		if( indexByToKeyIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByToKeyIdx = indexByToKeyIdx->find( key );
		if( searchIndexByToKeyIdx != indexByToKeyIdx->end() ) {
			dict = searchIndexByToKeyIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamRelationTableObj::readCachedRelationByNarrowedIdx( const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId )
	{
		static const std::string S_ProcName( "readCachedRelationByNarrowedIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationObj*> arr;
		cfbam::CFBamRelationByNarrowedIdxKey key;
		if( NarrowedTenantId == NULL ) {
			key.setOptionalNarrowedTenantIdNull();
		}
		else {
			key.setOptionalNarrowedTenantIdValue( *NarrowedTenantId );
		}
		if( NarrowedId == NULL ) {
			key.setOptionalNarrowedIdNull();
		}
		else {
			key.setOptionalNarrowedIdValue( *NarrowedId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* dict;
		if( indexByNarrowedIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByNarrowedIdx = indexByNarrowedIdx->find( key );
		if( searchIndexByNarrowedIdx != indexByNarrowedIdx->end() ) {
			dict = searchIndexByNarrowedIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::readCachedRelationByLookupUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedRelationByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationByUNameIdxKey,
				cfbam::ICFBamRelationObj*>();
		}
		cfbam::CFBamRelationByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationObj* obj = NULL;
		cfbam::ICFBamRelationObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamRelationObj* CFBamRelationTableObj::updateRelation( cfbam::ICFBamRelationEditObj* Obj ) {
		static const std::string S_ProcName( "updateRelation" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamRelationObj* obj = dynamic_cast<cfbam::ICFBamRelationObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamRelationBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->updateRelation( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamRelationBuff*>( Obj->getRelationBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamRelationObj*>( dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamRelationObj*>( obj->realize() );
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

	void CFBamRelationTableObj::deleteRelation( cfbam::ICFBamRelationEditObj* Obj ) {
		cfbam::ICFBamRelationObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelation( schema->getAuthorization(),
			obj->getRelationBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamRelationTableObj::deleteRelationByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamRelationObj* obj = readRelation( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamRelationEditObj* editObj = dynamic_cast<cfbam::ICFBamRelationEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamRelationEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamRelationTableObj::deleteRelationByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamRelationTableObj::deleteRelationByUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationByUNameIdxKey,
				cfbam::ICFBamRelationObj*>();
		}
		cfbam::CFBamRelationByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByUNameIdx( schema->getAuthorization(),
				TenantId,
				TableId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByUNameIdx( schema->getAuthorization(),
				TenantId,
				TableId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			TableId,
			Name );
	}

	void CFBamRelationTableObj::deleteRelationByRelnTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByRelnTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByRelnTenantIdx( TenantId );
	}

	void CFBamRelationTableObj::deleteRelationByRelTableIdx( const int64_t TenantId,
			const int64_t TableId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByRelTableIdx( schema->getAuthorization(),
				TenantId,
				TableId );
		deepDisposeByRelTableIdx( TenantId,
			TableId );
	}

	void CFBamRelationTableObj::deleteRelationByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamRelationTableObj::deleteRelationByFromKeyIdx( const int64_t TenantId,
			const int64_t FromIndexId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByFromKeyIdx( schema->getAuthorization(),
				TenantId,
				FromIndexId );
		deepDisposeByFromKeyIdx( TenantId,
			FromIndexId );
	}

	void CFBamRelationTableObj::deleteRelationByToTblIdx( const int64_t TenantId,
			const int64_t ToTableId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByToTblIdx( schema->getAuthorization(),
				TenantId,
				ToTableId );
		deepDisposeByToTblIdx( TenantId,
			ToTableId );
	}

	void CFBamRelationTableObj::deleteRelationByToKeyIdx( const int64_t TenantId,
			const int64_t ToIndexId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByToKeyIdx( schema->getAuthorization(),
				TenantId,
				ToIndexId );
		deepDisposeByToKeyIdx( TenantId,
			ToIndexId );
	}

	void CFBamRelationTableObj::deleteRelationByNarrowedIdx( const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->deleteRelationByNarrowedIdx( schema->getAuthorization(),
				NarrowedTenantId,
				NarrowedId );
		deepDisposeByNarrowedIdx( NarrowedTenantId,
			NarrowedId );
	}

	void CFBamRelationTableObj::reallyDetachFromIndexesRelation( cfbam::ICFBamRelationObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesRelation" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamRelationObj* obj = Obj;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamRelationObj* existingObj = searchMembers->second;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamRelationByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTableId( obj->getRequiredTableId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByRelnTenantIdx != NULL ) {
				cfbam::CFBamRelationByRelnTenantIdxKey keyRelnTenantIdx;
				keyRelnTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchRelnTenantIdx = indexByRelnTenantIdx->find( keyRelnTenantIdx );
				if( searchRelnTenantIdx != indexByRelnTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapRelnTenantIdx = searchRelnTenantIdx->second;
					if( mapRelnTenantIdx != NULL ) {
						auto removalProbe = mapRelnTenantIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapRelnTenantIdx->end() ) {
							mapRelnTenantIdx->erase( removalProbe );
							if( mapRelnTenantIdx->empty() ) {
								delete mapRelnTenantIdx;
								mapRelnTenantIdx = NULL;
								indexByRelnTenantIdx->erase( searchRelnTenantIdx );
							}
						}
					}
				}
			}

			if( indexByRelTableIdx != NULL ) {
				cfbam::CFBamRelationByRelTableIdxKey keyRelTableIdx;
				keyRelTableIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyRelTableIdx.setRequiredTableId( obj->getRequiredTableId() );
				auto searchRelTableIdx = indexByRelTableIdx->find( keyRelTableIdx );
				if( searchRelTableIdx != indexByRelTableIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapRelTableIdx = searchRelTableIdx->second;
					if( mapRelTableIdx != NULL ) {
						auto removalProbe = mapRelTableIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapRelTableIdx->end() ) {
							mapRelTableIdx->erase( removalProbe );
							if( mapRelTableIdx->empty() ) {
								delete mapRelTableIdx;
								mapRelTableIdx = NULL;
								indexByRelTableIdx->erase( searchRelTableIdx );
							}
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamRelationByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
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

			if( indexByFromKeyIdx != NULL ) {
				cfbam::CFBamRelationByFromKeyIdxKey keyFromKeyIdx;
				keyFromKeyIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyFromKeyIdx.setRequiredFromIndexId( obj->getRequiredFromIndexId() );
				auto searchFromKeyIdx = indexByFromKeyIdx->find( keyFromKeyIdx );
				if( searchFromKeyIdx != indexByFromKeyIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapFromKeyIdx = searchFromKeyIdx->second;
					if( mapFromKeyIdx != NULL ) {
						auto removalProbe = mapFromKeyIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapFromKeyIdx->end() ) {
							mapFromKeyIdx->erase( removalProbe );
							if( mapFromKeyIdx->empty() ) {
								delete mapFromKeyIdx;
								mapFromKeyIdx = NULL;
								indexByFromKeyIdx->erase( searchFromKeyIdx );
							}
						}
					}
				}
			}

			if( indexByToTblIdx != NULL ) {
				cfbam::CFBamRelationByToTblIdxKey keyToTblIdx;
				keyToTblIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyToTblIdx.setRequiredToTableId( obj->getRequiredToTableId() );
				auto searchToTblIdx = indexByToTblIdx->find( keyToTblIdx );
				if( searchToTblIdx != indexByToTblIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapToTblIdx = searchToTblIdx->second;
					if( mapToTblIdx != NULL ) {
						auto removalProbe = mapToTblIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapToTblIdx->end() ) {
							mapToTblIdx->erase( removalProbe );
							if( mapToTblIdx->empty() ) {
								delete mapToTblIdx;
								mapToTblIdx = NULL;
								indexByToTblIdx->erase( searchToTblIdx );
							}
						}
					}
				}
			}

			if( indexByToKeyIdx != NULL ) {
				cfbam::CFBamRelationByToKeyIdxKey keyToKeyIdx;
				keyToKeyIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyToKeyIdx.setRequiredToIndexId( obj->getRequiredToIndexId() );
				auto searchToKeyIdx = indexByToKeyIdx->find( keyToKeyIdx );
				if( searchToKeyIdx != indexByToKeyIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapToKeyIdx = searchToKeyIdx->second;
					if( mapToKeyIdx != NULL ) {
						auto removalProbe = mapToKeyIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapToKeyIdx->end() ) {
							mapToKeyIdx->erase( removalProbe );
							if( mapToKeyIdx->empty() ) {
								delete mapToKeyIdx;
								mapToKeyIdx = NULL;
								indexByToKeyIdx->erase( searchToKeyIdx );
							}
						}
					}
				}
			}

			if( indexByNarrowedIdx != NULL ) {
				cfbam::CFBamRelationByNarrowedIdxKey keyNarrowedIdx;
				if( obj->isOptionalNarrowedTenantIdNull() ) {
					keyNarrowedIdx.setOptionalNarrowedTenantIdNull();
				}
				else {
					keyNarrowedIdx.setOptionalNarrowedTenantIdValue( obj->getOptionalNarrowedTenantIdValue() );
				}
				if( obj->isOptionalNarrowedIdNull() ) {
					keyNarrowedIdx.setOptionalNarrowedIdNull();
				}
				else {
					keyNarrowedIdx.setOptionalNarrowedIdValue( obj->getOptionalNarrowedIdValue() );
				}
				auto searchNarrowedIdx = indexByNarrowedIdx->find( keyNarrowedIdx );
				if( searchNarrowedIdx != indexByNarrowedIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamRelationObj*>* mapNarrowedIdx = searchNarrowedIdx->second;
					if( mapNarrowedIdx != NULL ) {
						auto removalProbe = mapNarrowedIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapNarrowedIdx->end() ) {
							mapNarrowedIdx->erase( removalProbe );
							if( mapNarrowedIdx->empty() ) {
								delete mapNarrowedIdx;
								mapNarrowedIdx = NULL;
								indexByNarrowedIdx->erase( searchNarrowedIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
			dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDetachFromIndexesScope( Obj );
	}


}
