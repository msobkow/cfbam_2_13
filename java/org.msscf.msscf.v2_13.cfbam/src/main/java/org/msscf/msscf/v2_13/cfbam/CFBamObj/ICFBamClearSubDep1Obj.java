// Description: Java 11 Object interface for CFBam ClearSubDep1.

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

public interface ICFBamClearSubDep1Obj
	extends ICFBamClearDepObj
{
	/**
	 *	Get the current edition of this ClearSubDep1 instance as a ICFBamClearSubDep1EditObj.
	 *
	 *	@return	The ICFBamClearSubDep1EditObj edition of this instance.
	 */
	ICFBamClearSubDep1EditObj getEditAsClearSubDep1();

	/**
	 *	Get the ICFBamClearSubDep1TableObj table cache which manages this instance.
	 *
	 *	@return	ICFBamClearSubDep1TableObj table cache which manages this instance.
	 */
	ICFBamClearSubDep1TableObj getClearSubDep1Table();

	/**
	 *	Get the CFBamClearSubDep1Buff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFBamClearSubDep1Buff instance which currently backs this object.
	 */
	CFBamClearSubDep1Buff getClearSubDep1Buff();

	/**
	 *	Get the required long attribute ClearTopDepTenantId.
	 *
	 *	@return	The required long attribute ClearTopDepTenantId.
	 */
	long getRequiredClearTopDepTenantId();

	/**
	 *	Get the required long attribute ClearTopDepId.
	 *
	 *	@return	The required long attribute ClearTopDepId.
	 */
	long getRequiredClearTopDepId();

	/**
	 *	Get the required String attribute Name.
	 *
	 *	@return	The required String attribute Name.
	 */
	String getRequiredName();

	/**
	 *	Get the required ICFBamClearTopDepObj instance referenced by the ClearTopDep key.
	 *
	 *	@return	The required ICFBamClearTopDepObj instance referenced by the ClearTopDep key.
	 */
	ICFBamClearTopDepObj getRequiredContainerClearTopDep();

	/**
	 *	Get the required ICFBamClearTopDepObj instance referenced by the ClearTopDep key.
	 *
	 *	@return	The required ICFBamClearTopDepObj instance referenced by the ClearTopDep key.
	 */
	ICFBamClearTopDepObj getRequiredContainerClearTopDep( boolean forceRead );

	/**
	 *	Get the array of optional ICFBamClearSubDep2Obj array of instances referenced by the ClearDep key.
	 *
	 *	@return	The optional ICFBamClearSubDep2Obj[] array of instances referenced by the ClearDep key.
	 */
	List<ICFBamClearSubDep2Obj> getOptionalComponentsClearDep();

	/**
	 *	Get the array of optional ICFBamClearSubDep2Obj array of instances referenced by the ClearDep key.
	 *
	 *	@return	The optional ICFBamClearSubDep2Obj[] array of instances referenced by the ClearDep key.
	 */
	List<ICFBamClearSubDep2Obj> getOptionalComponentsClearDep( boolean forceRead );

}
