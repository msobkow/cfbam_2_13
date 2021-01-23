
// Description: C++18 XML SAX2 Element Handler implementation for Int16Type

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
#include <cfbamsaxloader/CFBamSaxLoaderInt16TypeHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamSaxLoaderInt16TypeHandler::CLASS_NAME( "CFBamSaxLoaderInt16TypeHandler" );
	const std::string CFBamSaxLoaderInt16TypeHandler::S_True( "true" );
	const std::string CFBamSaxLoaderInt16TypeHandler::S_False( "false" );
	const std::string CFBamSaxLoaderInt16TypeHandler::S_Yes( "yes" );
	const std::string CFBamSaxLoaderInt16TypeHandler::S_No( "no" );
	const std::string CFBamSaxLoaderInt16TypeHandler::S_0( "0" );
	const std::string CFBamSaxLoaderInt16TypeHandler::S_1( "1" );

	CFBamSaxLoaderInt16TypeHandler::CFBamSaxLoaderInt16TypeHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxLoaderInt16TypeHandler::~CFBamSaxLoaderInt16TypeHandler() {
	}

	void CFBamSaxLoaderInt16TypeHandler::startElement (
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
		static const std::string S_InitValue( "InitValue" );
		static const std::string S_MinValue( "MinValue" );
		static const std::string S_MaxValue( "MaxValue" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
		static const std::string S_SchemaDef( "SchemaDef" );
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
		cfbam::ICFBamInt16TypeObj* tmpBuff = NULL;
		cfbam::ICFBamInt16TypeEditObj* editBuff = NULL;
		cfbam::ICFBamInt16TypeEditObj* editInt16Type = NULL;
		cfbam::ICFBamInt16TypeObj* origInt16Type = NULL;
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
		// Int16Def Attributes
		std::string* attrInitValue = NULL;
		std::string* attrMinValue = NULL;
		std::string* attrMaxValue = NULL;
		// Int16Def References
		// Int16Type Attributes
		// Int16Type References
		cfbam::ICFBamSchemaDefObj* refSchemaDef = NULL;
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
		cflib::CFLibNullableInt16 natInitValue;
		cflib::CFLibNullableInt16 natMinValue;
		cflib::CFLibNullableInt16 natMaxValue;
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
			if( cppQName != cfbam::CFBamInt16TypeBuff::GENDEFNAME ) {
				std::string Msg( "Expected QName to be '" + cfbam::CFBamInt16TypeBuff::GENDEFNAME + "'" );
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
			tmpBuff = schemaObj->getInt16TypeTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamInt16TypeEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_InitValue ) {
					if( attrInitValue != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrInitValue = new std::string( *cppValue );
					}
					else {
						attrInitValue = NULL;
					}
				}
				else if( *attrLocalName == S_MinValue ) {
					if( attrMinValue != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrMinValue = new std::string( *cppValue );
					}
					else {
						attrMinValue = NULL;
					}
				}
				else if( *attrLocalName == S_MaxValue ) {
					if( attrMaxValue != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrMaxValue = new std::string( *cppValue );
					}
					else {
						attrMaxValue = NULL;
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
			if( attrInitValue != NULL ) {
				curContext->putNamedTag( S_InitValue, *attrInitValue );
			}
			if( attrMinValue != NULL ) {
				curContext->putNamedTag( S_MinValue, *attrMinValue );
			}
			if( attrMaxValue != NULL ) {
				curContext->putNamedTag( S_MaxValue, *attrMaxValue );
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

			if( ( attrInitValue == NULL ) || ( attrInitValue->length() == 0 ) ) {
				natInitValue.setNull();
			}
			else {
				int16_t* value = cflib::CFLibXmlUtil::parseInt16( *attrInitValue );
				if( value != NULL ) {
					natInitValue.setValue( *value );
					delete value;
					value = NULL;
				}
				else {
					natInitValue.setNull();
				}
			}
			if( natInitValue.isNull() ) {
				editBuff->setOptionalInitValueNull();
			}
			else {
				editBuff->setOptionalInitValueValue( natInitValue.getValue() );
			}

			if( ( attrMinValue == NULL ) || ( attrMinValue->length() == 0 ) ) {
				natMinValue.setNull();
			}
			else {
				int16_t* value = cflib::CFLibXmlUtil::parseInt16( *attrMinValue );
				if( value != NULL ) {
					natMinValue.setValue( *value );
					delete value;
					value = NULL;
				}
				else {
					natMinValue.setNull();
				}
			}
			if( natMinValue.isNull() ) {
				editBuff->setOptionalMinValueNull();
			}
			else {
				editBuff->setOptionalMinValueValue( natMinValue.getValue() );
			}

			if( ( attrMaxValue == NULL ) || ( attrMaxValue->length() == 0 ) ) {
				natMaxValue.setNull();
			}
			else {
				int16_t* value = cflib::CFLibXmlUtil::parseInt16( *attrMaxValue );
				if( value != NULL ) {
					natMaxValue.setValue( *value );
					delete value;
					value = NULL;
				}
				else {
					natMaxValue.setNull();
				}
			}
			if( natMaxValue.isNull() ) {
				editBuff->setOptionalMaxValueNull();
			}
			else {
				editBuff->setOptionalMaxValueValue( natMaxValue.getValue() );
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
			else if( scopeObj->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				refSchemaDef = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( scopeObj );
				editBuff->setRequiredContainerSchemaDef( refSchemaDef );
			refTenant = editBuff->getRequiredOwnerTenant();
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamSchemaDefObj" );
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

			refScope = dynamic_cast<cfbam::ICFBamScopeObj*>( refSchemaDef );
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

			loaderBehaviour = saxLoader->getInt16TypeLoaderBehaviour();
			origInt16Type = dynamic_cast<cfbam::ICFBamInt16TypeObj*>( schemaObj->getInt16TypeTableObj()->readInt16TypeByUNameIdx( refTenant->getRequiredId(),
			refScope->getRequiredId(),
			editBuff->getRequiredName() ) );
			if( origInt16Type == NULL ) {
				editInt16Type = editBuff;
				editBuff = NULL;
			}
			else {
				switch( loaderBehaviour ) {
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert:
						editInt16Type = NULL;
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update:
						editInt16Type = dynamic_cast<cfbam::ICFBamInt16TypeEditObj*>( origInt16Type->beginEdit() );
						editInt16Type->setRequiredName( editBuff->getRequiredName() );
						if( editBuff->isOptionalShortNameNull() ) {
							editInt16Type->setOptionalShortNameNull();
						}
						else {
							editInt16Type->setOptionalShortNameValue( editBuff->getOptionalShortNameValue() );
						}
						if( editBuff->isOptionalLabelNull() ) {
							editInt16Type->setOptionalLabelNull();
						}
						else {
							editInt16Type->setOptionalLabelValue( editBuff->getOptionalLabelValue() );
						}
						if( editBuff->isOptionalShortDescriptionNull() ) {
							editInt16Type->setOptionalShortDescriptionNull();
						}
						else {
							editInt16Type->setOptionalShortDescriptionValue( editBuff->getOptionalShortDescriptionValue() );
						}
						if( editBuff->isOptionalDescriptionNull() ) {
							editInt16Type->setOptionalDescriptionNull();
						}
						else {
							editInt16Type->setOptionalDescriptionValue( editBuff->getOptionalDescriptionValue() );
						}
						if( editBuff->isOptionalDefaultXmlValueNull() ) {
							editInt16Type->setOptionalDefaultXmlValueNull();
						}
						else {
							editInt16Type->setOptionalDefaultXmlValueValue( editBuff->getOptionalDefaultXmlValueValue() );
						}
						editInt16Type->setRequiredIsNullable( editBuff->getRequiredIsNullable() );
						if( editBuff->isOptionalGenerateIdNull() ) {
							editInt16Type->setOptionalGenerateIdNull();
						}
						else {
							editInt16Type->setOptionalGenerateIdValue( editBuff->getOptionalGenerateIdValue() );
						}
						editInt16Type->setRequiredImplementsPolymorph( editBuff->getRequiredImplementsPolymorph() );
						if( editBuff->isOptionalDbNameNull() ) {
							editInt16Type->setOptionalDbNameNull();
						}
						else {
							editInt16Type->setOptionalDbNameValue( editBuff->getOptionalDbNameValue() );
						}
						if( editBuff->isOptionalInitValueNull() ) {
							editInt16Type->setOptionalInitValueNull();
						}
						else {
							editInt16Type->setOptionalInitValueValue( editBuff->getOptionalInitValueValue() );
						}
						if( editBuff->isOptionalMinValueNull() ) {
							editInt16Type->setOptionalMinValueNull();
						}
						else {
							editInt16Type->setOptionalMinValueValue( editBuff->getOptionalMinValueValue() );
						}
						if( editBuff->isOptionalMaxValueNull() ) {
							editInt16Type->setOptionalMaxValueNull();
						}
						else {
							editInt16Type->setOptionalMaxValueValue( editBuff->getOptionalMaxValueValue() );
						}
						editInt16Type->setOptionalLookupDefSchema( editBuff->getOptionalLookupDefSchema() );
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace:
						editInt16Type = dynamic_cast<cfbam::ICFBamInt16TypeEditObj*>( origInt16Type->beginEdit() );
						editInt16Type->deleteInstance();
						editInt16Type = NULL;
						origInt16Type = NULL;
						editInt16Type = editBuff;
						editBuff = NULL;
						break;
				}
			}

			if( editInt16Type != NULL ) {
				if( origInt16Type != NULL ) {
					editInt16Type->update();
				}
				else {
					origInt16Type = dynamic_cast<cfbam::ICFBamInt16TypeObj*>( editInt16Type->create() );
				}
				editInt16Type = NULL;
			}

			if( ! tmpBuff->getIsNew() ) {
				tmpBuff = NULL;
			}

			curContext->setObj( origInt16Type );

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

		if( attrInitValue != NULL ) {
			delete attrInitValue;
			attrInitValue = NULL;
		}

		if( attrMinValue != NULL ) {
			delete attrMinValue;
			attrMinValue = NULL;
		}

		if( attrMaxValue != NULL ) {
			delete attrMaxValue;
			attrMaxValue = NULL;
		}

		if( editInt16Type != NULL ) {
			editInt16Type->endEdit();
			editInt16Type = NULL;
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

	void CFBamSaxLoaderInt16TypeHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
