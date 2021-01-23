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

public interface ICFBamDelSubDep2TableObj
{
	ICFBamSchemaObj getSchema();
	void setSchema( ICFBamSchemaObj value );

	void minimizeMemory();

	String getTableName();
	String getTableDbName();

	Class getObjQualifyingClass();

	/**
	 *	Instantiate a new DelSubDep2 instance.
	 *
	 *	@return	A new instance.
	 */
	ICFBamDelSubDep2Obj newInstance();

	/**
	 *	Instantiate a new DelSubDep2 edition of the specified DelSubDep2 instance.
	 *
	 *	@return	A new edition.
	 */
	ICFBamDelSubDep2EditObj newEditInstance( ICFBamDelSubDep2Obj orig );

	/**
	 *	Internal use only.
	 */
	ICFBamDelSubDep2Obj realiseDelSubDep2( ICFBamDelSubDep2Obj Obj );

	/**
	 *	Internal use only.
	 */
	ICFBamDelSubDep2Obj createDelSubDep2( ICFBamDelSubDep2Obj Obj );

	/**
	 *	Read a DelSubDep2-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The DelSubDep2-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamDelSubDep2Obj readDelSubDep2( CFBamScopePKey pkey );

	/**
	 *	Read a DelSubDep2-derived instance by it's primary key.
	 *
	 *	@param	pkey	The primary key identifying the instance to read.
	 *
	 *	@return	The DelSubDep2-derived instance identified by the primary key,
	 *		or null if no such key value exists.
	 */
	ICFBamDelSubDep2Obj readDelSubDep2( CFBamScopePKey pkey,
		boolean forceRead );

	ICFBamDelSubDep2Obj readCachedDelSubDep2( CFBamScopePKey pkey );

	public void reallyDeepDisposeDelSubDep2( ICFBamDelSubDep2Obj obj );

	void deepDisposeDelSubDep2( CFBamScopePKey pkey );

	/**
	 *	Internal use only.
	 */
	ICFBamDelSubDep2Obj lockDelSubDep2( CFBamScopePKey pkey );

	/**
	 *	Return a sorted list of all the DelSubDep2-derived instances in the database.
	 *
	 *	@return	List of ICFBamDelSubDep2Obj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readAllDelSubDep2();

	/**
	 *	Return a sorted map of all the DelSubDep2-derived instances in the database.
	 *
	 *	@return	List of ICFBamDelSubDep2Obj instance, sorted by their primary keys, which
	 *		may include an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readAllDelSubDep2( boolean forceRead );

	List<ICFBamDelSubDep2Obj> readCachedAllDelSubDep2();

	/**
	 *	Get the CFBamScopeObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	CFBamScopeObj cached instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamDelSubDep2Obj readDelSubDep2ByIdIdx( long TenantId,
		long Id );

	/**
	 *	Get the CFBamScopeObj instance for the primary key attributes.
	 *
	 *	@param	argTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	CFBamScopeObj refreshed instance for the primary key, or
	 *		null if no such instance exists.
	 */
	ICFBamDelSubDep2Obj readDelSubDep2ByIdIdx( long TenantId,
		long Id,
		boolean forceRead );

	/**
	 *	Get the map of CFBamScopeObj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamDelSubDep2Obj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readDelSubDep2ByTenantIdx( long TenantId );

	/**
	 *	Get the map of CFBamDelSubDep2Obj instances sorted by their primary keys for the duplicate TenantIdx key.
	 *
	 *	@param	argTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamDelSubDep2Obj cached instances sorted by their primary keys for the duplicate TenantIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readDelSubDep2ByTenantIdx( long TenantId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamDelDepObj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamDelSubDep2Obj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readDelSubDep2ByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Get the map of CFBamDelSubDep2Obj instances sorted by their primary keys for the duplicate DefSchemaIdx key.
	 *
	 *	@param	argDefSchemaTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamDelSubDep2Obj cached instances sorted by their primary keys for the duplicate DefSchemaIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readDelSubDep2ByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamDelDepObj instances sorted by their primary keys for the duplicate DelDepIdx key.
	 *
	 *	@param	argRelationTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argRelationId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamDelSubDep2Obj cached instances sorted by their primary keys for the duplicate DelDepIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readDelSubDep2ByDelDepIdx( long RelationTenantId,
		long RelationId );

	/**
	 *	Get the map of CFBamDelSubDep2Obj instances sorted by their primary keys for the duplicate DelDepIdx key.
	 *
	 *	@param	argRelationTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argRelationId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamDelSubDep2Obj cached instances sorted by their primary keys for the duplicate DelDepIdx key,
	 *		which may be an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readDelSubDep2ByDelDepIdx( long RelationTenantId,
		long RelationId,
		boolean forceRead );

	/**
	 *	Get the map of CFBamDelSubDep2Obj instances sorted by their primary keys for the duplicate ContDelDep1Idx key.
	 *
	 *	@param	argDelSubDep1TenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argDelSubDep1Id	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamDelSubDep2Obj cached instances sorted by their primary keys for the duplicate ContDelDep1Idx key,
	 *		which may be an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readDelSubDep2ByContDelDep1Idx( long DelSubDep1TenantId,
		long DelSubDep1Id );

	/**
	 *	Get the map of CFBamDelSubDep2Obj instances sorted by their primary keys for the duplicate ContDelDep1Idx key.
	 *
	 *	@param	argDelSubDep1TenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argDelSubDep1Id	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	List of CFBamDelSubDep2Obj cached instances sorted by their primary keys for the duplicate ContDelDep1Idx key,
	 *		which may be an empty set.
	 */
	List<ICFBamDelSubDep2Obj> readDelSubDep2ByContDelDep1Idx( long DelSubDep1TenantId,
		long DelSubDep1Id,
		boolean forceRead );

	/**
	 *	Get the CFBamDelSubDep2Obj instance for the unique UNameIdx key.
	 *
	 *	@param	argDelSubDep1TenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argDelSubDep1Id	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argName	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	CFBamDelSubDep2Obj cached instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamDelSubDep2Obj readDelSubDep2ByUNameIdx(long DelSubDep1TenantId,
		long DelSubDep1Id,
		String Name );

	/**
	 *	Get the CFBamDelSubDep2Obj instance for the unique UNameIdx key.
	 *
	 *	@param	argDelSubDep1TenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argDelSubDep1Id	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argName	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@return	CFBamDelSubDep2Obj refreshed instance for the unique UNameIdx key, or
	 *		null if no such instance exists.
	 */
	ICFBamDelSubDep2Obj readDelSubDep2ByUNameIdx(long DelSubDep1TenantId,
		long DelSubDep1Id,
		String Name,
		boolean forceRead );

	ICFBamDelSubDep2Obj readCachedDelSubDep2ByIdIdx( long TenantId,
		long Id );

	List<ICFBamDelSubDep2Obj> readCachedDelSubDep2ByTenantIdx( long TenantId );

	List<ICFBamDelSubDep2Obj> readCachedDelSubDep2ByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	List<ICFBamDelSubDep2Obj> readCachedDelSubDep2ByDelDepIdx( long RelationTenantId,
		long RelationId );

	List<ICFBamDelSubDep2Obj> readCachedDelSubDep2ByContDelDep1Idx( long DelSubDep1TenantId,
		long DelSubDep1Id );

	ICFBamDelSubDep2Obj readCachedDelSubDep2ByUNameIdx( long DelSubDep1TenantId,
		long DelSubDep1Id,
		String Name );

	void deepDisposeDelSubDep2ByIdIdx( long TenantId,
		long Id );

	void deepDisposeDelSubDep2ByTenantIdx( long TenantId );

	void deepDisposeDelSubDep2ByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	void deepDisposeDelSubDep2ByDelDepIdx( long RelationTenantId,
		long RelationId );

	void deepDisposeDelSubDep2ByContDelDep1Idx( long DelSubDep1TenantId,
		long DelSubDep1Id );

	void deepDisposeDelSubDep2ByUNameIdx( long DelSubDep1TenantId,
		long DelSubDep1Id,
		String Name );

	/**
	 *	Internal use only.
	 */
	ICFBamDelSubDep2Obj updateDelSubDep2( ICFBamDelSubDep2Obj Obj );

	/**
	 *	Internal use only.
	 */
	void deleteDelSubDep2( ICFBamDelSubDep2Obj Obj );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argId	The DelSubDep2 key attribute of the instance generating the id.
	 */
	void deleteDelSubDep2ByIdIdx( long TenantId,
		long Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 */
	void deleteDelSubDep2ByTenantIdx( long TenantId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDefSchemaTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argDefSchemaId	The DelSubDep2 key attribute of the instance generating the id.
	 */
	void deleteDelSubDep2ByDefSchemaIdx( Long DefSchemaTenantId,
		Long DefSchemaId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argRelationTenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argRelationId	The DelSubDep2 key attribute of the instance generating the id.
	 */
	void deleteDelSubDep2ByDelDepIdx( long RelationTenantId,
		long RelationId );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDelSubDep1TenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argDelSubDep1Id	The DelSubDep2 key attribute of the instance generating the id.
	 */
	void deleteDelSubDep2ByContDelDep1Idx( long DelSubDep1TenantId,
		long DelSubDep1Id );

	/**
	 *	Internal use only.
	 *
	 *	@param	argDelSubDep1TenantId	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argDelSubDep1Id	The DelSubDep2 key attribute of the instance generating the id.
	 *
	 *	@param	argName	The DelSubDep2 key attribute of the instance generating the id.
	 */
	void deleteDelSubDep2ByUNameIdx(long DelSubDep1TenantId,
		long DelSubDep1Id,
		String Name );
}
