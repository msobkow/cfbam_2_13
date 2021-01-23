// Description: C++18 XML Custom SAX XML Parser for Business Application Model 2.13 files

/*
 *	MSS Code Factory CFBam 2.13 CustXmlLoader
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	This file is part of MSS Code Factory.
 *	
 *	MSS Code Factory is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *	
 *	MSS Code Factory is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *	
 *	You should have received a copy of the GNU General Public License
 *	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>

#include <cfbamcustxmlloader/CFBamCustXmlLoader.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLdr.hpp>

namespace cfbam {

	const std::string CFBamCustXmlLdr::CLASS_NAME( "CFBamCustXmlLdr" );
	const std::string CFBamCustXmlLdr::S_SYSTEM( "system" );
	const std::string CFBamCustXmlLdr::S_UnhandledException( "Unhandled exception" );

	CFBamCustXmlLdr::CFBamCustXmlLdr() {
		bamEngine = NULL;
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

	CFBamCustXmlLdr::~CFBamCustXmlLdr() {
		if( saxLoader != NULL ) {
			delete saxLoader;
			saxLoader = NULL;
		}
	}

	CFBamCustXmlLdr::CFBamCustXmlLdr( cfbam::CFBamCustMssCFEngine* engine, cflib::ICFLibMessageLog* messageLog ) {
		bamEngine = engine;
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

	void CFBamCustXmlLdr::setSaxLoader( cfbam::CFBamCustXmlLoader* value ) {
		saxLoader = value;
	}

	cfbam::CFBamCustXmlLoader* CFBamCustXmlLdr::getSaxLoader() {
		static const std::string S_ProcName( "getSaxLoader" );
		static const std::string S_Log( "log" );
		if( log == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_Log );
		}
		if( saxLoader == NULL ) {
			saxLoader = new CFBamCustXmlLoader( bamEngine, log );
		}
		return( saxLoader );
	}

	void CFBamCustXmlLdr::setClusterName( const std::string& value ) {
		const static std::string S_ProcName( "setClusterName" );
		const static std::string S_Default( "default" );
		const static std::string S_System( "system" );
		const static std::string S_ReadClusterSystem( "readClusterByUDomName-system" );
		const static std::string S_ExpectedValues( "Expected value to by 'default' or 'system'" );
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
			catch( ... ) {
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
			catch( ... ) {
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

	const std::string& CFBamCustXmlLdr::getClusterName() const {
		return( *clusterName );
	}

	cfsec::ICFSecClusterObj* CFBamCustXmlLdr::getClusterObj() {
		const static std::string S_ProcName( "getClusterObj" );
		const static std::string S_Default( "default" );
		const static std::string S_System( "system" );
		const static std::string S_SysCluster( "sysCluster" );
		const static std::string S_SysClusterContainingCluster( "sysCluster->containingCluster" );
		const static std::string S_ReadClusterSystem( "readClusterByUDomName-system" );
		const static std::string S_ClusterObj( "clusterObj" );
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
				catch( ... ) {
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
				catch( ... ) {
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

	void CFBamCustXmlLdr::setTenantName( const std::string& value ) {
		const static std::string S_ProcName = "setTenantName";
		const static std::string S_System= "system";
		const static std::string S_Value = "value";
		const static std::string S_ClusterObj = "clusterObj";
		cfbam::ICFBamSchemaObj* schema = saxLoader->getSchemaObj();
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
			catch( ... ) {
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
			catch( ... ) {
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

	const std::string& CFBamCustXmlLdr::getTenantName() const {
		return( *tenantName );
	}

	cfsec::ICFSecTenantObj* CFBamCustXmlLdr::getTenantObj() {
		const static std::string S_ProcName( "getTenantObj" );
		const static std::string S_System( "system" );
		const static std::string S_TenantName( "tenantName" );
		const static std::string S_ClusterObj( "clusterObj" );
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
				catch( ... ) {
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
				catch( ... ) {
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

	void CFBamCustXmlLdr::setSecUserName( const std::string& value ) {
		if( secUserName != NULL ) {
			delete secUserName;
			secUserName = NULL;
		}
		secUserName = new std::string( value );
	}

	const std::string& CFBamCustXmlLdr::getSecUserName() const {
		return( *secUserName );
	}

	cfsec::ICFSecSecUserObj* CFBamCustXmlLdr::getSecUserObj() {
		static const std::string S_ProcName( "getSecUserObj" );
		if( secUserObj == NULL ) {
			ICFBamSchemaObj* schema = saxLoader->getSchemaObj();
			bool transactionStarted = schema->beginTransaction();
			try {
				secUserObj = schema->getSecUserTableObj()->readSecUserByULoginIdx( *secUserName );
				if( transactionStarted ) {
					schema->commit();
				}
			}
			catch( ... ) {
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

	cfsec::ICFSecSecSessionObj* CFBamCustXmlLdr::getSecSessionObj() {
		static const std::string S_ProcName( "getSecSessionObj" );
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
				std::chrono::system_clock::time_point* curTimestamp = cflib::CFLib::getUTCTimestamp();
				sessionEdit->setRequiredStart( *curTimestamp );
				delete curTimestamp;
				curTimestamp = NULL;
				sessionEdit->setOptionalFinishNull();
				secSessionObj = sessionEdit->create();
				if( transactionStarted ) {
					schema->commit();
				}
			}
			catch( ... ) {
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

	void CFBamCustXmlLdr::applyLoaderOptions( cfbam::CFBamCustXmlLoader* loader, const std::string& loaderOptions ) {
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
		}
	}

	void CFBamCustXmlLdr::evaluateRemainingArgs( size_t argc, char* argv[], size_t consumed ) {
		// This method gets overloaded to evaluate the database-specific
		// connection arguments, if supported by a database specialization.
	}

}
