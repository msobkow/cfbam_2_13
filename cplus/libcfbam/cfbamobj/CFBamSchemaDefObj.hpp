#pragma once

// Description: C++18 base object instance specification for CFBam SchemaDef.

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
#include <cfbamobj/ICFBamSchemaDefObj.hpp>
#include <cfbamobj/ICFBamSchemaObj.hpp>

namespace cfbam {

	class CFBamSchemaDefObj
	: public CFBamScopeObj,
	  public virtual ICFBamSchemaDefObj
	{
	protected:
	public:
		static const std::string CLASS_NAME;
		static const classcode_t CLASS_CODE;

		virtual const int64_t getRequiredMinorVersionId();
		virtual const int64_t* getRequiredMinorVersionIdReference();

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

		virtual const std::string& getRequiredCopyrightPeriod();
		virtual const std::string* getRequiredCopyrightPeriodReference();

		virtual const std::string& getRequiredCopyrightHolder();
		virtual const std::string* getRequiredCopyrightHolderReference();

		virtual const std::string& getRequiredAuthorEMail();
		virtual const std::string* getRequiredAuthorEMailReference();

		virtual const std::string& getRequiredProjectURL();
		virtual const std::string* getRequiredProjectURLReference();

		virtual const std::string& getRequiredPublishURI();
		virtual const std::string* getRequiredPublishURIReference();

		virtual const std::string& getRequiredCommonLicenseCode();
		virtual const std::string* getRequiredCommonLicenseCodeReference();

		virtual const std::string& getRequiredCommonLicenseName();
		virtual const std::string* getRequiredCommonLicenseNameReference();

		virtual const std::string& getRequiredCommonLicenseText();
		virtual const std::string* getRequiredCommonLicenseTextReference();

		virtual bool isOptionalClientXFaceLicenseCodeNull();
		virtual const std::string& getOptionalClientXFaceLicenseCodeValue();
		virtual const std::string* getOptionalClientXFaceLicenseCodeReference();

		virtual bool isOptionalClientXFaceLicenseNameNull();
		virtual const std::string& getOptionalClientXFaceLicenseNameValue();
		virtual const std::string* getOptionalClientXFaceLicenseNameReference();

		virtual bool isOptionalClientXFaceLicenseTextNull();
		virtual const std::string& getOptionalClientXFaceLicenseTextValue();
		virtual const std::string* getOptionalClientXFaceLicenseTextReference();

		virtual bool isOptionalClientImplLicenseCodeNull();
		virtual const std::string& getOptionalClientImplLicenseCodeValue();
		virtual const std::string* getOptionalClientImplLicenseCodeReference();

		virtual bool isOptionalClientImplLicenseNameNull();
		virtual const std::string& getOptionalClientImplLicenseNameValue();
		virtual const std::string* getOptionalClientImplLicenseNameReference();

		virtual bool isOptionalClientImplLicenseTextNull();
		virtual const std::string& getOptionalClientImplLicenseTextValue();
		virtual const std::string* getOptionalClientImplLicenseTextReference();

		virtual bool isOptionalServerXFaceLicenseCodeNull();
		virtual const std::string& getOptionalServerXFaceLicenseCodeValue();
		virtual const std::string* getOptionalServerXFaceLicenseCodeReference();

		virtual bool isOptionalServerXFaceLicenseNameNull();
		virtual const std::string& getOptionalServerXFaceLicenseNameValue();
		virtual const std::string* getOptionalServerXFaceLicenseNameReference();

		virtual bool isOptionalServerXFaceLicenseTextNull();
		virtual const std::string& getOptionalServerXFaceLicenseTextValue();
		virtual const std::string* getOptionalServerXFaceLicenseTextReference();

		virtual bool isOptionalServerImplLicenseCodeNull();
		virtual const std::string& getOptionalServerImplLicenseCodeValue();
		virtual const std::string* getOptionalServerImplLicenseCodeReference();

		virtual bool isOptionalServerImplLicenseNameNull();
		virtual const std::string& getOptionalServerImplLicenseNameValue();
		virtual const std::string* getOptionalServerImplLicenseNameReference();

		virtual bool isOptionalServerImplLicenseTextNull();
		virtual const std::string& getOptionalServerImplLicenseTextValue();
		virtual const std::string* getOptionalServerImplLicenseTextReference();

		virtual bool isOptionalJSchemaObjImportNull();
		virtual const std::string& getOptionalJSchemaObjImportValue();
		virtual const std::string* getOptionalJSchemaObjImportReference();

		virtual bool isOptionalJSchemaObjInterfaceNull();
		virtual const std::string& getOptionalJSchemaObjInterfaceValue();
		virtual const std::string* getOptionalJSchemaObjInterfaceReference();

		virtual bool isOptionalJSchemaObjMembersNull();
		virtual const std::string& getOptionalJSchemaObjMembersValue();
		virtual const std::string* getOptionalJSchemaObjMembersReference();

		virtual bool isOptionalJSchemaObjImplementationNull();
		virtual const std::string& getOptionalJSchemaObjImplementationValue();
		virtual const std::string* getOptionalJSchemaObjImplementationReference();

		virtual bool isOptionalJDb2LUWSchemaObjMembersNull();
		virtual const std::string& getOptionalJDb2LUWSchemaObjMembersValue();
		virtual const std::string* getOptionalJDb2LUWSchemaObjMembersReference();

		virtual bool isOptionalJDb2LUWSchemaObjImplNull();
		virtual const std::string& getOptionalJDb2LUWSchemaObjImplValue();
		virtual const std::string* getOptionalJDb2LUWSchemaObjImplReference();

		virtual bool isOptionalJDb2LUWSchemaObjImportNull();
		virtual const std::string& getOptionalJDb2LUWSchemaObjImportValue();
		virtual const std::string* getOptionalJDb2LUWSchemaObjImportReference();

		virtual bool isOptionalJMSSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalJMSSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalJMSSqlSchemaObjMembersReference();

		virtual bool isOptionalJMSSqlSchemaObjImplNull();
		virtual const std::string& getOptionalJMSSqlSchemaObjImplValue();
		virtual const std::string* getOptionalJMSSqlSchemaObjImplReference();

		virtual bool isOptionalJMSSqlSchemaObjImportNull();
		virtual const std::string& getOptionalJMSSqlSchemaObjImportValue();
		virtual const std::string* getOptionalJMSSqlSchemaObjImportReference();

		virtual bool isOptionalJMySqlSchemaObjMembersNull();
		virtual const std::string& getOptionalJMySqlSchemaObjMembersValue();
		virtual const std::string* getOptionalJMySqlSchemaObjMembersReference();

		virtual bool isOptionalJMySqlSchemaObjImplNull();
		virtual const std::string& getOptionalJMySqlSchemaObjImplValue();
		virtual const std::string* getOptionalJMySqlSchemaObjImplReference();

		virtual bool isOptionalJMySqlSchemaObjImportNull();
		virtual const std::string& getOptionalJMySqlSchemaObjImportValue();
		virtual const std::string* getOptionalJMySqlSchemaObjImportReference();

		virtual bool isOptionalJOracleSchemaObjMembersNull();
		virtual const std::string& getOptionalJOracleSchemaObjMembersValue();
		virtual const std::string* getOptionalJOracleSchemaObjMembersReference();

		virtual bool isOptionalJOracleSchemaObjImplNull();
		virtual const std::string& getOptionalJOracleSchemaObjImplValue();
		virtual const std::string* getOptionalJOracleSchemaObjImplReference();

		virtual bool isOptionalJOracleSchemaObjImportNull();
		virtual const std::string& getOptionalJOracleSchemaObjImportValue();
		virtual const std::string* getOptionalJOracleSchemaObjImportReference();

		virtual bool isOptionalJPgSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalJPgSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalJPgSqlSchemaObjMembersReference();

		virtual bool isOptionalJPgSqlSchemaObjImplNull();
		virtual const std::string& getOptionalJPgSqlSchemaObjImplValue();
		virtual const std::string* getOptionalJPgSqlSchemaObjImplReference();

		virtual bool isOptionalJPgSqlSchemaObjImportNull();
		virtual const std::string& getOptionalJPgSqlSchemaObjImportValue();
		virtual const std::string* getOptionalJPgSqlSchemaObjImportReference();

		virtual bool isOptionalJRamSchemaObjMembersNull();
		virtual const std::string& getOptionalJRamSchemaObjMembersValue();
		virtual const std::string* getOptionalJRamSchemaObjMembersReference();

		virtual bool isOptionalJRamSchemaObjImplNull();
		virtual const std::string& getOptionalJRamSchemaObjImplValue();
		virtual const std::string* getOptionalJRamSchemaObjImplReference();

		virtual bool isOptionalJRamSchemaObjImportNull();
		virtual const std::string& getOptionalJRamSchemaObjImportValue();
		virtual const std::string* getOptionalJRamSchemaObjImportReference();

		virtual bool isOptionalJXMsgSchemaImportNull();
		virtual const std::string& getOptionalJXMsgSchemaImportValue();
		virtual const std::string* getOptionalJXMsgSchemaImportReference();

		virtual bool isOptionalJXMsgSchemaFormattersNull();
		virtual const std::string& getOptionalJXMsgSchemaFormattersValue();
		virtual const std::string* getOptionalJXMsgSchemaFormattersReference();

		virtual bool isOptionalJXMsgClientSchemaImportNull();
		virtual const std::string& getOptionalJXMsgClientSchemaImportValue();
		virtual const std::string* getOptionalJXMsgClientSchemaImportReference();

		virtual bool isOptionalJXMsgClientSchemaBodyNull();
		virtual const std::string& getOptionalJXMsgClientSchemaBodyValue();
		virtual const std::string* getOptionalJXMsgClientSchemaBodyReference();

		virtual bool isOptionalJXMsgRqstSchemaBodyNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaBodyValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaBodyReference();

		virtual bool isOptionalJXMsgRqstSchemaImportNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaImportValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaImportReference();

		virtual bool isOptionalJXMsgRqstSchemaWireParsersNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaWireParsersValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaWireParsersReference();

		virtual bool isOptionalJXMsgRqstSchemaXsdSpecNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaXsdSpecValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaXsdSpecReference();

		virtual bool isOptionalJXMsgRqstSchemaXsdElementListNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaXsdElementListValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaXsdElementListReference();

		virtual bool isOptionalJXMsgRspnSchemaBodyNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaBodyValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaBodyReference();

		virtual bool isOptionalJXMsgRspnSchemaImportNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaImportValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaImportReference();

		virtual bool isOptionalJXMsgRspnSchemaWireParsersNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaWireParsersValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaWireParsersReference();

		virtual bool isOptionalJXMsgRspnSchemaXsdElementListNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaXsdElementListValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaXsdElementListReference();

		virtual bool isOptionalJXMsgRspnSchemaXsdSpecNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaXsdSpecValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaXsdSpecReference();

		virtual bool isOptionalCppSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppSchemaObjIncludeReference();

		virtual bool isOptionalCppSchemaObjInterfaceNull();
		virtual const std::string& getOptionalCppSchemaObjInterfaceValue();
		virtual const std::string* getOptionalCppSchemaObjInterfaceReference();

		virtual bool isOptionalCppSchemaObjMembersNull();
		virtual const std::string& getOptionalCppSchemaObjMembersValue();
		virtual const std::string* getOptionalCppSchemaObjMembersReference();

		virtual bool isOptionalCppSchemaObjImplementationNull();
		virtual const std::string& getOptionalCppSchemaObjImplementationValue();
		virtual const std::string* getOptionalCppSchemaObjImplementationReference();

		virtual bool isOptionalCppDb2LUWSchemaObjMembersNull();
		virtual const std::string& getOptionalCppDb2LUWSchemaObjMembersValue();
		virtual const std::string* getOptionalCppDb2LUWSchemaObjMembersReference();

		virtual bool isOptionalCppDb2LUWSchemaObjImplNull();
		virtual const std::string& getOptionalCppDb2LUWSchemaObjImplValue();
		virtual const std::string* getOptionalCppDb2LUWSchemaObjImplReference();

		virtual bool isOptionalCppDb2LUWSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppDb2LUWSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppDb2LUWSchemaObjIncludeReference();

		virtual bool isOptionalCppMSSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCppMSSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCppMSSqlSchemaObjMembersReference();

		virtual bool isOptionalCppMSSqlSchemaObjImplNull();
		virtual const std::string& getOptionalCppMSSqlSchemaObjImplValue();
		virtual const std::string* getOptionalCppMSSqlSchemaObjImplReference();

		virtual bool isOptionalCppMSSqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppMSSqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppMSSqlSchemaObjIncludeReference();

		virtual bool isOptionalCppMySqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCppMySqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCppMySqlSchemaObjMembersReference();

		virtual bool isOptionalCppMySqlSchemaObjImplNull();
		virtual const std::string& getOptionalCppMySqlSchemaObjImplValue();
		virtual const std::string* getOptionalCppMySqlSchemaObjImplReference();

		virtual bool isOptionalCppMySqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppMySqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppMySqlSchemaObjIncludeReference();

		virtual bool isOptionalCppOracleSchemaObjMembersNull();
		virtual const std::string& getOptionalCppOracleSchemaObjMembersValue();
		virtual const std::string* getOptionalCppOracleSchemaObjMembersReference();

		virtual bool isOptionalCppOracleSchemaObjImplNull();
		virtual const std::string& getOptionalCppOracleSchemaObjImplValue();
		virtual const std::string* getOptionalCppOracleSchemaObjImplReference();

		virtual bool isOptionalCppOracleSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppOracleSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppOracleSchemaObjIncludeReference();

		virtual bool isOptionalCppPgSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCppPgSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCppPgSqlSchemaObjMembersReference();

		virtual bool isOptionalCppPgSqlSchemaObjImplNull();
		virtual const std::string& getOptionalCppPgSqlSchemaObjImplValue();
		virtual const std::string* getOptionalCppPgSqlSchemaObjImplReference();

		virtual bool isOptionalCppPgSqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppPgSqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppPgSqlSchemaObjIncludeReference();

		virtual bool isOptionalCppRamSchemaObjMembersNull();
		virtual const std::string& getOptionalCppRamSchemaObjMembersValue();
		virtual const std::string* getOptionalCppRamSchemaObjMembersReference();

		virtual bool isOptionalCppRamSchemaObjImplNull();
		virtual const std::string& getOptionalCppRamSchemaObjImplValue();
		virtual const std::string* getOptionalCppRamSchemaObjImplReference();

		virtual bool isOptionalCppRamSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppRamSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppRamSchemaObjIncludeReference();

		virtual bool isOptionalCppXMsgSchemaIncludeNull();
		virtual const std::string& getOptionalCppXMsgSchemaIncludeValue();
		virtual const std::string* getOptionalCppXMsgSchemaIncludeReference();

		virtual bool isOptionalCppXMsgSchemaFormattersNull();
		virtual const std::string& getOptionalCppXMsgSchemaFormattersValue();
		virtual const std::string* getOptionalCppXMsgSchemaFormattersReference();

		virtual bool isOptionalCppXMsgClientSchemaIncludeNull();
		virtual const std::string& getOptionalCppXMsgClientSchemaIncludeValue();
		virtual const std::string* getOptionalCppXMsgClientSchemaIncludeReference();

		virtual bool isOptionalCppXMsgClientSchemaBodyNull();
		virtual const std::string& getOptionalCppXMsgClientSchemaBodyValue();
		virtual const std::string* getOptionalCppXMsgClientSchemaBodyReference();

		virtual bool isOptionalCppXMsgRqstSchemaBodyNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaBodyValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaBodyReference();

		virtual bool isOptionalCppXMsgRqstSchemaIncludeNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaIncludeValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaIncludeReference();

		virtual bool isOptionalCppXMsgRqstSchemaWireParsersNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaWireParsersValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaWireParsersReference();

		virtual bool isOptionalCppXMsgRqstSchemaXsdSpecNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaXsdSpecValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaXsdSpecReference();

		virtual bool isOptionalCppXMsgRqstSchemaXsdElementListNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaXsdElementListValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaXsdElementListReference();

		virtual bool isOptionalCppXMsgRspnSchemaBodyNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaBodyValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaBodyReference();

		virtual bool isOptionalCppXMsgRspnSchemaIncludeNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaIncludeValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaIncludeReference();

		virtual bool isOptionalCppXMsgRspnSchemaWireParsersNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaWireParsersValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaWireParsersReference();

		virtual bool isOptionalCppXMsgRspnSchemaXsdElementListNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaXsdElementListValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaXsdElementListReference();

		virtual bool isOptionalCppXMsgRspnSchemaXsdSpecNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaXsdSpecValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaXsdSpecReference();

		virtual bool isOptionalHppSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppSchemaObjIncludeReference();

		virtual bool isOptionalHppSchemaObjInterfaceNull();
		virtual const std::string& getOptionalHppSchemaObjInterfaceValue();
		virtual const std::string* getOptionalHppSchemaObjInterfaceReference();

		virtual bool isOptionalHppSchemaObjMembersNull();
		virtual const std::string& getOptionalHppSchemaObjMembersValue();
		virtual const std::string* getOptionalHppSchemaObjMembersReference();

		virtual bool isOptionalHppSchemaObjImplementationNull();
		virtual const std::string& getOptionalHppSchemaObjImplementationValue();
		virtual const std::string* getOptionalHppSchemaObjImplementationReference();

		virtual bool isOptionalHppDb2LUWSchemaObjMembersNull();
		virtual const std::string& getOptionalHppDb2LUWSchemaObjMembersValue();
		virtual const std::string* getOptionalHppDb2LUWSchemaObjMembersReference();

		virtual bool isOptionalHppDb2LUWSchemaObjImplNull();
		virtual const std::string& getOptionalHppDb2LUWSchemaObjImplValue();
		virtual const std::string* getOptionalHppDb2LUWSchemaObjImplReference();

		virtual bool isOptionalHppDb2LUWSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppDb2LUWSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppDb2LUWSchemaObjIncludeReference();

		virtual bool isOptionalHppMSSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalHppMSSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalHppMSSqlSchemaObjMembersReference();

		virtual bool isOptionalHppMSSqlSchemaObjImplNull();
		virtual const std::string& getOptionalHppMSSqlSchemaObjImplValue();
		virtual const std::string* getOptionalHppMSSqlSchemaObjImplReference();

		virtual bool isOptionalHppMSSqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppMSSqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppMSSqlSchemaObjIncludeReference();

		virtual bool isOptionalHppMySqlSchemaObjMembersNull();
		virtual const std::string& getOptionalHppMySqlSchemaObjMembersValue();
		virtual const std::string* getOptionalHppMySqlSchemaObjMembersReference();

		virtual bool isOptionalHppMySqlSchemaObjImplNull();
		virtual const std::string& getOptionalHppMySqlSchemaObjImplValue();
		virtual const std::string* getOptionalHppMySqlSchemaObjImplReference();

		virtual bool isOptionalHppMySqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppMySqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppMySqlSchemaObjIncludeReference();

		virtual bool isOptionalHppOracleSchemaObjMembersNull();
		virtual const std::string& getOptionalHppOracleSchemaObjMembersValue();
		virtual const std::string* getOptionalHppOracleSchemaObjMembersReference();

		virtual bool isOptionalHppOracleSchemaObjImplNull();
		virtual const std::string& getOptionalHppOracleSchemaObjImplValue();
		virtual const std::string* getOptionalHppOracleSchemaObjImplReference();

		virtual bool isOptionalHppOracleSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppOracleSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppOracleSchemaObjIncludeReference();

		virtual bool isOptionalHppPgSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalHppPgSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalHppPgSqlSchemaObjMembersReference();

		virtual bool isOptionalHppPgSqlSchemaObjImplNull();
		virtual const std::string& getOptionalHppPgSqlSchemaObjImplValue();
		virtual const std::string* getOptionalHppPgSqlSchemaObjImplReference();

		virtual bool isOptionalHppPgSqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppPgSqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppPgSqlSchemaObjIncludeReference();

		virtual bool isOptionalHppRamSchemaObjMembersNull();
		virtual const std::string& getOptionalHppRamSchemaObjMembersValue();
		virtual const std::string* getOptionalHppRamSchemaObjMembersReference();

		virtual bool isOptionalHppRamSchemaObjImplNull();
		virtual const std::string& getOptionalHppRamSchemaObjImplValue();
		virtual const std::string* getOptionalHppRamSchemaObjImplReference();

		virtual bool isOptionalHppRamSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppRamSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppRamSchemaObjIncludeReference();

		virtual bool isOptionalHppXMsgSchemaIncludeNull();
		virtual const std::string& getOptionalHppXMsgSchemaIncludeValue();
		virtual const std::string* getOptionalHppXMsgSchemaIncludeReference();

		virtual bool isOptionalHppXMsgSchemaFormattersNull();
		virtual const std::string& getOptionalHppXMsgSchemaFormattersValue();
		virtual const std::string* getOptionalHppXMsgSchemaFormattersReference();

		virtual bool isOptionalHppXMsgClientSchemaIncludeNull();
		virtual const std::string& getOptionalHppXMsgClientSchemaIncludeValue();
		virtual const std::string* getOptionalHppXMsgClientSchemaIncludeReference();

		virtual bool isOptionalHppXMsgClientSchemaBodyNull();
		virtual const std::string& getOptionalHppXMsgClientSchemaBodyValue();
		virtual const std::string* getOptionalHppXMsgClientSchemaBodyReference();

		virtual bool isOptionalHppXMsgRqstSchemaBodyNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaBodyValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaBodyReference();

		virtual bool isOptionalHppXMsgRqstSchemaIncludeNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaIncludeValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaIncludeReference();

		virtual bool isOptionalHppXMsgRqstSchemaWireParsersNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaWireParsersValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaWireParsersReference();

		virtual bool isOptionalHppXMsgRqstSchemaXsdSpecNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaXsdSpecValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaXsdSpecReference();

		virtual bool isOptionalHppXMsgRqstSchemaXsdElementListNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaXsdElementListValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaXsdElementListReference();

		virtual bool isOptionalHppXMsgRspnSchemaBodyNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaBodyValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaBodyReference();

		virtual bool isOptionalHppXMsgRspnSchemaIncludeNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaIncludeValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaIncludeReference();

		virtual bool isOptionalHppXMsgRspnSchemaWireParsersNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaWireParsersValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaWireParsersReference();

		virtual bool isOptionalHppXMsgRspnSchemaXsdElementListNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaXsdElementListValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaXsdElementListReference();

		virtual bool isOptionalHppXMsgRspnSchemaXsdSpecNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaXsdSpecValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaXsdSpecReference();

		virtual bool isOptionalCsSchemaObjUsingNull();
		virtual const std::string& getOptionalCsSchemaObjUsingValue();
		virtual const std::string* getOptionalCsSchemaObjUsingReference();

		virtual bool isOptionalCsSchemaObjInterfaceNull();
		virtual const std::string& getOptionalCsSchemaObjInterfaceValue();
		virtual const std::string* getOptionalCsSchemaObjInterfaceReference();

		virtual bool isOptionalCsSchemaObjMembersNull();
		virtual const std::string& getOptionalCsSchemaObjMembersValue();
		virtual const std::string* getOptionalCsSchemaObjMembersReference();

		virtual bool isOptionalCsSchemaObjImplementationNull();
		virtual const std::string& getOptionalCsSchemaObjImplementationValue();
		virtual const std::string* getOptionalCsSchemaObjImplementationReference();

		virtual bool isOptionalCsDb2LUWSchemaObjMembersNull();
		virtual const std::string& getOptionalCsDb2LUWSchemaObjMembersValue();
		virtual const std::string* getOptionalCsDb2LUWSchemaObjMembersReference();

		virtual bool isOptionalCsDb2LUWSchemaObjImplNull();
		virtual const std::string& getOptionalCsDb2LUWSchemaObjImplValue();
		virtual const std::string* getOptionalCsDb2LUWSchemaObjImplReference();

		virtual bool isOptionalCsDb2LUWSchemaObjUsingNull();
		virtual const std::string& getOptionalCsDb2LUWSchemaObjUsingValue();
		virtual const std::string* getOptionalCsDb2LUWSchemaObjUsingReference();

		virtual bool isOptionalCsMSSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCsMSSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCsMSSqlSchemaObjMembersReference();

		virtual bool isOptionalCsMSSqlSchemaObjImplNull();
		virtual const std::string& getOptionalCsMSSqlSchemaObjImplValue();
		virtual const std::string* getOptionalCsMSSqlSchemaObjImplReference();

		virtual bool isOptionalCsMSSqlSchemaObjUsingNull();
		virtual const std::string& getOptionalCsMSSqlSchemaObjUsingValue();
		virtual const std::string* getOptionalCsMSSqlSchemaObjUsingReference();

		virtual bool isOptionalCsMySqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCsMySqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCsMySqlSchemaObjMembersReference();

		virtual bool isOptionalCsMySqlSchemaObjImplNull();
		virtual const std::string& getOptionalCsMySqlSchemaObjImplValue();
		virtual const std::string* getOptionalCsMySqlSchemaObjImplReference();

		virtual bool isOptionalCsMySqlSchemaObjUsingNull();
		virtual const std::string& getOptionalCsMySqlSchemaObjUsingValue();
		virtual const std::string* getOptionalCsMySqlSchemaObjUsingReference();

		virtual bool isOptionalCsOracleSchemaObjMembersNull();
		virtual const std::string& getOptionalCsOracleSchemaObjMembersValue();
		virtual const std::string* getOptionalCsOracleSchemaObjMembersReference();

		virtual bool isOptionalCsOracleSchemaObjImplNull();
		virtual const std::string& getOptionalCsOracleSchemaObjImplValue();
		virtual const std::string* getOptionalCsOracleSchemaObjImplReference();

		virtual bool isOptionalCsOracleSchemaObjUsingNull();
		virtual const std::string& getOptionalCsOracleSchemaObjUsingValue();
		virtual const std::string* getOptionalCsOracleSchemaObjUsingReference();

		virtual bool isOptionalCsPgSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCsPgSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCsPgSqlSchemaObjMembersReference();

		virtual bool isOptionalCsPgSqlSchemaObjImplNull();
		virtual const std::string& getOptionalCsPgSqlSchemaObjImplValue();
		virtual const std::string* getOptionalCsPgSqlSchemaObjImplReference();

		virtual bool isOptionalCsPgSqlSchemaObjUsingNull();
		virtual const std::string& getOptionalCsPgSqlSchemaObjUsingValue();
		virtual const std::string* getOptionalCsPgSqlSchemaObjUsingReference();

		virtual bool isOptionalCsRamSchemaObjMembersNull();
		virtual const std::string& getOptionalCsRamSchemaObjMembersValue();
		virtual const std::string* getOptionalCsRamSchemaObjMembersReference();

		virtual bool isOptionalCsRamSchemaObjImplNull();
		virtual const std::string& getOptionalCsRamSchemaObjImplValue();
		virtual const std::string* getOptionalCsRamSchemaObjImplReference();

		virtual bool isOptionalCsRamSchemaObjUsingNull();
		virtual const std::string& getOptionalCsRamSchemaObjUsingValue();
		virtual const std::string* getOptionalCsRamSchemaObjUsingReference();

		virtual bool isOptionalCsXMsgSchemaUsingNull();
		virtual const std::string& getOptionalCsXMsgSchemaUsingValue();
		virtual const std::string* getOptionalCsXMsgSchemaUsingReference();

		virtual bool isOptionalCsXMsgSchemaFormattersNull();
		virtual const std::string& getOptionalCsXMsgSchemaFormattersValue();
		virtual const std::string* getOptionalCsXMsgSchemaFormattersReference();

		virtual bool isOptionalCsXMsgClientSchemaUsingNull();
		virtual const std::string& getOptionalCsXMsgClientSchemaUsingValue();
		virtual const std::string* getOptionalCsXMsgClientSchemaUsingReference();

		virtual bool isOptionalCsXMsgClientSchemaBodyNull();
		virtual const std::string& getOptionalCsXMsgClientSchemaBodyValue();
		virtual const std::string* getOptionalCsXMsgClientSchemaBodyReference();

		virtual bool isOptionalCsXMsgRqstSchemaBodyNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaBodyValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaBodyReference();

		virtual bool isOptionalCsXMsgRqstSchemaUsingNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaUsingValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaUsingReference();

		virtual bool isOptionalCsXMsgRqstSchemaWireParsersNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaWireParsersValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaWireParsersReference();

		virtual bool isOptionalCsXMsgRqstSchemaXsdSpecNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaXsdSpecValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaXsdSpecReference();

		virtual bool isOptionalCsXMsgRqstSchemaXsdElementListNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaXsdElementListValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaXsdElementListReference();

		virtual bool isOptionalCsXMsgRspnSchemaBodyNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaBodyValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaBodyReference();

		virtual bool isOptionalCsXMsgRspnSchemaUsingNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaUsingValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaUsingReference();

		virtual bool isOptionalCsXMsgRspnSchemaWireParsersNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaWireParsersValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaWireParsersReference();

		virtual bool isOptionalCsXMsgRspnSchemaXsdElementListNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaXsdElementListValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaXsdElementListReference();

		virtual bool isOptionalCsXMsgRspnSchemaXsdSpecNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaXsdSpecValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaXsdSpecReference();

		virtual cfint::ICFIntMinorVersionObj* getRequiredContainerMinorVersion( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamTableObj*> getOptionalComponentsTables( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamValueObj*> getOptionalComponentsTypes( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamSchemaRefObj*> getOptionalComponentsSchemaRefs( bool forceRead = false );

		virtual cfsec::ICFSecTenantObj* getRequiredOwnerCTenant( bool forceRead = false );

		CFBamSchemaDefObj();
		CFBamSchemaDefObj( cfbam::ICFBamSchemaObj* argSchema );
		virtual const std::string& getClassName() const;
		virtual ~CFBamSchemaDefObj();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t value ) const;

		virtual std::string toString();
		virtual cfbam::CFBamScopeBuff* getBuff();
		virtual void setBuff( cfbam::CFBamScopeBuff* value );

		inline cfbam::CFBamSchemaDefBuff* getSchemaDefBuff() {
			if( buff == NULL ) {
				getBuff();
			}
			return( static_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
		};

		inline cfbam::CFBamSchemaDefBuff* getSchemaDefEditBuff() {
			if( buff == NULL ) {
				getBuff();
			}
			return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
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

		virtual cfbam::ICFBamSchemaDefEditObj* getSchemaDefEdit();

	};
}
