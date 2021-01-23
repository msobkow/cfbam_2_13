
// Description: C++18 XML SAX2 Element Handler implementation for Param

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
#include <cfbamsaxloader/CFBamSaxLoaderParamHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamSaxLoaderParamHandler::CLASS_NAME( "CFBamSaxLoaderParamHandler" );
	const std::string CFBamSaxLoaderParamHandler::S_True( "true" );
	const std::string CFBamSaxLoaderParamHandler::S_False( "false" );
	const std::string CFBamSaxLoaderParamHandler::S_Yes( "yes" );
	const std::string CFBamSaxLoaderParamHandler::S_No( "no" );
	const std::string CFBamSaxLoaderParamHandler::S_0( "0" );
	const std::string CFBamSaxLoaderParamHandler::S_1( "1" );

	CFBamSaxLoaderParamHandler::CFBamSaxLoaderParamHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxLoaderParamHandler::~CFBamSaxLoaderParamHandler() {
	}

	void CFBamSaxLoaderParamHandler::startElement (
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
		static const std::string S_ServerMethodId( "ServerMethodId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_IsNullable( "IsNullable" );
		static const std::string S_TypeTenantId( "TypeTenantId" );
		static const std::string S_TypeId( "TypeId" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		static const std::string S_ServerMeth( "ServerMeth" );
		static const std::string S_Tenant( "Tenant" );
		static const std::string S_DefSchema( "DefSchema" );
		static const std::string S_Prev( "Prev" );
		static const std::string S_Next( "Next" );
		static const std::string S_Type( "Type" );
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
		cfbam::ICFBamParamObj* tmpBuff = NULL;
		cfbam::ICFBamParamEditObj* editBuff = NULL;
		cfbam::ICFBamParamEditObj* editParam = NULL;
		cfbam::ICFBamParamObj* origParam = NULL;
		cflib::CFLibXmlCoreContext* parentContext = NULL;
		cflib::ICFLibAnyObj* scopeObj = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// Param Attributes
		std::string* attrName = NULL;
		std::string* attrShortDescription = NULL;
		std::string* attrDescription = NULL;
		std::string* attrIsNullable = NULL;
		std::string* attrDefSchema = NULL;
		std::string* attrType = NULL;
		// Param References
		cfbam::ICFBamServerMethodObj* refServerMeth = NULL;
		cfsec::ICFSecTenantObj* refTenant = NULL;
		cfbam::ICFBamSchemaDefObj* refDefSchema = NULL;
		cfbam::ICFBamValueObj* refType = NULL;
		std::string* natName = NULL;
		std::string* natShortDescription = NULL;
		std::string* natDescription = NULL;
		bool natIsNullable;
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
			if( cppQName != cfbam::CFBamParamBuff::GENDEFNAME ) {
				std::string Msg( "Expected QName to be '" + cfbam::CFBamParamBuff::GENDEFNAME + "'" );
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
			tmpBuff = schemaObj->getParamTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamParamEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_Type ) {
					if( attrType != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrType = new std::string( *cppValue );
					}
					else {
						attrType = NULL;
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
			if( ( attrType == NULL ) || ( attrType->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Type );
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
			if( attrShortDescription != NULL ) {
				curContext->putNamedTag( S_ShortDescription, *attrShortDescription );
			}
			if( attrDescription != NULL ) {
				curContext->putNamedTag( S_Description, *attrDescription );
			}
			if( attrIsNullable != NULL ) {
				curContext->putNamedTag( S_IsNullable, *attrIsNullable );
			}
			if( attrDefSchema != NULL ) {
				curContext->putNamedTag( S_DefSchema, *attrDefSchema );
			}
			if( attrType != NULL ) {
				curContext->putNamedTag( S_Type, *attrType );
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
			else if( scopeObj->implementsClassCode( cfbam::CFBamServerMethodBuff::CLASS_CODE ) ) {
				refServerMeth = dynamic_cast<cfbam::ICFBamServerMethodObj*>( scopeObj );
				editBuff->setRequiredContainerServerMeth( refServerMeth );
			refTenant = editBuff->getRequiredOwnerTenant();
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamServerMethodObj" );
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

			// Lookup refType by qualified name
			if( ( attrType != NULL ) && ( attrType->length() > 0 ) ) {
				refType = dynamic_cast<cfbam::ICFBamValueObj*>( editBuff->getNamedObject( schemaObj->getValueTableObj()->getObjQualifyingClassCode(),
					*attrType ) );
				if( refType == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve Type reference qualified name \"" + *attrType + "\" to table Value" );
				}
			}
			else {
				refType = NULL;
			}
			editBuff->setRequiredLookupType( refType );

			editParam = editBuff;
			editBuff = NULL;
			origParam = dynamic_cast<cfbam::ICFBamParamObj*>( editParam->create() );
			editParam = NULL;
			tmpBuff = NULL;

			curContext->setObj( origParam );

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

		if( natShortDescription != NULL ) {
			delete natShortDescription;
			natShortDescription = NULL;
		}

		if( natDescription != NULL ) {
			delete natDescription;
			natDescription = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrShortDescription != NULL ) {
			delete attrShortDescription;
			attrShortDescription = NULL;
		}

		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}

		if( attrIsNullable != NULL ) {
			delete attrIsNullable;
			attrIsNullable = NULL;
		}

		if( attrDefSchema != NULL ) {
			delete attrDefSchema;
			attrDefSchema = NULL;
		}

		if( attrType != NULL ) {
			delete attrType;
			attrType = NULL;
		}

		if( editParam != NULL ) {
			editParam->endEdit();
			editParam = NULL;
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

	void CFBamSaxLoaderParamHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
