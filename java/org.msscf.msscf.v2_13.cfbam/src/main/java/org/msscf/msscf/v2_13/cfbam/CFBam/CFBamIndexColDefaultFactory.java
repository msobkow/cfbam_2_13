
// Description: Java 11 Default Factory implementation for IndexCol.

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
	 *	CFBamIndexColFactory implementation for IndexCol
	 */
public class CFBamIndexColDefaultFactory
	implements ICFBamIndexColFactory
{
	public CFBamIndexColDefaultFactory() {
	}

	public CFBamIndexColPKey newPKey() {
		CFBamIndexColPKey pkey =
			new CFBamIndexColPKey();
		return( pkey );
	}

	public CFBamIndexColHPKey newHPKey() {
		CFBamIndexColHPKey hpkey =
			new CFBamIndexColHPKey();
		return( hpkey );
	}

	public CFBamIndexColByUNameIdxKey newUNameIdxKey() {
		CFBamIndexColByUNameIdxKey key =
			new CFBamIndexColByUNameIdxKey();
		return( key );
	}

	public CFBamIndexColByIdxColTenantIdxKey newIdxColTenantIdxKey() {
		CFBamIndexColByIdxColTenantIdxKey key =
			new CFBamIndexColByIdxColTenantIdxKey();
		return( key );
	}

	public CFBamIndexColByIndexIdxKey newIndexIdxKey() {
		CFBamIndexColByIndexIdxKey key =
			new CFBamIndexColByIndexIdxKey();
		return( key );
	}

	public CFBamIndexColByDefSchemaIdxKey newDefSchemaIdxKey() {
		CFBamIndexColByDefSchemaIdxKey key =
			new CFBamIndexColByDefSchemaIdxKey();
		return( key );
	}

	public CFBamIndexColByColIdxKey newColIdxKey() {
		CFBamIndexColByColIdxKey key =
			new CFBamIndexColByColIdxKey();
		return( key );
	}

	public CFBamIndexColByPrevIdxKey newPrevIdxKey() {
		CFBamIndexColByPrevIdxKey key =
			new CFBamIndexColByPrevIdxKey();
		return( key );
	}

	public CFBamIndexColByNextIdxKey newNextIdxKey() {
		CFBamIndexColByNextIdxKey key =
			new CFBamIndexColByNextIdxKey();
		return( key );
	}

	public CFBamIndexColByIdxPrevIdxKey newIdxPrevIdxKey() {
		CFBamIndexColByIdxPrevIdxKey key =
			new CFBamIndexColByIdxPrevIdxKey();
		return( key );
	}

	public CFBamIndexColByIdxNextIdxKey newIdxNextIdxKey() {
		CFBamIndexColByIdxNextIdxKey key =
			new CFBamIndexColByIdxNextIdxKey();
		return( key );
	}

	public CFBamIndexColBuff newBuff() {
		CFBamIndexColBuff buff =
			new CFBamIndexColBuff();
		return( buff );
	}

	public CFBamIndexColHBuff newHBuff() {
		CFBamIndexColHBuff hbuff =
			new CFBamIndexColHBuff();
		return( hbuff );
	}
}
