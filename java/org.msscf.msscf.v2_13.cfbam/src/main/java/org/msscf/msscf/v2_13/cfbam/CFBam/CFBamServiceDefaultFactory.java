
// Description: Java 11 Default Factory implementation for Service.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow mark.sobkow@gmail.com
 *	
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *	
 *	http://www.apache.org/licenses/LICENSE-2.0
 *	
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *	See the License for the specific language governing permissions and
 *	limitations under the License.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

package org.msscf.msscf.v2_13.cfbam.CFBam;

import java.lang.reflect.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;

	/*
	 *	CFBamServiceFactory implementation for Service
	 */
public class CFBamServiceDefaultFactory
	extends CFSecServiceDefaultFactory
	implements ICFBamServiceFactory
{
	public CFBamServiceDefaultFactory() {
		super();
	}

	public CFSecServicePKey newPKey() {
		CFSecServicePKey pkey =
			new CFSecServicePKey();
		return( pkey );
	}

	public CFSecServiceHPKey newHPKey() {
		CFSecServiceHPKey hpkey =
			new CFSecServiceHPKey();
		return( hpkey );
	}

	public CFSecServiceByClusterIdxKey newClusterIdxKey() {
		CFSecServiceByClusterIdxKey key =
			new CFSecServiceByClusterIdxKey();
		return( key );
	}

	public CFSecServiceByHostIdxKey newHostIdxKey() {
		CFSecServiceByHostIdxKey key =
			new CFSecServiceByHostIdxKey();
		return( key );
	}

	public CFSecServiceByTypeIdxKey newTypeIdxKey() {
		CFSecServiceByTypeIdxKey key =
			new CFSecServiceByTypeIdxKey();
		return( key );
	}

	public CFSecServiceByUTypeIdxKey newUTypeIdxKey() {
		CFSecServiceByUTypeIdxKey key =
			new CFSecServiceByUTypeIdxKey();
		return( key );
	}

	public CFSecServiceByUHostPortIdxKey newUHostPortIdxKey() {
		CFSecServiceByUHostPortIdxKey key =
			new CFSecServiceByUHostPortIdxKey();
		return( key );
	}

	public CFSecServiceBuff newBuff() {
		CFSecServiceBuff buff =
			new CFSecServiceBuff();
		return( buff );
	}

	public CFSecServiceHBuff newHBuff() {
		CFSecServiceHBuff hbuff =
			new CFSecServiceHBuff();
		return( hbuff );
	}
}
