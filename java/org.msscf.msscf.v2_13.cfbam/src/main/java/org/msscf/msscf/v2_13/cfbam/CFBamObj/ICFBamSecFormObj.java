// Description: Java 11 Object interface for CFBam SecForm.

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
import org.msscf.msscf.v2_13.cfbam.CFBam.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;
import org.msscf.msscf.v2_13.cfsec.CFSecObj.*;
import org.msscf.msscf.v2_13.cfint.CFIntObj.*;
import org.msscf.msscf.v2_13.cfbam.CFBam.*;

public interface ICFBamSecFormObj
	extends ICFSecSecFormObj,
		ICFIntSecFormObj
{
	String getClassCode();
	/**
	 *	Get the user who created this instance.
	 *
	 *	@return	The ICFSecSecUserObj instance who created this instance.
	 */
	ICFSecSecUserObj getCreatedBy();

	/**
	 *	Get the Calendar date-time this instance was created.
	 *
	 *	@return	The Calendar value for the create time of the instance.
	 */
	Calendar getCreatedAt();

	/**
	 *	Get the user who updated this instance.
	 *
	 *	@return	The ICFSecSecUserObj instance who updated this instance.
	 */
	ICFSecSecUserObj getUpdatedBy();

	/**
	 *	Get the Calendar date-time this instance was updated.
	 *
	 *	@return	The Calendar value for the create time of the instance.
	 */
	Calendar getUpdatedAt();
	/**
	 *	Realise this instance of a SecForm.
	 *
	 *	@return	CFSecSecFormObj instance which should be subsequently referenced.
	 */
	ICFSecSecFormObj realise();

	/**
	 *	Forget this instance from the cache.
	 *	<p>
	 *	This method should only be invoked by implementation internals.
	 */
	void forget();

	/**
	 *	Re-read this instance by it's primary key.
	 *
	 *	@return	ICFSecSecFormObj the reference to the cached or read (realised) instance.
	 */
	ICFSecSecFormObj read();

	/**
	 *	Re-read this instance by it's primary key.
	 *
	 *	@return	ICFSecSecFormObj the reference to the cached or read (realised) instance.
	 */
	ICFSecSecFormObj read( boolean forceRead );

	/**
	 *	Initialize and return a locked edition of this SecForm instance.
	 *
	 *	@return	The newly locked ICFSecSecFormEditObj edition of this instance.
	 */
	ICFSecSecFormEditObj beginEdit();

	/**
	 *	End this edition of this SecForm instance.
	 *
	 *	@throws	CFLibNotSupportedException if you try to end a read-only view.
	 */
	void endEdit();

	/**
	 *	Get the current edition of this SecForm instance.
	 *
	 *	@return	The ICFSecSecFormEditObj edition of this instance.
	 */
	ICFSecSecFormEditObj getEdit();

	/**
	 *	Get the current edition of this SecForm instance as a ICFSecSecFormEditObj.
	 *
	 *	@return	The ICFSecSecFormEditObj edition of this instance.
	 */
	ICFSecSecFormEditObj getEditAsSecForm();

	/**
	 *	Get the ICFSecSecFormTableObj table cache which manages this instance.
	 *
	 *	@return	ICFSecSecFormTableObj table cache which manages this instance.
	 */
	ICFSecSecFormTableObj getSecFormTable();

	/**
	 *	Get the ICFSecSchemaObj schema cache which manages this instance.
	 *
	 *	@return	ICFSecSchemaObj schema cache which manages this instance.
	 */
	ICFSecSchemaObj getSchema();

	/**
	 *	Get the CFSecSecFormBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFSecSecFormBuff instance which currently backs this object.
	 */
	CFSecSecFormBuff getBuff();

	/**
	 *	Internal use only.
	 */
	void setBuff( CFSecSecFormBuff value );

	/**
	 *	Get the CFSecSecFormBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFSecSecFormBuff instance which currently backs this object.
	 */
	CFSecSecFormBuff getSecFormBuff();

	/**
	 *	Is this a new instance?
	 *
	 *	@return	True if this is a new instance, otherwise false if it has
	 *		been read, locked, or created.
	 */
	boolean getIsNew();

	/**
	 *	Indicate whether this is a new instance.
	 *	<p>
	 *	This method should only be used by implementation internals.
	 *
	 *	@param	True if this is a new instance, otherwise false.
	 */
	void setIsNew( boolean value );

	/**
	 *	Get the required long attribute ClusterId.
	 *
	 *	@return	The required long attribute ClusterId.
	 */
	long getRequiredClusterId();

	/**
	 *	Get the required int attribute SecFormId.
	 *
	 *	@return	The required int attribute SecFormId.
	 */
	int getRequiredSecFormId();

	/**
	 *	Get the required int attribute SecAppId.
	 *
	 *	@return	The required int attribute SecAppId.
	 */
	int getRequiredSecAppId();

	/**
	 *	Get the required String attribute JEEServletMapName.
	 *
	 *	@return	The required String attribute JEEServletMapName.
	 */
	String getRequiredJEEServletMapName();

	/**
	 *	Get the required ICFBamClusterObj instance referenced by the Cluster key.
	 *
	 *	@return	The required ICFBamClusterObj instance referenced by the Cluster key.
	 */
	ICFSecClusterObj getRequiredOwnerCluster();

	/**
	 *	Get the required ICFSecClusterObj instance referenced by the Cluster key.
	 *
	 *	@return	The required ICFSecClusterObj instance referenced by the Cluster key.
	 */
	ICFSecClusterObj getRequiredOwnerCluster( boolean forceRead );

	/**
	 *	Get the required ICFBamSecAppObj instance referenced by the Application key.
	 *
	 *	@return	The required ICFBamSecAppObj instance referenced by the Application key.
	 */
	ICFSecSecAppObj getRequiredContainerApplication();

	/**
	 *	Get the required ICFSecSecAppObj instance referenced by the Application key.
	 *
	 *	@return	The required ICFSecSecAppObj instance referenced by the Application key.
	 */
	ICFSecSecAppObj getRequiredContainerApplication( boolean forceRead );

	/**
	 *	Internal use only.
	 */
	void copyPKeyToBuff();

	/**
	 *	Internal use only.
	 */
	void copyBuffToPKey();

}
