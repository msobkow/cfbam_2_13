
// Description: Java 11 XML SAX Element Handler for ServerProc

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

package org.msscf.msscf.v2_13.cfbam.CFBamSaxLoader;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.apache.commons.codec.binary.Base64;
import org.xml.sax.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;
import org.msscf.msscf.v2_13.cfbam.CFBam.*;
import org.msscf.msscf.v2_13.cfsec.CFSecObj.*;
import org.msscf.msscf.v2_13.cfint.CFIntObj.*;
import org.msscf.msscf.v2_13.cfbam.CFBamObj.*;

/*
 *	CFBamSaxLoaderServerProcParse XML SAX Element Handler implementation
 *	for ServerProc.
 */
public class CFBamSaxLoaderServerProc
	extends CFLibXmlCoreElementHandler
{
	public CFBamSaxLoaderServerProc( CFBamSaxLoader saxLoader ) {
		super( saxLoader );
	}

	public void startElement(
		String		uri,
		String		localName,
		String		qName,
		Attributes	attrs )
	throws SAXException
	{
		final String S_ProcName = "startElement";
		ICFBamServerProcObj origBuff = null;
		ICFBamServerProcEditObj editBuff = null;
		// Common XML Attributes
		String attrId = null;
		// Scope Attributes
		// Scope References
		ICFBamTenantObj refTenant = null;
		// ServerMethod Attributes
		String attrName = null;
		String attrShortName = null;
		String attrLabel = null;
		String attrShortDescription = null;
		String attrDescription = null;
		String attrSuffix = null;
		String attrIsInstanceMethod = null;
		String attrIsServerOnly = null;
		String attrJMethodBody = null;
		String attrCppMethodBody = null;
		String attrCsMethodBody = null;
		String attrDefSchema = null;
		// ServerMethod References
		ICFBamSchemaDefObj refDefSchema = null;
		ICFBamTableObj refForTable = null;
		// ServerProc Attributes
		String attrDummy = null;
		// ServerProc References
		// Attribute Extraction
		String attrLocalName;
		int numAttrs;
		int idxAttr;
		final String S_LocalName = "LocalName";
		try {
			assert qName.equals( "ServerProc" );

			CFBamSaxLoader saxLoader = (CFBamSaxLoader)getParser();
			if( saxLoader == null ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"getParser()" );
			}

			ICFBamSchemaObj schemaObj = saxLoader.getSchemaObj();
			if( schemaObj == null ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"getParser().getSchemaObj()" );
			}

			// Instantiate an edit buffer for the parsed information
			origBuff = (ICFBamServerProcObj)schemaObj.getServerProcTableObj().newInstance();
			editBuff = (ICFBamServerProcEditObj)origBuff.beginEdit();

			// Extract Attributes
			numAttrs = attrs.getLength();
			for( idxAttr = 0; idxAttr < numAttrs; idxAttr++ ) {
				attrLocalName = attrs.getLocalName( idxAttr );
				if( attrLocalName.equals( "Id" ) ) {
					if( attrId != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrId = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "Name" ) ) {
					if( attrName != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrName = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "ShortName" ) ) {
					if( attrShortName != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrShortName = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "Label" ) ) {
					if( attrLabel != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrLabel = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "ShortDescription" ) ) {
					if( attrShortDescription != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrShortDescription = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "Description" ) ) {
					if( attrDescription != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrDescription = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "Suffix" ) ) {
					if( attrSuffix != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrSuffix = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "IsInstanceMethod" ) ) {
					if( attrIsInstanceMethod != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrIsInstanceMethod = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "IsServerOnly" ) ) {
					if( attrIsServerOnly != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrIsServerOnly = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "JMethodBody" ) ) {
					if( attrJMethodBody != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrJMethodBody = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "CppMethodBody" ) ) {
					if( attrCppMethodBody != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrCppMethodBody = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "CsMethodBody" ) ) {
					if( attrCsMethodBody != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrCsMethodBody = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "DefSchema" ) ) {
					if( attrDefSchema != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrDefSchema = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "Dummy" ) ) {
					if( attrDummy != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrDummy = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "schemaLocation" ) ) {
					// ignored
				}
				else {
					throw new CFLibUnrecognizedAttributeException( getClass(),
						S_ProcName,
						getParser().getLocationInfo(),
						attrLocalName );
				}
			}

			// Ensure that required attributes have values
			if( attrName == null ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"Name" );
			}
			if( ( attrIsInstanceMethod == null ) || ( attrIsInstanceMethod.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"IsInstanceMethod" );
			}
			if( ( attrIsServerOnly == null ) || ( attrIsServerOnly.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"IsServerOnly" );
			}
			if( attrJMethodBody == null ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"JMethodBody" );
			}
			if( attrCppMethodBody == null ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"CppMethodBody" );
			}
			if( attrCsMethodBody == null ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"CsMethodBody" );
			}

			// Save named attributes to context
			CFLibXmlCoreContext curContext = getParser().getCurContext();
			curContext.putNamedValue( "Id", attrId );
			curContext.putNamedValue( "Name", attrName );
			curContext.putNamedValue( "ShortName", attrShortName );
			curContext.putNamedValue( "Label", attrLabel );
			curContext.putNamedValue( "ShortDescription", attrShortDescription );
			curContext.putNamedValue( "Description", attrDescription );
			curContext.putNamedValue( "Suffix", attrSuffix );
			curContext.putNamedValue( "IsInstanceMethod", attrIsInstanceMethod );
			curContext.putNamedValue( "IsServerOnly", attrIsServerOnly );
			curContext.putNamedValue( "JMethodBody", attrJMethodBody );
			curContext.putNamedValue( "CppMethodBody", attrCppMethodBody );
			curContext.putNamedValue( "CsMethodBody", attrCsMethodBody );
			curContext.putNamedValue( "DefSchema", attrDefSchema );
			curContext.putNamedValue( "Dummy", attrDummy );

			// Convert string attributes to native Java types
			// and apply the converted attributes to the editBuff.

			Integer natId;
			if( ( attrId != null ) && ( attrId.length() > 0 ) ) {
				natId = Integer.valueOf( Integer.parseInt( attrId ) );
			}
			else {
				natId = null;
			}
			String natName = attrName;
			editBuff.setRequiredName( natName );

			String natShortName = attrShortName;
			editBuff.setOptionalShortName( natShortName );

			String natLabel = attrLabel;
			editBuff.setOptionalLabel( natLabel );

			String natShortDescription = attrShortDescription;
			editBuff.setOptionalShortDescription( natShortDescription );

			String natDescription = attrDescription;
			editBuff.setOptionalDescription( natDescription );

			String natSuffix = attrSuffix;
			editBuff.setOptionalSuffix( natSuffix );

			boolean natIsInstanceMethod;
			if( attrIsInstanceMethod.equals( "true" ) || attrIsInstanceMethod.equals( "yes" ) || attrIsInstanceMethod.equals( "1" ) ) {
				natIsInstanceMethod = true;
			}
			else if( attrIsInstanceMethod.equals( "false" ) || attrIsInstanceMethod.equals( "no" ) || attrIsInstanceMethod.equals( "0" ) ) {
				natIsInstanceMethod = false;
			}
			else {
				throw new CFLibUsageException( getClass(),
					S_ProcName,
					"Unexpected IsInstanceMethod value, must be one of true, false, yes, no, 1, or 0, not \"" + attrIsInstanceMethod + "\"" );
			}
			editBuff.setRequiredIsInstanceMethod( natIsInstanceMethod );

			boolean natIsServerOnly;
			if( attrIsServerOnly.equals( "true" ) || attrIsServerOnly.equals( "yes" ) || attrIsServerOnly.equals( "1" ) ) {
				natIsServerOnly = true;
			}
			else if( attrIsServerOnly.equals( "false" ) || attrIsServerOnly.equals( "no" ) || attrIsServerOnly.equals( "0" ) ) {
				natIsServerOnly = false;
			}
			else {
				throw new CFLibUsageException( getClass(),
					S_ProcName,
					"Unexpected IsServerOnly value, must be one of true, false, yes, no, 1, or 0, not \"" + attrIsServerOnly + "\"" );
			}
			editBuff.setRequiredIsServerOnly( natIsServerOnly );

			String natJMethodBody = attrJMethodBody;
			editBuff.setRequiredJMethodBody( natJMethodBody );

			String natCppMethodBody = attrCppMethodBody;
			editBuff.setRequiredCppMethodBody( natCppMethodBody );

			String natCsMethodBody = attrCsMethodBody;
			editBuff.setRequiredCsMethodBody( natCsMethodBody );

			String natDummy = attrDummy;
			editBuff.setOptionalDummy( natDummy );

			// Get the scope/container object

			CFLibXmlCoreContext parentContext = curContext.getPrevContext();
			Object scopeObj;
			if( parentContext != null ) {
				scopeObj = parentContext.getNamedValue( "Object" );
			}
			else {
				scopeObj = null;
			}

			// Resolve and apply required Container reference

			if( scopeObj == null ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"scopeObj" );
			}
			else if( scopeObj instanceof ICFBamTableObj ) {
				refForTable = (ICFBamTableObj) scopeObj;
				editBuff.setRequiredContainerForTable( refForTable );
				refTenant = (ICFBamTenantObj)editBuff.getRequiredOwnerTenant();
			}
			else {
				throw new CFLibUnsupportedClassException( getClass(),
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamTableObj" );
			}

			// Resolve and apply Owner reference

			if( refTenant == null ) {
				if( scopeObj instanceof ICFBamTenantObj ) {
					refTenant = (ICFBamTenantObj) scopeObj;
					editBuff.setRequiredOwnerTenant( refTenant );
				}
				else {
					throw new CFLibNullArgumentException( getClass(),
						S_ProcName,
						0,
						"Owner<Tenant>" );
				}
			}

			// Lookup refDefSchema by qualified name
			if( ( attrDefSchema != null ) && ( attrDefSchema.length() > 0 ) ) {
				refDefSchema = (ICFBamSchemaDefObj)(editBuff.getNamedObject( schemaObj.getSchemaDefTableObj().getObjQualifyingClass(),
					attrDefSchema ) );
				if( refDefSchema == null ) {
					throw new CFLibNullArgumentException( getClass(),
						S_ProcName,
						0,
						"Resolve DefSchema reference qualified name \"" + attrDefSchema + "\" to table SchemaDef" );
				}
			}
			else {
				refDefSchema = null;
			}
			editBuff.setOptionalLookupDefSchema( refDefSchema );

			CFBamSaxLoader.LoaderBehaviourEnum loaderBehaviour = saxLoader.getServerProcLoaderBehaviour();
			ICFBamServerProcEditObj editServerProc = null;
			ICFBamServerProcObj origServerProc = (ICFBamServerProcObj)schemaObj.getServerProcTableObj().readServerProcByUNameIdx( refForTable.getRequiredTenantId(),
			refForTable.getRequiredId(),
			editBuff.getRequiredName() );
			if( origServerProc == null ) {
				editServerProc = editBuff;
			}
			else {
				switch( loaderBehaviour ) {
					case Insert:
						break;
					case Update:
						editServerProc = (ICFBamServerProcEditObj)origServerProc.beginEdit();
						editServerProc.setRequiredName( editBuff.getRequiredName() );
						editServerProc.setOptionalShortName( editBuff.getOptionalShortName() );
						editServerProc.setOptionalLabel( editBuff.getOptionalLabel() );
						editServerProc.setOptionalShortDescription( editBuff.getOptionalShortDescription() );
						editServerProc.setOptionalDescription( editBuff.getOptionalDescription() );
						editServerProc.setOptionalSuffix( editBuff.getOptionalSuffix() );
						editServerProc.setRequiredIsInstanceMethod( editBuff.getRequiredIsInstanceMethod() );
						editServerProc.setRequiredIsServerOnly( editBuff.getRequiredIsServerOnly() );
						editServerProc.setRequiredJMethodBody( editBuff.getRequiredJMethodBody() );
						editServerProc.setRequiredCppMethodBody( editBuff.getRequiredCppMethodBody() );
						editServerProc.setRequiredCsMethodBody( editBuff.getRequiredCsMethodBody() );
						editServerProc.setOptionalDummy( editBuff.getOptionalDummy() );
						editServerProc.setOptionalLookupDefSchema( editBuff.getOptionalLookupDefSchema() );
						break;
					case Replace:
						editServerProc = (ICFBamServerProcEditObj)origServerProc.beginEdit();
						editServerProc.deleteInstance();
						editServerProc = null;
						origServerProc = null;
						editServerProc = editBuff;
						break;
				}
			}

			if( editServerProc != null ) {
				if( origServerProc != null ) {
					editServerProc.update();
				}
				else {
					origServerProc = (ICFBamServerProcObj)editServerProc.create();
				}
				editServerProc = null;
			}

			curContext.putNamedValue( "Object", origServerProc );
		}
		catch( RuntimeException e ) {
			throw new SAXException( "Near " + getParser().getLocationInfo() + ": Caught and rethrew " + e.getClass().getName() + " - " + e.getMessage(),
				e );
		}
		catch( Error e ) {
			throw new SAXException( "Near " + getParser().getLocationInfo() + ": Caught and rethrew " + e.getClass().getName() + " - " + e.getMessage() );
		}
	}

	public void endElement(
		String		uri,
		String		localName,
		String		qName )
	throws SAXException
	{
	}
}
