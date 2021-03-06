// Description: Java 11 edit object instance implementation for CFBam SecSession.

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

public class CFBamSecSessionEditObj
	implements ICFBamSecSessionEditObj
{
	protected ICFSecSecSessionObj orig;
	protected CFSecSecSessionBuff buff;
	protected ICFSecSecUserObj requiredContainerSecUser;
	protected ICFSecSecUserObj requiredParentSecProxy;

	public CFBamSecSessionEditObj( ICFSecSecSessionObj argOrig ) {
		orig = argOrig;
		getBuff();
		CFSecSecSessionBuff origBuff = orig.getBuff();
		buff.set( origBuff );
		requiredContainerSecUser = null;
		requiredParentSecProxy = null;
	}

	public String getClassCode() {
		return( CFBamSecSessionObj.CLASS_CODE );
	}

	public String getGenDefName() {
		return( "SecSession" );
	}

	public ICFLibAnyObj getScope() {
		ICFSecSecUserObj scope = getRequiredContainerSecUser();
		return( scope );
	}

	public ICFLibAnyObj getObjScope() {
		ICFSecSecUserObj scope = getRequiredContainerSecUser();
		return( scope );
	}

	public String getObjName() {
		String objName;
		UUID val = getRequiredSecSessionId();
		objName = val.toString();
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

	public ICFSecSecSessionObj realise() {
		// We realise this so that it's buffer will get copied to orig during realization
		ICFSecSecSessionObj retobj = getSchema().getSecSessionTableObj().realiseSecSession( (ICFBamSecSessionObj)this );
		return( retobj );
	}

	public void forget() {
		getOrigAsSecSession().forget();
	}

	public ICFSecSecSessionObj read() {
		ICFSecSecSessionObj retval = getOrigAsSecSession().read();
		if( retval != orig ) {
			throw new CFLibUsageException( getClass(),
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	public ICFSecSecSessionObj read( boolean forceRead ) {
		ICFSecSecSessionObj retval = getOrigAsSecSession().read( forceRead );
		if( retval != orig ) {
			throw new CFLibUsageException( getClass(),
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	public ICFSecSecSessionObj create() {
		copyBuffToOrig();
		ICFSecSecSessionObj retobj = ((ICFBamSchemaObj)getOrigAsSecSession().getSchema()).getSecSessionTableObj().createSecSession( getOrigAsSecSession() );
		if( retobj == getOrigAsSecSession() ) {
			copyOrigToBuff();
		}
		return( retobj );
	}

	public CFSecSecSessionEditObj update() {
		getSchema().getSecSessionTableObj().updateSecSession( (ICFSecSecSessionObj)this );
		return( null );
	}

	public CFSecSecSessionEditObj deleteInstance() {
		if( getIsNew() ) {
			throw new CFLibUsageException( getClass(), "delete", "Cannot delete a new instance" );
		}
		getSchema().getSecSessionTableObj().deleteSecSession( getOrigAsSecSession() );
		return( null );
	}

	public ICFSecSecSessionTableObj getSecSessionTable() {
		return( orig.getSchema().getSecSessionTableObj() );
	}

	public ICFSecSecSessionEditObj getEdit() {
		return( (ICFSecSecSessionEditObj)this );
	}

	public ICFSecSecSessionEditObj getEditAsSecSession() {
		return( (ICFSecSecSessionEditObj)this );
	}

	public ICFSecSecSessionEditObj beginEdit() {
		throw new CFLibUsageException( getClass(), "beginEdit", "Cannot edit an edition" );
	}

	public void endEdit() {
		orig.endEdit();
	}

	public ICFSecSecSessionObj getOrig() {
		return( orig );
	}

	public ICFSecSecSessionObj getOrigAsSecSession() {
		return( (ICFSecSecSessionObj)orig );
	}

	public ICFSecSchemaObj getSchema() {
		return( orig.getSchema() );
	}

	public CFSecSecSessionBuff getBuff() {
		if( buff == null ) {
			buff = ((ICFBamSchema)getOrigAsSecSession().getSchema().getBackingStore()).getFactorySecSession().newBuff();
			buff.set( orig.getBuff() );
		}
		return( buff );
	}

	public void setBuff( CFSecSecSessionBuff value ) {
		if( buff != value ) {
			buff = value;
			requiredContainerSecUser = null;
			requiredParentSecProxy = null;
		}
	}

	public CFSecSecSessionBuff getSecSessionBuff() {
		return( (CFSecSecSessionBuff)getBuff() );
	}

	public CFSecSecSessionPKey getPKey() {
		return( orig.getPKey() );
	}

	public void setPKey( CFSecSecSessionPKey value ) {
		orig.setPKey( value );
		copyPKeyToBuff();
	}

	public boolean getIsNew() {
		return( orig.getIsNew() );
	}

	public void setIsNew( boolean value ) {
		orig.setIsNew( value );
	}

	public UUID getRequiredSecSessionId() {
		return( getPKey().getRequiredSecSessionId() );
	}

	public UUID getRequiredSecUserId() {
		return( getSecSessionBuff().getRequiredSecUserId() );
	}

	public String getOptionalSecDevName() {
		return( getSecSessionBuff().getOptionalSecDevName() );
	}

	public void setOptionalSecDevName( String value ) {
		if( getSecSessionBuff().getOptionalSecDevName() != value ) {
			getSecSessionBuff().setOptionalSecDevName( value );
		}
	}

	public Calendar getRequiredStart() {
		return( getSecSessionBuff().getRequiredStart() );
	}

	public void setRequiredStart( Calendar value ) {
		if( getSecSessionBuff().getRequiredStart() != value ) {
			getSecSessionBuff().setRequiredStart( value );
		}
	}

	public Calendar getOptionalFinish() {
		return( getSecSessionBuff().getOptionalFinish() );
	}

	public void setOptionalFinish( Calendar value ) {
		if( getSecSessionBuff().getOptionalFinish() != value ) {
			getSecSessionBuff().setOptionalFinish( value );
		}
	}

	public UUID getOptionalSecProxyId() {
		return( getSecSessionBuff().getOptionalSecProxyId() );
	}

	public ICFSecSecUserObj getRequiredContainerSecUser() {
		return( getRequiredContainerSecUser( false ) );
	}

	public ICFSecSecUserObj getRequiredContainerSecUser( boolean forceRead ) {
		if( forceRead || ( requiredContainerSecUser == null ) ) {
			boolean anyMissing = false;
			if( ! anyMissing ) {
				ICFSecSecUserObj obj = ((ICFBamSchemaObj)getOrigAsSecSession().getSchema()).getSecUserTableObj().readSecUserByIdIdx( getSecSessionBuff().getRequiredSecUserId() );
				requiredContainerSecUser = obj;
				if( obj != null ) {
					getSecSessionBuff().setRequiredSecUserId( obj.getRequiredSecUserId() );
					requiredContainerSecUser = obj;
				}
			}
		}
		return( requiredContainerSecUser );
	}

	public void setRequiredContainerSecUser( ICFSecSecUserObj value ) {
			if( buff == null ) {
				getSecSessionBuff();
			}
			if( value != null ) {
				getSecSessionBuff().setRequiredSecUserId( value.getRequiredSecUserId() );
			}
			requiredContainerSecUser = value;
	}

	public ICFSecSecUserObj getRequiredParentSecProxy() {
		return( getRequiredParentSecProxy( false ) );
	}

	public ICFSecSecUserObj getRequiredParentSecProxy( boolean forceRead ) {
		if( forceRead || ( requiredParentSecProxy == null ) ) {
			boolean anyMissing = false;
			if( getSecSessionBuff().getOptionalSecProxyId() == null ) {
				anyMissing = true;
			}
			if( ! anyMissing ) {
				ICFSecSecUserObj obj = ((ICFBamSchemaObj)getOrigAsSecSession().getSchema()).getSecUserTableObj().readSecUserByIdIdx( getSecSessionBuff().getOptionalSecProxyId() );
				requiredParentSecProxy = obj;
			}
		}
		return( requiredParentSecProxy );
	}

	public void setRequiredParentSecProxy( ICFSecSecUserObj value ) {
			if( buff == null ) {
				getSecSessionBuff();
			}
			if( value != null ) {
				getSecSessionBuff().setOptionalSecProxyId( value.getRequiredSecUserId() );
			}
			else {
				getSecSessionBuff().setOptionalSecProxyId( null );
			}
			requiredParentSecProxy = value;
	}

	public void copyPKeyToBuff() {
		buff.setRequiredSecSessionId( getPKey().getRequiredSecSessionId() );
	}

	public void copyBuffToPKey() {
		getPKey().setRequiredSecSessionId( buff.getRequiredSecSessionId() );
	}

	public void copyBuffToOrig() {
		CFSecSecSessionBuff origBuff = getOrigAsSecSession().getSecSessionBuff();
		CFSecSecSessionBuff myBuff = getSecSessionBuff();
		origBuff.set( myBuff );
	}

	public void copyOrigToBuff() {
		CFSecSecSessionBuff origBuff = getOrigAsSecSession().getSecSessionBuff();
		CFSecSecSessionBuff myBuff = getSecSessionBuff();
		myBuff.set( origBuff );
	}
}
