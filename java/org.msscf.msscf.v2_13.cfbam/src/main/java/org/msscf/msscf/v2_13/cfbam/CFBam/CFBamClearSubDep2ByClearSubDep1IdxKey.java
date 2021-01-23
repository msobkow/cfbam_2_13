// Description: Java 11 implementation of a ClearSubDep2 by ClearSubDep1Idx index key object.

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

package org.msscf.msscf.v2_13.cfbam.CFBam;

import java.lang.reflect.*;
import java.io.*;
import java.math.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;

public class CFBamClearSubDep2ByClearSubDep1IdxKey
	implements Comparable<Object>,
		Serializable
{
	protected long requiredClearSubDep1TenantId;
	protected long requiredClearSubDep1Id;
	public CFBamClearSubDep2ByClearSubDep1IdxKey() {
		requiredClearSubDep1TenantId = CFBamClearSubDep2Buff.CLEARSUBDEP1TENANTID_INIT_VALUE;
		requiredClearSubDep1Id = CFBamClearSubDep2Buff.CLEARSUBDEP1ID_INIT_VALUE;
	}

	public long getRequiredClearSubDep1TenantId() {
		return( requiredClearSubDep1TenantId );
	}

	public void setRequiredClearSubDep1TenantId( long value ) {
		if( value < CFBamClearSubDep2Buff.CLEARSUBDEP1TENANTID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredClearSubDep1TenantId",
				1,
				"value",
				value,
				CFBamClearSubDep2Buff.CLEARSUBDEP1TENANTID_MIN_VALUE );
		}
		requiredClearSubDep1TenantId = value;
	}

	public long getRequiredClearSubDep1Id() {
		return( requiredClearSubDep1Id );
	}

	public void setRequiredClearSubDep1Id( long value ) {
		if( value < CFBamClearSubDep2Buff.CLEARSUBDEP1ID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredClearSubDep1Id",
				1,
				"value",
				value,
				CFBamClearSubDep2Buff.CLEARSUBDEP1ID_MIN_VALUE );
		}
		requiredClearSubDep1Id = value;
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFBamClearSubDep2ByClearSubDep1IdxKey ) {
			CFBamClearSubDep2ByClearSubDep1IdxKey rhs = (CFBamClearSubDep2ByClearSubDep1IdxKey)obj;
			if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
				return( false );
			}
			if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFBamClearSubDep2Buff ) {
			CFBamClearSubDep2Buff rhs = (CFBamClearSubDep2Buff)obj;
			if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
				return( false );
			}
			if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
				return( false );
			}
			return( true );
		}
		else {
			return( false );
		}
	}

	public int hashCode() {
		int hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClearSubDep1TenantId() );
		hashCode = hashCode + (int)( getRequiredClearSubDep1Id() );
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( 1 );
		}
		else if( obj instanceof CFBamClearSubDep2ByClearSubDep1IdxKey ) {
			CFBamClearSubDep2ByClearSubDep1IdxKey rhs = (CFBamClearSubDep2ByClearSubDep1IdxKey)obj;
			if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
				return( -1 );
			}
			else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
				return( 1 );
			}
			if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
				return( -1 );
			}
			else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
				return( 1 );
			}
			return( 0 );
		}
		else if( obj instanceof CFBamClearSubDep2Buff ) {
			CFBamClearSubDep2Buff rhs = (CFBamClearSubDep2Buff)obj;
			if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
				return( -1 );
			}
			else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
				return( 1 );
			}
			if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
				return( -1 );
			}
			else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
				return( 1 );
			}
			return( 0 );
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"compareTo",
				"obj",
				obj,
				null );
		}
	}

	public String toString() {
		String ret = "<CFBamClearSubDep2ByClearSubDep1Idx"
			+ " RequiredClearSubDep1TenantId=" + "\"" + Long.toString( getRequiredClearSubDep1TenantId() ) + "\""
			+ " RequiredClearSubDep1Id=" + "\"" + Long.toString( getRequiredClearSubDep1Id() ) + "\""
			+ "/>";
		return( ret );
	}
}
