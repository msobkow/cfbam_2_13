
// Description: Java 11 MssCF Binding for ISOCtryCcy Column ISOCtryId.

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
 *	CFBamMssCFBindISOCtryCcyISOCtryId binds ISOCtryCcy.ISOCtryId
 *	as an instance of MssCFGenBindObj.
 */
public class CFBamMssCFBindISOCtryCcyISOCtryId
	extends MssCFGenBindObj
{
	private static final long serialVersionUID = 1L;

	public CFBamMssCFBindISOCtryCcyISOCtryId() {
		super();
	}

	public CFBamMssCFBindISOCtryCcyISOCtryId( MssCFEngine argEngine ) {
		super( argEngine,
			"any",
			null,
			"ISOCtryCcy",
			"ISOCtryId" );
	}
	public Object getValueObject( MssCFGenContext genContext ) {
		final String S_ProcName = "CFBamMssCFBindISOCtryCcyISOCtryId.getValueObject() ";

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

		short iSOCtryId;
		if( genDef instanceof ICFBamISOCtryCcyObj ) {
			iSOCtryId = ((ICFBamISOCtryCcyObj)genDef).getRequiredISOCtryId();
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"expandBody",
				"genContext.getGenDef()",
				genDef,
				"ICFBamISOCtryCcyObj" );
		}

		return( iSOCtryId );
	}

	public String expandBody( MssCFGenContext genContext ) {
		final String S_ProcName = "CFBamMssCFBindISOCtryCcyISOCtryId.expandBody() ";

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

		if( genDef instanceof ICFBamISOCtryCcyObj ) {
			short iSOCtryId = ((ICFBamISOCtryCcyObj)genDef).getRequiredISOCtryId();
			ret = Short.toString( iSOCtryId );
		}
		else {
			throw new CFLibUnsupportedClassException( getClass(),
				"expandBody",
				"genContext.getGenDef()",
				genDef,
				"ICFBamISOCtryCcyObj" );
		}

		return( ret );
	}

}
