// Description: Java 11 base object instance implementation for CFBam UInt64Def.

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

package org.msscf.msscf.v2_13.cfbam.CFBamObj;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;
import org.msscf.msscf.v2_13.cfsec.CFSecObj.*;
import org.msscf.msscf.v2_13.cfint.CFIntObj.*;
import org.msscf.msscf.v2_13.cfbam.CFBam.*;

public class CFBamUInt64DefObj
	extends CFBamAtomObj
	implements ICFBamUInt64DefObj
{
	public final static String CLASS_CODE = "a84e";

	public CFBamUInt64DefObj() {
		super();
	}

	public CFBamUInt64DefObj( ICFBamSchemaObj argSchema ) {
		super( argSchema );
	}

	public String getClassCode() {
		return( CLASS_CODE );
	}

	public String getGenDefName() {
		return( "UInt64Def" );
	}

	public ICFLibAnyObj getScope() {
		return( super.getScope() );
	}

	public ICFLibAnyObj getObjScope() {
		return( super.getObjScope() );
	}

	public String getObjName() {
		String objName;
		objName = getRequiredName();
		return( objName );
	}

	public ICFLibAnyObj getObjQualifier( Class qualifyingClass ) {
		ICFLibAnyObj container = this;
		if( qualifyingClass != null ) {
			while( container != null ) {
				if( container instanceof ICFBamClusterObj ) {
					break;
				}
				else if( container instanceof ICFBamTenantObj ) {
					break;
				}
				else if( qualifyingClass.isInstance( container ) ) {
					break;
				}
				container = container.getObjScope();
			}
		}
		else {
			while( container != null ) {
				if( container instanceof ICFBamClusterObj ) {
					break;
				}
				else if( container instanceof ICFBamTenantObj ) {
					break;
				}
				container = container.getObjScope();
			}
		}
		return( container );
	}

	public ICFLibAnyObj getNamedObject( String objName ) {
		String nextName;
		String remainingName;
		ICFLibAnyObj subObj = null;
		ICFLibAnyObj retObj;
		int nextDot = objName.indexOf( '.' );
		if( nextDot >= 0 ) {
			nextName = objName.substring( 0, nextDot );
			remainingName = objName.substring( nextDot + 1 );
		}
		else {
			nextName = objName;
			remainingName = null;
		}
		if( remainingName == null ) {
			retObj = subObj;
		}
		else if( subObj == null ) {
			retObj = null;
		}
		else {
			retObj = subObj.getNamedObject( remainingName );
		}
		return( retObj );
	}

	public String getObjQualifiedName() {
		String qualName = getObjName();
		ICFLibAnyObj container = getObjScope();
		String containerName;
		while( container != null ) {
			if( container instanceof ICFSecClusterObj ) {
				container = null;
			}
			else if( container instanceof ICFSecTenantObj ) {
				container = null;
			}
			else if( container instanceof ICFBamSchemaDefObj ) {
				container = null;
			}
			else {
				containerName = container.getObjName();
				qualName = containerName + "." + qualName;
				container = container.getObjScope();
			}
		}
		return( qualName );
	}

	public ICFBamValueObj realise() {
		ICFBamUInt64DefObj retobj = ((ICFBamSchemaObj)schema).getUInt64DefTableObj().realiseUInt64Def(
			(ICFBamUInt64DefObj)this );
		return( (ICFBamValueObj)retobj );
	}

	public void forget() {
		((ICFBamSchemaObj)schema).getUInt64DefTableObj().reallyDeepDisposeUInt64Def( (ICFBamUInt64DefObj)this );
	}

	public ICFBamValueObj read() {
		ICFBamUInt64DefObj retobj = ((ICFBamSchemaObj)schema).getUInt64DefTableObj().readUInt64DefByIdIdx( getPKey().getRequiredTenantId(),
			getPKey().getRequiredId(), false );
		return( (ICFBamValueObj)retobj );
	}

	public ICFBamValueObj read( boolean forceRead ) {
		ICFBamUInt64DefObj retobj = ((ICFBamSchemaObj)schema).getUInt64DefTableObj().readUInt64DefByIdIdx( getPKey().getRequiredTenantId(),
			getPKey().getRequiredId(), forceRead );
		return( (ICFBamValueObj)retobj );
	}

	public ICFBamValueObj moveUp() {
		ICFBamUInt64DefObj retobj = ((ICFBamSchemaObj)schema).getUInt64DefTableObj().moveUpUInt64Def( this );
		return( (ICFBamValueObj)retobj );
	}

	public ICFBamValueObj moveDown() {
		ICFBamUInt64DefObj retobj = ((ICFBamSchemaObj)schema).getUInt64DefTableObj().moveDownUInt64Def( this );
		return( (ICFBamValueObj)retobj );
	}

	public ICFBamUInt64DefTableObj getUInt64DefTable() {
		return( ((ICFBamSchemaObj)schema).getUInt64DefTableObj() );
	}

	public CFBamValueBuff getBuff() {
		if( buff == null ) {
			if( isNew ) {
				buff = ((ICFBamSchema)schema.getBackingStore()).getFactoryUInt64Def().newBuff();
			}
			else {
				// Read the data buff via the backing store
				buff = ((ICFBamSchema)schema.getBackingStore()).getTableUInt64Def().readDerivedByIdIdx( ((ICFBamSchemaObj)schema).getAuthorization(),
						getPKey().getRequiredTenantId(),
						getPKey().getRequiredId() );
				if( buff != null ) {
					copyBuffToPKey();
				}
			}
		}
		return( buff );
	}

	public void setBuff( CFBamValueBuff value ) {
		if( ! ( ( value == null ) || ( value instanceof CFBamUInt64DefBuff ) ) ) {
			throw new CFLibUnsupportedClassException( getClass(),
				"setBuff",
				"value",
				value,
				"CFBamUInt64DefBuff" );
		}
		buff = value;
		copyBuffToPKey();
		requiredOwnerTenant = null;
		requiredContainerScope = null;
		optionalLookupDefSchema = null;
		optionalLookupPrev = null;
		optionalLookupNext = null;
	}

	public CFBamUInt64DefBuff getUInt64DefBuff() {
		return( (CFBamUInt64DefBuff)getBuff() );
	}

	public ICFBamValueEditObj beginEdit() {
		if( edit != null ) {
			throw new CFLibUsageException( getClass(), "beginEdit", "An edit is already open" );
		}
		ICFBamUInt64DefObj lockobj;
		if( getIsNew() ) {
			lockobj = (ICFBamUInt64DefObj)this;
		}
		else {
			lockobj = ((ICFBamSchemaObj)schema).getUInt64DefTableObj().lockUInt64Def( getPKey() );
		}
		edit = ((ICFBamSchemaObj)schema).getUInt64DefTableObj().newEditInstance( lockobj );
		return( (ICFBamValueEditObj)edit );
	}

	public ICFBamUInt64DefEditObj getEditAsUInt64Def() {
		return( (ICFBamUInt64DefEditObj)edit );
	}

	public ICFSecSecUserObj getCreatedBy() {
		if( createdBy == null ) {
			CFBamValueBuff buff = getBuff();
			createdBy = ((ICFBamSchemaObj)getSchema()).getSecUserTableObj().readSecUserByIdIdx( buff.getCreatedByUserId() );
		}
		return( createdBy );
	}

	public Calendar getCreatedAt() {
		return( getBuff().getCreatedAt() );
	}

	public ICFSecSecUserObj getUpdatedBy() {
		if( updatedBy == null ) {
			CFBamValueBuff buff = getBuff();
			updatedBy = ((ICFBamSchemaObj)getSchema()).getSecUserTableObj().readSecUserByIdIdx( buff.getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	public Calendar getUpdatedAt() {
		return( getBuff().getUpdatedAt() );
	}

	public BigDecimal getOptionalInitValue() {
		return( getUInt64DefBuff().getOptionalInitValue() );
	}

	public BigDecimal getOptionalMinValue() {
		return( getUInt64DefBuff().getOptionalMinValue() );
	}

	public BigDecimal getOptionalMaxValue() {
		return( getUInt64DefBuff().getOptionalMaxValue() );
	}
}
