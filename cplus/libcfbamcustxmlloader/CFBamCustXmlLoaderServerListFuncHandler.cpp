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
#include <cfbamcustxmlloader/CFBamCustXmlLoaderServerListFuncHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamCustXmlLoaderServerListFuncHandler::CLASS_NAME( "CFBamCustXmlLoaderServerListFuncHandler" );
	const std::string CFBamCustXmlLoaderServerListFuncHandler::S_True( "true" );
	const std::string CFBamCustXmlLoaderServerListFuncHandler::S_False( "false" );
	const std::string CFBamCustXmlLoaderServerListFuncHandler::S_Yes( "yes" );
	const std::string CFBamCustXmlLoaderServerListFuncHandler::S_No( "no" );
	const std::string CFBamCustXmlLoaderServerListFuncHandler::S_0( "0" );
	const std::string CFBamCustXmlLoaderServerListFuncHandler::S_1( "1" );

	CFBamCustXmlLoaderServerListFuncHandler::CFBamCustXmlLoaderServerListFuncHandler( cfbam::CFBamCustXmlLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamCustXmlLoaderServerListFuncHandler::~CFBamCustXmlLoaderServerListFuncHandler() {
	}

	void CFBamCustXmlLoaderServerListFuncHandler::startElement (
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
		static const std::string S_Dot( "." );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_IsInstanceMethod( "IsInstanceMethod" );
		static const std::string S_IsClientMethod( "IsClientMethod" );
		static const std::string S_ReturnTable( "ReturnTable" );
		static const std::string S_ForTable( "ForTable" );
		static const std::string S_Params( "Params" );
		static const std::string S_RetTenantId( "RetTenantId" );
		static const std::string S_RetTableId( "RetTableId" );
		CFLIB_EXCEPTION_DECLINFO
		const XMLCh* xmlchLocalName = NULL;
		char* cLocalName = NULL;
		std::string* attrLocalName = NULL;
		const XMLCh* xmlchValue = NULL;
		char* cValue = NULL;
		std::string* cppValue = NULL;
		char* cUri = NULL;
		char* cQName = NULL;
		cfbam::CFBamCustXmlLoader* saxLoader = NULL;
		cfbam::ICFBamSchemaObj* schemaObj = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		cflib::CFLibXmlCoreContext* parentContext = NULL;
		cflib::ICFLibAnyObj* scopeObj = NULL;
		cfbam::ICFBamServerListFuncObj* tmpBuff = NULL;
		cfbam::ICFBamServerListFuncEditObj* editBuff = NULL;
		cfbam::ICFBamServerListFuncObj* origServerListFunc = NULL;
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
		std::string* attrIsClientMethod = NULL;
		// ServerMethod References
		cfbam::ICFBamTableObj* refForTable = NULL;
		// ServerListFunc Attributes
		std::string* attrReturnTable = NULL;
		// ServerListFunc References
		cfbam::ICFBamTableObj* refReturnTable = NULL;
		// Native type conversions of attributes
		std::string* natName = NULL;
		std::string* natShortName = NULL;
		std::string* natLabel = NULL;
		std::string* natShortDescription = NULL;
		std::string* natDescription = NULL;
		std::string* natSuffix = NULL;
		bool natIsInstanceMethod;
		bool natIsClientMethod;
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
			if( cppQName != "ServerListFunc" ) {
				static const std::string Msg( "Expected QName to be 'ServerListFunc'" );
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

			// Instantiate an edit buffer for the parsed information
			tmpBuff = schemaObj->getServerListFuncTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamServerListFuncEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_IsClientMethod ) {
					if( attrIsClientMethod != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsClientMethod = new std::string( *cppValue );
					}
					else {
						attrIsClientMethod = NULL;
					}
				}
				else if( *attrLocalName == S_ReturnTable ) {
					if( attrReturnTable != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrReturnTable = new std::string( *cppValue );
					}
					else {
						attrReturnTable = NULL;
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
					*attrName + S_Dot + S_IsInstanceMethod );
			}
			if( ( attrIsClientMethod == NULL ) || ( attrIsClientMethod->length() <= 0 ) ) {
				if( attrIsClientMethod != NULL ) {
					delete attrIsClientMethod;
					attrIsClientMethod = NULL;
				}
				attrIsClientMethod = new std::string( S_False );
			}
			if( ( attrReturnTable == NULL ) || ( attrReturnTable->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_ReturnTable );
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
			if( ! cfbam::CFBamCustXmlLoader::getProcessSchema( curContext ) ) {
				editBuff->endEdit();
				editBuff = NULL;
				delete tmpBuff;
				tmpBuff = NULL;
				goto cleanup;
			}

			// Convert string attributes to native C++18 types
			// and apply the converted attributes to the editBuff->

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

			if( attrIsClientMethod == NULL ) {
				natIsClientMethod = false;
			}
			else if( ( *attrIsClientMethod == S_True ) || ( *attrIsClientMethod == S_Yes ) || ( *attrIsClientMethod == S_1 ) ) {
				natIsClientMethod = true;
			}
			else if( ( *attrIsClientMethod == S_False ) || ( *attrIsClientMethod == S_No ) || ( *attrIsClientMethod == S_0 ) ) {
				natIsClientMethod = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsClientMethod,
					*attrIsClientMethod );
			}
			editBuff->setRequiredIsClientMethod( natIsClientMethod );

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

			editBuff->setOptionalLookupDefSchema( NULL );

			// Lookup refReturnTable by qualified name
			if( ( attrReturnTable != NULL ) && ( attrReturnTable->length() > 0 ) ) {
				refReturnTable = dynamic_cast<cfbam::ICFBamTableObj*>( editBuff->getNamedObject( schemaObj->getTableTableObj()->getObjQualifyingClassCode(),
					*attrReturnTable ) );
				if( refReturnTable == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						refForTable->getRequiredContainerSchemaDef()->getRequiredName() + S_Dot + refForTable->getRequiredName() + S_Dot + *attrName + " could not resolve ReturnTable reference qualified name \"" + *attrReturnTable + "\" to table Table" );
				}
			}
			else {
				refReturnTable = NULL;
			}
			editBuff->setOptionalLookupRetTable( refReturnTable );

			origServerListFunc = dynamic_cast<cfbam::ICFBamServerListFuncObj*>( editBuff->create() );
			editBuff = NULL;
			tmpBuff = NULL;

			curContext->setObj( origServerListFunc );
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

		if( attrIsClientMethod != NULL ) {
			delete attrIsClientMethod;
			attrIsClientMethod = NULL;
		}

		if( attrReturnTable != NULL ) {
			delete attrReturnTable;
			attrReturnTable = NULL;
		}

		if( editBuff != NULL ) {
			editBuff->endEdit();
			editBuff = NULL;
		}

		if( tmpBuff != NULL ) {
			delete tmpBuff;
			tmpBuff = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void CFBamCustXmlLoaderServerListFuncHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
