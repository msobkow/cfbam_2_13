// Description: Java 11 Table Object interface for CFBam.

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
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;
import org.msscf.msscf.v2_13.cfsec.CFSecObj.*;
import org.msscf.msscf.v2_13.cfint.CFIntObj.*;
import org.msscf.msscf.v2_13.cfbam.CFBam.*;

public interface ICFBamNmTokenColTableObj
{
	ICFBamSchemaObj getSchema();
	void setSchema( ICFBamSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new NmTokenCol instance.
	 *
	 *	@return	A new instance.
	 */
	ICFBamNmTokenColObj newInstance();

	/**
	 *	Instantiate a new NmTokenCol edition of the specified NmTokenCol instance.
	 *
	 *	@return	A new edition.
	 */
	ICFBamNmTokenColEditObj newEditInstance( ICFBamNmTokenColObj orig );

	/**
	 *	Internal use only.
	 */
	ICFBamNmTokenColObj realiseNmTokenCol( ICFBamNmTokenColObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFBamNmTokenColObj createNmTokenCol( ICFBamNmTokenColObj Obj );

	/**
	 *	Read a NmTokenCol-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The NmTokenCol-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamNmTokenColObj readNmTokenCol( CFBamValuePKey pkey );

	/**
	 *	Read a NmTokenCol-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The NmTokenCol-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamNmTokenColObj readNmTokenCol( CFBamValuePKey pkey,
		boolean forceRead );

	ICFBamNmTokenColObj readCachedNmTokenCol( CFBamValuePKey pkey );

	public void reallyDeepDisposeNmTokenCol( ICFBamNmTokenColObj obj );

	void deepDisposeNmTokenCol( CFBamValuePKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFBamNmTokenColObj lockNmTokenCol( CFBamValuePKey pkey );

	/**
	 *	Return a sorted list of all the NmTokenCol-derived instances in the database.
	 *
	 *	@return	List of ICFBamNmTokenColObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamNmTokenColObj> readAllNmTokenCol();

	/**
	 *	Return a sorted map of all the NmTokenCol-derived instances in the database.
	 *
	 *	@return	List of ICFBamNmTokenColObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamNmTokenColObj> readAllNmTokenCol( boolean forceRead );

	List<ICFBamNmTokenColObj> readCachedAllNmTokenCol();

	/**
	 *	Get the CFBamValueObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamNmTokenColObj readNmTokenColByIdIdx( long TenantId,
		long Id );

	/**
	 *	Get the CFBamValueObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamNmTokenColObj readNmTokenColByIdIdx( long TenantId,
		long Id,
		boolean forceRead );

	/**
	 *	Get the CFBamValueObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argName	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj cached instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamNmTokenColObj readNmTokenColByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	/**
	 *	Get the CFBamValueObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argName	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj refreshed instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamNmTokenColObj readNmTokenColByUNameIdx( long TenantId,
		long ScopeId,
		String Name,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ValTentIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate ValTentIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByValTentIdx( long TenantId );

	/**
	 *	Get the map of CFBamNmTokenColObj instances sorted by their primary keys for the duplicate ValTentIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate ValTentIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByValTentIdx( long TenantId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ScopeIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate ScopeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByScopeIdx( long TenantId,
		long ScopeId );

	/**
	 *	Get the map of CFBamNmTokenColObj instances sorted by their primary keys for the duplicate ScopeIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate ScopeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByScopeIdx( long TenantId,
		long ScopeId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Get the map of CFBamNmTokenColObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate PrevIdx key.
	 *
	 *	@param	argPrevTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate PrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByPrevIdx( Long PrevTenantId,
		Long PrevId );

	/**
	 *	Get the map of CFBamNmTokenColObj instances sorted by their primary keys for the duplicate PrevIdx key.
	 *
	 *	@param	argPrevTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate PrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByPrevIdx( Long PrevTenantId,
		Long PrevId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate NextIdx key.
	 *
	 *	@param	argNextTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate NextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByNextIdx( Long NextTenantId,
		Long NextId );

	/**
	 *	Get the map of CFBamNmTokenColObj instances sorted by their primary keys for the duplicate NextIdx key.
	 *
	 *	@param	argNextTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate NextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByNextIdx( Long NextTenantId,
		Long NextId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ContPrevIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate ContPrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	/**
	 *	Get the map of CFBamNmTokenColObj instances sorted by their primary keys for the duplicate ContPrevIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate ContPrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ContNextIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate ContNextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Get the map of CFBamNmTokenColObj instances sorted by their primary keys for the duplicate ContNextIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate ContNextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamNmTokenColObj instances sorted by their primary keys for the duplicate TableIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argTableId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate TableIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByTableIdx( long TenantId,
		long TableId );

	/**
	 *	Get the map of CFBamNmTokenColObj instances sorted by their primary keys for the duplicate TableIdx key.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argTableId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamNmTokenColObj cached instances sorted by their primary keys for the duplicate TableIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamNmTokenColObj> readNmTokenColByTableIdx( long TenantId,
		long TableId,
		boolean forceRead );

	ICFBamNmTokenColObj readCachedNmTokenColByIdIdx( long TenantId,
		long Id );

	ICFBamNmTokenColObj readCachedNmTokenColByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	List<ICFBamNmTokenColObj> readCachedNmTokenColByValTentIdx( long TenantId );

	List<ICFBamNmTokenColObj> readCachedNmTokenColByScopeIdx( long TenantId,
		long ScopeId );

	List<ICFBamNmTokenColObj> readCachedNmTokenColByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	List<ICFBamNmTokenColObj> readCachedNmTokenColByPrevIdx( Long PrevTenantId,
		Long PrevId );

	List<ICFBamNmTokenColObj> readCachedNmTokenColByNextIdx( Long NextTenantId,
		Long NextId );

	List<ICFBamNmTokenColObj> readCachedNmTokenColByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	List<ICFBamNmTokenColObj> readCachedNmTokenColByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	List<ICFBamNmTokenColObj> readCachedNmTokenColByTableIdx( long TenantId,
		long TableId );

	void deepDisposeNmTokenColByIdIdx( long TenantId,
		long Id );

	void deepDisposeNmTokenColByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	void deepDisposeNmTokenColByValTentIdx( long TenantId );

	void deepDisposeNmTokenColByScopeIdx( long TenantId,
		long ScopeId );

	void deepDisposeNmTokenColByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	void deepDisposeNmTokenColByPrevIdx( Long PrevTenantId,
		Long PrevId );

	void deepDisposeNmTokenColByNextIdx( Long NextTenantId,
		Long NextId );

	void deepDisposeNmTokenColByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	void deepDisposeNmTokenColByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	void deepDisposeNmTokenColByTableIdx( long TenantId,
		long TableId );

	/**
	 *	Internal use only.
	 */
	ICFBamNmTokenColObj updateNmTokenCol( ICFBamNmTokenColObj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteNmTokenCol( ICFBamNmTokenColObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argId	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByIdIdx( long TenantId,
		long Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argName	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByValTentIdx( long TenantId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByScopeIdx( long TenantId,
		long ScopeId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDefSchemaTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argPrevTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByPrevIdx( Long PrevTenantId,
		Long PrevId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argNextTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByNextIdx( Long NextTenantId,
		Long NextId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The NmTokenCol key attribute of the instance generating the id.
	 *
	 *	@param	argTableId	The NmTokenCol key attribute of the instance generating the id.
	 */
	void deleteNmTokenColByTableIdx( long TenantId,
		long TableId );

	/**
	 *	Move the CFBamNmTokenColObj instance up in the chain.  The instance is always refreshed.
	 *
	 *	@return	CFBamNmTokenColObj refreshed cache instance.
	 */
	ICFBamNmTokenColObj moveUpNmTokenCol( ICFBamNmTokenColObj Obj );

	/**
	 *	Move the CFBamNmTokenColObj instance down in the chain.  The instance is always refreshed.
	 *
	 *	@return	CFBamNmTokenColObj refreshed cache instance.
	 */
	ICFBamNmTokenColObj moveDownNmTokenCol( ICFBamNmTokenColObj Obj );
}
