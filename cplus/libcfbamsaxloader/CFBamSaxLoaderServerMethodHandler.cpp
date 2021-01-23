
// Description: C++18 XML SAX2 Element Handler implementation for ServerMethod

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

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamsaxloader/CFBamSaxLoader.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderServerMethodHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamSaxLoaderServerMethodHandler::CLASS_NAME( "CFBamSaxLoaderServerMethodHandler" );
	const std::string CFBamSaxLoaderServerMethodHandler::S_True( "true" );
	const std::string CFBamSaxLoaderServerMethodHandler::S_False( "false" );
	const std::string CFBamSaxLoaderServerMethodHandler::S_Yes( "yes" );
	const std::string CFBamSaxLoaderServerMethodHandler::S_No( "no" );
	const std::string CFBamSaxLoaderServerMethodHandler::S_0( "0" );
	const std::string CFBamSaxLoaderServerMethodHandler::S_1( "1" );

	CFBamSaxLoaderServerMethodHandler::CFBamSaxLoaderServerMethodHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxLoaderServerMethodHandler::~CFBamSaxLoaderServerMethodHandler() {
	}

	void CFBamSaxLoaderServerMethodHandler::startElement (
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
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_IsInstanceMethod( "IsInstanceMethod" );
		static const std::string S_IsServerOnly( "IsServerOnly" );
		static const std::string S_JMethodBody( "JMethodBody" );
		static const std::string S_CppMethodBody( "CppMethodBody" );
		static const std::string S_CsMethodBody( "CsMethodBody" );
		static const std::string S_DefSchema( "DefSchema" );
		static const std::string S_ForTable( "ForTable" );
		static const std::string S_Params( "Params" );
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
		cfbam::ICFBamServerMethodObj* tmpBuff = NULL;
		cfbam::ICFBamServerMethodEditObj* editBuff = NULL;
		cfbam::ICFBamServerMethodEditObj* editServerMethod = NULL;
		cfbam::ICFBamServerMethodObj* origServerMethod = NULL;
		cflib::CFLibXmlCoreContext* parentContext = NULL;
		cflib::ICFLibAnyObj* scopeObj = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// Scope Attributes
		// Scope References
		cfsec::ICFSecTenantObj* refTenant = NULL;
		// ServerMethod Attributes
		std::string* attrName = NULL;
		std::string* attrShortName = NULL;
		std::string* attrLabel = NULL;
		std::string* attrShortDescription = NULL;
		std::string* attrDescription = NULL;
		std::string* attrSuffix = NULL;
		std::string* attrIsInstanceMethod = NULL;
		std::string* attrIsServerOnly = NULL;
		std::string* attrJMethodBody = NULL;
		std::string* attrCppMethodBody = NULL;
		std::string* attrCsMethodBody = NULL;
		std::string* attrDefSchema = NULL;
		// ServerMethod References
		cfbam::ICFBamSchemaDefObj* refDefSchema = NULL;
		cfbam::ICFBamTableObj* refForTable = NULL;
		std::string* natName = NULL;
		std::string* natShortName = NULL;
		std::string* natLabel = NULL;
		std::string* natShortDescription = NULL;
		std::string* natDescription = NULL;
		std::string* natSuffix = NULL;
		bool natIsInstanceMethod;
		bool natIsServerOnly;
		std::string* natJMethodBody = NULL;
		std::string* natCppMethodBody = NULL;
		std::string* natCsMethodBody = NULL;
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
			if( cppQName != cfbam::CFBamServerMethodBuff::GENDEFNAME ) {
				std::string Msg( "Expected QName to be '" + cfbam::CFBamServerMethodBuff::GENDEFNAME + "'" );
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
			tmpBuff = schemaObj->getServerMethodTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamServerMethodEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_IsInstanceMethod ) {
					if( attrIsInstanceMethod != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsInstanceMethod = new std::string( *cppValue );
					}
					else {
						attrIsInstanceMethod = NULL;
					}
				}
				else if( *attrLocalName == S_IsServerOnly ) {
					if( attrIsServerOnly != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsServerOnly = new std::string( *cppValue );
					}
					else {
						attrIsServerOnly = NULL;
					}
				}
				else if( *attrLocalName == S_JMethodBody ) {
					if( attrJMethodBody != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrJMethodBody = new std::string( *cppValue );
					}
					else {
						attrJMethodBody = NULL;
					}
				}
				else if( *attrLocalName == S_CppMethodBody ) {
					if( attrCppMethodBody != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrCppMethodBody = new std::string( *cppValue );
					}
					else {
						attrCppMethodBody = NULL;
					}
				}
				else if( *attrLocalName == S_CsMethodBody ) {
					if( attrCsMethodBody != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrCsMethodBody = new std::string( *cppValue );
					}
					else {
						attrCsMethodBody = NULL;
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
			if( ( attrIsInstanceMethod == NULL ) || ( attrIsInstanceMethod->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsInstanceMethod );
			}
			if( ( attrIsServerOnly == NULL ) || ( attrIsServerOnly->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsServerOnly );
			}
			if( attrJMethodBody == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_JMethodBody );
			}
			if( attrCppMethodBody == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CppMethodBody );
			}
			if( attrCsMethodBody == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CsMethodBody );
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
			if( attrSuffix != NULL ) {
				curContext->putNamedTag( S_Suffix, *attrSuffix );
			}
			if( attrIsInstanceMethod != NULL ) {
				curContext->putNamedTag( S_IsInstanceMethod, *attrIsInstanceMethod );
			}
			if( attrIsServerOnly != NULL ) {
				curContext->putNamedTag( S_IsServerOnly, *attrIsServerOnly );
			}
			if( attrJMethodBody != NULL ) {
				curContext->putNamedTag( S_JMethodBody, *attrJMethodBody );
			}
			if( attrCppMethodBody != NULL ) {
				curContext->putNamedTag( S_CppMethodBody, *attrCppMethodBody );
			}
			if( attrCsMethodBody != NULL ) {
				curContext->putNamedTag( S_CsMethodBody, *attrCsMethodBody );
			}
			if( attrDefSchema != NULL ) {
				curContext->putNamedTag( S_DefSchema, *attrDefSchema );
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

			if( ( *attrIsInstanceMethod == S_True ) || ( *attrIsInstanceMethod == S_Yes ) || ( *attrIsInstanceMethod == S_1 ) ) {
				natIsInstanceMethod = true;
			}
			else if( ( *attrIsInstanceMethod == S_False ) || ( *attrIsInstanceMethod == S_No ) || ( *attrIsInstanceMethod == S_0 ) ) {
				natIsInstanceMethod = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsInstanceMethod,
					*attrIsInstanceMethod );
			}
			editBuff->setRequiredIsInstanceMethod( natIsInstanceMethod );

			if( ( *attrIsServerOnly == S_True ) || ( *attrIsServerOnly == S_Yes ) || ( *attrIsServerOnly == S_1 ) ) {
				natIsServerOnly = true;
			}
			else if( ( *attrIsServerOnly == S_False ) || ( *attrIsServerOnly == S_No ) || ( *attrIsServerOnly == S_0 ) ) {
				natIsServerOnly = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsServerOnly,
					*attrIsServerOnly );
			}
			editBuff->setRequiredIsServerOnly( natIsServerOnly );

			if( attrJMethodBody != NULL ) {
				natJMethodBody = new std::string( *attrJMethodBody );
			}
			else {
				natJMethodBody = NULL;
			}
			if( natJMethodBody == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_JMethodBody );
			}
			editBuff->setRequiredJMethodBody( *natJMethodBody );

			if( attrCppMethodBody != NULL ) {
				natCppMethodBody = new std::string( *attrCppMethodBody );
			}
			else {
				natCppMethodBody = NULL;
			}
			if( natCppMethodBody == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CppMethodBody );
			}
			editBuff->setRequiredCppMethodBody( *natCppMethodBody );

			if( attrCsMethodBody != NULL ) {
				natCsMethodBody = new std::string( *attrCsMethodBody );
			}
			else {
				natCsMethodBody = NULL;
			}
			if( natCsMethodBody == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CsMethodBody );
			}
			editBuff->setRequiredCsMethodBody( *natCsMethodBody );

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
				refForTable = dynamic_cast<cfbam::ICFBamTableObj*>( scopeObj );
				editBuff->setRequiredContainerForTable( refForTable );
			refTenant = editBuff->getRequiredOwnerTenant();
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamTableObj" );
			}

			// Resolve and apply Owner reference

			if( refTenant == NULL ) {
				if( scopeObj->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
					refTenant = dynamic_cast<cfsec::ICFSecTenantObj*>( scopeObj );
					editBuff->setRequiredOwnerTenant( refTenant );
				}
				else {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Owner<Tenant>" );
				}
			}

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

			loaderBehaviour = saxLoader->getServerMethodLoaderBehaviour();
			origServerMethod = dynamic_cast<cfbam::ICFBamServerMethodObj*>( schemaObj->getServerMethodTableObj()->readServerMethodByUNameIdx( refForTable->getRequiredTenantId(),
			refForTable->getRequiredId(),
			editBuff->getRequiredName() ) );
			if( origServerMethod == NULL ) {
				editServerMethod = editBuff;
				editBuff = NULL;
			}
			else {
				switch( loaderBehaviour ) {
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert:
						editServerMethod = NULL;
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update:
						editServerMethod = dynamic_cast<cfbam::ICFBamServerMethodEditObj*>( origServerMethod->beginEdit() );
						editServerMethod->setRequiredName( editBuff->getRequiredName() );
						if( editBuff->isOptionalShortNameNull() ) {
							editServerMethod->setOptionalShortNameNull();
						}
						else {
							editServerMethod->setOptionalShortNameValue( editBuff->getOptionalShortNameValue() );
						}
						if( editBuff->isOptionalLabelNull() ) {
							editServerMethod->setOptionalLabelNull();
						}
						else {
							editServerMethod->setOptionalLabelValue( editBuff->getOptionalLabelValue() );
						}
						if( editBuff->isOptionalShortDescriptionNull() ) {
							editServerMethod->setOptionalShortDescriptionNull();
						}
						else {
							editServerMethod->setOptionalShortDescriptionValue( editBuff->getOptionalShortDescriptionValue() );
						}
						if( editBuff->isOptionalDescriptionNull() ) {
							editServerMethod->setOptionalDescriptionNull();
						}
						else {
							editServerMethod->setOptionalDescriptionValue( editBuff->getOptionalDescriptionValue() );
						}
						if( editBuff->isOptionalSuffixNull() ) {
							editServerMethod->setOptionalSuffixNull();
						}
						else {
							editServerMethod->setOptionalSuffixValue( editBuff->getOptionalSuffixValue() );
						}
						editServerMethod->setRequiredIsInstanceMethod( editBuff->getRequiredIsInstanceMethod() );
						editServerMethod->setRequiredIsServerOnly( editBuff->getRequiredIsServerOnly() );
						editServerMethod->setRequiredJMethodBody( editBuff->getRequiredJMethodBody() );
						editServerMethod->setRequiredCppMethodBody( editBuff->getRequiredCppMethodBody() );
						editServerMethod->setRequiredCsMethodBody( editBuff->getRequiredCsMethodBody() );
						editServerMethod->setOptionalLookupDefSchema( editBuff->getOptionalLookupDefSchema() );
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace:
						editServerMethod = dynamic_cast<cfbam::ICFBamServerMethodEditObj*>( origServerMethod->beginEdit() );
						editServerMethod->deleteInstance();
						editServerMethod = NULL;
						origServerMethod = NULL;
						editServerMethod = editBuff;
						editBuff = NULL;
						break;
				}
			}

			if( editServerMethod != NULL ) {
				if( origServerMethod != NULL ) {
					editServerMethod->update();
				}
				else {
					origServerMethod = dynamic_cast<cfbam::ICFBamServerMethodObj*>( editServerMethod->create() );
				}
				editServerMethod = NULL;
			}

			if( ! tmpBuff->getIsNew() ) {
				tmpBuff = NULL;
			}

			curContext->setObj( origServerMethod );

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

		if( natSuffix != NULL ) {
			delete natSuffix;
			natSuffix = NULL;
		}

		if( natJMethodBody != NULL ) {
			delete natJMethodBody;
			natJMethodBody = NULL;
		}

		if( natCppMethodBody != NULL ) {
			delete natCppMethodBody;
			natCppMethodBody = NULL;
		}

		if( natCsMethodBody != NULL ) {
			delete natCsMethodBody;
			natCsMethodBody = NULL;
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

		if( attrSuffix != NULL ) {
			delete attrSuffix;
			attrSuffix = NULL;
		}

		if( attrIsInstanceMethod != NULL ) {
			delete attrIsInstanceMethod;
			attrIsInstanceMethod = NULL;
		}

		if( attrIsServerOnly != NULL ) {
			delete attrIsServerOnly;
			attrIsServerOnly = NULL;
		}

		if( attrJMethodBody != NULL ) {
			delete attrJMethodBody;
			attrJMethodBody = NULL;
		}

		if( attrCppMethodBody != NULL ) {
			delete attrCppMethodBody;
			attrCppMethodBody = NULL;
		}

		if( attrCsMethodBody != NULL ) {
			delete attrCsMethodBody;
			attrCsMethodBody = NULL;
		}

		if( attrDefSchema != NULL ) {
			delete attrDefSchema;
			attrDefSchema = NULL;
		}

		if( editServerMethod != NULL ) {
			editServerMethod->endEdit();
			editServerMethod = NULL;
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

	void CFBamSaxLoaderServerMethodHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
