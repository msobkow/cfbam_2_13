
// Description: C++18 XML SAX2 Element Handler implementation for TZTimeDef

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
#include <cfbamsaxloader/CFBamSaxLoaderTZTimeDefHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamSaxLoaderTZTimeDefHandler::CLASS_NAME( "CFBamSaxLoaderTZTimeDefHandler" );
	const std::string CFBamSaxLoaderTZTimeDefHandler::S_True( "true" );
	const std::string CFBamSaxLoaderTZTimeDefHandler::S_False( "false" );
	const std::string CFBamSaxLoaderTZTimeDefHandler::S_Yes( "yes" );
	const std::string CFBamSaxLoaderTZTimeDefHandler::S_No( "no" );
	const std::string CFBamSaxLoaderTZTimeDefHandler::S_0( "0" );
	const std::string CFBamSaxLoaderTZTimeDefHandler::S_1( "1" );

	CFBamSaxLoaderTZTimeDefHandler::CFBamSaxLoaderTZTimeDefHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxLoaderTZTimeDefHandler::~CFBamSaxLoaderTZTimeDefHandler() {
	}

	void CFBamSaxLoaderTZTimeDefHandler::startElement (
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
		static const std::string S_ScopeId( "ScopeId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_DefaultXmlValue( "DefaultXmlValue" );
		static const std::string S_IsNullable( "IsNullable" );
		static const std::string S_GenerateId( "GenerateId" );
		static const std::string S_ImplementsPolymorph( "ImplementsPolymorph" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		static const std::string S_Tenant( "Tenant" );
		static const std::string S_Scope( "Scope" );
		static const std::string S_DefSchema( "DefSchema" );
		static const std::string S_RefTableCol( "RefTableCol" );
		static const std::string S_RefIndexCol( "RefIndexCol" );
		static const std::string S_Prev( "Prev" );
		static const std::string S_Next( "Next" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_Dummy( "Dummy" );
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
		cfbam::ICFBamTZTimeDefObj* tmpBuff = NULL;
		cfbam::ICFBamTZTimeDefEditObj* editBuff = NULL;
		cfbam::ICFBamTZTimeDefEditObj* editTZTimeDef = NULL;
		cfbam::ICFBamTZTimeDefObj* origTZTimeDef = NULL;
		cflib::CFLibXmlCoreContext* parentContext = NULL;
		cflib::ICFLibAnyObj* scopeObj = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// Value Attributes
		std::string* attrName = NULL;
		std::string* attrShortName = NULL;
		std::string* attrLabel = NULL;
		std::string* attrShortDescription = NULL;
		std::string* attrDescription = NULL;
		std::string* attrDefaultXmlValue = NULL;
		std::string* attrIsNullable = NULL;
		std::string* attrGenerateId = NULL;
		std::string* attrImplementsPolymorph = NULL;
		std::string* attrDefSchema = NULL;
		// Value References
		cfsec::ICFSecTenantObj* refTenant = NULL;
		cfbam::ICFBamScopeObj* refScope = NULL;
		cfbam::ICFBamSchemaDefObj* refDefSchema = NULL;
		// Atom Attributes
		std::string* attrDbName = NULL;
		// Atom References
		// TZTimeDef Attributes
		std::string* attrDummy = NULL;
		// TZTimeDef References
		std::string* natName = NULL;
		std::string* natShortName = NULL;
		std::string* natLabel = NULL;
		std::string* natShortDescription = NULL;
		std::string* natDescription = NULL;
		std::string* natDefaultXmlValue = NULL;
		bool natIsNullable;
		cflib::CFLibNullableBool natGenerateId = NULL;
		bool natImplementsPolymorph;
		std::string* natDbName = NULL;
		std::string* natDummy = NULL;
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
			if( cppQName != cfbam::CFBamTZTimeDefBuff::GENDEFNAME ) {
				std::string Msg( "Expected QName to be '" + cfbam::CFBamTZTimeDefBuff::GENDEFNAME + "'" );
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
			tmpBuff = schemaObj->getTZTimeDefTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamTZTimeDefEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_DefaultXmlValue ) {
					if( attrDefaultXmlValue != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrDefaultXmlValue = new std::string( *cppValue );
					}
					else {
						attrDefaultXmlValue = NULL;
					}
				}
				else if( *attrLocalName == S_IsNullable ) {
					if( attrIsNullable != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsNullable = new std::string( *cppValue );
					}
					else {
						attrIsNullable = NULL;
					}
				}
				else if( *attrLocalName == S_GenerateId ) {
					if( attrGenerateId != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrGenerateId = new std::string( *cppValue );
					}
					else {
						attrGenerateId = NULL;
					}
				}
				else if( *attrLocalName == S_ImplementsPolymorph ) {
					if( attrImplementsPolymorph != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrImplementsPolymorph = new std::string( *cppValue );
					}
					else {
						attrImplementsPolymorph = NULL;
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
				else if( *attrLocalName == S_Dummy ) {
					if( attrDummy != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrDummy = new std::string( *cppValue );
					}
					else {
						attrDummy = NULL;
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
			if( ( attrIsNullable == NULL ) || ( attrIsNullable->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsNullable );
			}
			if( ( attrImplementsPolymorph == NULL ) || ( attrImplementsPolymorph->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ImplementsPolymorph );
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
			if( attrDefaultXmlValue != NULL ) {
				curContext->putNamedTag( S_DefaultXmlValue, *attrDefaultXmlValue );
			}
			if( attrIsNullable != NULL ) {
				curContext->putNamedTag( S_IsNullable, *attrIsNullable );
			}
			if( attrGenerateId != NULL ) {
				curContext->putNamedTag( S_GenerateId, *attrGenerateId );
			}
			if( attrImplementsPolymorph != NULL ) {
				curContext->putNamedTag( S_ImplementsPolymorph, *attrImplementsPolymorph );
			}
			if( attrDefSchema != NULL ) {
				curContext->putNamedTag( S_DefSchema, *attrDefSchema );
			}
			if( attrDbName != NULL ) {
				curContext->putNamedTag( S_DbName, *attrDbName );
			}
			if( attrDummy != NULL ) {
				curContext->putNamedTag( S_Dummy, *attrDummy );
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

			if( attrDefaultXmlValue != NULL ) {
				natDefaultXmlValue = new std::string( *attrDefaultXmlValue );
			}
			else {
				natDefaultXmlValue = NULL;
			}
			if( natDefaultXmlValue != NULL ) {
				editBuff->setOptionalDefaultXmlValueValue( *natDefaultXmlValue );
			}
			else {
				editBuff->setOptionalDefaultXmlValueNull();
			}

			if( ( *attrIsNullable == S_True ) || ( *attrIsNullable == S_Yes ) || ( *attrIsNullable == S_1 ) ) {
				natIsNullable = true;
			}
			else if( ( *attrIsNullable == S_False ) || ( *attrIsNullable == S_No ) || ( *attrIsNullable == S_0 ) ) {
				natIsNullable = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsNullable,
					*attrIsNullable );
			}
			editBuff->setRequiredIsNullable( natIsNullable );

			if( ( attrGenerateId == NULL ) || ( attrGenerateId->length() == 0 ) ) {
				natGenerateId.setNull();
			}
			else if( ( *attrGenerateId == S_True ) || ( *attrGenerateId == S_Yes ) || ( *attrGenerateId == S_1 ) ) {
				natGenerateId.setValue( true );
			}
			else if( ( *attrGenerateId == S_False ) || ( *attrGenerateId == S_No ) || ( *attrGenerateId == S_0 ) ) {
				natGenerateId.setValue( false );
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GenerateId,
					*attrGenerateId );
			}
			if( natGenerateId.isNull() ) {
				editBuff->setOptionalGenerateIdNull();
			}
			else {
				editBuff->setOptionalGenerateIdValue( natGenerateId.getValue() );
			}

			if( ( *attrImplementsPolymorph == S_True ) || ( *attrImplementsPolymorph == S_Yes ) || ( *attrImplementsPolymorph == S_1 ) ) {
				natImplementsPolymorph = true;
			}
			else if( ( *attrImplementsPolymorph == S_False ) || ( *attrImplementsPolymorph == S_No ) || ( *attrImplementsPolymorph == S_0 ) ) {
				natImplementsPolymorph = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ImplementsPolymorph,
					*attrImplementsPolymorph );
			}
			editBuff->setRequiredImplementsPolymorph( natImplementsPolymorph );

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

			if( attrDummy != NULL ) {
				natDummy = new std::string( *attrDummy );
			}
			else {
				natDummy = NULL;
			}
			if( natDummy != NULL ) {
				editBuff->setOptionalDummyValue( *natDummy );
			}
			else {
				editBuff->setOptionalDummyNull();
			}

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
			else if( scopeObj->implementsClassCode( cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				refScope = dynamic_cast<cfbam::ICFBamScopeObj*>( scopeObj );
				editBuff->setRequiredContainerScope( refScope );
			refTenant = editBuff->getRequiredOwnerTenant();
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamScopeObj" );
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

			loaderBehaviour = saxLoader->getTZTimeDefLoaderBehaviour();
			origTZTimeDef = dynamic_cast<cfbam::ICFBamTZTimeDefObj*>( schemaObj->getTZTimeDefTableObj()->readTZTimeDefByUNameIdx( refTenant->getRequiredId(),
			refScope->getRequiredId(),
			editBuff->getRequiredName() ) );
			if( origTZTimeDef == NULL ) {
				editTZTimeDef = editBuff;
				editBuff = NULL;
			}
			else {
				switch( loaderBehaviour ) {
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert:
						editTZTimeDef = NULL;
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update:
						editTZTimeDef = dynamic_cast<cfbam::ICFBamTZTimeDefEditObj*>( origTZTimeDef->beginEdit() );
						editTZTimeDef->setRequiredName( editBuff->getRequiredName() );
						if( editBuff->isOptionalShortNameNull() ) {
							editTZTimeDef->setOptionalShortNameNull();
						}
						else {
							editTZTimeDef->setOptionalShortNameValue( editBuff->getOptionalShortNameValue() );
						}
						if( editBuff->isOptionalLabelNull() ) {
							editTZTimeDef->setOptionalLabelNull();
						}
						else {
							editTZTimeDef->setOptionalLabelValue( editBuff->getOptionalLabelValue() );
						}
						if( editBuff->isOptionalShortDescriptionNull() ) {
							editTZTimeDef->setOptionalShortDescriptionNull();
						}
						else {
							editTZTimeDef->setOptionalShortDescriptionValue( editBuff->getOptionalShortDescriptionValue() );
						}
						if( editBuff->isOptionalDescriptionNull() ) {
							editTZTimeDef->setOptionalDescriptionNull();
						}
						else {
							editTZTimeDef->setOptionalDescriptionValue( editBuff->getOptionalDescriptionValue() );
						}
						if( editBuff->isOptionalDefaultXmlValueNull() ) {
							editTZTimeDef->setOptionalDefaultXmlValueNull();
						}
						else {
							editTZTimeDef->setOptionalDefaultXmlValueValue( editBuff->getOptionalDefaultXmlValueValue() );
						}
						editTZTimeDef->setRequiredIsNullable( editBuff->getRequiredIsNullable() );
						if( editBuff->isOptionalGenerateIdNull() ) {
							editTZTimeDef->setOptionalGenerateIdNull();
						}
						else {
							editTZTimeDef->setOptionalGenerateIdValue( editBuff->getOptionalGenerateIdValue() );
						}
						editTZTimeDef->setRequiredImplementsPolymorph( editBuff->getRequiredImplementsPolymorph() );
						if( editBuff->isOptionalDbNameNull() ) {
							editTZTimeDef->setOptionalDbNameNull();
						}
						else {
							editTZTimeDef->setOptionalDbNameValue( editBuff->getOptionalDbNameValue() );
						}
						if( editBuff->isOptionalDummyNull() ) {
							editTZTimeDef->setOptionalDummyNull();
						}
						else {
							editTZTimeDef->setOptionalDummyValue( editBuff->getOptionalDummyValue() );
						}
						editTZTimeDef->setOptionalLookupDefSchema( editBuff->getOptionalLookupDefSchema() );
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace:
						editTZTimeDef = dynamic_cast<cfbam::ICFBamTZTimeDefEditObj*>( origTZTimeDef->beginEdit() );
						editTZTimeDef->deleteInstance();
						editTZTimeDef = NULL;
						origTZTimeDef = NULL;
						editTZTimeDef = editBuff;
						editBuff = NULL;
						break;
				}
			}

			if( editTZTimeDef != NULL ) {
				if( origTZTimeDef != NULL ) {
					editTZTimeDef->update();
				}
				else {
					origTZTimeDef = dynamic_cast<cfbam::ICFBamTZTimeDefObj*>( editTZTimeDef->create() );
				}
				editTZTimeDef = NULL;
			}

			if( ! tmpBuff->getIsNew() ) {
				tmpBuff = NULL;
			}

			curContext->setObj( origTZTimeDef );

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

		if( natDefaultXmlValue != NULL ) {
			delete natDefaultXmlValue;
			natDefaultXmlValue = NULL;
		}

		if( natDbName != NULL ) {
			delete natDbName;
			natDbName = NULL;
		}

		if( natDummy != NULL ) {
			delete natDummy;
			natDummy = NULL;
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

		if( attrDefaultXmlValue != NULL ) {
			delete attrDefaultXmlValue;
			attrDefaultXmlValue = NULL;
		}

		if( attrIsNullable != NULL ) {
			delete attrIsNullable;
			attrIsNullable = NULL;
		}

		if( attrGenerateId != NULL ) {
			delete attrGenerateId;
			attrGenerateId = NULL;
		}

		if( attrImplementsPolymorph != NULL ) {
			delete attrImplementsPolymorph;
			attrImplementsPolymorph = NULL;
		}

		if( attrDefSchema != NULL ) {
			delete attrDefSchema;
			attrDefSchema = NULL;
		}

		if( attrDbName != NULL ) {
			delete attrDbName;
			attrDbName = NULL;
		}

		if( attrDummy != NULL ) {
			delete attrDummy;
			attrDummy = NULL;
		}

		if( editTZTimeDef != NULL ) {
			editTZTimeDef->endEdit();
			editTZTimeDef = NULL;
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

	void CFBamSaxLoaderTZTimeDefHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
