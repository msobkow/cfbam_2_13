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

public interface ICFBamTimestampDefTableObj
{
	ICFBamSchemaObj getSchema();
	void setSchema( ICFBamSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new TimestampDef instance.
	 *
	 *	@return	A new instance.
	 */
	ICFBamTimestampDefObj newInstance();

	/**
	 *	Instantiate a new TimestampDef edition of the specified TimestampDef instance.
	 *
	 *	@return	A new edition.
	 */
	ICFBamTimestampDefEditObj newEditInstance( ICFBamTimestampDefObj orig );

	/**
	 *	Internal use only.
	 */
	ICFBamTimestampDefObj realiseTimestampDef( ICFBamTimestampDefObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFBamTimestampDefObj createTimestampDef( ICFBamTimestampDefObj Obj );

	/**
	 *	Read a TimestampDef-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The TimestampDef-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamTimestampDefObj readTimestampDef( CFBamValuePKey pkey );

	/**
	 *	Read a TimestampDef-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The TimestampDef-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamTimestampDefObj readTimestampDef( CFBamValuePKey pkey,
		boolean forceRead );

	ICFBamTimestampDefObj readCachedTimestampDef( CFBamValuePKey pkey );

	public void reallyDeepDisposeTimestampDef( ICFBamTimestampDefObj obj );

	void deepDisposeTimestampDef( CFBamValuePKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFBamTimestampDefObj lockTimestampDef( CFBamValuePKey pkey );

	/**
	 *	Return a sorted list of all the TimestampDef-derived instances in the database.
	 *
	 *	@return	List of ICFBamTimestampDefObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamTimestampDefObj> readAllTimestampDef();

	/**
	 *	Return a sorted map of all the TimestampDef-derived instances in the database.
	 *
	 *	@return	List of ICFBamTimestampDefObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamTimestampDefObj> readAllTimestampDef( boolean forceRead );

	List<ICFBamTimestampDefObj> readCachedAllTimestampDef();

	/**
	 *	Get the CFBamValueObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamTimestampDefObj readTimestampDefByIdIdx( long TenantId,
		long Id );

	/**
	 *	Get the CFBamValueObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamTimestampDefObj readTimestampDefByIdIdx( long TenantId,
		long Id,
		boolean forceRead );

	/**
	 *	Get the CFBamValueObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argName	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj cached instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamTimestampDefObj readTimestampDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	/**
	 *	Get the CFBamValueObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argName	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj refreshed instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamTimestampDefObj readTimestampDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ValTentIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate ValTentIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByValTentIdx( long TenantId );

	/**
	 *	Get the map of CFBamTimestampDefObj instances sorted by their primary keys for the duplicate ValTentIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate ValTentIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByValTentIdx( long TenantId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ScopeIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate ScopeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByScopeIdx( long TenantId,
		long ScopeId );

	/**
	 *	Get the map of CFBamTimestampDefObj instances sorted by their primary keys for the duplicate ScopeIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate ScopeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByScopeIdx( long TenantId,
		long ScopeId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Get the map of CFBamTimestampDefObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate PrevIdx key.
	 *
	 *	@param	argPrevTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate PrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	/**
	 *	Get the map of CFBamTimestampDefObj instances sorted by their primary keys for the duplicate PrevIdx key.
	 *
	 *	@param	argPrevTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate PrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByPrevIdx( Long PrevTenantId,
		Long PrevId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate NextIdx key.
	 *
	 *	@param	argNextTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate NextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByNextIdx( Long NextTenantId,
		Long NextId );

	/**
	 *	Get the map of CFBamTimestampDefObj instances sorted by their primary keys for the duplicate NextIdx key.
	 *
	 *	@param	argNextTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate NextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByNextIdx( Long NextTenantId,
		Long NextId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ContPrevIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate ContPrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	/**
	 *	Get the map of CFBamTimestampDefObj instances sorted by their primary keys for the duplicate ContPrevIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate ContPrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ContNextIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate ContNextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Get the map of CFBamTimestampDefObj instances sorted by their primary keys for the duplicate ContNextIdx key.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamTimestampDefObj cached instances sorted by their primary keys for the duplicate ContNextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamTimestampDefObj> readTimestampDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId,
		boolean forceRead );

	ICFBamTimestampDefObj readCachedTimestampDefByIdIdx( long TenantId,
		long Id );

	ICFBamTimestampDefObj readCachedTimestampDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	List<ICFBamTimestampDefObj> readCachedTimestampDefByValTentIdx( long TenantId );

	List<ICFBamTimestampDefObj> readCachedTimestampDefByScopeIdx( long TenantId,
		long ScopeId );

	List<ICFBamTimestampDefObj> readCachedTimestampDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	List<ICFBamTimestampDefObj> readCachedTimestampDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	List<ICFBamTimestampDefObj> readCachedTimestampDefByNextIdx( Long NextTenantId,
		Long NextId );

	List<ICFBamTimestampDefObj> readCachedTimestampDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	List<ICFBamTimestampDefObj> readCachedTimestampDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	void deepDisposeTimestampDefByIdIdx( long TenantId,
		long Id );

	void deepDisposeTimestampDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	void deepDisposeTimestampDefByValTentIdx( long TenantId );

	void deepDisposeTimestampDefByScopeIdx( long TenantId,
		long ScopeId );

	void deepDisposeTimestampDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	void deepDisposeTimestampDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	void deepDisposeTimestampDefByNextIdx( Long NextTenantId,
		Long NextId );

	void deepDisposeTimestampDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	void deepDisposeTimestampDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Internal use only.
	 */
	ICFBamTimestampDefObj updateTimestampDef( ICFBamTimestampDefObj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteTimestampDef( ICFBamTimestampDefObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argId	The TimestampDef key attribute of the instance generating the id.
	 */
	void deleteTimestampDefByIdIdx( long TenantId,
		long Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argName	The TimestampDef key attribute of the instance generating the id.
	 */
	void deleteTimestampDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 */
	void deleteTimestampDefByValTentIdx( long TenantId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 */
	void deleteTimestampDefByScopeIdx( long TenantId,
		long ScopeId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDefSchemaTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The TimestampDef key attribute of the instance generating the id.
	 */
	void deleteTimestampDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argPrevTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The TimestampDef key attribute of the instance generating the id.
	 */
	void deleteTimestampDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argNextTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The TimestampDef key attribute of the instance generating the id.
	 */
	void deleteTimestampDefByNextIdx( Long NextTenantId,
		Long NextId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The TimestampDef key attribute of the instance generating the id.
	 */
	void deleteTimestampDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The TimestampDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The TimestampDef key attribute of the instance generating the id.
	 */
	void deleteTimestampDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Move the CFBamTimestampDefObj instance up in the chain.  The instance is always refreshed.
	 *
	 *	@return	CFBamTimestampDefObj refreshed cache instance.
	 */
	ICFBamTimestampDefObj moveUpTimestampDef( ICFBamTimestampDefObj Obj );

	/**
	 *	Move the CFBamTimestampDefObj instance down in the chain.  The instance is always refreshed.
	 *
	 *	@return	CFBamTimestampDefObj refreshed cache instance.
	 */
	ICFBamTimestampDefObj moveDownTimestampDef( ICFBamTimestampDefObj Obj );
}
