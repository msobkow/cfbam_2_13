// Description: C++18 Schema Pooled Object implementation for CFBam.

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

#include <cfbamobj/CFBamSchemaObj.hpp>
#include <cfbamobj/CFBamSchemaPooledObj.hpp>

#include <cfbamobj/ICFBamClusterObj.hpp>
#include <cfbamobj/ICFBamHostNodeObj.hpp>
#include <cfbamobj/ICFBamISOCcyObj.hpp>
#include <cfbamobj/ICFBamISOCtryObj.hpp>
#include <cfbamobj/ICFBamISOCtryCcyObj.hpp>
#include <cfbamobj/ICFBamISOCtryLangObj.hpp>
#include <cfbamobj/ICFBamISOLangObj.hpp>
#include <cfbamobj/ICFBamISOTZoneObj.hpp>
#include <cfbamobj/ICFBamSecAppObj.hpp>
#include <cfbamobj/ICFBamSecDeviceObj.hpp>
#include <cfbamobj/ICFBamSecFormObj.hpp>
#include <cfbamobj/ICFBamSecGroupObj.hpp>
#include <cfbamobj/ICFBamSecGroupFormObj.hpp>
#include <cfbamobj/ICFBamSecGrpIncObj.hpp>
#include <cfbamobj/ICFBamSecGrpMembObj.hpp>
#include <cfbamobj/ICFBamSecSessionObj.hpp>
#include <cfbamobj/ICFBamSecUserObj.hpp>
#include <cfbamobj/ICFBamServiceObj.hpp>
#include <cfbamobj/ICFBamServiceTypeObj.hpp>
#include <cfbamobj/ICFBamSysClusterObj.hpp>
#include <cfbamobj/ICFBamTenantObj.hpp>
#include <cfbamobj/ICFBamTSecGroupObj.hpp>
#include <cfbamobj/ICFBamTSecGrpIncObj.hpp>
#include <cfbamobj/ICFBamTSecGrpMembObj.hpp>
#include <cfbamobj/ICFBamLicenseObj.hpp>
#include <cfbamobj/ICFBamMajorVersionObj.hpp>
#include <cfbamobj/ICFBamMimeTypeObj.hpp>
#include <cfbamobj/ICFBamMinorVersionObj.hpp>
#include <cfbamobj/ICFBamSubProjectObj.hpp>
#include <cfbamobj/ICFBamTldObj.hpp>
#include <cfbamobj/ICFBamTopDomainObj.hpp>
#include <cfbamobj/ICFBamTopProjectObj.hpp>
#include <cfbamobj/ICFBamURLProtocolObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamSchemaDefObj.hpp>
#include <cfbamobj/ICFBamSchemaRefObj.hpp>
#include <cfbamobj/ICFBamServerMethodObj.hpp>
#include <cfbamobj/ICFBamServerObjFuncObj.hpp>
#include <cfbamobj/ICFBamServerProcObj.hpp>
#include <cfbamobj/ICFBamServerListFuncObj.hpp>
#include <cfbamobj/ICFBamTableObj.hpp>
#include <cfbamobj/ICFBamClearDepObj.hpp>
#include <cfbamobj/ICFBamClearSubDep1Obj.hpp>
#include <cfbamobj/ICFBamClearSubDep2Obj.hpp>
#include <cfbamobj/ICFBamClearSubDep3Obj.hpp>
#include <cfbamobj/ICFBamClearTopDepObj.hpp>
#include <cfbamobj/ICFBamDelDepObj.hpp>
#include <cfbamobj/ICFBamDelSubDep1Obj.hpp>
#include <cfbamobj/ICFBamDelSubDep2Obj.hpp>
#include <cfbamobj/ICFBamDelSubDep3Obj.hpp>
#include <cfbamobj/ICFBamDelTopDepObj.hpp>
#include <cfbamobj/ICFBamIndexObj.hpp>
#include <cfbamobj/ICFBamPopDepObj.hpp>
#include <cfbamobj/ICFBamPopSubDep1Obj.hpp>
#include <cfbamobj/ICFBamPopSubDep2Obj.hpp>
#include <cfbamobj/ICFBamPopSubDep3Obj.hpp>
#include <cfbamobj/ICFBamPopTopDepObj.hpp>
#include <cfbamobj/ICFBamRelationObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamBlobDefObj.hpp>
#include <cfbamobj/ICFBamBlobTypeObj.hpp>
#include <cfbamobj/ICFBamBlobColObj.hpp>
#include <cfbamobj/ICFBamBoolDefObj.hpp>
#include <cfbamobj/ICFBamBoolTypeObj.hpp>
#include <cfbamobj/ICFBamBoolColObj.hpp>
#include <cfbamobj/ICFBamDateDefObj.hpp>
#include <cfbamobj/ICFBamDateTypeObj.hpp>
#include <cfbamobj/ICFBamDateColObj.hpp>
#include <cfbamobj/ICFBamDoubleDefObj.hpp>
#include <cfbamobj/ICFBamDoubleTypeObj.hpp>
#include <cfbamobj/ICFBamDoubleColObj.hpp>
#include <cfbamobj/ICFBamFloatDefObj.hpp>
#include <cfbamobj/ICFBamFloatTypeObj.hpp>
#include <cfbamobj/ICFBamFloatColObj.hpp>
#include <cfbamobj/ICFBamInt16DefObj.hpp>
#include <cfbamobj/ICFBamInt16TypeObj.hpp>
#include <cfbamobj/ICFBamId16GenObj.hpp>
#include <cfbamobj/ICFBamEnumDefObj.hpp>
#include <cfbamobj/ICFBamEnumTypeObj.hpp>
#include <cfbamobj/ICFBamInt16ColObj.hpp>
#include <cfbamobj/ICFBamInt32DefObj.hpp>
#include <cfbamobj/ICFBamInt32TypeObj.hpp>
#include <cfbamobj/ICFBamId32GenObj.hpp>
#include <cfbamobj/ICFBamInt32ColObj.hpp>
#include <cfbamobj/ICFBamInt64DefObj.hpp>
#include <cfbamobj/ICFBamInt64TypeObj.hpp>
#include <cfbamobj/ICFBamId64GenObj.hpp>
#include <cfbamobj/ICFBamInt64ColObj.hpp>
#include <cfbamobj/ICFBamNmTokenDefObj.hpp>
#include <cfbamobj/ICFBamNmTokenTypeObj.hpp>
#include <cfbamobj/ICFBamNmTokenColObj.hpp>
#include <cfbamobj/ICFBamNmTokensDefObj.hpp>
#include <cfbamobj/ICFBamNmTokensTypeObj.hpp>
#include <cfbamobj/ICFBamNmTokensColObj.hpp>
#include <cfbamobj/ICFBamNumberDefObj.hpp>
#include <cfbamobj/ICFBamNumberTypeObj.hpp>
#include <cfbamobj/ICFBamNumberColObj.hpp>
#include <cfbamobj/ICFBamStringDefObj.hpp>
#include <cfbamobj/ICFBamStringTypeObj.hpp>
#include <cfbamobj/ICFBamStringColObj.hpp>
#include <cfbamobj/ICFBamTZDateDefObj.hpp>
#include <cfbamobj/ICFBamTZDateTypeObj.hpp>
#include <cfbamobj/ICFBamTZDateColObj.hpp>
#include <cfbamobj/ICFBamTZTimeDefObj.hpp>
#include <cfbamobj/ICFBamTZTimeTypeObj.hpp>
#include <cfbamobj/ICFBamTZTimeColObj.hpp>
#include <cfbamobj/ICFBamTZTimestampDefObj.hpp>
#include <cfbamobj/ICFBamTZTimestampTypeObj.hpp>
#include <cfbamobj/ICFBamTZTimestampColObj.hpp>
#include <cfbamobj/ICFBamTextDefObj.hpp>
#include <cfbamobj/ICFBamTextTypeObj.hpp>
#include <cfbamobj/ICFBamTextColObj.hpp>
#include <cfbamobj/ICFBamTimeDefObj.hpp>
#include <cfbamobj/ICFBamTimeTypeObj.hpp>
#include <cfbamobj/ICFBamTimeColObj.hpp>
#include <cfbamobj/ICFBamTimestampDefObj.hpp>
#include <cfbamobj/ICFBamTimestampTypeObj.hpp>
#include <cfbamobj/ICFBamTimestampColObj.hpp>
#include <cfbamobj/ICFBamTokenDefObj.hpp>
#include <cfbamobj/ICFBamTokenTypeObj.hpp>
#include <cfbamobj/ICFBamTokenColObj.hpp>
#include <cfbamobj/ICFBamUInt16DefObj.hpp>
#include <cfbamobj/ICFBamUInt16TypeObj.hpp>
#include <cfbamobj/ICFBamUInt16ColObj.hpp>
#include <cfbamobj/ICFBamUInt32DefObj.hpp>
#include <cfbamobj/ICFBamUInt32TypeObj.hpp>
#include <cfbamobj/ICFBamUInt32ColObj.hpp>
#include <cfbamobj/ICFBamUInt64DefObj.hpp>
#include <cfbamobj/ICFBamUInt64TypeObj.hpp>
#include <cfbamobj/ICFBamUInt64ColObj.hpp>
#include <cfbamobj/ICFBamUuidDefObj.hpp>
#include <cfbamobj/ICFBamUuidTypeObj.hpp>
#include <cfbamobj/ICFBamUuidGenObj.hpp>
#include <cfbamobj/ICFBamUuidColObj.hpp>
#include <cfbamobj/ICFBamTableColObj.hpp>
#include <cfbamobj/ICFBamChainObj.hpp>
#include <cfbamobj/ICFBamEnumTagObj.hpp>
#include <cfbamobj/ICFBamIndexColObj.hpp>
#include <cfbamobj/ICFBamParamObj.hpp>
#include <cfbamobj/ICFBamRelationColObj.hpp>

#include <cfbamobj/ICFBamClusterTableObj.hpp>
#include <cfbamobj/ICFBamHostNodeTableObj.hpp>
#include <cfbamobj/ICFBamISOCcyTableObj.hpp>
#include <cfbamobj/ICFBamISOCtryTableObj.hpp>
#include <cfbamobj/ICFBamISOCtryCcyTableObj.hpp>
#include <cfbamobj/ICFBamISOCtryLangTableObj.hpp>
#include <cfbamobj/ICFBamISOLangTableObj.hpp>
#include <cfbamobj/ICFBamISOTZoneTableObj.hpp>
#include <cfbamobj/ICFBamSecAppTableObj.hpp>
#include <cfbamobj/ICFBamSecDeviceTableObj.hpp>
#include <cfbamobj/ICFBamSecFormTableObj.hpp>
#include <cfbamobj/ICFBamSecGroupTableObj.hpp>
#include <cfbamobj/ICFBamSecGroupFormTableObj.hpp>
#include <cfbamobj/ICFBamSecGrpIncTableObj.hpp>
#include <cfbamobj/ICFBamSecGrpMembTableObj.hpp>
#include <cfbamobj/ICFBamSecSessionTableObj.hpp>
#include <cfbamobj/ICFBamSecUserTableObj.hpp>
#include <cfbamobj/ICFBamServiceTableObj.hpp>
#include <cfbamobj/ICFBamServiceTypeTableObj.hpp>
#include <cfbamobj/ICFBamSysClusterTableObj.hpp>
#include <cfbamobj/ICFBamTenantTableObj.hpp>
#include <cfbamobj/ICFBamTSecGroupTableObj.hpp>
#include <cfbamobj/ICFBamTSecGrpIncTableObj.hpp>
#include <cfbamobj/ICFBamTSecGrpMembTableObj.hpp>
#include <cfbamobj/ICFBamLicenseTableObj.hpp>
#include <cfbamobj/ICFBamMajorVersionTableObj.hpp>
#include <cfbamobj/ICFBamMimeTypeTableObj.hpp>
#include <cfbamobj/ICFBamMinorVersionTableObj.hpp>
#include <cfbamobj/ICFBamSubProjectTableObj.hpp>
#include <cfbamobj/ICFBamTldTableObj.hpp>
#include <cfbamobj/ICFBamTopDomainTableObj.hpp>
#include <cfbamobj/ICFBamTopProjectTableObj.hpp>
#include <cfbamobj/ICFBamURLProtocolTableObj.hpp>
#include <cfbamobj/ICFBamScopeTableObj.hpp>
#include <cfbamobj/ICFBamSchemaDefTableObj.hpp>
#include <cfbamobj/ICFBamSchemaRefTableObj.hpp>
#include <cfbamobj/ICFBamServerMethodTableObj.hpp>
#include <cfbamobj/ICFBamServerObjFuncTableObj.hpp>
#include <cfbamobj/ICFBamServerProcTableObj.hpp>
#include <cfbamobj/ICFBamServerListFuncTableObj.hpp>
#include <cfbamobj/ICFBamTableTableObj.hpp>
#include <cfbamobj/ICFBamClearDepTableObj.hpp>
#include <cfbamobj/ICFBamClearSubDep1TableObj.hpp>
#include <cfbamobj/ICFBamClearSubDep2TableObj.hpp>
#include <cfbamobj/ICFBamClearSubDep3TableObj.hpp>
#include <cfbamobj/ICFBamClearTopDepTableObj.hpp>
#include <cfbamobj/ICFBamDelDepTableObj.hpp>
#include <cfbamobj/ICFBamDelSubDep1TableObj.hpp>
#include <cfbamobj/ICFBamDelSubDep2TableObj.hpp>
#include <cfbamobj/ICFBamDelSubDep3TableObj.hpp>
#include <cfbamobj/ICFBamDelTopDepTableObj.hpp>
#include <cfbamobj/ICFBamIndexTableObj.hpp>
#include <cfbamobj/ICFBamPopDepTableObj.hpp>
#include <cfbamobj/ICFBamPopSubDep1TableObj.hpp>
#include <cfbamobj/ICFBamPopSubDep2TableObj.hpp>
#include <cfbamobj/ICFBamPopSubDep3TableObj.hpp>
#include <cfbamobj/ICFBamPopTopDepTableObj.hpp>
#include <cfbamobj/ICFBamRelationTableObj.hpp>
#include <cfbamobj/ICFBamValueTableObj.hpp>
#include <cfbamobj/ICFBamAtomTableObj.hpp>
#include <cfbamobj/ICFBamBlobDefTableObj.hpp>
#include <cfbamobj/ICFBamBlobTypeTableObj.hpp>
#include <cfbamobj/ICFBamBlobColTableObj.hpp>
#include <cfbamobj/ICFBamBoolDefTableObj.hpp>
#include <cfbamobj/ICFBamBoolTypeTableObj.hpp>
#include <cfbamobj/ICFBamBoolColTableObj.hpp>
#include <cfbamobj/ICFBamDateDefTableObj.hpp>
#include <cfbamobj/ICFBamDateTypeTableObj.hpp>
#include <cfbamobj/ICFBamDateColTableObj.hpp>
#include <cfbamobj/ICFBamDoubleDefTableObj.hpp>
#include <cfbamobj/ICFBamDoubleTypeTableObj.hpp>
#include <cfbamobj/ICFBamDoubleColTableObj.hpp>
#include <cfbamobj/ICFBamFloatDefTableObj.hpp>
#include <cfbamobj/ICFBamFloatTypeTableObj.hpp>
#include <cfbamobj/ICFBamFloatColTableObj.hpp>
#include <cfbamobj/ICFBamInt16DefTableObj.hpp>
#include <cfbamobj/ICFBamInt16TypeTableObj.hpp>
#include <cfbamobj/ICFBamId16GenTableObj.hpp>
#include <cfbamobj/ICFBamEnumDefTableObj.hpp>
#include <cfbamobj/ICFBamEnumTypeTableObj.hpp>
#include <cfbamobj/ICFBamInt16ColTableObj.hpp>
#include <cfbamobj/ICFBamInt32DefTableObj.hpp>
#include <cfbamobj/ICFBamInt32TypeTableObj.hpp>
#include <cfbamobj/ICFBamId32GenTableObj.hpp>
#include <cfbamobj/ICFBamInt32ColTableObj.hpp>
#include <cfbamobj/ICFBamInt64DefTableObj.hpp>
#include <cfbamobj/ICFBamInt64TypeTableObj.hpp>
#include <cfbamobj/ICFBamId64GenTableObj.hpp>
#include <cfbamobj/ICFBamInt64ColTableObj.hpp>
#include <cfbamobj/ICFBamNmTokenDefTableObj.hpp>
#include <cfbamobj/ICFBamNmTokenTypeTableObj.hpp>
#include <cfbamobj/ICFBamNmTokenColTableObj.hpp>
#include <cfbamobj/ICFBamNmTokensDefTableObj.hpp>
#include <cfbamobj/ICFBamNmTokensTypeTableObj.hpp>
#include <cfbamobj/ICFBamNmTokensColTableObj.hpp>
#include <cfbamobj/ICFBamNumberDefTableObj.hpp>
#include <cfbamobj/ICFBamNumberTypeTableObj.hpp>
#include <cfbamobj/ICFBamNumberColTableObj.hpp>
#include <cfbamobj/ICFBamStringDefTableObj.hpp>
#include <cfbamobj/ICFBamStringTypeTableObj.hpp>
#include <cfbamobj/ICFBamStringColTableObj.hpp>
#include <cfbamobj/ICFBamTZDateDefTableObj.hpp>
#include <cfbamobj/ICFBamTZDateTypeTableObj.hpp>
#include <cfbamobj/ICFBamTZDateColTableObj.hpp>
#include <cfbamobj/ICFBamTZTimeDefTableObj.hpp>
#include <cfbamobj/ICFBamTZTimeTypeTableObj.hpp>
#include <cfbamobj/ICFBamTZTimeColTableObj.hpp>
#include <cfbamobj/ICFBamTZTimestampDefTableObj.hpp>
#include <cfbamobj/ICFBamTZTimestampTypeTableObj.hpp>
#include <cfbamobj/ICFBamTZTimestampColTableObj.hpp>
#include <cfbamobj/ICFBamTextDefTableObj.hpp>
#include <cfbamobj/ICFBamTextTypeTableObj.hpp>
#include <cfbamobj/ICFBamTextColTableObj.hpp>
#include <cfbamobj/ICFBamTimeDefTableObj.hpp>
#include <cfbamobj/ICFBamTimeTypeTableObj.hpp>
#include <cfbamobj/ICFBamTimeColTableObj.hpp>
#include <cfbamobj/ICFBamTimestampDefTableObj.hpp>
#include <cfbamobj/ICFBamTimestampTypeTableObj.hpp>
#include <cfbamobj/ICFBamTimestampColTableObj.hpp>
#include <cfbamobj/ICFBamTokenDefTableObj.hpp>
#include <cfbamobj/ICFBamTokenTypeTableObj.hpp>
#include <cfbamobj/ICFBamTokenColTableObj.hpp>
#include <cfbamobj/ICFBamUInt16DefTableObj.hpp>
#include <cfbamobj/ICFBamUInt16TypeTableObj.hpp>
#include <cfbamobj/ICFBamUInt16ColTableObj.hpp>
#include <cfbamobj/ICFBamUInt32DefTableObj.hpp>
#include <cfbamobj/ICFBamUInt32TypeTableObj.hpp>
#include <cfbamobj/ICFBamUInt32ColTableObj.hpp>
#include <cfbamobj/ICFBamUInt64DefTableObj.hpp>
#include <cfbamobj/ICFBamUInt64TypeTableObj.hpp>
#include <cfbamobj/ICFBamUInt64ColTableObj.hpp>
#include <cfbamobj/ICFBamUuidDefTableObj.hpp>
#include <cfbamobj/ICFBamUuidTypeTableObj.hpp>
#include <cfbamobj/ICFBamUuidGenTableObj.hpp>
#include <cfbamobj/ICFBamUuidColTableObj.hpp>
#include <cfbamobj/ICFBamTableColTableObj.hpp>
#include <cfbamobj/ICFBamChainTableObj.hpp>
#include <cfbamobj/ICFBamEnumTagTableObj.hpp>
#include <cfbamobj/ICFBamIndexColTableObj.hpp>
#include <cfbamobj/ICFBamParamTableObj.hpp>
#include <cfbamobj/ICFBamRelationColTableObj.hpp>

namespace cfbam {

	const std::string CFBamSchemaPooledObj::CLASS_NAME( "CFBamSchemaPooledObj" );

	CFBamSchemaPooledObj::CFBamSchemaPooledObj()
	: cfbam::CFBamSchemaObj()
	{
	}

	CFBamSchemaPooledObj::~CFBamSchemaPooledObj() {
	}

	bool CFBamSchemaPooledObj::isConnected() {
		if( backingStore == NULL ) {
			return( false );
		}
		else {
			return( true );
		}
	}

	void CFBamSchemaPooledObj::disconnect( bool doCommit ) {
		static const std::string S_ProcName( "disconnect" );
		static const std::string S_Message( "Schema objects over pooled storage cannot be explicitly disconnected" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamSchemaPooledObj::logout() {
		if( ( authorization == NULL ) || ( backingStore == NULL ) ) {
			return;
		}
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
		catch( xercesc::SAXNotRecognizedException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( xercesc::SAXNotSupportedException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( xercesc::SAXParseException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( xercesc::SAXException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibArgumentOverflowException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibArgumentRangeException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibArgumentUnderflowException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibCollisionDetectedException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibDbException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibDependentsDetectedException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibEmptyArgumentException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibInvalidArgumentException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibMathException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibMustOverrideException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibNotImplementedYetException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibNotSupportedException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibNullArgumentException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibPrimaryKeyNotNewException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibStaleCacheDetectedException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibSubroutineException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibUniqueIndexViolationException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibUnrecognizedAttributeException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibUnresolvedRelationException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibUnsupportedClassException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibUsageException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibArgumentException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( cflib::CFLibRuntimeException x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
		catch( std::exception x ) {
			setAuthorization( NULL );
			minimizeMemory();
			throw x;
		}
	}

}

