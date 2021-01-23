// Description: Java 11 Object interface for CFBam ClearSubDep2.

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

public interface ICFBamClearSubDep2Obj
	extends ICFBamClearDepObj
{
	/**
	 *	Get the current edition of this ClearSubDep2 instance as a ICFBamClearSubDep2EditObj.
	 *
	 *	@return	The ICFBamClearSubDep2EditObj edition of this instance.
	 */
	ICFBamClearSubDep2EditObj getEditAsClearSubDep2();

	/**
	 *	Get the ICFBamClearSubDep2TableObj table cache which manages this instance.
	 *
	 *	@return	ICFBamClearSubDep2TableObj table cache which manages this instance.
	 */
	ICFBamClearSubDep2TableObj getClearSubDep2Table();

	/**
	 *	Get the CFBamClearSubDep2Buff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFBamClearSubDep2Buff instance which currently backs this object.
	 */
	CFBamClearSubDep2Buff getClearSubDep2Buff();

	/**
	 *	Get the required long attribute ClearSubDep1TenantId.
	 *
	 *	@return	The required long attribute ClearSubDep1TenantId.
	 */
	long getRequiredClearSubDep1TenantId();

	/**
	 *	Get the required long attribute ClearSubDep1Id.
	 *
	 *	@return	The required long attribute ClearSubDep1Id.
	 */
	long getRequiredClearSubDep1Id();

	/**
	 *	Get the required String attribute Name.
	 *
	 *	@return	The required String attribute Name.
	 */
	String getRequiredName();

	/**
	 *	Get the required ICFBamClearSubDep1Obj instance referenced by the ClearSubDep1 key.
	 *
	 *	@return	The required ICFBamClearSubDep1Obj instance referenced by the ClearSubDep1 key.
	 */
	ICFBamClearSubDep1Obj getRequiredContainerClearSubDep1();

	/**
	 *	Get the required ICFBamClearSubDep1Obj instance referenced by the ClearSubDep1 key.
	 *
	 *	@return	The required ICFBamClearSubDep1Obj instance referenced by the ClearSubDep1 key.
	 */
	ICFBamClearSubDep1Obj getRequiredContainerClearSubDep1( boolean forceRead );

	/**
	 *	Get the array of optional ICFBamClearSubDep3Obj array of instances referenced by the ClearDep key.
	 *
	 *	@return	The optional ICFBamClearSubDep3Obj[] array of instances referenced by the ClearDep key.
	 */
	List<ICFBamClearSubDep3Obj> getOptionalComponentsClearDep();

	/**
	 *	Get the array of optional ICFBamClearSubDep3Obj array of instances referenced by the ClearDep key.
	 *
	 *	@return	The optional ICFBamClearSubDep3Obj[] array of instances referenced by the ClearDep key.
	 */
	List<ICFBamClearSubDep3Obj> getOptionalComponentsClearDep( boolean forceRead );

}
