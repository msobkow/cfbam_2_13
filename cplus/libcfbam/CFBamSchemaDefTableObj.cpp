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

	const std::string CFBamSchemaDefTableObj::CLASS_NAME( "CFBamSchemaDefTableObj" );
	const std::string CFBamSchemaDefTableObj::TABLE_NAME( "SchemaDef" );
	const std::string CFBamSchemaDefTableObj::TABLE_DBNAME( "schemadef" );

	CFBamSchemaDefTableObj::CFBamSchemaDefTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>();
		allSchemaDef = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByCTenantIdx = new std::map< cfbam::CFBamSchemaDefByCTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByMinorVersionIdx = new std::map< cfbam::CFBamSchemaDefByMinorVersionIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamSchemaDefByUNameIdxKey,
			cfbam::ICFBamSchemaDefObj*>();
		indexByAuthEMailIdx = new std::map< cfbam::CFBamSchemaDefByAuthEMailIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByProjectURLIdx = new std::map< cfbam::CFBamSchemaDefByProjectURLIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByPubURIIdx = new std::map< cfbam::CFBamSchemaDefByPubURIIdxKey,
			cfbam::ICFBamSchemaDefObj*>();
	}

	CFBamSchemaDefTableObj::CFBamSchemaDefTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>();
		allSchemaDef = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByCTenantIdx = new std::map< cfbam::CFBamSchemaDefByCTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByMinorVersionIdx = new std::map< cfbam::CFBamSchemaDefByMinorVersionIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamSchemaDefByUNameIdxKey,
			cfbam::ICFBamSchemaDefObj*>();
		indexByAuthEMailIdx = new std::map< cfbam::CFBamSchemaDefByAuthEMailIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByProjectURLIdx = new std::map< cfbam::CFBamSchemaDefByProjectURLIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		indexByPubURIIdx = new std::map< cfbam::CFBamSchemaDefByPubURIIdxKey,
			cfbam::ICFBamSchemaDefObj*>();
	}

	CFBamSchemaDefTableObj::~CFBamSchemaDefTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByCTenantIdx != NULL ) {
			delete indexByCTenantIdx;
			indexByCTenantIdx = NULL;
		}
		if( indexByMinorVersionIdx != NULL ) {
			delete indexByMinorVersionIdx;
			indexByMinorVersionIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexByAuthEMailIdx != NULL ) {
			delete indexByAuthEMailIdx;
			indexByAuthEMailIdx = NULL;
		}
		if( indexByProjectURLIdx != NULL ) {
			delete indexByProjectURLIdx;
			indexByProjectURLIdx = NULL;
		}
		if( indexByPubURIIdx != NULL ) {
			delete indexByPubURIIdx;
			indexByPubURIIdx = NULL;
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

	cfbam::ICFBamSchemaObj* CFBamSchemaDefTableObj::getSchema() {
		return( schema );
	}

	void CFBamSchemaDefTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamSchemaDefTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamSchemaDefTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamSchemaDefTableObj::getObjQualifyingClassCode() {
		return( &cfint::CFIntSubProjectBuff::CLASS_CODE );
	}


	void CFBamSchemaDefTableObj::minimizeMemory() {
		if( allSchemaDef != NULL ) {
			allSchemaDef->clear();
			delete allSchemaDef;
			allSchemaDef = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* curByTenantIdx = NULL;
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
		if( indexByCTenantIdx != NULL ) {
			std::map< cfbam::CFBamSchemaDefByCTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator iterByCTenantIdx = indexByCTenantIdx->begin();
			std::map< cfbam::CFBamSchemaDefByCTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator endByCTenantIdx = indexByCTenantIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* curByCTenantIdx = NULL;
			while( iterByCTenantIdx != endByCTenantIdx ) {
				curByCTenantIdx = iterByCTenantIdx->second;
				if( curByCTenantIdx != NULL ) {
					curByCTenantIdx->clear();
					delete curByCTenantIdx;
					curByCTenantIdx = NULL;
					iterByCTenantIdx->second = NULL;
				}
				iterByCTenantIdx ++;
			}
			indexByCTenantIdx->clear();
		}
		if( indexByMinorVersionIdx != NULL ) {
			std::map< cfbam::CFBamSchemaDefByMinorVersionIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator iterByMinorVersionIdx = indexByMinorVersionIdx->begin();
			std::map< cfbam::CFBamSchemaDefByMinorVersionIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator endByMinorVersionIdx = indexByMinorVersionIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* curByMinorVersionIdx = NULL;
			while( iterByMinorVersionIdx != endByMinorVersionIdx ) {
				curByMinorVersionIdx = iterByMinorVersionIdx->second;
				if( curByMinorVersionIdx != NULL ) {
					curByMinorVersionIdx->clear();
					delete curByMinorVersionIdx;
					curByMinorVersionIdx = NULL;
					iterByMinorVersionIdx->second = NULL;
				}
				iterByMinorVersionIdx ++;
			}
			indexByMinorVersionIdx->clear();
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( indexByAuthEMailIdx != NULL ) {
			std::map< cfbam::CFBamSchemaDefByAuthEMailIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator iterByAuthEMailIdx = indexByAuthEMailIdx->begin();
			std::map< cfbam::CFBamSchemaDefByAuthEMailIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator endByAuthEMailIdx = indexByAuthEMailIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* curByAuthEMailIdx = NULL;
			while( iterByAuthEMailIdx != endByAuthEMailIdx ) {
				curByAuthEMailIdx = iterByAuthEMailIdx->second;
				if( curByAuthEMailIdx != NULL ) {
					curByAuthEMailIdx->clear();
					delete curByAuthEMailIdx;
					curByAuthEMailIdx = NULL;
					iterByAuthEMailIdx->second = NULL;
				}
				iterByAuthEMailIdx ++;
			}
			indexByAuthEMailIdx->clear();
		}
		if( indexByProjectURLIdx != NULL ) {
			std::map< cfbam::CFBamSchemaDefByProjectURLIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator iterByProjectURLIdx = indexByProjectURLIdx->begin();
			std::map< cfbam::CFBamSchemaDefByProjectURLIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* >::iterator endByProjectURLIdx = indexByProjectURLIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* curByProjectURLIdx = NULL;
			while( iterByProjectURLIdx != endByProjectURLIdx ) {
				curByProjectURLIdx = iterByProjectURLIdx->second;
				if( curByProjectURLIdx != NULL ) {
					curByProjectURLIdx->clear();
					delete curByProjectURLIdx;
					curByProjectURLIdx = NULL;
					iterByProjectURLIdx->second = NULL;
				}
				iterByProjectURLIdx ++;
			}
			indexByProjectURLIdx->clear();
		}
		if( indexByPubURIIdx != NULL ) {
			indexByPubURIIdx->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::newInstance() {
		cfbam::ICFBamSchemaDefObj* inst = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( new CFBamSchemaDefObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamSchemaDefEditObj* CFBamSchemaDefTableObj::newEditInstance( cfbam::ICFBamSchemaDefObj* orig ) {
		cfbam::ICFBamSchemaDefEditObj* edit = dynamic_cast<cfbam::ICFBamSchemaDefEditObj*>( new CFBamSchemaDefEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::realizeSchemaDef( cfbam::ICFBamSchemaDefObj* Obj ) {
		static const std::string S_ProcName( "realizeSchemaDef" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamSchemaDefObj* obj = Obj;
		cfbam::ICFBamSchemaDefObj* existingObj = NULL;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		cfbam::ICFBamSchemaDefObj* keepObj = NULL;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByCTenantIdx != NULL ) {
				cfbam::CFBamSchemaDefByCTenantIdxKey keyCTenantIdx;
				keyCTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchCTenantIdx = indexByCTenantIdx->find( keyCTenantIdx );
				if( searchCTenantIdx != indexByCTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapCTenantIdx = searchCTenantIdx->second;
					if( mapCTenantIdx != NULL ) {
						auto removalProbe = mapCTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapCTenantIdx->end() ) {
							mapCTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByMinorVersionIdx != NULL ) {
				cfbam::CFBamSchemaDefByMinorVersionIdxKey keyMinorVersionIdx;
				keyMinorVersionIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyMinorVersionIdx.setRequiredMinorVersionId( keepObj->getRequiredMinorVersionId() );
				auto searchMinorVersionIdx = indexByMinorVersionIdx->find( keyMinorVersionIdx );
				if( searchMinorVersionIdx != indexByMinorVersionIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapMinorVersionIdx = searchMinorVersionIdx->second;
					if( mapMinorVersionIdx != NULL ) {
						auto removalProbe = mapMinorVersionIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapMinorVersionIdx->end() ) {
							mapMinorVersionIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamSchemaDefByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredMinorVersionId( keepObj->getRequiredMinorVersionId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByAuthEMailIdx != NULL ) {
				cfbam::CFBamSchemaDefByAuthEMailIdxKey keyAuthEMailIdx;
				keyAuthEMailIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyAuthEMailIdx.setRequiredAuthorEMail( keepObj->getRequiredAuthorEMail() );
				auto searchAuthEMailIdx = indexByAuthEMailIdx->find( keyAuthEMailIdx );
				if( searchAuthEMailIdx != indexByAuthEMailIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapAuthEMailIdx = searchAuthEMailIdx->second;
					if( mapAuthEMailIdx != NULL ) {
						auto removalProbe = mapAuthEMailIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapAuthEMailIdx->end() ) {
							mapAuthEMailIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByProjectURLIdx != NULL ) {
				cfbam::CFBamSchemaDefByProjectURLIdxKey keyProjectURLIdx;
				keyProjectURLIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyProjectURLIdx.setRequiredProjectURL( keepObj->getRequiredProjectURL() );
				auto searchProjectURLIdx = indexByProjectURLIdx->find( keyProjectURLIdx );
				if( searchProjectURLIdx != indexByProjectURLIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapProjectURLIdx = searchProjectURLIdx->second;
					if( mapProjectURLIdx != NULL ) {
						auto removalProbe = mapProjectURLIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapProjectURLIdx->end() ) {
							mapProjectURLIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByPubURIIdx != NULL ) {
				cfbam::CFBamSchemaDefByPubURIIdxKey keyPubURIIdx;
				keyPubURIIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyPubURIIdx.setRequiredPublishURI( keepObj->getRequiredPublishURI() );
				auto removalProbe = indexByPubURIIdx->find( keyPubURIIdx );
				if( removalProbe != indexByPubURIIdx->end() ) {
					indexByPubURIIdx->erase( removalProbe );
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->realizeScope( Obj ) );
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
				cfbam::ICFBamSchemaDefObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByCTenantIdx != NULL ) {
				static const std::string S_ACTenantIdxObj( "aCTenantIdxObj" );
				cfbam::ICFBamSchemaDefObj* aCTenantIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aCTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACTenantIdxObj );
				}
				cfbam::CFBamSchemaDefByCTenantIdxKey keyCTenantIdx;
				keyCTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByCTenantIdx = indexByCTenantIdx->find( keyCTenantIdx );
				if( searchIndexByCTenantIdx != indexByCTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapCTenantIdx = searchIndexByCTenantIdx->second;
					if( mapCTenantIdx != NULL ) {
						mapCTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aCTenantIdxObj ) );
					}
				}
			}

			if( indexByMinorVersionIdx != NULL ) {
				static const std::string S_AMinorVersionIdxObj( "aMinorVersionIdxObj" );
				cfbam::ICFBamSchemaDefObj* aMinorVersionIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aMinorVersionIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AMinorVersionIdxObj );
				}
				cfbam::CFBamSchemaDefByMinorVersionIdxKey keyMinorVersionIdx;
				keyMinorVersionIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyMinorVersionIdx.setRequiredMinorVersionId( keepObj->getRequiredMinorVersionId() );
				auto searchIndexByMinorVersionIdx = indexByMinorVersionIdx->find( keyMinorVersionIdx );
				if( searchIndexByMinorVersionIdx != indexByMinorVersionIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapMinorVersionIdx = searchIndexByMinorVersionIdx->second;
					if( mapMinorVersionIdx != NULL ) {
						mapMinorVersionIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aMinorVersionIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamSchemaDefObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamSchemaDefByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredMinorVersionId( keepObj->getRequiredMinorVersionId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamSchemaDefByUNameIdxKey, cfbam::ICFBamSchemaDefObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByAuthEMailIdx != NULL ) {
				static const std::string S_AAuthEMailIdxObj( "aAuthEMailIdxObj" );
				cfbam::ICFBamSchemaDefObj* aAuthEMailIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aAuthEMailIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAuthEMailIdxObj );
				}
				cfbam::CFBamSchemaDefByAuthEMailIdxKey keyAuthEMailIdx;
				keyAuthEMailIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyAuthEMailIdx.setRequiredAuthorEMail( keepObj->getRequiredAuthorEMail() );
				auto searchIndexByAuthEMailIdx = indexByAuthEMailIdx->find( keyAuthEMailIdx );
				if( searchIndexByAuthEMailIdx != indexByAuthEMailIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapAuthEMailIdx = searchIndexByAuthEMailIdx->second;
					if( mapAuthEMailIdx != NULL ) {
						mapAuthEMailIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aAuthEMailIdxObj ) );
					}
				}
			}

			if( indexByProjectURLIdx != NULL ) {
				static const std::string S_AProjectURLIdxObj( "aProjectURLIdxObj" );
				cfbam::ICFBamSchemaDefObj* aProjectURLIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aProjectURLIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AProjectURLIdxObj );
				}
				cfbam::CFBamSchemaDefByProjectURLIdxKey keyProjectURLIdx;
				keyProjectURLIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyProjectURLIdx.setRequiredProjectURL( keepObj->getRequiredProjectURL() );
				auto searchIndexByProjectURLIdx = indexByProjectURLIdx->find( keyProjectURLIdx );
				if( searchIndexByProjectURLIdx != indexByProjectURLIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapProjectURLIdx = searchIndexByProjectURLIdx->second;
					if( mapProjectURLIdx != NULL ) {
						mapProjectURLIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aProjectURLIdxObj ) );
					}
				}
			}

			if( indexByPubURIIdx != NULL ) {
				static const std::string S_APubURIIdxObj( "aPubURIIdxObj" );
				cfbam::ICFBamSchemaDefObj* aPubURIIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aPubURIIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APubURIIdxObj );
				}
				cfbam::CFBamSchemaDefByPubURIIdxKey keyPubURIIdx;
				keyPubURIIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyPubURIIdx.setRequiredPublishURI( keepObj->getRequiredPublishURI() );
				indexByPubURIIdx->insert( std::map< cfbam::CFBamSchemaDefByPubURIIdxKey, cfbam::ICFBamSchemaDefObj* >::value_type( keyPubURIIdx, aPubURIIdxObj ) );
			}

			if( allSchemaDef != NULL ) {
				allSchemaDef->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->realizeScope( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamSchemaDefObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByCTenantIdx != NULL ) {
				static const std::string S_ACTenantIdxObj( "aCTenantIdxObj" );
				cfbam::ICFBamSchemaDefObj* aCTenantIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aCTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACTenantIdxObj );
				}
				cfbam::CFBamSchemaDefByCTenantIdxKey keyCTenantIdx;
				keyCTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByCTenantIdx = indexByCTenantIdx->find( keyCTenantIdx );
				if( searchIndexByCTenantIdx != indexByCTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapCTenantIdx = searchIndexByCTenantIdx->second;
					if( mapCTenantIdx != NULL ) {
						mapCTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aCTenantIdxObj ) );
					}
				}
			}

			if( indexByMinorVersionIdx != NULL ) {
				static const std::string S_AMinorVersionIdxObj( "aMinorVersionIdxObj" );
				cfbam::ICFBamSchemaDefObj* aMinorVersionIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aMinorVersionIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AMinorVersionIdxObj );
				}
				cfbam::CFBamSchemaDefByMinorVersionIdxKey keyMinorVersionIdx;
				keyMinorVersionIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyMinorVersionIdx.setRequiredMinorVersionId( keepObj->getRequiredMinorVersionId() );
				auto searchIndexByMinorVersionIdx = indexByMinorVersionIdx->find( keyMinorVersionIdx );
				if( searchIndexByMinorVersionIdx != indexByMinorVersionIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapMinorVersionIdx = searchIndexByMinorVersionIdx->second;
					if( mapMinorVersionIdx != NULL ) {
						mapMinorVersionIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aMinorVersionIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamSchemaDefObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamSchemaDefByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredMinorVersionId( keepObj->getRequiredMinorVersionId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamSchemaDefByUNameIdxKey, cfbam::ICFBamSchemaDefObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByAuthEMailIdx != NULL ) {
				static const std::string S_AAuthEMailIdxObj( "aAuthEMailIdxObj" );
				cfbam::ICFBamSchemaDefObj* aAuthEMailIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aAuthEMailIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAuthEMailIdxObj );
				}
				cfbam::CFBamSchemaDefByAuthEMailIdxKey keyAuthEMailIdx;
				keyAuthEMailIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyAuthEMailIdx.setRequiredAuthorEMail( keepObj->getRequiredAuthorEMail() );
				auto searchIndexByAuthEMailIdx = indexByAuthEMailIdx->find( keyAuthEMailIdx );
				if( searchIndexByAuthEMailIdx != indexByAuthEMailIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapAuthEMailIdx = searchIndexByAuthEMailIdx->second;
					if( mapAuthEMailIdx != NULL ) {
						mapAuthEMailIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aAuthEMailIdxObj ) );
					}
				}
			}

			if( indexByProjectURLIdx != NULL ) {
				static const std::string S_AProjectURLIdxObj( "aProjectURLIdxObj" );
				cfbam::ICFBamSchemaDefObj* aProjectURLIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aProjectURLIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AProjectURLIdxObj );
				}
				cfbam::CFBamSchemaDefByProjectURLIdxKey keyProjectURLIdx;
				keyProjectURLIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyProjectURLIdx.setRequiredProjectURL( keepObj->getRequiredProjectURL() );
				auto searchIndexByProjectURLIdx = indexByProjectURLIdx->find( keyProjectURLIdx );
				if( searchIndexByProjectURLIdx != indexByProjectURLIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapProjectURLIdx = searchIndexByProjectURLIdx->second;
					if( mapProjectURLIdx != NULL ) {
						mapProjectURLIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), aProjectURLIdxObj ) );
					}
				}
			}

			if( indexByPubURIIdx != NULL ) {
				static const std::string S_APubURIIdxObj( "aPubURIIdxObj" );
				cfbam::ICFBamSchemaDefObj* aPubURIIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaDefObj*>( keepObj );
				if( aPubURIIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APubURIIdxObj );
				}
				cfbam::CFBamSchemaDefByPubURIIdxKey keyPubURIIdx;
				keyPubURIIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyPubURIIdx.setRequiredPublishURI( keepObj->getRequiredPublishURI() );
				indexByPubURIIdx->insert( std::map< cfbam::CFBamSchemaDefByPubURIIdxKey, cfbam::ICFBamSchemaDefObj* >::value_type( keyPubURIIdx, aPubURIIdxObj ) );
			}

			if( allSchemaDef != NULL ) {
				allSchemaDef->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFBamSchemaDefTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamSchemaDefObj*> list;
		cfbam::ICFBamSchemaDefObj* existingObj = readCachedSchemaDefByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamSchemaDefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaDefTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfbam::ICFBamSchemaDefObj*> list;
		std::vector<cfbam::ICFBamSchemaDefObj*> matchesFound = readCachedSchemaDefByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaDefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaDefTableObj::reallyDeepDisposeSchemaDef( cfbam::ICFBamSchemaDefObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSchemaDef" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamSchemaDefObj* obj = Obj;
		
		cfbam::ICFBamTableObj* objDelTableMethods;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableMethods = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableMethods = arrDelTableMethods.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableMethods = arrDelTableMethods.end();
		while( iterArrDelTableMethods != endArrDelTableMethods ) {
			objDelTableMethods = *iterArrDelTableMethods;
			iterArrDelTableMethods ++;
			dynamic_cast<cfbam::CFBamServerMethodTableObj*>( schema->getServerMethodTableObj() )->deepDisposeByMethTableIdx( objDelTableMethods->getRequiredTenantId(),
				objDelTableMethods->getRequiredId() );
		}
		cfbam::ICFBamTableObj* objDelTableDelDep;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableDelDep = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableDelDep = arrDelTableDelDep.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableDelDep = arrDelTableDelDep.end();
		while( iterArrDelTableDelDep != endArrDelTableDelDep ) {
			objDelTableDelDep = *iterArrDelTableDelDep;
			iterArrDelTableDelDep ++;
			dynamic_cast<cfbam::CFBamDelTopDepTableObj*>( schema->getDelTopDepTableObj() )->deepDisposeByDelTopDepTblIdx( objDelTableDelDep->getRequiredTenantId(),
				objDelTableDelDep->getRequiredId() );
		}
		cfbam::ICFBamTableObj* objDelTableClearDep;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableClearDep = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableClearDep = arrDelTableClearDep.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableClearDep = arrDelTableClearDep.end();
		while( iterArrDelTableClearDep != endArrDelTableClearDep ) {
			objDelTableClearDep = *iterArrDelTableClearDep;
			iterArrDelTableClearDep ++;
			dynamic_cast<cfbam::CFBamClearTopDepTableObj*>( schema->getClearTopDepTableObj() )->deepDisposeByClrTopDepTblIdx( objDelTableClearDep->getRequiredTenantId(),
				objDelTableClearDep->getRequiredId() );
		}
		cfbam::ICFBamTableObj* objDelTableChain;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableChain = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableChain = arrDelTableChain.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableChain = arrDelTableChain.end();
		while( iterArrDelTableChain != endArrDelTableChain ) {
			objDelTableChain = *iterArrDelTableChain;
			iterArrDelTableChain ++;
			dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->deepDisposeByChainTableIdx( objDelTableChain->getRequiredTenantId(),
				objDelTableChain->getRequiredId() );
		}
		cfbam::ICFBamTableObj* objDelTableRelationPopDep;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableRelationPopDep = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableRelationPopDep = arrDelTableRelationPopDep.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableRelationPopDep = arrDelTableRelationPopDep.end();
		while( iterArrDelTableRelationPopDep != endArrDelTableRelationPopDep ) {
			objDelTableRelationPopDep = *iterArrDelTableRelationPopDep;
			iterArrDelTableRelationPopDep ++;
			cfbam::ICFBamRelationObj* objTableRelation;
			std::vector<cfbam::ICFBamRelationObj*> arrTableRelation = dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->readCachedRelationByRelTableIdx( objDelTableRelationPopDep->getRequiredTenantId(),
				objDelTableRelationPopDep->getRequiredId() );
			std::vector<cfbam::ICFBamRelationObj*>::iterator iterArrTableRelation = arrTableRelation.begin();
			std::vector<cfbam::ICFBamRelationObj*>::iterator endArrTableRelation = arrTableRelation.end();
			while( iterArrTableRelation != endArrTableRelation ) {
				objTableRelation = *iterArrTableRelation;
				iterArrTableRelation ++;
			dynamic_cast<cfbam::CFBamPopTopDepTableObj*>( schema->getPopTopDepTableObj() )->deepDisposeByContRelIdx( objTableRelation->getRequiredTenantId(),
				objTableRelation->getRequiredId() );
			}
		}
		cfbam::ICFBamTableObj* objDelTableRelationCol;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableRelationCol = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableRelationCol = arrDelTableRelationCol.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableRelationCol = arrDelTableRelationCol.end();
		while( iterArrDelTableRelationCol != endArrDelTableRelationCol ) {
			objDelTableRelationCol = *iterArrDelTableRelationCol;
			iterArrDelTableRelationCol ++;
			cfbam::ICFBamRelationObj* objTableRelation;
			std::vector<cfbam::ICFBamRelationObj*> arrTableRelation = dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->readCachedRelationByRelTableIdx( objDelTableRelationCol->getRequiredTenantId(),
				objDelTableRelationCol->getRequiredId() );
			std::vector<cfbam::ICFBamRelationObj*>::iterator iterArrTableRelation = arrTableRelation.begin();
			std::vector<cfbam::ICFBamRelationObj*>::iterator endArrTableRelation = arrTableRelation.end();
			while( iterArrTableRelation != endArrTableRelation ) {
				objTableRelation = *iterArrTableRelation;
				iterArrTableRelation ++;
			dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByRelationIdx( objTableRelation->getRequiredTenantId(),
				objTableRelation->getRequiredId() );
			}
		}
		cfbam::ICFBamTableObj* objDelTableRelation;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableRelation = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableRelation = arrDelTableRelation.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableRelation = arrDelTableRelation.end();
		while( iterArrDelTableRelation != endArrDelTableRelation ) {
			objDelTableRelation = *iterArrDelTableRelation;
			iterArrDelTableRelation ++;
			dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->deepDisposeByRelTableIdx( objDelTableRelation->getRequiredTenantId(),
				objDelTableRelation->getRequiredId() );
		}
		cfbam::ICFBamTableObj* objDelTableIndexRefRelFmCol;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableIndexRefRelFmCol = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableIndexRefRelFmCol = arrDelTableIndexRefRelFmCol.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableIndexRefRelFmCol = arrDelTableIndexRefRelFmCol.end();
		while( iterArrDelTableIndexRefRelFmCol != endArrDelTableIndexRefRelFmCol ) {
			objDelTableIndexRefRelFmCol = *iterArrDelTableIndexRefRelFmCol;
			iterArrDelTableIndexRefRelFmCol ++;
			cfbam::ICFBamIndexObj* objTableIndex;
			std::vector<cfbam::ICFBamIndexObj*> arrTableIndex = dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->readCachedIndexByIdxTableIdx( objDelTableIndexRefRelFmCol->getRequiredTenantId(),
				objDelTableIndexRefRelFmCol->getRequiredId() );
			std::vector<cfbam::ICFBamIndexObj*>::iterator iterArrTableIndex = arrTableIndex.begin();
			std::vector<cfbam::ICFBamIndexObj*>::iterator endArrTableIndex = arrTableIndex.end();
			while( iterArrTableIndex != endArrTableIndex ) {
				objTableIndex = *iterArrTableIndex;
				iterArrTableIndex ++;
			cfbam::ICFBamIndexColObj* objColumns;
			std::vector<cfbam::ICFBamIndexColObj*> arrColumns = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->readCachedIndexColByIndexIdx( objTableIndex->getRequiredTenantId(),
				objTableIndex->getRequiredId() );
			std::vector<cfbam::ICFBamIndexColObj*>::iterator iterColumns = arrColumns.begin();
			std::vector<cfbam::ICFBamIndexColObj*>::iterator endColumns = arrColumns.end();
			while( iterColumns != endColumns ) {
				objColumns = *iterColumns;
				iterColumns ++;
			dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByFromColIdx( objColumns->getRequiredTenantId(),
				objColumns->getRequiredId() );
			}
			}
		}
		cfbam::ICFBamTableObj* objDelTableIndexRefRelToCol;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableIndexRefRelToCol = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableIndexRefRelToCol = arrDelTableIndexRefRelToCol.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableIndexRefRelToCol = arrDelTableIndexRefRelToCol.end();
		while( iterArrDelTableIndexRefRelToCol != endArrDelTableIndexRefRelToCol ) {
			objDelTableIndexRefRelToCol = *iterArrDelTableIndexRefRelToCol;
			iterArrDelTableIndexRefRelToCol ++;
			cfbam::ICFBamIndexObj* objTableIndex;
			std::vector<cfbam::ICFBamIndexObj*> arrTableIndex = dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->readCachedIndexByIdxTableIdx( objDelTableIndexRefRelToCol->getRequiredTenantId(),
				objDelTableIndexRefRelToCol->getRequiredId() );
			std::vector<cfbam::ICFBamIndexObj*>::iterator iterArrTableIndex = arrTableIndex.begin();
			std::vector<cfbam::ICFBamIndexObj*>::iterator endArrTableIndex = arrTableIndex.end();
			while( iterArrTableIndex != endArrTableIndex ) {
				objTableIndex = *iterArrTableIndex;
				iterArrTableIndex ++;
			cfbam::ICFBamIndexColObj* objColumns;
			std::vector<cfbam::ICFBamIndexColObj*> arrColumns = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->readCachedIndexColByIndexIdx( objTableIndex->getRequiredTenantId(),
				objTableIndex->getRequiredId() );
			std::vector<cfbam::ICFBamIndexColObj*>::iterator iterColumns = arrColumns.begin();
			std::vector<cfbam::ICFBamIndexColObj*>::iterator endColumns = arrColumns.end();
			while( iterColumns != endColumns ) {
				objColumns = *iterColumns;
				iterColumns ++;
			dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByToColIdx( objColumns->getRequiredTenantId(),
				objColumns->getRequiredId() );
			}
			}
		}
		cfbam::ICFBamTableObj* objDelTableIndexCols;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableIndexCols = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableIndexCols = arrDelTableIndexCols.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableIndexCols = arrDelTableIndexCols.end();
		while( iterArrDelTableIndexCols != endArrDelTableIndexCols ) {
			objDelTableIndexCols = *iterArrDelTableIndexCols;
			iterArrDelTableIndexCols ++;
			cfbam::ICFBamIndexObj* objTableIndex;
			std::vector<cfbam::ICFBamIndexObj*> arrTableIndex = dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->readCachedIndexByIdxTableIdx( objDelTableIndexCols->getRequiredTenantId(),
				objDelTableIndexCols->getRequiredId() );
			std::vector<cfbam::ICFBamIndexObj*>::iterator iterArrTableIndex = arrTableIndex.begin();
			std::vector<cfbam::ICFBamIndexObj*>::iterator endArrTableIndex = arrTableIndex.end();
			while( iterArrTableIndex != endArrTableIndex ) {
				objTableIndex = *iterArrTableIndex;
				iterArrTableIndex ++;
			dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->deepDisposeByIndexIdx( objTableIndex->getRequiredTenantId(),
				objTableIndex->getRequiredId() );
			}
		}
		cfbam::ICFBamTableObj* objDelTableIndexes;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableIndexes = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableIndexes = arrDelTableIndexes.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableIndexes = arrDelTableIndexes.end();
		while( iterArrDelTableIndexes != endArrDelTableIndexes ) {
			objDelTableIndexes = *iterArrDelTableIndexes;
			iterArrDelTableIndexes ++;
			dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->deepDisposeByIdxTableIdx( objDelTableIndexes->getRequiredTenantId(),
				objDelTableIndexes->getRequiredId() );
		}
		cfbam::ICFBamTableObj* objDelTableRefIndexColumns;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableRefIndexColumns = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableRefIndexColumns = arrDelTableRefIndexColumns.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableRefIndexColumns = arrDelTableRefIndexColumns.end();
		while( iterArrDelTableRefIndexColumns != endArrDelTableRefIndexColumns ) {
			objDelTableRefIndexColumns = *iterArrDelTableRefIndexColumns;
			iterArrDelTableRefIndexColumns ++;
			cfbam::ICFBamValueObj* objColumns;
			std::vector<cfbam::ICFBamValueObj*> arrColumns = dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->readCachedValueByScopeIdx( objDelTableRefIndexColumns->getRequiredTenantId(),
				objDelTableRefIndexColumns->getRequiredId() );
			std::vector<cfbam::ICFBamValueObj*>::iterator iterArrColumns = arrColumns.begin();
			std::vector<cfbam::ICFBamValueObj*>::iterator endArrColumns = arrColumns.end();
			while( iterArrColumns != endArrColumns ) {
				objColumns = *iterArrColumns;
				iterArrColumns ++;
			dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->deepDisposeByColIdx( objColumns->getRequiredTenantId(),
				objColumns->getRequiredId() );
			}
		}
		cfbam::ICFBamTableObj* objDelTableColumns;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableColumns = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableColumns = arrDelTableColumns.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableColumns = arrDelTableColumns.end();
		while( iterArrDelTableColumns != endArrDelTableColumns ) {
			objDelTableColumns = *iterArrDelTableColumns;
			iterArrDelTableColumns ++;
			dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->deepDisposeByScopeIdx( objDelTableColumns->getRequiredTenantId(),
				objDelTableColumns->getRequiredId() );
		}
		cfbam::ICFBamTableObj* objDelTableDispensedId64Gen;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableDispensedId64Gen = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableDispensedId64Gen = arrDelTableDispensedId64Gen.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableDispensedId64Gen = arrDelTableDispensedId64Gen.end();
		while( iterArrDelTableDispensedId64Gen != endArrDelTableDispensedId64Gen ) {
			objDelTableDispensedId64Gen = *iterArrDelTableDispensedId64Gen;
			iterArrDelTableDispensedId64Gen ++;
			dynamic_cast<cfbam::CFBamId64GenTableObj*>( schema->getId64GenTableObj() )->deepDisposeByDispIdx( objDelTableDispensedId64Gen->getRequiredTenantIdReference(),
				objDelTableDispensedId64Gen->getRequiredIdReference() );
		}
		cfbam::ICFBamTableObj* objDelTableDispensedId32Gen;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableDispensedId32Gen = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableDispensedId32Gen = arrDelTableDispensedId32Gen.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableDispensedId32Gen = arrDelTableDispensedId32Gen.end();
		while( iterArrDelTableDispensedId32Gen != endArrDelTableDispensedId32Gen ) {
			objDelTableDispensedId32Gen = *iterArrDelTableDispensedId32Gen;
			iterArrDelTableDispensedId32Gen ++;
			dynamic_cast<cfbam::CFBamId32GenTableObj*>( schema->getId32GenTableObj() )->deepDisposeByDispIdx( objDelTableDispensedId32Gen->getRequiredTenantIdReference(),
				objDelTableDispensedId32Gen->getRequiredIdReference() );
		}
		cfbam::ICFBamTableObj* objDelTableDispensedId16Gen;
		std::vector<cfbam::ICFBamTableObj*> arrDelTableDispensedId16Gen = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamTableObj*>::iterator iterArrDelTableDispensedId16Gen = arrDelTableDispensedId16Gen.begin();
		std::vector<cfbam::ICFBamTableObj*>::iterator endArrDelTableDispensedId16Gen = arrDelTableDispensedId16Gen.end();
		while( iterArrDelTableDispensedId16Gen != endArrDelTableDispensedId16Gen ) {
			objDelTableDispensedId16Gen = *iterArrDelTableDispensedId16Gen;
			iterArrDelTableDispensedId16Gen ++;
			dynamic_cast<cfbam::CFBamId16GenTableObj*>( schema->getId16GenTableObj() )->deepDisposeByDispIdx( objDelTableDispensedId16Gen->getRequiredTenantIdReference(),
				objDelTableDispensedId16Gen->getRequiredIdReference() );
		}
		dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->deepDisposeBySchemaDefIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		cfbam::ICFBamValueObj* objDelTypeRefs;
		std::vector<cfbam::ICFBamValueObj*> arrDelTypeRefs = dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->readCachedValueByScopeIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamValueObj*>::iterator iterArrDelTypeRefs = arrDelTypeRefs.begin();
		std::vector<cfbam::ICFBamValueObj*>::iterator endArrDelTypeRefs = arrDelTypeRefs.end();
		while( iterArrDelTypeRefs != endArrDelTypeRefs ) {
			objDelTypeRefs = *iterArrDelTypeRefs;
			iterArrDelTypeRefs ++;
			dynamic_cast<cfbam::CFBamTableColTableObj*>( schema->getTableColTableObj() )->deepDisposeByDataIdx( objDelTypeRefs->getRequiredTenantIdReference(),
				objDelTypeRefs->getRequiredIdReference() );
		}
		dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->deepDisposeByScopeIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDetachFromIndexesSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj ) );
		}

		dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDeepDisposeScope( dynamic_cast<cfbam::ICFBamScopeObj*>( obj ) );
	}

	void CFBamSchemaDefTableObj::deepDisposeByCTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByCTenantIdx" );
		std::vector<cfbam::ICFBamSchemaDefObj*> list;
		std::vector<cfbam::ICFBamSchemaDefObj*> matchesFound = readCachedSchemaDefByCTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaDefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaDefTableObj::deepDisposeByMinorVersionIdx( const int64_t TenantId,
			const int64_t MinorVersionId ) {
		static const std::string S_ProcName( "deepDisposeByMinorVersionIdx" );
		std::vector<cfbam::ICFBamSchemaDefObj*> list;
		std::vector<cfbam::ICFBamSchemaDefObj*> matchesFound = readCachedSchemaDefByMinorVersionIdx( TenantId,
				MinorVersionId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaDefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaDefTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamSchemaDefObj*> list;
		cfbam::ICFBamSchemaDefObj* existingObj = readCachedSchemaDefByUNameIdx( TenantId,
				MinorVersionId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamSchemaDefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaDefTableObj::deepDisposeByAuthEMailIdx( const int64_t TenantId,
			const std::string& AuthorEMail ) {
		static const std::string S_ProcName( "deepDisposeByAuthEMailIdx" );
		std::vector<cfbam::ICFBamSchemaDefObj*> list;
		std::vector<cfbam::ICFBamSchemaDefObj*> matchesFound = readCachedSchemaDefByAuthEMailIdx( TenantId,
				AuthorEMail );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaDefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaDefTableObj::deepDisposeByProjectURLIdx( const int64_t TenantId,
			const std::string& ProjectURL ) {
		static const std::string S_ProcName( "deepDisposeByProjectURLIdx" );
		std::vector<cfbam::ICFBamSchemaDefObj*> list;
		std::vector<cfbam::ICFBamSchemaDefObj*> matchesFound = readCachedSchemaDefByProjectURLIdx( TenantId,
				ProjectURL );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaDefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaDefTableObj::deepDisposeByPubURIIdx( const int64_t TenantId,
			const std::string& PublishURI ) {
		static const std::string S_ProcName( "deepDisposeByPubURIIdx" );
		std::vector<cfbam::ICFBamSchemaDefObj*> list;
		cfbam::ICFBamSchemaDefObj* existingObj = readCachedSchemaDefByPubURIIdx( TenantId,
				PublishURI );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamSchemaDefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::createSchemaDef( cfbam::ICFBamSchemaDefEditObj* Obj ) {
		static const std::string S_ProcName( "createSchemaDef" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaDefObj* obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamSchemaDefBuff* buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->createSchemaDef(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
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

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readSchemaDef( cfbam::CFBamScopePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSchemaDef" );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		cfbam::ICFBamSchemaDefObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamSchemaDefBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
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

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::lockSchemaDef( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_ProcName( "lockSchemaDef" );
		cfbam::ICFBamSchemaDefObj* locked = NULL;
		cfbam::CFBamSchemaDefBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readAllSchemaDef( bool forceRead ) {
		static const std::string S_ProcName( "readAllSchemaDef" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaDefObj* realized = NULL;
		if( forceRead || ( allSchemaDef == NULL ) ) {
			std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* map = new std::map<cfbam::CFBamScopePKey,cfbam::ICFBamSchemaDefObj*>();
			allSchemaDef = map;
			std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamSchemaDefBuff* buff = NULL;
			cfbam::ICFBamSchemaDefObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSchemaDef->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSchemaDef->size();
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		auto valIter = allSchemaDef->begin();
		size_t idx = 0;
		while( valIter != allSchemaDef->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readSchemaDefByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaDefByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamSchemaDefObj* obj = readSchemaDef( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readSchemaDefByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaDefByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>();
			cfbam::ICFBamScopeObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamScopeBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaDefObj* realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readSchemaDefByCTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaDefByCTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamSchemaDefByCTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* oldDict;
		if( indexByCTenantIdx == NULL ) {
			indexByCTenantIdx = new std::map< cfbam::CFBamSchemaDefByCTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		}
		auto searchIndexByCTenantIdx = indexByCTenantIdx->find( key );
		if( searchIndexByCTenantIdx != indexByCTenantIdx->end() ) {
			oldDict = searchIndexByCTenantIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>();
			cfbam::ICFBamSchemaDefObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readDerivedByCTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamSchemaDefBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaDefObj* realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByCTenantIdx->erase( searchIndexByCTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByCTenantIdx->insert( std::map< cfbam::CFBamSchemaDefByCTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readSchemaDefByMinorVersionIdx( const int64_t TenantId,
			const int64_t MinorVersionId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaDefByMinorVersionIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamSchemaDefByMinorVersionIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMinorVersionId( MinorVersionId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* oldDict;
		if( indexByMinorVersionIdx == NULL ) {
			indexByMinorVersionIdx = new std::map< cfbam::CFBamSchemaDefByMinorVersionIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		}
		auto searchIndexByMinorVersionIdx = indexByMinorVersionIdx->find( key );
		if( searchIndexByMinorVersionIdx != indexByMinorVersionIdx->end() ) {
			oldDict = searchIndexByMinorVersionIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>();
			cfbam::ICFBamSchemaDefObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readDerivedByMinorVersionIdx( schema->getAuthorization(),
				TenantId,
				MinorVersionId );
			cfbam::CFBamSchemaDefBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaDefObj* realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByMinorVersionIdx->erase( searchIndexByMinorVersionIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByMinorVersionIdx->insert( std::map< cfbam::CFBamSchemaDefByMinorVersionIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readSchemaDefByUNameIdx( const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaDefByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamSchemaDefByUNameIdxKey,
				cfbam::ICFBamSchemaDefObj*>();
		}
		cfbam::CFBamSchemaDefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMinorVersionId( MinorVersionId );
		key.setRequiredName( Name );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		cfbam::ICFBamSchemaDefObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamSchemaDefBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				MinorVersionId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamSchemaDefByUNameIdxKey, cfbam::ICFBamSchemaDefObj*>::value_type( key, dynamic_cast<cfbam::ICFBamSchemaDefObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readSchemaDefByAuthEMailIdx( const int64_t TenantId,
			const std::string& AuthorEMail,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaDefByAuthEMailIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamSchemaDefByAuthEMailIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredAuthorEMail( AuthorEMail );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* oldDict;
		if( indexByAuthEMailIdx == NULL ) {
			indexByAuthEMailIdx = new std::map< cfbam::CFBamSchemaDefByAuthEMailIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		}
		auto searchIndexByAuthEMailIdx = indexByAuthEMailIdx->find( key );
		if( searchIndexByAuthEMailIdx != indexByAuthEMailIdx->end() ) {
			oldDict = searchIndexByAuthEMailIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>();
			cfbam::ICFBamSchemaDefObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readDerivedByAuthEMailIdx( schema->getAuthorization(),
				TenantId,
				AuthorEMail );
			cfbam::CFBamSchemaDefBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaDefObj* realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByAuthEMailIdx->erase( searchIndexByAuthEMailIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByAuthEMailIdx->insert( std::map< cfbam::CFBamSchemaDefByAuthEMailIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readSchemaDefByProjectURLIdx( const int64_t TenantId,
			const std::string& ProjectURL,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaDefByProjectURLIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamSchemaDefByProjectURLIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredProjectURL( ProjectURL );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* oldDict;
		if( indexByProjectURLIdx == NULL ) {
			indexByProjectURLIdx = new std::map< cfbam::CFBamSchemaDefByProjectURLIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>*>();
		}
		auto searchIndexByProjectURLIdx = indexByProjectURLIdx->find( key );
		if( searchIndexByProjectURLIdx != indexByProjectURLIdx->end() ) {
			oldDict = searchIndexByProjectURLIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>();
			cfbam::ICFBamSchemaDefObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readDerivedByProjectURLIdx( schema->getAuthorization(),
				TenantId,
				ProjectURL );
			cfbam::CFBamSchemaDefBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaDefObj* realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByProjectURLIdx->erase( searchIndexByProjectURLIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByProjectURLIdx->insert( std::map< cfbam::CFBamSchemaDefByProjectURLIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readSchemaDefByPubURIIdx( const int64_t TenantId,
			const std::string& PublishURI, bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaDefByPubURIIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByPubURIIdx == NULL ) {
			indexByPubURIIdx = new std::map< cfbam::CFBamSchemaDefByPubURIIdxKey,
				cfbam::ICFBamSchemaDefObj*>();
		}
		cfbam::CFBamSchemaDefByPubURIIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredPublishURI( PublishURI );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		cfbam::ICFBamSchemaDefObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByPubURIIdx = indexByPubURIIdx->find( key );
			if( searchIndexByPubURIIdx != indexByPubURIIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByPubURIIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamSchemaDefBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readDerivedByPubURIIdx( schema->getAuthorization(),
				TenantId,
				PublishURI );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByPubURIIdx->insert( std::map< cfbam::CFBamSchemaDefByPubURIIdxKey, cfbam::ICFBamSchemaDefObj*>::value_type( key, dynamic_cast<cfbam::ICFBamSchemaDefObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readSchemaDefByLookupUNameIdx( const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readSchemaDefByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamSchemaDefByUNameIdxKey,
				cfbam::ICFBamSchemaDefObj*>();
		}
		cfbam::CFBamSchemaDefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMinorVersionId( MinorVersionId );
		key.setRequiredName( Name );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		cfbam::ICFBamSchemaDefObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamSchemaDefBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				TenantId,
				MinorVersionId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamSchemaDefByUNameIdxKey, cfbam::ICFBamSchemaDefObj*>::value_type( key, dynamic_cast<cfbam::ICFBamSchemaDefObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readCachedSchemaDef( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSchemaDef" );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		cfbam::ICFBamSchemaDefObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readCachedSchemaDefByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedSchemaDefByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamSchemaDefObj* obj = readCachedSchemaDef( &pkey );
		return( obj );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readCachedSchemaDefByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedSchemaDefByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaDefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaDefObj* obj;
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

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readCachedSchemaDefByCTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedSchemaDefByCTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		cfbam::CFBamSchemaDefByCTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		if( indexByCTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByCTenantIdx = indexByCTenantIdx->find( key );
		if( searchIndexByCTenantIdx != indexByCTenantIdx->end() ) {
			dict = searchIndexByCTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaDefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaDefObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaDefBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readCachedSchemaDefByMinorVersionIdx( const int64_t TenantId,
			const int64_t MinorVersionId )
	{
		static const std::string S_ProcName( "readCachedSchemaDefByMinorVersionIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		cfbam::CFBamSchemaDefByMinorVersionIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMinorVersionId( MinorVersionId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		if( indexByMinorVersionIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByMinorVersionIdx = indexByMinorVersionIdx->find( key );
		if( searchIndexByMinorVersionIdx != indexByMinorVersionIdx->end() ) {
			dict = searchIndexByMinorVersionIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaDefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaDefObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaDefBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readCachedSchemaDefByUNameIdx( const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedSchemaDefByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamSchemaDefByUNameIdxKey,
				cfbam::ICFBamSchemaDefObj*>();
		}
		cfbam::CFBamSchemaDefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMinorVersionId( MinorVersionId );
		key.setRequiredName( Name );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaDefBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readCachedSchemaDefByAuthEMailIdx( const int64_t TenantId,
			const std::string& AuthorEMail )
	{
		static const std::string S_ProcName( "readCachedSchemaDefByAuthEMailIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		cfbam::CFBamSchemaDefByAuthEMailIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredAuthorEMail( AuthorEMail );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		if( indexByAuthEMailIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByAuthEMailIdx = indexByAuthEMailIdx->find( key );
		if( searchIndexByAuthEMailIdx != indexByAuthEMailIdx->end() ) {
			dict = searchIndexByAuthEMailIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaDefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaDefObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaDefBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamSchemaDefTableObj::readCachedSchemaDefByProjectURLIdx( const int64_t TenantId,
			const std::string& ProjectURL )
	{
		static const std::string S_ProcName( "readCachedSchemaDefByProjectURLIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaDefObj*> arr;
		cfbam::CFBamSchemaDefByProjectURLIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredProjectURL( ProjectURL );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* dict;
		if( indexByProjectURLIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByProjectURLIdx = indexByProjectURLIdx->find( key );
		if( searchIndexByProjectURLIdx != indexByProjectURLIdx->end() ) {
			dict = searchIndexByProjectURLIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaDefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaDefObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaDefBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readCachedSchemaDefByPubURIIdx( const int64_t TenantId,
			const std::string& PublishURI )
	{
		static const std::string S_ProcName( "readCachedSchemaDefByPubURIIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByPubURIIdx == NULL ) {
			indexByPubURIIdx = new std::map< cfbam::CFBamSchemaDefByPubURIIdxKey,
				cfbam::ICFBamSchemaDefObj*>();
		}
		cfbam::CFBamSchemaDefByPubURIIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredPublishURI( PublishURI );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		auto searchIndexByPubURIIdx = indexByPubURIIdx->find( key );
		if( searchIndexByPubURIIdx != indexByPubURIIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByPubURIIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaDefBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::readCachedSchemaDefByLookupUNameIdx( const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedSchemaDefByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamSchemaDefByUNameIdxKey,
				cfbam::ICFBamSchemaDefObj*>();
		}
		cfbam::CFBamSchemaDefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMinorVersionId( MinorVersionId );
		key.setRequiredName( Name );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		cfbam::ICFBamSchemaDefObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaDefBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefTableObj::updateSchemaDef( cfbam::ICFBamSchemaDefEditObj* Obj ) {
		static const std::string S_ProcName( "updateSchemaDef" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaDefObj* obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamSchemaDefBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->updateSchemaDef( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamSchemaDefBuff*>( Obj->getSchemaDefBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj->realize() );
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

	void CFBamSchemaDefTableObj::deleteSchemaDef( cfbam::ICFBamSchemaDefEditObj* Obj ) {
		cfbam::ICFBamSchemaDefObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDef( schema->getAuthorization(),
			obj->getSchemaDefBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamSchemaDefTableObj::deleteSchemaDefByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamSchemaDefObj* obj = readSchemaDef( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamSchemaDefEditObj* editObj = dynamic_cast<cfbam::ICFBamSchemaDefEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamSchemaDefEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamSchemaDefTableObj::deleteSchemaDefByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDefByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamSchemaDefTableObj::deleteSchemaDefByCTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDefByCTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByCTenantIdx( TenantId );
	}

	void CFBamSchemaDefTableObj::deleteSchemaDefByMinorVersionIdx( const int64_t TenantId,
			const int64_t MinorVersionId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDefByMinorVersionIdx( schema->getAuthorization(),
				TenantId,
				MinorVersionId );
		deepDisposeByMinorVersionIdx( TenantId,
			MinorVersionId );
	}

	void CFBamSchemaDefTableObj::deleteSchemaDefByUNameIdx( const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamSchemaDefByUNameIdxKey,
				cfbam::ICFBamSchemaDefObj*>();
		}
		cfbam::CFBamSchemaDefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMinorVersionId( MinorVersionId );
		key.setRequiredName( Name );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDefByUNameIdx( schema->getAuthorization(),
				TenantId,
				MinorVersionId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDefByUNameIdx( schema->getAuthorization(),
				TenantId,
				MinorVersionId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			MinorVersionId,
			Name );
	}

	void CFBamSchemaDefTableObj::deleteSchemaDefByAuthEMailIdx( const int64_t TenantId,
			const std::string& AuthorEMail )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDefByAuthEMailIdx( schema->getAuthorization(),
				TenantId,
				AuthorEMail );
		deepDisposeByAuthEMailIdx( TenantId,
			AuthorEMail );
	}

	void CFBamSchemaDefTableObj::deleteSchemaDefByProjectURLIdx( const int64_t TenantId,
			const std::string& ProjectURL )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDefByProjectURLIdx( schema->getAuthorization(),
				TenantId,
				ProjectURL );
		deepDisposeByProjectURLIdx( TenantId,
			ProjectURL );
	}

	void CFBamSchemaDefTableObj::deleteSchemaDefByPubURIIdx( const int64_t TenantId,
			const std::string& PublishURI )
	{
		if( indexByPubURIIdx == NULL ) {
			indexByPubURIIdx = new std::map< cfbam::CFBamSchemaDefByPubURIIdxKey,
				cfbam::ICFBamSchemaDefObj*>();
		}
		cfbam::CFBamSchemaDefByPubURIIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredPublishURI( PublishURI );
		cfbam::ICFBamSchemaDefObj* obj = NULL;
		auto searchIndexByPubURIIdx = indexByPubURIIdx->find( key );
		if( searchIndexByPubURIIdx != indexByPubURIIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDefByPubURIIdx( schema->getAuthorization(),
				TenantId,
				PublishURI );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->deleteSchemaDefByPubURIIdx( schema->getAuthorization(),
				TenantId,
				PublishURI );
		}
		deepDisposeByPubURIIdx( TenantId,
			PublishURI );
	}

	void CFBamSchemaDefTableObj::reallyDetachFromIndexesSchemaDef( cfbam::ICFBamSchemaDefObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSchemaDef" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamSchemaDefObj* obj = Obj;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamSchemaDefObj* existingObj = searchMembers->second;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByCTenantIdx != NULL ) {
				cfbam::CFBamSchemaDefByCTenantIdxKey keyCTenantIdx;
				keyCTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchCTenantIdx = indexByCTenantIdx->find( keyCTenantIdx );
				if( searchCTenantIdx != indexByCTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapCTenantIdx = searchCTenantIdx->second;
					if( mapCTenantIdx != NULL ) {
						auto removalProbe = mapCTenantIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapCTenantIdx->end() ) {
							mapCTenantIdx->erase( removalProbe );
							if( mapCTenantIdx->empty() ) {
								delete mapCTenantIdx;
								mapCTenantIdx = NULL;
								indexByCTenantIdx->erase( searchCTenantIdx );
							}
						}
					}
				}
			}

			if( indexByMinorVersionIdx != NULL ) {
				cfbam::CFBamSchemaDefByMinorVersionIdxKey keyMinorVersionIdx;
				keyMinorVersionIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyMinorVersionIdx.setRequiredMinorVersionId( obj->getRequiredMinorVersionId() );
				auto searchMinorVersionIdx = indexByMinorVersionIdx->find( keyMinorVersionIdx );
				if( searchMinorVersionIdx != indexByMinorVersionIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapMinorVersionIdx = searchMinorVersionIdx->second;
					if( mapMinorVersionIdx != NULL ) {
						auto removalProbe = mapMinorVersionIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapMinorVersionIdx->end() ) {
							mapMinorVersionIdx->erase( removalProbe );
							if( mapMinorVersionIdx->empty() ) {
								delete mapMinorVersionIdx;
								mapMinorVersionIdx = NULL;
								indexByMinorVersionIdx->erase( searchMinorVersionIdx );
							}
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamSchemaDefByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredMinorVersionId( obj->getRequiredMinorVersionId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByAuthEMailIdx != NULL ) {
				cfbam::CFBamSchemaDefByAuthEMailIdxKey keyAuthEMailIdx;
				keyAuthEMailIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyAuthEMailIdx.setRequiredAuthorEMail( obj->getRequiredAuthorEMail() );
				auto searchAuthEMailIdx = indexByAuthEMailIdx->find( keyAuthEMailIdx );
				if( searchAuthEMailIdx != indexByAuthEMailIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapAuthEMailIdx = searchAuthEMailIdx->second;
					if( mapAuthEMailIdx != NULL ) {
						auto removalProbe = mapAuthEMailIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapAuthEMailIdx->end() ) {
							mapAuthEMailIdx->erase( removalProbe );
							if( mapAuthEMailIdx->empty() ) {
								delete mapAuthEMailIdx;
								mapAuthEMailIdx = NULL;
								indexByAuthEMailIdx->erase( searchAuthEMailIdx );
							}
						}
					}
				}
			}

			if( indexByProjectURLIdx != NULL ) {
				cfbam::CFBamSchemaDefByProjectURLIdxKey keyProjectURLIdx;
				keyProjectURLIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyProjectURLIdx.setRequiredProjectURL( obj->getRequiredProjectURL() );
				auto searchProjectURLIdx = indexByProjectURLIdx->find( keyProjectURLIdx );
				if( searchProjectURLIdx != indexByProjectURLIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaDefObj*>* mapProjectURLIdx = searchProjectURLIdx->second;
					if( mapProjectURLIdx != NULL ) {
						auto removalProbe = mapProjectURLIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapProjectURLIdx->end() ) {
							mapProjectURLIdx->erase( removalProbe );
							if( mapProjectURLIdx->empty() ) {
								delete mapProjectURLIdx;
								mapProjectURLIdx = NULL;
								indexByProjectURLIdx->erase( searchProjectURLIdx );
							}
						}
					}
				}
			}

			if( indexByPubURIIdx != NULL ) {
				cfbam::CFBamSchemaDefByPubURIIdxKey keyPubURIIdx;
				keyPubURIIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyPubURIIdx.setRequiredPublishURI( obj->getRequiredPublishURI() );
				auto removalProbe = indexByPubURIIdx->find( keyPubURIIdx );
				if( removalProbe != indexByPubURIIdx->end() ) {
					indexByPubURIIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
			dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDetachFromIndexesScope( Obj );
	}


}
