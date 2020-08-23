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

public interface ICFBamServerObjFuncTableObj
{
	ICFBamSchemaObj getSchema();
	void setSchema( ICFBamSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new ServerObjFunc instance.
	 *
	 *	@return	A new instance.
	 */
	ICFBamServerObjFuncObj newInstance();

	/**
	 *	Instantiate a new ServerObjFunc edition of the specified ServerObjFunc instance.
	 *
	 *	@return	A new edition.
	 */
	ICFBamServerObjFuncEditObj newEditInstance( ICFBamServerObjFuncObj orig );

	/**
	 *	Internal use only.
	 */
	ICFBamServerObjFuncObj realiseServerObjFunc( ICFBamServerObjFuncObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFBamServerObjFuncObj createServerObjFunc( ICFBamServerObjFuncObj Obj );

	/**
	 *	Read a ServerObjFunc-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The ServerObjFunc-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamServerObjFuncObj readServerObjFunc( CFBamScopePKey pkey );

	/**
	 *	Read a ServerObjFunc-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The ServerObjFunc-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamServerObjFuncObj readServerObjFunc( CFBamScopePKey pkey,
		boolean forceRead );

	ICFBamServerObjFuncObj readCachedServerObjFunc( CFBamScopePKey pkey );

	public void reallyDeepDisposeServerObjFunc( ICFBamServerObjFuncObj obj );

	void deepDisposeServerObjFunc( CFBamScopePKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFBamServerObjFuncObj lockServerObjFunc( CFBamScopePKey pkey );

	/**
	 *	Return a sorted list of all the ServerObjFunc-derived instances in the database.
	 *
	 *	@return	List of ICFBamServerObjFuncObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamServerObjFuncObj> readAllServerObjFunc();

	/**
	 *	Return a sorted map of all the ServerObjFunc-derived instances in the database.
	 *
	 *	@return	List of ICFBamServerObjFuncObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamServerObjFuncObj> readAllServerObjFunc( boolean forceRead );

	List<ICFBamServerObjFuncObj> readCachedAllServerObjFunc();

	/**
	 *	Get the CFBamScopeObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	CFBamScopeObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamServerObjFuncObj readServerObjFuncByIdIdx( long TenantId,
		long Id );

	/**
	 *	Get the CFBamScopeObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	CFBamScopeObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamServerObjFuncObj readServerObjFuncByIdIdx( long TenantId,
		long Id,
		boolean forceRead );

	/**
	 *	Get the map of CFBamScopeObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamServerObjFuncObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamServerObjFuncObj> readServerObjFuncByTenantIdx( long TenantId );

	/**
	 *	Get the map of CFBamServerObjFuncObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamServerObjFuncObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamServerObjFuncObj> readServerObjFuncByTenantIdx( long TenantId,
		boolean forceRead );

	/**
	 *	Get the CFBamServerMethodObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argTableId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argName	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	CFBamServerMethodObj cached instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamServerObjFuncObj readServerObjFuncByUNameIdx( long TenantId,
		long TableId,
		String Name );

	/**
	 *	Get the CFBamServerMethodObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argTableId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argName	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	CFBamServerMethodObj refreshed instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamServerObjFuncObj readServerObjFuncByUNameIdx( long TenantId,
		long TableId,
		String Name,
		boolean forceRead );

	/**
	 *	Get the map of CFBamServerMethodObj instances sorted by their primary keys for the duplicate MethTableIdx key.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argTableId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamServerObjFuncObj cached instances sorted by their primary keys for the duplicate MethTableIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamServerObjFuncObj> readServerObjFuncByMethTableIdx( long TenantId,
		long TableId );

	/**
	 *	Get the map of CFBamServerObjFuncObj instances sorted by their primary keys for the duplicate MethTableIdx key.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argTableId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamServerObjFuncObj cached instances sorted by their primary keys for the duplicate MethTableIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamServerObjFuncObj> readServerObjFuncByMethTableIdx( long TenantId,
		long TableId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamServerMethodObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamServerObjFuncObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamServerObjFuncObj> readServerObjFuncByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Get the map of CFBamServerObjFuncObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamServerObjFuncObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamServerObjFuncObj> readServerObjFuncByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamServerObjFuncObj instances sorted by their primary keys for the duplicate RetTblIdx key.
	 *
	 *	@param	argRetTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argRetTableId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamServerObjFuncObj cached instances sorted by their primary keys for the duplicate RetTblIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamServerObjFuncObj> readServerObjFuncByRetTblIdx( Long RetTenantId,
		Long RetTableId );

	/**
	 *	Get the map of CFBamServerObjFuncObj instances sorted by their primary keys for the duplicate RetTblIdx key.
	 *
	 *	@param	argRetTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argRetTableId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamServerObjFuncObj cached instances sorted by their primary keys for the duplicate RetTblIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamServerObjFuncObj> readServerObjFuncByRetTblIdx( Long RetTenantId,
		Long RetTableId,
		boolean forceRead );

	ICFBamServerObjFuncObj readCachedServerObjFuncByIdIdx( long TenantId,
		long Id );

	List<ICFBamServerObjFuncObj> readCachedServerObjFuncByTenantIdx( long TenantId );

	ICFBamServerObjFuncObj readCachedServerObjFuncByUNameIdx( long TenantId,
		long TableId,
		String Name );

	List<ICFBamServerObjFuncObj> readCachedServerObjFuncByMethTableIdx( long TenantId,
		long TableId );

	List<ICFBamServerObjFuncObj> readCachedServerObjFuncByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	List<ICFBamServerObjFuncObj> readCachedServerObjFuncByRetTblIdx( Long RetTenantId,
		Long RetTableId );

	void deepDisposeServerObjFuncByIdIdx( long TenantId,
		long Id );

	void deepDisposeServerObjFuncByTenantIdx( long TenantId );

	void deepDisposeServerObjFuncByUNameIdx( long TenantId,
		long TableId,
		String Name );

	void deepDisposeServerObjFuncByMethTableIdx( long TenantId,
		long TableId );

	void deepDisposeServerObjFuncByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	void deepDisposeServerObjFuncByRetTblIdx( Long RetTenantId,
		Long RetTableId );

	/**
	 *	Internal use only.
	 */
	ICFBamServerObjFuncObj updateServerObjFunc( ICFBamServerObjFuncObj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteServerObjFunc( ICFBamServerObjFuncObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argId	The ServerObjFunc key attribute of the instance generating the id.
	 */
	void deleteServerObjFuncByIdIdx( long TenantId,
		long Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 */
	void deleteServerObjFuncByTenantIdx( long TenantId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argTableId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argName	The ServerObjFunc key attribute of the instance generating the id.
	 */
	void deleteServerObjFuncByUNameIdx( long TenantId,
		long TableId,
		String Name );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argTableId	The ServerObjFunc key attribute of the instance generating the id.
	 */
	void deleteServerObjFuncByMethTableIdx( long TenantId,
		long TableId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDefSchemaTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The ServerObjFunc key attribute of the instance generating the id.
	 */
	void deleteServerObjFuncByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argRetTenantId	The ServerObjFunc key attribute of the instance generating the id.
	 *
	 *	@param	argRetTableId	The ServerObjFunc key attribute of the instance generating the id.
	 */
	void deleteServerObjFuncByRetTblIdx( Long RetTenantId,
		Long RetTableId );
}
