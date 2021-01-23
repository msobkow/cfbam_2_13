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
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTableHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamCustXmlLoaderTableHandler::CLASS_NAME( "CFBamCustXmlLoaderTableHandler" );
	const std::string CFBamCustXmlLoaderTableHandler::S_True( "true" );
	const std::string CFBamCustXmlLoaderTableHandler::S_False( "false" );
	const std::string CFBamCustXmlLoaderTableHandler::S_Yes( "yes" );
	const std::string CFBamCustXmlLoaderTableHandler::S_No( "no" );
	const std::string CFBamCustXmlLoaderTableHandler::S_0( "0" );
	const std::string CFBamCustXmlLoaderTableHandler::S_1( "1" );

	CFBamCustXmlLoaderTableHandler::CFBamCustXmlLoaderTableHandler( cfbam::CFBamCustXmlLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamCustXmlLoaderTableHandler::~CFBamCustXmlLoaderTableHandler() {
	}

	void CFBamCustXmlLoaderTableHandler::startElement (
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
		static const std::string S_SchemaDefId( "SchemaDefId" );
		static const std::string S_Dot( "." );
		static const std::string S_Name( "Name" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_PageData( "PageData" );
		static const std::string S_PrimaryIndexTenantId( "PrimaryIndexTenantId" );
		static const std::string S_PrimaryIndexId( "PrimaryIndexId" );
		static const std::string S_TableClassCode( "TableClassCode" );
		static const std::string S_LookupIndexTenantId( "LookupIndexTenantId" );
		static const std::string S_LookupIndexId( "LookupIndexId" );
		static const std::string S_AltIndexTenantId( "AltIndexTenantId" );
		static const std::string S_AltIndexId( "AltIndexId" );
		static const std::string S_QualifyingTenantId( "QualifyingTenantId" );
		static const std::string S_QualifyingTableId( "QualifyingTableId" );
		static const std::string S_IsInstantiable( "IsInstantiable" );
		static const std::string S_HasHistory( "HasHistory" );
		static const std::string S_HasAuditColumns( "HasAuditColumns" );
		static const std::string S_LoaderBehaviour( "LoaderBehaviour" );
		static const std::string S_SecScope( "SecScope" );
		static const std::string S_SchemaDef( "SchemaDef" );
		static const std::string S_Relation( "Relation" );
		static const std::string S_LookupIndex( "LookupIndex" );
		static const std::string S_AltIndex( "AltIndex" );
		static const std::string S_QualTable( "QualTable" );
		static const std::string S_Index( "Index" );
		static const std::string S_PrimaryIndex( "PrimaryIndex" );
		static const std::string S_Columns( "Columns" );
		static const std::string S_ReverseRelations( "ReverseRelations" );
		static const std::string S_Chains( "Chains" );
		static const std::string S_DelDep( "DelDep" );
		static const std::string S_ClearDep( "ClearDep" );
		static const std::string S_DispId16Gen( "DispId16Gen" );
		static const std::string S_DispId32Gen( "DispId32Gen" );
		static const std::string S_DispId64Gen( "DispId64Gen" );
		static const std::string S_ServerMethods( "ServerMethods" );
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
		cfbam::ICFBamTableObj* tmpBuff = NULL;
		cfbam::ICFBamTableEditObj* editBuff = NULL;
		cfbam::ICFBamTableObj* origTable = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// Scope Attributes
		// Scope References
		cfsec::ICFSecTenantObj* refTenant = NULL;
		// Table Attributes
		std::string* attrName = NULL;
		std::string* attrDbName = NULL;
		std::string* attrShortName = NULL;
		std::string* attrLabel = NULL;
		std::string* attrShortDescription = NULL;
		std::string* attrDescription = NULL;
		std::string* attrPageData = NULL;
		std::string* attrTableClassCode = NULL;
		std::string* attrIsInstantiable = NULL;
		std::string* attrHasHistory = NULL;
		std::string* attrHasAuditColumns = NULL;
		std::string* attrLoaderBehaviour = NULL;
		std::string* attrSecScope = NULL;
		std::string* attrLookupIndex = NULL;
		std::string* attrAltIndex = NULL;
		std::string* attrQualTable = NULL;
		// Table References
		cfbam::ICFBamSchemaDefObj* refSchemaDef = NULL;
		cfbam::ICFBamIndexObj* refLookupIndex = NULL;
		cfbam::ICFBamIndexObj* refAltIndex = NULL;
		cfbam::ICFBamTableObj* refQualTable = NULL;
		// Native type conversions of attributes
		std::string* natName = NULL;
		std::string* natDbName = NULL;
		std::string* natShortName = NULL;
		std::string* natLabel = NULL;
		std::string* natShortDescription = NULL;
		std::string* natDescription = NULL;
		bool natPageData;
		bool natIsInstantiable;
		bool natHasHistory;
		bool natHasAuditColumns;
		cfbam::ICFBamSchema::LoaderBehaviourEnum natLoaderBehaviour;
		cfbam::ICFBamSchema::SecScopeEnum natSecScope;
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
			if( cppQName != "Table" ) {
				static const std::string Msg( "Expected QName to be 'Table'" );
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
			tmpBuff = schemaObj->getTableTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamTableEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_PageData ) {
					if( attrPageData != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrPageData = new std::string( *cppValue );
					}
					else {
						attrPageData = NULL;
					}
				}
				else if( *attrLocalName == S_TableClassCode ) {
					if( attrTableClassCode != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrTableClassCode = new std::string( *cppValue );
					}
					else {
						attrTableClassCode = NULL;
					}
				}
				else if( *attrLocalName == S_IsInstantiable ) {
					if( attrIsInstantiable != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsInstantiable = new std::string( *cppValue );
					}
					else {
						attrIsInstantiable = NULL;
					}
				}
				else if( *attrLocalName == S_HasHistory ) {
					if( attrHasHistory != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrHasHistory = new std::string( *cppValue );
					}
					else {
						attrHasHistory = NULL;
					}
				}
				else if( *attrLocalName == S_HasAuditColumns ) {
					if( attrHasAuditColumns != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrHasAuditColumns = new std::string( *cppValue );
					}
					else {
						attrHasAuditColumns = NULL;
					}
				}
				else if( *attrLocalName == S_LoaderBehaviour ) {
					if( attrLoaderBehaviour != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrLoaderBehaviour = new std::string( *cppValue );
					}
					else {
						attrLoaderBehaviour = NULL;
					}
				}
				else if( *attrLocalName == S_SecScope ) {
					if( attrSecScope != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrSecScope = new std::string( *cppValue );
					}
					else {
						attrSecScope = NULL;
					}
				}
				else if( *attrLocalName == S_LookupIndex ) {
					if( attrLookupIndex != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrLookupIndex = new std::string( *cppValue );
					}
					else {
						attrLookupIndex = NULL;
					}
				}
				else if( *attrLocalName == S_AltIndex ) {
					if( attrAltIndex != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrAltIndex = new std::string( *cppValue );
					}
					else {
						attrAltIndex = NULL;
					}
				}
				else if( *attrLocalName == S_QualTable ) {
					if( attrQualTable != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrQualTable = new std::string( *cppValue );
					}
					else {
						attrQualTable = NULL;
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
			if( attrTableClassCode == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_TableClassCode );
			}
			if( ( attrIsInstantiable == NULL ) || ( attrIsInstantiable->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_IsInstantiable );
			}
			if( ( attrHasHistory == NULL ) || ( attrHasHistory->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_HasHistory );
			}
			if( ( attrHasAuditColumns == NULL ) || ( attrHasAuditColumns->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_HasAuditColumns );
			}
			if( ( attrLoaderBehaviour == NULL ) || ( attrLoaderBehaviour->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_LoaderBehaviour );
			}
			if( ( attrSecScope == NULL ) || ( attrSecScope->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_SecScope );
			}

			// Save named attributes to context
			cflib::CFLibXmlCoreContext* curContext = getParser()->getCurContext();
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

			if( attrLookupIndex != NULL ) {
				curContext->putNamedTag( "LookupIndex", *attrLookupIndex );
			}

			if( attrAltIndex != NULL  ) {
				curContext->putNamedTag( "AltIndex", *attrAltIndex );
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

			if( attrPageData == NULL ) {
				natPageData = false;
			}
			else if( ( *attrPageData == S_True ) || ( *attrPageData == S_Yes ) || ( *attrPageData == S_1 ) ) {
				natPageData = true;
			}
			else if( ( *attrPageData == S_False ) || ( *attrPageData == S_No ) || ( *attrPageData == S_0 ) ) {
				natPageData = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_PageData,
					*attrPageData );
			}
			editBuff->setRequiredPageData( natPageData );

			if( attrTableClassCode == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_TableClassCode );
			}
			editBuff->setRequiredTableClassCode( *attrTableClassCode );

			if( ( *attrIsInstantiable == S_True ) || ( *attrIsInstantiable == S_Yes ) || ( *attrIsInstantiable == S_1 ) ) {
				natIsInstantiable = true;
			}
			else if( ( *attrIsInstantiable == S_False ) || ( *attrIsInstantiable == S_No ) || ( *attrIsInstantiable == S_0 ) ) {
				natIsInstantiable = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsInstantiable,
					*attrIsInstantiable );
			}
			editBuff->setRequiredIsInstantiable( natIsInstantiable );

			if( ( *attrHasHistory == S_True ) || ( *attrHasHistory == S_Yes ) || ( *attrHasHistory == S_1 ) ) {
				natHasHistory = true;
			}
			else if( ( *attrHasHistory == S_False ) || ( *attrHasHistory == S_No ) || ( *attrHasHistory == S_0 ) ) {
				natHasHistory = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_HasHistory,
					*attrHasHistory );
			}
			editBuff->setRequiredHasHistory( natHasHistory );

			if( ( *attrHasAuditColumns == S_True ) || ( *attrHasAuditColumns == S_Yes ) || ( *attrHasAuditColumns == S_1 ) ) {
				natHasAuditColumns = true;
			}
			else if( ( *attrHasAuditColumns == S_False ) || ( *attrHasAuditColumns == S_No ) || ( *attrHasAuditColumns == S_0 ) ) {
				natHasAuditColumns = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_HasAuditColumns,
					*attrHasAuditColumns );
			}
			editBuff->setRequiredHasAuditColumns( natHasAuditColumns );

			cfbam::ICFBamSchema::LoaderBehaviourEnum* pLoaderBehaviour = cfbam::ICFBamSchema::parseLoaderBehaviourEnum( attrLoaderBehaviour );
			if( pLoaderBehaviour != NULL ) {
				natLoaderBehaviour = *pLoaderBehaviour;
			}
			else {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_LoaderBehaviour );
			}
			editBuff->setRequiredLoaderBehaviour( natLoaderBehaviour );

			cfbam::ICFBamSchema::SecScopeEnum* pSecScope = cfbam::ICFBamSchema::parseSecScopeEnum( attrSecScope );
			if( pSecScope != NULL ) {
				natSecScope = *pSecScope;
			}
			else {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_SecScope );
			}
			editBuff->setRequiredSecScope( natSecScope );

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

			editBuff->setOptionalLookupDefSchema( NULL );

			// Lookup refQualTable by qualified name
			if( ( attrQualTable != NULL ) && ( attrQualTable->length() > 0 ) ) {
				refQualTable = dynamic_cast<cfbam::ICFBamTableObj*>( editBuff->getNamedObject( schemaObj->getTableTableObj()->getObjQualifyingClassCode(),
					*attrQualTable ) );
				if( refQualTable == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						refSchemaDef->getRequiredName() + S_Dot + *attrName + " could not resolve QualTable reference qualified name \"" + *attrQualTable + "\" to table Table" );
				}
			}
			else {
				refQualTable = NULL;
			}
			editBuff->setOptionalLookupQualTable( refQualTable );

			origTable = dynamic_cast<cfbam::ICFBamTableObj*>( editBuff->create() );
			editBuff = NULL;
			tmpBuff = NULL;

			curContext->setObj( origTable );
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

		if( attrPageData != NULL ) {
			delete attrPageData;
			attrPageData = NULL;
		}

		if( attrTableClassCode != NULL ) {
			delete attrTableClassCode;
			attrTableClassCode = NULL;
		}

		if( attrIsInstantiable != NULL ) {
			delete attrIsInstantiable;
			attrIsInstantiable = NULL;
		}

		if( attrHasHistory != NULL ) {
			delete attrHasHistory;
			attrHasHistory = NULL;
		}

		if( attrHasAuditColumns != NULL ) {
			delete attrHasAuditColumns;
			attrHasAuditColumns = NULL;
		}

		if( attrLoaderBehaviour != NULL ) {
			delete attrLoaderBehaviour;
			attrLoaderBehaviour = NULL;
		}

		if( attrSecScope != NULL ) {
			delete attrSecScope;
			attrSecScope = NULL;
		}

		if( attrLookupIndex != NULL ) {
			delete attrLookupIndex;
			attrLookupIndex = NULL;
		}

		if( attrAltIndex != NULL ) {
			delete attrAltIndex;
			attrAltIndex = NULL;
		}

		if( attrQualTable != NULL ) {
			delete attrQualTable;
			attrQualTable = NULL;
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

	void CFBamCustXmlLoaderTableHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
		static const std::string S_ProcName( "endElement" );
		const static std::string S_GetParser( "getParser()" );
		const static std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		const static std::string S_Dot( "." );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::CFBamCustXmlLoader* saxLoader = NULL;
		cfbam::ICFBamSchemaObj* schemaObj = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		cfbam::ICFBamTableObj* tableObj = NULL;
		cfbam::ICFBamIndexObj* refLookupIndex = NULL;
		cfbam::ICFBamIndexObj* refAltIndex = NULL;
		cfbam::ICFBamTableEditObj* tableEditObj = NULL;

		try {
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

			tableObj = dynamic_cast<cfbam::ICFBamTableObj*>( curContext->getObj() );
			if( tableObj == NULL ) {
				return;
			}

			std::string attrLookupIndex;
			std::string attrAltIndex;

			try {
				attrLookupIndex = curContext->getNamedTag( "LookupIndex" );
			}
			catch( ... ) {
			}

			try {
				attrAltIndex = curContext->getNamedTag( "AltIndex" );
			}
			catch( ... ) {
			}

			if( attrLookupIndex.empty() && attrAltIndex.empty() ) {
				return;
			}

			// Lookup refLookupIndex by qualified name
			if( attrLookupIndex.length() > 0 ) {
				refLookupIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( tableObj->getNamedObject( attrLookupIndex ) );
				if( refLookupIndex == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						tableObj->getRequiredContainerSchemaDef()->getRequiredName() + S_Dot + tableObj->getRequiredName() + " could not resolve LookupIndex reference qualified name \"" + attrLookupIndex + "\" to table Index" );
				}
			}

			// Lookup refAltIndex by qualified name
			if( attrAltIndex.length() > 0 ) {
				refAltIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( tableObj->getNamedObject( attrAltIndex ) );
				if( refAltIndex == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						tableObj->getRequiredContainerSchemaDef()->getRequiredName() + S_Dot + tableObj->getRequiredName() + " could not resolve AltIndex reference qualified name \"" + attrAltIndex + "\" to table Index" );
				}
			}

			if( ( refLookupIndex != NULL ) || ( refAltIndex != NULL ) ) {
				tableEditObj = dynamic_cast<cfbam::ICFBamTableEditObj*>( tableObj->beginEdit() );
				try {
					tableEditObj->setOptionalLookupLookupIndex( refLookupIndex );
					tableEditObj->setOptionalLookupAltIndex( refAltIndex );
					tableEditObj->update();
				}
				catch( ... ) {
					tableEditObj->endEdit();
				}
				tableEditObj = NULL;
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( tableEditObj != NULL ) {
			tableEditObj->endEdit();
			tableEditObj = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}
}
