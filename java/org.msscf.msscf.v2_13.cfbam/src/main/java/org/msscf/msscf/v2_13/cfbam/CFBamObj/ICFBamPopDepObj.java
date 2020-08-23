// Description: Java 11 Object interface for CFBam PopDep.

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
import org.msscf.msscf.v2_13.cfbam.CFBam.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;
import org.msscf.msscf.v2_13.cfsec.CFSecObj.*;
import org.msscf.msscf.v2_13.cfint.CFIntObj.*;
import org.msscf.msscf.v2_13.cfbam.CFBam.*;

public interface ICFBamPopDepObj
	extends ICFBamScopeObj
{
	/**
	 *	Get the current edition of this PopDep instance as a ICFBamPopDepEditObj.
	 *
	 *	@return	The ICFBamPopDepEditObj edition of this instance.
	 */
	ICFBamPopDepEditObj getEditAsPopDep();

	/**
	 *	Get the ICFBamPopDepTableObj table cache which manages this instance.
	 *
	 *	@return	ICFBamPopDepTableObj table cache which manages this instance.
	 */
	ICFBamPopDepTableObj getPopDepTable();

	/**
	 *	Get the CFBamPopDepBuff instance which currently backs this instance.
	 *	<p>
	 *	This value <i>will</i> change for read-only instances, so you should
	 *	not hold on to the value as a reference anywhere outside the current call stack.
	 *
	 *	@return	CFBamPopDepBuff instance which currently backs this object.
	 */
	CFBamPopDepBuff getPopDepBuff();

	/**
	 *	Get the optional Long attribute DefSchemaTenantId.
	 *
	 *	@return	The optional Long attribute DefSchemaTenantId.
	 */
	Long getOptionalDefSchemaTenantId();

	/**
	 *	Get the optional Long attribute DefSchemaId.
	 *
	 *	@return	The optional Long attribute DefSchemaId.
	 */
	Long getOptionalDefSchemaId();

	/**
	 *	Get the required long attribute RelationTenantId.
	 *
	 *	@return	The required long attribute RelationTenantId.
	 */
	long getRequiredRelationTenantId();

	/**
	 *	Get the required long attribute RelationId.
	 *
	 *	@return	The required long attribute RelationId.
	 */
	long getRequiredRelationId();

	/**
	 *	Get the required ICFBamRelationObj instance referenced by the Relation key.
	 *
	 *	@return	The required ICFBamRelationObj instance referenced by the Relation key.
	 */
	ICFBamRelationObj getRequiredLookupRelation();

	/**
	 *	Get the required ICFBamRelationObj instance referenced by the Relation key.
	 *
	 *	@return	The required ICFBamRelationObj instance referenced by the Relation key.
	 */
	ICFBamRelationObj getRequiredLookupRelation( boolean forceRead );

	/**
	 *	Get the optional ICFBamSchemaDefObj instance referenced by the DefSchema key.
	 *
	 *	@return	The optional ICFBamSchemaDefObj instance referenced by the DefSchema key.
	 */
	ICFBamSchemaDefObj getOptionalLookupDefSchema();

	/**
	 *	Get the optional ICFBamSchemaDefObj instance referenced by the DefSchema key.
	 *
	 *	@return	The optional ICFBamSchemaDefObj instance referenced by the DefSchema key.
	 */
	ICFBamSchemaDefObj getOptionalLookupDefSchema( boolean forceRead );

}
