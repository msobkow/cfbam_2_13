// Description: C++18 XML Custom SAX XML Parser for Business Application Model 2.13 files

/*
 *	MSS Code Factory CFBam 2.13 CustXmlLoader
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	This file is part of MSS Code Factory.
 *	
 *	MSS Code Factory is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *	
 *	MSS Code Factory is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *	
 *	You should have received a copy of the GNU General Public License
 *	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoader.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::CLASS_NAME( "CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler" );
	const std::string CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::S_True( "true" );
	const std::string CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::S_False( "false" );
	const std::string CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::S_Yes( "yes" );
	const std::string CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::S_No( "no" );
	const std::string CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::S_0( "0" );
	const std::string CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::S_1( "1" );

	CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler( cfbam::CFBamCustXmlLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::~CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler() {
	}

	void CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		const static std::string S_ProcName( "startElement" );
		const static std::string S_SpecificallyId( "Id" );
		const static std::string S_Uri( "uri" );
		const static std::string S_LocalName( "localname" );
		const static std::string S_GetParser( "getParser()" );
		const static std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		const static std::string S_SchemaLocation( "schemaLocation" );
		const static std::string S_QName( "qname" );
		static const std::string S_Name( "Name" );
		CFLIB_EXCEPTION_DECLINFO
		const XMLCh* xmlchLocalName = NULL;
		char* cLocalName = NULL;
		std::string* attrLocalName = NULL;
		const XMLCh* xmlchValue = NULL;
		char* cValue = NULL;
		std::string* cppValue = NULL;
		char* cUri = NULL;
		char* cQName = NULL;
		cfbam::ICFBamSchemaDefObj* refSchemaDef = NULL;
		cfbam::CFBamCustXmlLoader* saxLoader = NULL;
		cfbam::ICFBamSchemaObj* schemaObj = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		cflib::CFLibXmlCoreContext* parentContext = NULL;
		cflib::ICFLibAnyObj* scopeObj = NULL;
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
			if( cppQName != "CPlusMySqlSchemaObjMembers" ) {
				static const std::string Msg( "Expected QName to be 'CPlusMySqlSchemaObjMembers'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}

			// Attribute Extraction
			size_t numAttrs;
			size_t idxAttr;
			saxLoader = dynamic_cast<cfbam::CFBamCustXmlLoader*>( getParser() );
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
					// ignored
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

			curContext = getParser()->getCurContext();
			if( curContext == NULL ) {
				static const std::string S_CurContext( "getParser()->getCurContext" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CurContext );
			}
			if( ! cfbam::CFBamCustXmlLoader::getProcessSchema( curContext ) ) {
				return;
			}

			parentContext = curContext->getPrevContext();
			if( parentContext != NULL ) {
				scopeObj = parentContext->getObj();
			}
			else {
				scopeObj = NULL;
			}

			// Make sure we have a SchemaDef as our scope/container

			if( scopeObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					"scopeObj" );
			}
			else if( scopeObj->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				refSchemaDef = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( scopeObj );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamSchemaDefObj" );
			}

			curContext->setObj( refSchemaDef );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( attrLocalName != NULL ) {
			delete attrLocalName;
			attrLocalName = NULL;
		}

		if( cppValue != NULL ) {
			delete cppValue;
			cppValue = NULL;
		}

		if( cUri != NULL ) {
			xercesc::XMLString::release( &cUri );
			cUri = NULL;
		}

		if( cLocalName != NULL ) {
			xercesc::XMLString::release( &cLocalName );
			cLocalName = NULL;
		}

		if( cQName != NULL ) {
			xercesc::XMLString::release( &cQName );
			cQName = NULL;
		}

		if( cValue != NULL ) {
			xercesc::XMLString::release( &cValue );
			cValue = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
		static const std::string S_ProcName( "endElement" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetCurContext( "getParser().getCurContext()" );
		CFLIB_EXCEPTION_DECLINFO

		cfbam::CFBamCustXmlLoader* useParser = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		cfbam::ICFBamSchemaDefObj* schemaDefObj = NULL;
		cfbam::ICFBamSchemaDefEditObj* editSchemaDefObj = NULL;

		try {
			useParser = dynamic_cast<cfbam::CFBamCustXmlLoader*>( getParser() );
			if( useParser == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParser );
			}

			curContext = getParser()->getCurContext();
			if( curContext == NULL ) {
				static const std::string S_CurContext( "getParser()->getCurContext" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParserGetCurContext );
			}
			if( ! cfbam::CFBamCustXmlLoader::getProcessSchema( curContext ) ) {
				return;
			}

			schemaDefObj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curContext->getObj() );
			if( schemaDefObj == NULL ) {
				static const std::string S_CurContextSchemaDefObj( "curContext->getObj()" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CurContextSchemaDefObj );
			}

			std::string text = curContext->getElementText();

			if( schemaDefObj->isOptionalCppMySqlSchemaObjMembersNull() || schemaDefObj->getOptionalCppMySqlSchemaObjMembersValue().empty() ) {
				editSchemaDefObj = dynamic_cast<cfbam::ICFBamSchemaDefEditObj*>( schemaDefObj->beginEdit() );
				editSchemaDefObj->setOptionalCppMySqlSchemaObjMembersValue( text );
				editSchemaDefObj = dynamic_cast<cfbam::ICFBamSchemaDefEditObj*>( editSchemaDefObj->update() );
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( editSchemaDefObj != NULL ) {
			editSchemaDefObj->endEdit();
			editSchemaDefObj = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION

		return;
	}
}
