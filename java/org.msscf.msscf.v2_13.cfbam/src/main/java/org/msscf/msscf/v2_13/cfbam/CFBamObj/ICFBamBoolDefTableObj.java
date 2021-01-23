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

public interface ICFBamBoolDefTableObj
{
	ICFBamSchemaObj getSchema();
	void setSchema( ICFBamSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new BoolDef instance.
	 *
	 *	@return	A new instance.
	 */
	ICFBamBoolDefObj newInstance();

	/**
	 *	Instantiate a new BoolDef edition of the specified BoolDef instance.
	 *
	 *	@return	A new edition.
	 */
	ICFBamBoolDefEditObj newEditInstance( ICFBamBoolDefObj orig );

	/**
	 *	Internal use only.
	 */
	ICFBamBoolDefObj realiseBoolDef( ICFBamBoolDefObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFBamBoolDefObj createBoolDef( ICFBamBoolDefObj Obj );

	/**
	 *	Read a BoolDef-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The BoolDef-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamBoolDefObj readBoolDef( CFBamValuePKey pkey );

	/**
	 *	Read a BoolDef-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The BoolDef-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamBoolDefObj readBoolDef( CFBamValuePKey pkey,
		boolean forceRead );

	ICFBamBoolDefObj readCachedBoolDef( CFBamValuePKey pkey );

	public void reallyDeepDisposeBoolDef( ICFBamBoolDefObj obj );

	void deepDisposeBoolDef( CFBamValuePKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFBamBoolDefObj lockBoolDef( CFBamValuePKey pkey );

	/**
	 *	Return a sorted list of all the BoolDef-derived instances in the database.
	 *
	 *	@return	List of ICFBamBoolDefObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamBoolDefObj> readAllBoolDef();

	/**
	 *	Return a sorted map of all the BoolDef-derived instances in the database.
	 *
	 *	@return	List of ICFBamBoolDefObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamBoolDefObj> readAllBoolDef( boolean forceRead );

	List<ICFBamBoolDefObj> readCachedAllBoolDef();

	/**
	 *	Get the CFBamValueObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamBoolDefObj readBoolDefByIdIdx( long TenantId,
		long Id );

	/**
	 *	Get the CFBamValueObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamBoolDefObj readBoolDefByIdIdx( long TenantId,
		long Id,
		boolean forceRead );

	/**
	 *	Get the CFBamValueObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argName	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj cached instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamBoolDefObj readBoolDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	/**
	 *	Get the CFBamValueObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argName	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj refreshed instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamBoolDefObj readBoolDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ValTentIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate ValTentIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByValTentIdx( long TenantId );

	/**
	 *	Get the map of CFBamBoolDefObj instances sorted by their primary keys for the duplicate ValTentIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate ValTentIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByValTentIdx( long TenantId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ScopeIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate ScopeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByScopeIdx( long TenantId,
		long ScopeId );

	/**
	 *	Get the map of CFBamBoolDefObj instances sorted by their primary keys for the duplicate ScopeIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate ScopeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByScopeIdx( long TenantId,
		long ScopeId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Get the map of CFBamBoolDefObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate PrevIdx key.
	 *
	 *	@param	argPrevTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate PrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	/**
	 *	Get the map of CFBamBoolDefObj instances sorted by their primary keys for the duplicate PrevIdx key.
	 *
	 *	@param	argPrevTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate PrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByPrevIdx( Long PrevTenantId,
		Long PrevId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate NextIdx key.
	 *
	 *	@param	argNextTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate NextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByNextIdx( Long NextTenantId,
		Long NextId );

	/**
	 *	Get the map of CFBamBoolDefObj instances sorted by their primary keys for the duplicate NextIdx key.
	 *
	 *	@param	argNextTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate NextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByNextIdx( Long NextTenantId,
		Long NextId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ContPrevIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate ContPrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	/**
	 *	Get the map of CFBamBoolDefObj instances sorted by their primary keys for the duplicate ContPrevIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate ContPrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ContNextIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate ContNextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Get the map of CFBamBoolDefObj instances sorted by their primary keys for the duplicate ContNextIdx key.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBoolDefObj cached instances sorted by their primary keys for the duplicate ContNextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBoolDefObj> readBoolDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId,
		boolean forceRead );

	ICFBamBoolDefObj readCachedBoolDefByIdIdx( long TenantId,
		long Id );

	ICFBamBoolDefObj readCachedBoolDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	List<ICFBamBoolDefObj> readCachedBoolDefByValTentIdx( long TenantId );

	List<ICFBamBoolDefObj> readCachedBoolDefByScopeIdx( long TenantId,
		long ScopeId );

	List<ICFBamBoolDefObj> readCachedBoolDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	List<ICFBamBoolDefObj> readCachedBoolDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	List<ICFBamBoolDefObj> readCachedBoolDefByNextIdx( Long NextTenantId,
		Long NextId );

	List<ICFBamBoolDefObj> readCachedBoolDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	List<ICFBamBoolDefObj> readCachedBoolDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	void deepDisposeBoolDefByIdIdx( long TenantId,
		long Id );

	void deepDisposeBoolDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	void deepDisposeBoolDefByValTentIdx( long TenantId );

	void deepDisposeBoolDefByScopeIdx( long TenantId,
		long ScopeId );

	void deepDisposeBoolDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	void deepDisposeBoolDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	void deepDisposeBoolDefByNextIdx( Long NextTenantId,
		Long NextId );

	void deepDisposeBoolDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	void deepDisposeBoolDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Internal use only.
	 */
	ICFBamBoolDefObj updateBoolDef( ICFBamBoolDefObj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteBoolDef( ICFBamBoolDefObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argId	The BoolDef key attribute of the instance generating the id.
	 */
	void deleteBoolDefByIdIdx( long TenantId,
		long Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argName	The BoolDef key attribute of the instance generating the id.
	 */
	void deleteBoolDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 */
	void deleteBoolDefByValTentIdx( long TenantId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 */
	void deleteBoolDefByScopeIdx( long TenantId,
		long ScopeId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDefSchemaTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The BoolDef key attribute of the instance generating the id.
	 */
	void deleteBoolDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argPrevTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BoolDef key attribute of the instance generating the id.
	 */
	void deleteBoolDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argNextTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BoolDef key attribute of the instance generating the id.
	 */
	void deleteBoolDefByNextIdx( Long NextTenantId,
		Long NextId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BoolDef key attribute of the instance generating the id.
	 */
	void deleteBoolDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BoolDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BoolDef key attribute of the instance generating the id.
	 */
	void deleteBoolDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Move the CFBamBoolDefObj instance up in the chain.  The instance is always refreshed.
	 *
	 *	@return	CFBamBoolDefObj refreshed cache instance.
	 */
	ICFBamBoolDefObj moveUpBoolDef( ICFBamBoolDefObj Obj );

	/**
	 *	Move the CFBamBoolDefObj instance down in the chain.  The instance is always refreshed.
	 *
	 *	@return	CFBamBoolDefObj refreshed cache instance.
	 */
	ICFBamBoolDefObj moveDownBoolDef( ICFBamBoolDefObj Obj );
}
