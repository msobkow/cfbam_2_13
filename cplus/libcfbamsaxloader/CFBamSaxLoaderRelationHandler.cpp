
// Description: C++18 XML SAX2 Element Handler implementation for Relation

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

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamsaxloader/CFBamSaxLoader.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderRelationHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamSaxLoaderRelationHandler::CLASS_NAME( "CFBamSaxLoaderRelationHandler" );
	const std::string CFBamSaxLoaderRelationHandler::S_True( "true" );
	const std::string CFBamSaxLoaderRelationHandler::S_False( "false" );
	const std::string CFBamSaxLoaderRelationHandler::S_Yes( "yes" );
	const std::string CFBamSaxLoaderRelationHandler::S_No( "no" );
	const std::string CFBamSaxLoaderRelationHandler::S_0( "0" );
	const std::string CFBamSaxLoaderRelationHandler::S_1( "1" );

	CFBamSaxLoaderRelationHandler::CFBamSaxLoaderRelationHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxLoaderRelationHandler::~CFBamSaxLoaderRelationHandler() {
	}

	void CFBamSaxLoaderRelationHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		const static std::string S_ProcName( "startElement" );
		const static std::string S_SpecificallyId( "Id" );
		const static std::string S_Object( "object" );
		const static std::string S_Uri( "uri" );
		const static std::string S_LocalName( "localname" );
		const static std::string S_GetParser( "getParser()" );
		const static std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		const static std::string S_SchemaLocation( "schemaLocation" );
		const static std::string S_SaxLoaderUseTenant( "saxLoader->useTenant" );
		const static std::string S_QName( "qname" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_Tenant( "Tenant" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_RelationType( "RelationType" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_FromIndexId( "FromIndexId" );
		static const std::string S_ToTableId( "ToTableId" );
		static const std::string S_ToIndexId( "ToIndexId" );
		static const std::string S_IsRequired( "IsRequired" );
		static const std::string S_IsXsdContainer( "IsXsdContainer" );
		static const std::string S_IsLateResolver( "IsLateResolver" );
		static const std::string S_AllowAddendum( "AllowAddendum" );
		static const std::string S_NarrowedTenantId( "NarrowedTenantId" );
		static const std::string S_NarrowedId( "NarrowedId" );
		static const std::string S_DefSchema( "DefSchema" );
		static const std::string S_FromTable( "FromTable" );
		static const std::string S_Columns( "Columns" );
		static const std::string S_PopDep( "PopDep" );
		static const std::string S_RelTenant( "RelTenant" );
		static const std::string S_FromIndex( "FromIndex" );
		static const std::string S_ToTable( "ToTable" );
		static const std::string S_ToIndex( "ToIndex" );
		static const std::string S_Narrowed( "Narrowed" );
		CFLIB_EXCEPTION_DECLINFO
		const XMLCh* xmlchLocalName = NULL;
		char* cLocalName = NULL;
		std::string* attrLocalName = NULL;
		const XMLCh* xmlchValue = NULL;
		char* cValue = NULL;
		std::string* cppValue = NULL;
		char* cUri = NULL;
		char* cQName = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		cfbam::CFBamSaxLoader* saxLoader = NULL;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum loaderBehaviour;
		cfbam::ICFBamSchemaObj* schemaObj = NULL;
		cfbam::ICFBamRelationObj* tmpBuff = NULL;
		cfbam::ICFBamRelationEditObj* editBuff = NULL;
		cfbam::ICFBamRelationEditObj* editRelation = NULL;
		cfbam::ICFBamRelationObj* origRelation = NULL;
		cflib::CFLibXmlCoreContext* parentContext = NULL;
		cflib::ICFLibAnyObj* scopeObj = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// Scope Attributes
		// Scope References
		cfsec::ICFSecTenantObj* refTenant = NULL;
		// Relation Attributes
		std::string* attrName = NULL;
		std::string* attrShortName = NULL;
		std::string* attrLabel = NULL;
		std::string* attrShortDescription = NULL;
		std::string* attrDescription = NULL;
		std::string* attrRelationType = NULL;
		std::string* attrDbName = NULL;
		std::string* attrSuffix = NULL;
		std::string* attrIsRequired = NULL;
		std::string* attrIsXsdContainer = NULL;
		std::string* attrIsLateResolver = NULL;
		std::string* attrAllowAddendum = NULL;
		std::string* attrDefSchema = NULL;
		std::string* attrFromIndex = NULL;
		std::string* attrToTable = NULL;
		std::string* attrToIndex = NULL;
		std::string* attrNarrowed = NULL;
		// Relation References
		cfbam::ICFBamSchemaDefObj* refDefSchema = NULL;
		cfbam::ICFBamTableObj* refFromTable = NULL;
		cfsec::ICFSecTenantObj* refRelTenant = NULL;
		cfbam::ICFBamIndexObj* refFromIndex = NULL;
		cfbam::ICFBamTableObj* refToTable = NULL;
		cfbam::ICFBamIndexObj* refToIndex = NULL;
		cfbam::ICFBamRelationObj* refNarrowed = NULL;
		std::string* natName = NULL;
		std::string* natShortName = NULL;
		std::string* natLabel = NULL;
		std::string* natShortDescription = NULL;
		std::string* natDescription = NULL;
		cfbam::ICFBamSchema::RelationTypeEnum natRelationType;
		std::string* natDbName = NULL;
		std::string* natSuffix = NULL;
		bool natIsRequired;
		bool natIsXsdContainer;
		bool natIsLateResolver;
		bool natAllowAddendum;
		try {
			if( ( uri == NULL ) || ( *uri == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					1,
					S_Uri );
			}
			if( ( localname == NULL ) || ( *localname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					2,
					S_LocalName );
			}
			if( ( qname == NULL ) || ( *qname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					3,
					S_QName );
			}
			cUri = xercesc::XMLString::transcode( uri );
			cLocalName = xercesc::XMLString::transcode( localname );
			cQName = xercesc::XMLString::transcode( qname );
			std::string cppUri( cUri );
			std::string cppLocalName( cLocalName );
			std::string cppQName( cQName );
			xercesc::XMLString::release( &cUri );
			cUri = NULL;
			xercesc::XMLString::release( &cLocalName );
			cLocalName = NULL;
			xercesc::XMLString::release( &cQName );
			cQName = NULL;
			if( cppQName != cfbam::CFBamRelationBuff::GENDEFNAME ) {
				std::string Msg( "Expected QName to be '" + cfbam::CFBamRelationBuff::GENDEFNAME + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
			// Attribute Extraction
			size_t numAttrs;
			size_t idxAttr;
			saxLoader = dynamic_cast<cfbam::CFBamSaxLoader*>( getParser() );
			if( saxLoader == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParser );
			}

			schemaObj = dynamic_cast<cfbam::ICFBamSchemaObj*>( saxLoader->getSchemaObj() );
			if( schemaObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParserGetSchemaObj );
			}

			// Instantiate an edit buffer for the parsed information
			tmpBuff = schemaObj->getRelationTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamRelationEditObj*>( tmpBuff->beginEdit() );

			// Extract Attributes
			numAttrs = attrs.getLength();
			for( idxAttr = 0; idxAttr < numAttrs; idxAttr++ ) {
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				xmlchLocalName = attrs.getLocalName( idxAttr );
				if( xmlchLocalName == NULL ) {
					continue;
				}
				cLocalName = xercesc::XMLString::transcode( xmlchLocalName );
				attrLocalName = new std::string( cLocalName );
				xercesc::XMLString::release( &cLocalName );
				cLocalName = NULL;
				xmlchValue = attrs.getValue( idxAttr );
				if( xmlchValue == NULL ) {
					cppValue = NULL;
				}
				else {
					cValue = xercesc::XMLString::transcode( xmlchValue );
					cppValue = new std::string( cValue );
					xercesc::XMLString::release( &cValue );
					cValue = NULL;
				}
				if( *attrLocalName == S_SpecificallyId ) {
					if( attrId != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrId = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_Name ) {
					if( attrName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrName = new std::string( *cppValue );
					}
					else {
						attrName = NULL;
					}
				}
				else if( *attrLocalName == S_ShortName ) {
					if( attrShortName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrShortName = new std::string( *cppValue );
					}
					else {
						attrShortName = NULL;
					}
				}
				else if( *attrLocalName == S_Label ) {
					if( attrLabel != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrLabel = new std::string( *cppValue );
					}
					else {
						attrLabel = NULL;
					}
				}
				else if( *attrLocalName == S_ShortDescription ) {
					if( attrShortDescription != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrShortDescription = new std::string( *cppValue );
					}
					else {
						attrShortDescription = NULL;
					}
				}
				else if( *attrLocalName == S_Description ) {
					if( attrDescription != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrDescription = new std::string( *cppValue );
					}
					else {
						attrDescription = NULL;
					}
				}
				else if( *attrLocalName == S_RelationType ) {
					if( attrRelationType != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrRelationType = new std::string( *cppValue );
					}
					else {
						attrRelationType = NULL;
					}
				}
				else if( *attrLocalName == S_DbName ) {
					if( attrDbName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrDbName = new std::string( *cppValue );
					}
					else {
						attrDbName = NULL;
					}
				}
				else if( *attrLocalName == S_Suffix ) {
					if( attrSuffix != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrSuffix = new std::string( *cppValue );
					}
					else {
						attrSuffix = NULL;
					}
				}
				else if( *attrLocalName == S_IsRequired ) {
					if( attrIsRequired != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsRequired = new std::string( *cppValue );
					}
					else {
						attrIsRequired = NULL;
					}
				}
				else if( *attrLocalName == S_IsXsdContainer ) {
					if( attrIsXsdContainer != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsXsdContainer = new std::string( *cppValue );
					}
					else {
						attrIsXsdContainer = NULL;
					}
				}
				else if( *attrLocalName == S_IsLateResolver ) {
					if( attrIsLateResolver != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsLateResolver = new std::string( *cppValue );
					}
					else {
						attrIsLateResolver = NULL;
					}
				}
				else if( *attrLocalName == S_AllowAddendum ) {
					if( attrAllowAddendum != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrAllowAddendum = new std::string( *cppValue );
					}
					else {
						attrAllowAddendum = NULL;
					}
				}
				else if( *attrLocalName == S_DefSchema ) {
					if( attrDefSchema != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrDefSchema = new std::string( *cppValue );
					}
					else {
						attrDefSchema = NULL;
					}
				}
				else if( *attrLocalName == S_FromIndex ) {
					if( attrFromIndex != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrFromIndex = new std::string( *cppValue );
					}
					else {
						attrFromIndex = NULL;
					}
				}
				else if( *attrLocalName == S_ToTable ) {
					if( attrToTable != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrToTable = new std::string( *cppValue );
					}
					else {
						attrToTable = NULL;
					}
				}
				else if( *attrLocalName == S_ToIndex ) {
					if( attrToIndex != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrToIndex = new std::string( *cppValue );
					}
					else {
						attrToIndex = NULL;
					}
				}
				else if( *attrLocalName == S_Narrowed ) {
					if( attrNarrowed != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrNarrowed = new std::string( *cppValue );
					}
					else {
						attrNarrowed = NULL;
					}
				}
				else if( *attrLocalName == S_SchemaLocation ) {
					// ignored
				}
				else {
					throw cflib::CFLibUnrecognizedAttributeException( CLASS_NAME,
						S_ProcName,
						getParser()->getLocationInfo(),
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
			}

			// Ensure that required attributes have values
			if( attrName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}
			if( ( attrRelationType == NULL ) || ( attrRelationType->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_RelationType );
			}
			if( ( attrIsRequired == NULL ) || ( attrIsRequired->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsRequired );
			}
			if( ( attrIsXsdContainer == NULL ) || ( attrIsXsdContainer->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsXsdContainer );
			}
			if( ( attrIsLateResolver == NULL ) || ( attrIsLateResolver->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsLateResolver );
			}
			if( ( attrAllowAddendum == NULL ) || ( attrAllowAddendum->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_AllowAddendum );
			}
			if( ( attrFromIndex == NULL ) || ( attrFromIndex->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_FromIndex );
			}
			if( ( attrToTable == NULL ) || ( attrToTable->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ToTable );
			}
			if( ( attrToIndex == NULL ) || ( attrToIndex->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ToIndex );
			}

			// Save named attributes to context
			curContext = getParser()->getCurContext();
			if( curContext == NULL ) {
				static const std::string S_CurContext( "getParser()->getCurContext" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CurContext );
			}
			if( attrId != NULL ) {
				curContext->putNamedTag( S_SpecificallyId, *attrId );
			}
			if( attrName != NULL ) {
				curContext->putNamedTag( S_Name, *attrName );
			}
			if( attrShortName != NULL ) {
				curContext->putNamedTag( S_ShortName, *attrShortName );
			}
			if( attrLabel != NULL ) {
				curContext->putNamedTag( S_Label, *attrLabel );
			}
			if( attrShortDescription != NULL ) {
				curContext->putNamedTag( S_ShortDescription, *attrShortDescription );
			}
			if( attrDescription != NULL ) {
				curContext->putNamedTag( S_Description, *attrDescription );
			}
			if( attrRelationType != NULL ) {
				curContext->putNamedTag( S_RelationType, *attrRelationType );
			}
			if( attrDbName != NULL ) {
				curContext->putNamedTag( S_DbName, *attrDbName );
			}
			if( attrSuffix != NULL ) {
				curContext->putNamedTag( S_Suffix, *attrSuffix );
			}
			if( attrIsRequired != NULL ) {
				curContext->putNamedTag( S_IsRequired, *attrIsRequired );
			}
			if( attrIsXsdContainer != NULL ) {
				curContext->putNamedTag( S_IsXsdContainer, *attrIsXsdContainer );
			}
			if( attrIsLateResolver != NULL ) {
				curContext->putNamedTag( S_IsLateResolver, *attrIsLateResolver );
			}
			if( attrAllowAddendum != NULL ) {
				curContext->putNamedTag( S_AllowAddendum, *attrAllowAddendum );
			}
			if( attrDefSchema != NULL ) {
				curContext->putNamedTag( S_DefSchema, *attrDefSchema );
			}
			if( attrFromIndex != NULL ) {
				curContext->putNamedTag( S_FromIndex, *attrFromIndex );
			}
			if( attrToTable != NULL ) {
				curContext->putNamedTag( S_ToTable, *attrToTable );
			}
			if( attrToIndex != NULL ) {
				curContext->putNamedTag( S_ToIndex, *attrToIndex );
			}
			if( attrNarrowed != NULL ) {
				curContext->putNamedTag( S_Narrowed, *attrNarrowed );
			}

			// Convert string attributes to native C++18 types
			// and apply the converted attributes to the editBuff

			cflib::CFLibNullableInt32 natId;
			if( ( attrId != NULL ) && ( attrId->length() > 0 ) ) {
				natId = cflib::CFLibXmlUtil::evalInt32( *attrId );
			}
			else {
				natId.setNull();
			}
			if( attrName != NULL ) {
				natName = new std::string( *attrName );
			}
			else {
				natName = NULL;
			}
			if( natName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}
			editBuff->setRequiredName( *natName );

			if( attrShortName != NULL ) {
				natShortName = new std::string( *attrShortName );
			}
			else {
				natShortName = NULL;
			}
			if( natShortName != NULL ) {
				editBuff->setOptionalShortNameValue( *natShortName );
			}
			else {
				editBuff->setOptionalShortNameNull();
			}

			if( attrLabel != NULL ) {
				natLabel = new std::string( *attrLabel );
			}
			else {
				natLabel = NULL;
			}
			if( natLabel != NULL ) {
				editBuff->setOptionalLabelValue( *natLabel );
			}
			else {
				editBuff->setOptionalLabelNull();
			}

			if( attrShortDescription != NULL ) {
				natShortDescription = new std::string( *attrShortDescription );
			}
			else {
				natShortDescription = NULL;
			}
			if( natShortDescription != NULL ) {
				editBuff->setOptionalShortDescriptionValue( *natShortDescription );
			}
			else {
				editBuff->setOptionalShortDescriptionNull();
			}

			if( attrDescription != NULL ) {
				natDescription = new std::string( *attrDescription );
			}
			else {
				natDescription = NULL;
			}
			if( natDescription != NULL ) {
				editBuff->setOptionalDescriptionValue( *natDescription );
			}
			else {
				editBuff->setOptionalDescriptionNull();
			}

			cfbam::ICFBamSchema::RelationTypeEnum* pRelationType = cfbam::ICFBamSchema::parseRelationTypeEnum( attrRelationType );
			if( pRelationType != NULL ) {
				natRelationType = *pRelationType;
			}
			else {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_RelationType );
			}
			editBuff->setRequiredRelationType( natRelationType );

			if( attrDbName != NULL ) {
				natDbName = new std::string( *attrDbName );
			}
			else {
				natDbName = NULL;
			}
			if( natDbName != NULL ) {
				editBuff->setOptionalDbNameValue( *natDbName );
			}
			else {
				editBuff->setOptionalDbNameNull();
			}

			if( attrSuffix != NULL ) {
				natSuffix = new std::string( *attrSuffix );
			}
			else {
				natSuffix = NULL;
			}
			if( natSuffix != NULL ) {
				editBuff->setOptionalSuffixValue( *natSuffix );
			}
			else {
				editBuff->setOptionalSuffixNull();
			}

			if( ( *attrIsRequired == S_True ) || ( *attrIsRequired == S_Yes ) || ( *attrIsRequired == S_1 ) ) {
				natIsRequired = true;
			}
			else if( ( *attrIsRequired == S_False ) || ( *attrIsRequired == S_No ) || ( *attrIsRequired == S_0 ) ) {
				natIsRequired = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsRequired,
					*attrIsRequired );
			}
			editBuff->setRequiredIsRequired( natIsRequired );

			if( ( *attrIsXsdContainer == S_True ) || ( *attrIsXsdContainer == S_Yes ) || ( *attrIsXsdContainer == S_1 ) ) {
				natIsXsdContainer = true;
			}
			else if( ( *attrIsXsdContainer == S_False ) || ( *attrIsXsdContainer == S_No ) || ( *attrIsXsdContainer == S_0 ) ) {
				natIsXsdContainer = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsXsdContainer,
					*attrIsXsdContainer );
			}
			editBuff->setRequiredIsXsdContainer( natIsXsdContainer );

			if( ( *attrIsLateResolver == S_True ) || ( *attrIsLateResolver == S_Yes ) || ( *attrIsLateResolver == S_1 ) ) {
				natIsLateResolver = true;
			}
			else if( ( *attrIsLateResolver == S_False ) || ( *attrIsLateResolver == S_No ) || ( *attrIsLateResolver == S_0 ) ) {
				natIsLateResolver = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsLateResolver,
					*attrIsLateResolver );
			}
			editBuff->setRequiredIsLateResolver( natIsLateResolver );

			if( ( *attrAllowAddendum == S_True ) || ( *attrAllowAddendum == S_Yes ) || ( *attrAllowAddendum == S_1 ) ) {
				natAllowAddendum = true;
			}
			else if( ( *attrAllowAddendum == S_False ) || ( *attrAllowAddendum == S_No ) || ( *attrAllowAddendum == S_0 ) ) {
				natAllowAddendum = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_AllowAddendum,
					*attrAllowAddendum );
			}
			editBuff->setRequiredAllowAddendum( natAllowAddendum );

			// Get the scope/container object

			parentContext = curContext->getPrevContext();
			if( parentContext != NULL ) {
				scopeObj = parentContext->getObj();
			}
			else {
				scopeObj = NULL;
			}

			// Resolve and apply required Container reference

			if( scopeObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					"scopeObj" );
			}
			else if( scopeObj->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				refFromTable = dynamic_cast<cfbam::ICFBamTableObj*>( scopeObj );
				editBuff->setRequiredContainerFromTable( refFromTable );
			refRelTenant = editBuff->getRequiredOwnerRelTenant();
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamTableObj" );
			}

			// Resolve and apply Owner reference

			if( refRelTenant == NULL ) {
				if( scopeObj->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
					refRelTenant = dynamic_cast<cfsec::ICFSecTenantObj*>( scopeObj );
					editBuff->setRequiredOwnerRelTenant( refRelTenant );
				}
				else {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Owner<RelTenant>" );
				}
			}

			refTenant = dynamic_cast<cfsec::ICFSecTenantObj*>( refRelTenant );
			// Lookup refDefSchema by qualified name
			if( ( attrDefSchema != NULL ) && ( attrDefSchema->length() > 0 ) ) {
				refDefSchema = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( editBuff->getNamedObject( schemaObj->getSchemaDefTableObj()->getObjQualifyingClassCode(),
					*attrDefSchema ) );
				if( refDefSchema == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve DefSchema reference qualified name \"" + *attrDefSchema + "\" to table SchemaDef" );
				}
			}
			else {
				refDefSchema = NULL;
			}
			editBuff->setOptionalLookupDefSchema( refDefSchema );

			// Lookup refFromIndex by qualified name
			if( ( attrFromIndex != NULL ) && ( attrFromIndex->length() > 0 ) ) {
				refFromIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( editBuff->getNamedObject( schemaObj->getIndexTableObj()->getObjQualifyingClassCode(),
					*attrFromIndex ) );
				if( refFromIndex == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve FromIndex reference qualified name \"" + *attrFromIndex + "\" to table Index" );
				}
			}
			else {
				refFromIndex = NULL;
			}
			editBuff->setRequiredLookupFromIndex( refFromIndex );

			// Lookup refToTable by qualified name
			if( ( attrToTable != NULL ) && ( attrToTable->length() > 0 ) ) {
				refToTable = dynamic_cast<cfbam::ICFBamTableObj*>( editBuff->getNamedObject( schemaObj->getTableTableObj()->getObjQualifyingClassCode(),
					*attrToTable ) );
				if( refToTable == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve ToTable reference qualified name \"" + *attrToTable + "\" to table Table" );
				}
			}
			else {
				refToTable = NULL;
			}
			editBuff->setRequiredLookupToTable( refToTable );

			// Lookup refToIndex by qualified name
			if( ( attrToIndex != NULL ) && ( attrToIndex->length() > 0 ) ) {
				refToIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( editBuff->getNamedObject( schemaObj->getIndexTableObj()->getObjQualifyingClassCode(),
					*attrToIndex ) );
				if( refToIndex == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve ToIndex reference qualified name \"" + *attrToIndex + "\" to table Index" );
				}
			}
			else {
				refToIndex = NULL;
			}
			editBuff->setRequiredLookupToIndex( refToIndex );

			// Lookup refNarrowed by qualified name
			if( ( attrNarrowed != NULL ) && ( attrNarrowed->length() > 0 ) ) {
				refNarrowed = dynamic_cast<cfbam::ICFBamRelationObj*>( editBuff->getNamedObject( schemaObj->getRelationTableObj()->getObjQualifyingClassCode(),
					*attrNarrowed ) );
				if( refNarrowed == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve Narrowed reference qualified name \"" + *attrNarrowed + "\" to table Relation" );
				}
			}
			else {
				refNarrowed = NULL;
			}
			editBuff->setOptionalLookupNarrowed( refNarrowed );

			loaderBehaviour = saxLoader->getRelationLoaderBehaviour();
			origRelation = dynamic_cast<cfbam::ICFBamRelationObj*>( schemaObj->getRelationTableObj()->readRelationByUNameIdx( refFromTable->getRequiredTenantId(),
			refFromTable->getRequiredId(),
			editBuff->getRequiredName() ) );
			if( origRelation == NULL ) {
				editRelation = editBuff;
				editBuff = NULL;
			}
			else {
				switch( loaderBehaviour ) {
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert:
						editRelation = NULL;
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update:
						editRelation = dynamic_cast<cfbam::ICFBamRelationEditObj*>( origRelation->beginEdit() );
						editRelation->setRequiredName( editBuff->getRequiredName() );
						if( editBuff->isOptionalShortNameNull() ) {
							editRelation->setOptionalShortNameNull();
						}
						else {
							editRelation->setOptionalShortNameValue( editBuff->getOptionalShortNameValue() );
						}
						if( editBuff->isOptionalLabelNull() ) {
							editRelation->setOptionalLabelNull();
						}
						else {
							editRelation->setOptionalLabelValue( editBuff->getOptionalLabelValue() );
						}
						if( editBuff->isOptionalShortDescriptionNull() ) {
							editRelation->setOptionalShortDescriptionNull();
						}
						else {
							editRelation->setOptionalShortDescriptionValue( editBuff->getOptionalShortDescriptionValue() );
						}
						if( editBuff->isOptionalDescriptionNull() ) {
							editRelation->setOptionalDescriptionNull();
						}
						else {
							editRelation->setOptionalDescriptionValue( editBuff->getOptionalDescriptionValue() );
						}
						editRelation->setRequiredRelationType( editBuff->getRequiredRelationType() );
						if( editBuff->isOptionalDbNameNull() ) {
							editRelation->setOptionalDbNameNull();
						}
						else {
							editRelation->setOptionalDbNameValue( editBuff->getOptionalDbNameValue() );
						}
						if( editBuff->isOptionalSuffixNull() ) {
							editRelation->setOptionalSuffixNull();
						}
						else {
							editRelation->setOptionalSuffixValue( editBuff->getOptionalSuffixValue() );
						}
						editRelation->setRequiredIsRequired( editBuff->getRequiredIsRequired() );
						editRelation->setRequiredIsXsdContainer( editBuff->getRequiredIsXsdContainer() );
						editRelation->setRequiredIsLateResolver( editBuff->getRequiredIsLateResolver() );
						editRelation->setRequiredAllowAddendum( editBuff->getRequiredAllowAddendum() );
						editRelation->setOptionalLookupDefSchema( editBuff->getOptionalLookupDefSchema() );
						editRelation->setRequiredLookupFromIndex( editBuff->getRequiredLookupFromIndex() );
						editRelation->setRequiredLookupToTable( editBuff->getRequiredLookupToTable() );
						editRelation->setRequiredLookupToIndex( editBuff->getRequiredLookupToIndex() );
						editRelation->setOptionalLookupNarrowed( editBuff->getOptionalLookupNarrowed() );
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace:
						editRelation = dynamic_cast<cfbam::ICFBamRelationEditObj*>( origRelation->beginEdit() );
						editRelation->deleteInstance();
						editRelation = NULL;
						origRelation = NULL;
						editRelation = editBuff;
						editBuff = NULL;
						break;
				}
			}

			if( editRelation != NULL ) {
				if( origRelation != NULL ) {
					editRelation->update();
				}
				else {
					origRelation = dynamic_cast<cfbam::ICFBamRelationObj*>( editRelation->create() );
				}
				editRelation = NULL;
			}

			if( ! tmpBuff->getIsNew() ) {
				tmpBuff = NULL;
			}

			curContext->setObj( origRelation );

		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( attrLocalName != NULL ) {
			delete attrLocalName;
			attrLocalName = NULL;
		}

		if( cppValue != NULL ) {
			delete cppValue;
			cppValue = NULL;
		}

		if( natName != NULL ) {
			delete natName;
			natName = NULL;
		}

		if( natShortName != NULL ) {
			delete natShortName;
			natShortName = NULL;
		}

		if( natLabel != NULL ) {
			delete natLabel;
			natLabel = NULL;
		}

		if( natShortDescription != NULL ) {
			delete natShortDescription;
			natShortDescription = NULL;
		}

		if( natDescription != NULL ) {
			delete natDescription;
			natDescription = NULL;
		}

		if( natDbName != NULL ) {
			delete natDbName;
			natDbName = NULL;
		}

		if( natSuffix != NULL ) {
			delete natSuffix;
			natSuffix = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrShortName != NULL ) {
			delete attrShortName;
			attrShortName = NULL;
		}

		if( attrLabel != NULL ) {
			delete attrLabel;
			attrLabel = NULL;
		}

		if( attrShortDescription != NULL ) {
			delete attrShortDescription;
			attrShortDescription = NULL;
		}

		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}

		if( attrRelationType != NULL ) {
			delete attrRelationType;
			attrRelationType = NULL;
		}

		if( attrDbName != NULL ) {
			delete attrDbName;
			attrDbName = NULL;
		}

		if( attrSuffix != NULL ) {
			delete attrSuffix;
			attrSuffix = NULL;
		}

		if( attrIsRequired != NULL ) {
			delete attrIsRequired;
			attrIsRequired = NULL;
		}

		if( attrIsXsdContainer != NULL ) {
			delete attrIsXsdContainer;
			attrIsXsdContainer = NULL;
		}

		if( attrIsLateResolver != NULL ) {
			delete attrIsLateResolver;
			attrIsLateResolver = NULL;
		}

		if( attrAllowAddendum != NULL ) {
			delete attrAllowAddendum;
			attrAllowAddendum = NULL;
		}

		if( attrDefSchema != NULL ) {
			delete attrDefSchema;
			attrDefSchema = NULL;
		}

		if( attrFromIndex != NULL ) {
			delete attrFromIndex;
			attrFromIndex = NULL;
		}

		if( attrToTable != NULL ) {
			delete attrToTable;
			attrToTable = NULL;
		}

		if( attrToIndex != NULL ) {
			delete attrToIndex;
			attrToIndex = NULL;
		}

		if( attrNarrowed != NULL ) {
			delete attrNarrowed;
			attrNarrowed = NULL;
		}

		if( editRelation != NULL ) {
			editRelation->endEdit();
			editRelation = NULL;
		}

		if( editBuff != NULL ) {
			editBuff->endEdit();
			editBuff = NULL;
		}

		if( tmpBuff != NULL ) {
			if( tmpBuff->getIsNew() ) {
				delete tmpBuff;
			}
			tmpBuff = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void CFBamSaxLoaderRelationHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
