
// Description: Java 11 in-memory RAM DbIO implementation for ISOCtryLang.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow mark.sobkow@gmail.com
 *	
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *	
 *	http://www.apache.org/licenses/LICENSE-2.0
 *	
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *	See the License for the specific language governing permissions and
 *	limitations under the License.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

package org.msscf.msscf.v2_13.cfbam.CFBamRam;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.apache.commons.codec.binary.Base64;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;
import org.msscf.msscf.v2_13.cfbam.CFBam.*;
import org.msscf.msscf.v2_13.cfbam.CFBamObj.*;
import org.msscf.msscf.v2_13.cfsec.CFSecObj.*;
import org.msscf.msscf.v2_13.cfint.CFIntObj.*;
import org.msscf.msscf.v2_13.cfbam.CFBamObj.*;

/*
 *	CFBamRamISOCtryLangTable in-memory RAM DbIO implementation
 *	for ISOCtryLang.
 */
public class CFBamRamISOCtryLangTable
	implements ICFBamISOCtryLangTable
{
	private ICFBamSchema schema;
	private Map< CFSecISOCtryLangPKey,
				CFSecISOCtryLangBuff > dictByPKey
		= new HashMap< CFSecISOCtryLangPKey,
				CFSecISOCtryLangBuff >();
	private Map< CFSecISOCtryLangByCtryIdxKey,
				Map< CFSecISOCtryLangPKey,
					CFSecISOCtryLangBuff >> dictByCtryIdx
		= new HashMap< CFSecISOCtryLangByCtryIdxKey,
				Map< CFSecISOCtryLangPKey,
					CFSecISOCtryLangBuff >>();
	private Map< CFSecISOCtryLangByLangIdxKey,
				Map< CFSecISOCtryLangPKey,
					CFSecISOCtryLangBuff >> dictByLangIdx
		= new HashMap< CFSecISOCtryLangByLangIdxKey,
				Map< CFSecISOCtryLangPKey,
					CFSecISOCtryLangBuff >>();

	public CFBamRamISOCtryLangTable( ICFBamSchema argSchema ) {
		schema = argSchema;
	}

	public void createISOCtryLang( CFSecAuthorization Authorization,
		CFSecISOCtryLangBuff Buff )
	{
		final String S_ProcName = "createISOCtryLang";
		CFSecISOCtryLangPKey pkey = schema.getFactoryISOCtryLang().newPKey();
		pkey.setRequiredISOCtryId( Buff.getRequiredISOCtryId() );
		pkey.setRequiredISOLangId( Buff.getRequiredISOLangId() );
		Buff.setRequiredISOCtryId( pkey.getRequiredISOCtryId() );
		Buff.setRequiredISOLangId( pkey.getRequiredISOLangId() );
		CFSecISOCtryLangByCtryIdxKey keyCtryIdx = schema.getFactoryISOCtryLang().newCtryIdxKey();
		keyCtryIdx.setRequiredISOCtryId( Buff.getRequiredISOCtryId() );

		CFSecISOCtryLangByLangIdxKey keyLangIdx = schema.getFactoryISOCtryLang().newLangIdxKey();
		keyLangIdx.setRequiredISOLangId( Buff.getRequiredISOLangId() );

		// Validate unique indexes

		if( dictByPKey.containsKey( pkey ) ) {
			throw new CFLibPrimaryKeyNotNewException( getClass(), S_ProcName, pkey );
		}

		// Validate foreign keys

		{
			boolean allNull = true;
			allNull = false;
			if( ! allNull ) {
				if( null == schema.getTableISOCtry().readDerivedByIdIdx( Authorization,
						Buff.getRequiredISOCtryId() ) )
				{
					throw new CFLibUnresolvedRelationException( getClass(),
						S_ProcName,
						"Container",
						"ISOCtryLangCtry",
						"ISOCtry",
						null );
				}
			}
		}

		// Proceed with adding the new record

		dictByPKey.put( pkey, Buff );

		Map< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff > subdictCtryIdx;
		if( dictByCtryIdx.containsKey( keyCtryIdx ) ) {
			subdictCtryIdx = dictByCtryIdx.get( keyCtryIdx );
		}
		else {
			subdictCtryIdx = new HashMap< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff >();
			dictByCtryIdx.put( keyCtryIdx, subdictCtryIdx );
		}
		subdictCtryIdx.put( pkey, Buff );

		Map< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff > subdictLangIdx;
		if( dictByLangIdx.containsKey( keyLangIdx ) ) {
			subdictLangIdx = dictByLangIdx.get( keyLangIdx );
		}
		else {
			subdictLangIdx = new HashMap< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff >();
			dictByLangIdx.put( keyLangIdx, subdictLangIdx );
		}
		subdictLangIdx.put( pkey, Buff );

	}

	public CFSecISOCtryLangBuff readDerived( CFSecAuthorization Authorization,
		CFSecISOCtryLangPKey PKey )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readDerived";
		CFSecISOCtryLangPKey key = schema.getFactoryISOCtryLang().newPKey();
		key.setRequiredISOCtryId( PKey.getRequiredISOCtryId() );
		key.setRequiredISOLangId( PKey.getRequiredISOLangId() );
		CFSecISOCtryLangBuff buff;
		if( dictByPKey.containsKey( key ) ) {
			buff = dictByPKey.get( key );
		}
		else {
			buff = null;
		}
		return( buff );
	}

	public CFSecISOCtryLangBuff lockDerived( CFSecAuthorization Authorization,
		CFSecISOCtryLangPKey PKey )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readDerived";
		CFSecISOCtryLangPKey key = schema.getFactoryISOCtryLang().newPKey();
		key.setRequiredISOCtryId( PKey.getRequiredISOCtryId() );
		key.setRequiredISOLangId( PKey.getRequiredISOLangId() );
		CFSecISOCtryLangBuff buff;
		if( dictByPKey.containsKey( key ) ) {
			buff = dictByPKey.get( key );
		}
		else {
			buff = null;
		}
		return( buff );
	}

	public CFSecISOCtryLangBuff[] readAllDerived( CFSecAuthorization Authorization ) {
		final String S_ProcName = "CFBamRamISOCtryLang.readAllDerived";
		CFSecISOCtryLangBuff[] retList = new CFSecISOCtryLangBuff[ dictByPKey.values().size() ];
		Iterator< CFSecISOCtryLangBuff > iter = dictByPKey.values().iterator();
		int idx = 0;
		while( iter.hasNext() ) {
			retList[ idx++ ] = iter.next();
		}
		return( retList );
	}

	public CFSecISOCtryLangBuff[] readDerivedByCtryIdx( CFSecAuthorization Authorization,
		short ISOCtryId )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readDerivedByCtryIdx";
		CFSecISOCtryLangByCtryIdxKey key = schema.getFactoryISOCtryLang().newCtryIdxKey();
		key.setRequiredISOCtryId( ISOCtryId );

		CFSecISOCtryLangBuff[] recArray;
		if( dictByCtryIdx.containsKey( key ) ) {
			Map< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff > subdictCtryIdx
				= dictByCtryIdx.get( key );
			recArray = new CFSecISOCtryLangBuff[ subdictCtryIdx.size() ];
			Iterator< CFSecISOCtryLangBuff > iter = subdictCtryIdx.values().iterator();
			int idx = 0;
			while( iter.hasNext() ) {
				recArray[ idx++ ] = iter.next();
			}
		}
		else {
			Map< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff > subdictCtryIdx
				= new HashMap< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff >();
			dictByCtryIdx.put( key, subdictCtryIdx );
			recArray = new CFSecISOCtryLangBuff[0];
		}
		return( recArray );
	}

	public CFSecISOCtryLangBuff[] readDerivedByLangIdx( CFSecAuthorization Authorization,
		short ISOLangId )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readDerivedByLangIdx";
		CFSecISOCtryLangByLangIdxKey key = schema.getFactoryISOCtryLang().newLangIdxKey();
		key.setRequiredISOLangId( ISOLangId );

		CFSecISOCtryLangBuff[] recArray;
		if( dictByLangIdx.containsKey( key ) ) {
			Map< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff > subdictLangIdx
				= dictByLangIdx.get( key );
			recArray = new CFSecISOCtryLangBuff[ subdictLangIdx.size() ];
			Iterator< CFSecISOCtryLangBuff > iter = subdictLangIdx.values().iterator();
			int idx = 0;
			while( iter.hasNext() ) {
				recArray[ idx++ ] = iter.next();
			}
		}
		else {
			Map< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff > subdictLangIdx
				= new HashMap< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff >();
			dictByLangIdx.put( key, subdictLangIdx );
			recArray = new CFSecISOCtryLangBuff[0];
		}
		return( recArray );
	}

	public CFSecISOCtryLangBuff readDerivedByIdIdx( CFSecAuthorization Authorization,
		short ISOCtryId,
		short ISOLangId )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readDerivedByIdIdx() ";
		CFSecISOCtryLangPKey key = schema.getFactoryISOCtryLang().newPKey();
		key.setRequiredISOCtryId( ISOCtryId );
		key.setRequiredISOLangId( ISOLangId );

		CFSecISOCtryLangBuff buff;
		if( dictByPKey.containsKey( key ) ) {
			buff = dictByPKey.get( key );
		}
		else {
			buff = null;
		}
		return( buff );
	}

	public CFSecISOCtryLangBuff readBuff( CFSecAuthorization Authorization,
		CFSecISOCtryLangPKey PKey )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readBuff";
		CFSecISOCtryLangBuff buff = readDerived( Authorization, PKey );
		if( ( buff != null ) && ( ! buff.getClassCode().equals( "a006" ) ) ) {
			buff = null;
		}
		return( buff );
	}

	public CFSecISOCtryLangBuff lockBuff( CFSecAuthorization Authorization,
		CFSecISOCtryLangPKey PKey )
	{
		final String S_ProcName = "lockBuff";
		CFSecISOCtryLangBuff buff = readDerived( Authorization, PKey );
		if( ( buff != null ) && ( ! buff.getClassCode().equals( "a006" ) ) ) {
			buff = null;
		}
		return( buff );
	}

	public CFSecISOCtryLangBuff[] readAllBuff( CFSecAuthorization Authorization )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readAllBuff";
		CFSecISOCtryLangBuff buff;
		ArrayList<CFSecISOCtryLangBuff> filteredList = new ArrayList<CFSecISOCtryLangBuff>();
		CFSecISOCtryLangBuff[] buffList = readAllDerived( Authorization );
		for( int idx = 0; idx < buffList.length; idx ++ ) {
			buff = buffList[idx];
			if( ( buff != null ) && buff.getClassCode().equals( "a006" ) ) {
				filteredList.add( buff );
			}
		}
		return( filteredList.toArray( new CFSecISOCtryLangBuff[0] ) );
	}

	public CFSecISOCtryLangBuff readBuffByIdIdx( CFSecAuthorization Authorization,
		short ISOCtryId,
		short ISOLangId )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readBuffByIdIdx() ";
		CFSecISOCtryLangBuff buff = readDerivedByIdIdx( Authorization,
			ISOCtryId,
			ISOLangId );
		if( ( buff != null ) && buff.getClassCode().equals( "a006" ) ) {
			return( (CFSecISOCtryLangBuff)buff );
		}
		else {
			return( null );
		}
	}

	public CFSecISOCtryLangBuff[] readBuffByCtryIdx( CFSecAuthorization Authorization,
		short ISOCtryId )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readBuffByCtryIdx() ";
		CFSecISOCtryLangBuff buff;
		ArrayList<CFSecISOCtryLangBuff> filteredList = new ArrayList<CFSecISOCtryLangBuff>();
		CFSecISOCtryLangBuff[] buffList = readDerivedByCtryIdx( Authorization,
			ISOCtryId );
		for( int idx = 0; idx < buffList.length; idx ++ ) {
			buff = buffList[idx];
			if( ( buff != null ) && buff.getClassCode().equals( "a006" ) ) {
				filteredList.add( (CFSecISOCtryLangBuff)buff );
			}
		}
		return( filteredList.toArray( new CFSecISOCtryLangBuff[0] ) );
	}

	public CFSecISOCtryLangBuff[] readBuffByLangIdx( CFSecAuthorization Authorization,
		short ISOLangId )
	{
		final String S_ProcName = "CFBamRamISOCtryLang.readBuffByLangIdx() ";
		CFSecISOCtryLangBuff buff;
		ArrayList<CFSecISOCtryLangBuff> filteredList = new ArrayList<CFSecISOCtryLangBuff>();
		CFSecISOCtryLangBuff[] buffList = readDerivedByLangIdx( Authorization,
			ISOLangId );
		for( int idx = 0; idx < buffList.length; idx ++ ) {
			buff = buffList[idx];
			if( ( buff != null ) && buff.getClassCode().equals( "a006" ) ) {
				filteredList.add( (CFSecISOCtryLangBuff)buff );
			}
		}
		return( filteredList.toArray( new CFSecISOCtryLangBuff[0] ) );
	}

	public void updateISOCtryLang( CFSecAuthorization Authorization,
		CFSecISOCtryLangBuff Buff )
	{
		CFSecISOCtryLangPKey pkey = schema.getFactoryISOCtryLang().newPKey();
		pkey.setRequiredISOCtryId( Buff.getRequiredISOCtryId() );
		pkey.setRequiredISOLangId( Buff.getRequiredISOLangId() );
		CFSecISOCtryLangBuff existing = dictByPKey.get( pkey );
		if( existing == null ) {
			throw new CFLibStaleCacheDetectedException( getClass(),
				"updateISOCtryLang",
				"Existing record not found",
				"ISOCtryLang",
				pkey );
		}
		if( existing.getRequiredRevision() != Buff.getRequiredRevision() ) {
			throw new CFLibCollisionDetectedException( getClass(),
				"updateISOCtryLang",
				pkey );
		}
		Buff.setRequiredRevision( Buff.getRequiredRevision() + 1 );
		CFSecISOCtryLangByCtryIdxKey existingKeyCtryIdx = schema.getFactoryISOCtryLang().newCtryIdxKey();
		existingKeyCtryIdx.setRequiredISOCtryId( existing.getRequiredISOCtryId() );

		CFSecISOCtryLangByCtryIdxKey newKeyCtryIdx = schema.getFactoryISOCtryLang().newCtryIdxKey();
		newKeyCtryIdx.setRequiredISOCtryId( Buff.getRequiredISOCtryId() );

		CFSecISOCtryLangByLangIdxKey existingKeyLangIdx = schema.getFactoryISOCtryLang().newLangIdxKey();
		existingKeyLangIdx.setRequiredISOLangId( existing.getRequiredISOLangId() );

		CFSecISOCtryLangByLangIdxKey newKeyLangIdx = schema.getFactoryISOCtryLang().newLangIdxKey();
		newKeyLangIdx.setRequiredISOLangId( Buff.getRequiredISOLangId() );

		// Check unique indexes

		// Validate foreign keys

		{
			boolean allNull = true;

			if( allNull ) {
				if( null == schema.getTableISOCtry().readDerivedByIdIdx( Authorization,
						Buff.getRequiredISOCtryId() ) )
				{
					throw new CFLibUnresolvedRelationException( getClass(),
						"updateISOCtryLang",
						"Container",
						"ISOCtryLangCtry",
						"ISOCtry",
						null );
				}
			}
		}

		// Update is valid

		Map< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff > subdict;

		dictByPKey.remove( pkey );
		dictByPKey.put( pkey, Buff );

		subdict = dictByCtryIdx.get( existingKeyCtryIdx );
		if( subdict != null ) {
			subdict.remove( pkey );
		}
		if( dictByCtryIdx.containsKey( newKeyCtryIdx ) ) {
			subdict = dictByCtryIdx.get( newKeyCtryIdx );
		}
		else {
			subdict = new HashMap< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff >();
			dictByCtryIdx.put( newKeyCtryIdx, subdict );
		}
		subdict.put( pkey, Buff );

		subdict = dictByLangIdx.get( existingKeyLangIdx );
		if( subdict != null ) {
			subdict.remove( pkey );
		}
		if( dictByLangIdx.containsKey( newKeyLangIdx ) ) {
			subdict = dictByLangIdx.get( newKeyLangIdx );
		}
		else {
			subdict = new HashMap< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff >();
			dictByLangIdx.put( newKeyLangIdx, subdict );
		}
		subdict.put( pkey, Buff );

	}

	public void deleteISOCtryLang( CFSecAuthorization Authorization,
		CFSecISOCtryLangBuff Buff )
	{
		final String S_ProcName = "CFBamRamISOCtryLangTable.deleteISOCtryLang() ";
		String classCode;
		CFSecISOCtryLangPKey pkey = schema.getFactoryISOCtryLang().newPKey();
		pkey.setRequiredISOCtryId( Buff.getRequiredISOCtryId() );
		pkey.setRequiredISOLangId( Buff.getRequiredISOLangId() );
		CFSecISOCtryLangBuff existing = dictByPKey.get( pkey );
		if( existing == null ) {
			return;
		}
		if( existing.getRequiredRevision() != Buff.getRequiredRevision() )
		{
			throw new CFLibCollisionDetectedException( getClass(),
				"deleteISOCtryLang",
				pkey );
		}
		CFSecISOCtryLangByCtryIdxKey keyCtryIdx = schema.getFactoryISOCtryLang().newCtryIdxKey();
		keyCtryIdx.setRequiredISOCtryId( existing.getRequiredISOCtryId() );

		CFSecISOCtryLangByLangIdxKey keyLangIdx = schema.getFactoryISOCtryLang().newLangIdxKey();
		keyLangIdx.setRequiredISOLangId( existing.getRequiredISOLangId() );

		// Validate reverse foreign keys

		// Delete is valid
		Map< CFSecISOCtryLangPKey, CFSecISOCtryLangBuff > subdict;

		dictByPKey.remove( pkey );

		subdict = dictByCtryIdx.get( keyCtryIdx );
		subdict.remove( pkey );

		subdict = dictByLangIdx.get( keyLangIdx );
		subdict.remove( pkey );

	}
	public void deleteISOCtryLangByIdIdx( CFSecAuthorization Authorization,
		short argISOCtryId,
		short argISOLangId )
	{
		CFSecISOCtryLangPKey key = schema.getFactoryISOCtryLang().newPKey();
		key.setRequiredISOCtryId( argISOCtryId );
		key.setRequiredISOLangId( argISOLangId );
		deleteISOCtryLangByIdIdx( Authorization, key );
	}

	public void deleteISOCtryLangByIdIdx( CFSecAuthorization Authorization,
		CFSecISOCtryLangPKey argKey )
	{
		boolean anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		CFSecISOCtryLangBuff cur;
		LinkedList<CFSecISOCtryLangBuff> matchSet = new LinkedList<CFSecISOCtryLangBuff>();
		Iterator<CFSecISOCtryLangBuff> values = dictByPKey.values().iterator();
		while( values.hasNext() ) {
			cur = values.next();
			if( argKey.equals( cur ) ) {
				matchSet.add( cur );
			}
		}
		Iterator<CFSecISOCtryLangBuff> iterMatch = matchSet.iterator();
		while( iterMatch.hasNext() ) {
			cur = iterMatch.next();
			cur = schema.getTableISOCtryLang().readDerivedByIdIdx( Authorization,
				cur.getRequiredISOCtryId(),
				cur.getRequiredISOLangId() );
			deleteISOCtryLang( Authorization, cur );
		}
	}

	public void deleteISOCtryLangByCtryIdx( CFSecAuthorization Authorization,
		short argISOCtryId )
	{
		CFSecISOCtryLangByCtryIdxKey key = schema.getFactoryISOCtryLang().newCtryIdxKey();
		key.setRequiredISOCtryId( argISOCtryId );
		deleteISOCtryLangByCtryIdx( Authorization, key );
	}

	public void deleteISOCtryLangByCtryIdx( CFSecAuthorization Authorization,
		CFSecISOCtryLangByCtryIdxKey argKey )
	{
		CFSecISOCtryLangBuff cur;
		boolean anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		LinkedList<CFSecISOCtryLangBuff> matchSet = new LinkedList<CFSecISOCtryLangBuff>();
		Iterator<CFSecISOCtryLangBuff> values = dictByPKey.values().iterator();
		while( values.hasNext() ) {
			cur = values.next();
			if( argKey.equals( cur ) ) {
				matchSet.add( cur );
			}
		}
		Iterator<CFSecISOCtryLangBuff> iterMatch = matchSet.iterator();
		while( iterMatch.hasNext() ) {
			cur = iterMatch.next();
			cur = schema.getTableISOCtryLang().readDerivedByIdIdx( Authorization,
				cur.getRequiredISOCtryId(),
				cur.getRequiredISOLangId() );
			deleteISOCtryLang( Authorization, cur );
		}
	}

	public void deleteISOCtryLangByLangIdx( CFSecAuthorization Authorization,
		short argISOLangId )
	{
		CFSecISOCtryLangByLangIdxKey key = schema.getFactoryISOCtryLang().newLangIdxKey();
		key.setRequiredISOLangId( argISOLangId );
		deleteISOCtryLangByLangIdx( Authorization, key );
	}

	public void deleteISOCtryLangByLangIdx( CFSecAuthorization Authorization,
		CFSecISOCtryLangByLangIdxKey argKey )
	{
		CFSecISOCtryLangBuff cur;
		boolean anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		LinkedList<CFSecISOCtryLangBuff> matchSet = new LinkedList<CFSecISOCtryLangBuff>();
		Iterator<CFSecISOCtryLangBuff> values = dictByPKey.values().iterator();
		while( values.hasNext() ) {
			cur = values.next();
			if( argKey.equals( cur ) ) {
				matchSet.add( cur );
			}
		}
		Iterator<CFSecISOCtryLangBuff> iterMatch = matchSet.iterator();
		while( iterMatch.hasNext() ) {
			cur = iterMatch.next();
			cur = schema.getTableISOCtryLang().readDerivedByIdIdx( Authorization,
				cur.getRequiredISOCtryId(),
				cur.getRequiredISOLangId() );
			deleteISOCtryLang( Authorization, cur );
		}
	}

	public void releasePreparedStatements() {
	}
}
