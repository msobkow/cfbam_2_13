
// Description: Java 11 MssCF Iterator for ISOCtry Relationship Lang.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
 *	
 *	Copyright 2020 Mark Stephen Sobkow msobkow@sasktel.net
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

package org.msscf.msscf.v2_13.cfbam.CFBamMssCF;

import java.io.*;
import java.lang.reflect.*;
import java.net.*;
import java.sql.*;
import java.rmi.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfcore.MssCF.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;
import org.msscf.msscf.v2_13.cfbam.CFBam.*;
import org.msscf.msscf.v2_13.cfbam.CFBamObj.*;
import org.msscf.msscf.v2_13.cfsec.CFSecObj.*;
import org.msscf.msscf.v2_13.cfint.CFIntObj.*;
import org.msscf.msscf.v2_13.cfcore.CFGenKb.*;
import org.msscf.msscf.v2_13.cfcore.CFGenKbObj.*;

/**
 *	CFBamMssCFIterateISOCtryLang binds ISOCtry.Lang
 *	as an instance of MssCFGenIteratorObj.
 */
public class CFBamMssCFIterateISOCtryLang
	extends MssCFGenIteratorObj
{
	private static final long serialVersionUID = 1L;

	public CFBamMssCFIterateISOCtryLang() {
		super();
	}

	public CFBamMssCFIterateISOCtryLang( MssCFEngine argEngine ) {
		super( argEngine,
			"any",
			null,
			"ISOCtry",
			"Lang",
			"ISOCtryLang" );
	}

	public ListIterator<ICFLibAnyObj> enumerateDetails( MssCFGenContext genContext ) {
		final String S_ProcName = "CFBamMssCFIterateISOCtryLang.enumerateDetails() ";

		if( genContext == null ) {
			throw new CFLibNullArgumentException( getClass(),
				S_ProcName,
				1,
				"genContext" );
		}

		ICFLibAnyObj genDef = genContext.getGenDef();
		if( genDef == null ) {
			throw new CFLibNullArgumentException( getClass(),
				S_ProcName,
				1,
				"genContext.getGenDef()" );
		}

		List<ICFLibAnyObj> list = new LinkedList<ICFLibAnyObj>();

		if( genDef instanceof ICFBamISOCtryObj ) {
			Iterator<ICFSecISOCtryLangObj> elements = ((ICFBamISOCtryObj)genDef).getOptionalComponentsLang().iterator();
			while( elements.hasNext() ) {
				list.add( elements.next() );
			}
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				S_ProcName,
				"genContext.getGenDef()",
				genDef,
				"ICFBamISOCtryObj" );
		}

		return( list.listIterator() );
	}}
