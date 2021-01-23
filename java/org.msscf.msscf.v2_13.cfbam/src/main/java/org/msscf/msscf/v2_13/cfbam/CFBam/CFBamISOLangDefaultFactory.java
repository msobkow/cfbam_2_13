
// Description: Java 11 Default Factory implementation for ISOLang.

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

package org.msscf.msscf.v2_13.cfbam.CFBam;

import java.lang.reflect.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;

	/*
	 *	CFBamISOLangFactory implementation for ISOLang
	 */
public class CFBamISOLangDefaultFactory
	extends CFSecISOLangDefaultFactory
	implements ICFBamISOLangFactory
{
	public CFBamISOLangDefaultFactory() {
		super();
	}

	public CFSecISOLangPKey newPKey() {
		CFSecISOLangPKey pkey =
			new CFSecISOLangPKey();
		return( pkey );
	}

	public CFSecISOLangHPKey newHPKey() {
		CFSecISOLangHPKey hpkey =
			new CFSecISOLangHPKey();
		return( hpkey );
	}

	public CFSecISOLangByCode3IdxKey newCode3IdxKey() {
		CFSecISOLangByCode3IdxKey key =
			new CFSecISOLangByCode3IdxKey();
		return( key );
	}

	public CFSecISOLangByCode2IdxKey newCode2IdxKey() {
		CFSecISOLangByCode2IdxKey key =
			new CFSecISOLangByCode2IdxKey();
		return( key );
	}

	public CFSecISOLangBuff newBuff() {
		CFSecISOLangBuff buff =
			new CFSecISOLangBuff();
		return( buff );
	}

	public CFSecISOLangHBuff newHBuff() {
		CFSecISOLangHBuff hbuff =
			new CFSecISOLangHBuff();
		return( hbuff );
	}
}
