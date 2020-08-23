// Description: Java 11 edit object instance implementation for CFBam Id16Gen.

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

public class CFBamId16GenEditObj
	extends CFBamInt16TypeEditObj

	implements ICFBamId16GenEditObj
{
	protected ICFBamTableObj optionalLookupDispenser;

	public CFBamId16GenEditObj( ICFBamId16GenObj argOrig ) {
		super( argOrig );
		optionalLookupDispenser = null;
	}

	public String getClassCode() {
		return( CFBamId16GenObj.CLASS_CODE );
	}

	public String getGenDefName() {
		return( "Id16Gen" );
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
		// We realise this so that it's buffer will get copied to orig during realization
		ICFBamId16GenObj retobj = getSchema().getId16GenTableObj().realiseId16Gen( (ICFBamId16GenObj)this );
		return( retobj );
	}

	public void forget() {
		getOrigAsId16Gen().forget();
	}

	public ICFBamValueObj moveUp() {
		throw new CFLibUsageException( getClass(),
			"moveUp",
			"You cannot move an edited object in the chain" );
	}

	public ICFBamValueObj moveDown() {
		throw new CFLibUsageException( getClass(),
			"moveDown",
			"You cannot move an edited object in the chain" );
	}

	public ICFBamValueObj create() {
		copyBuffToOrig();
		ICFBamId16GenObj retobj = ((ICFBamSchemaObj)getOrigAsId16Gen().getSchema()).getId16GenTableObj().createId16Gen( getOrigAsId16Gen() );
		if( retobj == getOrigAsId16Gen() ) {
			copyOrigToBuff();
		}
		return( retobj );
	}

	public CFBamValueEditObj update() {
		getSchema().getId16GenTableObj().updateId16Gen( (ICFBamId16GenObj)this );
		return( null );
	}

	public CFBamValueEditObj deleteInstance() {
		if( getIsNew() ) {
			throw new CFLibUsageException( getClass(), "delete", "Cannot delete a new instance" );
		}
		getSchema().getId16GenTableObj().deleteId16Gen( getOrigAsId16Gen() );
		return( null );
	}

	public ICFBamId16GenTableObj getId16GenTable() {
		return( orig.getSchema().getId16GenTableObj() );
	}

	public ICFBamId16GenEditObj getEditAsId16Gen() {
		return( (ICFBamId16GenEditObj)this );
	}

	public ICFBamId16GenObj getOrigAsId16Gen() {
		return( (ICFBamId16GenObj)orig );
	}

	public CFBamValueBuff getBuff() {
		if( buff == null ) {
			buff = ((ICFBamSchema)getOrigAsId16Gen().getSchema().getBackingStore()).getFactoryId16Gen().newBuff();
			buff.set( orig.getBuff() );
		}
		return( buff );
	}

	public void setBuff( CFBamValueBuff value ) {
		if( buff != value ) {
			super.setBuff( value );
			optionalLookupDispenser = null;
		}
	}

	public CFBamId16GenBuff getId16GenBuff() {
		return( (CFBamId16GenBuff)getBuff() );
	}

	public Long getOptionalDispenserTenantId() {
		return( getId16GenBuff().getOptionalDispenserTenantId() );
	}

	public Long getOptionalDispenserId() {
		return( getId16GenBuff().getOptionalDispenserId() );
	}

	public short getRequiredSlice() {
		return( getId16GenBuff().getRequiredSlice() );
	}

	public void setRequiredSlice( short value ) {
		if( getId16GenBuff().getRequiredSlice() != value ) {
			getId16GenBuff().setRequiredSlice( value );
		}
	}

	public short getRequiredBlockSize() {
		return( getId16GenBuff().getRequiredBlockSize() );
	}

	public void setRequiredBlockSize( short value ) {
		if( getId16GenBuff().getRequiredBlockSize() != value ) {
			getId16GenBuff().setRequiredBlockSize( value );
		}
	}

	public ICFBamTableObj getOptionalLookupDispenser() {
		return( getOptionalLookupDispenser( false ) );
	}

	public ICFBamTableObj getOptionalLookupDispenser( boolean forceRead ) {
		if( forceRead || ( optionalLookupDispenser == null ) ) {
			boolean anyMissing = false;
			if( getId16GenBuff().getOptionalDispenserTenantId() == null ) {
				anyMissing = true;
			}
			if( getId16GenBuff().getOptionalDispenserId() == null ) {
				anyMissing = true;
			}
			if( ! anyMissing ) {
				ICFBamTableObj obj = ((ICFBamSchemaObj)getOrigAsId16Gen().getSchema()).getTableTableObj().readTableByIdIdx( getId16GenBuff().getOptionalDispenserTenantId(),
					getId16GenBuff().getOptionalDispenserId() );
				optionalLookupDispenser = obj;
			}
		}
		return( optionalLookupDispenser );
	}

	public void setOptionalLookupDispenser( ICFBamTableObj value ) {
			if( buff == null ) {
				getId16GenBuff();
			}
			if( value != null ) {
				getId16GenBuff().setOptionalDispenserTenantId( value.getRequiredTenantId() );
				getId16GenBuff().setOptionalDispenserId( value.getRequiredId() );
			}
			else {
				getId16GenBuff().setOptionalDispenserTenantId( null );
				getId16GenBuff().setOptionalDispenserId( null );
			}
			optionalLookupDispenser = value;
	}

	public void copyBuffToOrig() {
		CFBamId16GenBuff origBuff = getOrigAsId16Gen().getId16GenBuff();
		CFBamId16GenBuff myBuff = getId16GenBuff();
		origBuff.set( myBuff );
	}

	public void copyOrigToBuff() {
		CFBamId16GenBuff origBuff = getOrigAsId16Gen().getId16GenBuff();
		CFBamId16GenBuff myBuff = getId16GenBuff();
		myBuff.set( origBuff );
	}
}
