
// Description: Java 11 Default Factory implementation for SchemaDef.

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
	 *	CFBamSchemaDefFactory implementation for SchemaDef
	 */
public class CFBamSchemaDefDefaultFactory
	implements ICFBamSchemaDefFactory
{
	public CFBamSchemaDefDefaultFactory() {
	}

	public CFBamSchemaDefByCTenantIdxKey newCTenantIdxKey() {
		CFBamSchemaDefByCTenantIdxKey key =
			new CFBamSchemaDefByCTenantIdxKey();
		return( key );
	}

	public CFBamSchemaDefByMinorVersionIdxKey newMinorVersionIdxKey() {
		CFBamSchemaDefByMinorVersionIdxKey key =
			new CFBamSchemaDefByMinorVersionIdxKey();
		return( key );
	}

	public CFBamSchemaDefByUNameIdxKey newUNameIdxKey() {
		CFBamSchemaDefByUNameIdxKey key =
			new CFBamSchemaDefByUNameIdxKey();
		return( key );
	}

	public CFBamSchemaDefByAuthEMailIdxKey newAuthEMailIdxKey() {
		CFBamSchemaDefByAuthEMailIdxKey key =
			new CFBamSchemaDefByAuthEMailIdxKey();
		return( key );
	}

	public CFBamSchemaDefByProjectURLIdxKey newProjectURLIdxKey() {
		CFBamSchemaDefByProjectURLIdxKey key =
			new CFBamSchemaDefByProjectURLIdxKey();
		return( key );
	}

	public CFBamSchemaDefByPubURIIdxKey newPubURIIdxKey() {
		CFBamSchemaDefByPubURIIdxKey key =
			new CFBamSchemaDefByPubURIIdxKey();
		return( key );
	}

	public CFBamSchemaDefBuff newBuff() {
		CFBamSchemaDefBuff buff =
			new CFBamSchemaDefBuff();
		return( buff );
	}

	public CFBamSchemaDefHBuff newHBuff() {
		CFBamSchemaDefHBuff hbuff =
			new CFBamSchemaDefHBuff();
		return( hbuff );
	}
}
