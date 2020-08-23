
// Description: Java 11 XML SAX Element Handler for Id16Gen

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
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
 *	CFBamSaxLoaderId16GenParse XML SAX Element Handler implementation
 *	for Id16Gen.
 */
public class CFBamSaxLoaderId16Gen
	extends CFLibXmlCoreElementHandler
{
	public CFBamSaxLoaderId16Gen( CFBamSaxLoader saxLoader ) {
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
		ICFBamId16GenObj origBuff = null;
		ICFBamId16GenEditObj editBuff = null;
		// Common XML Attributes
		String attrId = null;
		// Value Attributes
		String attrName = null;
		String attrShortName = null;
		String attrLabel = null;
		String attrShortDescription = null;
		String attrDescription = null;
		String attrDefaultXmlValue = null;
		String attrIsNullable = null;
		String attrGenerateId = null;
		String attrImplementsPolymorph = null;
		String attrDefSchema = null;
		// Value References
		ICFBamTenantObj refTenant = null;
		ICFBamScopeObj refScope = null;
		ICFBamSchemaDefObj refDefSchema = null;
		// Atom Attributes
		String attrDbName = null;
		// Atom References
		// Int16Def Attributes
		String attrInitValue = null;
		String attrMinValue = null;
		String attrMaxValue = null;
		// Int16Def References
		// Int16Type Attributes
		// Int16Type References
		ICFBamSchemaDefObj refSchemaDef = null;
		// Id16Gen Attributes
		String attrSlice = null;
		String attrBlockSize = null;
		String attrDispenser = null;
		// Id16Gen References
		ICFBamTableObj refDispenser = null;
		// Attribute Extraction
		String attrLocalName;
		int numAttrs;
		int idxAttr;
		final String S_LocalName = "LocalName";
		try {
			assert qName.equals( "Id16Gen" );

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
			origBuff = (ICFBamId16GenObj)schemaObj.getId16GenTableObj().newInstance();
			editBuff = (ICFBamId16GenEditObj)origBuff.beginEdit();

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
				else if( attrLocalName.equals( "DefaultXmlValue" ) ) {
					if( attrDefaultXmlValue != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrDefaultXmlValue = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "IsNullable" ) ) {
					if( attrIsNullable != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrIsNullable = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "GenerateId" ) ) {
					if( attrGenerateId != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrGenerateId = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "ImplementsPolymorph" ) ) {
					if( attrImplementsPolymorph != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrImplementsPolymorph = attrs.getValue( idxAttr );
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
				else if( attrLocalName.equals( "DbName" ) ) {
					if( attrDbName != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrDbName = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "InitValue" ) ) {
					if( attrInitValue != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrInitValue = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "MinValue" ) ) {
					if( attrMinValue != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrMinValue = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "MaxValue" ) ) {
					if( attrMaxValue != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrMaxValue = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "Slice" ) ) {
					if( attrSlice != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrSlice = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "BlockSize" ) ) {
					if( attrBlockSize != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrBlockSize = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "Dispenser" ) ) {
					if( attrDispenser != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrDispenser = attrs.getValue( idxAttr );
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
			if( ( attrIsNullable == null ) || ( attrIsNullable.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"IsNullable" );
			}
			if( ( attrImplementsPolymorph == null ) || ( attrImplementsPolymorph.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"ImplementsPolymorph" );
			}
			if( ( attrSlice == null ) || ( attrSlice.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"Slice" );
			}
			if( ( attrBlockSize == null ) || ( attrBlockSize.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"BlockSize" );
			}

			// Save named attributes to context
			CFLibXmlCoreContext curContext = getParser().getCurContext();
			curContext.putNamedValue( "Id", attrId );
			curContext.putNamedValue( "Name", attrName );
			curContext.putNamedValue( "ShortName", attrShortName );
			curContext.putNamedValue( "Label", attrLabel );
			curContext.putNamedValue( "ShortDescription", attrShortDescription );
			curContext.putNamedValue( "Description", attrDescription );
			curContext.putNamedValue( "DefaultXmlValue", attrDefaultXmlValue );
			curContext.putNamedValue( "IsNullable", attrIsNullable );
			curContext.putNamedValue( "GenerateId", attrGenerateId );
			curContext.putNamedValue( "ImplementsPolymorph", attrImplementsPolymorph );
			curContext.putNamedValue( "DefSchema", attrDefSchema );
			curContext.putNamedValue( "DbName", attrDbName );
			curContext.putNamedValue( "InitValue", attrInitValue );
			curContext.putNamedValue( "MinValue", attrMinValue );
			curContext.putNamedValue( "MaxValue", attrMaxValue );
			curContext.putNamedValue( "Slice", attrSlice );
			curContext.putNamedValue( "BlockSize", attrBlockSize );
			curContext.putNamedValue( "Dispenser", attrDispenser );

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

			String natDefaultXmlValue = attrDefaultXmlValue;
			editBuff.setOptionalDefaultXmlValue( natDefaultXmlValue );

			boolean natIsNullable;
			if( attrIsNullable.equals( "true" ) || attrIsNullable.equals( "yes" ) || attrIsNullable.equals( "1" ) ) {
				natIsNullable = true;
			}
			else if( attrIsNullable.equals( "false" ) || attrIsNullable.equals( "no" ) || attrIsNullable.equals( "0" ) ) {
				natIsNullable = false;
			}
			else {
				throw new CFLibUsageException( getClass(),
					S_ProcName,
					"Unexpected IsNullable value, must be one of true, false, yes, no, 1, or 0, not \"" + attrIsNullable + "\"" );
			}
			editBuff.setRequiredIsNullable( natIsNullable );

			Boolean natGenerateId;
			if( ( attrGenerateId == null ) || ( attrGenerateId.length() <= 0 ) ) {
				natGenerateId = null;
			}
			else if( attrGenerateId.equals( "true" ) || attrGenerateId.equals( "yes" ) || attrGenerateId.equals( "1" ) ) {
				natGenerateId = true;
			}
			else if( attrGenerateId.equals( "false" ) || attrGenerateId.equals( "no" ) || attrGenerateId.equals( "0" ) ) {
				natGenerateId = false;
			}
			else {
				throw new CFLibUsageException( getClass(),
					S_ProcName,
					"Unexpected GenerateId value, must be one of true, false, yes, no, 1, or 0, not \"" + attrGenerateId + "\"" );
			}
			editBuff.setOptionalGenerateId( natGenerateId );

			boolean natImplementsPolymorph;
			if( attrImplementsPolymorph.equals( "true" ) || attrImplementsPolymorph.equals( "yes" ) || attrImplementsPolymorph.equals( "1" ) ) {
				natImplementsPolymorph = true;
			}
			else if( attrImplementsPolymorph.equals( "false" ) || attrImplementsPolymorph.equals( "no" ) || attrImplementsPolymorph.equals( "0" ) ) {
				natImplementsPolymorph = false;
			}
			else {
				throw new CFLibUsageException( getClass(),
					S_ProcName,
					"Unexpected ImplementsPolymorph value, must be one of true, false, yes, no, 1, or 0, not \"" + attrImplementsPolymorph + "\"" );
			}
			editBuff.setRequiredImplementsPolymorph( natImplementsPolymorph );

			String natDbName = attrDbName;
			editBuff.setOptionalDbName( natDbName );

			Short natInitValue;
			if( ( attrInitValue == null ) || ( attrInitValue.length() <= 0 ) ) {
				natInitValue = null;
			}
			else {
				natInitValue= Short.valueOf( Short.parseShort( attrInitValue ) );
			}
			editBuff.setOptionalInitValue( natInitValue );

			Short natMinValue;
			if( ( attrMinValue == null ) || ( attrMinValue.length() <= 0 ) ) {
				natMinValue = null;
			}
			else {
				natMinValue= Short.valueOf( Short.parseShort( attrMinValue ) );
			}
			editBuff.setOptionalMinValue( natMinValue );

			Short natMaxValue;
			if( ( attrMaxValue == null ) || ( attrMaxValue.length() <= 0 ) ) {
				natMaxValue = null;
			}
			else {
				natMaxValue= Short.valueOf( Short.parseShort( attrMaxValue ) );
			}
			editBuff.setOptionalMaxValue( natMaxValue );

			short natSlice = Short.parseShort( attrSlice );
			editBuff.setRequiredSlice( natSlice );

			short natBlockSize = Short.parseShort( attrBlockSize );
			editBuff.setRequiredBlockSize( natBlockSize );

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
			else if( scopeObj instanceof ICFBamSchemaDefObj ) {
				refSchemaDef = (ICFBamSchemaDefObj) scopeObj;
				editBuff.setRequiredContainerSchemaDef( refSchemaDef );
				refTenant = (ICFBamTenantObj)editBuff.getRequiredOwnerTenant();
			}
			else {
				throw new CFLibUnsupportedClassException( getClass(),
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamSchemaDefObj" );
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

			refScope = refSchemaDef;
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

			// Lookup refDispenser by qualified name
			if( ( attrDispenser != null ) && ( attrDispenser.length() > 0 ) ) {
				refDispenser = (ICFBamTableObj)(editBuff.getNamedObject( schemaObj.getTableTableObj().getObjQualifyingClass(),
					attrDispenser ) );
				if( refDispenser == null ) {
					throw new CFLibNullArgumentException( getClass(),
						S_ProcName,
						0,
						"Resolve Dispenser reference qualified name \"" + attrDispenser + "\" to table Table" );
				}
			}
			else {
				refDispenser = null;
			}
			editBuff.setOptionalLookupDispenser( refDispenser );

			CFBamSaxLoader.LoaderBehaviourEnum loaderBehaviour = saxLoader.getId16GenLoaderBehaviour();
			ICFBamId16GenEditObj editId16Gen = null;
			ICFBamId16GenObj origId16Gen = (ICFBamId16GenObj)schemaObj.getId16GenTableObj().readId16GenByUNameIdx( refTenant.getRequiredId(),
			refScope.getRequiredId(),
			editBuff.getRequiredName() );
			if( origId16Gen == null ) {
				editId16Gen = editBuff;
			}
			else {
				switch( loaderBehaviour ) {
					case Insert:
						break;
					case Update:
						editId16Gen = (ICFBamId16GenEditObj)origId16Gen.beginEdit();
						editId16Gen.setRequiredName( editBuff.getRequiredName() );
						editId16Gen.setOptionalShortName( editBuff.getOptionalShortName() );
						editId16Gen.setOptionalLabel( editBuff.getOptionalLabel() );
						editId16Gen.setOptionalShortDescription( editBuff.getOptionalShortDescription() );
						editId16Gen.setOptionalDescription( editBuff.getOptionalDescription() );
						editId16Gen.setOptionalDefaultXmlValue( editBuff.getOptionalDefaultXmlValue() );
						editId16Gen.setRequiredIsNullable( editBuff.getRequiredIsNullable() );
						editId16Gen.setOptionalGenerateId( editBuff.getOptionalGenerateId() );
						editId16Gen.setRequiredImplementsPolymorph( editBuff.getRequiredImplementsPolymorph() );
						editId16Gen.setOptionalDbName( editBuff.getOptionalDbName() );
						editId16Gen.setOptionalInitValue( editBuff.getOptionalInitValue() );
						editId16Gen.setOptionalMinValue( editBuff.getOptionalMinValue() );
						editId16Gen.setOptionalMaxValue( editBuff.getOptionalMaxValue() );
						editId16Gen.setRequiredSlice( editBuff.getRequiredSlice() );
						editId16Gen.setRequiredBlockSize( editBuff.getRequiredBlockSize() );
						editId16Gen.setOptionalLookupDefSchema( editBuff.getOptionalLookupDefSchema() );
						editId16Gen.setOptionalLookupDispenser( editBuff.getOptionalLookupDispenser() );
						break;
					case Replace:
						editId16Gen = (ICFBamId16GenEditObj)origId16Gen.beginEdit();
						editId16Gen.deleteInstance();
						editId16Gen = null;
						origId16Gen = null;
						editId16Gen = editBuff;
						break;
				}
			}

			if( editId16Gen != null ) {
				if( origId16Gen != null ) {
					editId16Gen.update();
				}
				else {
					origId16Gen = (ICFBamId16GenObj)editId16Gen.create();
				}
				editId16Gen = null;
			}

			curContext.putNamedValue( "Object", origId16Gen );
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
