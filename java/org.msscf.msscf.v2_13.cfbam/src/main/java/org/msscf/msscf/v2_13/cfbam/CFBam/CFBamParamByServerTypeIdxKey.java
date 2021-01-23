// Description: Java 11 implementation of a Param by ServerTypeIdx index key object.

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

public class CFBamParamByServerTypeIdxKey
	implements Comparable<Object>,
		Serializable
{
	protected Long optionalTypeTenantId;
	protected Long optionalTypeId;
	public CFBamParamByServerTypeIdxKey() {
		optionalTypeTenantId = null;
		optionalTypeId = null;
	}

	public Long getOptionalTypeTenantId() {
		return( optionalTypeTenantId );
	}

	public void setOptionalTypeTenantId( Long value ) {
		if( value == null ) {
			optionalTypeTenantId = null;
		}
		else if( value < CFBamParamBuff.TYPETENANTID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalTypeTenantId",
				1,
				"value",
				value,
				CFBamParamBuff.TYPETENANTID_MIN_VALUE );
		}
		else {
			optionalTypeTenantId = value;
		}
	}

	public Long getOptionalTypeId() {
		return( optionalTypeId );
	}

	public void setOptionalTypeId( Long value ) {
		if( value == null ) {
			optionalTypeId = null;
		}
		else if( value < CFBamParamBuff.TYPEID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalTypeId",
				1,
				"value",
				value,
				CFBamParamBuff.TYPEID_MIN_VALUE );
		}
		else {
			optionalTypeId = value;
		}
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFBamParamByServerTypeIdxKey ) {
			CFBamParamByServerTypeIdxKey rhs = (CFBamParamByServerTypeIdxKey)obj;
			if( getOptionalTypeTenantId() != null ) {
				if( rhs.getOptionalTypeTenantId() != null ) {
					if( ! getOptionalTypeTenantId().equals( rhs.getOptionalTypeTenantId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalTypeTenantId() != null ) {
					return( false );
				}
			}
			if( getOptionalTypeId() != null ) {
				if( rhs.getOptionalTypeId() != null ) {
					if( ! getOptionalTypeId().equals( rhs.getOptionalTypeId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalTypeId() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else if( obj instanceof CFBamParamBuff ) {
			CFBamParamBuff rhs = (CFBamParamBuff)obj;
			if( getOptionalTypeTenantId() != null ) {
				if( rhs.getOptionalTypeTenantId() != null ) {
					if( ! getOptionalTypeTenantId().equals( rhs.getOptionalTypeTenantId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalTypeTenantId() != null ) {
					return( false );
				}
			}
			if( getOptionalTypeId() != null ) {
				if( rhs.getOptionalTypeId() != null ) {
					if( ! getOptionalTypeId().equals( rhs.getOptionalTypeId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalTypeId() != null ) {
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
		if( getOptionalTypeTenantId() != null ) {
			hashCode = hashCode + getOptionalTypeTenantId().hashCode();
		}
		if( getOptionalTypeId() != null ) {
			hashCode = hashCode + getOptionalTypeId().hashCode();
		}
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( 1 );
		}
		else if( obj instanceof CFBamParamByServerTypeIdxKey ) {
			CFBamParamByServerTypeIdxKey rhs = (CFBamParamByServerTypeIdxKey)obj;
			if( getOptionalTypeTenantId() != null ) {
				Long lhsTypeTenantId = getOptionalTypeTenantId();
				if( rhs.getOptionalTypeTenantId() != null ) {
					Long rhsTypeTenantId = rhs.getOptionalTypeTenantId();
					int cmp = lhsTypeTenantId.compareTo( rhsTypeTenantId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalTypeTenantId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalTypeId() != null ) {
				Long lhsTypeId = getOptionalTypeId();
				if( rhs.getOptionalTypeId() != null ) {
					Long rhsTypeId = rhs.getOptionalTypeId();
					int cmp = lhsTypeId.compareTo( rhsTypeId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalTypeId() != null ) {
					return( -1 );
				}
			}
			return( 0 );
		}
		else if( obj instanceof CFBamParamBuff ) {
			CFBamParamBuff rhs = (CFBamParamBuff)obj;
			if( getOptionalTypeTenantId() != null ) {
				Long lhsTypeTenantId = getOptionalTypeTenantId();
				if( rhs.getOptionalTypeTenantId() != null ) {
					Long rhsTypeTenantId = rhs.getOptionalTypeTenantId();
					int cmp = lhsTypeTenantId.compareTo( rhsTypeTenantId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalTypeTenantId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalTypeId() != null ) {
				Long lhsTypeId = getOptionalTypeId();
				if( rhs.getOptionalTypeId() != null ) {
					Long rhsTypeId = rhs.getOptionalTypeId();
					int cmp = lhsTypeId.compareTo( rhsTypeId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalTypeId() != null ) {
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
		String ret = "<CFBamParamByServerTypeIdx"
			+ " OptionalTypeTenantId=" + ( ( getOptionalTypeTenantId() == null ) ? "null" : "\"" + getOptionalTypeTenantId().toString() + "\"" )
			+ " OptionalTypeId=" + ( ( getOptionalTypeId() == null ) ? "null" : "\"" + getOptionalTypeId().toString() + "\"" )
			+ "/>";
		return( ret );
	}
}
