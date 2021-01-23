
// Description: C++18 XML SAX2 Element Handler implementation for SchemaDef

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
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamSaxLoaderSchemaDefHandler::CLASS_NAME( "CFBamSaxLoaderSchemaDefHandler" );
	const std::string CFBamSaxLoaderSchemaDefHandler::S_True( "true" );
	const std::string CFBamSaxLoaderSchemaDefHandler::S_False( "false" );
	const std::string CFBamSaxLoaderSchemaDefHandler::S_Yes( "yes" );
	const std::string CFBamSaxLoaderSchemaDefHandler::S_No( "no" );
	const std::string CFBamSaxLoaderSchemaDefHandler::S_0( "0" );
	const std::string CFBamSaxLoaderSchemaDefHandler::S_1( "1" );

	CFBamSaxLoaderSchemaDefHandler::CFBamSaxLoaderSchemaDefHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxLoaderSchemaDefHandler::~CFBamSaxLoaderSchemaDefHandler() {
	}

	void CFBamSaxLoaderSchemaDefHandler::startElement (
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
		static const std::string S_MinorVersionId( "MinorVersionId" );
		static const std::string S_Name( "Name" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_CopyrightPeriod( "CopyrightPeriod" );
		static const std::string S_CopyrightHolder( "CopyrightHolder" );
		static const std::string S_AuthorEMail( "AuthorEMail" );
		static const std::string S_ProjectURL( "ProjectURL" );
		static const std::string S_PublishURI( "PublishURI" );
		static const std::string S_CommonLicenseCode( "CommonLicenseCode" );
		static const std::string S_CommonLicenseName( "CommonLicenseName" );
		static const std::string S_CommonLicenseText( "CommonLicenseText" );
		static const std::string S_ClientXFaceLicenseCode( "ClientXFaceLicenseCode" );
		static const std::string S_ClientXFaceLicenseName( "ClientXFaceLicenseName" );
		static const std::string S_ClientXFaceLicenseText( "ClientXFaceLicenseText" );
		static const std::string S_ClientImplLicenseCode( "ClientImplLicenseCode" );
		static const std::string S_ClientImplLicenseName( "ClientImplLicenseName" );
		static const std::string S_ClientImplLicenseText( "ClientImplLicenseText" );
		static const std::string S_ServerXFaceLicenseCode( "ServerXFaceLicenseCode" );
		static const std::string S_ServerXFaceLicenseName( "ServerXFaceLicenseName" );
		static const std::string S_ServerXFaceLicenseText( "ServerXFaceLicenseText" );
		static const std::string S_ServerImplLicenseCode( "ServerImplLicenseCode" );
		static const std::string S_ServerImplLicenseName( "ServerImplLicenseName" );
		static const std::string S_ServerImplLicenseText( "ServerImplLicenseText" );
		static const std::string S_MinorVersion( "MinorVersion" );
		static const std::string S_Tables( "Tables" );
		static const std::string S_Types( "Types" );
		static const std::string S_SchemaRefs( "SchemaRefs" );
		static const std::string S_CTenant( "CTenant" );
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
		cfbam::ICFBamSchemaDefObj* tmpBuff = NULL;
		cfbam::ICFBamSchemaDefEditObj* editBuff = NULL;
		cfbam::ICFBamSchemaDefEditObj* editSchemaDef = NULL;
		cfbam::ICFBamSchemaDefObj* origSchemaDef = NULL;
		cflib::CFLibXmlCoreContext* parentContext = NULL;
		cflib::ICFLibAnyObj* scopeObj = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// Scope Attributes
		// Scope References
		cfsec::ICFSecTenantObj* refTenant = NULL;
		// SchemaDef Attributes
		std::string* attrName = NULL;
		std::string* attrDbName = NULL;
		std::string* attrShortName = NULL;
		std::string* attrLabel = NULL;
		std::string* attrShortDescription = NULL;
		std::string* attrDescription = NULL;
		std::string* attrCopyrightPeriod = NULL;
		std::string* attrCopyrightHolder = NULL;
		std::string* attrAuthorEMail = NULL;
		std::string* attrProjectURL = NULL;
		std::string* attrPublishURI = NULL;
		std::string* attrCommonLicenseCode = NULL;
		std::string* attrCommonLicenseName = NULL;
		std::string* attrCommonLicenseText = NULL;
		std::string* attrClientXFaceLicenseCode = NULL;
		std::string* attrClientXFaceLicenseName = NULL;
		std::string* attrClientXFaceLicenseText = NULL;
		std::string* attrClientImplLicenseCode = NULL;
		std::string* attrClientImplLicenseName = NULL;
		std::string* attrClientImplLicenseText = NULL;
		std::string* attrServerXFaceLicenseCode = NULL;
		std::string* attrServerXFaceLicenseName = NULL;
		std::string* attrServerXFaceLicenseText = NULL;
		std::string* attrServerImplLicenseCode = NULL;
		std::string* attrServerImplLicenseName = NULL;
		std::string* attrServerImplLicenseText = NULL;
		// SchemaDef References
		cfint::ICFIntMinorVersionObj* refMinorVersion = NULL;
		cfsec::ICFSecTenantObj* refCTenant = NULL;
		std::string* natName = NULL;
		std::string* natDbName = NULL;
		std::string* natShortName = NULL;
		std::string* natLabel = NULL;
		std::string* natShortDescription = NULL;
		std::string* natDescription = NULL;
		std::string* natCopyrightPeriod = NULL;
		std::string* natCopyrightHolder = NULL;
		std::string* natAuthorEMail = NULL;
		std::string* natProjectURL = NULL;
		std::string* natPublishURI = NULL;
		std::string* natCommonLicenseCode = NULL;
		std::string* natCommonLicenseName = NULL;
		std::string* natCommonLicenseText = NULL;
		std::string* natClientXFaceLicenseCode = NULL;
		std::string* natClientXFaceLicenseName = NULL;
		std::string* natClientXFaceLicenseText = NULL;
		std::string* natClientImplLicenseCode = NULL;
		std::string* natClientImplLicenseName = NULL;
		std::string* natClientImplLicenseText = NULL;
		std::string* natServerXFaceLicenseCode = NULL;
		std::string* natServerXFaceLicenseName = NULL;
		std::string* natServerXFaceLicenseText = NULL;
		std::string* natServerImplLicenseCode = NULL;
		std::string* natServerImplLicenseName = NULL;
		std::string* natServerImplLicenseText = NULL;
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
			if( cppQName != cfbam::CFBamSchemaDefBuff::GENDEFNAME ) {
				std::string Msg( "Expected QName to be '" + cfbam::CFBamSchemaDefBuff::GENDEFNAME + "'" );
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
			tmpBuff = schemaObj->getSchemaDefTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamSchemaDefEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_CopyrightPeriod ) {
					if( attrCopyrightPeriod != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrCopyrightPeriod = new std::string( *cppValue );
					}
					else {
						attrCopyrightPeriod = NULL;
					}
				}
				else if( *attrLocalName == S_CopyrightHolder ) {
					if( attrCopyrightHolder != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrCopyrightHolder = new std::string( *cppValue );
					}
					else {
						attrCopyrightHolder = NULL;
					}
				}
				else if( *attrLocalName == S_AuthorEMail ) {
					if( attrAuthorEMail != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrAuthorEMail = new std::string( *cppValue );
					}
					else {
						attrAuthorEMail = NULL;
					}
				}
				else if( *attrLocalName == S_ProjectURL ) {
					if( attrProjectURL != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrProjectURL = new std::string( *cppValue );
					}
					else {
						attrProjectURL = NULL;
					}
				}
				else if( *attrLocalName == S_PublishURI ) {
					if( attrPublishURI != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrPublishURI = new std::string( *cppValue );
					}
					else {
						attrPublishURI = NULL;
					}
				}
				else if( *attrLocalName == S_CommonLicenseCode ) {
					if( attrCommonLicenseCode != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrCommonLicenseCode = new std::string( *cppValue );
					}
					else {
						attrCommonLicenseCode = NULL;
					}
				}
				else if( *attrLocalName == S_CommonLicenseName ) {
					if( attrCommonLicenseName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrCommonLicenseName = new std::string( *cppValue );
					}
					else {
						attrCommonLicenseName = NULL;
					}
				}
				else if( *attrLocalName == S_CommonLicenseText ) {
					if( attrCommonLicenseText != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrCommonLicenseText = new std::string( *cppValue );
					}
					else {
						attrCommonLicenseText = NULL;
					}
				}
				else if( *attrLocalName == S_ClientXFaceLicenseCode ) {
					if( attrClientXFaceLicenseCode != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrClientXFaceLicenseCode = new std::string( *cppValue );
					}
					else {
						attrClientXFaceLicenseCode = NULL;
					}
				}
				else if( *attrLocalName == S_ClientXFaceLicenseName ) {
					if( attrClientXFaceLicenseName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrClientXFaceLicenseName = new std::string( *cppValue );
					}
					else {
						attrClientXFaceLicenseName = NULL;
					}
				}
				else if( *attrLocalName == S_ClientXFaceLicenseText ) {
					if( attrClientXFaceLicenseText != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrClientXFaceLicenseText = new std::string( *cppValue );
					}
					else {
						attrClientXFaceLicenseText = NULL;
					}
				}
				else if( *attrLocalName == S_ClientImplLicenseCode ) {
					if( attrClientImplLicenseCode != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrClientImplLicenseCode = new std::string( *cppValue );
					}
					else {
						attrClientImplLicenseCode = NULL;
					}
				}
				else if( *attrLocalName == S_ClientImplLicenseName ) {
					if( attrClientImplLicenseName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrClientImplLicenseName = new std::string( *cppValue );
					}
					else {
						attrClientImplLicenseName = NULL;
					}
				}
				else if( *attrLocalName == S_ClientImplLicenseText ) {
					if( attrClientImplLicenseText != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrClientImplLicenseText = new std::string( *cppValue );
					}
					else {
						attrClientImplLicenseText = NULL;
					}
				}
				else if( *attrLocalName == S_ServerXFaceLicenseCode ) {
					if( attrServerXFaceLicenseCode != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrServerXFaceLicenseCode = new std::string( *cppValue );
					}
					else {
						attrServerXFaceLicenseCode = NULL;
					}
				}
				else if( *attrLocalName == S_ServerXFaceLicenseName ) {
					if( attrServerXFaceLicenseName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrServerXFaceLicenseName = new std::string( *cppValue );
					}
					else {
						attrServerXFaceLicenseName = NULL;
					}
				}
				else if( *attrLocalName == S_ServerXFaceLicenseText ) {
					if( attrServerXFaceLicenseText != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrServerXFaceLicenseText = new std::string( *cppValue );
					}
					else {
						attrServerXFaceLicenseText = NULL;
					}
				}
				else if( *attrLocalName == S_ServerImplLicenseCode ) {
					if( attrServerImplLicenseCode != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrServerImplLicenseCode = new std::string( *cppValue );
					}
					else {
						attrServerImplLicenseCode = NULL;
					}
				}
				else if( *attrLocalName == S_ServerImplLicenseName ) {
					if( attrServerImplLicenseName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrServerImplLicenseName = new std::string( *cppValue );
					}
					else {
						attrServerImplLicenseName = NULL;
					}
				}
				else if( *attrLocalName == S_ServerImplLicenseText ) {
					if( attrServerImplLicenseText != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrServerImplLicenseText = new std::string( *cppValue );
					}
					else {
						attrServerImplLicenseText = NULL;
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
			if( attrCopyrightPeriod == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CopyrightPeriod );
			}
			if( attrCopyrightHolder == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CopyrightHolder );
			}
			if( attrAuthorEMail == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_AuthorEMail );
			}
			if( attrProjectURL == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ProjectURL );
			}
			if( attrPublishURI == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_PublishURI );
			}
			if( attrCommonLicenseCode == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CommonLicenseCode );
			}
			if( attrCommonLicenseName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CommonLicenseName );
			}
			if( attrCommonLicenseText == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CommonLicenseText );
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
			if( attrDbName != NULL ) {
				curContext->putNamedTag( S_DbName, *attrDbName );
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
			if( attrCopyrightPeriod != NULL ) {
				curContext->putNamedTag( S_CopyrightPeriod, *attrCopyrightPeriod );
			}
			if( attrCopyrightHolder != NULL ) {
				curContext->putNamedTag( S_CopyrightHolder, *attrCopyrightHolder );
			}
			if( attrAuthorEMail != NULL ) {
				curContext->putNamedTag( S_AuthorEMail, *attrAuthorEMail );
			}
			if( attrProjectURL != NULL ) {
				curContext->putNamedTag( S_ProjectURL, *attrProjectURL );
			}
			if( attrPublishURI != NULL ) {
				curContext->putNamedTag( S_PublishURI, *attrPublishURI );
			}
			if( attrCommonLicenseCode != NULL ) {
				curContext->putNamedTag( S_CommonLicenseCode, *attrCommonLicenseCode );
			}
			if( attrCommonLicenseName != NULL ) {
				curContext->putNamedTag( S_CommonLicenseName, *attrCommonLicenseName );
			}
			if( attrCommonLicenseText != NULL ) {
				curContext->putNamedTag( S_CommonLicenseText, *attrCommonLicenseText );
			}
			if( attrClientXFaceLicenseCode != NULL ) {
				curContext->putNamedTag( S_ClientXFaceLicenseCode, *attrClientXFaceLicenseCode );
			}
			if( attrClientXFaceLicenseName != NULL ) {
				curContext->putNamedTag( S_ClientXFaceLicenseName, *attrClientXFaceLicenseName );
			}
			if( attrClientXFaceLicenseText != NULL ) {
				curContext->putNamedTag( S_ClientXFaceLicenseText, *attrClientXFaceLicenseText );
			}
			if( attrClientImplLicenseCode != NULL ) {
				curContext->putNamedTag( S_ClientImplLicenseCode, *attrClientImplLicenseCode );
			}
			if( attrClientImplLicenseName != NULL ) {
				curContext->putNamedTag( S_ClientImplLicenseName, *attrClientImplLicenseName );
			}
			if( attrClientImplLicenseText != NULL ) {
				curContext->putNamedTag( S_ClientImplLicenseText, *attrClientImplLicenseText );
			}
			if( attrServerXFaceLicenseCode != NULL ) {
				curContext->putNamedTag( S_ServerXFaceLicenseCode, *attrServerXFaceLicenseCode );
			}
			if( attrServerXFaceLicenseName != NULL ) {
				curContext->putNamedTag( S_ServerXFaceLicenseName, *attrServerXFaceLicenseName );
			}
			if( attrServerXFaceLicenseText != NULL ) {
				curContext->putNamedTag( S_ServerXFaceLicenseText, *attrServerXFaceLicenseText );
			}
			if( attrServerImplLicenseCode != NULL ) {
				curContext->putNamedTag( S_ServerImplLicenseCode, *attrServerImplLicenseCode );
			}
			if( attrServerImplLicenseName != NULL ) {
				curContext->putNamedTag( S_ServerImplLicenseName, *attrServerImplLicenseName );
			}
			if( attrServerImplLicenseText != NULL ) {
				curContext->putNamedTag( S_ServerImplLicenseText, *attrServerImplLicenseText );
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

			if( attrCopyrightPeriod != NULL ) {
				natCopyrightPeriod = new std::string( *attrCopyrightPeriod );
			}
			else {
				natCopyrightPeriod = NULL;
			}
			if( natCopyrightPeriod == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CopyrightPeriod );
			}
			editBuff->setRequiredCopyrightPeriod( *natCopyrightPeriod );

			if( attrCopyrightHolder != NULL ) {
				natCopyrightHolder = new std::string( *attrCopyrightHolder );
			}
			else {
				natCopyrightHolder = NULL;
			}
			if( natCopyrightHolder == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CopyrightHolder );
			}
			editBuff->setRequiredCopyrightHolder( *natCopyrightHolder );

			if( attrAuthorEMail != NULL ) {
				natAuthorEMail = new std::string( *attrAuthorEMail );
			}
			else {
				natAuthorEMail = NULL;
			}
			if( natAuthorEMail == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_AuthorEMail );
			}
			editBuff->setRequiredAuthorEMail( *natAuthorEMail );

			if( attrProjectURL != NULL ) {
				natProjectURL = new std::string( *attrProjectURL );
			}
			else {
				natProjectURL = NULL;
			}
			if( natProjectURL == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ProjectURL );
			}
			editBuff->setRequiredProjectURL( *natProjectURL );

			if( attrPublishURI != NULL ) {
				natPublishURI = new std::string( *attrPublishURI );
			}
			else {
				natPublishURI = NULL;
			}
			if( natPublishURI == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_PublishURI );
			}
			editBuff->setRequiredPublishURI( *natPublishURI );

			if( attrCommonLicenseCode != NULL ) {
				natCommonLicenseCode = new std::string( *attrCommonLicenseCode );
			}
			else {
				natCommonLicenseCode = NULL;
			}
			if( natCommonLicenseCode == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CommonLicenseCode );
			}
			editBuff->setRequiredCommonLicenseCode( *natCommonLicenseCode );

			if( attrCommonLicenseName != NULL ) {
				natCommonLicenseName = new std::string( *attrCommonLicenseName );
			}
			else {
				natCommonLicenseName = NULL;
			}
			if( natCommonLicenseName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CommonLicenseName );
			}
			editBuff->setRequiredCommonLicenseName( *natCommonLicenseName );

			if( attrCommonLicenseText != NULL ) {
				natCommonLicenseText = new std::string( *attrCommonLicenseText );
			}
			else {
				natCommonLicenseText = NULL;
			}
			if( natCommonLicenseText == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CommonLicenseText );
			}
			editBuff->setRequiredCommonLicenseText( *natCommonLicenseText );

			if( attrClientXFaceLicenseCode != NULL ) {
				natClientXFaceLicenseCode = new std::string( *attrClientXFaceLicenseCode );
			}
			else {
				natClientXFaceLicenseCode = NULL;
			}
			if( natClientXFaceLicenseCode != NULL ) {
				editBuff->setOptionalClientXFaceLicenseCodeValue( *natClientXFaceLicenseCode );
			}
			else {
				editBuff->setOptionalClientXFaceLicenseCodeNull();
			}

			if( attrClientXFaceLicenseName != NULL ) {
				natClientXFaceLicenseName = new std::string( *attrClientXFaceLicenseName );
			}
			else {
				natClientXFaceLicenseName = NULL;
			}
			if( natClientXFaceLicenseName != NULL ) {
				editBuff->setOptionalClientXFaceLicenseNameValue( *natClientXFaceLicenseName );
			}
			else {
				editBuff->setOptionalClientXFaceLicenseNameNull();
			}

			if( attrClientXFaceLicenseText != NULL ) {
				natClientXFaceLicenseText = new std::string( *attrClientXFaceLicenseText );
			}
			else {
				natClientXFaceLicenseText = NULL;
			}
			if( natClientXFaceLicenseText != NULL ) {
				editBuff->setOptionalClientXFaceLicenseTextValue( *natClientXFaceLicenseText );
			}
			else {
				editBuff->setOptionalClientXFaceLicenseTextNull();
			}

			if( attrClientImplLicenseCode != NULL ) {
				natClientImplLicenseCode = new std::string( *attrClientImplLicenseCode );
			}
			else {
				natClientImplLicenseCode = NULL;
			}
			if( natClientImplLicenseCode != NULL ) {
				editBuff->setOptionalClientImplLicenseCodeValue( *natClientImplLicenseCode );
			}
			else {
				editBuff->setOptionalClientImplLicenseCodeNull();
			}

			if( attrClientImplLicenseName != NULL ) {
				natClientImplLicenseName = new std::string( *attrClientImplLicenseName );
			}
			else {
				natClientImplLicenseName = NULL;
			}
			if( natClientImplLicenseName != NULL ) {
				editBuff->setOptionalClientImplLicenseNameValue( *natClientImplLicenseName );
			}
			else {
				editBuff->setOptionalClientImplLicenseNameNull();
			}

			if( attrClientImplLicenseText != NULL ) {
				natClientImplLicenseText = new std::string( *attrClientImplLicenseText );
			}
			else {
				natClientImplLicenseText = NULL;
			}
			if( natClientImplLicenseText != NULL ) {
				editBuff->setOptionalClientImplLicenseTextValue( *natClientImplLicenseText );
			}
			else {
				editBuff->setOptionalClientImplLicenseTextNull();
			}

			if( attrServerXFaceLicenseCode != NULL ) {
				natServerXFaceLicenseCode = new std::string( *attrServerXFaceLicenseCode );
			}
			else {
				natServerXFaceLicenseCode = NULL;
			}
			if( natServerXFaceLicenseCode != NULL ) {
				editBuff->setOptionalServerXFaceLicenseCodeValue( *natServerXFaceLicenseCode );
			}
			else {
				editBuff->setOptionalServerXFaceLicenseCodeNull();
			}

			if( attrServerXFaceLicenseName != NULL ) {
				natServerXFaceLicenseName = new std::string( *attrServerXFaceLicenseName );
			}
			else {
				natServerXFaceLicenseName = NULL;
			}
			if( natServerXFaceLicenseName != NULL ) {
				editBuff->setOptionalServerXFaceLicenseNameValue( *natServerXFaceLicenseName );
			}
			else {
				editBuff->setOptionalServerXFaceLicenseNameNull();
			}

			if( attrServerXFaceLicenseText != NULL ) {
				natServerXFaceLicenseText = new std::string( *attrServerXFaceLicenseText );
			}
			else {
				natServerXFaceLicenseText = NULL;
			}
			if( natServerXFaceLicenseText != NULL ) {
				editBuff->setOptionalServerXFaceLicenseTextValue( *natServerXFaceLicenseText );
			}
			else {
				editBuff->setOptionalServerXFaceLicenseTextNull();
			}

			if( attrServerImplLicenseCode != NULL ) {
				natServerImplLicenseCode = new std::string( *attrServerImplLicenseCode );
			}
			else {
				natServerImplLicenseCode = NULL;
			}
			if( natServerImplLicenseCode != NULL ) {
				editBuff->setOptionalServerImplLicenseCodeValue( *natServerImplLicenseCode );
			}
			else {
				editBuff->setOptionalServerImplLicenseCodeNull();
			}

			if( attrServerImplLicenseName != NULL ) {
				natServerImplLicenseName = new std::string( *attrServerImplLicenseName );
			}
			else {
				natServerImplLicenseName = NULL;
			}
			if( natServerImplLicenseName != NULL ) {
				editBuff->setOptionalServerImplLicenseNameValue( *natServerImplLicenseName );
			}
			else {
				editBuff->setOptionalServerImplLicenseNameNull();
			}

			if( attrServerImplLicenseText != NULL ) {
				natServerImplLicenseText = new std::string( *attrServerImplLicenseText );
			}
			else {
				natServerImplLicenseText = NULL;
			}
			if( natServerImplLicenseText != NULL ) {
				editBuff->setOptionalServerImplLicenseTextValue( *natServerImplLicenseText );
			}
			else {
				editBuff->setOptionalServerImplLicenseTextNull();
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
			else if( scopeObj->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				refMinorVersion = dynamic_cast<cfint::ICFIntMinorVersionObj*>( scopeObj );
				editBuff->setRequiredContainerMinorVersion( refMinorVersion );
			refCTenant = editBuff->getRequiredOwnerCTenant();
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamMinorVersionObj" );
			}

			// Resolve and apply Owner reference

			if( refCTenant == NULL ) {
				if( scopeObj->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
					refCTenant = dynamic_cast<cfsec::ICFSecTenantObj*>( scopeObj );
					editBuff->setRequiredOwnerCTenant( refCTenant );
				}
				else {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Owner<CTenant>" );
				}
			}

			refTenant = dynamic_cast<cfsec::ICFSecTenantObj*>( refCTenant );
			loaderBehaviour = saxLoader->getSchemaDefLoaderBehaviour();
			origSchemaDef = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( schemaObj->getSchemaDefTableObj()->readSchemaDefByUNameIdx( refMinorVersion->getRequiredTenantId(),
			refMinorVersion->getRequiredId(),
			editBuff->getRequiredName() ) );
			if( origSchemaDef == NULL ) {
				editSchemaDef = editBuff;
				editBuff = NULL;
			}
			else {
				switch( loaderBehaviour ) {
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert:
						editSchemaDef = NULL;
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update:
						editSchemaDef = dynamic_cast<cfbam::ICFBamSchemaDefEditObj*>( origSchemaDef->beginEdit() );
						editSchemaDef->setRequiredName( editBuff->getRequiredName() );
						if( editBuff->isOptionalDbNameNull() ) {
							editSchemaDef->setOptionalDbNameNull();
						}
						else {
							editSchemaDef->setOptionalDbNameValue( editBuff->getOptionalDbNameValue() );
						}
						if( editBuff->isOptionalShortNameNull() ) {
							editSchemaDef->setOptionalShortNameNull();
						}
						else {
							editSchemaDef->setOptionalShortNameValue( editBuff->getOptionalShortNameValue() );
						}
						if( editBuff->isOptionalLabelNull() ) {
							editSchemaDef->setOptionalLabelNull();
						}
						else {
							editSchemaDef->setOptionalLabelValue( editBuff->getOptionalLabelValue() );
						}
						if( editBuff->isOptionalShortDescriptionNull() ) {
							editSchemaDef->setOptionalShortDescriptionNull();
						}
						else {
							editSchemaDef->setOptionalShortDescriptionValue( editBuff->getOptionalShortDescriptionValue() );
						}
						if( editBuff->isOptionalDescriptionNull() ) {
							editSchemaDef->setOptionalDescriptionNull();
						}
						else {
							editSchemaDef->setOptionalDescriptionValue( editBuff->getOptionalDescriptionValue() );
						}
						editSchemaDef->setRequiredCopyrightPeriod( editBuff->getRequiredCopyrightPeriod() );
						editSchemaDef->setRequiredCopyrightHolder( editBuff->getRequiredCopyrightHolder() );
						editSchemaDef->setRequiredAuthorEMail( editBuff->getRequiredAuthorEMail() );
						editSchemaDef->setRequiredProjectURL( editBuff->getRequiredProjectURL() );
						editSchemaDef->setRequiredPublishURI( editBuff->getRequiredPublishURI() );
						editSchemaDef->setRequiredCommonLicenseCode( editBuff->getRequiredCommonLicenseCode() );
						editSchemaDef->setRequiredCommonLicenseName( editBuff->getRequiredCommonLicenseName() );
						editSchemaDef->setRequiredCommonLicenseText( editBuff->getRequiredCommonLicenseText() );
						if( editBuff->isOptionalClientXFaceLicenseCodeNull() ) {
							editSchemaDef->setOptionalClientXFaceLicenseCodeNull();
						}
						else {
							editSchemaDef->setOptionalClientXFaceLicenseCodeValue( editBuff->getOptionalClientXFaceLicenseCodeValue() );
						}
						if( editBuff->isOptionalClientXFaceLicenseNameNull() ) {
							editSchemaDef->setOptionalClientXFaceLicenseNameNull();
						}
						else {
							editSchemaDef->setOptionalClientXFaceLicenseNameValue( editBuff->getOptionalClientXFaceLicenseNameValue() );
						}
						if( editBuff->isOptionalClientXFaceLicenseTextNull() ) {
							editSchemaDef->setOptionalClientXFaceLicenseTextNull();
						}
						else {
							editSchemaDef->setOptionalClientXFaceLicenseTextValue( editBuff->getOptionalClientXFaceLicenseTextValue() );
						}
						if( editBuff->isOptionalClientImplLicenseCodeNull() ) {
							editSchemaDef->setOptionalClientImplLicenseCodeNull();
						}
						else {
							editSchemaDef->setOptionalClientImplLicenseCodeValue( editBuff->getOptionalClientImplLicenseCodeValue() );
						}
						if( editBuff->isOptionalClientImplLicenseNameNull() ) {
							editSchemaDef->setOptionalClientImplLicenseNameNull();
						}
						else {
							editSchemaDef->setOptionalClientImplLicenseNameValue( editBuff->getOptionalClientImplLicenseNameValue() );
						}
						if( editBuff->isOptionalClientImplLicenseTextNull() ) {
							editSchemaDef->setOptionalClientImplLicenseTextNull();
						}
						else {
							editSchemaDef->setOptionalClientImplLicenseTextValue( editBuff->getOptionalClientImplLicenseTextValue() );
						}
						if( editBuff->isOptionalServerXFaceLicenseCodeNull() ) {
							editSchemaDef->setOptionalServerXFaceLicenseCodeNull();
						}
						else {
							editSchemaDef->setOptionalServerXFaceLicenseCodeValue( editBuff->getOptionalServerXFaceLicenseCodeValue() );
						}
						if( editBuff->isOptionalServerXFaceLicenseNameNull() ) {
							editSchemaDef->setOptionalServerXFaceLicenseNameNull();
						}
						else {
							editSchemaDef->setOptionalServerXFaceLicenseNameValue( editBuff->getOptionalServerXFaceLicenseNameValue() );
						}
						if( editBuff->isOptionalServerXFaceLicenseTextNull() ) {
							editSchemaDef->setOptionalServerXFaceLicenseTextNull();
						}
						else {
							editSchemaDef->setOptionalServerXFaceLicenseTextValue( editBuff->getOptionalServerXFaceLicenseTextValue() );
						}
						if( editBuff->isOptionalServerImplLicenseCodeNull() ) {
							editSchemaDef->setOptionalServerImplLicenseCodeNull();
						}
						else {
							editSchemaDef->setOptionalServerImplLicenseCodeValue( editBuff->getOptionalServerImplLicenseCodeValue() );
						}
						if( editBuff->isOptionalServerImplLicenseNameNull() ) {
							editSchemaDef->setOptionalServerImplLicenseNameNull();
						}
						else {
							editSchemaDef->setOptionalServerImplLicenseNameValue( editBuff->getOptionalServerImplLicenseNameValue() );
						}
						if( editBuff->isOptionalServerImplLicenseTextNull() ) {
							editSchemaDef->setOptionalServerImplLicenseTextNull();
						}
						else {
							editSchemaDef->setOptionalServerImplLicenseTextValue( editBuff->getOptionalServerImplLicenseTextValue() );
						}
						if( editBuff->isOptionalJSchemaObjImportNull() ) {
							editSchemaDef->setOptionalJSchemaObjImportNull();
						}
						else {
							editSchemaDef->setOptionalJSchemaObjImportValue( editBuff->getOptionalJSchemaObjImportValue() );
						}
						if( editBuff->isOptionalJSchemaObjInterfaceNull() ) {
							editSchemaDef->setOptionalJSchemaObjInterfaceNull();
						}
						else {
							editSchemaDef->setOptionalJSchemaObjInterfaceValue( editBuff->getOptionalJSchemaObjInterfaceValue() );
						}
						if( editBuff->isOptionalJSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalJSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalJSchemaObjMembersValue( editBuff->getOptionalJSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalJSchemaObjImplementationNull() ) {
							editSchemaDef->setOptionalJSchemaObjImplementationNull();
						}
						else {
							editSchemaDef->setOptionalJSchemaObjImplementationValue( editBuff->getOptionalJSchemaObjImplementationValue() );
						}
						if( editBuff->isOptionalJDb2LUWSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalJDb2LUWSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalJDb2LUWSchemaObjMembersValue( editBuff->getOptionalJDb2LUWSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalJDb2LUWSchemaObjImplNull() ) {
							editSchemaDef->setOptionalJDb2LUWSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalJDb2LUWSchemaObjImplValue( editBuff->getOptionalJDb2LUWSchemaObjImplValue() );
						}
						if( editBuff->isOptionalJDb2LUWSchemaObjImportNull() ) {
							editSchemaDef->setOptionalJDb2LUWSchemaObjImportNull();
						}
						else {
							editSchemaDef->setOptionalJDb2LUWSchemaObjImportValue( editBuff->getOptionalJDb2LUWSchemaObjImportValue() );
						}
						if( editBuff->isOptionalJMSSqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalJMSSqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalJMSSqlSchemaObjMembersValue( editBuff->getOptionalJMSSqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalJMSSqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalJMSSqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalJMSSqlSchemaObjImplValue( editBuff->getOptionalJMSSqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalJMSSqlSchemaObjImportNull() ) {
							editSchemaDef->setOptionalJMSSqlSchemaObjImportNull();
						}
						else {
							editSchemaDef->setOptionalJMSSqlSchemaObjImportValue( editBuff->getOptionalJMSSqlSchemaObjImportValue() );
						}
						if( editBuff->isOptionalJMySqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalJMySqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalJMySqlSchemaObjMembersValue( editBuff->getOptionalJMySqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalJMySqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalJMySqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalJMySqlSchemaObjImplValue( editBuff->getOptionalJMySqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalJMySqlSchemaObjImportNull() ) {
							editSchemaDef->setOptionalJMySqlSchemaObjImportNull();
						}
						else {
							editSchemaDef->setOptionalJMySqlSchemaObjImportValue( editBuff->getOptionalJMySqlSchemaObjImportValue() );
						}
						if( editBuff->isOptionalJOracleSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalJOracleSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalJOracleSchemaObjMembersValue( editBuff->getOptionalJOracleSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalJOracleSchemaObjImplNull() ) {
							editSchemaDef->setOptionalJOracleSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalJOracleSchemaObjImplValue( editBuff->getOptionalJOracleSchemaObjImplValue() );
						}
						if( editBuff->isOptionalJOracleSchemaObjImportNull() ) {
							editSchemaDef->setOptionalJOracleSchemaObjImportNull();
						}
						else {
							editSchemaDef->setOptionalJOracleSchemaObjImportValue( editBuff->getOptionalJOracleSchemaObjImportValue() );
						}
						if( editBuff->isOptionalJPgSqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalJPgSqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalJPgSqlSchemaObjMembersValue( editBuff->getOptionalJPgSqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalJPgSqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalJPgSqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalJPgSqlSchemaObjImplValue( editBuff->getOptionalJPgSqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalJPgSqlSchemaObjImportNull() ) {
							editSchemaDef->setOptionalJPgSqlSchemaObjImportNull();
						}
						else {
							editSchemaDef->setOptionalJPgSqlSchemaObjImportValue( editBuff->getOptionalJPgSqlSchemaObjImportValue() );
						}
						if( editBuff->isOptionalJRamSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalJRamSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalJRamSchemaObjMembersValue( editBuff->getOptionalJRamSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalJRamSchemaObjImplNull() ) {
							editSchemaDef->setOptionalJRamSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalJRamSchemaObjImplValue( editBuff->getOptionalJRamSchemaObjImplValue() );
						}
						if( editBuff->isOptionalJRamSchemaObjImportNull() ) {
							editSchemaDef->setOptionalJRamSchemaObjImportNull();
						}
						else {
							editSchemaDef->setOptionalJRamSchemaObjImportValue( editBuff->getOptionalJRamSchemaObjImportValue() );
						}
						if( editBuff->isOptionalJXMsgSchemaImportNull() ) {
							editSchemaDef->setOptionalJXMsgSchemaImportNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgSchemaImportValue( editBuff->getOptionalJXMsgSchemaImportValue() );
						}
						if( editBuff->isOptionalJXMsgSchemaFormattersNull() ) {
							editSchemaDef->setOptionalJXMsgSchemaFormattersNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgSchemaFormattersValue( editBuff->getOptionalJXMsgSchemaFormattersValue() );
						}
						if( editBuff->isOptionalJXMsgClientSchemaImportNull() ) {
							editSchemaDef->setOptionalJXMsgClientSchemaImportNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgClientSchemaImportValue( editBuff->getOptionalJXMsgClientSchemaImportValue() );
						}
						if( editBuff->isOptionalJXMsgClientSchemaBodyNull() ) {
							editSchemaDef->setOptionalJXMsgClientSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgClientSchemaBodyValue( editBuff->getOptionalJXMsgClientSchemaBodyValue() );
						}
						if( editBuff->isOptionalJXMsgRqstSchemaBodyNull() ) {
							editSchemaDef->setOptionalJXMsgRqstSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRqstSchemaBodyValue( editBuff->getOptionalJXMsgRqstSchemaBodyValue() );
						}
						if( editBuff->isOptionalJXMsgRqstSchemaImportNull() ) {
							editSchemaDef->setOptionalJXMsgRqstSchemaImportNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRqstSchemaImportValue( editBuff->getOptionalJXMsgRqstSchemaImportValue() );
						}
						if( editBuff->isOptionalJXMsgRqstSchemaWireParsersNull() ) {
							editSchemaDef->setOptionalJXMsgRqstSchemaWireParsersNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRqstSchemaWireParsersValue( editBuff->getOptionalJXMsgRqstSchemaWireParsersValue() );
						}
						if( editBuff->isOptionalJXMsgRqstSchemaXsdSpecNull() ) {
							editSchemaDef->setOptionalJXMsgRqstSchemaXsdSpecNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRqstSchemaXsdSpecValue( editBuff->getOptionalJXMsgRqstSchemaXsdSpecValue() );
						}
						if( editBuff->isOptionalJXMsgRqstSchemaXsdElementListNull() ) {
							editSchemaDef->setOptionalJXMsgRqstSchemaXsdElementListNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRqstSchemaXsdElementListValue( editBuff->getOptionalJXMsgRqstSchemaXsdElementListValue() );
						}
						if( editBuff->isOptionalJXMsgRspnSchemaBodyNull() ) {
							editSchemaDef->setOptionalJXMsgRspnSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRspnSchemaBodyValue( editBuff->getOptionalJXMsgRspnSchemaBodyValue() );
						}
						if( editBuff->isOptionalJXMsgRspnSchemaImportNull() ) {
							editSchemaDef->setOptionalJXMsgRspnSchemaImportNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRspnSchemaImportValue( editBuff->getOptionalJXMsgRspnSchemaImportValue() );
						}
						if( editBuff->isOptionalJXMsgRspnSchemaWireParsersNull() ) {
							editSchemaDef->setOptionalJXMsgRspnSchemaWireParsersNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRspnSchemaWireParsersValue( editBuff->getOptionalJXMsgRspnSchemaWireParsersValue() );
						}
						if( editBuff->isOptionalJXMsgRspnSchemaXsdElementListNull() ) {
							editSchemaDef->setOptionalJXMsgRspnSchemaXsdElementListNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRspnSchemaXsdElementListValue( editBuff->getOptionalJXMsgRspnSchemaXsdElementListValue() );
						}
						if( editBuff->isOptionalJXMsgRspnSchemaXsdSpecNull() ) {
							editSchemaDef->setOptionalJXMsgRspnSchemaXsdSpecNull();
						}
						else {
							editSchemaDef->setOptionalJXMsgRspnSchemaXsdSpecValue( editBuff->getOptionalJXMsgRspnSchemaXsdSpecValue() );
						}
						if( editBuff->isOptionalCppSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalCppSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppSchemaObjIncludeValue( editBuff->getOptionalCppSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalCppSchemaObjInterfaceNull() ) {
							editSchemaDef->setOptionalCppSchemaObjInterfaceNull();
						}
						else {
							editSchemaDef->setOptionalCppSchemaObjInterfaceValue( editBuff->getOptionalCppSchemaObjInterfaceValue() );
						}
						if( editBuff->isOptionalCppSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCppSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCppSchemaObjMembersValue( editBuff->getOptionalCppSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCppSchemaObjImplementationNull() ) {
							editSchemaDef->setOptionalCppSchemaObjImplementationNull();
						}
						else {
							editSchemaDef->setOptionalCppSchemaObjImplementationValue( editBuff->getOptionalCppSchemaObjImplementationValue() );
						}
						if( editBuff->isOptionalCppDb2LUWSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCppDb2LUWSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCppDb2LUWSchemaObjMembersValue( editBuff->getOptionalCppDb2LUWSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCppDb2LUWSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCppDb2LUWSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCppDb2LUWSchemaObjImplValue( editBuff->getOptionalCppDb2LUWSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCppDb2LUWSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalCppDb2LUWSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppDb2LUWSchemaObjIncludeValue( editBuff->getOptionalCppDb2LUWSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalCppMSSqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCppMSSqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCppMSSqlSchemaObjMembersValue( editBuff->getOptionalCppMSSqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCppMSSqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCppMSSqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCppMSSqlSchemaObjImplValue( editBuff->getOptionalCppMSSqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCppMSSqlSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalCppMSSqlSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppMSSqlSchemaObjIncludeValue( editBuff->getOptionalCppMSSqlSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalCppMySqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCppMySqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCppMySqlSchemaObjMembersValue( editBuff->getOptionalCppMySqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCppMySqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCppMySqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCppMySqlSchemaObjImplValue( editBuff->getOptionalCppMySqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCppMySqlSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalCppMySqlSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppMySqlSchemaObjIncludeValue( editBuff->getOptionalCppMySqlSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalCppOracleSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCppOracleSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCppOracleSchemaObjMembersValue( editBuff->getOptionalCppOracleSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCppOracleSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCppOracleSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCppOracleSchemaObjImplValue( editBuff->getOptionalCppOracleSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCppOracleSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalCppOracleSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppOracleSchemaObjIncludeValue( editBuff->getOptionalCppOracleSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalCppPgSqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCppPgSqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCppPgSqlSchemaObjMembersValue( editBuff->getOptionalCppPgSqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCppPgSqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCppPgSqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCppPgSqlSchemaObjImplValue( editBuff->getOptionalCppPgSqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCppPgSqlSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalCppPgSqlSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppPgSqlSchemaObjIncludeValue( editBuff->getOptionalCppPgSqlSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalCppRamSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCppRamSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCppRamSchemaObjMembersValue( editBuff->getOptionalCppRamSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCppRamSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCppRamSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCppRamSchemaObjImplValue( editBuff->getOptionalCppRamSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCppRamSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalCppRamSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppRamSchemaObjIncludeValue( editBuff->getOptionalCppRamSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalCppXMsgSchemaIncludeNull() ) {
							editSchemaDef->setOptionalCppXMsgSchemaIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgSchemaIncludeValue( editBuff->getOptionalCppXMsgSchemaIncludeValue() );
						}
						if( editBuff->isOptionalCppXMsgSchemaFormattersNull() ) {
							editSchemaDef->setOptionalCppXMsgSchemaFormattersNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgSchemaFormattersValue( editBuff->getOptionalCppXMsgSchemaFormattersValue() );
						}
						if( editBuff->isOptionalCppXMsgClientSchemaIncludeNull() ) {
							editSchemaDef->setOptionalCppXMsgClientSchemaIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgClientSchemaIncludeValue( editBuff->getOptionalCppXMsgClientSchemaIncludeValue() );
						}
						if( editBuff->isOptionalCppXMsgClientSchemaBodyNull() ) {
							editSchemaDef->setOptionalCppXMsgClientSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgClientSchemaBodyValue( editBuff->getOptionalCppXMsgClientSchemaBodyValue() );
						}
						if( editBuff->isOptionalCppXMsgRqstSchemaBodyNull() ) {
							editSchemaDef->setOptionalCppXMsgRqstSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRqstSchemaBodyValue( editBuff->getOptionalCppXMsgRqstSchemaBodyValue() );
						}
						if( editBuff->isOptionalCppXMsgRqstSchemaIncludeNull() ) {
							editSchemaDef->setOptionalCppXMsgRqstSchemaIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRqstSchemaIncludeValue( editBuff->getOptionalCppXMsgRqstSchemaIncludeValue() );
						}
						if( editBuff->isOptionalCppXMsgRqstSchemaWireParsersNull() ) {
							editSchemaDef->setOptionalCppXMsgRqstSchemaWireParsersNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRqstSchemaWireParsersValue( editBuff->getOptionalCppXMsgRqstSchemaWireParsersValue() );
						}
						if( editBuff->isOptionalCppXMsgRqstSchemaXsdSpecNull() ) {
							editSchemaDef->setOptionalCppXMsgRqstSchemaXsdSpecNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRqstSchemaXsdSpecValue( editBuff->getOptionalCppXMsgRqstSchemaXsdSpecValue() );
						}
						if( editBuff->isOptionalCppXMsgRqstSchemaXsdElementListNull() ) {
							editSchemaDef->setOptionalCppXMsgRqstSchemaXsdElementListNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRqstSchemaXsdElementListValue( editBuff->getOptionalCppXMsgRqstSchemaXsdElementListValue() );
						}
						if( editBuff->isOptionalCppXMsgRspnSchemaBodyNull() ) {
							editSchemaDef->setOptionalCppXMsgRspnSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRspnSchemaBodyValue( editBuff->getOptionalCppXMsgRspnSchemaBodyValue() );
						}
						if( editBuff->isOptionalCppXMsgRspnSchemaIncludeNull() ) {
							editSchemaDef->setOptionalCppXMsgRspnSchemaIncludeNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRspnSchemaIncludeValue( editBuff->getOptionalCppXMsgRspnSchemaIncludeValue() );
						}
						if( editBuff->isOptionalCppXMsgRspnSchemaWireParsersNull() ) {
							editSchemaDef->setOptionalCppXMsgRspnSchemaWireParsersNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRspnSchemaWireParsersValue( editBuff->getOptionalCppXMsgRspnSchemaWireParsersValue() );
						}
						if( editBuff->isOptionalCppXMsgRspnSchemaXsdElementListNull() ) {
							editSchemaDef->setOptionalCppXMsgRspnSchemaXsdElementListNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRspnSchemaXsdElementListValue( editBuff->getOptionalCppXMsgRspnSchemaXsdElementListValue() );
						}
						if( editBuff->isOptionalCppXMsgRspnSchemaXsdSpecNull() ) {
							editSchemaDef->setOptionalCppXMsgRspnSchemaXsdSpecNull();
						}
						else {
							editSchemaDef->setOptionalCppXMsgRspnSchemaXsdSpecValue( editBuff->getOptionalCppXMsgRspnSchemaXsdSpecValue() );
						}
						if( editBuff->isOptionalHppSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalHppSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppSchemaObjIncludeValue( editBuff->getOptionalHppSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalHppSchemaObjInterfaceNull() ) {
							editSchemaDef->setOptionalHppSchemaObjInterfaceNull();
						}
						else {
							editSchemaDef->setOptionalHppSchemaObjInterfaceValue( editBuff->getOptionalHppSchemaObjInterfaceValue() );
						}
						if( editBuff->isOptionalHppSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalHppSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalHppSchemaObjMembersValue( editBuff->getOptionalHppSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalHppSchemaObjImplementationNull() ) {
							editSchemaDef->setOptionalHppSchemaObjImplementationNull();
						}
						else {
							editSchemaDef->setOptionalHppSchemaObjImplementationValue( editBuff->getOptionalHppSchemaObjImplementationValue() );
						}
						if( editBuff->isOptionalHppDb2LUWSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalHppDb2LUWSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalHppDb2LUWSchemaObjMembersValue( editBuff->getOptionalHppDb2LUWSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalHppDb2LUWSchemaObjImplNull() ) {
							editSchemaDef->setOptionalHppDb2LUWSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalHppDb2LUWSchemaObjImplValue( editBuff->getOptionalHppDb2LUWSchemaObjImplValue() );
						}
						if( editBuff->isOptionalHppDb2LUWSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalHppDb2LUWSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppDb2LUWSchemaObjIncludeValue( editBuff->getOptionalHppDb2LUWSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalHppMSSqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalHppMSSqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalHppMSSqlSchemaObjMembersValue( editBuff->getOptionalHppMSSqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalHppMSSqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalHppMSSqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalHppMSSqlSchemaObjImplValue( editBuff->getOptionalHppMSSqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalHppMSSqlSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalHppMSSqlSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppMSSqlSchemaObjIncludeValue( editBuff->getOptionalHppMSSqlSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalHppMySqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalHppMySqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalHppMySqlSchemaObjMembersValue( editBuff->getOptionalHppMySqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalHppMySqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalHppMySqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalHppMySqlSchemaObjImplValue( editBuff->getOptionalHppMySqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalHppMySqlSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalHppMySqlSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppMySqlSchemaObjIncludeValue( editBuff->getOptionalHppMySqlSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalHppOracleSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalHppOracleSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalHppOracleSchemaObjMembersValue( editBuff->getOptionalHppOracleSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalHppOracleSchemaObjImplNull() ) {
							editSchemaDef->setOptionalHppOracleSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalHppOracleSchemaObjImplValue( editBuff->getOptionalHppOracleSchemaObjImplValue() );
						}
						if( editBuff->isOptionalHppOracleSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalHppOracleSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppOracleSchemaObjIncludeValue( editBuff->getOptionalHppOracleSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalHppPgSqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalHppPgSqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalHppPgSqlSchemaObjMembersValue( editBuff->getOptionalHppPgSqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalHppPgSqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalHppPgSqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalHppPgSqlSchemaObjImplValue( editBuff->getOptionalHppPgSqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalHppPgSqlSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalHppPgSqlSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppPgSqlSchemaObjIncludeValue( editBuff->getOptionalHppPgSqlSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalHppRamSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalHppRamSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalHppRamSchemaObjMembersValue( editBuff->getOptionalHppRamSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalHppRamSchemaObjImplNull() ) {
							editSchemaDef->setOptionalHppRamSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalHppRamSchemaObjImplValue( editBuff->getOptionalHppRamSchemaObjImplValue() );
						}
						if( editBuff->isOptionalHppRamSchemaObjIncludeNull() ) {
							editSchemaDef->setOptionalHppRamSchemaObjIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppRamSchemaObjIncludeValue( editBuff->getOptionalHppRamSchemaObjIncludeValue() );
						}
						if( editBuff->isOptionalHppXMsgSchemaIncludeNull() ) {
							editSchemaDef->setOptionalHppXMsgSchemaIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgSchemaIncludeValue( editBuff->getOptionalHppXMsgSchemaIncludeValue() );
						}
						if( editBuff->isOptionalHppXMsgSchemaFormattersNull() ) {
							editSchemaDef->setOptionalHppXMsgSchemaFormattersNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgSchemaFormattersValue( editBuff->getOptionalHppXMsgSchemaFormattersValue() );
						}
						if( editBuff->isOptionalHppXMsgClientSchemaIncludeNull() ) {
							editSchemaDef->setOptionalHppXMsgClientSchemaIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgClientSchemaIncludeValue( editBuff->getOptionalHppXMsgClientSchemaIncludeValue() );
						}
						if( editBuff->isOptionalHppXMsgClientSchemaBodyNull() ) {
							editSchemaDef->setOptionalHppXMsgClientSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgClientSchemaBodyValue( editBuff->getOptionalHppXMsgClientSchemaBodyValue() );
						}
						if( editBuff->isOptionalHppXMsgRqstSchemaBodyNull() ) {
							editSchemaDef->setOptionalHppXMsgRqstSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRqstSchemaBodyValue( editBuff->getOptionalHppXMsgRqstSchemaBodyValue() );
						}
						if( editBuff->isOptionalHppXMsgRqstSchemaIncludeNull() ) {
							editSchemaDef->setOptionalHppXMsgRqstSchemaIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRqstSchemaIncludeValue( editBuff->getOptionalHppXMsgRqstSchemaIncludeValue() );
						}
						if( editBuff->isOptionalHppXMsgRqstSchemaWireParsersNull() ) {
							editSchemaDef->setOptionalHppXMsgRqstSchemaWireParsersNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRqstSchemaWireParsersValue( editBuff->getOptionalHppXMsgRqstSchemaWireParsersValue() );
						}
						if( editBuff->isOptionalHppXMsgRqstSchemaXsdSpecNull() ) {
							editSchemaDef->setOptionalHppXMsgRqstSchemaXsdSpecNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRqstSchemaXsdSpecValue( editBuff->getOptionalHppXMsgRqstSchemaXsdSpecValue() );
						}
						if( editBuff->isOptionalHppXMsgRqstSchemaXsdElementListNull() ) {
							editSchemaDef->setOptionalHppXMsgRqstSchemaXsdElementListNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRqstSchemaXsdElementListValue( editBuff->getOptionalHppXMsgRqstSchemaXsdElementListValue() );
						}
						if( editBuff->isOptionalHppXMsgRspnSchemaBodyNull() ) {
							editSchemaDef->setOptionalHppXMsgRspnSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRspnSchemaBodyValue( editBuff->getOptionalHppXMsgRspnSchemaBodyValue() );
						}
						if( editBuff->isOptionalHppXMsgRspnSchemaIncludeNull() ) {
							editSchemaDef->setOptionalHppXMsgRspnSchemaIncludeNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRspnSchemaIncludeValue( editBuff->getOptionalHppXMsgRspnSchemaIncludeValue() );
						}
						if( editBuff->isOptionalHppXMsgRspnSchemaWireParsersNull() ) {
							editSchemaDef->setOptionalHppXMsgRspnSchemaWireParsersNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRspnSchemaWireParsersValue( editBuff->getOptionalHppXMsgRspnSchemaWireParsersValue() );
						}
						if( editBuff->isOptionalHppXMsgRspnSchemaXsdElementListNull() ) {
							editSchemaDef->setOptionalHppXMsgRspnSchemaXsdElementListNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRspnSchemaXsdElementListValue( editBuff->getOptionalHppXMsgRspnSchemaXsdElementListValue() );
						}
						if( editBuff->isOptionalHppXMsgRspnSchemaXsdSpecNull() ) {
							editSchemaDef->setOptionalHppXMsgRspnSchemaXsdSpecNull();
						}
						else {
							editSchemaDef->setOptionalHppXMsgRspnSchemaXsdSpecValue( editBuff->getOptionalHppXMsgRspnSchemaXsdSpecValue() );
						}
						if( editBuff->isOptionalCsSchemaObjUsingNull() ) {
							editSchemaDef->setOptionalCsSchemaObjUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsSchemaObjUsingValue( editBuff->getOptionalCsSchemaObjUsingValue() );
						}
						if( editBuff->isOptionalCsSchemaObjInterfaceNull() ) {
							editSchemaDef->setOptionalCsSchemaObjInterfaceNull();
						}
						else {
							editSchemaDef->setOptionalCsSchemaObjInterfaceValue( editBuff->getOptionalCsSchemaObjInterfaceValue() );
						}
						if( editBuff->isOptionalCsSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCsSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCsSchemaObjMembersValue( editBuff->getOptionalCsSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCsSchemaObjImplementationNull() ) {
							editSchemaDef->setOptionalCsSchemaObjImplementationNull();
						}
						else {
							editSchemaDef->setOptionalCsSchemaObjImplementationValue( editBuff->getOptionalCsSchemaObjImplementationValue() );
						}
						if( editBuff->isOptionalCsDb2LUWSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCsDb2LUWSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCsDb2LUWSchemaObjMembersValue( editBuff->getOptionalCsDb2LUWSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCsDb2LUWSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCsDb2LUWSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCsDb2LUWSchemaObjImplValue( editBuff->getOptionalCsDb2LUWSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCsDb2LUWSchemaObjUsingNull() ) {
							editSchemaDef->setOptionalCsDb2LUWSchemaObjUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsDb2LUWSchemaObjUsingValue( editBuff->getOptionalCsDb2LUWSchemaObjUsingValue() );
						}
						if( editBuff->isOptionalCsMSSqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCsMSSqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCsMSSqlSchemaObjMembersValue( editBuff->getOptionalCsMSSqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCsMSSqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCsMSSqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCsMSSqlSchemaObjImplValue( editBuff->getOptionalCsMSSqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCsMSSqlSchemaObjUsingNull() ) {
							editSchemaDef->setOptionalCsMSSqlSchemaObjUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsMSSqlSchemaObjUsingValue( editBuff->getOptionalCsMSSqlSchemaObjUsingValue() );
						}
						if( editBuff->isOptionalCsMySqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCsMySqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCsMySqlSchemaObjMembersValue( editBuff->getOptionalCsMySqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCsMySqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCsMySqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCsMySqlSchemaObjImplValue( editBuff->getOptionalCsMySqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCsMySqlSchemaObjUsingNull() ) {
							editSchemaDef->setOptionalCsMySqlSchemaObjUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsMySqlSchemaObjUsingValue( editBuff->getOptionalCsMySqlSchemaObjUsingValue() );
						}
						if( editBuff->isOptionalCsOracleSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCsOracleSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCsOracleSchemaObjMembersValue( editBuff->getOptionalCsOracleSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCsOracleSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCsOracleSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCsOracleSchemaObjImplValue( editBuff->getOptionalCsOracleSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCsOracleSchemaObjUsingNull() ) {
							editSchemaDef->setOptionalCsOracleSchemaObjUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsOracleSchemaObjUsingValue( editBuff->getOptionalCsOracleSchemaObjUsingValue() );
						}
						if( editBuff->isOptionalCsPgSqlSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCsPgSqlSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCsPgSqlSchemaObjMembersValue( editBuff->getOptionalCsPgSqlSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCsPgSqlSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCsPgSqlSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCsPgSqlSchemaObjImplValue( editBuff->getOptionalCsPgSqlSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCsPgSqlSchemaObjUsingNull() ) {
							editSchemaDef->setOptionalCsPgSqlSchemaObjUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsPgSqlSchemaObjUsingValue( editBuff->getOptionalCsPgSqlSchemaObjUsingValue() );
						}
						if( editBuff->isOptionalCsRamSchemaObjMembersNull() ) {
							editSchemaDef->setOptionalCsRamSchemaObjMembersNull();
						}
						else {
							editSchemaDef->setOptionalCsRamSchemaObjMembersValue( editBuff->getOptionalCsRamSchemaObjMembersValue() );
						}
						if( editBuff->isOptionalCsRamSchemaObjImplNull() ) {
							editSchemaDef->setOptionalCsRamSchemaObjImplNull();
						}
						else {
							editSchemaDef->setOptionalCsRamSchemaObjImplValue( editBuff->getOptionalCsRamSchemaObjImplValue() );
						}
						if( editBuff->isOptionalCsRamSchemaObjUsingNull() ) {
							editSchemaDef->setOptionalCsRamSchemaObjUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsRamSchemaObjUsingValue( editBuff->getOptionalCsRamSchemaObjUsingValue() );
						}
						if( editBuff->isOptionalCsXMsgSchemaUsingNull() ) {
							editSchemaDef->setOptionalCsXMsgSchemaUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgSchemaUsingValue( editBuff->getOptionalCsXMsgSchemaUsingValue() );
						}
						if( editBuff->isOptionalCsXMsgSchemaFormattersNull() ) {
							editSchemaDef->setOptionalCsXMsgSchemaFormattersNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgSchemaFormattersValue( editBuff->getOptionalCsXMsgSchemaFormattersValue() );
						}
						if( editBuff->isOptionalCsXMsgClientSchemaUsingNull() ) {
							editSchemaDef->setOptionalCsXMsgClientSchemaUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgClientSchemaUsingValue( editBuff->getOptionalCsXMsgClientSchemaUsingValue() );
						}
						if( editBuff->isOptionalCsXMsgClientSchemaBodyNull() ) {
							editSchemaDef->setOptionalCsXMsgClientSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgClientSchemaBodyValue( editBuff->getOptionalCsXMsgClientSchemaBodyValue() );
						}
						if( editBuff->isOptionalCsXMsgRqstSchemaBodyNull() ) {
							editSchemaDef->setOptionalCsXMsgRqstSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRqstSchemaBodyValue( editBuff->getOptionalCsXMsgRqstSchemaBodyValue() );
						}
						if( editBuff->isOptionalCsXMsgRqstSchemaUsingNull() ) {
							editSchemaDef->setOptionalCsXMsgRqstSchemaUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRqstSchemaUsingValue( editBuff->getOptionalCsXMsgRqstSchemaUsingValue() );
						}
						if( editBuff->isOptionalCsXMsgRqstSchemaWireParsersNull() ) {
							editSchemaDef->setOptionalCsXMsgRqstSchemaWireParsersNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRqstSchemaWireParsersValue( editBuff->getOptionalCsXMsgRqstSchemaWireParsersValue() );
						}
						if( editBuff->isOptionalCsXMsgRqstSchemaXsdSpecNull() ) {
							editSchemaDef->setOptionalCsXMsgRqstSchemaXsdSpecNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRqstSchemaXsdSpecValue( editBuff->getOptionalCsXMsgRqstSchemaXsdSpecValue() );
						}
						if( editBuff->isOptionalCsXMsgRqstSchemaXsdElementListNull() ) {
							editSchemaDef->setOptionalCsXMsgRqstSchemaXsdElementListNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRqstSchemaXsdElementListValue( editBuff->getOptionalCsXMsgRqstSchemaXsdElementListValue() );
						}
						if( editBuff->isOptionalCsXMsgRspnSchemaBodyNull() ) {
							editSchemaDef->setOptionalCsXMsgRspnSchemaBodyNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRspnSchemaBodyValue( editBuff->getOptionalCsXMsgRspnSchemaBodyValue() );
						}
						if( editBuff->isOptionalCsXMsgRspnSchemaUsingNull() ) {
							editSchemaDef->setOptionalCsXMsgRspnSchemaUsingNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRspnSchemaUsingValue( editBuff->getOptionalCsXMsgRspnSchemaUsingValue() );
						}
						if( editBuff->isOptionalCsXMsgRspnSchemaWireParsersNull() ) {
							editSchemaDef->setOptionalCsXMsgRspnSchemaWireParsersNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRspnSchemaWireParsersValue( editBuff->getOptionalCsXMsgRspnSchemaWireParsersValue() );
						}
						if( editBuff->isOptionalCsXMsgRspnSchemaXsdElementListNull() ) {
							editSchemaDef->setOptionalCsXMsgRspnSchemaXsdElementListNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRspnSchemaXsdElementListValue( editBuff->getOptionalCsXMsgRspnSchemaXsdElementListValue() );
						}
						if( editBuff->isOptionalCsXMsgRspnSchemaXsdSpecNull() ) {
							editSchemaDef->setOptionalCsXMsgRspnSchemaXsdSpecNull();
						}
						else {
							editSchemaDef->setOptionalCsXMsgRspnSchemaXsdSpecValue( editBuff->getOptionalCsXMsgRspnSchemaXsdSpecValue() );
						}
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace:
						editSchemaDef = dynamic_cast<cfbam::ICFBamSchemaDefEditObj*>( origSchemaDef->beginEdit() );
						editSchemaDef->deleteInstance();
						editSchemaDef = NULL;
						origSchemaDef = NULL;
						editSchemaDef = editBuff;
						editBuff = NULL;
						break;
				}
			}

			if( editSchemaDef != NULL ) {
				if( origSchemaDef != NULL ) {
					editSchemaDef->update();
				}
				else {
					origSchemaDef = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( editSchemaDef->create() );
				}
				editSchemaDef = NULL;
			}

			if( ! tmpBuff->getIsNew() ) {
				tmpBuff = NULL;
			}

			curContext->setObj( origSchemaDef );

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

		if( natDbName != NULL ) {
			delete natDbName;
			natDbName = NULL;
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

		if( natCopyrightPeriod != NULL ) {
			delete natCopyrightPeriod;
			natCopyrightPeriod = NULL;
		}

		if( natCopyrightHolder != NULL ) {
			delete natCopyrightHolder;
			natCopyrightHolder = NULL;
		}

		if( natAuthorEMail != NULL ) {
			delete natAuthorEMail;
			natAuthorEMail = NULL;
		}

		if( natProjectURL != NULL ) {
			delete natProjectURL;
			natProjectURL = NULL;
		}

		if( natPublishURI != NULL ) {
			delete natPublishURI;
			natPublishURI = NULL;
		}

		if( natCommonLicenseCode != NULL ) {
			delete natCommonLicenseCode;
			natCommonLicenseCode = NULL;
		}

		if( natCommonLicenseName != NULL ) {
			delete natCommonLicenseName;
			natCommonLicenseName = NULL;
		}

		if( natCommonLicenseText != NULL ) {
			delete natCommonLicenseText;
			natCommonLicenseText = NULL;
		}

		if( natClientXFaceLicenseCode != NULL ) {
			delete natClientXFaceLicenseCode;
			natClientXFaceLicenseCode = NULL;
		}

		if( natClientXFaceLicenseName != NULL ) {
			delete natClientXFaceLicenseName;
			natClientXFaceLicenseName = NULL;
		}

		if( natClientXFaceLicenseText != NULL ) {
			delete natClientXFaceLicenseText;
			natClientXFaceLicenseText = NULL;
		}

		if( natClientImplLicenseCode != NULL ) {
			delete natClientImplLicenseCode;
			natClientImplLicenseCode = NULL;
		}

		if( natClientImplLicenseName != NULL ) {
			delete natClientImplLicenseName;
			natClientImplLicenseName = NULL;
		}

		if( natClientImplLicenseText != NULL ) {
			delete natClientImplLicenseText;
			natClientImplLicenseText = NULL;
		}

		if( natServerXFaceLicenseCode != NULL ) {
			delete natServerXFaceLicenseCode;
			natServerXFaceLicenseCode = NULL;
		}

		if( natServerXFaceLicenseName != NULL ) {
			delete natServerXFaceLicenseName;
			natServerXFaceLicenseName = NULL;
		}

		if( natServerXFaceLicenseText != NULL ) {
			delete natServerXFaceLicenseText;
			natServerXFaceLicenseText = NULL;
		}

		if( natServerImplLicenseCode != NULL ) {
			delete natServerImplLicenseCode;
			natServerImplLicenseCode = NULL;
		}

		if( natServerImplLicenseName != NULL ) {
			delete natServerImplLicenseName;
			natServerImplLicenseName = NULL;
		}

		if( natServerImplLicenseText != NULL ) {
			delete natServerImplLicenseText;
			natServerImplLicenseText = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrDbName != NULL ) {
			delete attrDbName;
			attrDbName = NULL;
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

		if( attrCopyrightPeriod != NULL ) {
			delete attrCopyrightPeriod;
			attrCopyrightPeriod = NULL;
		}

		if( attrCopyrightHolder != NULL ) {
			delete attrCopyrightHolder;
			attrCopyrightHolder = NULL;
		}

		if( attrAuthorEMail != NULL ) {
			delete attrAuthorEMail;
			attrAuthorEMail = NULL;
		}

		if( attrProjectURL != NULL ) {
			delete attrProjectURL;
			attrProjectURL = NULL;
		}

		if( attrPublishURI != NULL ) {
			delete attrPublishURI;
			attrPublishURI = NULL;
		}

		if( attrCommonLicenseCode != NULL ) {
			delete attrCommonLicenseCode;
			attrCommonLicenseCode = NULL;
		}

		if( attrCommonLicenseName != NULL ) {
			delete attrCommonLicenseName;
			attrCommonLicenseName = NULL;
		}

		if( attrCommonLicenseText != NULL ) {
			delete attrCommonLicenseText;
			attrCommonLicenseText = NULL;
		}

		if( attrClientXFaceLicenseCode != NULL ) {
			delete attrClientXFaceLicenseCode;
			attrClientXFaceLicenseCode = NULL;
		}

		if( attrClientXFaceLicenseName != NULL ) {
			delete attrClientXFaceLicenseName;
			attrClientXFaceLicenseName = NULL;
		}

		if( attrClientXFaceLicenseText != NULL ) {
			delete attrClientXFaceLicenseText;
			attrClientXFaceLicenseText = NULL;
		}

		if( attrClientImplLicenseCode != NULL ) {
			delete attrClientImplLicenseCode;
			attrClientImplLicenseCode = NULL;
		}

		if( attrClientImplLicenseName != NULL ) {
			delete attrClientImplLicenseName;
			attrClientImplLicenseName = NULL;
		}

		if( attrClientImplLicenseText != NULL ) {
			delete attrClientImplLicenseText;
			attrClientImplLicenseText = NULL;
		}

		if( attrServerXFaceLicenseCode != NULL ) {
			delete attrServerXFaceLicenseCode;
			attrServerXFaceLicenseCode = NULL;
		}

		if( attrServerXFaceLicenseName != NULL ) {
			delete attrServerXFaceLicenseName;
			attrServerXFaceLicenseName = NULL;
		}

		if( attrServerXFaceLicenseText != NULL ) {
			delete attrServerXFaceLicenseText;
			attrServerXFaceLicenseText = NULL;
		}

		if( attrServerImplLicenseCode != NULL ) {
			delete attrServerImplLicenseCode;
			attrServerImplLicenseCode = NULL;
		}

		if( attrServerImplLicenseName != NULL ) {
			delete attrServerImplLicenseName;
			attrServerImplLicenseName = NULL;
		}

		if( attrServerImplLicenseText != NULL ) {
			delete attrServerImplLicenseText;
			attrServerImplLicenseText = NULL;
		}

		if( editSchemaDef != NULL ) {
			editSchemaDef->endEdit();
			editSchemaDef = NULL;
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

	void CFBamSaxLoaderSchemaDefHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
