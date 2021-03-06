// Description: Java 11 edit object instance implementation for CFBam TSecGrpMemb.

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

public class CFBamTSecGrpMembEditObj
	implements ICFBamTSecGrpMembEditObj
{
	protected ICFSecTSecGrpMembObj orig;
	protected CFSecTSecGrpMembBuff buff;
	protected ICFSecSecUserObj createdBy = null;
	protected ICFSecSecUserObj updatedBy = null;
	protected ICFSecTenantObj requiredOwnerTenant;
	protected ICFSecTSecGroupObj requiredContainerGroup;
	protected ICFSecSecUserObj requiredParentUser;

	public CFBamTSecGrpMembEditObj( ICFSecTSecGrpMembObj argOrig ) {
		orig = argOrig;
		getBuff();
		CFSecTSecGrpMembBuff origBuff = orig.getBuff();
		buff.set( origBuff );
		requiredOwnerTenant = null;
		requiredContainerGroup = null;
		requiredParentUser = null;
	}

	public ICFSecSecUserObj getCreatedBy() {
		if( createdBy == null ) {
			CFSecTSecGrpMembBuff buff = getBuff();
			createdBy = ((ICFBamSchemaObj)getSchema()).getSecUserTableObj().readSecUserByIdIdx( buff.getCreatedByUserId() );
		}
		return( createdBy );
	}

	public Calendar getCreatedAt() {
		return( getBuff().getCreatedAt() );
	}

	public ICFSecSecUserObj getUpdatedBy() {
		if( updatedBy == null ) {
			CFSecTSecGrpMembBuff buff = getBuff();
			updatedBy = ((ICFBamSchemaObj)getSchema()).getSecUserTableObj().readSecUserByIdIdx( buff.getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	public Calendar getUpdatedAt() {
		return( getBuff().getUpdatedAt() );
	}

	public void setCreatedBy( ICFSecSecUserObj value ) {
		createdBy = value;
		if( value != null ) {
			getBuff().setCreatedByUserId( value.getRequiredSecUserId() );
		}
	}

	public void setCreatedAt( Calendar value ) {
		getBuff().setCreatedAt( value );
	}

	public void setUpdatedBy( ICFSecSecUserObj value ) {
		updatedBy = value;
		if( value != null ) {
			getBuff().setUpdatedByUserId( value.getRequiredSecUserId() );
		}
	}

	public void setUpdatedAt( Calendar value ) {
		getBuff().setUpdatedAt( value );
	}

	public String getClassCode() {
		return( CFBamTSecGrpMembObj.CLASS_CODE );
	}

	public String getGenDefName() {
		return( "TSecGrpMemb" );
	}

	public ICFLibAnyObj getScope() {
		ICFSecTSecGroupObj scope = getRequiredContainerGroup();
		return( scope );
	}

	public ICFLibAnyObj getObjScope() {
		ICFSecTSecGroupObj scope = getRequiredContainerGroup();
		return( scope );
	}

	public String getObjName() {
		String objName;
		long val = getRequiredTSecGrpMembId();
		objName = Long.toString( val );
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

	public ICFLibAnyObj getNamedObject( Class qualifyingClass, String objName ) {
		ICFLibAnyObj topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == null ) {
			return( null );
		}
		ICFLibAnyObj namedObject = topContainer.getNamedObject( objName );
		return( namedObject );
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
			else {
				containerName = container.getObjName();
				qualName = containerName + "." + qualName;
				container = container.getObjScope();
			}
		}
		return( qualName );
	}

	public String getObjFullName() {
		String fullName = getObjName();
		ICFLibAnyObj container = getObjScope();
		String containerName;
		while( container != null ) {
			if( container instanceof ICFSecClusterObj ) {
				container = null;
			}
			else if( container instanceof ICFSecTenantObj ) {
				container = null;
			}
			else {
				containerName = container.getObjName();
				fullName = containerName + "." + fullName;
				container = container.getObjScope();
			}
		}
		return( fullName );
	}

	public ICFSecTSecGrpMembObj realise() {
		// We realise this so that it's buffer will get copied to orig during realization
		ICFSecTSecGrpMembObj retobj = getSchema().getTSecGrpMembTableObj().realiseTSecGrpMemb( (ICFBamTSecGrpMembObj)this );
		return( retobj );
	}

	public void forget() {
		getOrigAsTSecGrpMemb().forget();
	}

	public ICFSecTSecGrpMembObj read() {
		ICFSecTSecGrpMembObj retval = getOrigAsTSecGrpMemb().read();
		if( retval != orig ) {
			throw new CFLibUsageException( getClass(),
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	public ICFSecTSecGrpMembObj read( boolean forceRead ) {
		ICFSecTSecGrpMembObj retval = getOrigAsTSecGrpMemb().read( forceRead );
		if( retval != orig ) {
			throw new CFLibUsageException( getClass(),
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	public ICFSecTSecGrpMembObj create() {
		copyBuffToOrig();
		ICFSecTSecGrpMembObj retobj = ((ICFBamSchemaObj)getOrigAsTSecGrpMemb().getSchema()).getTSecGrpMembTableObj().createTSecGrpMemb( getOrigAsTSecGrpMemb() );
		if( retobj == getOrigAsTSecGrpMemb() ) {
			copyOrigToBuff();
		}
		return( retobj );
	}

	public CFSecTSecGrpMembEditObj update() {
		getSchema().getTSecGrpMembTableObj().updateTSecGrpMemb( (ICFSecTSecGrpMembObj)this );
		return( null );
	}

	public CFSecTSecGrpMembEditObj deleteInstance() {
		if( getIsNew() ) {
			throw new CFLibUsageException( getClass(), "delete", "Cannot delete a new instance" );
		}
		getSchema().getTSecGrpMembTableObj().deleteTSecGrpMemb( getOrigAsTSecGrpMemb() );
		return( null );
	}

	public ICFSecTSecGrpMembTableObj getTSecGrpMembTable() {
		return( orig.getSchema().getTSecGrpMembTableObj() );
	}

	public ICFSecTSecGrpMembEditObj getEdit() {
		return( (ICFSecTSecGrpMembEditObj)this );
	}

	public ICFSecTSecGrpMembEditObj getEditAsTSecGrpMemb() {
		return( (ICFSecTSecGrpMembEditObj)this );
	}

	public ICFSecTSecGrpMembEditObj beginEdit() {
		throw new CFLibUsageException( getClass(), "beginEdit", "Cannot edit an edition" );
	}

	public void endEdit() {
		orig.endEdit();
	}

	public ICFSecTSecGrpMembObj getOrig() {
		return( orig );
	}

	public ICFSecTSecGrpMembObj getOrigAsTSecGrpMemb() {
		return( (ICFSecTSecGrpMembObj)orig );
	}

	public ICFSecSchemaObj getSchema() {
		return( orig.getSchema() );
	}

	public CFSecTSecGrpMembBuff getBuff() {
		if( buff == null ) {
			buff = ((ICFBamSchema)getOrigAsTSecGrpMemb().getSchema().getBackingStore()).getFactoryTSecGrpMemb().newBuff();
			buff.set( orig.getBuff() );
		}
		return( buff );
	}

	public void setBuff( CFSecTSecGrpMembBuff value ) {
		if( buff != value ) {
			buff = value;
			requiredOwnerTenant = null;
			requiredContainerGroup = null;
			requiredParentUser = null;
		}
	}

	public CFSecTSecGrpMembBuff getTSecGrpMembBuff() {
		return( (CFSecTSecGrpMembBuff)getBuff() );
	}

	public CFSecTSecGrpMembPKey getPKey() {
		return( orig.getPKey() );
	}

	public void setPKey( CFSecTSecGrpMembPKey value ) {
		orig.setPKey( value );
		copyPKeyToBuff();
	}

	public boolean getIsNew() {
		return( orig.getIsNew() );
	}

	public void setIsNew( boolean value ) {
		orig.setIsNew( value );
	}

	public long getRequiredTenantId() {
		return( getPKey().getRequiredTenantId() );
	}

	public long getRequiredTSecGrpMembId() {
		return( getPKey().getRequiredTSecGrpMembId() );
	}

	public int getRequiredTSecGroupId() {
		return( getTSecGrpMembBuff().getRequiredTSecGroupId() );
	}

	public UUID getRequiredSecUserId() {
		return( getTSecGrpMembBuff().getRequiredSecUserId() );
	}

	public ICFSecTenantObj getRequiredOwnerTenant() {
		return( getRequiredOwnerTenant( false ) );
	}

	public ICFSecTenantObj getRequiredOwnerTenant( boolean forceRead ) {
		if( forceRead || ( requiredOwnerTenant == null ) ) {
			boolean anyMissing = false;
			if( ! anyMissing ) {
				ICFSecTenantObj obj = ((ICFBamSchemaObj)getOrigAsTSecGrpMemb().getSchema()).getTenantTableObj().readTenantByIdIdx( getPKey().getRequiredTenantId() );
				requiredOwnerTenant = obj;
			}
		}
		return( requiredOwnerTenant );
	}

	public void setRequiredOwnerTenant( ICFSecTenantObj value ) {
			if( buff == null ) {
				getTSecGrpMembBuff();
			}
			if( value != null ) {
				getPKey().setRequiredTenantId( value.getRequiredId() );
				getTSecGrpMembBuff().setRequiredTenantId( value.getRequiredId() );
			}
			requiredOwnerTenant = value;
	}

	public ICFSecTSecGroupObj getRequiredContainerGroup() {
		return( getRequiredContainerGroup( false ) );
	}

	public ICFSecTSecGroupObj getRequiredContainerGroup( boolean forceRead ) {
		if( forceRead || ( requiredContainerGroup == null ) ) {
			boolean anyMissing = false;
			if( ! anyMissing ) {
				ICFSecTSecGroupObj obj = ((ICFBamSchemaObj)getOrigAsTSecGrpMemb().getSchema()).getTSecGroupTableObj().readTSecGroupByIdIdx( getPKey().getRequiredTenantId(),
					getTSecGrpMembBuff().getRequiredTSecGroupId() );
				requiredContainerGroup = obj;
				if( obj != null ) {
					getTSecGrpMembBuff().setRequiredTenantId( obj.getRequiredTenantId() );
					getTSecGrpMembBuff().setRequiredTSecGroupId( obj.getRequiredTSecGroupId() );
					requiredContainerGroup = obj;
				}
			}
		}
		return( requiredContainerGroup );
	}

	public void setRequiredContainerGroup( ICFSecTSecGroupObj value ) {
			if( buff == null ) {
				getTSecGrpMembBuff();
			}
			if( value != null ) {
				getPKey().setRequiredTenantId( value.getRequiredTenantId() );
				getTSecGrpMembBuff().setRequiredTenantId( value.getRequiredTenantId() );
				getTSecGrpMembBuff().setRequiredTSecGroupId( value.getRequiredTSecGroupId() );
			}
			requiredContainerGroup = value;
	}

	public ICFSecSecUserObj getRequiredParentUser() {
		return( getRequiredParentUser( false ) );
	}

	public ICFSecSecUserObj getRequiredParentUser( boolean forceRead ) {
		if( forceRead || ( requiredParentUser == null ) ) {
			boolean anyMissing = false;
			if( ! anyMissing ) {
				ICFSecSecUserObj obj = ((ICFBamSchemaObj)getOrigAsTSecGrpMemb().getSchema()).getSecUserTableObj().readSecUserByIdIdx( getTSecGrpMembBuff().getRequiredSecUserId() );
				requiredParentUser = obj;
			}
		}
		return( requiredParentUser );
	}

	public void setRequiredParentUser( ICFSecSecUserObj value ) {
			if( buff == null ) {
				getTSecGrpMembBuff();
			}
			if( value != null ) {
				getTSecGrpMembBuff().setRequiredSecUserId( value.getRequiredSecUserId() );
			}
			else {
			}
			requiredParentUser = value;
	}

	public void copyPKeyToBuff() {
		buff.setRequiredTenantId( getPKey().getRequiredTenantId() );
		buff.setRequiredTSecGrpMembId( getPKey().getRequiredTSecGrpMembId() );
	}

	public void copyBuffToPKey() {
		getPKey().setRequiredTenantId( buff.getRequiredTenantId() );
		getPKey().setRequiredTSecGrpMembId( buff.getRequiredTSecGrpMembId() );
	}

	public void copyBuffToOrig() {
		CFSecTSecGrpMembBuff origBuff = getOrigAsTSecGrpMemb().getTSecGrpMembBuff();
		CFSecTSecGrpMembBuff myBuff = getTSecGrpMembBuff();
		origBuff.set( myBuff );
	}

	public void copyOrigToBuff() {
		CFSecTSecGrpMembBuff origBuff = getOrigAsTSecGrpMemb().getTSecGrpMembBuff();
		CFSecTSecGrpMembBuff myBuff = getTSecGrpMembBuff();
		myBuff.set( origBuff );
	}
}
