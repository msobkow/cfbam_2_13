// Description: Java 11 Table Object interface for CFBam.

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

public interface ICFBamScopeTableObj
{
	ICFBamSchemaObj getSchema();
	void setSchema( ICFBamSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new Scope instance.
	 *
	 *	@return	A new instance.
	 */
	ICFBamScopeObj newInstance();

	/**
	 *	Instantiate a new Scope edition of the specified Scope instance.
	 *
	 *	@return	A new edition.
	 */
	ICFBamScopeEditObj newEditInstance( ICFBamScopeObj orig );

	/**
	 *	Construct an appropriate subclass instance based on the specified class code.
	 *
	 *	@param	argClassCode	The class code used to identify the proposed instance class.
	 *
	 *	@return	ICFBamScopeObj instance, which may be a subclass of a Scope instance.
	 */
	ICFBamScopeObj constructByClassCode( String argClassCode );

	/**
	 *	Internal use only.
	 */
	ICFBamScopeObj realiseScope( ICFBamScopeObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFBamScopeObj createScope( ICFBamScopeObj Obj );

	/**
	 *	Read a Scope-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The Scope-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamScopeObj readScope( CFBamScopePKey pkey );

	/**
	 *	Read a Scope-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The Scope-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamScopeObj readScope( CFBamScopePKey pkey,
		boolean forceRead );

	ICFBamScopeObj readCachedScope( CFBamScopePKey pkey );

	public void reallyDeepDisposeScope( ICFBamScopeObj obj );

	void deepDisposeScope( CFBamScopePKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFBamScopeObj lockScope( CFBamScopePKey pkey );

	/**
	 *	Return a sorted list of all the Scope-derived instances in the database.
	 *
	 *	@return	List of ICFBamScopeObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamScopeObj> readAllScope();

	/**
	 *	Return a sorted map of all the Scope-derived instances in the database.
	 *
	 *	@return	List of ICFBamScopeObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamScopeObj> readAllScope( boolean forceRead );

	List<ICFBamScopeObj> readCachedAllScope();

	/**
	 *	Get the CFBamScopeObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The Scope key attribute of the instance generating the id.
	 *
	 *	@param	argId	The Scope key attribute of the instance generating the id.
	 *
	 *	@return	CFBamScopeObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamScopeObj readScopeByIdIdx( long TenantId,
		long Id );

	/**
	 *	Get the CFBamScopeObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The Scope key attribute of the instance generating the id.
	 *
	 *	@param	argId	The Scope key attribute of the instance generating the id.
	 *
	 *	@return	CFBamScopeObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamScopeObj readScopeByIdIdx( long TenantId,
		long Id,
		boolean forceRead );

	/**
	 *	Get the map of CFBamScopeObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The Scope key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamScopeObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamScopeObj> readScopeByTenantIdx( long TenantId );

	/**
	 *	Get the map of CFBamScopeObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The Scope key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamScopeObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamScopeObj> readScopeByTenantIdx( long TenantId,
		boolean forceRead );

	ICFBamScopeObj readCachedScopeByIdIdx( long TenantId,
		long Id );

	List<ICFBamScopeObj> readCachedScopeByTenantIdx( long TenantId );

	void deepDisposeScopeByIdIdx( long TenantId,
		long Id );

	void deepDisposeScopeByTenantIdx( long TenantId );

	/**
	 *	Internal use only.
	 */
	ICFBamScopeObj updateScope( ICFBamScopeObj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteScope( ICFBamScopeObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The Scope key attribute of the instance generating the id.
	 *
	 *	@param	argId	The Scope key attribute of the instance generating the id.
	 */
	void deleteScopeByIdIdx( long TenantId,
		long Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The Scope key attribute of the instance generating the id.
	 */
	void deleteScopeByTenantIdx( long TenantId );
}
