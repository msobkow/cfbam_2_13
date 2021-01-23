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

public interface ICFBamPopDepTableObj
{
	ICFBamSchemaObj getSchema();
	void setSchema( ICFBamSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new PopDep instance.
	 *
	 *	@return	A new instance.
	 */
	ICFBamPopDepObj newInstance();

	/**
	 *	Instantiate a new PopDep edition of the specified PopDep instance.
	 *
	 *	@return	A new edition.
	 */
	ICFBamPopDepEditObj newEditInstance( ICFBamPopDepObj orig );

	/**
	 *	Internal use only.
	 */
	ICFBamPopDepObj realisePopDep( ICFBamPopDepObj Obj );

	/**
	 *	Internal use only.
	 */
	ICFBamPopDepObj createPopDep( ICFBamPopDepObj Obj );

	/**
	 *	Read a PopDep-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The PopDep-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamPopDepObj readPopDep( CFBamScopePKey pkey );

	/**
	 *	Read a PopDep-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The PopDep-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamPopDepObj readPopDep( CFBamScopePKey pkey,
		boolean forceRead );

	ICFBamPopDepObj readCachedPopDep( CFBamScopePKey pkey );

	public void reallyDeepDisposePopDep( ICFBamPopDepObj obj );

	void deepDisposePopDep( CFBamScopePKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFBamPopDepObj lockPopDep( CFBamScopePKey pkey );

	/**
	 *	Return a sorted list of all the PopDep-derived instances in the database.
	 *
	 *	@return	List of ICFBamPopDepObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamPopDepObj> readAllPopDep();

	/**
	 *	Return a sorted map of all the PopDep-derived instances in the database.
	 *
	 *	@return	List of ICFBamPopDepObj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamPopDepObj> readAllPopDep( boolean forceRead );

	List<ICFBamPopDepObj> readCachedAllPopDep();

	/**
	 *	Get the CFBamScopeObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@param	argId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@return	CFBamScopeObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamPopDepObj readPopDepByIdIdx( long TenantId,
		long Id );

	/**
	 *	Get the CFBamScopeObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@param	argId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@return	CFBamScopeObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamPopDepObj readPopDepByIdIdx( long TenantId,
		long Id,
		boolean forceRead );

	/**
	 *	Get the map of CFBamScopeObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamPopDepObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamPopDepObj> readPopDepByTenantIdx( long TenantId );

	/**
	 *	Get the map of CFBamPopDepObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamPopDepObj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamPopDepObj> readPopDepByTenantIdx( long TenantId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamPopDepObj instances sorted by their primary keys for the duplicate RelationIdx key.
	 *
	 *	@param	argRelationTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@param	argRelationId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamPopDepObj cached instances sorted by their primary keys for the duplicate RelationIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamPopDepObj> readPopDepByRelationIdx( long RelationTenantId,
		long RelationId );

	/**
	 *	Get the map of CFBamPopDepObj instances sorted by their primary keys for the duplicate RelationIdx key.
	 *
	 *	@param	argRelationTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@param	argRelationId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamPopDepObj cached instances sorted by their primary keys for the duplicate RelationIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamPopDepObj> readPopDepByRelationIdx( long RelationTenantId,
		long RelationId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamPopDepObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamPopDepObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamPopDepObj> readPopDepByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Get the map of CFBamPopDepObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamPopDepObj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamPopDepObj> readPopDepByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId,
		boolean forceRead );

	ICFBamPopDepObj readCachedPopDepByIdIdx( long TenantId,
		long Id );

	List<ICFBamPopDepObj> readCachedPopDepByTenantIdx( long TenantId );

	List<ICFBamPopDepObj> readCachedPopDepByRelationIdx( long RelationTenantId,
		long RelationId );

	List<ICFBamPopDepObj> readCachedPopDepByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	void deepDisposePopDepByIdIdx( long TenantId,
		long Id );

	void deepDisposePopDepByTenantIdx( long TenantId );

	void deepDisposePopDepByRelationIdx( long RelationTenantId,
		long RelationId );

	void deepDisposePopDepByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Internal use only.
	 */
	ICFBamPopDepObj updatePopDep( ICFBamPopDepObj Obj );

	/**
	 *	Internal use only.
	 */
	void deletePopDep( ICFBamPopDepObj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@param	argId	The PopDep key attribute of the instance generating the id.
	 */
	void deletePopDepByIdIdx( long TenantId,
		long Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The PopDep key attribute of the instance generating the id.
	 */
	void deletePopDepByTenantIdx( long TenantId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argRelationTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@param	argRelationId	The PopDep key attribute of the instance generating the id.
	 */
	void deletePopDepByRelationIdx( long RelationTenantId,
		long RelationId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDefSchemaTenantId	The PopDep key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The PopDep key attribute of the instance generating the id.
	 */
	void deletePopDepByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );
}
