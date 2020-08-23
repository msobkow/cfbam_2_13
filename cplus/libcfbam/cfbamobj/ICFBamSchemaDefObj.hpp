#pragma once

// Description: C++18 Object interface for CFBam SchemaDef.

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
#include <cfbam/CFBamSchemaDefBuff.hpp>

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
	class ICFBamSchemaDefEditObj;
}

#include <cfsecobj/ICFSecSecUserObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>


namespace cfbam {

	class ICFBamSchemaDefObj
	: public virtual cfbam::ICFBamScopeObj
	{
	public:
		ICFBamSchemaDefObj();
		virtual ~ICFBamSchemaDefObj();
		virtual cfbam::ICFBamScopeEditObj* beginEdit() = 0;

		virtual cfbam::ICFBamSchemaDefEditObj* getSchemaDefEdit() = 0;

		inline cfbam::CFBamSchemaDefBuff* getSchemaDefBuff() {
			return( static_cast<cfbam::CFBamSchemaDefBuff*>( getBuff() ) );
		};

		inline cfbam::CFBamSchemaDefBuff* getSchemaDefEditBuff() {
			return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( getBuff() ) );
		};

		virtual const int64_t getRequiredMinorVersionId() = 0;
		virtual const int64_t* getRequiredMinorVersionIdReference() = 0;

		virtual const std::string& getRequiredName() = 0;
		virtual const std::string* getRequiredNameReference() = 0;

		virtual bool isOptionalDbNameNull() = 0;
		virtual const std::string& getOptionalDbNameValue() = 0;
		virtual const std::string* getOptionalDbNameReference() = 0;

		virtual bool isOptionalShortNameNull() = 0;
		virtual const std::string& getOptionalShortNameValue() = 0;
		virtual const std::string* getOptionalShortNameReference() = 0;

		virtual bool isOptionalLabelNull() = 0;
		virtual const std::string& getOptionalLabelValue() = 0;
		virtual const std::string* getOptionalLabelReference() = 0;

		virtual bool isOptionalShortDescriptionNull() = 0;
		virtual const std::string& getOptionalShortDescriptionValue() = 0;
		virtual const std::string* getOptionalShortDescriptionReference() = 0;

		virtual bool isOptionalDescriptionNull() = 0;
		virtual const std::string& getOptionalDescriptionValue() = 0;
		virtual const std::string* getOptionalDescriptionReference() = 0;

		virtual const std::string& getRequiredCopyrightPeriod() = 0;
		virtual const std::string* getRequiredCopyrightPeriodReference() = 0;

		virtual const std::string& getRequiredCopyrightHolder() = 0;
		virtual const std::string* getRequiredCopyrightHolderReference() = 0;

		virtual const std::string& getRequiredAuthorEMail() = 0;
		virtual const std::string* getRequiredAuthorEMailReference() = 0;

		virtual const std::string& getRequiredProjectURL() = 0;
		virtual const std::string* getRequiredProjectURLReference() = 0;

		virtual const std::string& getRequiredPublishURI() = 0;
		virtual const std::string* getRequiredPublishURIReference() = 0;

		virtual const std::string& getRequiredCommonLicenseCode() = 0;
		virtual const std::string* getRequiredCommonLicenseCodeReference() = 0;

		virtual const std::string& getRequiredCommonLicenseName() = 0;
		virtual const std::string* getRequiredCommonLicenseNameReference() = 0;

		virtual const std::string& getRequiredCommonLicenseText() = 0;
		virtual const std::string* getRequiredCommonLicenseTextReference() = 0;

		virtual bool isOptionalClientXFaceLicenseCodeNull() = 0;
		virtual const std::string& getOptionalClientXFaceLicenseCodeValue() = 0;
		virtual const std::string* getOptionalClientXFaceLicenseCodeReference() = 0;

		virtual bool isOptionalClientXFaceLicenseNameNull() = 0;
		virtual const std::string& getOptionalClientXFaceLicenseNameValue() = 0;
		virtual const std::string* getOptionalClientXFaceLicenseNameReference() = 0;

		virtual bool isOptionalClientXFaceLicenseTextNull() = 0;
		virtual const std::string& getOptionalClientXFaceLicenseTextValue() = 0;
		virtual const std::string* getOptionalClientXFaceLicenseTextReference() = 0;

		virtual bool isOptionalClientImplLicenseCodeNull() = 0;
		virtual const std::string& getOptionalClientImplLicenseCodeValue() = 0;
		virtual const std::string* getOptionalClientImplLicenseCodeReference() = 0;

		virtual bool isOptionalClientImplLicenseNameNull() = 0;
		virtual const std::string& getOptionalClientImplLicenseNameValue() = 0;
		virtual const std::string* getOptionalClientImplLicenseNameReference() = 0;

		virtual bool isOptionalClientImplLicenseTextNull() = 0;
		virtual const std::string& getOptionalClientImplLicenseTextValue() = 0;
		virtual const std::string* getOptionalClientImplLicenseTextReference() = 0;

		virtual bool isOptionalServerXFaceLicenseCodeNull() = 0;
		virtual const std::string& getOptionalServerXFaceLicenseCodeValue() = 0;
		virtual const std::string* getOptionalServerXFaceLicenseCodeReference() = 0;

		virtual bool isOptionalServerXFaceLicenseNameNull() = 0;
		virtual const std::string& getOptionalServerXFaceLicenseNameValue() = 0;
		virtual const std::string* getOptionalServerXFaceLicenseNameReference() = 0;

		virtual bool isOptionalServerXFaceLicenseTextNull() = 0;
		virtual const std::string& getOptionalServerXFaceLicenseTextValue() = 0;
		virtual const std::string* getOptionalServerXFaceLicenseTextReference() = 0;

		virtual bool isOptionalServerImplLicenseCodeNull() = 0;
		virtual const std::string& getOptionalServerImplLicenseCodeValue() = 0;
		virtual const std::string* getOptionalServerImplLicenseCodeReference() = 0;

		virtual bool isOptionalServerImplLicenseNameNull() = 0;
		virtual const std::string& getOptionalServerImplLicenseNameValue() = 0;
		virtual const std::string* getOptionalServerImplLicenseNameReference() = 0;

		virtual bool isOptionalServerImplLicenseTextNull() = 0;
		virtual const std::string& getOptionalServerImplLicenseTextValue() = 0;
		virtual const std::string* getOptionalServerImplLicenseTextReference() = 0;

		virtual bool isOptionalJSchemaObjImportNull() = 0;
		virtual const std::string& getOptionalJSchemaObjImportValue() = 0;
		virtual const std::string* getOptionalJSchemaObjImportReference() = 0;

		virtual bool isOptionalJSchemaObjInterfaceNull() = 0;
		virtual const std::string& getOptionalJSchemaObjInterfaceValue() = 0;
		virtual const std::string* getOptionalJSchemaObjInterfaceReference() = 0;

		virtual bool isOptionalJSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalJSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalJSchemaObjMembersReference() = 0;

		virtual bool isOptionalJSchemaObjImplementationNull() = 0;
		virtual const std::string& getOptionalJSchemaObjImplementationValue() = 0;
		virtual const std::string* getOptionalJSchemaObjImplementationReference() = 0;

		virtual bool isOptionalJDb2LUWSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalJDb2LUWSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalJDb2LUWSchemaObjMembersReference() = 0;

		virtual bool isOptionalJDb2LUWSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalJDb2LUWSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalJDb2LUWSchemaObjImplReference() = 0;

		virtual bool isOptionalJDb2LUWSchemaObjImportNull() = 0;
		virtual const std::string& getOptionalJDb2LUWSchemaObjImportValue() = 0;
		virtual const std::string* getOptionalJDb2LUWSchemaObjImportReference() = 0;

		virtual bool isOptionalJMSSqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalJMSSqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalJMSSqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalJMSSqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalJMSSqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalJMSSqlSchemaObjImplReference() = 0;

		virtual bool isOptionalJMSSqlSchemaObjImportNull() = 0;
		virtual const std::string& getOptionalJMSSqlSchemaObjImportValue() = 0;
		virtual const std::string* getOptionalJMSSqlSchemaObjImportReference() = 0;

		virtual bool isOptionalJMySqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalJMySqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalJMySqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalJMySqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalJMySqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalJMySqlSchemaObjImplReference() = 0;

		virtual bool isOptionalJMySqlSchemaObjImportNull() = 0;
		virtual const std::string& getOptionalJMySqlSchemaObjImportValue() = 0;
		virtual const std::string* getOptionalJMySqlSchemaObjImportReference() = 0;

		virtual bool isOptionalJOracleSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalJOracleSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalJOracleSchemaObjMembersReference() = 0;

		virtual bool isOptionalJOracleSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalJOracleSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalJOracleSchemaObjImplReference() = 0;

		virtual bool isOptionalJOracleSchemaObjImportNull() = 0;
		virtual const std::string& getOptionalJOracleSchemaObjImportValue() = 0;
		virtual const std::string* getOptionalJOracleSchemaObjImportReference() = 0;

		virtual bool isOptionalJPgSqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalJPgSqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalJPgSqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalJPgSqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalJPgSqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalJPgSqlSchemaObjImplReference() = 0;

		virtual bool isOptionalJPgSqlSchemaObjImportNull() = 0;
		virtual const std::string& getOptionalJPgSqlSchemaObjImportValue() = 0;
		virtual const std::string* getOptionalJPgSqlSchemaObjImportReference() = 0;

		virtual bool isOptionalJRamSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalJRamSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalJRamSchemaObjMembersReference() = 0;

		virtual bool isOptionalJRamSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalJRamSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalJRamSchemaObjImplReference() = 0;

		virtual bool isOptionalJRamSchemaObjImportNull() = 0;
		virtual const std::string& getOptionalJRamSchemaObjImportValue() = 0;
		virtual const std::string* getOptionalJRamSchemaObjImportReference() = 0;

		virtual bool isOptionalJXMsgSchemaImportNull() = 0;
		virtual const std::string& getOptionalJXMsgSchemaImportValue() = 0;
		virtual const std::string* getOptionalJXMsgSchemaImportReference() = 0;

		virtual bool isOptionalJXMsgSchemaFormattersNull() = 0;
		virtual const std::string& getOptionalJXMsgSchemaFormattersValue() = 0;
		virtual const std::string* getOptionalJXMsgSchemaFormattersReference() = 0;

		virtual bool isOptionalJXMsgClientSchemaImportNull() = 0;
		virtual const std::string& getOptionalJXMsgClientSchemaImportValue() = 0;
		virtual const std::string* getOptionalJXMsgClientSchemaImportReference() = 0;

		virtual bool isOptionalJXMsgClientSchemaBodyNull() = 0;
		virtual const std::string& getOptionalJXMsgClientSchemaBodyValue() = 0;
		virtual const std::string* getOptionalJXMsgClientSchemaBodyReference() = 0;

		virtual bool isOptionalJXMsgRqstSchemaBodyNull() = 0;
		virtual const std::string& getOptionalJXMsgRqstSchemaBodyValue() = 0;
		virtual const std::string* getOptionalJXMsgRqstSchemaBodyReference() = 0;

		virtual bool isOptionalJXMsgRqstSchemaImportNull() = 0;
		virtual const std::string& getOptionalJXMsgRqstSchemaImportValue() = 0;
		virtual const std::string* getOptionalJXMsgRqstSchemaImportReference() = 0;

		virtual bool isOptionalJXMsgRqstSchemaWireParsersNull() = 0;
		virtual const std::string& getOptionalJXMsgRqstSchemaWireParsersValue() = 0;
		virtual const std::string* getOptionalJXMsgRqstSchemaWireParsersReference() = 0;

		virtual bool isOptionalJXMsgRqstSchemaXsdSpecNull() = 0;
		virtual const std::string& getOptionalJXMsgRqstSchemaXsdSpecValue() = 0;
		virtual const std::string* getOptionalJXMsgRqstSchemaXsdSpecReference() = 0;

		virtual bool isOptionalJXMsgRqstSchemaXsdElementListNull() = 0;
		virtual const std::string& getOptionalJXMsgRqstSchemaXsdElementListValue() = 0;
		virtual const std::string* getOptionalJXMsgRqstSchemaXsdElementListReference() = 0;

		virtual bool isOptionalJXMsgRspnSchemaBodyNull() = 0;
		virtual const std::string& getOptionalJXMsgRspnSchemaBodyValue() = 0;
		virtual const std::string* getOptionalJXMsgRspnSchemaBodyReference() = 0;

		virtual bool isOptionalJXMsgRspnSchemaImportNull() = 0;
		virtual const std::string& getOptionalJXMsgRspnSchemaImportValue() = 0;
		virtual const std::string* getOptionalJXMsgRspnSchemaImportReference() = 0;

		virtual bool isOptionalJXMsgRspnSchemaWireParsersNull() = 0;
		virtual const std::string& getOptionalJXMsgRspnSchemaWireParsersValue() = 0;
		virtual const std::string* getOptionalJXMsgRspnSchemaWireParsersReference() = 0;

		virtual bool isOptionalJXMsgRspnSchemaXsdElementListNull() = 0;
		virtual const std::string& getOptionalJXMsgRspnSchemaXsdElementListValue() = 0;
		virtual const std::string* getOptionalJXMsgRspnSchemaXsdElementListReference() = 0;

		virtual bool isOptionalJXMsgRspnSchemaXsdSpecNull() = 0;
		virtual const std::string& getOptionalJXMsgRspnSchemaXsdSpecValue() = 0;
		virtual const std::string* getOptionalJXMsgRspnSchemaXsdSpecReference() = 0;

		virtual bool isOptionalCppSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppSchemaObjIncludeReference() = 0;

		virtual bool isOptionalCppSchemaObjInterfaceNull() = 0;
		virtual const std::string& getOptionalCppSchemaObjInterfaceValue() = 0;
		virtual const std::string* getOptionalCppSchemaObjInterfaceReference() = 0;

		virtual bool isOptionalCppSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCppSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCppSchemaObjMembersReference() = 0;

		virtual bool isOptionalCppSchemaObjImplementationNull() = 0;
		virtual const std::string& getOptionalCppSchemaObjImplementationValue() = 0;
		virtual const std::string* getOptionalCppSchemaObjImplementationReference() = 0;

		virtual bool isOptionalCppDb2LUWSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCppDb2LUWSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCppDb2LUWSchemaObjMembersReference() = 0;

		virtual bool isOptionalCppDb2LUWSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCppDb2LUWSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCppDb2LUWSchemaObjImplReference() = 0;

		virtual bool isOptionalCppDb2LUWSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppDb2LUWSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppDb2LUWSchemaObjIncludeReference() = 0;

		virtual bool isOptionalCppMSSqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCppMSSqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCppMSSqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalCppMSSqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCppMSSqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCppMSSqlSchemaObjImplReference() = 0;

		virtual bool isOptionalCppMSSqlSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppMSSqlSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppMSSqlSchemaObjIncludeReference() = 0;

		virtual bool isOptionalCppMySqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCppMySqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCppMySqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalCppMySqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCppMySqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCppMySqlSchemaObjImplReference() = 0;

		virtual bool isOptionalCppMySqlSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppMySqlSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppMySqlSchemaObjIncludeReference() = 0;

		virtual bool isOptionalCppOracleSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCppOracleSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCppOracleSchemaObjMembersReference() = 0;

		virtual bool isOptionalCppOracleSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCppOracleSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCppOracleSchemaObjImplReference() = 0;

		virtual bool isOptionalCppOracleSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppOracleSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppOracleSchemaObjIncludeReference() = 0;

		virtual bool isOptionalCppPgSqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCppPgSqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCppPgSqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalCppPgSqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCppPgSqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCppPgSqlSchemaObjImplReference() = 0;

		virtual bool isOptionalCppPgSqlSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppPgSqlSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppPgSqlSchemaObjIncludeReference() = 0;

		virtual bool isOptionalCppRamSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCppRamSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCppRamSchemaObjMembersReference() = 0;

		virtual bool isOptionalCppRamSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCppRamSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCppRamSchemaObjImplReference() = 0;

		virtual bool isOptionalCppRamSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppRamSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppRamSchemaObjIncludeReference() = 0;

		virtual bool isOptionalCppXMsgSchemaIncludeNull() = 0;
		virtual const std::string& getOptionalCppXMsgSchemaIncludeValue() = 0;
		virtual const std::string* getOptionalCppXMsgSchemaIncludeReference() = 0;

		virtual bool isOptionalCppXMsgSchemaFormattersNull() = 0;
		virtual const std::string& getOptionalCppXMsgSchemaFormattersValue() = 0;
		virtual const std::string* getOptionalCppXMsgSchemaFormattersReference() = 0;

		virtual bool isOptionalCppXMsgClientSchemaIncludeNull() = 0;
		virtual const std::string& getOptionalCppXMsgClientSchemaIncludeValue() = 0;
		virtual const std::string* getOptionalCppXMsgClientSchemaIncludeReference() = 0;

		virtual bool isOptionalCppXMsgClientSchemaBodyNull() = 0;
		virtual const std::string& getOptionalCppXMsgClientSchemaBodyValue() = 0;
		virtual const std::string* getOptionalCppXMsgClientSchemaBodyReference() = 0;

		virtual bool isOptionalCppXMsgRqstSchemaBodyNull() = 0;
		virtual const std::string& getOptionalCppXMsgRqstSchemaBodyValue() = 0;
		virtual const std::string* getOptionalCppXMsgRqstSchemaBodyReference() = 0;

		virtual bool isOptionalCppXMsgRqstSchemaIncludeNull() = 0;
		virtual const std::string& getOptionalCppXMsgRqstSchemaIncludeValue() = 0;
		virtual const std::string* getOptionalCppXMsgRqstSchemaIncludeReference() = 0;

		virtual bool isOptionalCppXMsgRqstSchemaWireParsersNull() = 0;
		virtual const std::string& getOptionalCppXMsgRqstSchemaWireParsersValue() = 0;
		virtual const std::string* getOptionalCppXMsgRqstSchemaWireParsersReference() = 0;

		virtual bool isOptionalCppXMsgRqstSchemaXsdSpecNull() = 0;
		virtual const std::string& getOptionalCppXMsgRqstSchemaXsdSpecValue() = 0;
		virtual const std::string* getOptionalCppXMsgRqstSchemaXsdSpecReference() = 0;

		virtual bool isOptionalCppXMsgRqstSchemaXsdElementListNull() = 0;
		virtual const std::string& getOptionalCppXMsgRqstSchemaXsdElementListValue() = 0;
		virtual const std::string* getOptionalCppXMsgRqstSchemaXsdElementListReference() = 0;

		virtual bool isOptionalCppXMsgRspnSchemaBodyNull() = 0;
		virtual const std::string& getOptionalCppXMsgRspnSchemaBodyValue() = 0;
		virtual const std::string* getOptionalCppXMsgRspnSchemaBodyReference() = 0;

		virtual bool isOptionalCppXMsgRspnSchemaIncludeNull() = 0;
		virtual const std::string& getOptionalCppXMsgRspnSchemaIncludeValue() = 0;
		virtual const std::string* getOptionalCppXMsgRspnSchemaIncludeReference() = 0;

		virtual bool isOptionalCppXMsgRspnSchemaWireParsersNull() = 0;
		virtual const std::string& getOptionalCppXMsgRspnSchemaWireParsersValue() = 0;
		virtual const std::string* getOptionalCppXMsgRspnSchemaWireParsersReference() = 0;

		virtual bool isOptionalCppXMsgRspnSchemaXsdElementListNull() = 0;
		virtual const std::string& getOptionalCppXMsgRspnSchemaXsdElementListValue() = 0;
		virtual const std::string* getOptionalCppXMsgRspnSchemaXsdElementListReference() = 0;

		virtual bool isOptionalCppXMsgRspnSchemaXsdSpecNull() = 0;
		virtual const std::string& getOptionalCppXMsgRspnSchemaXsdSpecValue() = 0;
		virtual const std::string* getOptionalCppXMsgRspnSchemaXsdSpecReference() = 0;

		virtual bool isOptionalHppSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppSchemaObjIncludeReference() = 0;

		virtual bool isOptionalHppSchemaObjInterfaceNull() = 0;
		virtual const std::string& getOptionalHppSchemaObjInterfaceValue() = 0;
		virtual const std::string* getOptionalHppSchemaObjInterfaceReference() = 0;

		virtual bool isOptionalHppSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalHppSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalHppSchemaObjMembersReference() = 0;

		virtual bool isOptionalHppSchemaObjImplementationNull() = 0;
		virtual const std::string& getOptionalHppSchemaObjImplementationValue() = 0;
		virtual const std::string* getOptionalHppSchemaObjImplementationReference() = 0;

		virtual bool isOptionalHppDb2LUWSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalHppDb2LUWSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalHppDb2LUWSchemaObjMembersReference() = 0;

		virtual bool isOptionalHppDb2LUWSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalHppDb2LUWSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalHppDb2LUWSchemaObjImplReference() = 0;

		virtual bool isOptionalHppDb2LUWSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppDb2LUWSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppDb2LUWSchemaObjIncludeReference() = 0;

		virtual bool isOptionalHppMSSqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalHppMSSqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalHppMSSqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalHppMSSqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalHppMSSqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalHppMSSqlSchemaObjImplReference() = 0;

		virtual bool isOptionalHppMSSqlSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppMSSqlSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppMSSqlSchemaObjIncludeReference() = 0;

		virtual bool isOptionalHppMySqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalHppMySqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalHppMySqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalHppMySqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalHppMySqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalHppMySqlSchemaObjImplReference() = 0;

		virtual bool isOptionalHppMySqlSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppMySqlSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppMySqlSchemaObjIncludeReference() = 0;

		virtual bool isOptionalHppOracleSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalHppOracleSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalHppOracleSchemaObjMembersReference() = 0;

		virtual bool isOptionalHppOracleSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalHppOracleSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalHppOracleSchemaObjImplReference() = 0;

		virtual bool isOptionalHppOracleSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppOracleSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppOracleSchemaObjIncludeReference() = 0;

		virtual bool isOptionalHppPgSqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalHppPgSqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalHppPgSqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalHppPgSqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalHppPgSqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalHppPgSqlSchemaObjImplReference() = 0;

		virtual bool isOptionalHppPgSqlSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppPgSqlSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppPgSqlSchemaObjIncludeReference() = 0;

		virtual bool isOptionalHppRamSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalHppRamSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalHppRamSchemaObjMembersReference() = 0;

		virtual bool isOptionalHppRamSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalHppRamSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalHppRamSchemaObjImplReference() = 0;

		virtual bool isOptionalHppRamSchemaObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppRamSchemaObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppRamSchemaObjIncludeReference() = 0;

		virtual bool isOptionalHppXMsgSchemaIncludeNull() = 0;
		virtual const std::string& getOptionalHppXMsgSchemaIncludeValue() = 0;
		virtual const std::string* getOptionalHppXMsgSchemaIncludeReference() = 0;

		virtual bool isOptionalHppXMsgSchemaFormattersNull() = 0;
		virtual const std::string& getOptionalHppXMsgSchemaFormattersValue() = 0;
		virtual const std::string* getOptionalHppXMsgSchemaFormattersReference() = 0;

		virtual bool isOptionalHppXMsgClientSchemaIncludeNull() = 0;
		virtual const std::string& getOptionalHppXMsgClientSchemaIncludeValue() = 0;
		virtual const std::string* getOptionalHppXMsgClientSchemaIncludeReference() = 0;

		virtual bool isOptionalHppXMsgClientSchemaBodyNull() = 0;
		virtual const std::string& getOptionalHppXMsgClientSchemaBodyValue() = 0;
		virtual const std::string* getOptionalHppXMsgClientSchemaBodyReference() = 0;

		virtual bool isOptionalHppXMsgRqstSchemaBodyNull() = 0;
		virtual const std::string& getOptionalHppXMsgRqstSchemaBodyValue() = 0;
		virtual const std::string* getOptionalHppXMsgRqstSchemaBodyReference() = 0;

		virtual bool isOptionalHppXMsgRqstSchemaIncludeNull() = 0;
		virtual const std::string& getOptionalHppXMsgRqstSchemaIncludeValue() = 0;
		virtual const std::string* getOptionalHppXMsgRqstSchemaIncludeReference() = 0;

		virtual bool isOptionalHppXMsgRqstSchemaWireParsersNull() = 0;
		virtual const std::string& getOptionalHppXMsgRqstSchemaWireParsersValue() = 0;
		virtual const std::string* getOptionalHppXMsgRqstSchemaWireParsersReference() = 0;

		virtual bool isOptionalHppXMsgRqstSchemaXsdSpecNull() = 0;
		virtual const std::string& getOptionalHppXMsgRqstSchemaXsdSpecValue() = 0;
		virtual const std::string* getOptionalHppXMsgRqstSchemaXsdSpecReference() = 0;

		virtual bool isOptionalHppXMsgRqstSchemaXsdElementListNull() = 0;
		virtual const std::string& getOptionalHppXMsgRqstSchemaXsdElementListValue() = 0;
		virtual const std::string* getOptionalHppXMsgRqstSchemaXsdElementListReference() = 0;

		virtual bool isOptionalHppXMsgRspnSchemaBodyNull() = 0;
		virtual const std::string& getOptionalHppXMsgRspnSchemaBodyValue() = 0;
		virtual const std::string* getOptionalHppXMsgRspnSchemaBodyReference() = 0;

		virtual bool isOptionalHppXMsgRspnSchemaIncludeNull() = 0;
		virtual const std::string& getOptionalHppXMsgRspnSchemaIncludeValue() = 0;
		virtual const std::string* getOptionalHppXMsgRspnSchemaIncludeReference() = 0;

		virtual bool isOptionalHppXMsgRspnSchemaWireParsersNull() = 0;
		virtual const std::string& getOptionalHppXMsgRspnSchemaWireParsersValue() = 0;
		virtual const std::string* getOptionalHppXMsgRspnSchemaWireParsersReference() = 0;

		virtual bool isOptionalHppXMsgRspnSchemaXsdElementListNull() = 0;
		virtual const std::string& getOptionalHppXMsgRspnSchemaXsdElementListValue() = 0;
		virtual const std::string* getOptionalHppXMsgRspnSchemaXsdElementListReference() = 0;

		virtual bool isOptionalHppXMsgRspnSchemaXsdSpecNull() = 0;
		virtual const std::string& getOptionalHppXMsgRspnSchemaXsdSpecValue() = 0;
		virtual const std::string* getOptionalHppXMsgRspnSchemaXsdSpecReference() = 0;

		virtual bool isOptionalCsSchemaObjUsingNull() = 0;
		virtual const std::string& getOptionalCsSchemaObjUsingValue() = 0;
		virtual const std::string* getOptionalCsSchemaObjUsingReference() = 0;

		virtual bool isOptionalCsSchemaObjInterfaceNull() = 0;
		virtual const std::string& getOptionalCsSchemaObjInterfaceValue() = 0;
		virtual const std::string* getOptionalCsSchemaObjInterfaceReference() = 0;

		virtual bool isOptionalCsSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCsSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCsSchemaObjMembersReference() = 0;

		virtual bool isOptionalCsSchemaObjImplementationNull() = 0;
		virtual const std::string& getOptionalCsSchemaObjImplementationValue() = 0;
		virtual const std::string* getOptionalCsSchemaObjImplementationReference() = 0;

		virtual bool isOptionalCsDb2LUWSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCsDb2LUWSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCsDb2LUWSchemaObjMembersReference() = 0;

		virtual bool isOptionalCsDb2LUWSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCsDb2LUWSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCsDb2LUWSchemaObjImplReference() = 0;

		virtual bool isOptionalCsDb2LUWSchemaObjUsingNull() = 0;
		virtual const std::string& getOptionalCsDb2LUWSchemaObjUsingValue() = 0;
		virtual const std::string* getOptionalCsDb2LUWSchemaObjUsingReference() = 0;

		virtual bool isOptionalCsMSSqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCsMSSqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCsMSSqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalCsMSSqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCsMSSqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCsMSSqlSchemaObjImplReference() = 0;

		virtual bool isOptionalCsMSSqlSchemaObjUsingNull() = 0;
		virtual const std::string& getOptionalCsMSSqlSchemaObjUsingValue() = 0;
		virtual const std::string* getOptionalCsMSSqlSchemaObjUsingReference() = 0;

		virtual bool isOptionalCsMySqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCsMySqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCsMySqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalCsMySqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCsMySqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCsMySqlSchemaObjImplReference() = 0;

		virtual bool isOptionalCsMySqlSchemaObjUsingNull() = 0;
		virtual const std::string& getOptionalCsMySqlSchemaObjUsingValue() = 0;
		virtual const std::string* getOptionalCsMySqlSchemaObjUsingReference() = 0;

		virtual bool isOptionalCsOracleSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCsOracleSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCsOracleSchemaObjMembersReference() = 0;

		virtual bool isOptionalCsOracleSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCsOracleSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCsOracleSchemaObjImplReference() = 0;

		virtual bool isOptionalCsOracleSchemaObjUsingNull() = 0;
		virtual const std::string& getOptionalCsOracleSchemaObjUsingValue() = 0;
		virtual const std::string* getOptionalCsOracleSchemaObjUsingReference() = 0;

		virtual bool isOptionalCsPgSqlSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCsPgSqlSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCsPgSqlSchemaObjMembersReference() = 0;

		virtual bool isOptionalCsPgSqlSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCsPgSqlSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCsPgSqlSchemaObjImplReference() = 0;

		virtual bool isOptionalCsPgSqlSchemaObjUsingNull() = 0;
		virtual const std::string& getOptionalCsPgSqlSchemaObjUsingValue() = 0;
		virtual const std::string* getOptionalCsPgSqlSchemaObjUsingReference() = 0;

		virtual bool isOptionalCsRamSchemaObjMembersNull() = 0;
		virtual const std::string& getOptionalCsRamSchemaObjMembersValue() = 0;
		virtual const std::string* getOptionalCsRamSchemaObjMembersReference() = 0;

		virtual bool isOptionalCsRamSchemaObjImplNull() = 0;
		virtual const std::string& getOptionalCsRamSchemaObjImplValue() = 0;
		virtual const std::string* getOptionalCsRamSchemaObjImplReference() = 0;

		virtual bool isOptionalCsRamSchemaObjUsingNull() = 0;
		virtual const std::string& getOptionalCsRamSchemaObjUsingValue() = 0;
		virtual const std::string* getOptionalCsRamSchemaObjUsingReference() = 0;

		virtual bool isOptionalCsXMsgSchemaUsingNull() = 0;
		virtual const std::string& getOptionalCsXMsgSchemaUsingValue() = 0;
		virtual const std::string* getOptionalCsXMsgSchemaUsingReference() = 0;

		virtual bool isOptionalCsXMsgSchemaFormattersNull() = 0;
		virtual const std::string& getOptionalCsXMsgSchemaFormattersValue() = 0;
		virtual const std::string* getOptionalCsXMsgSchemaFormattersReference() = 0;

		virtual bool isOptionalCsXMsgClientSchemaUsingNull() = 0;
		virtual const std::string& getOptionalCsXMsgClientSchemaUsingValue() = 0;
		virtual const std::string* getOptionalCsXMsgClientSchemaUsingReference() = 0;

		virtual bool isOptionalCsXMsgClientSchemaBodyNull() = 0;
		virtual const std::string& getOptionalCsXMsgClientSchemaBodyValue() = 0;
		virtual const std::string* getOptionalCsXMsgClientSchemaBodyReference() = 0;

		virtual bool isOptionalCsXMsgRqstSchemaBodyNull() = 0;
		virtual const std::string& getOptionalCsXMsgRqstSchemaBodyValue() = 0;
		virtual const std::string* getOptionalCsXMsgRqstSchemaBodyReference() = 0;

		virtual bool isOptionalCsXMsgRqstSchemaUsingNull() = 0;
		virtual const std::string& getOptionalCsXMsgRqstSchemaUsingValue() = 0;
		virtual const std::string* getOptionalCsXMsgRqstSchemaUsingReference() = 0;

		virtual bool isOptionalCsXMsgRqstSchemaWireParsersNull() = 0;
		virtual const std::string& getOptionalCsXMsgRqstSchemaWireParsersValue() = 0;
		virtual const std::string* getOptionalCsXMsgRqstSchemaWireParsersReference() = 0;

		virtual bool isOptionalCsXMsgRqstSchemaXsdSpecNull() = 0;
		virtual const std::string& getOptionalCsXMsgRqstSchemaXsdSpecValue() = 0;
		virtual const std::string* getOptionalCsXMsgRqstSchemaXsdSpecReference() = 0;

		virtual bool isOptionalCsXMsgRqstSchemaXsdElementListNull() = 0;
		virtual const std::string& getOptionalCsXMsgRqstSchemaXsdElementListValue() = 0;
		virtual const std::string* getOptionalCsXMsgRqstSchemaXsdElementListReference() = 0;

		virtual bool isOptionalCsXMsgRspnSchemaBodyNull() = 0;
		virtual const std::string& getOptionalCsXMsgRspnSchemaBodyValue() = 0;
		virtual const std::string* getOptionalCsXMsgRspnSchemaBodyReference() = 0;

		virtual bool isOptionalCsXMsgRspnSchemaUsingNull() = 0;
		virtual const std::string& getOptionalCsXMsgRspnSchemaUsingValue() = 0;
		virtual const std::string* getOptionalCsXMsgRspnSchemaUsingReference() = 0;

		virtual bool isOptionalCsXMsgRspnSchemaWireParsersNull() = 0;
		virtual const std::string& getOptionalCsXMsgRspnSchemaWireParsersValue() = 0;
		virtual const std::string* getOptionalCsXMsgRspnSchemaWireParsersReference() = 0;

		virtual bool isOptionalCsXMsgRspnSchemaXsdElementListNull() = 0;
		virtual const std::string& getOptionalCsXMsgRspnSchemaXsdElementListValue() = 0;
		virtual const std::string* getOptionalCsXMsgRspnSchemaXsdElementListReference() = 0;

		virtual bool isOptionalCsXMsgRspnSchemaXsdSpecNull() = 0;
		virtual const std::string& getOptionalCsXMsgRspnSchemaXsdSpecValue() = 0;
		virtual const std::string* getOptionalCsXMsgRspnSchemaXsdSpecReference() = 0;

		virtual cfint::ICFIntMinorVersionObj* getRequiredContainerMinorVersion( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamTableObj*> getOptionalComponentsTables( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamValueObj*> getOptionalComponentsTypes( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamSchemaRefObj*> getOptionalComponentsSchemaRefs( bool forceRead = false ) = 0;

		virtual cfsec::ICFSecTenantObj* getRequiredOwnerCTenant( bool forceRead = false ) = 0;

	};
}
