// Description: C++18 Schema Object implementation for CFBam.

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
#include <cfbamobj/CFBamSchemaObj.hpp>

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
	const std::string CFBamSchemaObj::CLASS_NAME( "CFBamSchemaObj" );
	const std::string CFBamSchemaObj::SCHEMA_NAME( "CFBam" );
	const std::string CFBamSchemaObj::SCHEMA_DBNAME( "cfbam213" );
	const std::string CFBamSchemaObj::S_System( "system" );

	CFBamSchemaObj::CFBamSchemaObj() {
		authorization = NULL;
		backingStore = NULL;
		secClusterName = new std::string( S_System );
		secTenantName = new std::string( S_System );
		secUserName = new std::string( S_System );
		secCluster = NULL;
		secClusterId = 0L;
		secTenant = NULL;
		secTenantId = 0L;
		secUser = NULL;
		for( int i = 0; i < 16; i++ ) {
			secSessionUserId[i] = 0;
		}
		secSession = NULL;
		for( int i = 0; i < 16; i++ ) {
			secSessionSessionId[i] = 0;
		}
		schemaDbName = new std::string( SCHEMA_DBNAME );
		lowerDbSchemaName = new std::string( SCHEMA_DBNAME );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );
		chainTableObj = new CFBamChainTableObj( this );
		clusterTableObj = new CFBamClusterTableObj( this );
		enumTagTableObj = new CFBamEnumTagTableObj( this );
		hostNodeTableObj = new CFBamHostNodeTableObj( this );
		iSOCcyTableObj = new CFBamISOCcyTableObj( this );
		iSOCtryTableObj = new CFBamISOCtryTableObj( this );
		iSOCtryCcyTableObj = new CFBamISOCtryCcyTableObj( this );
		iSOCtryLangTableObj = new CFBamISOCtryLangTableObj( this );
		iSOLangTableObj = new CFBamISOLangTableObj( this );
		iSOTZoneTableObj = new CFBamISOTZoneTableObj( this );
		indexColTableObj = new CFBamIndexColTableObj( this );
		licenseTableObj = new CFBamLicenseTableObj( this );
		majorVersionTableObj = new CFBamMajorVersionTableObj( this );
		mimeTypeTableObj = new CFBamMimeTypeTableObj( this );
		minorVersionTableObj = new CFBamMinorVersionTableObj( this );
		paramTableObj = new CFBamParamTableObj( this );
		relationColTableObj = new CFBamRelationColTableObj( this );
		scopeTableObj = new CFBamScopeTableObj( this );
		schemaDefTableObj = new CFBamSchemaDefTableObj( this );
		schemaRefTableObj = new CFBamSchemaRefTableObj( this );
		serverMethodTableObj = new CFBamServerMethodTableObj( this );
		serverObjFuncTableObj = new CFBamServerObjFuncTableObj( this );
		serverProcTableObj = new CFBamServerProcTableObj( this );
		serverListFuncTableObj = new CFBamServerListFuncTableObj( this );
		tableTableObj = new CFBamTableTableObj( this );
		clearDepTableObj = new CFBamClearDepTableObj( this );
		clearSubDep1TableObj = new CFBamClearSubDep1TableObj( this );
		clearSubDep2TableObj = new CFBamClearSubDep2TableObj( this );
		clearSubDep3TableObj = new CFBamClearSubDep3TableObj( this );
		clearTopDepTableObj = new CFBamClearTopDepTableObj( this );
		delDepTableObj = new CFBamDelDepTableObj( this );
		delSubDep1TableObj = new CFBamDelSubDep1TableObj( this );
		delSubDep2TableObj = new CFBamDelSubDep2TableObj( this );
		delSubDep3TableObj = new CFBamDelSubDep3TableObj( this );
		delTopDepTableObj = new CFBamDelTopDepTableObj( this );
		indexTableObj = new CFBamIndexTableObj( this );
		popDepTableObj = new CFBamPopDepTableObj( this );
		popSubDep1TableObj = new CFBamPopSubDep1TableObj( this );
		popSubDep2TableObj = new CFBamPopSubDep2TableObj( this );
		popSubDep3TableObj = new CFBamPopSubDep3TableObj( this );
		popTopDepTableObj = new CFBamPopTopDepTableObj( this );
		relationTableObj = new CFBamRelationTableObj( this );
		secAppTableObj = new CFBamSecAppTableObj( this );
		secDeviceTableObj = new CFBamSecDeviceTableObj( this );
		secFormTableObj = new CFBamSecFormTableObj( this );
		secGroupTableObj = new CFBamSecGroupTableObj( this );
		secGroupFormTableObj = new CFBamSecGroupFormTableObj( this );
		secGrpIncTableObj = new CFBamSecGrpIncTableObj( this );
		secGrpMembTableObj = new CFBamSecGrpMembTableObj( this );
		secSessionTableObj = new CFBamSecSessionTableObj( this );
		secUserTableObj = new CFBamSecUserTableObj( this );
		serviceTableObj = new CFBamServiceTableObj( this );
		serviceTypeTableObj = new CFBamServiceTypeTableObj( this );
		subProjectTableObj = new CFBamSubProjectTableObj( this );
		sysClusterTableObj = new CFBamSysClusterTableObj( this );
		tSecGroupTableObj = new CFBamTSecGroupTableObj( this );
		tSecGrpIncTableObj = new CFBamTSecGrpIncTableObj( this );
		tSecGrpMembTableObj = new CFBamTSecGrpMembTableObj( this );
		tenantTableObj = new CFBamTenantTableObj( this );
		tldTableObj = new CFBamTldTableObj( this );
		topDomainTableObj = new CFBamTopDomainTableObj( this );
		topProjectTableObj = new CFBamTopProjectTableObj( this );
		uRLProtocolTableObj = new CFBamURLProtocolTableObj( this );
		valueTableObj = new CFBamValueTableObj( this );
		atomTableObj = new CFBamAtomTableObj( this );
		blobDefTableObj = new CFBamBlobDefTableObj( this );
		blobTypeTableObj = new CFBamBlobTypeTableObj( this );
		blobColTableObj = new CFBamBlobColTableObj( this );
		boolDefTableObj = new CFBamBoolDefTableObj( this );
		boolTypeTableObj = new CFBamBoolTypeTableObj( this );
		boolColTableObj = new CFBamBoolColTableObj( this );
		dateDefTableObj = new CFBamDateDefTableObj( this );
		dateTypeTableObj = new CFBamDateTypeTableObj( this );
		dateColTableObj = new CFBamDateColTableObj( this );
		doubleDefTableObj = new CFBamDoubleDefTableObj( this );
		doubleTypeTableObj = new CFBamDoubleTypeTableObj( this );
		doubleColTableObj = new CFBamDoubleColTableObj( this );
		floatDefTableObj = new CFBamFloatDefTableObj( this );
		floatTypeTableObj = new CFBamFloatTypeTableObj( this );
		floatColTableObj = new CFBamFloatColTableObj( this );
		int16DefTableObj = new CFBamInt16DefTableObj( this );
		int16TypeTableObj = new CFBamInt16TypeTableObj( this );
		id16GenTableObj = new CFBamId16GenTableObj( this );
		enumDefTableObj = new CFBamEnumDefTableObj( this );
		enumTypeTableObj = new CFBamEnumTypeTableObj( this );
		int16ColTableObj = new CFBamInt16ColTableObj( this );
		int32DefTableObj = new CFBamInt32DefTableObj( this );
		int32TypeTableObj = new CFBamInt32TypeTableObj( this );
		id32GenTableObj = new CFBamId32GenTableObj( this );
		int32ColTableObj = new CFBamInt32ColTableObj( this );
		int64DefTableObj = new CFBamInt64DefTableObj( this );
		int64TypeTableObj = new CFBamInt64TypeTableObj( this );
		id64GenTableObj = new CFBamId64GenTableObj( this );
		int64ColTableObj = new CFBamInt64ColTableObj( this );
		nmTokenDefTableObj = new CFBamNmTokenDefTableObj( this );
		nmTokenTypeTableObj = new CFBamNmTokenTypeTableObj( this );
		nmTokenColTableObj = new CFBamNmTokenColTableObj( this );
		nmTokensDefTableObj = new CFBamNmTokensDefTableObj( this );
		nmTokensTypeTableObj = new CFBamNmTokensTypeTableObj( this );
		nmTokensColTableObj = new CFBamNmTokensColTableObj( this );
		numberDefTableObj = new CFBamNumberDefTableObj( this );
		numberTypeTableObj = new CFBamNumberTypeTableObj( this );
		numberColTableObj = new CFBamNumberColTableObj( this );
		stringDefTableObj = new CFBamStringDefTableObj( this );
		stringTypeTableObj = new CFBamStringTypeTableObj( this );
		stringColTableObj = new CFBamStringColTableObj( this );
		tZDateDefTableObj = new CFBamTZDateDefTableObj( this );
		tZDateTypeTableObj = new CFBamTZDateTypeTableObj( this );
		tZDateColTableObj = new CFBamTZDateColTableObj( this );
		tZTimeDefTableObj = new CFBamTZTimeDefTableObj( this );
		tZTimeTypeTableObj = new CFBamTZTimeTypeTableObj( this );
		tZTimeColTableObj = new CFBamTZTimeColTableObj( this );
		tZTimestampDefTableObj = new CFBamTZTimestampDefTableObj( this );
		tZTimestampTypeTableObj = new CFBamTZTimestampTypeTableObj( this );
		tZTimestampColTableObj = new CFBamTZTimestampColTableObj( this );
		textDefTableObj = new CFBamTextDefTableObj( this );
		textTypeTableObj = new CFBamTextTypeTableObj( this );
		textColTableObj = new CFBamTextColTableObj( this );
		timeDefTableObj = new CFBamTimeDefTableObj( this );
		timeTypeTableObj = new CFBamTimeTypeTableObj( this );
		timeColTableObj = new CFBamTimeColTableObj( this );
		timestampDefTableObj = new CFBamTimestampDefTableObj( this );
		timestampTypeTableObj = new CFBamTimestampTypeTableObj( this );
		timestampColTableObj = new CFBamTimestampColTableObj( this );
		tokenDefTableObj = new CFBamTokenDefTableObj( this );
		tokenTypeTableObj = new CFBamTokenTypeTableObj( this );
		tokenColTableObj = new CFBamTokenColTableObj( this );
		uInt16DefTableObj = new CFBamUInt16DefTableObj( this );
		uInt16TypeTableObj = new CFBamUInt16TypeTableObj( this );
		uInt16ColTableObj = new CFBamUInt16ColTableObj( this );
		uInt32DefTableObj = new CFBamUInt32DefTableObj( this );
		uInt32TypeTableObj = new CFBamUInt32TypeTableObj( this );
		uInt32ColTableObj = new CFBamUInt32ColTableObj( this );
		uInt64DefTableObj = new CFBamUInt64DefTableObj( this );
		uInt64TypeTableObj = new CFBamUInt64TypeTableObj( this );
		uInt64ColTableObj = new CFBamUInt64ColTableObj( this );
		uuidDefTableObj = new CFBamUuidDefTableObj( this );
		uuidTypeTableObj = new CFBamUuidTypeTableObj( this );
		uuidGenTableObj = new CFBamUuidGenTableObj( this );
		uuidColTableObj = new CFBamUuidColTableObj( this );
		tableColTableObj = new CFBamTableColTableObj( this );
	}

	CFBamSchemaObj::~CFBamSchemaObj() {
		authorization = NULL;
		backingStore = NULL;
		if( secClusterName != NULL ) {
			delete secClusterName;
			secClusterName = NULL;
		}
		if( secTenantName != NULL ) {
			delete secTenantName;
			secTenantName = NULL;
		}
		if( secUserName != NULL ) {
			delete secUserName;
			secUserName = NULL;
		}
		secCluster = NULL;
		secClusterId = 0L;
		secTenant = NULL;
		secTenantId = 0L;
		secUser = NULL;
		for( int i = 0; i < 16; i++ ) {
			secSessionUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			secSessionSessionId[i] = 0;
		}
		if( schemaDbName != NULL ) {
			delete schemaDbName;
			schemaDbName = NULL;
		}
		if( lowerDbSchemaName != NULL ) {
			delete lowerDbSchemaName;
			lowerDbSchemaName = NULL;
		}

		if( chainTableObj != NULL ) {
			chainTableObj->minimizeMemory();
		}

		if( chainTableObj != NULL ) {
			delete chainTableObj;
			chainTableObj = NULL;
		}

		if( clusterTableObj != NULL ) {
			clusterTableObj->minimizeMemory();
		}

		if( clusterTableObj != NULL ) {
			delete clusterTableObj;
			clusterTableObj = NULL;
		}

		if( enumTagTableObj != NULL ) {
			enumTagTableObj->minimizeMemory();
		}

		if( enumTagTableObj != NULL ) {
			delete enumTagTableObj;
			enumTagTableObj = NULL;
		}

		if( hostNodeTableObj != NULL ) {
			hostNodeTableObj->minimizeMemory();
		}

		if( hostNodeTableObj != NULL ) {
			delete hostNodeTableObj;
			hostNodeTableObj = NULL;
		}

		if( iSOCcyTableObj != NULL ) {
			iSOCcyTableObj->minimizeMemory();
		}

		if( iSOCcyTableObj != NULL ) {
			delete iSOCcyTableObj;
			iSOCcyTableObj = NULL;
		}

		if( iSOCtryTableObj != NULL ) {
			iSOCtryTableObj->minimizeMemory();
		}

		if( iSOCtryTableObj != NULL ) {
			delete iSOCtryTableObj;
			iSOCtryTableObj = NULL;
		}

		if( iSOCtryCcyTableObj != NULL ) {
			iSOCtryCcyTableObj->minimizeMemory();
		}

		if( iSOCtryCcyTableObj != NULL ) {
			delete iSOCtryCcyTableObj;
			iSOCtryCcyTableObj = NULL;
		}

		if( iSOCtryLangTableObj != NULL ) {
			iSOCtryLangTableObj->minimizeMemory();
		}

		if( iSOCtryLangTableObj != NULL ) {
			delete iSOCtryLangTableObj;
			iSOCtryLangTableObj = NULL;
		}

		if( iSOLangTableObj != NULL ) {
			iSOLangTableObj->minimizeMemory();
		}

		if( iSOLangTableObj != NULL ) {
			delete iSOLangTableObj;
			iSOLangTableObj = NULL;
		}

		if( iSOTZoneTableObj != NULL ) {
			iSOTZoneTableObj->minimizeMemory();
		}

		if( iSOTZoneTableObj != NULL ) {
			delete iSOTZoneTableObj;
			iSOTZoneTableObj = NULL;
		}

		if( indexColTableObj != NULL ) {
			indexColTableObj->minimizeMemory();
		}

		if( indexColTableObj != NULL ) {
			delete indexColTableObj;
			indexColTableObj = NULL;
		}

		if( licenseTableObj != NULL ) {
			licenseTableObj->minimizeMemory();
		}

		if( licenseTableObj != NULL ) {
			delete licenseTableObj;
			licenseTableObj = NULL;
		}

		if( majorVersionTableObj != NULL ) {
			majorVersionTableObj->minimizeMemory();
		}

		if( majorVersionTableObj != NULL ) {
			delete majorVersionTableObj;
			majorVersionTableObj = NULL;
		}

		if( mimeTypeTableObj != NULL ) {
			mimeTypeTableObj->minimizeMemory();
		}

		if( mimeTypeTableObj != NULL ) {
			delete mimeTypeTableObj;
			mimeTypeTableObj = NULL;
		}

		if( minorVersionTableObj != NULL ) {
			minorVersionTableObj->minimizeMemory();
		}

		if( minorVersionTableObj != NULL ) {
			delete minorVersionTableObj;
			minorVersionTableObj = NULL;
		}

		if( paramTableObj != NULL ) {
			paramTableObj->minimizeMemory();
		}

		if( paramTableObj != NULL ) {
			delete paramTableObj;
			paramTableObj = NULL;
		}

		if( relationColTableObj != NULL ) {
			relationColTableObj->minimizeMemory();
		}

		if( relationColTableObj != NULL ) {
			delete relationColTableObj;
			relationColTableObj = NULL;
		}

		if( schemaDefTableObj != NULL ) {
			schemaDefTableObj->minimizeMemory();
		}
		if( schemaRefTableObj != NULL ) {
			schemaRefTableObj->minimizeMemory();
		}
		if( serverObjFuncTableObj != NULL ) {
			serverObjFuncTableObj->minimizeMemory();
		}
		if( serverProcTableObj != NULL ) {
			serverProcTableObj->minimizeMemory();
		}
		if( serverListFuncTableObj != NULL ) {
			serverListFuncTableObj->minimizeMemory();
		}
		if( serverMethodTableObj != NULL ) {
			serverMethodTableObj->minimizeMemory();
		}
		if( tableTableObj != NULL ) {
			tableTableObj->minimizeMemory();
		}
		if( clearSubDep1TableObj != NULL ) {
			clearSubDep1TableObj->minimizeMemory();
		}
		if( clearSubDep2TableObj != NULL ) {
			clearSubDep2TableObj->minimizeMemory();
		}
		if( clearSubDep3TableObj != NULL ) {
			clearSubDep3TableObj->minimizeMemory();
		}
		if( clearTopDepTableObj != NULL ) {
			clearTopDepTableObj->minimizeMemory();
		}
		if( clearDepTableObj != NULL ) {
			clearDepTableObj->minimizeMemory();
		}
		if( delSubDep1TableObj != NULL ) {
			delSubDep1TableObj->minimizeMemory();
		}
		if( delSubDep2TableObj != NULL ) {
			delSubDep2TableObj->minimizeMemory();
		}
		if( delSubDep3TableObj != NULL ) {
			delSubDep3TableObj->minimizeMemory();
		}
		if( delTopDepTableObj != NULL ) {
			delTopDepTableObj->minimizeMemory();
		}
		if( delDepTableObj != NULL ) {
			delDepTableObj->minimizeMemory();
		}
		if( indexTableObj != NULL ) {
			indexTableObj->minimizeMemory();
		}
		if( popSubDep1TableObj != NULL ) {
			popSubDep1TableObj->minimizeMemory();
		}
		if( popSubDep2TableObj != NULL ) {
			popSubDep2TableObj->minimizeMemory();
		}
		if( popSubDep3TableObj != NULL ) {
			popSubDep3TableObj->minimizeMemory();
		}
		if( popTopDepTableObj != NULL ) {
			popTopDepTableObj->minimizeMemory();
		}
		if( popDepTableObj != NULL ) {
			popDepTableObj->minimizeMemory();
		}
		if( relationTableObj != NULL ) {
			relationTableObj->minimizeMemory();
		}
		if( scopeTableObj != NULL ) {
			scopeTableObj->minimizeMemory();
		}

		if( schemaDefTableObj != NULL ) {
			delete schemaDefTableObj;
			schemaDefTableObj = NULL;
		}
		if( schemaRefTableObj != NULL ) {
			delete schemaRefTableObj;
			schemaRefTableObj = NULL;
		}
		if( serverObjFuncTableObj != NULL ) {
			delete serverObjFuncTableObj;
			serverObjFuncTableObj = NULL;
		}
		if( serverProcTableObj != NULL ) {
			delete serverProcTableObj;
			serverProcTableObj = NULL;
		}
		if( serverListFuncTableObj != NULL ) {
			delete serverListFuncTableObj;
			serverListFuncTableObj = NULL;
		}
		if( serverMethodTableObj != NULL ) {
			delete serverMethodTableObj;
			serverMethodTableObj = NULL;
		}
		if( tableTableObj != NULL ) {
			delete tableTableObj;
			tableTableObj = NULL;
		}
		if( clearSubDep1TableObj != NULL ) {
			delete clearSubDep1TableObj;
			clearSubDep1TableObj = NULL;
		}
		if( clearSubDep2TableObj != NULL ) {
			delete clearSubDep2TableObj;
			clearSubDep2TableObj = NULL;
		}
		if( clearSubDep3TableObj != NULL ) {
			delete clearSubDep3TableObj;
			clearSubDep3TableObj = NULL;
		}
		if( clearTopDepTableObj != NULL ) {
			delete clearTopDepTableObj;
			clearTopDepTableObj = NULL;
		}
		if( clearDepTableObj != NULL ) {
			delete clearDepTableObj;
			clearDepTableObj = NULL;
		}
		if( delSubDep1TableObj != NULL ) {
			delete delSubDep1TableObj;
			delSubDep1TableObj = NULL;
		}
		if( delSubDep2TableObj != NULL ) {
			delete delSubDep2TableObj;
			delSubDep2TableObj = NULL;
		}
		if( delSubDep3TableObj != NULL ) {
			delete delSubDep3TableObj;
			delSubDep3TableObj = NULL;
		}
		if( delTopDepTableObj != NULL ) {
			delete delTopDepTableObj;
			delTopDepTableObj = NULL;
		}
		if( delDepTableObj != NULL ) {
			delete delDepTableObj;
			delDepTableObj = NULL;
		}
		if( indexTableObj != NULL ) {
			delete indexTableObj;
			indexTableObj = NULL;
		}
		if( popSubDep1TableObj != NULL ) {
			delete popSubDep1TableObj;
			popSubDep1TableObj = NULL;
		}
		if( popSubDep2TableObj != NULL ) {
			delete popSubDep2TableObj;
			popSubDep2TableObj = NULL;
		}
		if( popSubDep3TableObj != NULL ) {
			delete popSubDep3TableObj;
			popSubDep3TableObj = NULL;
		}
		if( popTopDepTableObj != NULL ) {
			delete popTopDepTableObj;
			popTopDepTableObj = NULL;
		}
		if( popDepTableObj != NULL ) {
			delete popDepTableObj;
			popDepTableObj = NULL;
		}
		if( relationTableObj != NULL ) {
			delete relationTableObj;
			relationTableObj = NULL;
		}
		if( scopeTableObj != NULL ) {
			delete scopeTableObj;
			scopeTableObj = NULL;
		}

		if( secAppTableObj != NULL ) {
			secAppTableObj->minimizeMemory();
		}

		if( secAppTableObj != NULL ) {
			delete secAppTableObj;
			secAppTableObj = NULL;
		}

		if( secDeviceTableObj != NULL ) {
			secDeviceTableObj->minimizeMemory();
		}

		if( secDeviceTableObj != NULL ) {
			delete secDeviceTableObj;
			secDeviceTableObj = NULL;
		}

		if( secFormTableObj != NULL ) {
			secFormTableObj->minimizeMemory();
		}

		if( secFormTableObj != NULL ) {
			delete secFormTableObj;
			secFormTableObj = NULL;
		}

		if( secGroupTableObj != NULL ) {
			secGroupTableObj->minimizeMemory();
		}

		if( secGroupTableObj != NULL ) {
			delete secGroupTableObj;
			secGroupTableObj = NULL;
		}

		if( secGroupFormTableObj != NULL ) {
			secGroupFormTableObj->minimizeMemory();
		}

		if( secGroupFormTableObj != NULL ) {
			delete secGroupFormTableObj;
			secGroupFormTableObj = NULL;
		}

		if( secGrpIncTableObj != NULL ) {
			secGrpIncTableObj->minimizeMemory();
		}

		if( secGrpIncTableObj != NULL ) {
			delete secGrpIncTableObj;
			secGrpIncTableObj = NULL;
		}

		if( secGrpMembTableObj != NULL ) {
			secGrpMembTableObj->minimizeMemory();
		}

		if( secGrpMembTableObj != NULL ) {
			delete secGrpMembTableObj;
			secGrpMembTableObj = NULL;
		}

		if( secSessionTableObj != NULL ) {
			secSessionTableObj->minimizeMemory();
		}

		if( secSessionTableObj != NULL ) {
			delete secSessionTableObj;
			secSessionTableObj = NULL;
		}

		if( secUserTableObj != NULL ) {
			secUserTableObj->minimizeMemory();
		}

		if( secUserTableObj != NULL ) {
			delete secUserTableObj;
			secUserTableObj = NULL;
		}

		if( serviceTableObj != NULL ) {
			serviceTableObj->minimizeMemory();
		}

		if( serviceTableObj != NULL ) {
			delete serviceTableObj;
			serviceTableObj = NULL;
		}

		if( serviceTypeTableObj != NULL ) {
			serviceTypeTableObj->minimizeMemory();
		}

		if( serviceTypeTableObj != NULL ) {
			delete serviceTypeTableObj;
			serviceTypeTableObj = NULL;
		}

		if( subProjectTableObj != NULL ) {
			subProjectTableObj->minimizeMemory();
		}

		if( subProjectTableObj != NULL ) {
			delete subProjectTableObj;
			subProjectTableObj = NULL;
		}

		if( sysClusterTableObj != NULL ) {
			sysClusterTableObj->minimizeMemory();
		}

		if( sysClusterTableObj != NULL ) {
			delete sysClusterTableObj;
			sysClusterTableObj = NULL;
		}

		if( tSecGroupTableObj != NULL ) {
			tSecGroupTableObj->minimizeMemory();
		}

		if( tSecGroupTableObj != NULL ) {
			delete tSecGroupTableObj;
			tSecGroupTableObj = NULL;
		}

		if( tSecGrpIncTableObj != NULL ) {
			tSecGrpIncTableObj->minimizeMemory();
		}

		if( tSecGrpIncTableObj != NULL ) {
			delete tSecGrpIncTableObj;
			tSecGrpIncTableObj = NULL;
		}

		if( tSecGrpMembTableObj != NULL ) {
			tSecGrpMembTableObj->minimizeMemory();
		}

		if( tSecGrpMembTableObj != NULL ) {
			delete tSecGrpMembTableObj;
			tSecGrpMembTableObj = NULL;
		}

		if( tenantTableObj != NULL ) {
			tenantTableObj->minimizeMemory();
		}

		if( tenantTableObj != NULL ) {
			delete tenantTableObj;
			tenantTableObj = NULL;
		}

		if( tldTableObj != NULL ) {
			tldTableObj->minimizeMemory();
		}

		if( tldTableObj != NULL ) {
			delete tldTableObj;
			tldTableObj = NULL;
		}

		if( topDomainTableObj != NULL ) {
			topDomainTableObj->minimizeMemory();
		}

		if( topDomainTableObj != NULL ) {
			delete topDomainTableObj;
			topDomainTableObj = NULL;
		}

		if( topProjectTableObj != NULL ) {
			topProjectTableObj->minimizeMemory();
		}

		if( topProjectTableObj != NULL ) {
			delete topProjectTableObj;
			topProjectTableObj = NULL;
		}

		if( uRLProtocolTableObj != NULL ) {
			uRLProtocolTableObj->minimizeMemory();
		}

		if( uRLProtocolTableObj != NULL ) {
			delete uRLProtocolTableObj;
			uRLProtocolTableObj = NULL;
		}

		if( blobTypeTableObj != NULL ) {
			blobTypeTableObj->minimizeMemory();
		}
		if( blobColTableObj != NULL ) {
			blobColTableObj->minimizeMemory();
		}
		if( blobDefTableObj != NULL ) {
			blobDefTableObj->minimizeMemory();
		}
		if( boolTypeTableObj != NULL ) {
			boolTypeTableObj->minimizeMemory();
		}
		if( boolColTableObj != NULL ) {
			boolColTableObj->minimizeMemory();
		}
		if( boolDefTableObj != NULL ) {
			boolDefTableObj->minimizeMemory();
		}
		if( dateTypeTableObj != NULL ) {
			dateTypeTableObj->minimizeMemory();
		}
		if( dateColTableObj != NULL ) {
			dateColTableObj->minimizeMemory();
		}
		if( dateDefTableObj != NULL ) {
			dateDefTableObj->minimizeMemory();
		}
		if( doubleTypeTableObj != NULL ) {
			doubleTypeTableObj->minimizeMemory();
		}
		if( doubleColTableObj != NULL ) {
			doubleColTableObj->minimizeMemory();
		}
		if( doubleDefTableObj != NULL ) {
			doubleDefTableObj->minimizeMemory();
		}
		if( floatTypeTableObj != NULL ) {
			floatTypeTableObj->minimizeMemory();
		}
		if( floatColTableObj != NULL ) {
			floatColTableObj->minimizeMemory();
		}
		if( floatDefTableObj != NULL ) {
			floatDefTableObj->minimizeMemory();
		}
		if( id16GenTableObj != NULL ) {
			id16GenTableObj->minimizeMemory();
		}
		if( int16TypeTableObj != NULL ) {
			int16TypeTableObj->minimizeMemory();
		}
		if( enumTypeTableObj != NULL ) {
			enumTypeTableObj->minimizeMemory();
		}
		if( enumDefTableObj != NULL ) {
			enumDefTableObj->minimizeMemory();
		}
		if( int16ColTableObj != NULL ) {
			int16ColTableObj->minimizeMemory();
		}
		if( int16DefTableObj != NULL ) {
			int16DefTableObj->minimizeMemory();
		}
		if( id32GenTableObj != NULL ) {
			id32GenTableObj->minimizeMemory();
		}
		if( int32TypeTableObj != NULL ) {
			int32TypeTableObj->minimizeMemory();
		}
		if( int32ColTableObj != NULL ) {
			int32ColTableObj->minimizeMemory();
		}
		if( int32DefTableObj != NULL ) {
			int32DefTableObj->minimizeMemory();
		}
		if( id64GenTableObj != NULL ) {
			id64GenTableObj->minimizeMemory();
		}
		if( int64TypeTableObj != NULL ) {
			int64TypeTableObj->minimizeMemory();
		}
		if( int64ColTableObj != NULL ) {
			int64ColTableObj->minimizeMemory();
		}
		if( int64DefTableObj != NULL ) {
			int64DefTableObj->minimizeMemory();
		}
		if( nmTokenTypeTableObj != NULL ) {
			nmTokenTypeTableObj->minimizeMemory();
		}
		if( nmTokenColTableObj != NULL ) {
			nmTokenColTableObj->minimizeMemory();
		}
		if( nmTokenDefTableObj != NULL ) {
			nmTokenDefTableObj->minimizeMemory();
		}
		if( nmTokensTypeTableObj != NULL ) {
			nmTokensTypeTableObj->minimizeMemory();
		}
		if( nmTokensColTableObj != NULL ) {
			nmTokensColTableObj->minimizeMemory();
		}
		if( nmTokensDefTableObj != NULL ) {
			nmTokensDefTableObj->minimizeMemory();
		}
		if( numberTypeTableObj != NULL ) {
			numberTypeTableObj->minimizeMemory();
		}
		if( numberColTableObj != NULL ) {
			numberColTableObj->minimizeMemory();
		}
		if( numberDefTableObj != NULL ) {
			numberDefTableObj->minimizeMemory();
		}
		if( stringTypeTableObj != NULL ) {
			stringTypeTableObj->minimizeMemory();
		}
		if( stringColTableObj != NULL ) {
			stringColTableObj->minimizeMemory();
		}
		if( stringDefTableObj != NULL ) {
			stringDefTableObj->minimizeMemory();
		}
		if( tZDateTypeTableObj != NULL ) {
			tZDateTypeTableObj->minimizeMemory();
		}
		if( tZDateColTableObj != NULL ) {
			tZDateColTableObj->minimizeMemory();
		}
		if( tZDateDefTableObj != NULL ) {
			tZDateDefTableObj->minimizeMemory();
		}
		if( tZTimeTypeTableObj != NULL ) {
			tZTimeTypeTableObj->minimizeMemory();
		}
		if( tZTimeColTableObj != NULL ) {
			tZTimeColTableObj->minimizeMemory();
		}
		if( tZTimeDefTableObj != NULL ) {
			tZTimeDefTableObj->minimizeMemory();
		}
		if( tZTimestampTypeTableObj != NULL ) {
			tZTimestampTypeTableObj->minimizeMemory();
		}
		if( tZTimestampColTableObj != NULL ) {
			tZTimestampColTableObj->minimizeMemory();
		}
		if( tZTimestampDefTableObj != NULL ) {
			tZTimestampDefTableObj->minimizeMemory();
		}
		if( textTypeTableObj != NULL ) {
			textTypeTableObj->minimizeMemory();
		}
		if( textColTableObj != NULL ) {
			textColTableObj->minimizeMemory();
		}
		if( textDefTableObj != NULL ) {
			textDefTableObj->minimizeMemory();
		}
		if( timeTypeTableObj != NULL ) {
			timeTypeTableObj->minimizeMemory();
		}
		if( timeColTableObj != NULL ) {
			timeColTableObj->minimizeMemory();
		}
		if( timeDefTableObj != NULL ) {
			timeDefTableObj->minimizeMemory();
		}
		if( timestampTypeTableObj != NULL ) {
			timestampTypeTableObj->minimizeMemory();
		}
		if( timestampColTableObj != NULL ) {
			timestampColTableObj->minimizeMemory();
		}
		if( timestampDefTableObj != NULL ) {
			timestampDefTableObj->minimizeMemory();
		}
		if( tokenTypeTableObj != NULL ) {
			tokenTypeTableObj->minimizeMemory();
		}
		if( tokenColTableObj != NULL ) {
			tokenColTableObj->minimizeMemory();
		}
		if( tokenDefTableObj != NULL ) {
			tokenDefTableObj->minimizeMemory();
		}
		if( uInt16TypeTableObj != NULL ) {
			uInt16TypeTableObj->minimizeMemory();
		}
		if( uInt16ColTableObj != NULL ) {
			uInt16ColTableObj->minimizeMemory();
		}
		if( uInt16DefTableObj != NULL ) {
			uInt16DefTableObj->minimizeMemory();
		}
		if( uInt32TypeTableObj != NULL ) {
			uInt32TypeTableObj->minimizeMemory();
		}
		if( uInt32ColTableObj != NULL ) {
			uInt32ColTableObj->minimizeMemory();
		}
		if( uInt32DefTableObj != NULL ) {
			uInt32DefTableObj->minimizeMemory();
		}
		if( uInt64TypeTableObj != NULL ) {
			uInt64TypeTableObj->minimizeMemory();
		}
		if( uInt64ColTableObj != NULL ) {
			uInt64ColTableObj->minimizeMemory();
		}
		if( uInt64DefTableObj != NULL ) {
			uInt64DefTableObj->minimizeMemory();
		}
		if( uuidGenTableObj != NULL ) {
			uuidGenTableObj->minimizeMemory();
		}
		if( uuidTypeTableObj != NULL ) {
			uuidTypeTableObj->minimizeMemory();
		}
		if( uuidColTableObj != NULL ) {
			uuidColTableObj->minimizeMemory();
		}
		if( uuidDefTableObj != NULL ) {
			uuidDefTableObj->minimizeMemory();
		}
		if( atomTableObj != NULL ) {
			atomTableObj->minimizeMemory();
		}
		if( tableColTableObj != NULL ) {
			tableColTableObj->minimizeMemory();
		}
		if( valueTableObj != NULL ) {
			valueTableObj->minimizeMemory();
		}

		if( blobTypeTableObj != NULL ) {
			delete blobTypeTableObj;
			blobTypeTableObj = NULL;
		}
		if( blobColTableObj != NULL ) {
			delete blobColTableObj;
			blobColTableObj = NULL;
		}
		if( blobDefTableObj != NULL ) {
			delete blobDefTableObj;
			blobDefTableObj = NULL;
		}
		if( boolTypeTableObj != NULL ) {
			delete boolTypeTableObj;
			boolTypeTableObj = NULL;
		}
		if( boolColTableObj != NULL ) {
			delete boolColTableObj;
			boolColTableObj = NULL;
		}
		if( boolDefTableObj != NULL ) {
			delete boolDefTableObj;
			boolDefTableObj = NULL;
		}
		if( dateTypeTableObj != NULL ) {
			delete dateTypeTableObj;
			dateTypeTableObj = NULL;
		}
		if( dateColTableObj != NULL ) {
			delete dateColTableObj;
			dateColTableObj = NULL;
		}
		if( dateDefTableObj != NULL ) {
			delete dateDefTableObj;
			dateDefTableObj = NULL;
		}
		if( doubleTypeTableObj != NULL ) {
			delete doubleTypeTableObj;
			doubleTypeTableObj = NULL;
		}
		if( doubleColTableObj != NULL ) {
			delete doubleColTableObj;
			doubleColTableObj = NULL;
		}
		if( doubleDefTableObj != NULL ) {
			delete doubleDefTableObj;
			doubleDefTableObj = NULL;
		}
		if( floatTypeTableObj != NULL ) {
			delete floatTypeTableObj;
			floatTypeTableObj = NULL;
		}
		if( floatColTableObj != NULL ) {
			delete floatColTableObj;
			floatColTableObj = NULL;
		}
		if( floatDefTableObj != NULL ) {
			delete floatDefTableObj;
			floatDefTableObj = NULL;
		}
		if( id16GenTableObj != NULL ) {
			delete id16GenTableObj;
			id16GenTableObj = NULL;
		}
		if( int16TypeTableObj != NULL ) {
			delete int16TypeTableObj;
			int16TypeTableObj = NULL;
		}
		if( enumTypeTableObj != NULL ) {
			delete enumTypeTableObj;
			enumTypeTableObj = NULL;
		}
		if( enumDefTableObj != NULL ) {
			delete enumDefTableObj;
			enumDefTableObj = NULL;
		}
		if( int16ColTableObj != NULL ) {
			delete int16ColTableObj;
			int16ColTableObj = NULL;
		}
		if( int16DefTableObj != NULL ) {
			delete int16DefTableObj;
			int16DefTableObj = NULL;
		}
		if( id32GenTableObj != NULL ) {
			delete id32GenTableObj;
			id32GenTableObj = NULL;
		}
		if( int32TypeTableObj != NULL ) {
			delete int32TypeTableObj;
			int32TypeTableObj = NULL;
		}
		if( int32ColTableObj != NULL ) {
			delete int32ColTableObj;
			int32ColTableObj = NULL;
		}
		if( int32DefTableObj != NULL ) {
			delete int32DefTableObj;
			int32DefTableObj = NULL;
		}
		if( id64GenTableObj != NULL ) {
			delete id64GenTableObj;
			id64GenTableObj = NULL;
		}
		if( int64TypeTableObj != NULL ) {
			delete int64TypeTableObj;
			int64TypeTableObj = NULL;
		}
		if( int64ColTableObj != NULL ) {
			delete int64ColTableObj;
			int64ColTableObj = NULL;
		}
		if( int64DefTableObj != NULL ) {
			delete int64DefTableObj;
			int64DefTableObj = NULL;
		}
		if( nmTokenTypeTableObj != NULL ) {
			delete nmTokenTypeTableObj;
			nmTokenTypeTableObj = NULL;
		}
		if( nmTokenColTableObj != NULL ) {
			delete nmTokenColTableObj;
			nmTokenColTableObj = NULL;
		}
		if( nmTokenDefTableObj != NULL ) {
			delete nmTokenDefTableObj;
			nmTokenDefTableObj = NULL;
		}
		if( nmTokensTypeTableObj != NULL ) {
			delete nmTokensTypeTableObj;
			nmTokensTypeTableObj = NULL;
		}
		if( nmTokensColTableObj != NULL ) {
			delete nmTokensColTableObj;
			nmTokensColTableObj = NULL;
		}
		if( nmTokensDefTableObj != NULL ) {
			delete nmTokensDefTableObj;
			nmTokensDefTableObj = NULL;
		}
		if( numberTypeTableObj != NULL ) {
			delete numberTypeTableObj;
			numberTypeTableObj = NULL;
		}
		if( numberColTableObj != NULL ) {
			delete numberColTableObj;
			numberColTableObj = NULL;
		}
		if( numberDefTableObj != NULL ) {
			delete numberDefTableObj;
			numberDefTableObj = NULL;
		}
		if( stringTypeTableObj != NULL ) {
			delete stringTypeTableObj;
			stringTypeTableObj = NULL;
		}
		if( stringColTableObj != NULL ) {
			delete stringColTableObj;
			stringColTableObj = NULL;
		}
		if( stringDefTableObj != NULL ) {
			delete stringDefTableObj;
			stringDefTableObj = NULL;
		}
		if( tZDateTypeTableObj != NULL ) {
			delete tZDateTypeTableObj;
			tZDateTypeTableObj = NULL;
		}
		if( tZDateColTableObj != NULL ) {
			delete tZDateColTableObj;
			tZDateColTableObj = NULL;
		}
		if( tZDateDefTableObj != NULL ) {
			delete tZDateDefTableObj;
			tZDateDefTableObj = NULL;
		}
		if( tZTimeTypeTableObj != NULL ) {
			delete tZTimeTypeTableObj;
			tZTimeTypeTableObj = NULL;
		}
		if( tZTimeColTableObj != NULL ) {
			delete tZTimeColTableObj;
			tZTimeColTableObj = NULL;
		}
		if( tZTimeDefTableObj != NULL ) {
			delete tZTimeDefTableObj;
			tZTimeDefTableObj = NULL;
		}
		if( tZTimestampTypeTableObj != NULL ) {
			delete tZTimestampTypeTableObj;
			tZTimestampTypeTableObj = NULL;
		}
		if( tZTimestampColTableObj != NULL ) {
			delete tZTimestampColTableObj;
			tZTimestampColTableObj = NULL;
		}
		if( tZTimestampDefTableObj != NULL ) {
			delete tZTimestampDefTableObj;
			tZTimestampDefTableObj = NULL;
		}
		if( textTypeTableObj != NULL ) {
			delete textTypeTableObj;
			textTypeTableObj = NULL;
		}
		if( textColTableObj != NULL ) {
			delete textColTableObj;
			textColTableObj = NULL;
		}
		if( textDefTableObj != NULL ) {
			delete textDefTableObj;
			textDefTableObj = NULL;
		}
		if( timeTypeTableObj != NULL ) {
			delete timeTypeTableObj;
			timeTypeTableObj = NULL;
		}
		if( timeColTableObj != NULL ) {
			delete timeColTableObj;
			timeColTableObj = NULL;
		}
		if( timeDefTableObj != NULL ) {
			delete timeDefTableObj;
			timeDefTableObj = NULL;
		}
		if( timestampTypeTableObj != NULL ) {
			delete timestampTypeTableObj;
			timestampTypeTableObj = NULL;
		}
		if( timestampColTableObj != NULL ) {
			delete timestampColTableObj;
			timestampColTableObj = NULL;
		}
		if( timestampDefTableObj != NULL ) {
			delete timestampDefTableObj;
			timestampDefTableObj = NULL;
		}
		if( tokenTypeTableObj != NULL ) {
			delete tokenTypeTableObj;
			tokenTypeTableObj = NULL;
		}
		if( tokenColTableObj != NULL ) {
			delete tokenColTableObj;
			tokenColTableObj = NULL;
		}
		if( tokenDefTableObj != NULL ) {
			delete tokenDefTableObj;
			tokenDefTableObj = NULL;
		}
		if( uInt16TypeTableObj != NULL ) {
			delete uInt16TypeTableObj;
			uInt16TypeTableObj = NULL;
		}
		if( uInt16ColTableObj != NULL ) {
			delete uInt16ColTableObj;
			uInt16ColTableObj = NULL;
		}
		if( uInt16DefTableObj != NULL ) {
			delete uInt16DefTableObj;
			uInt16DefTableObj = NULL;
		}
		if( uInt32TypeTableObj != NULL ) {
			delete uInt32TypeTableObj;
			uInt32TypeTableObj = NULL;
		}
		if( uInt32ColTableObj != NULL ) {
			delete uInt32ColTableObj;
			uInt32ColTableObj = NULL;
		}
		if( uInt32DefTableObj != NULL ) {
			delete uInt32DefTableObj;
			uInt32DefTableObj = NULL;
		}
		if( uInt64TypeTableObj != NULL ) {
			delete uInt64TypeTableObj;
			uInt64TypeTableObj = NULL;
		}
		if( uInt64ColTableObj != NULL ) {
			delete uInt64ColTableObj;
			uInt64ColTableObj = NULL;
		}
		if( uInt64DefTableObj != NULL ) {
			delete uInt64DefTableObj;
			uInt64DefTableObj = NULL;
		}
		if( uuidGenTableObj != NULL ) {
			delete uuidGenTableObj;
			uuidGenTableObj = NULL;
		}
		if( uuidTypeTableObj != NULL ) {
			delete uuidTypeTableObj;
			uuidTypeTableObj = NULL;
		}
		if( uuidColTableObj != NULL ) {
			delete uuidColTableObj;
			uuidColTableObj = NULL;
		}
		if( uuidDefTableObj != NULL ) {
			delete uuidDefTableObj;
			uuidDefTableObj = NULL;
		}
		if( atomTableObj != NULL ) {
			delete atomTableObj;
			atomTableObj = NULL;
		}
		if( tableColTableObj != NULL ) {
			delete tableColTableObj;
			tableColTableObj = NULL;
		}
		if( valueTableObj != NULL ) {
			delete valueTableObj;
			valueTableObj = NULL;
		}
	}

	void CFBamSchemaObj::setSecClusterName( const std::string& value ) {
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				"setClusterName",
				1,
				"value" );
		}
		if( secClusterName != NULL ) {
			delete secClusterName;
			secClusterName = NULL;
		}
		secClusterName = new std::string( value );
		secCluster = NULL;
	}

	std::string CFBamSchemaObj::getSecClusterName() {
		std::string retval( *secClusterName );
		return( retval );
	}

	cfsec::ICFSecClusterObj* CFBamSchemaObj::getSecCluster() {
		if( secCluster == NULL ) {
			if( authorization != NULL ) {
				secCluster = getClusterTableObj()->readClusterByIdIdx( authorization->getSecClusterId() );
			}
			else {
				secCluster = getClusterTableObj()->readClusterByUDomNameIdx( *secClusterName );
				if( ( secCluster == NULL ) && ( secClusterId > 0 ) ) {
					secCluster = getClusterTableObj()->readClusterByIdIdx( secClusterId );
				}
			}
			if( secCluster != NULL ) {
				if( secClusterName != NULL ) {
					delete secClusterName;
					secClusterName = NULL;
				}
				secClusterName = new std::string( secCluster->getRequiredFullDomName() );
				secClusterId = secCluster->getRequiredId();
				if( authorization != NULL ) {
					authorization->setSecCluster( *secCluster );
				}
			}
		}
		return( secCluster );
	}

	void CFBamSchemaObj::setSecCluster( cfsec::ICFSecClusterObj* value ) {
		secCluster = value;
		if( secCluster == NULL ) {
			return;
		}
		secClusterId = secCluster->getRequiredId();
		if( secClusterName != NULL ) {
			delete secClusterName;
			secClusterName = NULL;
		}
		secClusterName = new std::string( secCluster->getRequiredFullDomName() );
		if( authorization != NULL ) {
			authorization->setSecCluster( *secCluster );
		}
	}

	long CFBamSchemaObj::getSecClusterId() {
		return( secClusterId );
	}

	void CFBamSchemaObj::setSecTenantName( const std::string& value ) {
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				"setTenantName",
				1,
				"value" );
		}
		if( secTenantName != NULL ) {
			delete secTenantName;
			secTenantName = NULL;
		}
		secTenantName = new std::string( value );
		secTenant = NULL;
	}

	std::string CFBamSchemaObj::getSecTenantName() {
		std::string retval( *secTenantName );
		return( retval );
	}

	cfsec::ICFSecTenantObj* CFBamSchemaObj::getSecTenant() {
		if( secTenant == NULL ) {
			if( authorization != NULL ) {
				secTenant = getTenantTableObj()->readTenantByIdIdx( authorization->getSecTenantId() );
			}
			else {
				secTenant = getTenantTableObj()->readTenantByUNameIdx( getSecCluster()->getRequiredId(), *secTenantName );
				if( ( secTenant == NULL ) && ( secTenantId > 0 ) ) {
					secTenant = getTenantTableObj()->readTenantByIdIdx( secTenantId );
				}
			}
			if( secTenant != NULL ) {
				if( secTenantName != NULL ) {
					delete secTenantName;
					secTenantName = NULL;
				}
				secTenantName = new std::string( secTenant->getRequiredTenantName() );
				secTenantId = secTenant->getRequiredId();
				if( authorization != NULL ) {
					authorization->setSecTenant( *secTenant );
				}
			}
		}
		return( secTenant );
	}

	void CFBamSchemaObj::setSecTenant( cfsec::ICFSecTenantObj* value ) {
		secTenant = value;
		if( secTenant == NULL ) {
			return;
		}
		secTenantId = secTenant->getRequiredId();
		if( secTenantName != NULL ) {
			delete secTenantName;
			secTenantName = NULL;
		}
		secTenantName = new std::string( secTenant->getRequiredTenantName() );
		if( authorization != NULL ) {
			authorization->setSecTenant( *secTenant );
		}
	}

	long CFBamSchemaObj::getSecTenantId() {
		return( secTenantId );
	}

	void CFBamSchemaObj::setSecUserName( const std::string& value ) {
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				"setUserName",
				1,
				"value" );
		}
		if( secUserName != NULL ) {
			delete secUserName;
			secUserName = NULL;
		}
		secUserName = new std::string( value );
		secUser = NULL;
	}

	std::string CFBamSchemaObj::getSecUserName() {
		std::string retval( *secUserName );
		return( retval );
	}

	cfsec::ICFSecSecUserObj* CFBamSchemaObj::getSecUser() {
		if( secUser == NULL ) {
			if( authorization != NULL ) {
				secUser = getSecUserTableObj()->readSecUserByIdIdx( authorization->getSecUserId() );
			}
			else {
				secUser = getSecUserTableObj()->readSecUserByULoginIdx( *secUserName );
				if( ( secUser == NULL ) &&
					( ( secSessionUserId[0] != 0 ) || ( secSessionUserId[1] != 0 )
						|| ( secSessionUserId[2] != 0 ) || ( secSessionUserId[3] != 0 )
						|| ( secSessionUserId[4] != 0 ) || ( secSessionUserId[5] != 0 )
						|| ( secSessionUserId[6] != 0 ) || ( secSessionUserId[7] != 0 )
						|| ( secSessionUserId[8] != 0 ) || ( secSessionUserId[9] != 0 )
						|| ( secSessionUserId[10] != 0 ) || ( secSessionUserId[11] != 0 )
						|| ( secSessionUserId[12] != 0 ) || ( secSessionUserId[13] != 0 )
						|| ( secSessionUserId[14] != 0 ) || ( secSessionUserId[15] != 0 ) ) )
				{
					secUser = getSecUserTableObj()->readSecUserByIdIdx( secSessionUserId );
				}
			}
			if( secUser != NULL ) {
				if( secUserName != NULL ) {
					delete secUserName;
					secUserName = NULL;
				}
				secUserName = new std::string( secUser->getRequiredLoginId() );
				uuid_copy( secSessionUserId, secUser->getRequiredSecUserId() );
			}
		}
		return( secUser );
	}

	void CFBamSchemaObj::setSecUser( cfsec::ICFSecSecUserObj* value ) {
		secUser = value;
		if( secUser != NULL ) {
			if( secUserName != NULL ) {
				delete secUserName;
				secUserName = NULL;
			}
			secUserName = new std::string( secUser->getRequiredLoginId() );
			uuid_copy( secSessionUserId, secUser->getRequiredSecUserId() );
		}
	}
	cfsec::ICFSecSecSessionObj* CFBamSchemaObj::getSecSession() {
		if( secSession == NULL ) {
			if( authorization != NULL ) {
				secSession = getSecSessionTableObj()->readSecSessionByIdIdx( authorization->getSecSessionId() );
			}
			else if( ( secSessionSessionId[0] != 0 )
				|| ( secSessionSessionId[1] != 0 )
				|| ( secSessionSessionId[2] != 0 )
				|| ( secSessionSessionId[3] != 0 )
				|| ( secSessionSessionId[4] != 0 )
				|| ( secSessionSessionId[5] != 0 )
				|| ( secSessionSessionId[6] != 0 )
				|| ( secSessionSessionId[7] != 0 )
				|| ( secSessionSessionId[8] != 0 )
				|| ( secSessionSessionId[9] != 0 )
				|| ( secSessionSessionId[10] != 0 )
				|| ( secSessionSessionId[11] != 0 )
				|| ( secSessionSessionId[12] != 0 )
				|| ( secSessionSessionId[13] != 0 )
				|| ( secSessionSessionId[14] != 0 )
				|| ( secSessionSessionId[15] != 0 ) )
			{
				secSession = getSecSessionTableObj()->readSecSessionByIdIdx( secSessionSessionId );
			}
			if( secSession != NULL ) {
				uuid_copy( secSessionSessionId, secSession->getRequiredSecSessionId() );
				uuid_copy( secSessionUserId, secSession->getRequiredSecUserId() );
			}
		}
		return( secSession );
	}

	void CFBamSchemaObj::setSecSession( cfsec::ICFSecSecSessionObj* value ) {
		secSession = value;
		if( secSession == NULL ) {
			return;
		}
		uuid_copy( secSessionSessionId, secSession->getRequiredSecSessionId() );
		uuid_copy( secSessionUserId, secSession->getRequiredSecUserId() );
		if( authorization != NULL ) {
			authorization->setSecSession( secSession );
		}
	}

	void CFBamSchemaObj::setSecSessionId( const uuid_ptr_t value ) {
		uuid_copy( secSessionSessionId, value );
	}

	uuid_ptr_t CFBamSchemaObj::getSecSessionSessionId() {
		return( secSessionSessionId );
	}

	uuid_ptr_t CFBamSchemaObj::getSecSessionUserId() {
		return( secSessionUserId );
	}

	std::string CFBamSchemaObj::getDbSchemaName() {
		std::string retval( *schemaDbName );
		return( retval );
	}

	std::string CFBamSchemaObj::getLowerDbSchemaName() {
		std::string retval( *lowerDbSchemaName );
		return( retval );
	}

	void CFBamSchemaObj::setDbSchemaName( const std::string& argDbSchemaName ) {
		static const std::string S_ProcName = "setDbSchemaName";

		rollback();

		if( argDbSchemaName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				"argDbSchemaName" );
		}

		if( backingStore != NULL ) {
			backingStore->setDbSchemaName( argDbSchemaName );
		}

		if( schemaDbName != NULL ) {
			delete schemaDbName;
			schemaDbName = NULL;
		}
		schemaDbName = new std::string( argDbSchemaName );
		lowerDbSchemaName = new std::string( argDbSchemaName );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );

		releasePreparedStatements();
	}

	std::string CFBamSchemaObj::fileImport( const std::string& fileName, const std::string& fileContent ) {
		std::string logContent = backingStore->fileImport( getAuthorization(), fileName, fileContent );
		return( logContent );
	}

	/**
	 *	Release any prepared statements acquired by this connection.
	 *	<p>
	 *	Resets the prepared statements so they can acquire the new value of
	 *	<tt>setDbSchemaName()</tt>.
	 */
	void CFBamSchemaObj::releasePreparedStatements() {
	}
	cfsec::CFSecAuthorization* CFBamSchemaObj::getAuthorization() const {
		return( authorization );
	}

	void CFBamSchemaObj::setAuthorization( cfsec::CFSecAuthorization* value ) {
		authorization = value;
	}

	cfsec::ICFSecSchema* CFBamSchemaObj::getBackingStore() {
		return( backingStore );
	}

	void CFBamSchemaObj::setBackingStore( cfsec::ICFSecSchema* value ) {
		backingStore = value;
	}

	std::string CFBamSchemaObj::getSchemaName() {
		return( SCHEMA_NAME );
	}

	bool CFBamSchemaObj::isConnected() {
		if( backingStore == NULL ) {
			return( false );
		}
		else {
			return( backingStore->isConnected() );
		}
	}

	bool CFBamSchemaObj::connect() {
		return( backingStore->connect() );
	}

	bool CFBamSchemaObj::connect( const std::string& username, const std::string& password ) {
		return( backingStore->connect( username, password ) );
	}

	bool CFBamSchemaObj::connect( const std::string& clusterName, const std::string& tenantName, const std::string& secUserName, const std::string& password ) {
		static const std::string S_ProcName = "connect-full";
		if( clusterName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				"clusterName" );
		}
		if( tenantName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				2,
				"tenantName" );
		}
		if( secUserName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				3,
				"secUserName" );
		}
		if( password.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				5,
				"password" );
		}
		if( ! backingStore->connect( secUserName, password, clusterName, tenantName ) ) {
			authorization = NULL;
			return( false );
		}
		if( authorization != NULL ) {
			// The login was established as an XMsg client, which automatically sets the Authorization
			// information based on the return message.  You only need to do the remaining SecSession
			// and authorization creation if you're using a direct client-server model instead of
			// an XMsg client-server model.
			setSecClusterName( clusterName );
			setSecTenantName( tenantName );
			setSecUserName( secUserName );
			return( true );
		}

		if( ( clusterName == S_System )
		 && ( tenantName == S_System )
		 && ( secUserName == S_System ) )
		{
			if( secCluster == NULL ) {
				secCluster = getClusterTableObj()->newInstance();
				cfsec::ICFSecClusterEditObj* editCluster = secCluster->getEdit();
				if( editCluster == NULL ) {
					editCluster = secCluster->beginEdit();
					editCluster->setRequiredDescription( S_System );
					editCluster->setRequiredFullDomName( S_System );
					secCluster = editCluster->create();
					editCluster = NULL;
				}
			}
			if( secTenant == NULL ) {
				secTenant = getTenantTableObj()->newInstance();
				cfsec::ICFSecTenantEditObj* editTenant = secTenant->getEdit();
				if( editTenant == NULL ) {
					editTenant = secTenant->beginEdit();
					editTenant->setRequiredContainerCluster( secCluster);
					editTenant->setRequiredTenantName( S_System );
					secTenant = editTenant->create();
					editTenant = NULL;
				}
			}
			if( secUser == NULL ) {
				secUser = getSecUserTableObj()->newInstance();
				cfsec::ICFSecSecUserEditObj* editSecUser = secUser->getEdit();
				if( editSecUser == NULL ) {
					editSecUser = secUser->beginEdit();
					editSecUser->setRequiredEMailAddress( S_System );
					editSecUser->setRequiredLoginId( S_System );
					secUser = editSecUser->create();
					editSecUser = NULL;
				}
			}
			setSecClusterName( clusterName );
			setSecTenantName( tenantName );
			setSecUserName( secUserName );
			secCluster = NULL;
			secTenant = NULL;
			secUser = NULL;
			secSession = NULL;
			cfsec::ICFSecClusterObj* cluster = getSecCluster();
			cfsec::ICFSecTenantObj* tenant = getSecTenant();
			cfsec::ICFSecSecUserObj* user = getSecUser();
			cfsec::ICFSecSecSessionObj* session;
			if( ( cluster != NULL ) && ( tenant != NULL ) && ( user != NULL ) ) {
				session = getSecSessionTableObj()->newInstance();
				cfsec::ICFSecSecSessionEditObj* sessionEdit = session->beginEdit();
				sessionEdit->setRequiredContainerSecUser( user );
				std::chrono::system_clock::time_point timestamp = cflib::CFLib::getUTCTimestampInstance();
				sessionEdit->setRequiredStart( timestamp );
				sessionEdit->setOptionalFinishNull();
				session = sessionEdit->create();
				setSecSession( session );
			}
			else {
				session = NULL;
			}
			if( ( cluster == NULL ) || ( tenant == NULL ) || ( user == NULL ) || ( session == NULL ) ) {
				disconnect( false );
				authorization = NULL;
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve cluster name, tenant name, user name, or session.  Login cancelled" );
			}
			if( authorization == NULL ) {
				authorization = new cfsec::CFSecAuthorization();
			}
			authorization->setSecCluster( *cluster );
			authorization->setSecTenant( *tenant );
			authorization->setSecSession( session );
			return( true );
		}
		setSecClusterName( clusterName );
		setSecTenantName( tenantName );
		setSecUserName( secUserName );
		bool transactionStarted = beginTransaction();
		secCluster = NULL;
		secTenant = NULL;
		secUser = NULL;
		secSession = NULL;
		cfsec::ICFSecClusterObj* cluster = getSecCluster();
		cfsec::ICFSecTenantObj* tenant = getSecTenant();
		cfsec::ICFSecSecUserObj* user = getSecUser();
		cfsec::ICFSecSecSessionObj* session;
		if( ( cluster != NULL ) && ( tenant != NULL ) && ( user != NULL ) ) {
			session = getSecSessionTableObj()->newInstance();
			cfsec::ICFSecSecSessionEditObj* sessionEdit = session->beginEdit();
			sessionEdit->setRequiredContainerSecUser( user );
			std::chrono::system_clock::time_point timestamp = cflib::CFLib::getUTCTimestampInstance();
			sessionEdit->setRequiredStart( timestamp );
			sessionEdit->setOptionalFinishNull();
			session = sessionEdit->create();
			setSecSession( session );
		}
		else {
			session = NULL;
		}
		if( transactionStarted ) {
			commit();
		}
		if( ( cluster == NULL ) || ( tenant == NULL ) || ( user == NULL ) || ( session == NULL ) ) {
			disconnect( false );
			authorization = NULL;
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				"Could not resolve cluster name, tenant name, user name, or session.  Login cancelled" );
		}
		if( authorization == NULL ) {
			authorization = new cfsec::CFSecAuthorization();
		}
		authorization->setSecCluster( *cluster );
		authorization->setSecTenant( *tenant );
		authorization->setSecSession( session );
		return( true );
	}

	void CFBamSchemaObj::disconnect( bool doCommit ) {
		backingStore->disconnect( doCommit );
	}

	void CFBamSchemaObj::logout() {
		if( authorization == NULL ) {
			if( isConnected() ) {
				disconnect( false );
			}
			return;
		}
		if( isConnected() ) {
			try {
				bool transactionStarted = beginTransaction();
				if( ! transactionStarted ) {
					rollback();
					transactionStarted = beginTransaction();
					if( ! transactionStarted ) {
						setAuthorization( NULL );
						return;
					}
				}
				const uuid_ptr_t secSessionId = authorization->getSecSessionId();
				if( ( secSessionId[0] != 0 )
					|| ( secSessionId[1] != 0 )
					|| ( secSessionId[2] != 0 )
					|| ( secSessionId[3] != 0 )
					|| ( secSessionId[4] != 0 )
					|| ( secSessionId[5] != 0 )
					|| ( secSessionId[6] != 0 )
					|| ( secSessionId[7] != 0 )
					|| ( secSessionId[8] != 0 )
					|| ( secSessionId[9] != 0 )
					|| ( secSessionId[10] != 0 )
					|| ( secSessionId[11] != 0 )
					|| ( secSessionId[12] != 0 )
					|| ( secSessionId[13] != 0 )
					|| ( secSessionId[14] != 0 )
					|| ( secSessionId[15] != 0 ) )
				{
					cfsec::ICFSecSecSessionObj* secSession = getSecSessionTableObj()->readSecSessionByIdIdx( secSessionId );
					if( secSession != NULL ) {
						if( secSession->isOptionalFinishNull() ) {
							cfsec::ICFSecSecSessionEditObj* editSecSession = secSession->beginEdit();
							std::chrono::system_clock::time_point timestamp = cflib::CFLib::getUTCTimestampInstance();
							editSecSession->setOptionalFinishValue( timestamp );
							editSecSession->update();
							editSecSession = NULL;
						}
					}
				}
				commit();
			}
			catch( std::exception x ) {
				setAuthorization( NULL );
				try {
					disconnect( false );
				}
				catch( std::exception e ) {
				}
			}
			setAuthorization( NULL );
			try {
				disconnect( false );
			}
			catch( std::exception e ) {
			}
		}
	}

	void CFBamSchemaObj::minimizeMemory() {
		if( chainTableObj != NULL ) {
			chainTableObj->minimizeMemory();
		}
		if( clusterTableObj != NULL ) {
			clusterTableObj->minimizeMemory();
		}
		if( enumTagTableObj != NULL ) {
			enumTagTableObj->minimizeMemory();
		}
		if( hostNodeTableObj != NULL ) {
			hostNodeTableObj->minimizeMemory();
		}
		if( iSOCcyTableObj != NULL ) {
			iSOCcyTableObj->minimizeMemory();
		}
		if( iSOCtryTableObj != NULL ) {
			iSOCtryTableObj->minimizeMemory();
		}
		if( iSOCtryCcyTableObj != NULL ) {
			iSOCtryCcyTableObj->minimizeMemory();
		}
		if( iSOCtryLangTableObj != NULL ) {
			iSOCtryLangTableObj->minimizeMemory();
		}
		if( iSOLangTableObj != NULL ) {
			iSOLangTableObj->minimizeMemory();
		}
		if( iSOTZoneTableObj != NULL ) {
			iSOTZoneTableObj->minimizeMemory();
		}
		if( indexColTableObj != NULL ) {
			indexColTableObj->minimizeMemory();
		}
		if( licenseTableObj != NULL ) {
			licenseTableObj->minimizeMemory();
		}
		if( majorVersionTableObj != NULL ) {
			majorVersionTableObj->minimizeMemory();
		}
		if( mimeTypeTableObj != NULL ) {
			mimeTypeTableObj->minimizeMemory();
		}
		if( minorVersionTableObj != NULL ) {
			minorVersionTableObj->minimizeMemory();
		}
		if( paramTableObj != NULL ) {
			paramTableObj->minimizeMemory();
		}
		if( relationColTableObj != NULL ) {
			relationColTableObj->minimizeMemory();
		}
		if( schemaDefTableObj != NULL ) {
			schemaDefTableObj->minimizeMemory();
		}
		if( schemaRefTableObj != NULL ) {
			schemaRefTableObj->minimizeMemory();
		}
		if( serverObjFuncTableObj != NULL ) {
			serverObjFuncTableObj->minimizeMemory();
		}
		if( serverProcTableObj != NULL ) {
			serverProcTableObj->minimizeMemory();
		}
		if( serverListFuncTableObj != NULL ) {
			serverListFuncTableObj->minimizeMemory();
		}
		if( serverMethodTableObj != NULL ) {
			serverMethodTableObj->minimizeMemory();
		}
		if( tableTableObj != NULL ) {
			tableTableObj->minimizeMemory();
		}
		if( clearSubDep1TableObj != NULL ) {
			clearSubDep1TableObj->minimizeMemory();
		}
		if( clearSubDep2TableObj != NULL ) {
			clearSubDep2TableObj->minimizeMemory();
		}
		if( clearSubDep3TableObj != NULL ) {
			clearSubDep3TableObj->minimizeMemory();
		}
		if( clearTopDepTableObj != NULL ) {
			clearTopDepTableObj->minimizeMemory();
		}
		if( clearDepTableObj != NULL ) {
			clearDepTableObj->minimizeMemory();
		}
		if( delSubDep1TableObj != NULL ) {
			delSubDep1TableObj->minimizeMemory();
		}
		if( delSubDep2TableObj != NULL ) {
			delSubDep2TableObj->minimizeMemory();
		}
		if( delSubDep3TableObj != NULL ) {
			delSubDep3TableObj->minimizeMemory();
		}
		if( delTopDepTableObj != NULL ) {
			delTopDepTableObj->minimizeMemory();
		}
		if( delDepTableObj != NULL ) {
			delDepTableObj->minimizeMemory();
		}
		if( indexTableObj != NULL ) {
			indexTableObj->minimizeMemory();
		}
		if( popSubDep1TableObj != NULL ) {
			popSubDep1TableObj->minimizeMemory();
		}
		if( popSubDep2TableObj != NULL ) {
			popSubDep2TableObj->minimizeMemory();
		}
		if( popSubDep3TableObj != NULL ) {
			popSubDep3TableObj->minimizeMemory();
		}
		if( popTopDepTableObj != NULL ) {
			popTopDepTableObj->minimizeMemory();
		}
		if( popDepTableObj != NULL ) {
			popDepTableObj->minimizeMemory();
		}
		if( relationTableObj != NULL ) {
			relationTableObj->minimizeMemory();
		}
		if( scopeTableObj != NULL ) {
			scopeTableObj->minimizeMemory();
		}
		if( secAppTableObj != NULL ) {
			secAppTableObj->minimizeMemory();
		}
		if( secDeviceTableObj != NULL ) {
			secDeviceTableObj->minimizeMemory();
		}
		if( secFormTableObj != NULL ) {
			secFormTableObj->minimizeMemory();
		}
		if( secGroupTableObj != NULL ) {
			secGroupTableObj->minimizeMemory();
		}
		if( secGroupFormTableObj != NULL ) {
			secGroupFormTableObj->minimizeMemory();
		}
		if( secGrpIncTableObj != NULL ) {
			secGrpIncTableObj->minimizeMemory();
		}
		if( secGrpMembTableObj != NULL ) {
			secGrpMembTableObj->minimizeMemory();
		}
		if( secSessionTableObj != NULL ) {
			secSessionTableObj->minimizeMemory();
		}
		if( secUserTableObj != NULL ) {
			secUserTableObj->minimizeMemory();
		}
		if( serviceTableObj != NULL ) {
			serviceTableObj->minimizeMemory();
		}
		if( serviceTypeTableObj != NULL ) {
			serviceTypeTableObj->minimizeMemory();
		}
		if( subProjectTableObj != NULL ) {
			subProjectTableObj->minimizeMemory();
		}
		if( sysClusterTableObj != NULL ) {
			sysClusterTableObj->minimizeMemory();
		}
		if( tSecGroupTableObj != NULL ) {
			tSecGroupTableObj->minimizeMemory();
		}
		if( tSecGrpIncTableObj != NULL ) {
			tSecGrpIncTableObj->minimizeMemory();
		}
		if( tSecGrpMembTableObj != NULL ) {
			tSecGrpMembTableObj->minimizeMemory();
		}
		if( tenantTableObj != NULL ) {
			tenantTableObj->minimizeMemory();
		}
		if( tldTableObj != NULL ) {
			tldTableObj->minimizeMemory();
		}
		if( topDomainTableObj != NULL ) {
			topDomainTableObj->minimizeMemory();
		}
		if( topProjectTableObj != NULL ) {
			topProjectTableObj->minimizeMemory();
		}
		if( uRLProtocolTableObj != NULL ) {
			uRLProtocolTableObj->minimizeMemory();
		}
		if( blobTypeTableObj != NULL ) {
			blobTypeTableObj->minimizeMemory();
		}
		if( blobColTableObj != NULL ) {
			blobColTableObj->minimizeMemory();
		}
		if( blobDefTableObj != NULL ) {
			blobDefTableObj->minimizeMemory();
		}
		if( boolTypeTableObj != NULL ) {
			boolTypeTableObj->minimizeMemory();
		}
		if( boolColTableObj != NULL ) {
			boolColTableObj->minimizeMemory();
		}
		if( boolDefTableObj != NULL ) {
			boolDefTableObj->minimizeMemory();
		}
		if( dateTypeTableObj != NULL ) {
			dateTypeTableObj->minimizeMemory();
		}
		if( dateColTableObj != NULL ) {
			dateColTableObj->minimizeMemory();
		}
		if( dateDefTableObj != NULL ) {
			dateDefTableObj->minimizeMemory();
		}
		if( doubleTypeTableObj != NULL ) {
			doubleTypeTableObj->minimizeMemory();
		}
		if( doubleColTableObj != NULL ) {
			doubleColTableObj->minimizeMemory();
		}
		if( doubleDefTableObj != NULL ) {
			doubleDefTableObj->minimizeMemory();
		}
		if( floatTypeTableObj != NULL ) {
			floatTypeTableObj->minimizeMemory();
		}
		if( floatColTableObj != NULL ) {
			floatColTableObj->minimizeMemory();
		}
		if( floatDefTableObj != NULL ) {
			floatDefTableObj->minimizeMemory();
		}
		if( id16GenTableObj != NULL ) {
			id16GenTableObj->minimizeMemory();
		}
		if( int16TypeTableObj != NULL ) {
			int16TypeTableObj->minimizeMemory();
		}
		if( enumTypeTableObj != NULL ) {
			enumTypeTableObj->minimizeMemory();
		}
		if( enumDefTableObj != NULL ) {
			enumDefTableObj->minimizeMemory();
		}
		if( int16ColTableObj != NULL ) {
			int16ColTableObj->minimizeMemory();
		}
		if( int16DefTableObj != NULL ) {
			int16DefTableObj->minimizeMemory();
		}
		if( id32GenTableObj != NULL ) {
			id32GenTableObj->minimizeMemory();
		}
		if( int32TypeTableObj != NULL ) {
			int32TypeTableObj->minimizeMemory();
		}
		if( int32ColTableObj != NULL ) {
			int32ColTableObj->minimizeMemory();
		}
		if( int32DefTableObj != NULL ) {
			int32DefTableObj->minimizeMemory();
		}
		if( id64GenTableObj != NULL ) {
			id64GenTableObj->minimizeMemory();
		}
		if( int64TypeTableObj != NULL ) {
			int64TypeTableObj->minimizeMemory();
		}
		if( int64ColTableObj != NULL ) {
			int64ColTableObj->minimizeMemory();
		}
		if( int64DefTableObj != NULL ) {
			int64DefTableObj->minimizeMemory();
		}
		if( nmTokenTypeTableObj != NULL ) {
			nmTokenTypeTableObj->minimizeMemory();
		}
		if( nmTokenColTableObj != NULL ) {
			nmTokenColTableObj->minimizeMemory();
		}
		if( nmTokenDefTableObj != NULL ) {
			nmTokenDefTableObj->minimizeMemory();
		}
		if( nmTokensTypeTableObj != NULL ) {
			nmTokensTypeTableObj->minimizeMemory();
		}
		if( nmTokensColTableObj != NULL ) {
			nmTokensColTableObj->minimizeMemory();
		}
		if( nmTokensDefTableObj != NULL ) {
			nmTokensDefTableObj->minimizeMemory();
		}
		if( numberTypeTableObj != NULL ) {
			numberTypeTableObj->minimizeMemory();
		}
		if( numberColTableObj != NULL ) {
			numberColTableObj->minimizeMemory();
		}
		if( numberDefTableObj != NULL ) {
			numberDefTableObj->minimizeMemory();
		}
		if( stringTypeTableObj != NULL ) {
			stringTypeTableObj->minimizeMemory();
		}
		if( stringColTableObj != NULL ) {
			stringColTableObj->minimizeMemory();
		}
		if( stringDefTableObj != NULL ) {
			stringDefTableObj->minimizeMemory();
		}
		if( tZDateTypeTableObj != NULL ) {
			tZDateTypeTableObj->minimizeMemory();
		}
		if( tZDateColTableObj != NULL ) {
			tZDateColTableObj->minimizeMemory();
		}
		if( tZDateDefTableObj != NULL ) {
			tZDateDefTableObj->minimizeMemory();
		}
		if( tZTimeTypeTableObj != NULL ) {
			tZTimeTypeTableObj->minimizeMemory();
		}
		if( tZTimeColTableObj != NULL ) {
			tZTimeColTableObj->minimizeMemory();
		}
		if( tZTimeDefTableObj != NULL ) {
			tZTimeDefTableObj->minimizeMemory();
		}
		if( tZTimestampTypeTableObj != NULL ) {
			tZTimestampTypeTableObj->minimizeMemory();
		}
		if( tZTimestampColTableObj != NULL ) {
			tZTimestampColTableObj->minimizeMemory();
		}
		if( tZTimestampDefTableObj != NULL ) {
			tZTimestampDefTableObj->minimizeMemory();
		}
		if( textTypeTableObj != NULL ) {
			textTypeTableObj->minimizeMemory();
		}
		if( textColTableObj != NULL ) {
			textColTableObj->minimizeMemory();
		}
		if( textDefTableObj != NULL ) {
			textDefTableObj->minimizeMemory();
		}
		if( timeTypeTableObj != NULL ) {
			timeTypeTableObj->minimizeMemory();
		}
		if( timeColTableObj != NULL ) {
			timeColTableObj->minimizeMemory();
		}
		if( timeDefTableObj != NULL ) {
			timeDefTableObj->minimizeMemory();
		}
		if( timestampTypeTableObj != NULL ) {
			timestampTypeTableObj->minimizeMemory();
		}
		if( timestampColTableObj != NULL ) {
			timestampColTableObj->minimizeMemory();
		}
		if( timestampDefTableObj != NULL ) {
			timestampDefTableObj->minimizeMemory();
		}
		if( tokenTypeTableObj != NULL ) {
			tokenTypeTableObj->minimizeMemory();
		}
		if( tokenColTableObj != NULL ) {
			tokenColTableObj->minimizeMemory();
		}
		if( tokenDefTableObj != NULL ) {
			tokenDefTableObj->minimizeMemory();
		}
		if( uInt16TypeTableObj != NULL ) {
			uInt16TypeTableObj->minimizeMemory();
		}
		if( uInt16ColTableObj != NULL ) {
			uInt16ColTableObj->minimizeMemory();
		}
		if( uInt16DefTableObj != NULL ) {
			uInt16DefTableObj->minimizeMemory();
		}
		if( uInt32TypeTableObj != NULL ) {
			uInt32TypeTableObj->minimizeMemory();
		}
		if( uInt32ColTableObj != NULL ) {
			uInt32ColTableObj->minimizeMemory();
		}
		if( uInt32DefTableObj != NULL ) {
			uInt32DefTableObj->minimizeMemory();
		}
		if( uInt64TypeTableObj != NULL ) {
			uInt64TypeTableObj->minimizeMemory();
		}
		if( uInt64ColTableObj != NULL ) {
			uInt64ColTableObj->minimizeMemory();
		}
		if( uInt64DefTableObj != NULL ) {
			uInt64DefTableObj->minimizeMemory();
		}
		if( uuidGenTableObj != NULL ) {
			uuidGenTableObj->minimizeMemory();
		}
		if( uuidTypeTableObj != NULL ) {
			uuidTypeTableObj->minimizeMemory();
		}
		if( uuidColTableObj != NULL ) {
			uuidColTableObj->minimizeMemory();
		}
		if( uuidDefTableObj != NULL ) {
			uuidDefTableObj->minimizeMemory();
		}
		if( atomTableObj != NULL ) {
			atomTableObj->minimizeMemory();
		}
		if( tableColTableObj != NULL ) {
			tableColTableObj->minimizeMemory();
		}
		if( valueTableObj != NULL ) {
			valueTableObj->minimizeMemory();
		}
	}

	bool CFBamSchemaObj::isTransactionOpen() {
		bool txnOpen = backingStore->isTransactionOpen();
		return( txnOpen );
	}

	bool CFBamSchemaObj::beginTransaction() {
		bool txnInitiated = backingStore->beginTransaction();
		return( txnInitiated );
	}

	void CFBamSchemaObj::commit() {
		backingStore->commit();
	}

	void CFBamSchemaObj::rollback() {
		backingStore->rollback();
	}
	cfbam::ICFBamAtomTableObj* CFBamSchemaObj::getAtomTableObj() {
		return( atomTableObj );
	}

	cfbam::ICFBamBlobColTableObj* CFBamSchemaObj::getBlobColTableObj() {
		return( blobColTableObj );
	}

	cfbam::ICFBamBlobDefTableObj* CFBamSchemaObj::getBlobDefTableObj() {
		return( blobDefTableObj );
	}

	cfbam::ICFBamBlobTypeTableObj* CFBamSchemaObj::getBlobTypeTableObj() {
		return( blobTypeTableObj );
	}

	cfbam::ICFBamBoolColTableObj* CFBamSchemaObj::getBoolColTableObj() {
		return( boolColTableObj );
	}

	cfbam::ICFBamBoolDefTableObj* CFBamSchemaObj::getBoolDefTableObj() {
		return( boolDefTableObj );
	}

	cfbam::ICFBamBoolTypeTableObj* CFBamSchemaObj::getBoolTypeTableObj() {
		return( boolTypeTableObj );
	}

	cfbam::ICFBamChainTableObj* CFBamSchemaObj::getChainTableObj() {
		return( chainTableObj );
	}

	cfbam::ICFBamClearDepTableObj* CFBamSchemaObj::getClearDepTableObj() {
		return( clearDepTableObj );
	}

	cfbam::ICFBamClearSubDep1TableObj* CFBamSchemaObj::getClearSubDep1TableObj() {
		return( clearSubDep1TableObj );
	}

	cfbam::ICFBamClearSubDep2TableObj* CFBamSchemaObj::getClearSubDep2TableObj() {
		return( clearSubDep2TableObj );
	}

	cfbam::ICFBamClearSubDep3TableObj* CFBamSchemaObj::getClearSubDep3TableObj() {
		return( clearSubDep3TableObj );
	}

	cfbam::ICFBamClearTopDepTableObj* CFBamSchemaObj::getClearTopDepTableObj() {
		return( clearTopDepTableObj );
	}

	cfsec::ICFSecClusterTableObj* CFBamSchemaObj::getClusterTableObj() {
		return( clusterTableObj );
	}

	cfbam::ICFBamDateColTableObj* CFBamSchemaObj::getDateColTableObj() {
		return( dateColTableObj );
	}

	cfbam::ICFBamDateDefTableObj* CFBamSchemaObj::getDateDefTableObj() {
		return( dateDefTableObj );
	}

	cfbam::ICFBamDateTypeTableObj* CFBamSchemaObj::getDateTypeTableObj() {
		return( dateTypeTableObj );
	}

	cfbam::ICFBamDelDepTableObj* CFBamSchemaObj::getDelDepTableObj() {
		return( delDepTableObj );
	}

	cfbam::ICFBamDelSubDep1TableObj* CFBamSchemaObj::getDelSubDep1TableObj() {
		return( delSubDep1TableObj );
	}

	cfbam::ICFBamDelSubDep2TableObj* CFBamSchemaObj::getDelSubDep2TableObj() {
		return( delSubDep2TableObj );
	}

	cfbam::ICFBamDelSubDep3TableObj* CFBamSchemaObj::getDelSubDep3TableObj() {
		return( delSubDep3TableObj );
	}

	cfbam::ICFBamDelTopDepTableObj* CFBamSchemaObj::getDelTopDepTableObj() {
		return( delTopDepTableObj );
	}

	cfbam::ICFBamDoubleColTableObj* CFBamSchemaObj::getDoubleColTableObj() {
		return( doubleColTableObj );
	}

	cfbam::ICFBamDoubleDefTableObj* CFBamSchemaObj::getDoubleDefTableObj() {
		return( doubleDefTableObj );
	}

	cfbam::ICFBamDoubleTypeTableObj* CFBamSchemaObj::getDoubleTypeTableObj() {
		return( doubleTypeTableObj );
	}

	cfbam::ICFBamEnumDefTableObj* CFBamSchemaObj::getEnumDefTableObj() {
		return( enumDefTableObj );
	}

	cfbam::ICFBamEnumTagTableObj* CFBamSchemaObj::getEnumTagTableObj() {
		return( enumTagTableObj );
	}

	cfbam::ICFBamEnumTypeTableObj* CFBamSchemaObj::getEnumTypeTableObj() {
		return( enumTypeTableObj );
	}

	cfbam::ICFBamFloatColTableObj* CFBamSchemaObj::getFloatColTableObj() {
		return( floatColTableObj );
	}

	cfbam::ICFBamFloatDefTableObj* CFBamSchemaObj::getFloatDefTableObj() {
		return( floatDefTableObj );
	}

	cfbam::ICFBamFloatTypeTableObj* CFBamSchemaObj::getFloatTypeTableObj() {
		return( floatTypeTableObj );
	}

	cfsec::ICFSecHostNodeTableObj* CFBamSchemaObj::getHostNodeTableObj() {
		return( hostNodeTableObj );
	}

	cfsec::ICFSecISOCcyTableObj* CFBamSchemaObj::getISOCcyTableObj() {
		return( iSOCcyTableObj );
	}

	cfsec::ICFSecISOCtryTableObj* CFBamSchemaObj::getISOCtryTableObj() {
		return( iSOCtryTableObj );
	}

	cfsec::ICFSecISOCtryCcyTableObj* CFBamSchemaObj::getISOCtryCcyTableObj() {
		return( iSOCtryCcyTableObj );
	}

	cfsec::ICFSecISOCtryLangTableObj* CFBamSchemaObj::getISOCtryLangTableObj() {
		return( iSOCtryLangTableObj );
	}

	cfsec::ICFSecISOLangTableObj* CFBamSchemaObj::getISOLangTableObj() {
		return( iSOLangTableObj );
	}

	cfsec::ICFSecISOTZoneTableObj* CFBamSchemaObj::getISOTZoneTableObj() {
		return( iSOTZoneTableObj );
	}

	cfbam::ICFBamId16GenTableObj* CFBamSchemaObj::getId16GenTableObj() {
		return( id16GenTableObj );
	}

	cfbam::ICFBamId32GenTableObj* CFBamSchemaObj::getId32GenTableObj() {
		return( id32GenTableObj );
	}

	cfbam::ICFBamId64GenTableObj* CFBamSchemaObj::getId64GenTableObj() {
		return( id64GenTableObj );
	}

	cfbam::ICFBamIndexTableObj* CFBamSchemaObj::getIndexTableObj() {
		return( indexTableObj );
	}

	cfbam::ICFBamIndexColTableObj* CFBamSchemaObj::getIndexColTableObj() {
		return( indexColTableObj );
	}

	cfbam::ICFBamInt16ColTableObj* CFBamSchemaObj::getInt16ColTableObj() {
		return( int16ColTableObj );
	}

	cfbam::ICFBamInt16DefTableObj* CFBamSchemaObj::getInt16DefTableObj() {
		return( int16DefTableObj );
	}

	cfbam::ICFBamInt16TypeTableObj* CFBamSchemaObj::getInt16TypeTableObj() {
		return( int16TypeTableObj );
	}

	cfbam::ICFBamInt32ColTableObj* CFBamSchemaObj::getInt32ColTableObj() {
		return( int32ColTableObj );
	}

	cfbam::ICFBamInt32DefTableObj* CFBamSchemaObj::getInt32DefTableObj() {
		return( int32DefTableObj );
	}

	cfbam::ICFBamInt32TypeTableObj* CFBamSchemaObj::getInt32TypeTableObj() {
		return( int32TypeTableObj );
	}

	cfbam::ICFBamInt64ColTableObj* CFBamSchemaObj::getInt64ColTableObj() {
		return( int64ColTableObj );
	}

	cfbam::ICFBamInt64DefTableObj* CFBamSchemaObj::getInt64DefTableObj() {
		return( int64DefTableObj );
	}

	cfbam::ICFBamInt64TypeTableObj* CFBamSchemaObj::getInt64TypeTableObj() {
		return( int64TypeTableObj );
	}

	cfint::ICFIntLicenseTableObj* CFBamSchemaObj::getLicenseTableObj() {
		return( licenseTableObj );
	}

	cfint::ICFIntMajorVersionTableObj* CFBamSchemaObj::getMajorVersionTableObj() {
		return( majorVersionTableObj );
	}

	cfint::ICFIntMimeTypeTableObj* CFBamSchemaObj::getMimeTypeTableObj() {
		return( mimeTypeTableObj );
	}

	cfint::ICFIntMinorVersionTableObj* CFBamSchemaObj::getMinorVersionTableObj() {
		return( minorVersionTableObj );
	}

	cfbam::ICFBamNmTokenColTableObj* CFBamSchemaObj::getNmTokenColTableObj() {
		return( nmTokenColTableObj );
	}

	cfbam::ICFBamNmTokenDefTableObj* CFBamSchemaObj::getNmTokenDefTableObj() {
		return( nmTokenDefTableObj );
	}

	cfbam::ICFBamNmTokenTypeTableObj* CFBamSchemaObj::getNmTokenTypeTableObj() {
		return( nmTokenTypeTableObj );
	}

	cfbam::ICFBamNmTokensColTableObj* CFBamSchemaObj::getNmTokensColTableObj() {
		return( nmTokensColTableObj );
	}

	cfbam::ICFBamNmTokensDefTableObj* CFBamSchemaObj::getNmTokensDefTableObj() {
		return( nmTokensDefTableObj );
	}

	cfbam::ICFBamNmTokensTypeTableObj* CFBamSchemaObj::getNmTokensTypeTableObj() {
		return( nmTokensTypeTableObj );
	}

	cfbam::ICFBamNumberColTableObj* CFBamSchemaObj::getNumberColTableObj() {
		return( numberColTableObj );
	}

	cfbam::ICFBamNumberDefTableObj* CFBamSchemaObj::getNumberDefTableObj() {
		return( numberDefTableObj );
	}

	cfbam::ICFBamNumberTypeTableObj* CFBamSchemaObj::getNumberTypeTableObj() {
		return( numberTypeTableObj );
	}

	cfbam::ICFBamParamTableObj* CFBamSchemaObj::getParamTableObj() {
		return( paramTableObj );
	}

	cfbam::ICFBamPopDepTableObj* CFBamSchemaObj::getPopDepTableObj() {
		return( popDepTableObj );
	}

	cfbam::ICFBamPopSubDep1TableObj* CFBamSchemaObj::getPopSubDep1TableObj() {
		return( popSubDep1TableObj );
	}

	cfbam::ICFBamPopSubDep2TableObj* CFBamSchemaObj::getPopSubDep2TableObj() {
		return( popSubDep2TableObj );
	}

	cfbam::ICFBamPopSubDep3TableObj* CFBamSchemaObj::getPopSubDep3TableObj() {
		return( popSubDep3TableObj );
	}

	cfbam::ICFBamPopTopDepTableObj* CFBamSchemaObj::getPopTopDepTableObj() {
		return( popTopDepTableObj );
	}

	cfbam::ICFBamRelationTableObj* CFBamSchemaObj::getRelationTableObj() {
		return( relationTableObj );
	}

	cfbam::ICFBamRelationColTableObj* CFBamSchemaObj::getRelationColTableObj() {
		return( relationColTableObj );
	}

	cfbam::ICFBamSchemaDefTableObj* CFBamSchemaObj::getSchemaDefTableObj() {
		return( schemaDefTableObj );
	}

	cfbam::ICFBamSchemaRefTableObj* CFBamSchemaObj::getSchemaRefTableObj() {
		return( schemaRefTableObj );
	}

	cfbam::ICFBamScopeTableObj* CFBamSchemaObj::getScopeTableObj() {
		return( scopeTableObj );
	}

	cfsec::ICFSecSecAppTableObj* CFBamSchemaObj::getSecAppTableObj() {
		return( secAppTableObj );
	}

	cfsec::ICFSecSecDeviceTableObj* CFBamSchemaObj::getSecDeviceTableObj() {
		return( secDeviceTableObj );
	}

	cfsec::ICFSecSecFormTableObj* CFBamSchemaObj::getSecFormTableObj() {
		return( secFormTableObj );
	}

	cfsec::ICFSecSecGroupTableObj* CFBamSchemaObj::getSecGroupTableObj() {
		return( secGroupTableObj );
	}

	cfsec::ICFSecSecGroupFormTableObj* CFBamSchemaObj::getSecGroupFormTableObj() {
		return( secGroupFormTableObj );
	}

	cfsec::ICFSecSecGrpIncTableObj* CFBamSchemaObj::getSecGrpIncTableObj() {
		return( secGrpIncTableObj );
	}

	cfsec::ICFSecSecGrpMembTableObj* CFBamSchemaObj::getSecGrpMembTableObj() {
		return( secGrpMembTableObj );
	}

	cfsec::ICFSecSecSessionTableObj* CFBamSchemaObj::getSecSessionTableObj() {
		return( secSessionTableObj );
	}

	cfsec::ICFSecSecUserTableObj* CFBamSchemaObj::getSecUserTableObj() {
		return( secUserTableObj );
	}

	cfbam::ICFBamServerListFuncTableObj* CFBamSchemaObj::getServerListFuncTableObj() {
		return( serverListFuncTableObj );
	}

	cfbam::ICFBamServerMethodTableObj* CFBamSchemaObj::getServerMethodTableObj() {
		return( serverMethodTableObj );
	}

	cfbam::ICFBamServerObjFuncTableObj* CFBamSchemaObj::getServerObjFuncTableObj() {
		return( serverObjFuncTableObj );
	}

	cfbam::ICFBamServerProcTableObj* CFBamSchemaObj::getServerProcTableObj() {
		return( serverProcTableObj );
	}

	cfsec::ICFSecServiceTableObj* CFBamSchemaObj::getServiceTableObj() {
		return( serviceTableObj );
	}

	cfsec::ICFSecServiceTypeTableObj* CFBamSchemaObj::getServiceTypeTableObj() {
		return( serviceTypeTableObj );
	}

	cfbam::ICFBamStringColTableObj* CFBamSchemaObj::getStringColTableObj() {
		return( stringColTableObj );
	}

	cfbam::ICFBamStringDefTableObj* CFBamSchemaObj::getStringDefTableObj() {
		return( stringDefTableObj );
	}

	cfbam::ICFBamStringTypeTableObj* CFBamSchemaObj::getStringTypeTableObj() {
		return( stringTypeTableObj );
	}

	cfint::ICFIntSubProjectTableObj* CFBamSchemaObj::getSubProjectTableObj() {
		return( subProjectTableObj );
	}

	cfsec::ICFSecSysClusterTableObj* CFBamSchemaObj::getSysClusterTableObj() {
		return( sysClusterTableObj );
	}

	cfsec::ICFSecTSecGroupTableObj* CFBamSchemaObj::getTSecGroupTableObj() {
		return( tSecGroupTableObj );
	}

	cfsec::ICFSecTSecGrpIncTableObj* CFBamSchemaObj::getTSecGrpIncTableObj() {
		return( tSecGrpIncTableObj );
	}

	cfsec::ICFSecTSecGrpMembTableObj* CFBamSchemaObj::getTSecGrpMembTableObj() {
		return( tSecGrpMembTableObj );
	}

	cfbam::ICFBamTZDateColTableObj* CFBamSchemaObj::getTZDateColTableObj() {
		return( tZDateColTableObj );
	}

	cfbam::ICFBamTZDateDefTableObj* CFBamSchemaObj::getTZDateDefTableObj() {
		return( tZDateDefTableObj );
	}

	cfbam::ICFBamTZDateTypeTableObj* CFBamSchemaObj::getTZDateTypeTableObj() {
		return( tZDateTypeTableObj );
	}

	cfbam::ICFBamTZTimeColTableObj* CFBamSchemaObj::getTZTimeColTableObj() {
		return( tZTimeColTableObj );
	}

	cfbam::ICFBamTZTimeDefTableObj* CFBamSchemaObj::getTZTimeDefTableObj() {
		return( tZTimeDefTableObj );
	}

	cfbam::ICFBamTZTimeTypeTableObj* CFBamSchemaObj::getTZTimeTypeTableObj() {
		return( tZTimeTypeTableObj );
	}

	cfbam::ICFBamTZTimestampColTableObj* CFBamSchemaObj::getTZTimestampColTableObj() {
		return( tZTimestampColTableObj );
	}

	cfbam::ICFBamTZTimestampDefTableObj* CFBamSchemaObj::getTZTimestampDefTableObj() {
		return( tZTimestampDefTableObj );
	}

	cfbam::ICFBamTZTimestampTypeTableObj* CFBamSchemaObj::getTZTimestampTypeTableObj() {
		return( tZTimestampTypeTableObj );
	}

	cfbam::ICFBamTableTableObj* CFBamSchemaObj::getTableTableObj() {
		return( tableTableObj );
	}

	cfbam::ICFBamTableColTableObj* CFBamSchemaObj::getTableColTableObj() {
		return( tableColTableObj );
	}

	cfsec::ICFSecTenantTableObj* CFBamSchemaObj::getTenantTableObj() {
		return( tenantTableObj );
	}

	cfbam::ICFBamTextColTableObj* CFBamSchemaObj::getTextColTableObj() {
		return( textColTableObj );
	}

	cfbam::ICFBamTextDefTableObj* CFBamSchemaObj::getTextDefTableObj() {
		return( textDefTableObj );
	}

	cfbam::ICFBamTextTypeTableObj* CFBamSchemaObj::getTextTypeTableObj() {
		return( textTypeTableObj );
	}

	cfbam::ICFBamTimeColTableObj* CFBamSchemaObj::getTimeColTableObj() {
		return( timeColTableObj );
	}

	cfbam::ICFBamTimeDefTableObj* CFBamSchemaObj::getTimeDefTableObj() {
		return( timeDefTableObj );
	}

	cfbam::ICFBamTimeTypeTableObj* CFBamSchemaObj::getTimeTypeTableObj() {
		return( timeTypeTableObj );
	}

	cfbam::ICFBamTimestampColTableObj* CFBamSchemaObj::getTimestampColTableObj() {
		return( timestampColTableObj );
	}

	cfbam::ICFBamTimestampDefTableObj* CFBamSchemaObj::getTimestampDefTableObj() {
		return( timestampDefTableObj );
	}

	cfbam::ICFBamTimestampTypeTableObj* CFBamSchemaObj::getTimestampTypeTableObj() {
		return( timestampTypeTableObj );
	}

	cfint::ICFIntTldTableObj* CFBamSchemaObj::getTldTableObj() {
		return( tldTableObj );
	}

	cfbam::ICFBamTokenColTableObj* CFBamSchemaObj::getTokenColTableObj() {
		return( tokenColTableObj );
	}

	cfbam::ICFBamTokenDefTableObj* CFBamSchemaObj::getTokenDefTableObj() {
		return( tokenDefTableObj );
	}

	cfbam::ICFBamTokenTypeTableObj* CFBamSchemaObj::getTokenTypeTableObj() {
		return( tokenTypeTableObj );
	}

	cfint::ICFIntTopDomainTableObj* CFBamSchemaObj::getTopDomainTableObj() {
		return( topDomainTableObj );
	}

	cfint::ICFIntTopProjectTableObj* CFBamSchemaObj::getTopProjectTableObj() {
		return( topProjectTableObj );
	}

	cfbam::ICFBamUInt16ColTableObj* CFBamSchemaObj::getUInt16ColTableObj() {
		return( uInt16ColTableObj );
	}

	cfbam::ICFBamUInt16DefTableObj* CFBamSchemaObj::getUInt16DefTableObj() {
		return( uInt16DefTableObj );
	}

	cfbam::ICFBamUInt16TypeTableObj* CFBamSchemaObj::getUInt16TypeTableObj() {
		return( uInt16TypeTableObj );
	}

	cfbam::ICFBamUInt32ColTableObj* CFBamSchemaObj::getUInt32ColTableObj() {
		return( uInt32ColTableObj );
	}

	cfbam::ICFBamUInt32DefTableObj* CFBamSchemaObj::getUInt32DefTableObj() {
		return( uInt32DefTableObj );
	}

	cfbam::ICFBamUInt32TypeTableObj* CFBamSchemaObj::getUInt32TypeTableObj() {
		return( uInt32TypeTableObj );
	}

	cfbam::ICFBamUInt64ColTableObj* CFBamSchemaObj::getUInt64ColTableObj() {
		return( uInt64ColTableObj );
	}

	cfbam::ICFBamUInt64DefTableObj* CFBamSchemaObj::getUInt64DefTableObj() {
		return( uInt64DefTableObj );
	}

	cfbam::ICFBamUInt64TypeTableObj* CFBamSchemaObj::getUInt64TypeTableObj() {
		return( uInt64TypeTableObj );
	}

	cfint::ICFIntURLProtocolTableObj* CFBamSchemaObj::getURLProtocolTableObj() {
		return( uRLProtocolTableObj );
	}

	cfbam::ICFBamUuidColTableObj* CFBamSchemaObj::getUuidColTableObj() {
		return( uuidColTableObj );
	}

	cfbam::ICFBamUuidDefTableObj* CFBamSchemaObj::getUuidDefTableObj() {
		return( uuidDefTableObj );
	}

	cfbam::ICFBamUuidGenTableObj* CFBamSchemaObj::getUuidGenTableObj() {
		return( uuidGenTableObj );
	}

	cfbam::ICFBamUuidTypeTableObj* CFBamSchemaObj::getUuidTypeTableObj() {
		return( uuidTypeTableObj );
	}

	cfbam::ICFBamValueTableObj* CFBamSchemaObj::getValueTableObj() {
		return( valueTableObj );
	}
}
