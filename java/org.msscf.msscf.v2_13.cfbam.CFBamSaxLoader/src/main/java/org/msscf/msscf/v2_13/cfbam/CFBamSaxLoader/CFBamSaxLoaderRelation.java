
// Description: Java 11 XML SAX Element Handler for Relation

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
 *	CFBamSaxLoaderRelationParse XML SAX Element Handler implementation
 *	for Relation.
 */
public class CFBamSaxLoaderRelation
	extends CFLibXmlCoreElementHandler
{
	public CFBamSaxLoaderRelation( CFBamSaxLoader saxLoader ) {
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
		ICFBamRelationObj origBuff = null;
		ICFBamRelationEditObj editBuff = null;
		// Common XML Attributes
		String attrId = null;
		// Scope Attributes
		// Scope References
		ICFBamTenantObj refTenant = null;
		// Relation Attributes
		String attrName = null;
		String attrShortName = null;
		String attrLabel = null;
		String attrShortDescription = null;
		String attrDescription = null;
		String attrRelationType = null;
		String attrDbName = null;
		String attrSuffix = null;
		String attrIsRequired = null;
		String attrIsXsdContainer = null;
		String attrIsLateResolver = null;
		String attrAllowAddendum = null;
		String attrDefSchema = null;
		String attrFromIndex = null;
		String attrToTable = null;
		String attrToIndex = null;
		String attrNarrowed = null;
		// Relation References
		ICFBamSchemaDefObj refDefSchema = null;
		ICFBamTableObj refFromTable = null;
		ICFBamTenantObj refRelTenant = null;
		ICFBamIndexObj refFromIndex = null;
		ICFBamTableObj refToTable = null;
		ICFBamIndexObj refToIndex = null;
		ICFBamRelationObj refNarrowed = null;
		// Attribute Extraction
		String attrLocalName;
		int numAttrs;
		int idxAttr;
		final String S_LocalName = "LocalName";
		try {
			assert qName.equals( "Relation" );

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
			origBuff = (ICFBamRelationObj)schemaObj.getRelationTableObj().newInstance();
			editBuff = (ICFBamRelationEditObj)origBuff.beginEdit();

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
				else if( attrLocalName.equals( "RelationType" ) ) {
					if( attrRelationType != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrRelationType = attrs.getValue( idxAttr );
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
				else if( attrLocalName.equals( "Suffix" ) ) {
					if( attrSuffix != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrSuffix = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "IsRequired" ) ) {
					if( attrIsRequired != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrIsRequired = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "IsXsdContainer" ) ) {
					if( attrIsXsdContainer != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrIsXsdContainer = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "IsLateResolver" ) ) {
					if( attrIsLateResolver != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrIsLateResolver = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "AllowAddendum" ) ) {
					if( attrAllowAddendum != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrAllowAddendum = attrs.getValue( idxAttr );
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
				else if( attrLocalName.equals( "FromIndex" ) ) {
					if( attrFromIndex != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrFromIndex = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "ToTable" ) ) {
					if( attrToTable != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrToTable = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "ToIndex" ) ) {
					if( attrToIndex != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrToIndex = attrs.getValue( idxAttr );
				}
				else if( attrLocalName.equals( "Narrowed" ) ) {
					if( attrNarrowed != null ) {
						throw new CFLibUniqueIndexViolationException( getClass(),
							S_ProcName,
							S_LocalName,
							attrLocalName );
					}
					attrNarrowed = attrs.getValue( idxAttr );
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
			if( ( attrRelationType == null ) || ( attrRelationType.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"RelationType" );
			}
			if( ( attrIsRequired == null ) || ( attrIsRequired.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"IsRequired" );
			}
			if( ( attrIsXsdContainer == null ) || ( attrIsXsdContainer.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"IsXsdContainer" );
			}
			if( ( attrIsLateResolver == null ) || ( attrIsLateResolver.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"IsLateResolver" );
			}
			if( ( attrAllowAddendum == null ) || ( attrAllowAddendum.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"AllowAddendum" );
			}
			if( ( attrFromIndex == null ) || ( attrFromIndex.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"FromIndex" );
			}
			if( ( attrToTable == null ) || ( attrToTable.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"ToTable" );
			}
			if( ( attrToIndex == null ) || ( attrToIndex.length() <= 0 ) ) {
				throw new CFLibNullArgumentException( getClass(),
					S_ProcName,
					0,
					"ToIndex" );
			}

			// Save named attributes to context
			CFLibXmlCoreContext curContext = getParser().getCurContext();
			curContext.putNamedValue( "Id", attrId );
			curContext.putNamedValue( "Name", attrName );
			curContext.putNamedValue( "ShortName", attrShortName );
			curContext.putNamedValue( "Label", attrLabel );
			curContext.putNamedValue( "ShortDescription", attrShortDescription );
			curContext.putNamedValue( "Description", attrDescription );
			curContext.putNamedValue( "RelationType", attrRelationType );
			curContext.putNamedValue( "DbName", attrDbName );
			curContext.putNamedValue( "Suffix", attrSuffix );
			curContext.putNamedValue( "IsRequired", attrIsRequired );
			curContext.putNamedValue( "IsXsdContainer", attrIsXsdContainer );
			curContext.putNamedValue( "IsLateResolver", attrIsLateResolver );
			curContext.putNamedValue( "AllowAddendum", attrAllowAddendum );
			curContext.putNamedValue( "DefSchema", attrDefSchema );
			curContext.putNamedValue( "FromIndex", attrFromIndex );
			curContext.putNamedValue( "ToTable", attrToTable );
			curContext.putNamedValue( "ToIndex", attrToIndex );
			curContext.putNamedValue( "Narrowed", attrNarrowed );

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

			ICFBamSchema.RelationTypeEnum natRelationType = CFBamSchema.parseRelationTypeEnum( attrRelationType );
			editBuff.setRequiredRelationType( natRelationType );

			String natDbName = attrDbName;
			editBuff.setOptionalDbName( natDbName );

			String natSuffix = attrSuffix;
			editBuff.setOptionalSuffix( natSuffix );

			boolean natIsRequired;
			if( attrIsRequired.equals( "true" ) || attrIsRequired.equals( "yes" ) || attrIsRequired.equals( "1" ) ) {
				natIsRequired = true;
			}
			else if( attrIsRequired.equals( "false" ) || attrIsRequired.equals( "no" ) || attrIsRequired.equals( "0" ) ) {
				natIsRequired = false;
			}
			else {
				throw new CFLibUsageException( getClass(),
					S_ProcName,
					"Unexpected IsRequired value, must be one of true, false, yes, no, 1, or 0, not \"" + attrIsRequired + "\"" );
			}
			editBuff.setRequiredIsRequired( natIsRequired );

			boolean natIsXsdContainer;
			if( attrIsXsdContainer.equals( "true" ) || attrIsXsdContainer.equals( "yes" ) || attrIsXsdContainer.equals( "1" ) ) {
				natIsXsdContainer = true;
			}
			else if( attrIsXsdContainer.equals( "false" ) || attrIsXsdContainer.equals( "no" ) || attrIsXsdContainer.equals( "0" ) ) {
				natIsXsdContainer = false;
			}
			else {
				throw new CFLibUsageException( getClass(),
					S_ProcName,
					"Unexpected IsXsdContainer value, must be one of true, false, yes, no, 1, or 0, not \"" + attrIsXsdContainer + "\"" );
			}
			editBuff.setRequiredIsXsdContainer( natIsXsdContainer );

			boolean natIsLateResolver;
			if( attrIsLateResolver.equals( "true" ) || attrIsLateResolver.equals( "yes" ) || attrIsLateResolver.equals( "1" ) ) {
				natIsLateResolver = true;
			}
			else if( attrIsLateResolver.equals( "false" ) || attrIsLateResolver.equals( "no" ) || attrIsLateResolver.equals( "0" ) ) {
				natIsLateResolver = false;
			}
			else {
				throw new CFLibUsageException( getClass(),
					S_ProcName,
					"Unexpected IsLateResolver value, must be one of true, false, yes, no, 1, or 0, not \"" + attrIsLateResolver + "\"" );
			}
			editBuff.setRequiredIsLateResolver( natIsLateResolver );

			boolean natAllowAddendum;
			if( attrAllowAddendum.equals( "true" ) || attrAllowAddendum.equals( "yes" ) || attrAllowAddendum.equals( "1" ) ) {
				natAllowAddendum = true;
			}
			else if( attrAllowAddendum.equals( "false" ) || attrAllowAddendum.equals( "no" ) || attrAllowAddendum.equals( "0" ) ) {
				natAllowAddendum = false;
			}
			else {
				throw new CFLibUsageException( getClass(),
					S_ProcName,
					"Unexpected AllowAddendum value, must be one of true, false, yes, no, 1, or 0, not \"" + attrAllowAddendum + "\"" );
			}
			editBuff.setRequiredAllowAddendum( natAllowAddendum );

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
				refFromTable = (ICFBamTableObj) scopeObj;
				editBuff.setRequiredContainerFromTable( refFromTable );
				refRelTenant = (ICFBamTenantObj)editBuff.getRequiredOwnerRelTenant();
			}
			else {
				throw new CFLibUnsupportedClassException( getClass(),
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamTableObj" );
			}

			// Resolve and apply Owner reference

			if( refRelTenant == null ) {
				if( scopeObj instanceof ICFBamTenantObj ) {
					refRelTenant = (ICFBamTenantObj) scopeObj;
					editBuff.setRequiredOwnerRelTenant( refRelTenant );
				}
				else {
					throw new CFLibNullArgumentException( getClass(),
						S_ProcName,
						0,
						"Owner<RelTenant>" );
				}
			}

			refTenant = refRelTenant;
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

			// Lookup refFromIndex by qualified name
			if( ( attrFromIndex != null ) && ( attrFromIndex.length() > 0 ) ) {
				refFromIndex = (ICFBamIndexObj)(editBuff.getNamedObject( schemaObj.getIndexTableObj().getObjQualifyingClass(),
					attrFromIndex ) );
				if( refFromIndex == null ) {
					throw new CFLibNullArgumentException( getClass(),
						S_ProcName,
						0,
						"Resolve FromIndex reference qualified name \"" + attrFromIndex + "\" to table Index" );
				}
			}
			else {
				refFromIndex = null;
			}
			editBuff.setRequiredLookupFromIndex( refFromIndex );

			// Lookup refToTable by qualified name
			if( ( attrToTable != null ) && ( attrToTable.length() > 0 ) ) {
				refToTable = (ICFBamTableObj)(editBuff.getNamedObject( schemaObj.getTableTableObj().getObjQualifyingClass(),
					attrToTable ) );
				if( refToTable == null ) {
					throw new CFLibNullArgumentException( getClass(),
						S_ProcName,
						0,
						"Resolve ToTable reference qualified name \"" + attrToTable + "\" to table Table" );
				}
			}
			else {
				refToTable = null;
			}
			editBuff.setRequiredLookupToTable( refToTable );

			// Lookup refToIndex by qualified name
			if( ( attrToIndex != null ) && ( attrToIndex.length() > 0 ) ) {
				refToIndex = (ICFBamIndexObj)(editBuff.getNamedObject( schemaObj.getIndexTableObj().getObjQualifyingClass(),
					attrToIndex ) );
				if( refToIndex == null ) {
					throw new CFLibNullArgumentException( getClass(),
						S_ProcName,
						0,
						"Resolve ToIndex reference qualified name \"" + attrToIndex + "\" to table Index" );
				}
			}
			else {
				refToIndex = null;
			}
			editBuff.setRequiredLookupToIndex( refToIndex );

			// Lookup refNarrowed by qualified name
			if( ( attrNarrowed != null ) && ( attrNarrowed.length() > 0 ) ) {
				refNarrowed = (ICFBamRelationObj)(editBuff.getNamedObject( schemaObj.getRelationTableObj().getObjQualifyingClass(),
					attrNarrowed ) );
				if( refNarrowed == null ) {
					throw new CFLibNullArgumentException( getClass(),
						S_ProcName,
						0,
						"Resolve Narrowed reference qualified name \"" + attrNarrowed + "\" to table Relation" );
				}
			}
			else {
				refNarrowed = null;
			}
			editBuff.setOptionalLookupNarrowed( refNarrowed );

			CFBamSaxLoader.LoaderBehaviourEnum loaderBehaviour = saxLoader.getRelationLoaderBehaviour();
			ICFBamRelationEditObj editRelation = null;
			ICFBamRelationObj origRelation = (ICFBamRelationObj)schemaObj.getRelationTableObj().readRelationByUNameIdx( refFromTable.getRequiredTenantId(),
			refFromTable.getRequiredId(),
			editBuff.getRequiredName() );
			if( origRelation == null ) {
				editRelation = editBuff;
			}
			else {
				switch( loaderBehaviour ) {
					case Insert:
						break;
					case Update:
						editRelation = (ICFBamRelationEditObj)origRelation.beginEdit();
						editRelation.setRequiredName( editBuff.getRequiredName() );
						editRelation.setOptionalShortName( editBuff.getOptionalShortName() );
						editRelation.setOptionalLabel( editBuff.getOptionalLabel() );
						editRelation.setOptionalShortDescription( editBuff.getOptionalShortDescription() );
						editRelation.setOptionalDescription( editBuff.getOptionalDescription() );
						editRelation.setRequiredRelationType( editBuff.getRequiredRelationType() );
						editRelation.setOptionalDbName( editBuff.getOptionalDbName() );
						editRelation.setOptionalSuffix( editBuff.getOptionalSuffix() );
						editRelation.setRequiredIsRequired( editBuff.getRequiredIsRequired() );
						editRelation.setRequiredIsXsdContainer( editBuff.getRequiredIsXsdContainer() );
						editRelation.setRequiredIsLateResolver( editBuff.getRequiredIsLateResolver() );
						editRelation.setRequiredAllowAddendum( editBuff.getRequiredAllowAddendum() );
						editRelation.setOptionalLookupDefSchema( editBuff.getOptionalLookupDefSchema() );
						editRelation.setRequiredLookupFromIndex( editBuff.getRequiredLookupFromIndex() );
						editRelation.setRequiredLookupToTable( editBuff.getRequiredLookupToTable() );
						editRelation.setRequiredLookupToIndex( editBuff.getRequiredLookupToIndex() );
						editRelation.setOptionalLookupNarrowed( editBuff.getOptionalLookupNarrowed() );
						break;
					case Replace:
						editRelation = (ICFBamRelationEditObj)origRelation.beginEdit();
						editRelation.deleteInstance();
						editRelation = null;
						origRelation = null;
						editRelation = editBuff;
						break;
				}
			}

			if( editRelation != null ) {
				if( origRelation != null ) {
					editRelation.update();
				}
				else {
					origRelation = (ICFBamRelationObj)editRelation.create();
				}
				editRelation = null;
			}

			curContext.putNamedValue( "Object", origRelation );
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
