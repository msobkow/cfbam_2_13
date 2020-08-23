#pragma once

// Description: C++18 base object instance specification for CFBam Table.

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

#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/ICFBamTableObj.hpp>
#include <cfbamobj/ICFBamSchemaObj.hpp>

namespace cfbam {

	class CFBamTableObj
	: public CFBamScopeObj,
	  public virtual ICFBamTableObj
	{
	protected:
	public:
		static const std::string CLASS_NAME;
		static const classcode_t CLASS_CODE;

		virtual const int64_t getRequiredSchemaDefId();
		virtual const int64_t* getRequiredSchemaDefIdReference();

		virtual bool isOptionalDefSchemaTenantIdNull();
		virtual const int64_t getOptionalDefSchemaTenantIdValue();
		virtual const int64_t* getOptionalDefSchemaTenantIdReference();

		virtual bool isOptionalDefSchemaIdNull();
		virtual const int64_t getOptionalDefSchemaIdValue();
		virtual const int64_t* getOptionalDefSchemaIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();

		virtual bool isOptionalDbNameNull();
		virtual const std::string& getOptionalDbNameValue();
		virtual const std::string* getOptionalDbNameReference();

		virtual bool isOptionalShortNameNull();
		virtual const std::string& getOptionalShortNameValue();
		virtual const std::string* getOptionalShortNameReference();

		virtual bool isOptionalLabelNull();
		virtual const std::string& getOptionalLabelValue();
		virtual const std::string* getOptionalLabelReference();

		virtual bool isOptionalShortDescriptionNull();
		virtual const std::string& getOptionalShortDescriptionValue();
		virtual const std::string* getOptionalShortDescriptionReference();

		virtual bool isOptionalDescriptionNull();
		virtual const std::string& getOptionalDescriptionValue();
		virtual const std::string* getOptionalDescriptionReference();

		virtual const bool getRequiredPageData();
		virtual const bool* getRequiredPageDataReference();

		virtual bool isOptionalPrimaryIndexTenantIdNull();
		virtual const int64_t getOptionalPrimaryIndexTenantIdValue();
		virtual const int64_t* getOptionalPrimaryIndexTenantIdReference();

		virtual bool isOptionalPrimaryIndexIdNull();
		virtual const int64_t getOptionalPrimaryIndexIdValue();
		virtual const int64_t* getOptionalPrimaryIndexIdReference();

		virtual const std::string& getRequiredTableClassCode();
		virtual const std::string* getRequiredTableClassCodeReference();

		virtual bool isOptionalLookupIndexTenantIdNull();
		virtual const int64_t getOptionalLookupIndexTenantIdValue();
		virtual const int64_t* getOptionalLookupIndexTenantIdReference();

		virtual bool isOptionalLookupIndexIdNull();
		virtual const int64_t getOptionalLookupIndexIdValue();
		virtual const int64_t* getOptionalLookupIndexIdReference();

		virtual bool isOptionalAltIndexTenantIdNull();
		virtual const int64_t getOptionalAltIndexTenantIdValue();
		virtual const int64_t* getOptionalAltIndexTenantIdReference();

		virtual bool isOptionalAltIndexIdNull();
		virtual const int64_t getOptionalAltIndexIdValue();
		virtual const int64_t* getOptionalAltIndexIdReference();

		virtual bool isOptionalQualifyingTenantIdNull();
		virtual const int64_t getOptionalQualifyingTenantIdValue();
		virtual const int64_t* getOptionalQualifyingTenantIdReference();

		virtual bool isOptionalQualifyingTableIdNull();
		virtual const int64_t getOptionalQualifyingTableIdValue();
		virtual const int64_t* getOptionalQualifyingTableIdReference();

		virtual const bool getRequiredIsInstantiable();
		virtual const bool* getRequiredIsInstantiableReference();

		virtual const bool getRequiredHasHistory();
		virtual const bool* getRequiredHasHistoryReference();

		virtual const bool getRequiredHasAuditColumns();
		virtual const bool* getRequiredHasAuditColumnsReference();

		virtual const bool getRequiredIsMutable();
		virtual const bool* getRequiredIsMutableReference();

		virtual const bool getRequiredIsServerOnly();
		virtual const bool* getRequiredIsServerOnlyReference();

		virtual const cfbam::ICFBamSchema::LoaderBehaviourEnum getRequiredLoaderBehaviour();
		virtual const cfbam::ICFBamSchema::LoaderBehaviourEnum* getRequiredLoaderBehaviourReference();

		virtual const cfbam::ICFBamSchema::SecScopeEnum getRequiredSecScope();
		virtual const cfbam::ICFBamSchema::SecScopeEnum* getRequiredSecScopeReference();

		virtual bool isOptionalJObjMembersNull();
		virtual const std::string& getOptionalJObjMembersValue();
		virtual const std::string* getOptionalJObjMembersReference();

		virtual bool isOptionalJObjInterfaceNull();
		virtual const std::string& getOptionalJObjInterfaceValue();
		virtual const std::string* getOptionalJObjInterfaceReference();

		virtual bool isOptionalJObjImportNull();
		virtual const std::string& getOptionalJObjImportValue();
		virtual const std::string* getOptionalJObjImportReference();

		virtual bool isOptionalJObjImplementationNull();
		virtual const std::string& getOptionalJObjImplementationValue();
		virtual const std::string* getOptionalJObjImplementationReference();

		virtual bool isOptionalJEditObjMembersNull();
		virtual const std::string& getOptionalJEditObjMembersValue();
		virtual const std::string* getOptionalJEditObjMembersReference();

		virtual bool isOptionalJEditObjInterfaceNull();
		virtual const std::string& getOptionalJEditObjInterfaceValue();
		virtual const std::string* getOptionalJEditObjInterfaceReference();

		virtual bool isOptionalJEditObjImportNull();
		virtual const std::string& getOptionalJEditObjImportValue();
		virtual const std::string* getOptionalJEditObjImportReference();

		virtual bool isOptionalJEditObjImplementationNull();
		virtual const std::string& getOptionalJEditObjImplementationValue();
		virtual const std::string* getOptionalJEditObjImplementationReference();

		virtual bool isOptionalJTableImportNull();
		virtual const std::string& getOptionalJTableImportValue();
		virtual const std::string* getOptionalJTableImportReference();

		virtual bool isOptionalJTableMembersNull();
		virtual const std::string& getOptionalJTableMembersValue();
		virtual const std::string* getOptionalJTableMembersReference();

		virtual bool isOptionalJTableInterfaceNull();
		virtual const std::string& getOptionalJTableInterfaceValue();
		virtual const std::string* getOptionalJTableInterfaceReference();

		virtual bool isOptionalJTableImplementationNull();
		virtual const std::string& getOptionalJTableImplementationValue();
		virtual const std::string* getOptionalJTableImplementationReference();

		virtual bool isOptionalJTableObjImportNull();
		virtual const std::string& getOptionalJTableObjImportValue();
		virtual const std::string* getOptionalJTableObjImportReference();

		virtual bool isOptionalJTableObjMembersNull();
		virtual const std::string& getOptionalJTableObjMembersValue();
		virtual const std::string* getOptionalJTableObjMembersReference();

		virtual bool isOptionalJTableObjInterfaceNull();
		virtual const std::string& getOptionalJTableObjInterfaceValue();
		virtual const std::string* getOptionalJTableObjInterfaceReference();

		virtual bool isOptionalJTableObjImplementationNull();
		virtual const std::string& getOptionalJTableObjImplementationValue();
		virtual const std::string* getOptionalJTableObjImplementationReference();

		virtual bool isOptionalJDb2LUWTableImportNull();
		virtual const std::string& getOptionalJDb2LUWTableImportValue();
		virtual const std::string* getOptionalJDb2LUWTableImportReference();

		virtual bool isOptionalJDb2LUWTableMembersNull();
		virtual const std::string& getOptionalJDb2LUWTableMembersValue();
		virtual const std::string* getOptionalJDb2LUWTableMembersReference();

		virtual bool isOptionalJDb2LUWTableImplementationNull();
		virtual const std::string& getOptionalJDb2LUWTableImplementationValue();
		virtual const std::string* getOptionalJDb2LUWTableImplementationReference();

		virtual bool isOptionalJMSSqlTableImportNull();
		virtual const std::string& getOptionalJMSSqlTableImportValue();
		virtual const std::string* getOptionalJMSSqlTableImportReference();

		virtual bool isOptionalJMSSqlTableMembersNull();
		virtual const std::string& getOptionalJMSSqlTableMembersValue();
		virtual const std::string* getOptionalJMSSqlTableMembersReference();

		virtual bool isOptionalJMSSqlTableImplementationNull();
		virtual const std::string& getOptionalJMSSqlTableImplementationValue();
		virtual const std::string* getOptionalJMSSqlTableImplementationReference();

		virtual bool isOptionalJMySqlTableImportNull();
		virtual const std::string& getOptionalJMySqlTableImportValue();
		virtual const std::string* getOptionalJMySqlTableImportReference();

		virtual bool isOptionalJMySqlTableMembersNull();
		virtual const std::string& getOptionalJMySqlTableMembersValue();
		virtual const std::string* getOptionalJMySqlTableMembersReference();

		virtual bool isOptionalJMySqlTableImplementationNull();
		virtual const std::string& getOptionalJMySqlTableImplementationValue();
		virtual const std::string* getOptionalJMySqlTableImplementationReference();

		virtual bool isOptionalJOracleTableImportNull();
		virtual const std::string& getOptionalJOracleTableImportValue();
		virtual const std::string* getOptionalJOracleTableImportReference();

		virtual bool isOptionalJOracleTableMembersNull();
		virtual const std::string& getOptionalJOracleTableMembersValue();
		virtual const std::string* getOptionalJOracleTableMembersReference();

		virtual bool isOptionalJOracleTableImplementationNull();
		virtual const std::string& getOptionalJOracleTableImplementationValue();
		virtual const std::string* getOptionalJOracleTableImplementationReference();

		virtual bool isOptionalJPgSqlTableImportNull();
		virtual const std::string& getOptionalJPgSqlTableImportValue();
		virtual const std::string* getOptionalJPgSqlTableImportReference();

		virtual bool isOptionalJPgSqlTableMembersNull();
		virtual const std::string& getOptionalJPgSqlTableMembersValue();
		virtual const std::string* getOptionalJPgSqlTableMembersReference();

		virtual bool isOptionalJPgSqlTableImplementationNull();
		virtual const std::string& getOptionalJPgSqlTableImplementationValue();
		virtual const std::string* getOptionalJPgSqlTableImplementationReference();

		virtual bool isOptionalJRamTableImportNull();
		virtual const std::string& getOptionalJRamTableImportValue();
		virtual const std::string* getOptionalJRamTableImportReference();

		virtual bool isOptionalJRamTableMembersNull();
		virtual const std::string& getOptionalJRamTableMembersValue();
		virtual const std::string* getOptionalJRamTableMembersReference();

		virtual bool isOptionalJRamTableImplementationNull();
		virtual const std::string& getOptionalJRamTableImplementationValue();
		virtual const std::string* getOptionalJRamTableImplementationReference();

		virtual bool isOptionalJSaxLoaderImportNull();
		virtual const std::string& getOptionalJSaxLoaderImportValue();
		virtual const std::string* getOptionalJSaxLoaderImportReference();

		virtual bool isOptionalJSaxLoaderStartElementNull();
		virtual const std::string& getOptionalJSaxLoaderStartElementValue();
		virtual const std::string* getOptionalJSaxLoaderStartElementReference();

		virtual bool isOptionalJSaxLoaderEndElementNull();
		virtual const std::string& getOptionalJSaxLoaderEndElementValue();
		virtual const std::string* getOptionalJSaxLoaderEndElementReference();

		virtual bool isOptionalJXMsgTableImportNull();
		virtual const std::string& getOptionalJXMsgTableImportValue();
		virtual const std::string* getOptionalJXMsgTableImportReference();

		virtual bool isOptionalJXMsgTableFormattersNull();
		virtual const std::string& getOptionalJXMsgTableFormattersValue();
		virtual const std::string* getOptionalJXMsgTableFormattersReference();

		virtual bool isOptionalJXMsgRqstTableImportNull();
		virtual const std::string& getOptionalJXMsgRqstTableImportValue();
		virtual const std::string* getOptionalJXMsgRqstTableImportReference();

		virtual bool isOptionalJXMsgRspnTableImportNull();
		virtual const std::string& getOptionalJXMsgRspnTableImportValue();
		virtual const std::string* getOptionalJXMsgRspnTableImportReference();

		virtual bool isOptionalJXMsgClientTableImportNull();
		virtual const std::string& getOptionalJXMsgClientTableImportValue();
		virtual const std::string* getOptionalJXMsgClientTableImportReference();

		virtual bool isOptionalJXMsgRqstTableBodyNull();
		virtual const std::string& getOptionalJXMsgRqstTableBodyValue();
		virtual const std::string* getOptionalJXMsgRqstTableBodyReference();

		virtual bool isOptionalJXMsgRspnTableBodyNull();
		virtual const std::string& getOptionalJXMsgRspnTableBodyValue();
		virtual const std::string* getOptionalJXMsgRspnTableBodyReference();

		virtual bool isOptionalJXMsgClientTableBodyNull();
		virtual const std::string& getOptionalJXMsgClientTableBodyValue();
		virtual const std::string* getOptionalJXMsgClientTableBodyReference();

		virtual bool isOptionalCppObjMembersNull();
		virtual const std::string& getOptionalCppObjMembersValue();
		virtual const std::string* getOptionalCppObjMembersReference();

		virtual bool isOptionalCppObjInterfaceNull();
		virtual const std::string& getOptionalCppObjInterfaceValue();
		virtual const std::string* getOptionalCppObjInterfaceReference();

		virtual bool isOptionalCppObjIncludeNull();
		virtual const std::string& getOptionalCppObjIncludeValue();
		virtual const std::string* getOptionalCppObjIncludeReference();

		virtual bool isOptionalCppObjImplementationNull();
		virtual const std::string& getOptionalCppObjImplementationValue();
		virtual const std::string* getOptionalCppObjImplementationReference();

		virtual bool isOptionalCppEditObjMembersNull();
		virtual const std::string& getOptionalCppEditObjMembersValue();
		virtual const std::string* getOptionalCppEditObjMembersReference();

		virtual bool isOptionalCppEditObjInterfaceNull();
		virtual const std::string& getOptionalCppEditObjInterfaceValue();
		virtual const std::string* getOptionalCppEditObjInterfaceReference();

		virtual bool isOptionalCppEditObjIncludeNull();
		virtual const std::string& getOptionalCppEditObjIncludeValue();
		virtual const std::string* getOptionalCppEditObjIncludeReference();

		virtual bool isOptionalCppEditObjImplementationNull();
		virtual const std::string& getOptionalCppEditObjImplementationValue();
		virtual const std::string* getOptionalCppEditObjImplementationReference();

		virtual bool isOptionalCppTableIncludeNull();
		virtual const std::string& getOptionalCppTableIncludeValue();
		virtual const std::string* getOptionalCppTableIncludeReference();

		virtual bool isOptionalCppTableMembersNull();
		virtual const std::string& getOptionalCppTableMembersValue();
		virtual const std::string* getOptionalCppTableMembersReference();

		virtual bool isOptionalCppTableInterfaceNull();
		virtual const std::string& getOptionalCppTableInterfaceValue();
		virtual const std::string* getOptionalCppTableInterfaceReference();

		virtual bool isOptionalCppTableImplementationNull();
		virtual const std::string& getOptionalCppTableImplementationValue();
		virtual const std::string* getOptionalCppTableImplementationReference();

		virtual bool isOptionalCppTableObjIncludeNull();
		virtual const std::string& getOptionalCppTableObjIncludeValue();
		virtual const std::string* getOptionalCppTableObjIncludeReference();

		virtual bool isOptionalCppTableObjMembersNull();
		virtual const std::string& getOptionalCppTableObjMembersValue();
		virtual const std::string* getOptionalCppTableObjMembersReference();

		virtual bool isOptionalCppTableObjInterfaceNull();
		virtual const std::string& getOptionalCppTableObjInterfaceValue();
		virtual const std::string* getOptionalCppTableObjInterfaceReference();

		virtual bool isOptionalCppTableObjImplementationNull();
		virtual const std::string& getOptionalCppTableObjImplementationValue();
		virtual const std::string* getOptionalCppTableObjImplementationReference();

		virtual bool isOptionalCppDb2LUWTableIncludeNull();
		virtual const std::string& getOptionalCppDb2LUWTableIncludeValue();
		virtual const std::string* getOptionalCppDb2LUWTableIncludeReference();

		virtual bool isOptionalCppDb2LUWTableMembersNull();
		virtual const std::string& getOptionalCppDb2LUWTableMembersValue();
		virtual const std::string* getOptionalCppDb2LUWTableMembersReference();

		virtual bool isOptionalCppDb2LUWTableImplementationNull();
		virtual const std::string& getOptionalCppDb2LUWTableImplementationValue();
		virtual const std::string* getOptionalCppDb2LUWTableImplementationReference();

		virtual bool isOptionalCppMSSqlTableIncludeNull();
		virtual const std::string& getOptionalCppMSSqlTableIncludeValue();
		virtual const std::string* getOptionalCppMSSqlTableIncludeReference();

		virtual bool isOptionalCppMSSqlTableMembersNull();
		virtual const std::string& getOptionalCppMSSqlTableMembersValue();
		virtual const std::string* getOptionalCppMSSqlTableMembersReference();

		virtual bool isOptionalCppMSSqlTableImplementationNull();
		virtual const std::string& getOptionalCppMSSqlTableImplementationValue();
		virtual const std::string* getOptionalCppMSSqlTableImplementationReference();

		virtual bool isOptionalCppMySqlTableIncludeNull();
		virtual const std::string& getOptionalCppMySqlTableIncludeValue();
		virtual const std::string* getOptionalCppMySqlTableIncludeReference();

		virtual bool isOptionalCppMySqlTableMembersNull();
		virtual const std::string& getOptionalCppMySqlTableMembersValue();
		virtual const std::string* getOptionalCppMySqlTableMembersReference();

		virtual bool isOptionalCppMySqlTableImplementationNull();
		virtual const std::string& getOptionalCppMySqlTableImplementationValue();
		virtual const std::string* getOptionalCppMySqlTableImplementationReference();

		virtual bool isOptionalCppOracleTableIncludeNull();
		virtual const std::string& getOptionalCppOracleTableIncludeValue();
		virtual const std::string* getOptionalCppOracleTableIncludeReference();

		virtual bool isOptionalCppOracleTableMembersNull();
		virtual const std::string& getOptionalCppOracleTableMembersValue();
		virtual const std::string* getOptionalCppOracleTableMembersReference();

		virtual bool isOptionalCppOracleTableImplementationNull();
		virtual const std::string& getOptionalCppOracleTableImplementationValue();
		virtual const std::string* getOptionalCppOracleTableImplementationReference();

		virtual bool isOptionalCppPgSqlTableIncludeNull();
		virtual const std::string& getOptionalCppPgSqlTableIncludeValue();
		virtual const std::string* getOptionalCppPgSqlTableIncludeReference();

		virtual bool isOptionalCppPgSqlTableMembersNull();
		virtual const std::string& getOptionalCppPgSqlTableMembersValue();
		virtual const std::string* getOptionalCppPgSqlTableMembersReference();

		virtual bool isOptionalCppPgSqlTableImplementationNull();
		virtual const std::string& getOptionalCppPgSqlTableImplementationValue();
		virtual const std::string* getOptionalCppPgSqlTableImplementationReference();

		virtual bool isOptionalCppRamTableIncludeNull();
		virtual const std::string& getOptionalCppRamTableIncludeValue();
		virtual const std::string* getOptionalCppRamTableIncludeReference();

		virtual bool isOptionalCppRamTableMembersNull();
		virtual const std::string& getOptionalCppRamTableMembersValue();
		virtual const std::string* getOptionalCppRamTableMembersReference();

		virtual bool isOptionalCppRamTableImplementationNull();
		virtual const std::string& getOptionalCppRamTableImplementationValue();
		virtual const std::string* getOptionalCppRamTableImplementationReference();

		virtual bool isOptionalCppSaxLoaderIncludeNull();
		virtual const std::string& getOptionalCppSaxLoaderIncludeValue();
		virtual const std::string* getOptionalCppSaxLoaderIncludeReference();

		virtual bool isOptionalCppSaxLoaderStartElementNull();
		virtual const std::string& getOptionalCppSaxLoaderStartElementValue();
		virtual const std::string* getOptionalCppSaxLoaderStartElementReference();

		virtual bool isOptionalCppSaxLoaderEndElementNull();
		virtual const std::string& getOptionalCppSaxLoaderEndElementValue();
		virtual const std::string* getOptionalCppSaxLoaderEndElementReference();

		virtual bool isOptionalCppXMsgTableIncludeNull();
		virtual const std::string& getOptionalCppXMsgTableIncludeValue();
		virtual const std::string* getOptionalCppXMsgTableIncludeReference();

		virtual bool isOptionalCppXMsgTableFormattersNull();
		virtual const std::string& getOptionalCppXMsgTableFormattersValue();
		virtual const std::string* getOptionalCppXMsgTableFormattersReference();

		virtual bool isOptionalCppXMsgRqstTableIncludeNull();
		virtual const std::string& getOptionalCppXMsgRqstTableIncludeValue();
		virtual const std::string* getOptionalCppXMsgRqstTableIncludeReference();

		virtual bool isOptionalCppXMsgRspnTableIncludeNull();
		virtual const std::string& getOptionalCppXMsgRspnTableIncludeValue();
		virtual const std::string* getOptionalCppXMsgRspnTableIncludeReference();

		virtual bool isOptionalCppXMsgClientTableIncludeNull();
		virtual const std::string& getOptionalCppXMsgClientTableIncludeValue();
		virtual const std::string* getOptionalCppXMsgClientTableIncludeReference();

		virtual bool isOptionalCppXMsgRqstTableBodyNull();
		virtual const std::string& getOptionalCppXMsgRqstTableBodyValue();
		virtual const std::string* getOptionalCppXMsgRqstTableBodyReference();

		virtual bool isOptionalCppXMsgRspnTableBodyNull();
		virtual const std::string& getOptionalCppXMsgRspnTableBodyValue();
		virtual const std::string* getOptionalCppXMsgRspnTableBodyReference();

		virtual bool isOptionalCppXMsgClientTableBodyNull();
		virtual const std::string& getOptionalCppXMsgClientTableBodyValue();
		virtual const std::string* getOptionalCppXMsgClientTableBodyReference();

		virtual bool isOptionalHppObjMembersNull();
		virtual const std::string& getOptionalHppObjMembersValue();
		virtual const std::string* getOptionalHppObjMembersReference();

		virtual bool isOptionalHppObjInterfaceNull();
		virtual const std::string& getOptionalHppObjInterfaceValue();
		virtual const std::string* getOptionalHppObjInterfaceReference();

		virtual bool isOptionalHppObjIncludeNull();
		virtual const std::string& getOptionalHppObjIncludeValue();
		virtual const std::string* getOptionalHppObjIncludeReference();

		virtual bool isOptionalHppObjImplementationNull();
		virtual const std::string& getOptionalHppObjImplementationValue();
		virtual const std::string* getOptionalHppObjImplementationReference();

		virtual bool isOptionalHppEditObjMembersNull();
		virtual const std::string& getOptionalHppEditObjMembersValue();
		virtual const std::string* getOptionalHppEditObjMembersReference();

		virtual bool isOptionalHppEditObjInterfaceNull();
		virtual const std::string& getOptionalHppEditObjInterfaceValue();
		virtual const std::string* getOptionalHppEditObjInterfaceReference();

		virtual bool isOptionalHppEditObjIncludeNull();
		virtual const std::string& getOptionalHppEditObjIncludeValue();
		virtual const std::string* getOptionalHppEditObjIncludeReference();

		virtual bool isOptionalHppEditObjImplementationNull();
		virtual const std::string& getOptionalHppEditObjImplementationValue();
		virtual const std::string* getOptionalHppEditObjImplementationReference();

		virtual bool isOptionalHppTableIncludeNull();
		virtual const std::string& getOptionalHppTableIncludeValue();
		virtual const std::string* getOptionalHppTableIncludeReference();

		virtual bool isOptionalHppTableMembersNull();
		virtual const std::string& getOptionalHppTableMembersValue();
		virtual const std::string* getOptionalHppTableMembersReference();

		virtual bool isOptionalHppTableInterfaceNull();
		virtual const std::string& getOptionalHppTableInterfaceValue();
		virtual const std::string* getOptionalHppTableInterfaceReference();

		virtual bool isOptionalHppTableImplementationNull();
		virtual const std::string& getOptionalHppTableImplementationValue();
		virtual const std::string* getOptionalHppTableImplementationReference();

		virtual bool isOptionalHppTableObjIncludeNull();
		virtual const std::string& getOptionalHppTableObjIncludeValue();
		virtual const std::string* getOptionalHppTableObjIncludeReference();

		virtual bool isOptionalHppTableObjMembersNull();
		virtual const std::string& getOptionalHppTableObjMembersValue();
		virtual const std::string* getOptionalHppTableObjMembersReference();

		virtual bool isOptionalHppTableObjInterfaceNull();
		virtual const std::string& getOptionalHppTableObjInterfaceValue();
		virtual const std::string* getOptionalHppTableObjInterfaceReference();

		virtual bool isOptionalHppTableObjImplementationNull();
		virtual const std::string& getOptionalHppTableObjImplementationValue();
		virtual const std::string* getOptionalHppTableObjImplementationReference();

		virtual bool isOptionalHppDb2LUWTableIncludeNull();
		virtual const std::string& getOptionalHppDb2LUWTableIncludeValue();
		virtual const std::string* getOptionalHppDb2LUWTableIncludeReference();

		virtual bool isOptionalHppDb2LUWTableMembersNull();
		virtual const std::string& getOptionalHppDb2LUWTableMembersValue();
		virtual const std::string* getOptionalHppDb2LUWTableMembersReference();

		virtual bool isOptionalHppDb2LUWTableImplementationNull();
		virtual const std::string& getOptionalHppDb2LUWTableImplementationValue();
		virtual const std::string* getOptionalHppDb2LUWTableImplementationReference();

		virtual bool isOptionalHppMSSqlTableIncludeNull();
		virtual const std::string& getOptionalHppMSSqlTableIncludeValue();
		virtual const std::string* getOptionalHppMSSqlTableIncludeReference();

		virtual bool isOptionalHppMSSqlTableMembersNull();
		virtual const std::string& getOptionalHppMSSqlTableMembersValue();
		virtual const std::string* getOptionalHppMSSqlTableMembersReference();

		virtual bool isOptionalHppMSSqlTableImplementationNull();
		virtual const std::string& getOptionalHppMSSqlTableImplementationValue();
		virtual const std::string* getOptionalHppMSSqlTableImplementationReference();

		virtual bool isOptionalHppMySqlTableIncludeNull();
		virtual const std::string& getOptionalHppMySqlTableIncludeValue();
		virtual const std::string* getOptionalHppMySqlTableIncludeReference();

		virtual bool isOptionalHppMySqlTableMembersNull();
		virtual const std::string& getOptionalHppMySqlTableMembersValue();
		virtual const std::string* getOptionalHppMySqlTableMembersReference();

		virtual bool isOptionalHppMySqlTableImplementationNull();
		virtual const std::string& getOptionalHppMySqlTableImplementationValue();
		virtual const std::string* getOptionalHppMySqlTableImplementationReference();

		virtual bool isOptionalHppOracleTableIncludeNull();
		virtual const std::string& getOptionalHppOracleTableIncludeValue();
		virtual const std::string* getOptionalHppOracleTableIncludeReference();

		virtual bool isOptionalHppOracleTableMembersNull();
		virtual const std::string& getOptionalHppOracleTableMembersValue();
		virtual const std::string* getOptionalHppOracleTableMembersReference();

		virtual bool isOptionalHppOracleTableImplementationNull();
		virtual const std::string& getOptionalHppOracleTableImplementationValue();
		virtual const std::string* getOptionalHppOracleTableImplementationReference();

		virtual bool isOptionalHppPgSqlTableIncludeNull();
		virtual const std::string& getOptionalHppPgSqlTableIncludeValue();
		virtual const std::string* getOptionalHppPgSqlTableIncludeReference();

		virtual bool isOptionalHppPgSqlTableMembersNull();
		virtual const std::string& getOptionalHppPgSqlTableMembersValue();
		virtual const std::string* getOptionalHppPgSqlTableMembersReference();

		virtual bool isOptionalHppPgSqlTableImplementationNull();
		virtual const std::string& getOptionalHppPgSqlTableImplementationValue();
		virtual const std::string* getOptionalHppPgSqlTableImplementationReference();

		virtual bool isOptionalHppRamTableIncludeNull();
		virtual const std::string& getOptionalHppRamTableIncludeValue();
		virtual const std::string* getOptionalHppRamTableIncludeReference();

		virtual bool isOptionalHppRamTableMembersNull();
		virtual const std::string& getOptionalHppRamTableMembersValue();
		virtual const std::string* getOptionalHppRamTableMembersReference();

		virtual bool isOptionalHppRamTableImplementationNull();
		virtual const std::string& getOptionalHppRamTableImplementationValue();
		virtual const std::string* getOptionalHppRamTableImplementationReference();

		virtual bool isOptionalHppSaxLoaderIncludeNull();
		virtual const std::string& getOptionalHppSaxLoaderIncludeValue();
		virtual const std::string* getOptionalHppSaxLoaderIncludeReference();

		virtual bool isOptionalHppSaxLoaderStartElementNull();
		virtual const std::string& getOptionalHppSaxLoaderStartElementValue();
		virtual const std::string* getOptionalHppSaxLoaderStartElementReference();

		virtual bool isOptionalHppSaxLoaderEndElementNull();
		virtual const std::string& getOptionalHppSaxLoaderEndElementValue();
		virtual const std::string* getOptionalHppSaxLoaderEndElementReference();

		virtual bool isOptionalHppXMsgTableIncludeNull();
		virtual const std::string& getOptionalHppXMsgTableIncludeValue();
		virtual const std::string* getOptionalHppXMsgTableIncludeReference();

		virtual bool isOptionalHppXMsgTableFormattersNull();
		virtual const std::string& getOptionalHppXMsgTableFormattersValue();
		virtual const std::string* getOptionalHppXMsgTableFormattersReference();

		virtual bool isOptionalHppXMsgRqstTableIncludeNull();
		virtual const std::string& getOptionalHppXMsgRqstTableIncludeValue();
		virtual const std::string* getOptionalHppXMsgRqstTableIncludeReference();

		virtual bool isOptionalHppXMsgRspnTableIncludeNull();
		virtual const std::string& getOptionalHppXMsgRspnTableIncludeValue();
		virtual const std::string* getOptionalHppXMsgRspnTableIncludeReference();

		virtual bool isOptionalHppXMsgClientTableIncludeNull();
		virtual const std::string& getOptionalHppXMsgClientTableIncludeValue();
		virtual const std::string* getOptionalHppXMsgClientTableIncludeReference();

		virtual bool isOptionalHppXMsgRqstTableBodyNull();
		virtual const std::string& getOptionalHppXMsgRqstTableBodyValue();
		virtual const std::string* getOptionalHppXMsgRqstTableBodyReference();

		virtual bool isOptionalHppXMsgRspnTableBodyNull();
		virtual const std::string& getOptionalHppXMsgRspnTableBodyValue();
		virtual const std::string* getOptionalHppXMsgRspnTableBodyReference();

		virtual bool isOptionalHppXMsgClientTableBodyNull();
		virtual const std::string& getOptionalHppXMsgClientTableBodyValue();
		virtual const std::string* getOptionalHppXMsgClientTableBodyReference();

		virtual bool isOptionalCsObjMembersNull();
		virtual const std::string& getOptionalCsObjMembersValue();
		virtual const std::string* getOptionalCsObjMembersReference();

		virtual bool isOptionalCsObjInterfaceNull();
		virtual const std::string& getOptionalCsObjInterfaceValue();
		virtual const std::string* getOptionalCsObjInterfaceReference();

		virtual bool isOptionalCsObjUsingNull();
		virtual const std::string& getOptionalCsObjUsingValue();
		virtual const std::string* getOptionalCsObjUsingReference();

		virtual bool isOptionalCsObjImplementationNull();
		virtual const std::string& getOptionalCsObjImplementationValue();
		virtual const std::string* getOptionalCsObjImplementationReference();

		virtual bool isOptionalCsEditObjMembersNull();
		virtual const std::string& getOptionalCsEditObjMembersValue();
		virtual const std::string* getOptionalCsEditObjMembersReference();

		virtual bool isOptionalCsEditObjInterfaceNull();
		virtual const std::string& getOptionalCsEditObjInterfaceValue();
		virtual const std::string* getOptionalCsEditObjInterfaceReference();

		virtual bool isOptionalCsEditObjUsingNull();
		virtual const std::string& getOptionalCsEditObjUsingValue();
		virtual const std::string* getOptionalCsEditObjUsingReference();

		virtual bool isOptionalCsEditObjImplementationNull();
		virtual const std::string& getOptionalCsEditObjImplementationValue();
		virtual const std::string* getOptionalCsEditObjImplementationReference();

		virtual bool isOptionalCsTableUsingNull();
		virtual const std::string& getOptionalCsTableUsingValue();
		virtual const std::string* getOptionalCsTableUsingReference();

		virtual bool isOptionalCsTableMembersNull();
		virtual const std::string& getOptionalCsTableMembersValue();
		virtual const std::string* getOptionalCsTableMembersReference();

		virtual bool isOptionalCsTableInterfaceNull();
		virtual const std::string& getOptionalCsTableInterfaceValue();
		virtual const std::string* getOptionalCsTableInterfaceReference();

		virtual bool isOptionalCsTableImplementationNull();
		virtual const std::string& getOptionalCsTableImplementationValue();
		virtual const std::string* getOptionalCsTableImplementationReference();

		virtual bool isOptionalCsTableObjUsingNull();
		virtual const std::string& getOptionalCsTableObjUsingValue();
		virtual const std::string* getOptionalCsTableObjUsingReference();

		virtual bool isOptionalCsTableObjMembersNull();
		virtual const std::string& getOptionalCsTableObjMembersValue();
		virtual const std::string* getOptionalCsTableObjMembersReference();

		virtual bool isOptionalCsTableObjInterfaceNull();
		virtual const std::string& getOptionalCsTableObjInterfaceValue();
		virtual const std::string* getOptionalCsTableObjInterfaceReference();

		virtual bool isOptionalCsTableObjImplementationNull();
		virtual const std::string& getOptionalCsTableObjImplementationValue();
		virtual const std::string* getOptionalCsTableObjImplementationReference();

		virtual bool isOptionalCsDb2LUWTableUsingNull();
		virtual const std::string& getOptionalCsDb2LUWTableUsingValue();
		virtual const std::string* getOptionalCsDb2LUWTableUsingReference();

		virtual bool isOptionalCsDb2LUWTableMembersNull();
		virtual const std::string& getOptionalCsDb2LUWTableMembersValue();
		virtual const std::string* getOptionalCsDb2LUWTableMembersReference();

		virtual bool isOptionalCsDb2LUWTableImplementationNull();
		virtual const std::string& getOptionalCsDb2LUWTableImplementationValue();
		virtual const std::string* getOptionalCsDb2LUWTableImplementationReference();

		virtual bool isOptionalCsMSSqlTableUsingNull();
		virtual const std::string& getOptionalCsMSSqlTableUsingValue();
		virtual const std::string* getOptionalCsMSSqlTableUsingReference();

		virtual bool isOptionalCsMSSqlTableMembersNull();
		virtual const std::string& getOptionalCsMSSqlTableMembersValue();
		virtual const std::string* getOptionalCsMSSqlTableMembersReference();

		virtual bool isOptionalCsMSSqlTableImplementationNull();
		virtual const std::string& getOptionalCsMSSqlTableImplementationValue();
		virtual const std::string* getOptionalCsMSSqlTableImplementationReference();

		virtual bool isOptionalCsMySqlTableUsingNull();
		virtual const std::string& getOptionalCsMySqlTableUsingValue();
		virtual const std::string* getOptionalCsMySqlTableUsingReference();

		virtual bool isOptionalCsMySqlTableMembersNull();
		virtual const std::string& getOptionalCsMySqlTableMembersValue();
		virtual const std::string* getOptionalCsMySqlTableMembersReference();

		virtual bool isOptionalCsMySqlTableImplementationNull();
		virtual const std::string& getOptionalCsMySqlTableImplementationValue();
		virtual const std::string* getOptionalCsMySqlTableImplementationReference();

		virtual bool isOptionalCsOracleTableUsingNull();
		virtual const std::string& getOptionalCsOracleTableUsingValue();
		virtual const std::string* getOptionalCsOracleTableUsingReference();

		virtual bool isOptionalCsOracleTableMembersNull();
		virtual const std::string& getOptionalCsOracleTableMembersValue();
		virtual const std::string* getOptionalCsOracleTableMembersReference();

		virtual bool isOptionalCsOracleTableImplementationNull();
		virtual const std::string& getOptionalCsOracleTableImplementationValue();
		virtual const std::string* getOptionalCsOracleTableImplementationReference();

		virtual bool isOptionalCsPgSqlTableUsingNull();
		virtual const std::string& getOptionalCsPgSqlTableUsingValue();
		virtual const std::string* getOptionalCsPgSqlTableUsingReference();

		virtual bool isOptionalCsPgSqlTableMembersNull();
		virtual const std::string& getOptionalCsPgSqlTableMembersValue();
		virtual const std::string* getOptionalCsPgSqlTableMembersReference();

		virtual bool isOptionalCsPgSqlTableImplementationNull();
		virtual const std::string& getOptionalCsPgSqlTableImplementationValue();
		virtual const std::string* getOptionalCsPgSqlTableImplementationReference();

		virtual bool isOptionalCsRamTableUsingNull();
		virtual const std::string& getOptionalCsRamTableUsingValue();
		virtual const std::string* getOptionalCsRamTableUsingReference();

		virtual bool isOptionalCsRamTableMembersNull();
		virtual const std::string& getOptionalCsRamTableMembersValue();
		virtual const std::string* getOptionalCsRamTableMembersReference();

		virtual bool isOptionalCsRamTableImplementationNull();
		virtual const std::string& getOptionalCsRamTableImplementationValue();
		virtual const std::string* getOptionalCsRamTableImplementationReference();

		virtual bool isOptionalCsSaxLoaderUsingNull();
		virtual const std::string& getOptionalCsSaxLoaderUsingValue();
		virtual const std::string* getOptionalCsSaxLoaderUsingReference();

		virtual bool isOptionalCsSaxLoaderStartElementNull();
		virtual const std::string& getOptionalCsSaxLoaderStartElementValue();
		virtual const std::string* getOptionalCsSaxLoaderStartElementReference();

		virtual bool isOptionalCsSaxLoaderEndElementNull();
		virtual const std::string& getOptionalCsSaxLoaderEndElementValue();
		virtual const std::string* getOptionalCsSaxLoaderEndElementReference();

		virtual bool isOptionalCsXMsgTableUsingNull();
		virtual const std::string& getOptionalCsXMsgTableUsingValue();
		virtual const std::string* getOptionalCsXMsgTableUsingReference();

		virtual bool isOptionalCsXMsgTableFormattersNull();
		virtual const std::string& getOptionalCsXMsgTableFormattersValue();
		virtual const std::string* getOptionalCsXMsgTableFormattersReference();

		virtual bool isOptionalCsXMsgRqstTableUsingNull();
		virtual const std::string& getOptionalCsXMsgRqstTableUsingValue();
		virtual const std::string* getOptionalCsXMsgRqstTableUsingReference();

		virtual bool isOptionalCsXMsgRspnTableUsingNull();
		virtual const std::string& getOptionalCsXMsgRspnTableUsingValue();
		virtual const std::string* getOptionalCsXMsgRspnTableUsingReference();

		virtual bool isOptionalCsXMsgClientTableUsingNull();
		virtual const std::string& getOptionalCsXMsgClientTableUsingValue();
		virtual const std::string* getOptionalCsXMsgClientTableUsingReference();

		virtual bool isOptionalCsXMsgRqstTableBodyNull();
		virtual const std::string& getOptionalCsXMsgRqstTableBodyValue();
		virtual const std::string* getOptionalCsXMsgRqstTableBodyReference();

		virtual bool isOptionalCsXMsgRspnTableBodyNull();
		virtual const std::string& getOptionalCsXMsgRspnTableBodyValue();
		virtual const std::string* getOptionalCsXMsgRspnTableBodyReference();

		virtual bool isOptionalCsXMsgClientTableBodyNull();
		virtual const std::string& getOptionalCsXMsgClientTableBodyValue();
		virtual const std::string* getOptionalCsXMsgClientTableBodyReference();

		virtual cfbam::ICFBamSchemaDefObj* getRequiredContainerSchemaDef( bool forceRead = false );

		virtual cfbam::ICFBamSchemaDefObj* getOptionalLookupDefSchema( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamRelationObj*> getOptionalComponentsRelation( bool forceRead = false );

		virtual cfbam::ICFBamIndexObj* getOptionalLookupLookupIndex( bool forceRead = false );

		virtual cfbam::ICFBamIndexObj* getOptionalLookupAltIndex( bool forceRead = false );

		virtual cfbam::ICFBamTableObj* getOptionalLookupQualTable( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamIndexObj*> getOptionalComponentsIndex( bool forceRead = false );

		virtual cfbam::ICFBamIndexObj* getOptionalLookupPrimaryIndex( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamValueObj*> getOptionalComponentsColumns( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamRelationObj*> getOptionalChildrenReverseRelations( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamChainObj*> getOptionalComponentsChains( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamDelTopDepObj*> getOptionalComponentsDelDep( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamClearTopDepObj*> getOptionalComponentsClearDep( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamId16GenObj*> getOptionalChildrenDispId16Gen( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamId32GenObj*> getOptionalChildrenDispId32Gen( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamId64GenObj*> getOptionalChildrenDispId64Gen( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamServerMethodObj*> getOptionalComponentsServerMethods( bool forceRead = false );

		CFBamTableObj();
		CFBamTableObj( cfbam::ICFBamSchemaObj* argSchema );
		virtual const std::string& getClassName() const;
		virtual ~CFBamTableObj();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t value ) const;

		virtual std::string toString();
		virtual cfbam::CFBamScopeBuff* getBuff();
		virtual void setBuff( cfbam::CFBamScopeBuff* value );

		inline cfbam::CFBamTableBuff* getTableBuff() {
			if( buff == NULL ) {
				getBuff();
			}
			return( static_cast<cfbam::CFBamTableBuff*>( buff ) );
		};

		inline cfbam::CFBamTableBuff* getTableEditBuff() {
			if( buff == NULL ) {
				getBuff();
			}
			return( dynamic_cast<cfbam::CFBamTableBuff*>( buff ) );
		};

		virtual std::string getObjName();

		virtual const std::string getGenDefName();

		virtual cflib::ICFLibAnyObj* getScope();
		virtual cflib::ICFLibAnyObj* getObjScope();

		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClass );

		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClass, const std::string& objName );

		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName );

		virtual std::string getObjQualifiedName();

		virtual std::string getObjFullName();

		virtual cfbam::ICFBamScopeObj* realize();

		virtual cfbam::ICFBamScopeObj* read( bool forceRead = false );

		virtual cfbam::ICFBamScopeEditObj* beginEdit();

		virtual cfbam::ICFBamTableEditObj* getTableEdit();

		public:
			virtual std::vector<cfbam::ICFBamRelationObj*> getOnlyOwnerRelations();
			virtual std::vector<cfbam::ICFBamRelationObj*> getContainerOwnerRelations();
			virtual cfbam::ICFBamRelationObj* getContainerRelation();
			virtual cfbam::ICFBamRelationObj* getInheritedContainerRelation();
			virtual cfbam::ICFBamRelationObj* getOwnerRelation();
			virtual cfbam::ICFBamRelationObj* getInheritedOwnerRelation();
			virtual std::vector<cfbam::ICFBamRelationObj*> getOwnerLookupRelations();
			virtual std::vector<cfbam::ICFBamRelationObj*> getOwnerContainerNamedLookupChainRelations();
			virtual std::vector<cfbam::ICFBamAtomObj*> getChildrenAtoms();
			virtual cfbam::ICFBamRelationObj* getSuperClassRelation();
			virtual std::vector<cfbam::ICFBamRelationObj*> getSubClassRelations();
			virtual cfbam::ICFBamIndexObj* getPrimaryKeyIndex();
			virtual std::vector<cfbam::ICFBamRelationObj*> getFactoryOwnerRelations();
			virtual std::vector<cfbam::ICFBamIndexObj*> getInheritedIndexes();
			virtual std::vector<cfbam::ICFBamIndexObj*> getChildrenIndexes();
			virtual std::vector<cfbam::ICFBamRelationObj*> getInheritedRelations();
			virtual std::vector<cfbam::ICFBamRelationObj*> getChildrenRelations();

	};
}
