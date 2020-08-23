// Description: C++18 XML Command Line Interface common core implementation for CFBam.

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
#include <cfbamobj/ICFBamObjPublic.hpp>

#include <cfbamsaxloader/CFBamSaxLoader.hpp>
#include <cfbamsaxloader/CFBamSaxLdr.hpp>

namespace cfbam {

	const std::string CFBamSaxLdr::CLASS_NAME( "CFBamSaxLdr" );
	const std::string CFBamSaxLdr::S_SYSTEM( "system" );
	const std::string CFBamSaxLdr::S_UnhandledException( "Unhandled exception" );

	CFBamSaxLdr::CFBamSaxLdr() {
		log = NULL;
		saxLoader = NULL;
		clusterName = new std::string( S_SYSTEM );
		clusterObj = NULL;
		tenantName = new std::string( S_SYSTEM );
		tenantObj = NULL;
		secUserName = new std::string( S_SYSTEM );
		secUserObj = NULL;
		secSessionObj = NULL;
	}

	CFBamSaxLdr::~CFBamSaxLdr() {
		if( saxLoader != NULL ) {
			delete saxLoader;
			saxLoader = NULL;
		}
		if( clusterName != NULL ) {
			delete clusterName;
			clusterName = NULL;
		}
		if( tenantName != NULL ) {
			delete tenantName;
			tenantName = NULL;
		}
		if( secUserName != NULL ) {
			delete secUserName;
			secUserName = NULL;
		}
		clusterObj = NULL;
		tenantObj = NULL;
		secUserObj = NULL;
		secSessionObj = NULL;
	}

	CFBamSaxLdr::CFBamSaxLdr( cflib::ICFLibMessageLog* messageLog ) {
		log = messageLog;
		saxLoader = NULL;
		clusterName = new std::string( S_SYSTEM );
		clusterObj = NULL;
		tenantName = new std::string( S_SYSTEM );
		tenantObj = NULL;
		secUserName = new std::string( S_SYSTEM );
		secUserObj = NULL;
		secSessionObj = NULL;
		getSaxLoader();
	}

	void CFBamSaxLdr::setSaxLoader( cfbam::CFBamSaxLoader* value ) {
		saxLoader = value;
	}

	cfbam::CFBamSaxLoader* CFBamSaxLdr::getSaxLoader() {
		static const std::string S_ProcName( "getSaxLoader" );
		static const std::string S_Log( "log" );
		if( log == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_Log );
		}
		if( saxLoader == NULL ) {
			saxLoader = new CFBamSaxLoader( log );
		}
		return( saxLoader );
	}

	void CFBamSaxLdr::setClusterName( const std::string& value ) {
		const static std::string S_ProcName( "setClusterName" );
		const static std::string S_Default( "default" );
		const static std::string S_System( "system" );
		const static std::string S_ReadClusterSystem( "readClusterByUDomName-system" );
		const static std::string S_ExpectedValues( "Expected value to by 'default' or 'system'" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaObj* schema = saxLoader->getSchemaObj();
		if( value == S_Default ) {
			bool transactionStarted = schema->beginTransaction();
			try {
				cfsec::ICFSecSysClusterObj* sysCluster = schema->getSysClusterTableObj()->readSysClusterByIdIdx( 1 );
				if( sysCluster == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"sysCluster" );
				}
				cfsec::ICFSecClusterObj* useCluster = sysCluster->getRequiredContainerCluster();
				if( useCluster == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"sysCluster->containerCluster" );
				}
				if( clusterName != NULL ) {
					delete clusterName;
					clusterName = NULL;
				}
				clusterName = new std::string( value );
				clusterObj = useCluster;
				saxLoader->getSchemaObj()->setSecCluster( useCluster );
				if( transactionStarted ) {
					schema->commit();
				}
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH
			if( ! CFLIB_EXCEPTION_EMPTY ) {
				if( transactionStarted ) {
					try {
						schema->rollback();
					}
					catch( ... ) {
					}
				}
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_UnhandledException );
			}
		}
		else if( value == S_System ) {
			bool transactionStarted = schema->beginTransaction();
			try {
				cfsec::ICFSecClusterObj* useCluster = schema->getClusterTableObj()->readClusterByUDomNameIdx( S_System );
				if( useCluster == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ReadClusterSystem );
				}
				if( clusterName != NULL ) {
					delete clusterName;
					clusterName = NULL;
				}
				clusterName = new std::string( value );
				clusterObj = useCluster;
				saxLoader->getSchemaObj()->setSecCluster( useCluster );
				if( transactionStarted ) {
					schema->commit();
				}
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH
			if( ! CFLIB_EXCEPTION_EMPTY ) {
				if( transactionStarted ) {
					try {
						schema->rollback();
					}
					catch( ... ) {
					}
				}
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_UnhandledException );
			}
		}
		else {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_ExpectedValues );
		}
	}

	const std::string& CFBamSaxLdr::getClusterName() const {
		return( *clusterName );
	}

	cfsec::ICFSecClusterObj* CFBamSaxLdr::getClusterObj() {
		const static std::string S_ProcName( "getClusterObj" );
		const static std::string S_Default( "default" );
		const static std::string S_System( "system" );
		const static std::string S_SysCluster( "sysCluster" );
		const static std::string S_SysClusterContainingCluster( "sysCluster->containingCluster" );
		const static std::string S_ReadClusterSystem( "readClusterByUDomName-system" );
		const static std::string S_ClusterObj( "clusterObj" );
		CFLIB_EXCEPTION_DECLINFO
		if( clusterObj == NULL ) {
			cfbam::ICFBamSchemaObj* schema = saxLoader->getSchemaObj();
			if( *clusterName == S_Default ) {
				bool transactionStarted = schema->beginTransaction();
				try {
					cfsec::ICFSecSysClusterObj* sysCluster = schema->getSysClusterTableObj()->readSysClusterByIdIdx( 1 );
					if( sysCluster == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_SysCluster );
					}
					cfsec::ICFSecClusterObj* useCluster = sysCluster->getRequiredContainerCluster();
					if( useCluster == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_SysClusterContainingCluster );
					}
					clusterObj = useCluster;
					saxLoader->getSchemaObj()->setSecCluster( useCluster );
					if( transactionStarted ) {
						schema->commit();
					}
				}
				CFLIB_EXCEPTION_CATCH_FALLTHROUGH
				if( ! CFLIB_EXCEPTION_EMPTY ) {
					if( transactionStarted ) {
						try {
							schema->rollback();
						}
						catch( ... ) {
						}
					}
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						S_UnhandledException );
				}
			}
			else if( *clusterName == S_System ) {
				bool transactionStarted = schema->beginTransaction();
				try {
					cfsec::ICFSecClusterObj* useCluster = schema->getClusterTableObj()->readClusterByUDomNameIdx( S_System );
					if( useCluster == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_ReadClusterSystem );
					}
					clusterObj = useCluster;
					saxLoader->getSchemaObj()->setSecCluster( useCluster );
					if( transactionStarted ) {
						schema->commit();
					}
				}
				CFLIB_EXCEPTION_CATCH_FALLTHROUGH
				if( ! CFLIB_EXCEPTION_EMPTY ) {
					if( transactionStarted ) {
						try {
							schema->rollback();
						}
						catch( ... ) {
						}
					}
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						S_UnhandledException );
				}
			}
		}
		if( clusterObj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_ClusterObj );
		}
		return( clusterObj );
	}

	void CFBamSaxLdr::setTenantName( const std::string& value ) {
		const static std::string S_ProcName = "setTenantName";
		const static std::string S_System= "system";
		const static std::string S_Value = "value";
		const static std::string S_ClusterObj = "clusterObj";
		cfbam::ICFBamSchemaObj* schema = saxLoader->getSchemaObj();
		CFLIB_EXCEPTION_DECLINFO
		if( value == S_System ) {
			bool transactionStarted = schema->beginTransaction();
			try {
				cfsec::ICFSecTenantObj* useTenant = schema->getTenantTableObj()->readTenantByUNameIdx( clusterObj->getRequiredId(),
					S_System );
				if( useTenant == NULL ) {
					std::string Msg( "readTenantByUNameIdx-" + clusterObj->getObjName() + "-system" );
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						Msg );
				}
				if( tenantName != NULL ) {
					delete tenantName;
					tenantName = NULL;
				}
				tenantName = new std::string( value );
				tenantObj = useTenant;
				saxLoader->getSchemaObj()->setSecTenant( useTenant );
				if( transactionStarted ) {
					schema->commit();
				}
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH
			if( ! CFLIB_EXCEPTION_EMPTY ) {
				if( transactionStarted ) {
					try {
						schema->rollback();
					}
					catch( ... ) {
					}
				}
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_UnhandledException );
			}
		}
		else {
			if( clusterObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ClusterObj );
			}
			if( *clusterName == S_System ) {
				std::string Msg( "Cluster 'system' only supports the tenant 'system', not '" + value + "'" );
				throw cflib::CFLibUsageException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
			bool transactionStarted = schema->beginTransaction();
			try {
				cfsec::ICFSecTenantObj* useTenant = schema->getTenantTableObj()->readTenantByUNameIdx( clusterObj->getRequiredId(),
					value );
				if( useTenant == NULL ) {
					std::string Msg( "readTenantByUNameIdx-" + clusterObj->getObjName() + "-" + value );
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						Msg );
				}
				if( tenantName != NULL ) {
					delete tenantName;
					tenantName = NULL;
				}
				tenantName = new std::string( value );
				tenantObj = useTenant;
				saxLoader->getSchemaObj()->setSecTenant( useTenant );
				if( transactionStarted ) {
					schema->commit();
				}
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH
			if( ! CFLIB_EXCEPTION_EMPTY ) {
				if( transactionStarted ) {
					try {
						schema->rollback();
					}
					catch( ... ) {
					}
				}
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_UnhandledException );
			}
		}
	}

	const std::string& CFBamSaxLdr::getTenantName() const {
		return( *tenantName );
	}

	cfsec::ICFSecTenantObj* CFBamSaxLdr::getTenantObj() {
		const static std::string S_ProcName( "getTenantObj" );
		const static std::string S_System( "system" );
		const static std::string S_TenantName( "tenantName" );
		const static std::string S_ClusterObj( "clusterObj" );
		CFLIB_EXCEPTION_DECLINFO
		if( tenantObj == NULL ) {
			cfbam::ICFBamSchemaObj* schema = saxLoader->getSchemaObj();
			if( tenantName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_TenantName );
			}
			else if( *tenantName == S_System ) {
				bool transactionStarted = schema->beginTransaction();
				try {
					cfsec::ICFSecTenantObj* useTenant = schema->getTenantTableObj()->readTenantByUNameIdx( clusterObj->getRequiredId(),
						S_System );
					if( useTenant == NULL ) {
						std::string Msg( "readTenantByUNameIdx-" + clusterObj->getObjName() + "-system" );
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							Msg );
					}
					tenantObj = useTenant;
					saxLoader->getSchemaObj()->setSecTenant( useTenant );
					if( transactionStarted ) {
						schema->commit();
					}
				}
				CFLIB_EXCEPTION_CATCH_FALLTHROUGH
				if( ! CFLIB_EXCEPTION_EMPTY ) {
					if( transactionStarted ) {
						try {
							schema->rollback();
						}
						catch( ... ) {
						}
					}
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						S_UnhandledException );
				}
			}
			else {
				if( clusterObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ClusterObj );
				}
				if( *clusterName == S_System ) {
					std::string Msg( "Cluster 'system' only supports the tenant 'system', not '" + *tenantName + "'" );
					throw cflib::CFLibUsageException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				bool transactionStarted = schema->beginTransaction();
				try {
					cfsec::ICFSecTenantObj* useTenant = schema->getTenantTableObj()->readTenantByUNameIdx( clusterObj->getRequiredId(),
						*tenantName );
					if( useTenant == NULL ) {
						std::string Msg( "readTenantByUNameIdx-" + clusterObj->getObjName() + "-" + *tenantName );
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							Msg );
					}
					tenantObj = useTenant;
					saxLoader->getSchemaObj()->setSecTenant( useTenant );
					if( transactionStarted ) {
						schema->commit();
					}
				}
				CFLIB_EXCEPTION_CATCH_FALLTHROUGH
				if( ! CFLIB_EXCEPTION_EMPTY ) {
					if( transactionStarted ) {
						try {
							schema->rollback();
						}
						catch( ... ) {
						}
					}
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						S_UnhandledException );
				}
			}
		}
		if( tenantObj == NULL ) {
			std::string Msg( "tenantObj-" + *tenantName );
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				Msg );
		}
		return( tenantObj );
	}

	void CFBamSaxLdr::setSecUserName( const std::string& value ) {
		if( secUserName != NULL ) {
			delete secUserName;
			secUserName = NULL;
		}
		secUserName = new std::string( value );
	}

	const std::string& CFBamSaxLdr::getSecUserName() const {
		return( *secUserName );
	}

	cfsec::ICFSecSecUserObj* CFBamSaxLdr::getSecUserObj() {
		static const std::string S_ProcName( "getSecUserObj" );
		CFLIB_EXCEPTION_DECLINFO
		if( secUserObj == NULL ) {
			ICFBamSchemaObj* schema = saxLoader->getSchemaObj();
			bool transactionStarted = schema->beginTransaction();
			try {
				secUserObj = schema->getSecUserTableObj()->readSecUserByULoginIdx( *secUserName );
				if( transactionStarted ) {
					schema->commit();
				}
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH
			if( ! CFLIB_EXCEPTION_EMPTY ) {
				if( transactionStarted ) {
					try {
						schema->rollback();
					}
					catch( ... ) {
					}
				}
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_UnhandledException );
			}
		}
		if( secUserObj == NULL ) {
			std::string Msg( "SecUser \"" + *secUserName + "\" could not be found" );
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		return( secUserObj );
	}

	cfsec::ICFSecSecSessionObj* CFBamSaxLdr::getSecSessionObj() {
		static const std::string S_ProcName( "getSecSessionObj" );
		CFLIB_EXCEPTION_DECLINFO
		if( secSessionObj == NULL ) {
			cfbam::ICFBamSchemaObj* schema = saxLoader->getSchemaObj();
			bool transactionStarted = schema->beginTransaction();
			try {
				getClusterObj();
				getTenantObj();
				getSecUserObj();
				secSessionObj = schema->getSecSessionTableObj()->newInstance();
				cfsec::ICFSecSecSessionEditObj* sessionEdit = secSessionObj->beginEdit();
				sessionEdit->setRequiredContainerSecUser( secUserObj );
				std::chrono::system_clock::time_point curTimestamp = cflib::CFLib::getUTCTimestampInstance();
				sessionEdit->setRequiredStart( curTimestamp );
				sessionEdit->setOptionalFinishNull();
				secSessionObj = sessionEdit->create();
				if( transactionStarted ) {
					schema->commit();
				}
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH
			if( ! CFLIB_EXCEPTION_EMPTY ) {
				if( transactionStarted ) {
					try {
						schema->rollback();
					}
					catch( ... ) {
					}
				}
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_UnhandledException );
			}
		}
		return( secSessionObj );
	}

	void CFBamSaxLdr::applyLoaderOptions( cfbam::CFBamSaxLoader* loader, const std::string& loaderOptions ) {
		static const std::string S_PathSeparator( ":" );
		std::string workingOptions( loaderOptions );
		while( workingOptions.length() > 0 ) {
			std::string evalSegment;
			std::string::size_type sepIndex = workingOptions.find( S_PathSeparator );
			if( sepIndex != std::string::npos ) {
				evalSegment = workingOptions.substr( 0, sepIndex );
				if( workingOptions.length() > sepIndex + 1 ) {
					workingOptions = workingOptions.substr( sepIndex + 1 );
				}
				else {
					workingOptions.clear();
				}
			}
			else {
				evalSegment = workingOptions;
				workingOptions.clear();
			}
			evalLoaderSegment( loader, evalSegment );
		}
	}

	void CFBamSaxLdr::evalLoaderSegment( cfbam::CFBamSaxLoader* loader, const std::string& evalSegment ) {
		const static std::string S_ProcName( "evalLoaderSegment()" );
		const static std::string S_Asterisk( "*" );
		const static std::string S_Equal( "=" );
		const static std::string S_Insert( "Insert" );
		const static std::string S_Update( "Update" );
		const static std::string S_Replace( "Replace" );
		const static std::string S_SegmentMsg( "ERROR: Expected segment to comprise <TableName>={*|Insert|Update|Replace}" );
		std::string::size_type sepEquals = evalSegment.find( S_Equal );
		if( sepEquals == std::string::npos ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_SegmentMsg );
		}
		std::string tableName = evalSegment.substr( 0, sepEquals );
		std::string tableOption = evalSegment.substr( sepEquals + 1 );
		if( tableName == cfbam::CFBamAtomBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setAtomLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setAtomLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setAtomLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamBlobColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setBlobColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setBlobColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setBlobColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamBlobDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setBlobDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setBlobDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setBlobDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamBlobTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setBlobTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setBlobTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setBlobTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamBoolColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setBoolColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setBoolColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setBoolColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamBoolDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setBoolDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setBoolDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setBoolDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamBoolTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setBoolTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setBoolTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setBoolTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamChainBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setChainLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setChainLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setChainLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamClearDepBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setClearDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setClearDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setClearDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamClearSubDep1Buff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setClearSubDep1LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setClearSubDep1LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setClearSubDep1LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamClearSubDep2Buff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setClearSubDep2LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setClearSubDep2LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setClearSubDep2LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamClearSubDep3Buff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setClearSubDep3LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setClearSubDep3LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setClearSubDep3LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamClearTopDepBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setClearTopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setClearTopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setClearTopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecClusterBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setClusterLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setClusterLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setClusterLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDateColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDateColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDateColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDateColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDateDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDateDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDateDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDateDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDateTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDateTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDateTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDateTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDelDepBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDelDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDelDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDelDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDelSubDep1Buff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDelSubDep1LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDelSubDep1LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDelSubDep1LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDelSubDep2Buff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDelSubDep2LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDelSubDep2LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDelSubDep2LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDelSubDep3Buff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDelSubDep3LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDelSubDep3LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDelSubDep3LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDelTopDepBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDelTopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDelTopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDelTopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDoubleColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDoubleColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDoubleColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDoubleColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDoubleDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDoubleDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDoubleDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDoubleDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamDoubleTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setDoubleTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setDoubleTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setDoubleTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamEnumDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setEnumDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setEnumDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setEnumDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamEnumTagBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setEnumTagLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setEnumTagLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setEnumTagLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamEnumTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setEnumTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setEnumTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setEnumTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamFloatColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setFloatColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setFloatColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setFloatColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamFloatDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setFloatDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setFloatDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setFloatDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamFloatTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setFloatTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setFloatTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setFloatTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecHostNodeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setHostNodeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setHostNodeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setHostNodeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecISOCcyBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setISOCcyLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setISOCcyLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setISOCcyLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecISOCtryBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setISOCtryLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setISOCtryLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setISOCtryLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecISOCtryCcyBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setISOCtryCcyLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setISOCtryCcyLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setISOCtryCcyLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecISOCtryLangBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setISOCtryLangLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setISOCtryLangLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setISOCtryLangLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecISOLangBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setISOLangLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setISOLangLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setISOLangLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecISOTZoneBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setISOTZoneLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setISOTZoneLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setISOTZoneLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamId16GenBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setId16GenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setId16GenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setId16GenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamId32GenBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setId32GenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setId32GenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setId32GenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamId64GenBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setId64GenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setId64GenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setId64GenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamIndexBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setIndexLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setIndexLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setIndexLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamIndexColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setIndexColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setIndexColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setIndexColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamInt16ColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setInt16ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setInt16ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setInt16ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamInt16DefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setInt16DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setInt16DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setInt16DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamInt16TypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setInt16TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setInt16TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setInt16TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamInt32ColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setInt32ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setInt32ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setInt32ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamInt32DefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setInt32DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setInt32DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setInt32DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamInt32TypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setInt32TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setInt32TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setInt32TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamInt64ColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setInt64ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setInt64ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setInt64ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamInt64DefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setInt64DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setInt64DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setInt64DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamInt64TypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setInt64TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setInt64TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setInt64TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfint::CFIntLicenseBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setLicenseLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setLicenseLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setLicenseLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfint::CFIntMajorVersionBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setMajorVersionLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setMajorVersionLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setMajorVersionLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfint::CFIntMimeTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setMimeTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setMimeTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setMimeTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfint::CFIntMinorVersionBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setMinorVersionLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setMinorVersionLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setMinorVersionLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamNmTokenColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setNmTokenColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setNmTokenColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setNmTokenColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamNmTokenDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setNmTokenDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setNmTokenDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setNmTokenDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamNmTokenTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setNmTokenTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setNmTokenTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setNmTokenTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamNmTokensColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setNmTokensColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setNmTokensColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setNmTokensColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamNmTokensDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setNmTokensDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setNmTokensDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setNmTokensDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamNmTokensTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setNmTokensTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setNmTokensTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setNmTokensTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamNumberColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setNumberColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setNumberColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setNumberColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamNumberDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setNumberDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setNumberDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setNumberDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamNumberTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setNumberTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setNumberTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setNumberTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamParamBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setParamLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setParamLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setParamLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamPopDepBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setPopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setPopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setPopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamPopSubDep1Buff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setPopSubDep1LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setPopSubDep1LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setPopSubDep1LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamPopSubDep2Buff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setPopSubDep2LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setPopSubDep2LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setPopSubDep2LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamPopSubDep3Buff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setPopSubDep3LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setPopSubDep3LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setPopSubDep3LoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamPopTopDepBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setPopTopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setPopTopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setPopTopDepLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamRelationBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setRelationLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setRelationLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setRelationLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamRelationColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setRelationColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setRelationColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setRelationColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamSchemaDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSchemaDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSchemaDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSchemaDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamSchemaRefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSchemaRefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSchemaRefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSchemaRefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamScopeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setScopeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setScopeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setScopeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSecAppBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSecAppLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSecAppLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSecAppLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSecDeviceBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSecDeviceLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSecDeviceLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSecDeviceLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSecFormBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSecFormLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSecFormLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSecFormLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSecGroupBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSecGroupLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSecGroupLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSecGroupLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSecGroupFormBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSecGroupFormLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSecGroupFormLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSecGroupFormLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSecGrpIncBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSecGrpIncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSecGrpIncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSecGrpIncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSecGrpMembBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSecGrpMembLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSecGrpMembLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSecGrpMembLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSecSessionBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSecSessionLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSecSessionLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSecSessionLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSecUserBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSecUserLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSecUserLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSecUserLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamServerListFuncBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setServerListFuncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setServerListFuncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setServerListFuncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamServerMethodBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setServerMethodLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setServerMethodLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setServerMethodLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamServerObjFuncBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setServerObjFuncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setServerObjFuncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setServerObjFuncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamServerProcBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setServerProcLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setServerProcLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setServerProcLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecServiceBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setServiceLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setServiceLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setServiceLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecServiceTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setServiceTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setServiceTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setServiceTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamStringColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setStringColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setStringColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setStringColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamStringDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setStringDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setStringDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setStringDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamStringTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setStringTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setStringTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setStringTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfint::CFIntSubProjectBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSubProjectLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSubProjectLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSubProjectLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecSysClusterBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setSysClusterLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setSysClusterLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setSysClusterLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecTSecGroupBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTSecGroupLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTSecGroupLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTSecGroupLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecTSecGrpIncBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTSecGrpIncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTSecGrpIncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTSecGrpIncLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecTSecGrpMembBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTSecGrpMembLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTSecGrpMembLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTSecGrpMembLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTZDateColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTZDateColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTZDateColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTZDateColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTZDateDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTZDateDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTZDateDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTZDateDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTZDateTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTZDateTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTZDateTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTZDateTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTZTimeColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTZTimeColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTZTimeColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTZTimeColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTZTimeDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTZTimeDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTZTimeDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTZTimeDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTZTimeTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTZTimeTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTZTimeTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTZTimeTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTZTimestampColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTZTimestampColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTZTimestampColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTZTimestampColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTZTimestampDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTZTimestampDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTZTimestampDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTZTimestampDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTZTimestampTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTZTimestampTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTZTimestampTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTZTimestampTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTableBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTableLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTableLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTableLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTableColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTableColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTableColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTableColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfsec::CFSecTenantBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTenantLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTenantLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTenantLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTextColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTextColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTextColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTextColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTextDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTextDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTextDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTextDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTextTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTextTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTextTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTextTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTimeColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTimeColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTimeColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTimeColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTimeDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTimeDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTimeDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTimeDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTimeTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTimeTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTimeTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTimeTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTimestampColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTimestampColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTimestampColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTimestampColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTimestampDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTimestampDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTimestampDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTimestampDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTimestampTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTimestampTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTimestampTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTimestampTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfint::CFIntTldBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTldLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTldLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTldLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTokenColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTokenColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTokenColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTokenColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTokenDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTokenDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTokenDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTokenDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamTokenTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTokenTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTokenTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTokenTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfint::CFIntTopDomainBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTopDomainLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTopDomainLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTopDomainLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfint::CFIntTopProjectBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setTopProjectLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setTopProjectLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setTopProjectLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUInt16ColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUInt16ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUInt16ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUInt16ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUInt16DefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUInt16DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUInt16DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUInt16DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUInt16TypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUInt16TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUInt16TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUInt16TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUInt32ColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUInt32ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUInt32ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUInt32ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUInt32DefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUInt32DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUInt32DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUInt32DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUInt32TypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUInt32TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUInt32TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUInt32TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUInt64ColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUInt64ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUInt64ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUInt64ColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUInt64DefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUInt64DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUInt64DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUInt64DefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUInt64TypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUInt64TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUInt64TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUInt64TypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfint::CFIntURLProtocolBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setURLProtocolLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setURLProtocolLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setURLProtocolLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUuidColBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUuidColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUuidColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUuidColLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUuidDefBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUuidDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUuidDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUuidDefLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUuidGenBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUuidGenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUuidGenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUuidGenLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamUuidTypeBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setUuidTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setUuidTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setUuidTypeLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else if( tableName == cfbam::CFBamValueBuff::GENDEFNAME ) {
			if( tableOption == S_Asterisk ) {
				// Leave at default
			}
			else if( tableOption == S_Insert ) {
				loader->setValueLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert );
			}
			else if( tableOption == S_Update ) {
				loader->setValueLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update );
			}
			else if( tableOption == S_Replace ) {
				loader->setValueLoaderBehaviour( cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace );
			}
			else {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_SegmentMsg );
			}
		}
		else {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_SegmentMsg );
		}
	}

	void CFBamSaxLdr::evaluateRemainingArgs( size_t argc, char* argv[], size_t consumed ) {
		// This method gets overloaded to evaluate the database-specific
		// connection arguments, if supported by a database specialization.
	}

}
