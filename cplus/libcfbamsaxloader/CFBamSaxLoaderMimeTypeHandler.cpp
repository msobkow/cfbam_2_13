
// Description: C++18 XML SAX2 Element Handler implementation for MimeType

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFInt 2.13 Internet Essentials
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
#include <cfbamsaxloader/CFBamSaxLoaderMimeTypeHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamSaxLoaderMimeTypeHandler::CLASS_NAME( "CFBamSaxLoaderMimeTypeHandler" );
	const std::string CFBamSaxLoaderMimeTypeHandler::S_True( "true" );
	const std::string CFBamSaxLoaderMimeTypeHandler::S_False( "false" );
	const std::string CFBamSaxLoaderMimeTypeHandler::S_Yes( "yes" );
	const std::string CFBamSaxLoaderMimeTypeHandler::S_No( "no" );
	const std::string CFBamSaxLoaderMimeTypeHandler::S_0( "0" );
	const std::string CFBamSaxLoaderMimeTypeHandler::S_1( "1" );

	CFBamSaxLoaderMimeTypeHandler::CFBamSaxLoaderMimeTypeHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxLoaderMimeTypeHandler::~CFBamSaxLoaderMimeTypeHandler() {
	}

	void CFBamSaxLoaderMimeTypeHandler::startElement (
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
		static const std::string S_MimeTypeId( "MimeTypeId" );
		static const std::string S_Name( "Name" );
		static const std::string S_FileTypes( "FileTypes" );
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
		cfint::ICFIntMimeTypeObj* tmpBuff = NULL;
		cfint::ICFIntMimeTypeEditObj* editBuff = NULL;
		cfint::ICFIntMimeTypeEditObj* editMimeType = NULL;
		cfint::ICFIntMimeTypeObj* origMimeType = NULL;
		cflib::CFLibXmlCoreContext* parentContext = NULL;
		cflib::ICFLibAnyObj* scopeObj = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// MimeType Attributes
		std::string* attrName = NULL;
		std::string* attrFileTypes = NULL;
		// MimeType References
		std::string* natName = NULL;
		std::string* natFileTypes = NULL;
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
			if( cppQName != cfint::CFIntMimeTypeBuff::GENDEFNAME ) {
				std::string Msg( "Expected QName to be '" + cfint::CFIntMimeTypeBuff::GENDEFNAME + "'" );
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
			tmpBuff = schemaObj->getMimeTypeTableObj()->newInstance();
			editBuff = dynamic_cast<cfint::ICFIntMimeTypeEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_FileTypes ) {
					if( attrFileTypes != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrFileTypes = new std::string( *cppValue );
					}
					else {
						attrFileTypes = NULL;
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
			if( attrFileTypes != NULL ) {
				curContext->putNamedTag( S_FileTypes, *attrFileTypes );
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

			if( attrFileTypes != NULL ) {
				natFileTypes = new std::string( *attrFileTypes );
			}
			else {
				natFileTypes = NULL;
			}
			if( natFileTypes != NULL ) {
				editBuff->setOptionalFileTypesValue( *natFileTypes );
			}
			else {
				editBuff->setOptionalFileTypesNull();
			}

			// Get the scope/container object

			parentContext = curContext->getPrevContext();
			if( parentContext != NULL ) {
				scopeObj = parentContext->getObj();
			}
			else {
				scopeObj = NULL;
			}

			loaderBehaviour = saxLoader->getMimeTypeLoaderBehaviour();
			origMimeType = dynamic_cast<cfint::ICFIntMimeTypeObj*>( schemaObj->getMimeTypeTableObj()->readMimeTypeByUNameIdx( editBuff->getRequiredName() ) );
			if( origMimeType == NULL ) {
				editMimeType = editBuff;
				editBuff = NULL;
			}
			else {
				switch( loaderBehaviour ) {
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert:
						editMimeType = NULL;
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update:
						editMimeType = dynamic_cast<cfint::ICFIntMimeTypeEditObj*>( origMimeType->beginEdit() );
						editMimeType->setRequiredName( editBuff->getRequiredName() );
						if( editBuff->isOptionalFileTypesNull() ) {
							editMimeType->setOptionalFileTypesNull();
						}
						else {
							editMimeType->setOptionalFileTypesValue( editBuff->getOptionalFileTypesValue() );
						}
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace:
						editMimeType = dynamic_cast<cfint::ICFIntMimeTypeEditObj*>( origMimeType->beginEdit() );
						editMimeType->deleteInstance();
						editMimeType = NULL;
						origMimeType = NULL;
						editMimeType = editBuff;
						editBuff = NULL;
						break;
				}
			}

			if( editMimeType != NULL ) {
				if( origMimeType != NULL ) {
					editMimeType->update();
				}
				else {
					origMimeType = dynamic_cast<cfint::ICFIntMimeTypeObj*>( editMimeType->create() );
				}
				editMimeType = NULL;
			}

			if( ! tmpBuff->getIsNew() ) {
				tmpBuff = NULL;
			}

			curContext->setObj( origMimeType );

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

		if( natFileTypes != NULL ) {
			delete natFileTypes;
			natFileTypes = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrFileTypes != NULL ) {
			delete attrFileTypes;
			attrFileTypes = NULL;
		}

		if( editMimeType != NULL ) {
			editMimeType->endEdit();
			editMimeType = NULL;
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

	void CFBamSaxLoaderMimeTypeHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
