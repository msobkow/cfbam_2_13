#pragma once

// Description: C++18 Object interface for CFBam Table.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbam/CFBamTableBuff.hpp>

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
	class ICFBamTableEditObj;
}

#include <cfsecobj/ICFSecSecUserObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>


namespace cfbam {

	class ICFBamTableObj
	: public virtual cfbam::ICFBamScopeObj
	{
	public:
		ICFBamTableObj();
		virtual ~ICFBamTableObj();
		virtual cfbam::ICFBamScopeEditObj* beginEdit() = 0;

		virtual cfbam::ICFBamTableEditObj* getTableEdit() = 0;

		inline cfbam::CFBamTableBuff* getTableBuff() {
			return( static_cast<cfbam::CFBamTableBuff*>( getBuff() ) );
		};

		inline cfbam::CFBamTableBuff* getTableEditBuff() {
			return( dynamic_cast<cfbam::CFBamTableBuff*>( getBuff() ) );
		};

		virtual const int64_t getRequiredSchemaDefId() = 0;
		virtual const int64_t* getRequiredSchemaDefIdReference() = 0;

		virtual bool isOptionalDefSchemaTenantIdNull() = 0;
		virtual const int64_t getOptionalDefSchemaTenantIdValue() = 0;
		virtual const int64_t* getOptionalDefSchemaTenantIdReference() = 0;

		virtual bool isOptionalDefSchemaIdNull() = 0;
		virtual const int64_t getOptionalDefSchemaIdValue() = 0;
		virtual const int64_t* getOptionalDefSchemaIdReference() = 0;

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

		virtual const bool getRequiredPageData() = 0;
		virtual const bool* getRequiredPageDataReference() = 0;

		virtual bool isOptionalPrimaryIndexTenantIdNull() = 0;
		virtual const int64_t getOptionalPrimaryIndexTenantIdValue() = 0;
		virtual const int64_t* getOptionalPrimaryIndexTenantIdReference() = 0;

		virtual bool isOptionalPrimaryIndexIdNull() = 0;
		virtual const int64_t getOptionalPrimaryIndexIdValue() = 0;
		virtual const int64_t* getOptionalPrimaryIndexIdReference() = 0;

		virtual const std::string& getRequiredTableClassCode() = 0;
		virtual const std::string* getRequiredTableClassCodeReference() = 0;

		virtual bool isOptionalLookupIndexTenantIdNull() = 0;
		virtual const int64_t getOptionalLookupIndexTenantIdValue() = 0;
		virtual const int64_t* getOptionalLookupIndexTenantIdReference() = 0;

		virtual bool isOptionalLookupIndexIdNull() = 0;
		virtual const int64_t getOptionalLookupIndexIdValue() = 0;
		virtual const int64_t* getOptionalLookupIndexIdReference() = 0;

		virtual bool isOptionalAltIndexTenantIdNull() = 0;
		virtual const int64_t getOptionalAltIndexTenantIdValue() = 0;
		virtual const int64_t* getOptionalAltIndexTenantIdReference() = 0;

		virtual bool isOptionalAltIndexIdNull() = 0;
		virtual const int64_t getOptionalAltIndexIdValue() = 0;
		virtual const int64_t* getOptionalAltIndexIdReference() = 0;

		virtual bool isOptionalQualifyingTenantIdNull() = 0;
		virtual const int64_t getOptionalQualifyingTenantIdValue() = 0;
		virtual const int64_t* getOptionalQualifyingTenantIdReference() = 0;

		virtual bool isOptionalQualifyingTableIdNull() = 0;
		virtual const int64_t getOptionalQualifyingTableIdValue() = 0;
		virtual const int64_t* getOptionalQualifyingTableIdReference() = 0;

		virtual const bool getRequiredIsInstantiable() = 0;
		virtual const bool* getRequiredIsInstantiableReference() = 0;

		virtual const bool getRequiredHasHistory() = 0;
		virtual const bool* getRequiredHasHistoryReference() = 0;

		virtual const bool getRequiredHasAuditColumns() = 0;
		virtual const bool* getRequiredHasAuditColumnsReference() = 0;

		virtual const bool getRequiredIsMutable() = 0;
		virtual const bool* getRequiredIsMutableReference() = 0;

		virtual const bool getRequiredIsServerOnly() = 0;
		virtual const bool* getRequiredIsServerOnlyReference() = 0;

		virtual const cfbam::ICFBamSchema::LoaderBehaviourEnum getRequiredLoaderBehaviour() = 0;
		virtual const cfbam::ICFBamSchema::LoaderBehaviourEnum* getRequiredLoaderBehaviourReference() = 0;

		virtual const cfbam::ICFBamSchema::SecScopeEnum getRequiredSecScope() = 0;
		virtual const cfbam::ICFBamSchema::SecScopeEnum* getRequiredSecScopeReference() = 0;

		virtual bool isOptionalJObjMembersNull() = 0;
		virtual const std::string& getOptionalJObjMembersValue() = 0;
		virtual const std::string* getOptionalJObjMembersReference() = 0;

		virtual bool isOptionalJObjInterfaceNull() = 0;
		virtual const std::string& getOptionalJObjInterfaceValue() = 0;
		virtual const std::string* getOptionalJObjInterfaceReference() = 0;

		virtual bool isOptionalJObjImportNull() = 0;
		virtual const std::string& getOptionalJObjImportValue() = 0;
		virtual const std::string* getOptionalJObjImportReference() = 0;

		virtual bool isOptionalJObjImplementationNull() = 0;
		virtual const std::string& getOptionalJObjImplementationValue() = 0;
		virtual const std::string* getOptionalJObjImplementationReference() = 0;

		virtual bool isOptionalJEditObjMembersNull() = 0;
		virtual const std::string& getOptionalJEditObjMembersValue() = 0;
		virtual const std::string* getOptionalJEditObjMembersReference() = 0;

		virtual bool isOptionalJEditObjInterfaceNull() = 0;
		virtual const std::string& getOptionalJEditObjInterfaceValue() = 0;
		virtual const std::string* getOptionalJEditObjInterfaceReference() = 0;

		virtual bool isOptionalJEditObjImportNull() = 0;
		virtual const std::string& getOptionalJEditObjImportValue() = 0;
		virtual const std::string* getOptionalJEditObjImportReference() = 0;

		virtual bool isOptionalJEditObjImplementationNull() = 0;
		virtual const std::string& getOptionalJEditObjImplementationValue() = 0;
		virtual const std::string* getOptionalJEditObjImplementationReference() = 0;

		virtual bool isOptionalJTableImportNull() = 0;
		virtual const std::string& getOptionalJTableImportValue() = 0;
		virtual const std::string* getOptionalJTableImportReference() = 0;

		virtual bool isOptionalJTableMembersNull() = 0;
		virtual const std::string& getOptionalJTableMembersValue() = 0;
		virtual const std::string* getOptionalJTableMembersReference() = 0;

		virtual bool isOptionalJTableInterfaceNull() = 0;
		virtual const std::string& getOptionalJTableInterfaceValue() = 0;
		virtual const std::string* getOptionalJTableInterfaceReference() = 0;

		virtual bool isOptionalJTableImplementationNull() = 0;
		virtual const std::string& getOptionalJTableImplementationValue() = 0;
		virtual const std::string* getOptionalJTableImplementationReference() = 0;

		virtual bool isOptionalJTableObjImportNull() = 0;
		virtual const std::string& getOptionalJTableObjImportValue() = 0;
		virtual const std::string* getOptionalJTableObjImportReference() = 0;

		virtual bool isOptionalJTableObjMembersNull() = 0;
		virtual const std::string& getOptionalJTableObjMembersValue() = 0;
		virtual const std::string* getOptionalJTableObjMembersReference() = 0;

		virtual bool isOptionalJTableObjInterfaceNull() = 0;
		virtual const std::string& getOptionalJTableObjInterfaceValue() = 0;
		virtual const std::string* getOptionalJTableObjInterfaceReference() = 0;

		virtual bool isOptionalJTableObjImplementationNull() = 0;
		virtual const std::string& getOptionalJTableObjImplementationValue() = 0;
		virtual const std::string* getOptionalJTableObjImplementationReference() = 0;

		virtual bool isOptionalJDb2LUWTableImportNull() = 0;
		virtual const std::string& getOptionalJDb2LUWTableImportValue() = 0;
		virtual const std::string* getOptionalJDb2LUWTableImportReference() = 0;

		virtual bool isOptionalJDb2LUWTableMembersNull() = 0;
		virtual const std::string& getOptionalJDb2LUWTableMembersValue() = 0;
		virtual const std::string* getOptionalJDb2LUWTableMembersReference() = 0;

		virtual bool isOptionalJDb2LUWTableImplementationNull() = 0;
		virtual const std::string& getOptionalJDb2LUWTableImplementationValue() = 0;
		virtual const std::string* getOptionalJDb2LUWTableImplementationReference() = 0;

		virtual bool isOptionalJMSSqlTableImportNull() = 0;
		virtual const std::string& getOptionalJMSSqlTableImportValue() = 0;
		virtual const std::string* getOptionalJMSSqlTableImportReference() = 0;

		virtual bool isOptionalJMSSqlTableMembersNull() = 0;
		virtual const std::string& getOptionalJMSSqlTableMembersValue() = 0;
		virtual const std::string* getOptionalJMSSqlTableMembersReference() = 0;

		virtual bool isOptionalJMSSqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalJMSSqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalJMSSqlTableImplementationReference() = 0;

		virtual bool isOptionalJMySqlTableImportNull() = 0;
		virtual const std::string& getOptionalJMySqlTableImportValue() = 0;
		virtual const std::string* getOptionalJMySqlTableImportReference() = 0;

		virtual bool isOptionalJMySqlTableMembersNull() = 0;
		virtual const std::string& getOptionalJMySqlTableMembersValue() = 0;
		virtual const std::string* getOptionalJMySqlTableMembersReference() = 0;

		virtual bool isOptionalJMySqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalJMySqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalJMySqlTableImplementationReference() = 0;

		virtual bool isOptionalJOracleTableImportNull() = 0;
		virtual const std::string& getOptionalJOracleTableImportValue() = 0;
		virtual const std::string* getOptionalJOracleTableImportReference() = 0;

		virtual bool isOptionalJOracleTableMembersNull() = 0;
		virtual const std::string& getOptionalJOracleTableMembersValue() = 0;
		virtual const std::string* getOptionalJOracleTableMembersReference() = 0;

		virtual bool isOptionalJOracleTableImplementationNull() = 0;
		virtual const std::string& getOptionalJOracleTableImplementationValue() = 0;
		virtual const std::string* getOptionalJOracleTableImplementationReference() = 0;

		virtual bool isOptionalJPgSqlTableImportNull() = 0;
		virtual const std::string& getOptionalJPgSqlTableImportValue() = 0;
		virtual const std::string* getOptionalJPgSqlTableImportReference() = 0;

		virtual bool isOptionalJPgSqlTableMembersNull() = 0;
		virtual const std::string& getOptionalJPgSqlTableMembersValue() = 0;
		virtual const std::string* getOptionalJPgSqlTableMembersReference() = 0;

		virtual bool isOptionalJPgSqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalJPgSqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalJPgSqlTableImplementationReference() = 0;

		virtual bool isOptionalJRamTableImportNull() = 0;
		virtual const std::string& getOptionalJRamTableImportValue() = 0;
		virtual const std::string* getOptionalJRamTableImportReference() = 0;

		virtual bool isOptionalJRamTableMembersNull() = 0;
		virtual const std::string& getOptionalJRamTableMembersValue() = 0;
		virtual const std::string* getOptionalJRamTableMembersReference() = 0;

		virtual bool isOptionalJRamTableImplementationNull() = 0;
		virtual const std::string& getOptionalJRamTableImplementationValue() = 0;
		virtual const std::string* getOptionalJRamTableImplementationReference() = 0;

		virtual bool isOptionalJSaxLoaderImportNull() = 0;
		virtual const std::string& getOptionalJSaxLoaderImportValue() = 0;
		virtual const std::string* getOptionalJSaxLoaderImportReference() = 0;

		virtual bool isOptionalJSaxLoaderStartElementNull() = 0;
		virtual const std::string& getOptionalJSaxLoaderStartElementValue() = 0;
		virtual const std::string* getOptionalJSaxLoaderStartElementReference() = 0;

		virtual bool isOptionalJSaxLoaderEndElementNull() = 0;
		virtual const std::string& getOptionalJSaxLoaderEndElementValue() = 0;
		virtual const std::string* getOptionalJSaxLoaderEndElementReference() = 0;

		virtual bool isOptionalJXMsgTableImportNull() = 0;
		virtual const std::string& getOptionalJXMsgTableImportValue() = 0;
		virtual const std::string* getOptionalJXMsgTableImportReference() = 0;

		virtual bool isOptionalJXMsgTableFormattersNull() = 0;
		virtual const std::string& getOptionalJXMsgTableFormattersValue() = 0;
		virtual const std::string* getOptionalJXMsgTableFormattersReference() = 0;

		virtual bool isOptionalJXMsgRqstTableImportNull() = 0;
		virtual const std::string& getOptionalJXMsgRqstTableImportValue() = 0;
		virtual const std::string* getOptionalJXMsgRqstTableImportReference() = 0;

		virtual bool isOptionalJXMsgRspnTableImportNull() = 0;
		virtual const std::string& getOptionalJXMsgRspnTableImportValue() = 0;
		virtual const std::string* getOptionalJXMsgRspnTableImportReference() = 0;

		virtual bool isOptionalJXMsgClientTableImportNull() = 0;
		virtual const std::string& getOptionalJXMsgClientTableImportValue() = 0;
		virtual const std::string* getOptionalJXMsgClientTableImportReference() = 0;

		virtual bool isOptionalJXMsgRqstTableBodyNull() = 0;
		virtual const std::string& getOptionalJXMsgRqstTableBodyValue() = 0;
		virtual const std::string* getOptionalJXMsgRqstTableBodyReference() = 0;

		virtual bool isOptionalJXMsgRspnTableBodyNull() = 0;
		virtual const std::string& getOptionalJXMsgRspnTableBodyValue() = 0;
		virtual const std::string* getOptionalJXMsgRspnTableBodyReference() = 0;

		virtual bool isOptionalJXMsgClientTableBodyNull() = 0;
		virtual const std::string& getOptionalJXMsgClientTableBodyValue() = 0;
		virtual const std::string* getOptionalJXMsgClientTableBodyReference() = 0;

		virtual bool isOptionalCppObjMembersNull() = 0;
		virtual const std::string& getOptionalCppObjMembersValue() = 0;
		virtual const std::string* getOptionalCppObjMembersReference() = 0;

		virtual bool isOptionalCppObjInterfaceNull() = 0;
		virtual const std::string& getOptionalCppObjInterfaceValue() = 0;
		virtual const std::string* getOptionalCppObjInterfaceReference() = 0;

		virtual bool isOptionalCppObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppObjIncludeReference() = 0;

		virtual bool isOptionalCppObjImplementationNull() = 0;
		virtual const std::string& getOptionalCppObjImplementationValue() = 0;
		virtual const std::string* getOptionalCppObjImplementationReference() = 0;

		virtual bool isOptionalCppEditObjMembersNull() = 0;
		virtual const std::string& getOptionalCppEditObjMembersValue() = 0;
		virtual const std::string* getOptionalCppEditObjMembersReference() = 0;

		virtual bool isOptionalCppEditObjInterfaceNull() = 0;
		virtual const std::string& getOptionalCppEditObjInterfaceValue() = 0;
		virtual const std::string* getOptionalCppEditObjInterfaceReference() = 0;

		virtual bool isOptionalCppEditObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppEditObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppEditObjIncludeReference() = 0;

		virtual bool isOptionalCppEditObjImplementationNull() = 0;
		virtual const std::string& getOptionalCppEditObjImplementationValue() = 0;
		virtual const std::string* getOptionalCppEditObjImplementationReference() = 0;

		virtual bool isOptionalCppTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppTableIncludeReference() = 0;

		virtual bool isOptionalCppTableMembersNull() = 0;
		virtual const std::string& getOptionalCppTableMembersValue() = 0;
		virtual const std::string* getOptionalCppTableMembersReference() = 0;

		virtual bool isOptionalCppTableInterfaceNull() = 0;
		virtual const std::string& getOptionalCppTableInterfaceValue() = 0;
		virtual const std::string* getOptionalCppTableInterfaceReference() = 0;

		virtual bool isOptionalCppTableImplementationNull() = 0;
		virtual const std::string& getOptionalCppTableImplementationValue() = 0;
		virtual const std::string* getOptionalCppTableImplementationReference() = 0;

		virtual bool isOptionalCppTableObjIncludeNull() = 0;
		virtual const std::string& getOptionalCppTableObjIncludeValue() = 0;
		virtual const std::string* getOptionalCppTableObjIncludeReference() = 0;

		virtual bool isOptionalCppTableObjMembersNull() = 0;
		virtual const std::string& getOptionalCppTableObjMembersValue() = 0;
		virtual const std::string* getOptionalCppTableObjMembersReference() = 0;

		virtual bool isOptionalCppTableObjInterfaceNull() = 0;
		virtual const std::string& getOptionalCppTableObjInterfaceValue() = 0;
		virtual const std::string* getOptionalCppTableObjInterfaceReference() = 0;

		virtual bool isOptionalCppTableObjImplementationNull() = 0;
		virtual const std::string& getOptionalCppTableObjImplementationValue() = 0;
		virtual const std::string* getOptionalCppTableObjImplementationReference() = 0;

		virtual bool isOptionalCppDb2LUWTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppDb2LUWTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppDb2LUWTableIncludeReference() = 0;

		virtual bool isOptionalCppDb2LUWTableMembersNull() = 0;
		virtual const std::string& getOptionalCppDb2LUWTableMembersValue() = 0;
		virtual const std::string* getOptionalCppDb2LUWTableMembersReference() = 0;

		virtual bool isOptionalCppDb2LUWTableImplementationNull() = 0;
		virtual const std::string& getOptionalCppDb2LUWTableImplementationValue() = 0;
		virtual const std::string* getOptionalCppDb2LUWTableImplementationReference() = 0;

		virtual bool isOptionalCppMSSqlTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppMSSqlTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppMSSqlTableIncludeReference() = 0;

		virtual bool isOptionalCppMSSqlTableMembersNull() = 0;
		virtual const std::string& getOptionalCppMSSqlTableMembersValue() = 0;
		virtual const std::string* getOptionalCppMSSqlTableMembersReference() = 0;

		virtual bool isOptionalCppMSSqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalCppMSSqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalCppMSSqlTableImplementationReference() = 0;

		virtual bool isOptionalCppMySqlTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppMySqlTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppMySqlTableIncludeReference() = 0;

		virtual bool isOptionalCppMySqlTableMembersNull() = 0;
		virtual const std::string& getOptionalCppMySqlTableMembersValue() = 0;
		virtual const std::string* getOptionalCppMySqlTableMembersReference() = 0;

		virtual bool isOptionalCppMySqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalCppMySqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalCppMySqlTableImplementationReference() = 0;

		virtual bool isOptionalCppOracleTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppOracleTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppOracleTableIncludeReference() = 0;

		virtual bool isOptionalCppOracleTableMembersNull() = 0;
		virtual const std::string& getOptionalCppOracleTableMembersValue() = 0;
		virtual const std::string* getOptionalCppOracleTableMembersReference() = 0;

		virtual bool isOptionalCppOracleTableImplementationNull() = 0;
		virtual const std::string& getOptionalCppOracleTableImplementationValue() = 0;
		virtual const std::string* getOptionalCppOracleTableImplementationReference() = 0;

		virtual bool isOptionalCppPgSqlTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppPgSqlTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppPgSqlTableIncludeReference() = 0;

		virtual bool isOptionalCppPgSqlTableMembersNull() = 0;
		virtual const std::string& getOptionalCppPgSqlTableMembersValue() = 0;
		virtual const std::string* getOptionalCppPgSqlTableMembersReference() = 0;

		virtual bool isOptionalCppPgSqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalCppPgSqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalCppPgSqlTableImplementationReference() = 0;

		virtual bool isOptionalCppRamTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppRamTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppRamTableIncludeReference() = 0;

		virtual bool isOptionalCppRamTableMembersNull() = 0;
		virtual const std::string& getOptionalCppRamTableMembersValue() = 0;
		virtual const std::string* getOptionalCppRamTableMembersReference() = 0;

		virtual bool isOptionalCppRamTableImplementationNull() = 0;
		virtual const std::string& getOptionalCppRamTableImplementationValue() = 0;
		virtual const std::string* getOptionalCppRamTableImplementationReference() = 0;

		virtual bool isOptionalCppSaxLoaderIncludeNull() = 0;
		virtual const std::string& getOptionalCppSaxLoaderIncludeValue() = 0;
		virtual const std::string* getOptionalCppSaxLoaderIncludeReference() = 0;

		virtual bool isOptionalCppSaxLoaderStartElementNull() = 0;
		virtual const std::string& getOptionalCppSaxLoaderStartElementValue() = 0;
		virtual const std::string* getOptionalCppSaxLoaderStartElementReference() = 0;

		virtual bool isOptionalCppSaxLoaderEndElementNull() = 0;
		virtual const std::string& getOptionalCppSaxLoaderEndElementValue() = 0;
		virtual const std::string* getOptionalCppSaxLoaderEndElementReference() = 0;

		virtual bool isOptionalCppXMsgTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppXMsgTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppXMsgTableIncludeReference() = 0;

		virtual bool isOptionalCppXMsgTableFormattersNull() = 0;
		virtual const std::string& getOptionalCppXMsgTableFormattersValue() = 0;
		virtual const std::string* getOptionalCppXMsgTableFormattersReference() = 0;

		virtual bool isOptionalCppXMsgRqstTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppXMsgRqstTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppXMsgRqstTableIncludeReference() = 0;

		virtual bool isOptionalCppXMsgRspnTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppXMsgRspnTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppXMsgRspnTableIncludeReference() = 0;

		virtual bool isOptionalCppXMsgClientTableIncludeNull() = 0;
		virtual const std::string& getOptionalCppXMsgClientTableIncludeValue() = 0;
		virtual const std::string* getOptionalCppXMsgClientTableIncludeReference() = 0;

		virtual bool isOptionalCppXMsgRqstTableBodyNull() = 0;
		virtual const std::string& getOptionalCppXMsgRqstTableBodyValue() = 0;
		virtual const std::string* getOptionalCppXMsgRqstTableBodyReference() = 0;

		virtual bool isOptionalCppXMsgRspnTableBodyNull() = 0;
		virtual const std::string& getOptionalCppXMsgRspnTableBodyValue() = 0;
		virtual const std::string* getOptionalCppXMsgRspnTableBodyReference() = 0;

		virtual bool isOptionalCppXMsgClientTableBodyNull() = 0;
		virtual const std::string& getOptionalCppXMsgClientTableBodyValue() = 0;
		virtual const std::string* getOptionalCppXMsgClientTableBodyReference() = 0;

		virtual bool isOptionalHppObjMembersNull() = 0;
		virtual const std::string& getOptionalHppObjMembersValue() = 0;
		virtual const std::string* getOptionalHppObjMembersReference() = 0;

		virtual bool isOptionalHppObjInterfaceNull() = 0;
		virtual const std::string& getOptionalHppObjInterfaceValue() = 0;
		virtual const std::string* getOptionalHppObjInterfaceReference() = 0;

		virtual bool isOptionalHppObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppObjIncludeReference() = 0;

		virtual bool isOptionalHppObjImplementationNull() = 0;
		virtual const std::string& getOptionalHppObjImplementationValue() = 0;
		virtual const std::string* getOptionalHppObjImplementationReference() = 0;

		virtual bool isOptionalHppEditObjMembersNull() = 0;
		virtual const std::string& getOptionalHppEditObjMembersValue() = 0;
		virtual const std::string* getOptionalHppEditObjMembersReference() = 0;

		virtual bool isOptionalHppEditObjInterfaceNull() = 0;
		virtual const std::string& getOptionalHppEditObjInterfaceValue() = 0;
		virtual const std::string* getOptionalHppEditObjInterfaceReference() = 0;

		virtual bool isOptionalHppEditObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppEditObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppEditObjIncludeReference() = 0;

		virtual bool isOptionalHppEditObjImplementationNull() = 0;
		virtual const std::string& getOptionalHppEditObjImplementationValue() = 0;
		virtual const std::string* getOptionalHppEditObjImplementationReference() = 0;

		virtual bool isOptionalHppTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppTableIncludeReference() = 0;

		virtual bool isOptionalHppTableMembersNull() = 0;
		virtual const std::string& getOptionalHppTableMembersValue() = 0;
		virtual const std::string* getOptionalHppTableMembersReference() = 0;

		virtual bool isOptionalHppTableInterfaceNull() = 0;
		virtual const std::string& getOptionalHppTableInterfaceValue() = 0;
		virtual const std::string* getOptionalHppTableInterfaceReference() = 0;

		virtual bool isOptionalHppTableImplementationNull() = 0;
		virtual const std::string& getOptionalHppTableImplementationValue() = 0;
		virtual const std::string* getOptionalHppTableImplementationReference() = 0;

		virtual bool isOptionalHppTableObjIncludeNull() = 0;
		virtual const std::string& getOptionalHppTableObjIncludeValue() = 0;
		virtual const std::string* getOptionalHppTableObjIncludeReference() = 0;

		virtual bool isOptionalHppTableObjMembersNull() = 0;
		virtual const std::string& getOptionalHppTableObjMembersValue() = 0;
		virtual const std::string* getOptionalHppTableObjMembersReference() = 0;

		virtual bool isOptionalHppTableObjInterfaceNull() = 0;
		virtual const std::string& getOptionalHppTableObjInterfaceValue() = 0;
		virtual const std::string* getOptionalHppTableObjInterfaceReference() = 0;

		virtual bool isOptionalHppTableObjImplementationNull() = 0;
		virtual const std::string& getOptionalHppTableObjImplementationValue() = 0;
		virtual const std::string* getOptionalHppTableObjImplementationReference() = 0;

		virtual bool isOptionalHppDb2LUWTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppDb2LUWTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppDb2LUWTableIncludeReference() = 0;

		virtual bool isOptionalHppDb2LUWTableMembersNull() = 0;
		virtual const std::string& getOptionalHppDb2LUWTableMembersValue() = 0;
		virtual const std::string* getOptionalHppDb2LUWTableMembersReference() = 0;

		virtual bool isOptionalHppDb2LUWTableImplementationNull() = 0;
		virtual const std::string& getOptionalHppDb2LUWTableImplementationValue() = 0;
		virtual const std::string* getOptionalHppDb2LUWTableImplementationReference() = 0;

		virtual bool isOptionalHppMSSqlTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppMSSqlTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppMSSqlTableIncludeReference() = 0;

		virtual bool isOptionalHppMSSqlTableMembersNull() = 0;
		virtual const std::string& getOptionalHppMSSqlTableMembersValue() = 0;
		virtual const std::string* getOptionalHppMSSqlTableMembersReference() = 0;

		virtual bool isOptionalHppMSSqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalHppMSSqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalHppMSSqlTableImplementationReference() = 0;

		virtual bool isOptionalHppMySqlTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppMySqlTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppMySqlTableIncludeReference() = 0;

		virtual bool isOptionalHppMySqlTableMembersNull() = 0;
		virtual const std::string& getOptionalHppMySqlTableMembersValue() = 0;
		virtual const std::string* getOptionalHppMySqlTableMembersReference() = 0;

		virtual bool isOptionalHppMySqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalHppMySqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalHppMySqlTableImplementationReference() = 0;

		virtual bool isOptionalHppOracleTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppOracleTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppOracleTableIncludeReference() = 0;

		virtual bool isOptionalHppOracleTableMembersNull() = 0;
		virtual const std::string& getOptionalHppOracleTableMembersValue() = 0;
		virtual const std::string* getOptionalHppOracleTableMembersReference() = 0;

		virtual bool isOptionalHppOracleTableImplementationNull() = 0;
		virtual const std::string& getOptionalHppOracleTableImplementationValue() = 0;
		virtual const std::string* getOptionalHppOracleTableImplementationReference() = 0;

		virtual bool isOptionalHppPgSqlTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppPgSqlTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppPgSqlTableIncludeReference() = 0;

		virtual bool isOptionalHppPgSqlTableMembersNull() = 0;
		virtual const std::string& getOptionalHppPgSqlTableMembersValue() = 0;
		virtual const std::string* getOptionalHppPgSqlTableMembersReference() = 0;

		virtual bool isOptionalHppPgSqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalHppPgSqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalHppPgSqlTableImplementationReference() = 0;

		virtual bool isOptionalHppRamTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppRamTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppRamTableIncludeReference() = 0;

		virtual bool isOptionalHppRamTableMembersNull() = 0;
		virtual const std::string& getOptionalHppRamTableMembersValue() = 0;
		virtual const std::string* getOptionalHppRamTableMembersReference() = 0;

		virtual bool isOptionalHppRamTableImplementationNull() = 0;
		virtual const std::string& getOptionalHppRamTableImplementationValue() = 0;
		virtual const std::string* getOptionalHppRamTableImplementationReference() = 0;

		virtual bool isOptionalHppSaxLoaderIncludeNull() = 0;
		virtual const std::string& getOptionalHppSaxLoaderIncludeValue() = 0;
		virtual const std::string* getOptionalHppSaxLoaderIncludeReference() = 0;

		virtual bool isOptionalHppSaxLoaderStartElementNull() = 0;
		virtual const std::string& getOptionalHppSaxLoaderStartElementValue() = 0;
		virtual const std::string* getOptionalHppSaxLoaderStartElementReference() = 0;

		virtual bool isOptionalHppSaxLoaderEndElementNull() = 0;
		virtual const std::string& getOptionalHppSaxLoaderEndElementValue() = 0;
		virtual const std::string* getOptionalHppSaxLoaderEndElementReference() = 0;

		virtual bool isOptionalHppXMsgTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppXMsgTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppXMsgTableIncludeReference() = 0;

		virtual bool isOptionalHppXMsgTableFormattersNull() = 0;
		virtual const std::string& getOptionalHppXMsgTableFormattersValue() = 0;
		virtual const std::string* getOptionalHppXMsgTableFormattersReference() = 0;

		virtual bool isOptionalHppXMsgRqstTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppXMsgRqstTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppXMsgRqstTableIncludeReference() = 0;

		virtual bool isOptionalHppXMsgRspnTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppXMsgRspnTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppXMsgRspnTableIncludeReference() = 0;

		virtual bool isOptionalHppXMsgClientTableIncludeNull() = 0;
		virtual const std::string& getOptionalHppXMsgClientTableIncludeValue() = 0;
		virtual const std::string* getOptionalHppXMsgClientTableIncludeReference() = 0;

		virtual bool isOptionalHppXMsgRqstTableBodyNull() = 0;
		virtual const std::string& getOptionalHppXMsgRqstTableBodyValue() = 0;
		virtual const std::string* getOptionalHppXMsgRqstTableBodyReference() = 0;

		virtual bool isOptionalHppXMsgRspnTableBodyNull() = 0;
		virtual const std::string& getOptionalHppXMsgRspnTableBodyValue() = 0;
		virtual const std::string* getOptionalHppXMsgRspnTableBodyReference() = 0;

		virtual bool isOptionalHppXMsgClientTableBodyNull() = 0;
		virtual const std::string& getOptionalHppXMsgClientTableBodyValue() = 0;
		virtual const std::string* getOptionalHppXMsgClientTableBodyReference() = 0;

		virtual bool isOptionalCsObjMembersNull() = 0;
		virtual const std::string& getOptionalCsObjMembersValue() = 0;
		virtual const std::string* getOptionalCsObjMembersReference() = 0;

		virtual bool isOptionalCsObjInterfaceNull() = 0;
		virtual const std::string& getOptionalCsObjInterfaceValue() = 0;
		virtual const std::string* getOptionalCsObjInterfaceReference() = 0;

		virtual bool isOptionalCsObjUsingNull() = 0;
		virtual const std::string& getOptionalCsObjUsingValue() = 0;
		virtual const std::string* getOptionalCsObjUsingReference() = 0;

		virtual bool isOptionalCsObjImplementationNull() = 0;
		virtual const std::string& getOptionalCsObjImplementationValue() = 0;
		virtual const std::string* getOptionalCsObjImplementationReference() = 0;

		virtual bool isOptionalCsEditObjMembersNull() = 0;
		virtual const std::string& getOptionalCsEditObjMembersValue() = 0;
		virtual const std::string* getOptionalCsEditObjMembersReference() = 0;

		virtual bool isOptionalCsEditObjInterfaceNull() = 0;
		virtual const std::string& getOptionalCsEditObjInterfaceValue() = 0;
		virtual const std::string* getOptionalCsEditObjInterfaceReference() = 0;

		virtual bool isOptionalCsEditObjUsingNull() = 0;
		virtual const std::string& getOptionalCsEditObjUsingValue() = 0;
		virtual const std::string* getOptionalCsEditObjUsingReference() = 0;

		virtual bool isOptionalCsEditObjImplementationNull() = 0;
		virtual const std::string& getOptionalCsEditObjImplementationValue() = 0;
		virtual const std::string* getOptionalCsEditObjImplementationReference() = 0;

		virtual bool isOptionalCsTableUsingNull() = 0;
		virtual const std::string& getOptionalCsTableUsingValue() = 0;
		virtual const std::string* getOptionalCsTableUsingReference() = 0;

		virtual bool isOptionalCsTableMembersNull() = 0;
		virtual const std::string& getOptionalCsTableMembersValue() = 0;
		virtual const std::string* getOptionalCsTableMembersReference() = 0;

		virtual bool isOptionalCsTableInterfaceNull() = 0;
		virtual const std::string& getOptionalCsTableInterfaceValue() = 0;
		virtual const std::string* getOptionalCsTableInterfaceReference() = 0;

		virtual bool isOptionalCsTableImplementationNull() = 0;
		virtual const std::string& getOptionalCsTableImplementationValue() = 0;
		virtual const std::string* getOptionalCsTableImplementationReference() = 0;

		virtual bool isOptionalCsTableObjUsingNull() = 0;
		virtual const std::string& getOptionalCsTableObjUsingValue() = 0;
		virtual const std::string* getOptionalCsTableObjUsingReference() = 0;

		virtual bool isOptionalCsTableObjMembersNull() = 0;
		virtual const std::string& getOptionalCsTableObjMembersValue() = 0;
		virtual const std::string* getOptionalCsTableObjMembersReference() = 0;

		virtual bool isOptionalCsTableObjInterfaceNull() = 0;
		virtual const std::string& getOptionalCsTableObjInterfaceValue() = 0;
		virtual const std::string* getOptionalCsTableObjInterfaceReference() = 0;

		virtual bool isOptionalCsTableObjImplementationNull() = 0;
		virtual const std::string& getOptionalCsTableObjImplementationValue() = 0;
		virtual const std::string* getOptionalCsTableObjImplementationReference() = 0;

		virtual bool isOptionalCsDb2LUWTableUsingNull() = 0;
		virtual const std::string& getOptionalCsDb2LUWTableUsingValue() = 0;
		virtual const std::string* getOptionalCsDb2LUWTableUsingReference() = 0;

		virtual bool isOptionalCsDb2LUWTableMembersNull() = 0;
		virtual const std::string& getOptionalCsDb2LUWTableMembersValue() = 0;
		virtual const std::string* getOptionalCsDb2LUWTableMembersReference() = 0;

		virtual bool isOptionalCsDb2LUWTableImplementationNull() = 0;
		virtual const std::string& getOptionalCsDb2LUWTableImplementationValue() = 0;
		virtual const std::string* getOptionalCsDb2LUWTableImplementationReference() = 0;

		virtual bool isOptionalCsMSSqlTableUsingNull() = 0;
		virtual const std::string& getOptionalCsMSSqlTableUsingValue() = 0;
		virtual const std::string* getOptionalCsMSSqlTableUsingReference() = 0;

		virtual bool isOptionalCsMSSqlTableMembersNull() = 0;
		virtual const std::string& getOptionalCsMSSqlTableMembersValue() = 0;
		virtual const std::string* getOptionalCsMSSqlTableMembersReference() = 0;

		virtual bool isOptionalCsMSSqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalCsMSSqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalCsMSSqlTableImplementationReference() = 0;

		virtual bool isOptionalCsMySqlTableUsingNull() = 0;
		virtual const std::string& getOptionalCsMySqlTableUsingValue() = 0;
		virtual const std::string* getOptionalCsMySqlTableUsingReference() = 0;

		virtual bool isOptionalCsMySqlTableMembersNull() = 0;
		virtual const std::string& getOptionalCsMySqlTableMembersValue() = 0;
		virtual const std::string* getOptionalCsMySqlTableMembersReference() = 0;

		virtual bool isOptionalCsMySqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalCsMySqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalCsMySqlTableImplementationReference() = 0;

		virtual bool isOptionalCsOracleTableUsingNull() = 0;
		virtual const std::string& getOptionalCsOracleTableUsingValue() = 0;
		virtual const std::string* getOptionalCsOracleTableUsingReference() = 0;

		virtual bool isOptionalCsOracleTableMembersNull() = 0;
		virtual const std::string& getOptionalCsOracleTableMembersValue() = 0;
		virtual const std::string* getOptionalCsOracleTableMembersReference() = 0;

		virtual bool isOptionalCsOracleTableImplementationNull() = 0;
		virtual const std::string& getOptionalCsOracleTableImplementationValue() = 0;
		virtual const std::string* getOptionalCsOracleTableImplementationReference() = 0;

		virtual bool isOptionalCsPgSqlTableUsingNull() = 0;
		virtual const std::string& getOptionalCsPgSqlTableUsingValue() = 0;
		virtual const std::string* getOptionalCsPgSqlTableUsingReference() = 0;

		virtual bool isOptionalCsPgSqlTableMembersNull() = 0;
		virtual const std::string& getOptionalCsPgSqlTableMembersValue() = 0;
		virtual const std::string* getOptionalCsPgSqlTableMembersReference() = 0;

		virtual bool isOptionalCsPgSqlTableImplementationNull() = 0;
		virtual const std::string& getOptionalCsPgSqlTableImplementationValue() = 0;
		virtual const std::string* getOptionalCsPgSqlTableImplementationReference() = 0;

		virtual bool isOptionalCsRamTableUsingNull() = 0;
		virtual const std::string& getOptionalCsRamTableUsingValue() = 0;
		virtual const std::string* getOptionalCsRamTableUsingReference() = 0;

		virtual bool isOptionalCsRamTableMembersNull() = 0;
		virtual const std::string& getOptionalCsRamTableMembersValue() = 0;
		virtual const std::string* getOptionalCsRamTableMembersReference() = 0;

		virtual bool isOptionalCsRamTableImplementationNull() = 0;
		virtual const std::string& getOptionalCsRamTableImplementationValue() = 0;
		virtual const std::string* getOptionalCsRamTableImplementationReference() = 0;

		virtual bool isOptionalCsSaxLoaderUsingNull() = 0;
		virtual const std::string& getOptionalCsSaxLoaderUsingValue() = 0;
		virtual const std::string* getOptionalCsSaxLoaderUsingReference() = 0;

		virtual bool isOptionalCsSaxLoaderStartElementNull() = 0;
		virtual const std::string& getOptionalCsSaxLoaderStartElementValue() = 0;
		virtual const std::string* getOptionalCsSaxLoaderStartElementReference() = 0;

		virtual bool isOptionalCsSaxLoaderEndElementNull() = 0;
		virtual const std::string& getOptionalCsSaxLoaderEndElementValue() = 0;
		virtual const std::string* getOptionalCsSaxLoaderEndElementReference() = 0;

		virtual bool isOptionalCsXMsgTableUsingNull() = 0;
		virtual const std::string& getOptionalCsXMsgTableUsingValue() = 0;
		virtual const std::string* getOptionalCsXMsgTableUsingReference() = 0;

		virtual bool isOptionalCsXMsgTableFormattersNull() = 0;
		virtual const std::string& getOptionalCsXMsgTableFormattersValue() = 0;
		virtual const std::string* getOptionalCsXMsgTableFormattersReference() = 0;

		virtual bool isOptionalCsXMsgRqstTableUsingNull() = 0;
		virtual const std::string& getOptionalCsXMsgRqstTableUsingValue() = 0;
		virtual const std::string* getOptionalCsXMsgRqstTableUsingReference() = 0;

		virtual bool isOptionalCsXMsgRspnTableUsingNull() = 0;
		virtual const std::string& getOptionalCsXMsgRspnTableUsingValue() = 0;
		virtual const std::string* getOptionalCsXMsgRspnTableUsingReference() = 0;

		virtual bool isOptionalCsXMsgClientTableUsingNull() = 0;
		virtual const std::string& getOptionalCsXMsgClientTableUsingValue() = 0;
		virtual const std::string* getOptionalCsXMsgClientTableUsingReference() = 0;

		virtual bool isOptionalCsXMsgRqstTableBodyNull() = 0;
		virtual const std::string& getOptionalCsXMsgRqstTableBodyValue() = 0;
		virtual const std::string* getOptionalCsXMsgRqstTableBodyReference() = 0;

		virtual bool isOptionalCsXMsgRspnTableBodyNull() = 0;
		virtual const std::string& getOptionalCsXMsgRspnTableBodyValue() = 0;
		virtual const std::string* getOptionalCsXMsgRspnTableBodyReference() = 0;

		virtual bool isOptionalCsXMsgClientTableBodyNull() = 0;
		virtual const std::string& getOptionalCsXMsgClientTableBodyValue() = 0;
		virtual const std::string* getOptionalCsXMsgClientTableBodyReference() = 0;

		virtual cfbam::ICFBamSchemaDefObj* getRequiredContainerSchemaDef( bool forceRead = false ) = 0;

		virtual cfbam::ICFBamSchemaDefObj* getOptionalLookupDefSchema( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamRelationObj*> getOptionalComponentsRelation( bool forceRead = false ) = 0;

		virtual cfbam::ICFBamIndexObj* getOptionalLookupLookupIndex( bool forceRead = false ) = 0;

		virtual cfbam::ICFBamIndexObj* getOptionalLookupAltIndex( bool forceRead = false ) = 0;

		virtual cfbam::ICFBamTableObj* getOptionalLookupQualTable( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamIndexObj*> getOptionalComponentsIndex( bool forceRead = false ) = 0;

		virtual cfbam::ICFBamIndexObj* getOptionalLookupPrimaryIndex( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamValueObj*> getOptionalComponentsColumns( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamRelationObj*> getOptionalChildrenReverseRelations( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamChainObj*> getOptionalComponentsChains( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamDelTopDepObj*> getOptionalComponentsDelDep( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamClearTopDepObj*> getOptionalComponentsClearDep( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamId16GenObj*> getOptionalChildrenDispId16Gen( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamId32GenObj*> getOptionalChildrenDispId32Gen( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamId64GenObj*> getOptionalChildrenDispId64Gen( bool forceRead = false ) = 0;

		virtual std::vector<cfbam::ICFBamServerMethodObj*> getOptionalComponentsServerMethods( bool forceRead = false ) = 0;

		public:
			virtual std::vector<cfbam::ICFBamRelationObj*> getOnlyOwnerRelations() = 0;
			virtual std::vector<cfbam::ICFBamRelationObj*> getContainerOwnerRelations() = 0;
			virtual cfbam::ICFBamRelationObj* getContainerRelation() = 0;
			virtual cfbam::ICFBamRelationObj* getInheritedContainerRelation() = 0;
			virtual cfbam::ICFBamRelationObj* getOwnerRelation() = 0;
			virtual cfbam::ICFBamRelationObj* getInheritedOwnerRelation() = 0;
			virtual std::vector<cfbam::ICFBamRelationObj*> getOwnerLookupRelations() = 0;
			virtual std::vector<cfbam::ICFBamRelationObj*> getOwnerContainerNamedLookupChainRelations() = 0;
			virtual std::vector<cfbam::ICFBamAtomObj*> getChildrenAtoms() = 0;
			virtual cfbam::ICFBamRelationObj* getSuperClassRelation() = 0;
			virtual std::vector<cfbam::ICFBamRelationObj*> getSubClassRelations() = 0;
			virtual cfbam::ICFBamIndexObj* getPrimaryKeyIndex() = 0;
			virtual std::vector<cfbam::ICFBamRelationObj*> getFactoryOwnerRelations() = 0;
			virtual std::vector<cfbam::ICFBamIndexObj*> getInheritedIndexes() = 0;
			virtual std::vector<cfbam::ICFBamIndexObj*> getChildrenIndexes() = 0;
			virtual std::vector<cfbam::ICFBamRelationObj*> getInheritedRelations() = 0;
			virtual std::vector<cfbam::ICFBamRelationObj*> getChildrenRelations() = 0;

	};
}
