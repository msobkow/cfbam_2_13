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

public interface ICFBamBlobDefTableObj
{
	ICFBamSchemaObj getSchema();
	void setSchema( ICFBamSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new BlobDef instance.
	 *
	 *	@return	A new instance.
	 */
	ICFBamBlobDefObj newInstance();

	/**
	 *	Instantiate a new BlobDef edition of the specified BlobDef instance.
	 *
	 *	@return	A new edition.
	 */
	ICFBamBlobDefEditObj newEditInstance( ICFBamBlobDefObj orig );

	/**
	 *	Internal use only.
	 */
	ICFBamBlobDefObj realiseBlobDef( ICFBamBlobDefObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFBamBlobDefObj createBlobDef( ICFBamBlobDefObj Obj );

	/**
	 *	Read a BlobDef-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The BlobDef-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamBlobDefObj readBlobDef( CFBamValuePKey pkey );

	/**
	 *	Read a BlobDef-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The BlobDef-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamBlobDefObj readBlobDef( CFBamValuePKey pkey,
		boolean forceRead );

	ICFBamBlobDefObj readCachedBlobDef( CFBamValuePKey pkey );

	public void reallyDeepDisposeBlobDef( ICFBamBlobDefObj obj );

	void deepDisposeBlobDef( CFBamValuePKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFBamBlobDefObj lockBlobDef( CFBamValuePKey pkey );

	/**
	 *	Return a sorted list of all the BlobDef-derived instances in the database.
	 *
	 *	@return	List of ICFBamBlobDefObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamBlobDefObj> readAllBlobDef();

	/**
	 *	Return a sorted map of all the BlobDef-derived instances in the database.
	 *
	 *	@return	List of ICFBamBlobDefObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamBlobDefObj> readAllBlobDef( boolean forceRead );

	List<ICFBamBlobDefObj> readCachedAllBlobDef();

	/**
	 *	Get the CFBamValueObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamBlobDefObj readBlobDefByIdIdx( long TenantId,
		long Id );

	/**
	 *	Get the CFBamValueObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamBlobDefObj readBlobDefByIdIdx( long TenantId,
		long Id,
		boolean forceRead );

	/**
	 *	Get the CFBamValueObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argName	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj cached instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamBlobDefObj readBlobDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	/**
	 *	Get the CFBamValueObj instance for the unique UNameIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argName	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	CFBamValueObj refreshed instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamBlobDefObj readBlobDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ValTentIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate ValTentIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByValTentIdx( long TenantId );

	/**
	 *	Get the map of CFBamBlobDefObj instances sorted by their primary keys for the duplicate ValTentIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate ValTentIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByValTentIdx( long TenantId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ScopeIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate ScopeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByScopeIdx( long TenantId,
		long ScopeId );

	/**
	 *	Get the map of CFBamBlobDefObj instances sorted by their primary keys for the duplicate ScopeIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate ScopeIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByScopeIdx( long TenantId,
		long ScopeId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Get the map of CFBamBlobDefObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate PrevIdx key.
	 *
	 *	@param	argPrevTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate PrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	/**
	 *	Get the map of CFBamBlobDefObj instances sorted by their primary keys for the duplicate PrevIdx key.
	 *
	 *	@param	argPrevTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate PrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByPrevIdx( Long PrevTenantId,
		Long PrevId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate NextIdx key.
	 *
	 *	@param	argNextTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate NextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByNextIdx( Long NextTenantId,
		Long NextId );

	/**
	 *	Get the map of CFBamBlobDefObj instances sorted by their primary keys for the duplicate NextIdx key.
	 *
	 *	@param	argNextTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate NextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByNextIdx( Long NextTenantId,
		Long NextId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ContPrevIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate ContPrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	/**
	 *	Get the map of CFBamBlobDefObj instances sorted by their primary keys for the duplicate ContPrevIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate ContPrevIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamValueObj instances sorted by their primary keys for the duplicate ContNextIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate ContNextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Get the map of CFBamBlobDefObj instances sorted by their primary keys for the duplicate ContNextIdx key.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamBlobDefObj cached instances sorted by their primary keys for the duplicate ContNextIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamBlobDefObj> readBlobDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId,
		boolean forceRead );

	ICFBamBlobDefObj readCachedBlobDefByIdIdx( long TenantId,
		long Id );

	ICFBamBlobDefObj readCachedBlobDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	List<ICFBamBlobDefObj> readCachedBlobDefByValTentIdx( long TenantId );

	List<ICFBamBlobDefObj> readCachedBlobDefByScopeIdx( long TenantId,
		long ScopeId );

	List<ICFBamBlobDefObj> readCachedBlobDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	List<ICFBamBlobDefObj> readCachedBlobDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	List<ICFBamBlobDefObj> readCachedBlobDefByNextIdx( Long NextTenantId,
		Long NextId );

	List<ICFBamBlobDefObj> readCachedBlobDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	List<ICFBamBlobDefObj> readCachedBlobDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	void deepDisposeBlobDefByIdIdx( long TenantId,
		long Id );

	void deepDisposeBlobDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	void deepDisposeBlobDefByValTentIdx( long TenantId );

	void deepDisposeBlobDefByScopeIdx( long TenantId,
		long ScopeId );

	void deepDisposeBlobDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	void deepDisposeBlobDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	void deepDisposeBlobDefByNextIdx( Long NextTenantId,
		Long NextId );

	void deepDisposeBlobDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	void deepDisposeBlobDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Internal use only.
	 */
	ICFBamBlobDefObj updateBlobDef( ICFBamBlobDefObj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteBlobDef( ICFBamBlobDefObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argId	The BlobDef key attribute of the instance generating the id.
	 */
	void deleteBlobDefByIdIdx( long TenantId,
		long Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argName	The BlobDef key attribute of the instance generating the id.
	 */
	void deleteBlobDefByUNameIdx( long TenantId,
		long ScopeId,
		String Name );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 */
	void deleteBlobDefByValTentIdx( long TenantId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 */
	void deleteBlobDefByScopeIdx( long TenantId,
		long ScopeId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDefSchemaTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The BlobDef key attribute of the instance generating the id.
	 */
	void deleteBlobDefByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argPrevTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BlobDef key attribute of the instance generating the id.
	 */
	void deleteBlobDefByPrevIdx( Long PrevTenantId,
		Long PrevId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argNextTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BlobDef key attribute of the instance generating the id.
	 */
	void deleteBlobDefByNextIdx( Long NextTenantId,
		Long NextId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argPrevId	The BlobDef key attribute of the instance generating the id.
	 */
	void deleteBlobDefByContPrevIdx( long TenantId,
		long ScopeId,
		Long PrevId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argScopeId	The BlobDef key attribute of the instance generating the id.
	 *
	 *	@param	argNextId	The BlobDef key attribute of the instance generating the id.
	 */
	void deleteBlobDefByContNextIdx( long TenantId,
		long ScopeId,
		Long NextId );

	/**
	 *	Move the CFBamBlobDefObj instance up in the chain.  The instance is always refreshed.
	 *
	 *	@return	CFBamBlobDefObj refreshed cache instance.
	 */
	ICFBamBlobDefObj moveUpBlobDef( ICFBamBlobDefObj Obj );

	/**
	 *	Move the CFBamBlobDefObj instance down in the chain.  The instance is always refreshed.
	 *
	 *	@return	CFBamBlobDefObj refreshed cache instance.
	 */
	ICFBamBlobDefObj moveDownBlobDef( ICFBamBlobDefObj Obj );
}
