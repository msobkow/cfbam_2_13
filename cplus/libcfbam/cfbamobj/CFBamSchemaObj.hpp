#pragma once

// Description: C++18 Schema Object specification for CFBam.

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
#include <cfbam/ICFBamPublic.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
	class ICFBamAtomObj;
	class ICFBamAtomEditObj;
	class ICFBamAtomTableObj;
	class ICFBamBlobColObj;
	class ICFBamBlobColEditObj;
	class ICFBamBlobColTableObj;
	class ICFBamBlobDefObj;
	class ICFBamBlobDefEditObj;
	class ICFBamBlobDefTableObj;
	class ICFBamBlobTypeObj;
	class ICFBamBlobTypeEditObj;
	class ICFBamBlobTypeTableObj;
	class ICFBamBoolColObj;
	class ICFBamBoolColEditObj;
	class ICFBamBoolColTableObj;
	class ICFBamBoolDefObj;
	class ICFBamBoolDefEditObj;
	class ICFBamBoolDefTableObj;
	class ICFBamBoolTypeObj;
	class ICFBamBoolTypeEditObj;
	class ICFBamBoolTypeTableObj;
	class ICFBamChainObj;
	class ICFBamChainEditObj;
	class ICFBamChainTableObj;
	class ICFBamClearDepObj;
	class ICFBamClearDepEditObj;
	class ICFBamClearDepTableObj;
	class ICFBamClearSubDep1Obj;
	class ICFBamClearSubDep1EditObj;
	class ICFBamClearSubDep1TableObj;
	class ICFBamClearSubDep2Obj;
	class ICFBamClearSubDep2EditObj;
	class ICFBamClearSubDep2TableObj;
	class ICFBamClearSubDep3Obj;
	class ICFBamClearSubDep3EditObj;
	class ICFBamClearSubDep3TableObj;
	class ICFBamClearTopDepObj;
	class ICFBamClearTopDepEditObj;
	class ICFBamClearTopDepTableObj;
}

namespace cfsec {
	class ICFSecClusterObj;
	class ICFSecClusterEditObj;
	class ICFSecClusterTableObj;
}

namespace cfbam { 
	class ICFBamClusterObj;
	class ICFBamClusterEditObj;
	class ICFBamClusterTableObj;
	class ICFBamDateColObj;
	class ICFBamDateColEditObj;
	class ICFBamDateColTableObj;
	class ICFBamDateDefObj;
	class ICFBamDateDefEditObj;
	class ICFBamDateDefTableObj;
	class ICFBamDateTypeObj;
	class ICFBamDateTypeEditObj;
	class ICFBamDateTypeTableObj;
	class ICFBamDelDepObj;
	class ICFBamDelDepEditObj;
	class ICFBamDelDepTableObj;
	class ICFBamDelSubDep1Obj;
	class ICFBamDelSubDep1EditObj;
	class ICFBamDelSubDep1TableObj;
	class ICFBamDelSubDep2Obj;
	class ICFBamDelSubDep2EditObj;
	class ICFBamDelSubDep2TableObj;
	class ICFBamDelSubDep3Obj;
	class ICFBamDelSubDep3EditObj;
	class ICFBamDelSubDep3TableObj;
	class ICFBamDelTopDepObj;
	class ICFBamDelTopDepEditObj;
	class ICFBamDelTopDepTableObj;
	class ICFBamDoubleColObj;
	class ICFBamDoubleColEditObj;
	class ICFBamDoubleColTableObj;
	class ICFBamDoubleDefObj;
	class ICFBamDoubleDefEditObj;
	class ICFBamDoubleDefTableObj;
	class ICFBamDoubleTypeObj;
	class ICFBamDoubleTypeEditObj;
	class ICFBamDoubleTypeTableObj;
	class ICFBamEnumDefObj;
	class ICFBamEnumDefEditObj;
	class ICFBamEnumDefTableObj;
	class ICFBamEnumTagObj;
	class ICFBamEnumTagEditObj;
	class ICFBamEnumTagTableObj;
	class ICFBamEnumTypeObj;
	class ICFBamEnumTypeEditObj;
	class ICFBamEnumTypeTableObj;
	class ICFBamFloatColObj;
	class ICFBamFloatColEditObj;
	class ICFBamFloatColTableObj;
	class ICFBamFloatDefObj;
	class ICFBamFloatDefEditObj;
	class ICFBamFloatDefTableObj;
	class ICFBamFloatTypeObj;
	class ICFBamFloatTypeEditObj;
	class ICFBamFloatTypeTableObj;
}

namespace cfsec {
	class ICFSecHostNodeObj;
	class ICFSecHostNodeEditObj;
	class ICFSecHostNodeTableObj;
}

namespace cfbam { 
	class ICFBamHostNodeObj;
	class ICFBamHostNodeEditObj;
	class ICFBamHostNodeTableObj;
}

namespace cfsec {
	class ICFSecISOCcyObj;
	class ICFSecISOCcyEditObj;
	class ICFSecISOCcyTableObj;
}

namespace cfbam { 
	class ICFBamISOCcyObj;
	class ICFBamISOCcyEditObj;
	class ICFBamISOCcyTableObj;
}

namespace cfsec {
	class ICFSecISOCtryObj;
	class ICFSecISOCtryEditObj;
	class ICFSecISOCtryTableObj;
}

namespace cfbam { 
	class ICFBamISOCtryObj;
	class ICFBamISOCtryEditObj;
	class ICFBamISOCtryTableObj;
}

namespace cfsec {
	class ICFSecISOCtryCcyObj;
	class ICFSecISOCtryCcyEditObj;
	class ICFSecISOCtryCcyTableObj;
}

namespace cfbam { 
	class ICFBamISOCtryCcyObj;
	class ICFBamISOCtryCcyEditObj;
	class ICFBamISOCtryCcyTableObj;
}

namespace cfsec {
	class ICFSecISOCtryLangObj;
	class ICFSecISOCtryLangEditObj;
	class ICFSecISOCtryLangTableObj;
}

namespace cfbam { 
	class ICFBamISOCtryLangObj;
	class ICFBamISOCtryLangEditObj;
	class ICFBamISOCtryLangTableObj;
}

namespace cfsec {
	class ICFSecISOLangObj;
	class ICFSecISOLangEditObj;
	class ICFSecISOLangTableObj;
}

namespace cfbam { 
	class ICFBamISOLangObj;
	class ICFBamISOLangEditObj;
	class ICFBamISOLangTableObj;
}

namespace cfsec {
	class ICFSecISOTZoneObj;
	class ICFSecISOTZoneEditObj;
	class ICFSecISOTZoneTableObj;
}

namespace cfbam { 
	class ICFBamISOTZoneObj;
	class ICFBamISOTZoneEditObj;
	class ICFBamISOTZoneTableObj;
	class ICFBamId16GenObj;
	class ICFBamId16GenEditObj;
	class ICFBamId16GenTableObj;
	class ICFBamId32GenObj;
	class ICFBamId32GenEditObj;
	class ICFBamId32GenTableObj;
	class ICFBamId64GenObj;
	class ICFBamId64GenEditObj;
	class ICFBamId64GenTableObj;
	class ICFBamIndexObj;
	class ICFBamIndexEditObj;
	class ICFBamIndexTableObj;
	class ICFBamIndexColObj;
	class ICFBamIndexColEditObj;
	class ICFBamIndexColTableObj;
	class ICFBamInt16ColObj;
	class ICFBamInt16ColEditObj;
	class ICFBamInt16ColTableObj;
	class ICFBamInt16DefObj;
	class ICFBamInt16DefEditObj;
	class ICFBamInt16DefTableObj;
	class ICFBamInt16TypeObj;
	class ICFBamInt16TypeEditObj;
	class ICFBamInt16TypeTableObj;
	class ICFBamInt32ColObj;
	class ICFBamInt32ColEditObj;
	class ICFBamInt32ColTableObj;
	class ICFBamInt32DefObj;
	class ICFBamInt32DefEditObj;
	class ICFBamInt32DefTableObj;
	class ICFBamInt32TypeObj;
	class ICFBamInt32TypeEditObj;
	class ICFBamInt32TypeTableObj;
	class ICFBamInt64ColObj;
	class ICFBamInt64ColEditObj;
	class ICFBamInt64ColTableObj;
	class ICFBamInt64DefObj;
	class ICFBamInt64DefEditObj;
	class ICFBamInt64DefTableObj;
	class ICFBamInt64TypeObj;
	class ICFBamInt64TypeEditObj;
	class ICFBamInt64TypeTableObj;
}

namespace cfint {
	class ICFIntLicenseObj;
	class ICFIntLicenseEditObj;
	class ICFIntLicenseTableObj;
}

namespace cfbam { 
	class ICFBamLicenseObj;
	class ICFBamLicenseEditObj;
	class ICFBamLicenseTableObj;
}

namespace cfint {
	class ICFIntMajorVersionObj;
	class ICFIntMajorVersionEditObj;
	class ICFIntMajorVersionTableObj;
}

namespace cfbam { 
	class ICFBamMajorVersionObj;
	class ICFBamMajorVersionEditObj;
	class ICFBamMajorVersionTableObj;
}

namespace cfint {
	class ICFIntMimeTypeObj;
	class ICFIntMimeTypeEditObj;
	class ICFIntMimeTypeTableObj;
}

namespace cfbam { 
	class ICFBamMimeTypeObj;
	class ICFBamMimeTypeEditObj;
	class ICFBamMimeTypeTableObj;
}

namespace cfint {
	class ICFIntMinorVersionObj;
	class ICFIntMinorVersionEditObj;
	class ICFIntMinorVersionTableObj;
}

namespace cfbam { 
	class ICFBamMinorVersionObj;
	class ICFBamMinorVersionEditObj;
	class ICFBamMinorVersionTableObj;
	class ICFBamNmTokenColObj;
	class ICFBamNmTokenColEditObj;
	class ICFBamNmTokenColTableObj;
	class ICFBamNmTokenDefObj;
	class ICFBamNmTokenDefEditObj;
	class ICFBamNmTokenDefTableObj;
	class ICFBamNmTokenTypeObj;
	class ICFBamNmTokenTypeEditObj;
	class ICFBamNmTokenTypeTableObj;
	class ICFBamNmTokensColObj;
	class ICFBamNmTokensColEditObj;
	class ICFBamNmTokensColTableObj;
	class ICFBamNmTokensDefObj;
	class ICFBamNmTokensDefEditObj;
	class ICFBamNmTokensDefTableObj;
	class ICFBamNmTokensTypeObj;
	class ICFBamNmTokensTypeEditObj;
	class ICFBamNmTokensTypeTableObj;
	class ICFBamNumberColObj;
	class ICFBamNumberColEditObj;
	class ICFBamNumberColTableObj;
	class ICFBamNumberDefObj;
	class ICFBamNumberDefEditObj;
	class ICFBamNumberDefTableObj;
	class ICFBamNumberTypeObj;
	class ICFBamNumberTypeEditObj;
	class ICFBamNumberTypeTableObj;
	class ICFBamParamObj;
	class ICFBamParamEditObj;
	class ICFBamParamTableObj;
	class ICFBamPopDepObj;
	class ICFBamPopDepEditObj;
	class ICFBamPopDepTableObj;
	class ICFBamPopSubDep1Obj;
	class ICFBamPopSubDep1EditObj;
	class ICFBamPopSubDep1TableObj;
	class ICFBamPopSubDep2Obj;
	class ICFBamPopSubDep2EditObj;
	class ICFBamPopSubDep2TableObj;
	class ICFBamPopSubDep3Obj;
	class ICFBamPopSubDep3EditObj;
	class ICFBamPopSubDep3TableObj;
	class ICFBamPopTopDepObj;
	class ICFBamPopTopDepEditObj;
	class ICFBamPopTopDepTableObj;
	class ICFBamRelationObj;
	class ICFBamRelationEditObj;
	class ICFBamRelationTableObj;
	class ICFBamRelationColObj;
	class ICFBamRelationColEditObj;
	class ICFBamRelationColTableObj;
	class ICFBamSchemaDefObj;
	class ICFBamSchemaDefEditObj;
	class ICFBamSchemaDefTableObj;
	class ICFBamSchemaRefObj;
	class ICFBamSchemaRefEditObj;
	class ICFBamSchemaRefTableObj;
	class ICFBamScopeObj;
	class ICFBamScopeEditObj;
	class ICFBamScopeTableObj;
}

namespace cfsec {
	class ICFSecSecAppObj;
	class ICFSecSecAppEditObj;
	class ICFSecSecAppTableObj;
}

namespace cfbam { 
	class ICFBamSecAppObj;
	class ICFBamSecAppEditObj;
	class ICFBamSecAppTableObj;
}

namespace cfsec {
	class ICFSecSecDeviceObj;
	class ICFSecSecDeviceEditObj;
	class ICFSecSecDeviceTableObj;
}

namespace cfbam { 
	class ICFBamSecDeviceObj;
	class ICFBamSecDeviceEditObj;
	class ICFBamSecDeviceTableObj;
}

namespace cfsec {
	class ICFSecSecFormObj;
	class ICFSecSecFormEditObj;
	class ICFSecSecFormTableObj;
}

namespace cfbam { 
	class ICFBamSecFormObj;
	class ICFBamSecFormEditObj;
	class ICFBamSecFormTableObj;
}

namespace cfsec {
	class ICFSecSecGroupObj;
	class ICFSecSecGroupEditObj;
	class ICFSecSecGroupTableObj;
}

namespace cfbam { 
	class ICFBamSecGroupObj;
	class ICFBamSecGroupEditObj;
	class ICFBamSecGroupTableObj;
}

namespace cfsec {
	class ICFSecSecGroupFormObj;
	class ICFSecSecGroupFormEditObj;
	class ICFSecSecGroupFormTableObj;
}

namespace cfbam { 
	class ICFBamSecGroupFormObj;
	class ICFBamSecGroupFormEditObj;
	class ICFBamSecGroupFormTableObj;
}

namespace cfsec {
	class ICFSecSecGrpIncObj;
	class ICFSecSecGrpIncEditObj;
	class ICFSecSecGrpIncTableObj;
}

namespace cfbam { 
	class ICFBamSecGrpIncObj;
	class ICFBamSecGrpIncEditObj;
	class ICFBamSecGrpIncTableObj;
}

namespace cfsec {
	class ICFSecSecGrpMembObj;
	class ICFSecSecGrpMembEditObj;
	class ICFSecSecGrpMembTableObj;
}

namespace cfbam { 
	class ICFBamSecGrpMembObj;
	class ICFBamSecGrpMembEditObj;
	class ICFBamSecGrpMembTableObj;
}

namespace cfsec {
	class ICFSecSecSessionObj;
	class ICFSecSecSessionEditObj;
	class ICFSecSecSessionTableObj;
}

namespace cfbam { 
	class ICFBamSecSessionObj;
	class ICFBamSecSessionEditObj;
	class ICFBamSecSessionTableObj;
}

namespace cfsec {
	class ICFSecSecUserObj;
	class ICFSecSecUserEditObj;
	class ICFSecSecUserTableObj;
}

namespace cfbam { 
	class ICFBamSecUserObj;
	class ICFBamSecUserEditObj;
	class ICFBamSecUserTableObj;
	class ICFBamServerListFuncObj;
	class ICFBamServerListFuncEditObj;
	class ICFBamServerListFuncTableObj;
	class ICFBamServerMethodObj;
	class ICFBamServerMethodEditObj;
	class ICFBamServerMethodTableObj;
	class ICFBamServerObjFuncObj;
	class ICFBamServerObjFuncEditObj;
	class ICFBamServerObjFuncTableObj;
	class ICFBamServerProcObj;
	class ICFBamServerProcEditObj;
	class ICFBamServerProcTableObj;
}

namespace cfsec {
	class ICFSecServiceObj;
	class ICFSecServiceEditObj;
	class ICFSecServiceTableObj;
}

namespace cfbam { 
	class ICFBamServiceObj;
	class ICFBamServiceEditObj;
	class ICFBamServiceTableObj;
}

namespace cfsec {
	class ICFSecServiceTypeObj;
	class ICFSecServiceTypeEditObj;
	class ICFSecServiceTypeTableObj;
}

namespace cfbam { 
	class ICFBamServiceTypeObj;
	class ICFBamServiceTypeEditObj;
	class ICFBamServiceTypeTableObj;
	class ICFBamStringColObj;
	class ICFBamStringColEditObj;
	class ICFBamStringColTableObj;
	class ICFBamStringDefObj;
	class ICFBamStringDefEditObj;
	class ICFBamStringDefTableObj;
	class ICFBamStringTypeObj;
	class ICFBamStringTypeEditObj;
	class ICFBamStringTypeTableObj;
}

namespace cfint {
	class ICFIntSubProjectObj;
	class ICFIntSubProjectEditObj;
	class ICFIntSubProjectTableObj;
}

namespace cfbam { 
	class ICFBamSubProjectObj;
	class ICFBamSubProjectEditObj;
	class ICFBamSubProjectTableObj;
}

namespace cfsec {
	class ICFSecSysClusterObj;
	class ICFSecSysClusterEditObj;
	class ICFSecSysClusterTableObj;
}

namespace cfbam { 
	class ICFBamSysClusterObj;
	class ICFBamSysClusterEditObj;
	class ICFBamSysClusterTableObj;
}

namespace cfsec {
	class ICFSecTSecGroupObj;
	class ICFSecTSecGroupEditObj;
	class ICFSecTSecGroupTableObj;
}

namespace cfbam { 
	class ICFBamTSecGroupObj;
	class ICFBamTSecGroupEditObj;
	class ICFBamTSecGroupTableObj;
}

namespace cfsec {
	class ICFSecTSecGrpIncObj;
	class ICFSecTSecGrpIncEditObj;
	class ICFSecTSecGrpIncTableObj;
}

namespace cfbam { 
	class ICFBamTSecGrpIncObj;
	class ICFBamTSecGrpIncEditObj;
	class ICFBamTSecGrpIncTableObj;
}

namespace cfsec {
	class ICFSecTSecGrpMembObj;
	class ICFSecTSecGrpMembEditObj;
	class ICFSecTSecGrpMembTableObj;
}

namespace cfbam { 
	class ICFBamTSecGrpMembObj;
	class ICFBamTSecGrpMembEditObj;
	class ICFBamTSecGrpMembTableObj;
	class ICFBamTZDateColObj;
	class ICFBamTZDateColEditObj;
	class ICFBamTZDateColTableObj;
	class ICFBamTZDateDefObj;
	class ICFBamTZDateDefEditObj;
	class ICFBamTZDateDefTableObj;
	class ICFBamTZDateTypeObj;
	class ICFBamTZDateTypeEditObj;
	class ICFBamTZDateTypeTableObj;
	class ICFBamTZTimeColObj;
	class ICFBamTZTimeColEditObj;
	class ICFBamTZTimeColTableObj;
	class ICFBamTZTimeDefObj;
	class ICFBamTZTimeDefEditObj;
	class ICFBamTZTimeDefTableObj;
	class ICFBamTZTimeTypeObj;
	class ICFBamTZTimeTypeEditObj;
	class ICFBamTZTimeTypeTableObj;
	class ICFBamTZTimestampColObj;
	class ICFBamTZTimestampColEditObj;
	class ICFBamTZTimestampColTableObj;
	class ICFBamTZTimestampDefObj;
	class ICFBamTZTimestampDefEditObj;
	class ICFBamTZTimestampDefTableObj;
	class ICFBamTZTimestampTypeObj;
	class ICFBamTZTimestampTypeEditObj;
	class ICFBamTZTimestampTypeTableObj;
	class ICFBamTableObj;
	class ICFBamTableEditObj;
	class ICFBamTableTableObj;
	class ICFBamTableColObj;
	class ICFBamTableColEditObj;
	class ICFBamTableColTableObj;
}

namespace cfsec {
	class ICFSecTenantObj;
	class ICFSecTenantEditObj;
	class ICFSecTenantTableObj;
}

namespace cfbam { 
	class ICFBamTenantObj;
	class ICFBamTenantEditObj;
	class ICFBamTenantTableObj;
	class ICFBamTextColObj;
	class ICFBamTextColEditObj;
	class ICFBamTextColTableObj;
	class ICFBamTextDefObj;
	class ICFBamTextDefEditObj;
	class ICFBamTextDefTableObj;
	class ICFBamTextTypeObj;
	class ICFBamTextTypeEditObj;
	class ICFBamTextTypeTableObj;
	class ICFBamTimeColObj;
	class ICFBamTimeColEditObj;
	class ICFBamTimeColTableObj;
	class ICFBamTimeDefObj;
	class ICFBamTimeDefEditObj;
	class ICFBamTimeDefTableObj;
	class ICFBamTimeTypeObj;
	class ICFBamTimeTypeEditObj;
	class ICFBamTimeTypeTableObj;
	class ICFBamTimestampColObj;
	class ICFBamTimestampColEditObj;
	class ICFBamTimestampColTableObj;
	class ICFBamTimestampDefObj;
	class ICFBamTimestampDefEditObj;
	class ICFBamTimestampDefTableObj;
	class ICFBamTimestampTypeObj;
	class ICFBamTimestampTypeEditObj;
	class ICFBamTimestampTypeTableObj;
}

namespace cfint {
	class ICFIntTldObj;
	class ICFIntTldEditObj;
	class ICFIntTldTableObj;
}

namespace cfbam { 
	class ICFBamTldObj;
	class ICFBamTldEditObj;
	class ICFBamTldTableObj;
	class ICFBamTokenColObj;
	class ICFBamTokenColEditObj;
	class ICFBamTokenColTableObj;
	class ICFBamTokenDefObj;
	class ICFBamTokenDefEditObj;
	class ICFBamTokenDefTableObj;
	class ICFBamTokenTypeObj;
	class ICFBamTokenTypeEditObj;
	class ICFBamTokenTypeTableObj;
}

namespace cfint {
	class ICFIntTopDomainObj;
	class ICFIntTopDomainEditObj;
	class ICFIntTopDomainTableObj;
}

namespace cfbam { 
	class ICFBamTopDomainObj;
	class ICFBamTopDomainEditObj;
	class ICFBamTopDomainTableObj;
}

namespace cfint {
	class ICFIntTopProjectObj;
	class ICFIntTopProjectEditObj;
	class ICFIntTopProjectTableObj;
}

namespace cfbam { 
	class ICFBamTopProjectObj;
	class ICFBamTopProjectEditObj;
	class ICFBamTopProjectTableObj;
	class ICFBamUInt16ColObj;
	class ICFBamUInt16ColEditObj;
	class ICFBamUInt16ColTableObj;
	class ICFBamUInt16DefObj;
	class ICFBamUInt16DefEditObj;
	class ICFBamUInt16DefTableObj;
	class ICFBamUInt16TypeObj;
	class ICFBamUInt16TypeEditObj;
	class ICFBamUInt16TypeTableObj;
	class ICFBamUInt32ColObj;
	class ICFBamUInt32ColEditObj;
	class ICFBamUInt32ColTableObj;
	class ICFBamUInt32DefObj;
	class ICFBamUInt32DefEditObj;
	class ICFBamUInt32DefTableObj;
	class ICFBamUInt32TypeObj;
	class ICFBamUInt32TypeEditObj;
	class ICFBamUInt32TypeTableObj;
	class ICFBamUInt64ColObj;
	class ICFBamUInt64ColEditObj;
	class ICFBamUInt64ColTableObj;
	class ICFBamUInt64DefObj;
	class ICFBamUInt64DefEditObj;
	class ICFBamUInt64DefTableObj;
	class ICFBamUInt64TypeObj;
	class ICFBamUInt64TypeEditObj;
	class ICFBamUInt64TypeTableObj;
}

namespace cfint {
	class ICFIntURLProtocolObj;
	class ICFIntURLProtocolEditObj;
	class ICFIntURLProtocolTableObj;
}

namespace cfbam { 
	class ICFBamURLProtocolObj;
	class ICFBamURLProtocolEditObj;
	class ICFBamURLProtocolTableObj;
	class ICFBamUuidColObj;
	class ICFBamUuidColEditObj;
	class ICFBamUuidColTableObj;
	class ICFBamUuidDefObj;
	class ICFBamUuidDefEditObj;
	class ICFBamUuidDefTableObj;
	class ICFBamUuidGenObj;
	class ICFBamUuidGenEditObj;
	class ICFBamUuidGenTableObj;
	class ICFBamUuidTypeObj;
	class ICFBamUuidTypeEditObj;
	class ICFBamUuidTypeTableObj;
	class ICFBamValueObj;
	class ICFBamValueEditObj;
	class ICFBamValueTableObj;
}

#include <cfbamobj/ICFBamSchemaObj.hpp>

namespace cfbam {

	class CFBamSchemaObj
	: public virtual ICFBamSchemaObj
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string SCHEMA_NAME;
		static const std::string SCHEMA_DBNAME;
		static const std::string S_System;
	protected:
		cfsec::CFSecAuthorization* authorization;
		cfsec::ICFSecSchema* backingStore;
		std::string* secClusterName;
		std::string* secTenantName;
		std::string* secUserName;
		cfsec::ICFSecClusterObj* secCluster;
		long secClusterId;
		cfsec::ICFSecTenantObj* secTenant;
		long secTenantId;
		cfsec::ICFSecSecUserObj* secUser;
		uuid_t secSessionUserId;
		cfsec::ICFSecSecSessionObj* secSession;
		uuid_t secSessionSessionId;
		std::string* schemaDbName;
		std::string* lowerDbSchemaName;
		ICFBamAtomTableObj* atomTableObj;
		ICFBamBlobColTableObj* blobColTableObj;
		ICFBamBlobDefTableObj* blobDefTableObj;
		ICFBamBlobTypeTableObj* blobTypeTableObj;
		ICFBamBoolColTableObj* boolColTableObj;
		ICFBamBoolDefTableObj* boolDefTableObj;
		ICFBamBoolTypeTableObj* boolTypeTableObj;
		ICFBamChainTableObj* chainTableObj;
		ICFBamClearDepTableObj* clearDepTableObj;
		ICFBamClearSubDep1TableObj* clearSubDep1TableObj;
		ICFBamClearSubDep2TableObj* clearSubDep2TableObj;
		ICFBamClearSubDep3TableObj* clearSubDep3TableObj;
		ICFBamClearTopDepTableObj* clearTopDepTableObj;
		ICFBamClusterTableObj* clusterTableObj;
		ICFBamDateColTableObj* dateColTableObj;
		ICFBamDateDefTableObj* dateDefTableObj;
		ICFBamDateTypeTableObj* dateTypeTableObj;
		ICFBamDelDepTableObj* delDepTableObj;
		ICFBamDelSubDep1TableObj* delSubDep1TableObj;
		ICFBamDelSubDep2TableObj* delSubDep2TableObj;
		ICFBamDelSubDep3TableObj* delSubDep3TableObj;
		ICFBamDelTopDepTableObj* delTopDepTableObj;
		ICFBamDoubleColTableObj* doubleColTableObj;
		ICFBamDoubleDefTableObj* doubleDefTableObj;
		ICFBamDoubleTypeTableObj* doubleTypeTableObj;
		ICFBamEnumDefTableObj* enumDefTableObj;
		ICFBamEnumTagTableObj* enumTagTableObj;
		ICFBamEnumTypeTableObj* enumTypeTableObj;
		ICFBamFloatColTableObj* floatColTableObj;
		ICFBamFloatDefTableObj* floatDefTableObj;
		ICFBamFloatTypeTableObj* floatTypeTableObj;
		ICFBamHostNodeTableObj* hostNodeTableObj;
		ICFBamISOCcyTableObj* iSOCcyTableObj;
		ICFBamISOCtryTableObj* iSOCtryTableObj;
		ICFBamISOCtryCcyTableObj* iSOCtryCcyTableObj;
		ICFBamISOCtryLangTableObj* iSOCtryLangTableObj;
		ICFBamISOLangTableObj* iSOLangTableObj;
		ICFBamISOTZoneTableObj* iSOTZoneTableObj;
		ICFBamId16GenTableObj* id16GenTableObj;
		ICFBamId32GenTableObj* id32GenTableObj;
		ICFBamId64GenTableObj* id64GenTableObj;
		ICFBamIndexTableObj* indexTableObj;
		ICFBamIndexColTableObj* indexColTableObj;
		ICFBamInt16ColTableObj* int16ColTableObj;
		ICFBamInt16DefTableObj* int16DefTableObj;
		ICFBamInt16TypeTableObj* int16TypeTableObj;
		ICFBamInt32ColTableObj* int32ColTableObj;
		ICFBamInt32DefTableObj* int32DefTableObj;
		ICFBamInt32TypeTableObj* int32TypeTableObj;
		ICFBamInt64ColTableObj* int64ColTableObj;
		ICFBamInt64DefTableObj* int64DefTableObj;
		ICFBamInt64TypeTableObj* int64TypeTableObj;
		ICFBamLicenseTableObj* licenseTableObj;
		ICFBamMajorVersionTableObj* majorVersionTableObj;
		ICFBamMimeTypeTableObj* mimeTypeTableObj;
		ICFBamMinorVersionTableObj* minorVersionTableObj;
		ICFBamNmTokenColTableObj* nmTokenColTableObj;
		ICFBamNmTokenDefTableObj* nmTokenDefTableObj;
		ICFBamNmTokenTypeTableObj* nmTokenTypeTableObj;
		ICFBamNmTokensColTableObj* nmTokensColTableObj;
		ICFBamNmTokensDefTableObj* nmTokensDefTableObj;
		ICFBamNmTokensTypeTableObj* nmTokensTypeTableObj;
		ICFBamNumberColTableObj* numberColTableObj;
		ICFBamNumberDefTableObj* numberDefTableObj;
		ICFBamNumberTypeTableObj* numberTypeTableObj;
		ICFBamParamTableObj* paramTableObj;
		ICFBamPopDepTableObj* popDepTableObj;
		ICFBamPopSubDep1TableObj* popSubDep1TableObj;
		ICFBamPopSubDep2TableObj* popSubDep2TableObj;
		ICFBamPopSubDep3TableObj* popSubDep3TableObj;
		ICFBamPopTopDepTableObj* popTopDepTableObj;
		ICFBamRelationTableObj* relationTableObj;
		ICFBamRelationColTableObj* relationColTableObj;
		ICFBamSchemaDefTableObj* schemaDefTableObj;
		ICFBamSchemaRefTableObj* schemaRefTableObj;
		ICFBamScopeTableObj* scopeTableObj;
		ICFBamSecAppTableObj* secAppTableObj;
		ICFBamSecDeviceTableObj* secDeviceTableObj;
		ICFBamSecFormTableObj* secFormTableObj;
		ICFBamSecGroupTableObj* secGroupTableObj;
		ICFBamSecGroupFormTableObj* secGroupFormTableObj;
		ICFBamSecGrpIncTableObj* secGrpIncTableObj;
		ICFBamSecGrpMembTableObj* secGrpMembTableObj;
		ICFBamSecSessionTableObj* secSessionTableObj;
		ICFBamSecUserTableObj* secUserTableObj;
		ICFBamServerListFuncTableObj* serverListFuncTableObj;
		ICFBamServerMethodTableObj* serverMethodTableObj;
		ICFBamServerObjFuncTableObj* serverObjFuncTableObj;
		ICFBamServerProcTableObj* serverProcTableObj;
		ICFBamServiceTableObj* serviceTableObj;
		ICFBamServiceTypeTableObj* serviceTypeTableObj;
		ICFBamStringColTableObj* stringColTableObj;
		ICFBamStringDefTableObj* stringDefTableObj;
		ICFBamStringTypeTableObj* stringTypeTableObj;
		ICFBamSubProjectTableObj* subProjectTableObj;
		ICFBamSysClusterTableObj* sysClusterTableObj;
		ICFBamTSecGroupTableObj* tSecGroupTableObj;
		ICFBamTSecGrpIncTableObj* tSecGrpIncTableObj;
		ICFBamTSecGrpMembTableObj* tSecGrpMembTableObj;
		ICFBamTZDateColTableObj* tZDateColTableObj;
		ICFBamTZDateDefTableObj* tZDateDefTableObj;
		ICFBamTZDateTypeTableObj* tZDateTypeTableObj;
		ICFBamTZTimeColTableObj* tZTimeColTableObj;
		ICFBamTZTimeDefTableObj* tZTimeDefTableObj;
		ICFBamTZTimeTypeTableObj* tZTimeTypeTableObj;
		ICFBamTZTimestampColTableObj* tZTimestampColTableObj;
		ICFBamTZTimestampDefTableObj* tZTimestampDefTableObj;
		ICFBamTZTimestampTypeTableObj* tZTimestampTypeTableObj;
		ICFBamTableTableObj* tableTableObj;
		ICFBamTableColTableObj* tableColTableObj;
		ICFBamTenantTableObj* tenantTableObj;
		ICFBamTextColTableObj* textColTableObj;
		ICFBamTextDefTableObj* textDefTableObj;
		ICFBamTextTypeTableObj* textTypeTableObj;
		ICFBamTimeColTableObj* timeColTableObj;
		ICFBamTimeDefTableObj* timeDefTableObj;
		ICFBamTimeTypeTableObj* timeTypeTableObj;
		ICFBamTimestampColTableObj* timestampColTableObj;
		ICFBamTimestampDefTableObj* timestampDefTableObj;
		ICFBamTimestampTypeTableObj* timestampTypeTableObj;
		ICFBamTldTableObj* tldTableObj;
		ICFBamTokenColTableObj* tokenColTableObj;
		ICFBamTokenDefTableObj* tokenDefTableObj;
		ICFBamTokenTypeTableObj* tokenTypeTableObj;
		ICFBamTopDomainTableObj* topDomainTableObj;
		ICFBamTopProjectTableObj* topProjectTableObj;
		ICFBamUInt16ColTableObj* uInt16ColTableObj;
		ICFBamUInt16DefTableObj* uInt16DefTableObj;
		ICFBamUInt16TypeTableObj* uInt16TypeTableObj;
		ICFBamUInt32ColTableObj* uInt32ColTableObj;
		ICFBamUInt32DefTableObj* uInt32DefTableObj;
		ICFBamUInt32TypeTableObj* uInt32TypeTableObj;
		ICFBamUInt64ColTableObj* uInt64ColTableObj;
		ICFBamUInt64DefTableObj* uInt64DefTableObj;
		ICFBamUInt64TypeTableObj* uInt64TypeTableObj;
		ICFBamURLProtocolTableObj* uRLProtocolTableObj;
		ICFBamUuidColTableObj* uuidColTableObj;
		ICFBamUuidDefTableObj* uuidDefTableObj;
		ICFBamUuidGenTableObj* uuidGenTableObj;
		ICFBamUuidTypeTableObj* uuidTypeTableObj;
		ICFBamValueTableObj* valueTableObj;
	public:
		CFBamSchemaObj();

		virtual ~CFBamSchemaObj();

		virtual void setSecClusterName( const std::string& value );
		virtual std::string getSecClusterName();
		virtual cfsec::ICFSecClusterObj* getSecCluster();
		virtual void setSecCluster( cfsec::ICFSecClusterObj* value );
		virtual long getSecClusterId();

		virtual void setSecTenantName( const std::string& value );
		virtual std::string getSecTenantName();
		virtual cfsec::ICFSecTenantObj* getSecTenant();
		virtual void setSecTenant( cfsec::ICFSecTenantObj* value );
		virtual long getSecTenantId();

		virtual void setSecUserName( const std::string& value );
		virtual std::string getSecUserName();
		virtual cfsec::ICFSecSecUserObj* getSecUser();
		virtual void setSecUser( cfsec::ICFSecSecUserObj* value );

		virtual cfsec::ICFSecSecSessionObj* getSecSession();
		virtual void setSecSession( cfsec::ICFSecSecSessionObj* value );
		virtual void setSecSessionId( const uuid_ptr_t value );
		virtual uuid_ptr_t getSecSessionSessionId();
		virtual uuid_ptr_t getSecSessionUserId();

		virtual std::string getDbSchemaName();
		virtual std::string getLowerDbSchemaName();

		virtual void setDbSchemaName( const std::string& argDbSchemaName );

		virtual std::string fileImport( const std::string& fileName, const std::string& fileContent );

		/**
		 *	Release any prepared statements acquired by this connection.
		 *	<p>
		 *	Resets the prepared statements so they can acquire the new value of
		 *	<tt>setDbSchemaName()</tt>.
		 */
		virtual void releasePreparedStatements();

		virtual cfsec::CFSecAuthorization* getAuthorization() const;
		virtual void setAuthorization( cfsec::CFSecAuthorization* value );
		virtual cfsec::ICFSecSchema* getBackingStore();
		virtual void setBackingStore( cfsec::ICFSecSchema* value );
		virtual std::string getSchemaName();
		virtual bool isConnected();
		virtual bool connect();
		virtual bool connect( const std::string& username, const std::string& password );
		virtual bool connect( const std::string& clusterName, const std::string& tenantName, const std::string& secUserName, const std::string& password );
		virtual void disconnect( bool doCommit );
		virtual void logout();
		virtual void minimizeMemory();
		virtual bool isTransactionOpen();
		virtual bool beginTransaction();
		virtual void commit();
		virtual void rollback();

		virtual cfbam::ICFBamAtomTableObj* getAtomTableObj();

		virtual cfbam::ICFBamBlobColTableObj* getBlobColTableObj();

		virtual cfbam::ICFBamBlobDefTableObj* getBlobDefTableObj();

		virtual cfbam::ICFBamBlobTypeTableObj* getBlobTypeTableObj();

		virtual cfbam::ICFBamBoolColTableObj* getBoolColTableObj();

		virtual cfbam::ICFBamBoolDefTableObj* getBoolDefTableObj();

		virtual cfbam::ICFBamBoolTypeTableObj* getBoolTypeTableObj();

		virtual cfbam::ICFBamChainTableObj* getChainTableObj();

		virtual cfbam::ICFBamClearDepTableObj* getClearDepTableObj();

		virtual cfbam::ICFBamClearSubDep1TableObj* getClearSubDep1TableObj();

		virtual cfbam::ICFBamClearSubDep2TableObj* getClearSubDep2TableObj();

		virtual cfbam::ICFBamClearSubDep3TableObj* getClearSubDep3TableObj();

		virtual cfbam::ICFBamClearTopDepTableObj* getClearTopDepTableObj();

		virtual cfsec::ICFSecClusterTableObj* getClusterTableObj();

		virtual cfbam::ICFBamDateColTableObj* getDateColTableObj();

		virtual cfbam::ICFBamDateDefTableObj* getDateDefTableObj();

		virtual cfbam::ICFBamDateTypeTableObj* getDateTypeTableObj();

		virtual cfbam::ICFBamDelDepTableObj* getDelDepTableObj();

		virtual cfbam::ICFBamDelSubDep1TableObj* getDelSubDep1TableObj();

		virtual cfbam::ICFBamDelSubDep2TableObj* getDelSubDep2TableObj();

		virtual cfbam::ICFBamDelSubDep3TableObj* getDelSubDep3TableObj();

		virtual cfbam::ICFBamDelTopDepTableObj* getDelTopDepTableObj();

		virtual cfbam::ICFBamDoubleColTableObj* getDoubleColTableObj();

		virtual cfbam::ICFBamDoubleDefTableObj* getDoubleDefTableObj();

		virtual cfbam::ICFBamDoubleTypeTableObj* getDoubleTypeTableObj();

		virtual cfbam::ICFBamEnumDefTableObj* getEnumDefTableObj();

		virtual cfbam::ICFBamEnumTagTableObj* getEnumTagTableObj();

		virtual cfbam::ICFBamEnumTypeTableObj* getEnumTypeTableObj();

		virtual cfbam::ICFBamFloatColTableObj* getFloatColTableObj();

		virtual cfbam::ICFBamFloatDefTableObj* getFloatDefTableObj();

		virtual cfbam::ICFBamFloatTypeTableObj* getFloatTypeTableObj();

		virtual cfsec::ICFSecHostNodeTableObj* getHostNodeTableObj();

		virtual cfsec::ICFSecISOCcyTableObj* getISOCcyTableObj();

		virtual cfsec::ICFSecISOCtryTableObj* getISOCtryTableObj();

		virtual cfsec::ICFSecISOCtryCcyTableObj* getISOCtryCcyTableObj();

		virtual cfsec::ICFSecISOCtryLangTableObj* getISOCtryLangTableObj();

		virtual cfsec::ICFSecISOLangTableObj* getISOLangTableObj();

		virtual cfsec::ICFSecISOTZoneTableObj* getISOTZoneTableObj();

		virtual cfbam::ICFBamId16GenTableObj* getId16GenTableObj();

		virtual cfbam::ICFBamId32GenTableObj* getId32GenTableObj();

		virtual cfbam::ICFBamId64GenTableObj* getId64GenTableObj();

		virtual cfbam::ICFBamIndexTableObj* getIndexTableObj();

		virtual cfbam::ICFBamIndexColTableObj* getIndexColTableObj();

		virtual cfbam::ICFBamInt16ColTableObj* getInt16ColTableObj();

		virtual cfbam::ICFBamInt16DefTableObj* getInt16DefTableObj();

		virtual cfbam::ICFBamInt16TypeTableObj* getInt16TypeTableObj();

		virtual cfbam::ICFBamInt32ColTableObj* getInt32ColTableObj();

		virtual cfbam::ICFBamInt32DefTableObj* getInt32DefTableObj();

		virtual cfbam::ICFBamInt32TypeTableObj* getInt32TypeTableObj();

		virtual cfbam::ICFBamInt64ColTableObj* getInt64ColTableObj();

		virtual cfbam::ICFBamInt64DefTableObj* getInt64DefTableObj();

		virtual cfbam::ICFBamInt64TypeTableObj* getInt64TypeTableObj();

		virtual cfint::ICFIntLicenseTableObj* getLicenseTableObj();

		virtual cfint::ICFIntMajorVersionTableObj* getMajorVersionTableObj();

		virtual cfint::ICFIntMimeTypeTableObj* getMimeTypeTableObj();

		virtual cfint::ICFIntMinorVersionTableObj* getMinorVersionTableObj();

		virtual cfbam::ICFBamNmTokenColTableObj* getNmTokenColTableObj();

		virtual cfbam::ICFBamNmTokenDefTableObj* getNmTokenDefTableObj();

		virtual cfbam::ICFBamNmTokenTypeTableObj* getNmTokenTypeTableObj();

		virtual cfbam::ICFBamNmTokensColTableObj* getNmTokensColTableObj();

		virtual cfbam::ICFBamNmTokensDefTableObj* getNmTokensDefTableObj();

		virtual cfbam::ICFBamNmTokensTypeTableObj* getNmTokensTypeTableObj();

		virtual cfbam::ICFBamNumberColTableObj* getNumberColTableObj();

		virtual cfbam::ICFBamNumberDefTableObj* getNumberDefTableObj();

		virtual cfbam::ICFBamNumberTypeTableObj* getNumberTypeTableObj();

		virtual cfbam::ICFBamParamTableObj* getParamTableObj();

		virtual cfbam::ICFBamPopDepTableObj* getPopDepTableObj();

		virtual cfbam::ICFBamPopSubDep1TableObj* getPopSubDep1TableObj();

		virtual cfbam::ICFBamPopSubDep2TableObj* getPopSubDep2TableObj();

		virtual cfbam::ICFBamPopSubDep3TableObj* getPopSubDep3TableObj();

		virtual cfbam::ICFBamPopTopDepTableObj* getPopTopDepTableObj();

		virtual cfbam::ICFBamRelationTableObj* getRelationTableObj();

		virtual cfbam::ICFBamRelationColTableObj* getRelationColTableObj();

		virtual cfbam::ICFBamSchemaDefTableObj* getSchemaDefTableObj();

		virtual cfbam::ICFBamSchemaRefTableObj* getSchemaRefTableObj();

		virtual cfbam::ICFBamScopeTableObj* getScopeTableObj();

		virtual cfsec::ICFSecSecAppTableObj* getSecAppTableObj();

		virtual cfsec::ICFSecSecDeviceTableObj* getSecDeviceTableObj();

		virtual cfsec::ICFSecSecFormTableObj* getSecFormTableObj();

		virtual cfsec::ICFSecSecGroupTableObj* getSecGroupTableObj();

		virtual cfsec::ICFSecSecGroupFormTableObj* getSecGroupFormTableObj();

		virtual cfsec::ICFSecSecGrpIncTableObj* getSecGrpIncTableObj();

		virtual cfsec::ICFSecSecGrpMembTableObj* getSecGrpMembTableObj();

		virtual cfsec::ICFSecSecSessionTableObj* getSecSessionTableObj();

		virtual cfsec::ICFSecSecUserTableObj* getSecUserTableObj();

		virtual cfbam::ICFBamServerListFuncTableObj* getServerListFuncTableObj();

		virtual cfbam::ICFBamServerMethodTableObj* getServerMethodTableObj();

		virtual cfbam::ICFBamServerObjFuncTableObj* getServerObjFuncTableObj();

		virtual cfbam::ICFBamServerProcTableObj* getServerProcTableObj();

		virtual cfsec::ICFSecServiceTableObj* getServiceTableObj();

		virtual cfsec::ICFSecServiceTypeTableObj* getServiceTypeTableObj();

		virtual cfbam::ICFBamStringColTableObj* getStringColTableObj();

		virtual cfbam::ICFBamStringDefTableObj* getStringDefTableObj();

		virtual cfbam::ICFBamStringTypeTableObj* getStringTypeTableObj();

		virtual cfint::ICFIntSubProjectTableObj* getSubProjectTableObj();

		virtual cfsec::ICFSecSysClusterTableObj* getSysClusterTableObj();

		virtual cfsec::ICFSecTSecGroupTableObj* getTSecGroupTableObj();

		virtual cfsec::ICFSecTSecGrpIncTableObj* getTSecGrpIncTableObj();

		virtual cfsec::ICFSecTSecGrpMembTableObj* getTSecGrpMembTableObj();

		virtual cfbam::ICFBamTZDateColTableObj* getTZDateColTableObj();

		virtual cfbam::ICFBamTZDateDefTableObj* getTZDateDefTableObj();

		virtual cfbam::ICFBamTZDateTypeTableObj* getTZDateTypeTableObj();

		virtual cfbam::ICFBamTZTimeColTableObj* getTZTimeColTableObj();

		virtual cfbam::ICFBamTZTimeDefTableObj* getTZTimeDefTableObj();

		virtual cfbam::ICFBamTZTimeTypeTableObj* getTZTimeTypeTableObj();

		virtual cfbam::ICFBamTZTimestampColTableObj* getTZTimestampColTableObj();

		virtual cfbam::ICFBamTZTimestampDefTableObj* getTZTimestampDefTableObj();

		virtual cfbam::ICFBamTZTimestampTypeTableObj* getTZTimestampTypeTableObj();

		virtual cfbam::ICFBamTableTableObj* getTableTableObj();

		virtual cfbam::ICFBamTableColTableObj* getTableColTableObj();

		virtual cfsec::ICFSecTenantTableObj* getTenantTableObj();

		virtual cfbam::ICFBamTextColTableObj* getTextColTableObj();

		virtual cfbam::ICFBamTextDefTableObj* getTextDefTableObj();

		virtual cfbam::ICFBamTextTypeTableObj* getTextTypeTableObj();

		virtual cfbam::ICFBamTimeColTableObj* getTimeColTableObj();

		virtual cfbam::ICFBamTimeDefTableObj* getTimeDefTableObj();

		virtual cfbam::ICFBamTimeTypeTableObj* getTimeTypeTableObj();

		virtual cfbam::ICFBamTimestampColTableObj* getTimestampColTableObj();

		virtual cfbam::ICFBamTimestampDefTableObj* getTimestampDefTableObj();

		virtual cfbam::ICFBamTimestampTypeTableObj* getTimestampTypeTableObj();

		virtual cfint::ICFIntTldTableObj* getTldTableObj();

		virtual cfbam::ICFBamTokenColTableObj* getTokenColTableObj();

		virtual cfbam::ICFBamTokenDefTableObj* getTokenDefTableObj();

		virtual cfbam::ICFBamTokenTypeTableObj* getTokenTypeTableObj();

		virtual cfint::ICFIntTopDomainTableObj* getTopDomainTableObj();

		virtual cfint::ICFIntTopProjectTableObj* getTopProjectTableObj();

		virtual cfbam::ICFBamUInt16ColTableObj* getUInt16ColTableObj();

		virtual cfbam::ICFBamUInt16DefTableObj* getUInt16DefTableObj();

		virtual cfbam::ICFBamUInt16TypeTableObj* getUInt16TypeTableObj();

		virtual cfbam::ICFBamUInt32ColTableObj* getUInt32ColTableObj();

		virtual cfbam::ICFBamUInt32DefTableObj* getUInt32DefTableObj();

		virtual cfbam::ICFBamUInt32TypeTableObj* getUInt32TypeTableObj();

		virtual cfbam::ICFBamUInt64ColTableObj* getUInt64ColTableObj();

		virtual cfbam::ICFBamUInt64DefTableObj* getUInt64DefTableObj();

		virtual cfbam::ICFBamUInt64TypeTableObj* getUInt64TypeTableObj();

		virtual cfint::ICFIntURLProtocolTableObj* getURLProtocolTableObj();

		virtual cfbam::ICFBamUuidColTableObj* getUuidColTableObj();

		virtual cfbam::ICFBamUuidDefTableObj* getUuidDefTableObj();

		virtual cfbam::ICFBamUuidGenTableObj* getUuidGenTableObj();

		virtual cfbam::ICFBamUuidTypeTableObj* getUuidTypeTableObj();

		virtual cfbam::ICFBamValueTableObj* getValueTableObj();

	};

}
