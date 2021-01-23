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
#include <cfbamcustxmlloader/CFBamCustXmlLoaderSchemaDefHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamCustXmlLoaderSchemaDefHandler::CLASS_NAME( "CFBamCustXmlLoaderSchemaDefHandler" );
	const std::string CFBamCustXmlLoaderSchemaDefHandler::S_True( "true" );
	const std::string CFBamCustXmlLoaderSchemaDefHandler::S_False( "false" );
	const std::string CFBamCustXmlLoaderSchemaDefHandler::S_Yes( "yes" );
	const std::string CFBamCustXmlLoaderSchemaDefHandler::S_No( "no" );
	const std::string CFBamCustXmlLoaderSchemaDefHandler::S_0( "0" );
	const std::string CFBamCustXmlLoaderSchemaDefHandler::S_1( "1" );

	CFBamCustXmlLoaderSchemaDefHandler::CFBamCustXmlLoaderSchemaDefHandler( cfbam::CFBamCustXmlLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamCustXmlLoaderSchemaDefHandler::~CFBamCustXmlLoaderSchemaDefHandler() {
	}

	void CFBamCustXmlLoaderSchemaDefHandler::startElement (
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
		static const std::string S_DefaultLicenseTenantId( "DefaultLicenseTenantId" );
		static const std::string S_DefaultLicenseId( "DefaultLicenseId" );
		static const std::string S_CopyrightPeriod( "CopyrightPeriod" );
		static const std::string S_CopyrightHolder( "CopyrightHolder" );
		static const std::string S_AuthorEMail( "AuthorEMail" );
		static const std::string S_ProjectURL( "ProjectURL" );
		static const std::string S_PublishURI( "PublishURI" );
		static const std::string S_MinorVersion( "MinorVersion" );
		static const std::string S_Tables( "Tables" );
		static const std::string S_Types( "Types" );
		static const std::string S_DefaultLicense( "DefaultLicense" );
		static const std::string S_SchemaRefs( "SchemaRefs" );
		static const std::string S_CTenant( "CTenant" );
		static const std::string S_Dot( "." );
		static const std::string S_ProcessSchema( "ProcessSchema" );
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
		cfbam::ICFBamSchemaDefObj* tmpBuff = NULL;
		cfbam::ICFBamSchemaDefEditObj* editBuff = NULL;
		cfbam::ICFBamSchemaDefObj* origSchemaDef = NULL;
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
		std::string* attrDefaultLicense = NULL;
		// SchemaDef References
		cfint::ICFIntMinorVersionObj* refMinorVersion = NULL;
		cfint::ICFIntLicenseObj* refDefaultLicense = NULL;
		cfsec::ICFSecTenantObj* refCTenant = NULL;
		// Native type conversions of attributes
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
			if( cppQName != "SchemaDef" ) {
				static const std::string Msg( "Expected QName to be 'SchemaDef'" );
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
				else if( *attrLocalName == S_DefaultLicense ) {
					if( attrDefaultLicense != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrDefaultLicense = new std::string( *cppValue );
					}
					else {
						attrDefaultLicense = NULL;
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
					*attrName + S_Dot + S_CopyrightPeriod );
			}
			if( attrCopyrightHolder == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_CopyrightHolder );
			}
			if( attrAuthorEMail == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_AuthorEMail );
			}
			if( attrProjectURL == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_ProjectURL );
			}
			if( attrPublishURI == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_PublishURI );
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
			// Lookup refDefaultLicense by qualified name
			if( ( attrDefaultLicense != NULL ) && ( attrDefaultLicense->length() > 0 ) ) {
				refDefaultLicense = dynamic_cast<cfint::ICFIntLicenseObj*>( editBuff->getNamedObject( schemaObj->getLicenseTableObj()->getObjQualifyingClassCode(),
					*attrDefaultLicense ) );
				if( refDefaultLicense == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						*attrName + " could not resolve DefaultLicense reference qualified name \"" + *attrDefaultLicense + "\" to table License" );
				}
			}
			else {
				refDefaultLicense = NULL;
			}
			editBuff->setOptionalLookupDefaultLicense( refDefaultLicense );

			origSchemaDef = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( schemaObj->getSchemaDefTableObj()->readSchemaDefByUNameIdx( refMinorVersion->getRequiredTenantId(),
				refMinorVersion->getRequiredId(),
				*attrName ) );
			if( origSchemaDef == NULL ) {
				origSchemaDef = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( editBuff->create() );
				editBuff = NULL;
				tmpBuff = NULL;
				curContext->putNamedTag( S_ProcessSchema, S_True );
			}
			else {
				editBuff->endEdit();
				editBuff = NULL;
				delete tmpBuff;
				tmpBuff = NULL;
				curContext->putNamedTag( S_ProcessSchema, S_False );
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

		if( attrDefaultLicense != NULL ) {
			delete attrDefaultLicense;
			attrDefaultLicense = NULL;
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

	void CFBamCustXmlLoaderSchemaDefHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
