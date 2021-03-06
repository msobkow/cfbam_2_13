
// Description: Java 11 MssCF Binding for URLProtocol Column IsSecure.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFInt 2.13 Internet Essentials
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

package org.msscf.msscf.v2_13.cfbam.CFBamMssCF;

import java.math.*;
import java.sql.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfcore.MssCF.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;
import org.msscf.msscf.v2_13.cfbam.CFBam.*;
import org.msscf.msscf.v2_13.cfbam.CFBamObj.*;
import org.msscf.msscf.v2_13.cfsec.CFSecObj.*;
import org.msscf.msscf.v2_13.cfint.CFIntObj.*;
import org.apache.commons.codec.binary.Base64;

/**
 *	CFBamMssCFBindURLProtocolIsSecure binds URLProtocol.IsSecure
 *	as an instance of MssCFGenBindObj.
 */
public class CFBamMssCFBindURLProtocolIsSecure
	extends MssCFGenBindObj
{
	private static final long serialVersionUID = 1L;

	public CFBamMssCFBindURLProtocolIsSecure() {
		super();
	}

	public CFBamMssCFBindURLProtocolIsSecure( MssCFEngine argEngine ) {
		super( argEngine,
			"any",
			null,
			"URLProtocol",
			"IsSecure" );
	}
	public Object getValueObject( MssCFGenContext genContext ) {
		final String S_ProcName = "CFBamMssCFBindURLProtocolIsSecure.getValueObject() ";

		if( genContext == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"expandBody",
				1,
				"genContext" );
		}

		ICFLibAnyObj genDef = genContext.getGenDef();
		if( genDef == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"expandBody",
				1,
				"genContext.getGenDef()" );
		}

		boolean isSecure;
		if( genDef instanceof ICFBamURLProtocolObj ) {
			isSecure = ((ICFBamURLProtocolObj)genDef).getRequiredIsSecure();
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"expandBody",
				"genContext.getGenDef()",
				genDef,
				"ICFBamURLProtocolObj" );
		}

		return( isSecure );
	}

	public String expandBody( MssCFGenContext genContext ) {
		final String S_ProcName = "CFBamMssCFBindURLProtocolIsSecure.expandBody() ";

		if( genContext == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"expandBody",
				1,
				"genContext" );
		}

		ICFLibAnyObj genDef = genContext.getGenDef();
		if( genDef == null ) {
			throw new CFLibNullArgumentException( getClass(),
				"expandBody",
				1,
				"genContext.getGenDef()" );
		}

		String ret;

		if( genDef instanceof ICFBamURLProtocolObj ) {
			boolean isSecure = ((ICFBamURLProtocolObj)genDef).getRequiredIsSecure();
			if( isSecure ) {
				ret = "yes";
			}
			else {
				ret = "no";
			}
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"expandBody",
				"genContext.getGenDef()",
				genDef,
				"ICFBamURLProtocolObj" );
		}

		return( ret );
	}

}
