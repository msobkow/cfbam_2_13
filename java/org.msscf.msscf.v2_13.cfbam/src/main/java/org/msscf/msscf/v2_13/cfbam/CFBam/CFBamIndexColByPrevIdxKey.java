// Description: Java 11 implementation of a IndexCol by PrevIdx index key object.

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

public class CFBamIndexColByPrevIdxKey
	implements Comparable<Object>,
		Serializable
{
	protected Long optionalPrevTenantId;
	protected Long optionalPrevId;
	public CFBamIndexColByPrevIdxKey() {
		optionalPrevTenantId = null;
		optionalPrevId = null;
	}

	public Long getOptionalPrevTenantId() {
		return( optionalPrevTenantId );
	}

	public void setOptionalPrevTenantId( Long value ) {
		if( value == null ) {
			optionalPrevTenantId = null;
		}
		else if( value < CFBamIndexColBuff.PREVTENANTID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalPrevTenantId",
				1,
				"value",
				value,
				CFBamIndexColBuff.PREVTENANTID_MIN_VALUE );
		}
		else {
			optionalPrevTenantId = value;
		}
	}

	public Long getOptionalPrevId() {
		return( optionalPrevId );
	}

	public void setOptionalPrevId( Long value ) {
		if( value == null ) {
			optionalPrevId = null;
		}
		else if( value < CFBamIndexColBuff.PREVID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalPrevId",
				1,
				"value",
				value,
				CFBamIndexColBuff.PREVID_MIN_VALUE );
		}
		else {
			optionalPrevId = value;
		}
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFBamIndexColByPrevIdxKey ) {
			CFBamIndexColByPrevIdxKey rhs = (CFBamIndexColByPrevIdxKey)obj;
			if( getOptionalPrevTenantId() != null ) {
				if( rhs.getOptionalPrevTenantId() != null ) {
					if( ! getOptionalPrevTenantId().equals( rhs.getOptionalPrevTenantId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalPrevTenantId() != null ) {
					return( false );
				}
			}
			if( getOptionalPrevId() != null ) {
				if( rhs.getOptionalPrevId() != null ) {
					if( ! getOptionalPrevId().equals( rhs.getOptionalPrevId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalPrevId() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else if( obj instanceof CFBamIndexColBuff ) {
			CFBamIndexColBuff rhs = (CFBamIndexColBuff)obj;
			if( getOptionalPrevTenantId() != null ) {
				if( rhs.getOptionalPrevTenantId() != null ) {
					if( ! getOptionalPrevTenantId().equals( rhs.getOptionalPrevTenantId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalPrevTenantId() != null ) {
					return( false );
				}
			}
			if( getOptionalPrevId() != null ) {
				if( rhs.getOptionalPrevId() != null ) {
					if( ! getOptionalPrevId().equals( rhs.getOptionalPrevId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalPrevId() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else {
			return( false );
		}
	}

	public int hashCode() {
		int hashCode = 0;
		if( getOptionalPrevTenantId() != null ) {
			hashCode = hashCode + getOptionalPrevTenantId().hashCode();
		}
		if( getOptionalPrevId() != null ) {
			hashCode = hashCode + getOptionalPrevId().hashCode();
		}
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( 1 );
		}
		else if( obj instanceof CFBamIndexColByPrevIdxKey ) {
			CFBamIndexColByPrevIdxKey rhs = (CFBamIndexColByPrevIdxKey)obj;
			if( getOptionalPrevTenantId() != null ) {
				Long lhsPrevTenantId = getOptionalPrevTenantId();
				if( rhs.getOptionalPrevTenantId() != null ) {
					Long rhsPrevTenantId = rhs.getOptionalPrevTenantId();
					int cmp = lhsPrevTenantId.compareTo( rhsPrevTenantId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalPrevTenantId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalPrevId() != null ) {
				Long lhsPrevId = getOptionalPrevId();
				if( rhs.getOptionalPrevId() != null ) {
					Long rhsPrevId = rhs.getOptionalPrevId();
					int cmp = lhsPrevId.compareTo( rhsPrevId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalPrevId() != null ) {
					return( -1 );
				}
			}
			return( 0 );
		}
		else if( obj instanceof CFBamIndexColBuff ) {
			CFBamIndexColBuff rhs = (CFBamIndexColBuff)obj;
			if( getOptionalPrevTenantId() != null ) {
				Long lhsPrevTenantId = getOptionalPrevTenantId();
				if( rhs.getOptionalPrevTenantId() != null ) {
					Long rhsPrevTenantId = rhs.getOptionalPrevTenantId();
					int cmp = lhsPrevTenantId.compareTo( rhsPrevTenantId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalPrevTenantId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalPrevId() != null ) {
				Long lhsPrevId = getOptionalPrevId();
				if( rhs.getOptionalPrevId() != null ) {
					Long rhsPrevId = rhs.getOptionalPrevId();
					int cmp = lhsPrevId.compareTo( rhsPrevId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalPrevId() != null ) {
					return( -1 );
				}
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
		String ret = "<CFBamIndexColByPrevIdx"
			+ " OptionalPrevTenantId=" + ( ( getOptionalPrevTenantId() == null ) ? "null" : "\"" + getOptionalPrevTenantId().toString() + "\"" )
			+ " OptionalPrevId=" + ( ( getOptionalPrevId() == null ) ? "null" : "\"" + getOptionalPrevId().toString() + "\"" )
			+ "/>";
		return( ret );
	}
}
