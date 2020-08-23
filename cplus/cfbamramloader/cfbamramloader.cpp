// Description: C++18 Implementation of a RAM CFBam loader.

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
#include <cfbamobj/CFBamSchemaObj.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderPublic.hpp>
#include <cfbamram/CFBamRamSchema.hpp>
#include <CFBamRamLdr.hpp>

static const std::string CLASS_NAME( "CFBamRamLoader" );

int main( int argc, char* argv[] ) {

	if( argc < 1 ) {
		std::cerr << CLASS_NAME + " ERROR: Program name is not available\n";
		return( 1 );
	}
	std::string S_ProcName( argv[0] );
	static const std::string S_System( "system" );
	CFLIB_EXCEPTION_DECLINFO

	cflib::CFLib::init();

	int retval = 0;

	cfbam::ICFBamSchema* cFBamSchema = NULL;
	cfbam::ICFBamSchemaObj* cFBamSchemaObj = NULL;
	cfbam::CFBamRamLdr* cli = NULL;
	cfbam::CFBamSaxLoader* loader = NULL;
	cfsec::CFSecAuthorization* auth = NULL;
	std::string* loaderOpts = NULL;
	std::string* url = NULL;
	if( argc >= 3 ) {
		try {
			cFBamSchema = new cfbam::CFBamRamSchema();
			cFBamSchemaObj = new cfbam::CFBamSchemaObj();
			cFBamSchemaObj->setBackingStore( cFBamSchema );
			cli = new cfbam::CFBamRamLdr();
			loader = cli->getSaxLoader();
			loader->setSchemaObj( cFBamSchemaObj );
			loaderOpts = new std::string( argv[1] );
			url = new std::string( argv[2] );
			cFBamSchema->connect( S_System, S_System, S_System, S_System );
			cFBamSchema->rollback();
			cFBamSchema->beginTransaction();
			cFBamSchemaObj->setSecCluster( cFBamSchemaObj->getClusterTableObj()->getSystemCluster() );
			cFBamSchemaObj->setSecTenant( cFBamSchemaObj->getTenantTableObj()->getSystemTenant() );
			cFBamSchemaObj->setSecSession( cFBamSchemaObj->getSecSessionTableObj()->getSystemSession() );
			auth = new cfsec::CFSecAuthorization();
			auth->setSecCluster( *(cFBamSchemaObj->getSecCluster()) );
			auth->setSecTenant( *(cFBamSchemaObj->getSecTenant()) );
			auth->setSecSession( cFBamSchemaObj->getSecSession() );
			cFBamSchemaObj->setAuthorization( auth );
			cli->applyLoaderOptions( loader, *loaderOpts );
			cli->evaluateRemainingArgs( argc, argv, 3 );
			loader->setUseCluster( cFBamSchemaObj->getSecCluster() );
			loader->setUseTenant( cFBamSchemaObj->getSecTenant() );
			loader->parseFile( *url );
			cFBamSchema->commit();
			cFBamSchema->disconnect( true );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			std::cerr << S_ProcName + " SAXParseException : Could not parse XML file \"" + *url + "\": " + CFLIB_EXCEPTION_FORMATTEDMESSAGE + "\n";
		}
		if( ( cFBamSchema != NULL ) && cFBamSchema->isConnected() ) {
			try {
				cFBamSchema->rollback();
			}
			catch ( ... ) {
			}
			try {
				cFBamSchema->disconnect( false );
			}
			catch( ... ) {
			}
		}
		if( loader != NULL ) {
			loader->setSchemaObj( NULL );
			loader = NULL;
		}
		if( cli != NULL ) {
			delete cli;
			cli = NULL;
		}
		if( cFBamSchemaObj != NULL ) {
			cFBamSchemaObj->setBackingStore( NULL );
			try {
				delete cFBamSchemaObj;
			}
			catch( ... ) {
			}
			cFBamSchemaObj = NULL;
		}
		if( cFBamSchema != NULL ) {
			if( cFBamSchema->isConnected() ) {
				try {
					cFBamSchema->rollback();
				}
				catch ( ... ) {
				}
				try {
					cFBamSchema->disconnect( false );
				}
				catch( ... ) {
				}
			}
			try {
				delete cFBamSchema;
			}
			catch( ... ) {
			}
			cFBamSchema = NULL;
		}
	}
	else {
		std::cerr << S_ProcName + " ERROR: Expected at least two argument specifying the loader options and the name of the XML file to parse.  The first argument may be empty.\n";
	}

	if( auth != NULL ) {
		delete auth;
		auth = NULL;
	}

	if( url != NULL ) {
		delete url;
		url = NULL;
	}

	if( loaderOpts != NULL ) {
		delete loaderOpts;
		loaderOpts = NULL;
	}

	try {
		cflib::CFLib::release();
	}
	catch( ... ) {
	}

	return( retval );
}
