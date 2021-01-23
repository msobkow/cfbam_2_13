// Description: Java 11 implementation of a ServerMethod history buffer object.

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

public class CFBamServerMethodHBuff
	extends CFBamScopeHBuff
	implements Comparable<Object>,
		Serializable
{
	public static final long TENANTID_INIT_VALUE = 0L;
	public static final long TABLEID_INIT_VALUE = 0L;
	public static final long ID_INIT_VALUE = 0L;
	public static final long DEFSCHEMATENANTID_INIT_VALUE = 0L;
	public static final long DEFSCHEMAID_INIT_VALUE = 0L;
	public static final String NAME_INIT_VALUE = new String( "" );
	public final static boolean ISINSTANCEMETHOD_INIT_VALUE = true;
	public final static boolean ISSERVERONLY_INIT_VALUE = false;
	public static final String JMETHODBODY_INIT_VALUE = new String( "" );
	public static final String CPPMETHODBODY_INIT_VALUE = new String( "" );
	public static final String CSMETHODBODY_INIT_VALUE = new String( "" );
	public static final long TENANTID_MIN_VALUE = 0L;
	public static final long TABLEID_MIN_VALUE = 0L;
	public static final long ID_MIN_VALUE = 0L;
	public static final long DEFSCHEMATENANTID_MIN_VALUE = 0L;
	public static final long DEFSCHEMAID_MIN_VALUE = 0L;

	protected long requiredTableId;
	protected Long optionalDefSchemaTenantId;
	protected Long optionalDefSchemaId;
	protected String requiredName;
	protected String optionalShortName;
	protected String optionalLabel;
	protected String optionalShortDescription;
	protected String optionalDescription;
	protected String optionalSuffix;
	protected boolean requiredIsInstanceMethod;
	protected boolean requiredIsServerOnly;
	protected String requiredJMethodBody;
	protected String requiredCppMethodBody;
	protected String requiredCsMethodBody;
	public CFBamServerMethodHBuff() {
		super();
		requiredTableId = CFBamServerMethodBuff.TABLEID_INIT_VALUE;
		optionalDefSchemaTenantId = null;
		optionalDefSchemaId = null;
		requiredName = new String( CFBamServerMethodBuff.NAME_INIT_VALUE );
		optionalShortName = null;
		optionalLabel = null;
		optionalShortDescription = null;
		optionalDescription = null;
		optionalSuffix = null;
		requiredIsInstanceMethod = CFBamServerMethodBuff.ISINSTANCEMETHOD_INIT_VALUE;
		requiredIsServerOnly = CFBamServerMethodBuff.ISSERVERONLY_INIT_VALUE;
		requiredJMethodBody = new String( CFBamServerMethodBuff.JMETHODBODY_INIT_VALUE );
		requiredCppMethodBody = new String( CFBamServerMethodBuff.CPPMETHODBODY_INIT_VALUE );
		requiredCsMethodBody = new String( CFBamServerMethodBuff.CSMETHODBODY_INIT_VALUE );
	}

	public String getClassCode() {
		return( CFBamServerMethodBuff.CLASS_CODE );
	}

	public long getRequiredTableId() {
		return( requiredTableId );
	}

	public void setRequiredTableId( long value ) {
		if( value < CFBamServerMethodBuff.TABLEID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setRequiredTableId",
				1,
				"value",
				value,
				CFBamServerMethodBuff.TABLEID_MIN_VALUE );
		}
		requiredTableId = value;
	}

	public Long getOptionalDefSchemaTenantId() {
		return( optionalDefSchemaTenantId );
	}

	public void setOptionalDefSchemaTenantId( Long value ) {
		if( value == null ) {
			optionalDefSchemaTenantId = null;
		}
		else if( value < CFBamServerMethodBuff.DEFSCHEMATENANTID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalDefSchemaTenantId",
				1,
				"value",
				value,
				CFBamServerMethodBuff.DEFSCHEMATENANTID_MIN_VALUE );
		}
		else {
			optionalDefSchemaTenantId = value;
		}
	}

	public Long getOptionalDefSchemaId() {
		return( optionalDefSchemaId );
	}

	public void setOptionalDefSchemaId( Long value ) {
		if( value == null ) {
			optionalDefSchemaId = null;
		}
		else if( value < CFBamServerMethodBuff.DEFSCHEMAID_MIN_VALUE ) {
			throw new CFLibArgumentUnderflowException( getClass(),
				"setOptionalDefSchemaId",
				1,
				"value",
				value,
				CFBamServerMethodBuff.DEFSCHEMAID_MIN_VALUE );
		}
		else {
			optionalDefSchemaId = value;
		}
	}

	public String getRequiredName() {
		return( requiredName );
	}

	public void setRequiredName( String value ) {
		if( value == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"setRequiredName",
				1,
				"value" );
		}
		if( value.length() > 192 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setRequiredName",
				1,
				"value.length()",
				value.length(),
				192 );
		}
		requiredName = value;
	}

	public String getOptionalShortName() {
		return( optionalShortName );
	}

	public void setOptionalShortName( String value ) {
		if( value == null ) {
			optionalShortName = null;
		}
		else if( value.length() > 16 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setOptionalShortName",
				1,
				"value.length()",
				value.length(),
				16 );
		}
		else {
			optionalShortName = value;
		}
	}

	public String getOptionalLabel() {
		return( optionalLabel );
	}

	public void setOptionalLabel( String value ) {
		if( value == null ) {
			optionalLabel = null;
		}
		else if( value.length() > 64 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setOptionalLabel",
				1,
				"value.length()",
				value.length(),
				64 );
		}
		else {
			optionalLabel = value;
		}
	}

	public String getOptionalShortDescription() {
		return( optionalShortDescription );
	}

	public void setOptionalShortDescription( String value ) {
		if( value == null ) {
			optionalShortDescription = null;
		}
		else if( value.length() > 128 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setOptionalShortDescription",
				1,
				"value.length()",
				value.length(),
				128 );
		}
		else {
			optionalShortDescription = value;
		}
	}

	public String getOptionalDescription() {
		return( optionalDescription );
	}

	public void setOptionalDescription( String value ) {
		if( value == null ) {
			optionalDescription = null;
		}
		else if( value.length() > 1023 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setOptionalDescription",
				1,
				"value.length()",
				value.length(),
				1023 );
		}
		else {
			optionalDescription = value;
		}
	}

	public String getOptionalSuffix() {
		return( optionalSuffix );
	}

	public void setOptionalSuffix( String value ) {
		if( value == null ) {
			optionalSuffix = null;
		}
		else if( value.length() > 16 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setOptionalSuffix",
				1,
				"value.length()",
				value.length(),
				16 );
		}
		else {
			optionalSuffix = value;
		}
	}

	public boolean getRequiredIsInstanceMethod() {
		return( requiredIsInstanceMethod );
	}

	public void setRequiredIsInstanceMethod( boolean value ) {
		requiredIsInstanceMethod = value;
	}

	public boolean getRequiredIsServerOnly() {
		return( requiredIsServerOnly );
	}

	public void setRequiredIsServerOnly( boolean value ) {
		requiredIsServerOnly = value;
	}

	public String getRequiredJMethodBody() {
		return( requiredJMethodBody );
	}

	public void setRequiredJMethodBody( String value ) {
		if( value == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"setRequiredJMethodBody",
				1,
				"value" );
		}
		if( value.length() > 2000000 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setRequiredJMethodBody",
				1,
				"value.length()",
				value.length(),
				2000000 );
		}
		requiredJMethodBody = value;
	}

	public String getRequiredCppMethodBody() {
		return( requiredCppMethodBody );
	}

	public void setRequiredCppMethodBody( String value ) {
		if( value == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"setRequiredCppMethodBody",
				1,
				"value" );
		}
		if( value.length() > 2000000 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setRequiredCppMethodBody",
				1,
				"value.length()",
				value.length(),
				2000000 );
		}
		requiredCppMethodBody = value;
	}

	public String getRequiredCsMethodBody() {
		return( requiredCsMethodBody );
	}

	public void setRequiredCsMethodBody( String value ) {
		if( value == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"setRequiredCsMethodBody",
				1,
				"value" );
		}
		if( value.length() > 2000000 ) {
			throw new CFLibArgumentOverflowException( getClass(),
				"setRequiredCsMethodBody",
				1,
				"value.length()",
				value.length(),
				2000000 );
		}
		requiredCsMethodBody = value;
	}

	public boolean equals( Object obj ) {
		if( obj == null ) {
			return( false );
		}
		else if( obj instanceof CFBamServerMethodHBuff ) {
			CFBamServerMethodHBuff rhs = (CFBamServerMethodHBuff)obj;
			if( ! super.equals( obj ) ) {
				return( false );
			}
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredTableId() != rhs.getRequiredTableId() ) {
				return( false );
			}
			if( getRequiredId() != rhs.getRequiredId() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantId() != null ) {
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					if( ! getOptionalDefSchemaTenantId().equals( rhs.getOptionalDefSchemaTenantId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					return( false );
				}
			}
			if( getOptionalDefSchemaId() != null ) {
				if( rhs.getOptionalDefSchemaId() != null ) {
					if( ! getOptionalDefSchemaId().equals( rhs.getOptionalDefSchemaId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalDefSchemaId() != null ) {
					return( false );
				}
			}
			if( ! getRequiredName().equals( rhs.getRequiredName() ) ) {
				return( false );
			}
			if( getOptionalShortName() != null ) {
				if( rhs.getOptionalShortName() != null ) {
					if( ! getOptionalShortName().equals( rhs.getOptionalShortName() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalShortName() != null ) {
					return( false );
				}
			}
			if( getOptionalLabel() != null ) {
				if( rhs.getOptionalLabel() != null ) {
					if( ! getOptionalLabel().equals( rhs.getOptionalLabel() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalLabel() != null ) {
					return( false );
				}
			}
			if( getOptionalShortDescription() != null ) {
				if( rhs.getOptionalShortDescription() != null ) {
					if( ! getOptionalShortDescription().equals( rhs.getOptionalShortDescription() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalShortDescription() != null ) {
					return( false );
				}
			}
			if( getOptionalDescription() != null ) {
				if( rhs.getOptionalDescription() != null ) {
					if( ! getOptionalDescription().equals( rhs.getOptionalDescription() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalDescription() != null ) {
					return( false );
				}
			}
			if( getOptionalSuffix() != null ) {
				if( rhs.getOptionalSuffix() != null ) {
					if( ! getOptionalSuffix().equals( rhs.getOptionalSuffix() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalSuffix() != null ) {
					return( false );
				}
			}
			if( getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
				return( false );
			}
			if( getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
				return( false );
			}
			if( ! getRequiredJMethodBody().equals( rhs.getRequiredJMethodBody() ) ) {
				return( false );
			}
			if( ! getRequiredCppMethodBody().equals( rhs.getRequiredCppMethodBody() ) ) {
				return( false );
			}
			if( ! getRequiredCsMethodBody().equals( rhs.getRequiredCsMethodBody() ) ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFBamServerMethodBuff ) {
			CFBamServerMethodBuff rhs = (CFBamServerMethodBuff)obj;
			if( ! super.equals( obj ) ) {
				return( false );
			}
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredTableId() != rhs.getRequiredTableId() ) {
				return( false );
			}
			if( getRequiredId() != rhs.getRequiredId() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantId() != null ) {
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					if( ! getOptionalDefSchemaTenantId().equals( rhs.getOptionalDefSchemaTenantId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					return( false );
				}
			}
			if( getOptionalDefSchemaId() != null ) {
				if( rhs.getOptionalDefSchemaId() != null ) {
					if( ! getOptionalDefSchemaId().equals( rhs.getOptionalDefSchemaId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalDefSchemaId() != null ) {
					return( false );
				}
			}
			if( ! getRequiredName().equals( rhs.getRequiredName() ) ) {
				return( false );
			}
			if( getOptionalShortName() != null ) {
				if( rhs.getOptionalShortName() != null ) {
					if( ! getOptionalShortName().equals( rhs.getOptionalShortName() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalShortName() != null ) {
					return( false );
				}
			}
			if( getOptionalLabel() != null ) {
				if( rhs.getOptionalLabel() != null ) {
					if( ! getOptionalLabel().equals( rhs.getOptionalLabel() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalLabel() != null ) {
					return( false );
				}
			}
			if( getOptionalShortDescription() != null ) {
				if( rhs.getOptionalShortDescription() != null ) {
					if( ! getOptionalShortDescription().equals( rhs.getOptionalShortDescription() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalShortDescription() != null ) {
					return( false );
				}
			}
			if( getOptionalDescription() != null ) {
				if( rhs.getOptionalDescription() != null ) {
					if( ! getOptionalDescription().equals( rhs.getOptionalDescription() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalDescription() != null ) {
					return( false );
				}
			}
			if( getOptionalSuffix() != null ) {
				if( rhs.getOptionalSuffix() != null ) {
					if( ! getOptionalSuffix().equals( rhs.getOptionalSuffix() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalSuffix() != null ) {
					return( false );
				}
			}
			if( getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
				return( false );
			}
			if( getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
				return( false );
			}
			if( ! getRequiredJMethodBody().equals( rhs.getRequiredJMethodBody() ) ) {
				return( false );
			}
			if( ! getRequiredCppMethodBody().equals( rhs.getRequiredCppMethodBody() ) ) {
				return( false );
			}
			if( ! getRequiredCsMethodBody().equals( rhs.getRequiredCsMethodBody() ) ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFBamServerMethodByUNameIdxKey ) {
			CFBamServerMethodByUNameIdxKey rhs = (CFBamServerMethodByUNameIdxKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredTableId() != rhs.getRequiredTableId() ) {
				return( false );
			}
			if( ! getRequiredName().equals( rhs.getRequiredName() ) ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFBamServerMethodByMethTableIdxKey ) {
			CFBamServerMethodByMethTableIdxKey rhs = (CFBamServerMethodByMethTableIdxKey)obj;
			if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
				return( false );
			}
			if( getRequiredTableId() != rhs.getRequiredTableId() ) {
				return( false );
			}
			return( true );
		}
		else if( obj instanceof CFBamServerMethodByDefSchemaIdxKey ) {
			CFBamServerMethodByDefSchemaIdxKey rhs = (CFBamServerMethodByDefSchemaIdxKey)obj;
			if( getOptionalDefSchemaTenantId() != null ) {
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					if( ! getOptionalDefSchemaTenantId().equals( rhs.getOptionalDefSchemaTenantId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					return( false );
				}
			}
			if( getOptionalDefSchemaId() != null ) {
				if( rhs.getOptionalDefSchemaId() != null ) {
					if( ! getOptionalDefSchemaId().equals( rhs.getOptionalDefSchemaId() ) ) {
						return( false );
					}
				}
			}
			else {
				if( rhs.getOptionalDefSchemaId() != null ) {
					return( false );
				}
			}
			return( true );
		}
		else {
			return( super.equals( obj ) );
		}
	}

	public int hashCode() {
		int hashCode = super.hashCode();
		hashCode = hashCode + (int)( getRequiredTableId() );
		if( getOptionalDefSchemaTenantId() != null ) {
			hashCode = hashCode + getOptionalDefSchemaTenantId().hashCode();
		}
		if( getOptionalDefSchemaId() != null ) {
			hashCode = hashCode + getOptionalDefSchemaId().hashCode();
		}
		if( getRequiredName() != null ) {
			hashCode = hashCode + getRequiredName().hashCode();
		}
		if( getOptionalShortName() != null ) {
			hashCode = hashCode + getOptionalShortName().hashCode();
		}
		if( getOptionalLabel() != null ) {
			hashCode = hashCode + getOptionalLabel().hashCode();
		}
		if( getOptionalShortDescription() != null ) {
			hashCode = hashCode + getOptionalShortDescription().hashCode();
		}
		if( getOptionalDescription() != null ) {
			hashCode = hashCode + getOptionalDescription().hashCode();
		}
		if( getOptionalSuffix() != null ) {
			hashCode = hashCode + getOptionalSuffix().hashCode();
		}
		if( getRequiredIsInstanceMethod() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		if( getRequiredIsServerOnly() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		if( getRequiredJMethodBody() != null ) {
			hashCode = hashCode + getRequiredJMethodBody().hashCode();
		}
		if( getRequiredCppMethodBody() != null ) {
			hashCode = hashCode + getRequiredCppMethodBody().hashCode();
		}
		if( getRequiredCsMethodBody() != null ) {
			hashCode = hashCode + getRequiredCsMethodBody().hashCode();
		}
		return( hashCode & 0x7fffffff );
	}

	public int compareTo( Object obj ) {
		if( obj == null ) {
			return( -1 );
		}
		else if( obj instanceof CFBamServerMethodBuff ) {
			CFBamServerMethodBuff rhs = (CFBamServerMethodBuff)obj;
			int retval = super.compareTo( rhs );
			if( retval != 0 ) {
				return( retval );
			}
			return( 0 );
		}
		else if( obj instanceof CFBamServerMethodByUNameIdxKey ) {
			CFBamServerMethodByUNameIdxKey rhs = (CFBamServerMethodByUNameIdxKey)obj;

			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			if( getRequiredTableId() < rhs.getRequiredTableId() ) {
				return( -1 );
			}
			else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
				return( 1 );
			}
			{
				int cmp = getRequiredName().compareTo( rhs.getRequiredName() );
				if( cmp != 0 ) {
					return( cmp );
				}
			}			return( 0 );
		}
		else if( obj instanceof CFBamServerMethodByMethTableIdxKey ) {
			CFBamServerMethodByMethTableIdxKey rhs = (CFBamServerMethodByMethTableIdxKey)obj;

			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			if( getRequiredTableId() < rhs.getRequiredTableId() ) {
				return( -1 );
			}
			else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
				return( 1 );
			}			return( 0 );
		}
		else if( obj instanceof CFBamServerMethodByDefSchemaIdxKey ) {
			CFBamServerMethodByDefSchemaIdxKey rhs = (CFBamServerMethodByDefSchemaIdxKey)obj;

			if( getOptionalDefSchemaTenantId() != null ) {
				Long lhsDefSchemaTenantId = getOptionalDefSchemaTenantId();
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					Long rhsDefSchemaTenantId = rhs.getOptionalDefSchemaTenantId();
					int cmp = lhsDefSchemaTenantId.compareTo( rhsDefSchemaTenantId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalDefSchemaId() != null ) {
				Long lhsDefSchemaId = getOptionalDefSchemaId();
				if( rhs.getOptionalDefSchemaId() != null ) {
					Long rhsDefSchemaId = rhs.getOptionalDefSchemaId();
					int cmp = lhsDefSchemaId.compareTo( rhsDefSchemaId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalDefSchemaId() != null ) {
					return( -1 );
				}
			}			return( 0 );
		}
		else if( obj instanceof CFBamServerMethodHBuff ) {
			CFBamServerMethodHBuff rhs = (CFBamServerMethodHBuff)obj;

			int retval = super.compareTo( rhs );
			if( retval != 0 ) {
				return( retval );
			}
			{
				long lhsAuditClusterId = getAuditClusterId();
				long rhsAuditClusterId = rhs.getAuditClusterId();
				if( lhsAuditClusterId < rhsAuditClusterId ) {
					return( -1 );
				}
				else if( lhsAuditClusterId > rhsAuditClusterId ) {
					return( 1 );
				}
			}
			{
				Calendar lhsAuditStamp = getAuditStamp();
				Calendar rhsAuditStamp = rhs.getAuditStamp();
				if( lhsAuditStamp == null ) {
					if( rhsAuditStamp != null ) {
						return( -1 );
					}
				}
				else if( rhsAuditStamp == null ) {
					return( 1 );
				}
				else {
					int cmpstat = lhsAuditStamp.compareTo( rhsAuditStamp );
					if( cmpstat != 0 ) {
						return( cmpstat );
					}
				}
			}
			{
				short lhsAuditActionId = getAuditActionId();
				short rhsAuditActionId = rhs.getAuditActionId();
				if( lhsAuditActionId < rhsAuditActionId ) {
					return( -1 );
				}
				else if( lhsAuditActionId > rhsAuditActionId ) {
					return( 1 );
				}
			}
			{
				int lhsRequiredRevision = getRequiredRevision();
				int rhsRequiredRevision = rhs.getRequiredRevision();
				if( lhsRequiredRevision < rhsRequiredRevision ) {
					return( -1 );
				}
				else if( lhsRequiredRevision > rhsRequiredRevision ) {
					return( 1 );
				}
			}
			{
				UUID lhsAuditSessionId = getAuditSessionId();
				UUID rhsAuditSessionId = rhs.getAuditSessionId();
				if( lhsAuditSessionId == null ) {
					if( rhsAuditSessionId != null ) {
						return( -1 );
					}
				}
				else if( rhsAuditSessionId == null ) {
					return( 1 );
				}
				else {
					int cmpstat = lhsAuditSessionId.compareTo( rhsAuditSessionId );
					if( cmpstat != 0 ) {
						return( cmpstat );
					}
				}
			}
			if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
				return( -1 );
			}
			else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
				return( 1 );
			}
			if( getRequiredId() < rhs.getRequiredId() ) {
				return( -1 );
			}
			else if( getRequiredId() > rhs.getRequiredId() ) {
				return( 1 );
			}
			if( getRequiredTableId() < rhs.getRequiredTableId() ) {
				return( -1 );
			}
			else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
				return( 1 );
			}
			if( getOptionalDefSchemaTenantId() != null ) {
				Long lhsDefSchemaTenantId = getOptionalDefSchemaTenantId();
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					Long rhsDefSchemaTenantId = rhs.getOptionalDefSchemaTenantId();
					int cmp = lhsDefSchemaTenantId.compareTo( rhsDefSchemaTenantId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalDefSchemaTenantId() != null ) {
					return( -1 );
				}
			}
			if( getOptionalDefSchemaId() != null ) {
				Long lhsDefSchemaId = getOptionalDefSchemaId();
				if( rhs.getOptionalDefSchemaId() != null ) {
					Long rhsDefSchemaId = rhs.getOptionalDefSchemaId();
					int cmp = lhsDefSchemaId.compareTo( rhsDefSchemaId );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalDefSchemaId() != null ) {
					return( -1 );
				}
			}
			{
				int cmp = getRequiredName().compareTo( rhs.getRequiredName() );
				if( cmp != 0 ) {
					return( cmp );
				}
			}
			if( getOptionalShortName() != null ) {
				if( rhs.getOptionalShortName() != null ) {
					int cmp = getOptionalShortName().compareTo( rhs.getOptionalShortName() );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalShortName() != null ) {
					return( -1 );
				}
			}
			if( getOptionalLabel() != null ) {
				if( rhs.getOptionalLabel() != null ) {
					int cmp = getOptionalLabel().compareTo( rhs.getOptionalLabel() );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalLabel() != null ) {
					return( -1 );
				}
			}
			if( getOptionalShortDescription() != null ) {
				if( rhs.getOptionalShortDescription() != null ) {
					int cmp = getOptionalShortDescription().compareTo( rhs.getOptionalShortDescription() );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalShortDescription() != null ) {
					return( -1 );
				}
			}
			if( getOptionalDescription() != null ) {
				if( rhs.getOptionalDescription() != null ) {
					int cmp = getOptionalDescription().compareTo( rhs.getOptionalDescription() );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalDescription() != null ) {
					return( -1 );
				}
			}
			if( getOptionalSuffix() != null ) {
				if( rhs.getOptionalSuffix() != null ) {
					int cmp = getOptionalSuffix().compareTo( rhs.getOptionalSuffix() );
					if( cmp != 0 ) {
						return( cmp );
					}
				}
				else {
					return( 1 );
				}
			}
			else {
				if( rhs.getOptionalSuffix() != null ) {
					return( -1 );
				}
			}
			if( getRequiredIsInstanceMethod() ) {
				if( ! rhs.getRequiredIsInstanceMethod() ) {
					return( 1 );
				}
			}
			else {
				if( rhs.getRequiredIsInstanceMethod() ) {
					return( -1 );
				}
			}
			if( getRequiredIsServerOnly() ) {
				if( ! rhs.getRequiredIsServerOnly() ) {
					return( 1 );
				}
			}
			else {
				if( rhs.getRequiredIsServerOnly() ) {
					return( -1 );
				}
			}
			{
				int cmp = getRequiredJMethodBody().compareTo( rhs.getRequiredJMethodBody() );
				if( cmp != 0 ) {
					return( cmp );
				}
			}
			{
				int cmp = getRequiredCppMethodBody().compareTo( rhs.getRequiredCppMethodBody() );
				if( cmp != 0 ) {
					return( cmp );
				}
			}
			{
				int cmp = getRequiredCsMethodBody().compareTo( rhs.getRequiredCsMethodBody() );
				if( cmp != 0 ) {
					return( cmp );
				}
			}
			return( 0 );
		}
		else {
			return( super.compareTo( obj ) );
		}
	}

	public void set( CFBamScopeBuff src ) {
		if( src instanceof CFBamServerMethodBuff ) {
			setServerMethodBuff( (CFBamServerMethodBuff)src );
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"compareTo",
				"src",
				src,
				"CFBamServerMethodBuff" );
		}
	}

	public void setServerMethodBuff( CFBamServerMethodBuff src ) {
		super.setScopeBuff( src );
		setRequiredTableId( src.getRequiredTableId() );
		setOptionalDefSchemaTenantId( src.getOptionalDefSchemaTenantId() );
		setOptionalDefSchemaId( src.getOptionalDefSchemaId() );
		setRequiredName( src.getRequiredName() );
		setOptionalShortName( src.getOptionalShortName() );
		setOptionalLabel( src.getOptionalLabel() );
		setOptionalShortDescription( src.getOptionalShortDescription() );
		setOptionalDescription( src.getOptionalDescription() );
		setOptionalSuffix( src.getOptionalSuffix() );
		setRequiredIsInstanceMethod( src.getRequiredIsInstanceMethod() );
		setRequiredIsServerOnly( src.getRequiredIsServerOnly() );
		setRequiredJMethodBody( src.getRequiredJMethodBody() );
		setRequiredCppMethodBody( src.getRequiredCppMethodBody() );
		setRequiredCsMethodBody( src.getRequiredCsMethodBody() );
	}

	public void set( CFBamScopeHBuff src ) {
		if( src instanceof CFBamServerMethodHBuff ) {
			setServerMethodBuff( (CFBamServerMethodHBuff)src );
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"compareTo",
				"src",
				src,
				"CFBamServerMethodHBuff" );
		}
	}

	public void setServerMethodBuff( CFBamServerMethodHBuff src ) {
		super.setScopeBuff( src );
		setRequiredTableId( src.getRequiredTableId() );
		setOptionalDefSchemaTenantId( src.getOptionalDefSchemaTenantId() );
		setOptionalDefSchemaId( src.getOptionalDefSchemaId() );
		setRequiredName( src.getRequiredName() );
		setOptionalShortName( src.getOptionalShortName() );
		setOptionalLabel( src.getOptionalLabel() );
		setOptionalShortDescription( src.getOptionalShortDescription() );
		setOptionalDescription( src.getOptionalDescription() );
		setOptionalSuffix( src.getOptionalSuffix() );
		setRequiredIsInstanceMethod( src.getRequiredIsInstanceMethod() );
		setRequiredIsServerOnly( src.getRequiredIsServerOnly() );
		setRequiredJMethodBody( src.getRequiredJMethodBody() );
		setRequiredCppMethodBody( src.getRequiredCppMethodBody() );
		setRequiredCsMethodBody( src.getRequiredCsMethodBody() );
	}
}
