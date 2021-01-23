
// Description: C++18 XML SAX2 Element Handler implementation for Table

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
#include <cfbamsaxloader/CFBamSaxLoaderTableHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamSaxLoaderTableHandler::CLASS_NAME( "CFBamSaxLoaderTableHandler" );
	const std::string CFBamSaxLoaderTableHandler::S_True( "true" );
	const std::string CFBamSaxLoaderTableHandler::S_False( "false" );
	const std::string CFBamSaxLoaderTableHandler::S_Yes( "yes" );
	const std::string CFBamSaxLoaderTableHandler::S_No( "no" );
	const std::string CFBamSaxLoaderTableHandler::S_0( "0" );
	const std::string CFBamSaxLoaderTableHandler::S_1( "1" );

	CFBamSaxLoaderTableHandler::CFBamSaxLoaderTableHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxLoaderTableHandler::~CFBamSaxLoaderTableHandler() {
	}

	void CFBamSaxLoaderTableHandler::startElement (
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
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
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
		static const std::string S_IsMutable( "IsMutable" );
		static const std::string S_IsServerOnly( "IsServerOnly" );
		static const std::string S_LoaderBehaviour( "LoaderBehaviour" );
		static const std::string S_SecScope( "SecScope" );
		static const std::string S_CppPgSqlTableInclude( "CppPgSqlTableInclude" );
		static const std::string S_SchemaDef( "SchemaDef" );
		static const std::string S_DefSchema( "DefSchema" );
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
		cflib::CFLibXmlCoreContext* curContext = NULL;
		cfbam::CFBamSaxLoader* saxLoader = NULL;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum loaderBehaviour;
		cfbam::ICFBamSchemaObj* schemaObj = NULL;
		cfbam::ICFBamTableObj* tmpBuff = NULL;
		cfbam::ICFBamTableEditObj* editBuff = NULL;
		cfbam::ICFBamTableEditObj* editTable = NULL;
		cfbam::ICFBamTableObj* origTable = NULL;
		cflib::CFLibXmlCoreContext* parentContext = NULL;
		cflib::ICFLibAnyObj* scopeObj = NULL;
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
		std::string* attrIsMutable = NULL;
		std::string* attrIsServerOnly = NULL;
		std::string* attrLoaderBehaviour = NULL;
		std::string* attrSecScope = NULL;
		std::string* attrCppPgSqlTableInclude = NULL;
		std::string* attrDefSchema = NULL;
		std::string* attrLookupIndex = NULL;
		std::string* attrAltIndex = NULL;
		std::string* attrQualTable = NULL;
		std::string* attrPrimaryIndex = NULL;
		// Table References
		cfbam::ICFBamSchemaDefObj* refSchemaDef = NULL;
		cfbam::ICFBamSchemaDefObj* refDefSchema = NULL;
		cfbam::ICFBamIndexObj* refLookupIndex = NULL;
		cfbam::ICFBamIndexObj* refAltIndex = NULL;
		cfbam::ICFBamTableObj* refQualTable = NULL;
		cfbam::ICFBamIndexObj* refPrimaryIndex = NULL;
		std::string* natName = NULL;
		std::string* natDbName = NULL;
		std::string* natShortName = NULL;
		std::string* natLabel = NULL;
		std::string* natShortDescription = NULL;
		std::string* natDescription = NULL;
		bool natPageData;
		std::string* natTableClassCode = NULL;
		bool natIsInstantiable;
		bool natHasHistory;
		bool natHasAuditColumns;
		bool natIsMutable;
		bool natIsServerOnly;
		cfbam::ICFBamSchema::LoaderBehaviourEnum natLoaderBehaviour;
		cfbam::ICFBamSchema::SecScopeEnum natSecScope;
		std::string* natCppPgSqlTableInclude = NULL;
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
			if( cppQName != cfbam::CFBamTableBuff::GENDEFNAME ) {
				std::string Msg( "Expected QName to be '" + cfbam::CFBamTableBuff::GENDEFNAME + "'" );
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
				else if( *attrLocalName == S_IsMutable ) {
					if( attrIsMutable != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsMutable = new std::string( *cppValue );
					}
					else {
						attrIsMutable = NULL;
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
				else if( *attrLocalName == S_CppPgSqlTableInclude ) {
					if( attrCppPgSqlTableInclude != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrCppPgSqlTableInclude = new std::string( *cppValue );
					}
					else {
						attrCppPgSqlTableInclude = NULL;
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
				else if( *attrLocalName == S_PrimaryIndex ) {
					if( attrPrimaryIndex != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrPrimaryIndex = new std::string( *cppValue );
					}
					else {
						attrPrimaryIndex = NULL;
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
			if( ( attrPageData == NULL ) || ( attrPageData->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_PageData );
			}
			if( attrTableClassCode == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_TableClassCode );
			}
			if( ( attrIsInstantiable == NULL ) || ( attrIsInstantiable->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsInstantiable );
			}
			if( ( attrHasHistory == NULL ) || ( attrHasHistory->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_HasHistory );
			}
			if( ( attrHasAuditColumns == NULL ) || ( attrHasAuditColumns->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_HasAuditColumns );
			}
			if( ( attrIsMutable == NULL ) || ( attrIsMutable->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsMutable );
			}
			if( ( attrIsServerOnly == NULL ) || ( attrIsServerOnly->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsServerOnly );
			}
			if( ( attrLoaderBehaviour == NULL ) || ( attrLoaderBehaviour->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_LoaderBehaviour );
			}
			if( ( attrSecScope == NULL ) || ( attrSecScope->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_SecScope );
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
			if( attrPageData != NULL ) {
				curContext->putNamedTag( S_PageData, *attrPageData );
			}
			if( attrTableClassCode != NULL ) {
				curContext->putNamedTag( S_TableClassCode, *attrTableClassCode );
			}
			if( attrIsInstantiable != NULL ) {
				curContext->putNamedTag( S_IsInstantiable, *attrIsInstantiable );
			}
			if( attrHasHistory != NULL ) {
				curContext->putNamedTag( S_HasHistory, *attrHasHistory );
			}
			if( attrHasAuditColumns != NULL ) {
				curContext->putNamedTag( S_HasAuditColumns, *attrHasAuditColumns );
			}
			if( attrIsMutable != NULL ) {
				curContext->putNamedTag( S_IsMutable, *attrIsMutable );
			}
			if( attrIsServerOnly != NULL ) {
				curContext->putNamedTag( S_IsServerOnly, *attrIsServerOnly );
			}
			if( attrLoaderBehaviour != NULL ) {
				curContext->putNamedTag( S_LoaderBehaviour, *attrLoaderBehaviour );
			}
			if( attrSecScope != NULL ) {
				curContext->putNamedTag( S_SecScope, *attrSecScope );
			}
			if( attrCppPgSqlTableInclude != NULL ) {
				curContext->putNamedTag( S_CppPgSqlTableInclude, *attrCppPgSqlTableInclude );
			}
			if( attrDefSchema != NULL ) {
				curContext->putNamedTag( S_DefSchema, *attrDefSchema );
			}
			if( attrLookupIndex != NULL ) {
				curContext->putNamedTag( S_LookupIndex, *attrLookupIndex );
			}
			if( attrAltIndex != NULL ) {
				curContext->putNamedTag( S_AltIndex, *attrAltIndex );
			}
			if( attrQualTable != NULL ) {
				curContext->putNamedTag( S_QualTable, *attrQualTable );
			}
			if( attrPrimaryIndex != NULL ) {
				curContext->putNamedTag( S_PrimaryIndex, *attrPrimaryIndex );
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

			if( ( *attrPageData == S_True ) || ( *attrPageData == S_Yes ) || ( *attrPageData == S_1 ) ) {
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

			if( attrTableClassCode != NULL ) {
				natTableClassCode = new std::string( *attrTableClassCode );
			}
			else {
				natTableClassCode = NULL;
			}
			if( natTableClassCode == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_TableClassCode );
			}
			editBuff->setRequiredTableClassCode( *natTableClassCode );

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

			if( ( *attrIsMutable == S_True ) || ( *attrIsMutable == S_Yes ) || ( *attrIsMutable == S_1 ) ) {
				natIsMutable = true;
			}
			else if( ( *attrIsMutable == S_False ) || ( *attrIsMutable == S_No ) || ( *attrIsMutable == S_0 ) ) {
				natIsMutable = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsMutable,
					*attrIsMutable );
			}
			editBuff->setRequiredIsMutable( natIsMutable );

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

			if( attrCppPgSqlTableInclude != NULL ) {
				natCppPgSqlTableInclude = new std::string( *attrCppPgSqlTableInclude );
			}
			else {
				natCppPgSqlTableInclude = NULL;
			}
			if( natCppPgSqlTableInclude != NULL ) {
				editBuff->setOptionalCppPgSqlTableIncludeValue( *natCppPgSqlTableInclude );
			}
			else {
				editBuff->setOptionalCppPgSqlTableIncludeNull();
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

			// Lookup refQualTable by qualified name
			if( ( attrQualTable != NULL ) && ( attrQualTable->length() > 0 ) ) {
				refQualTable = dynamic_cast<cfbam::ICFBamTableObj*>( editBuff->getNamedObject( schemaObj->getTableTableObj()->getObjQualifyingClassCode(),
					*attrQualTable ) );
				if( refQualTable == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve QualTable reference qualified name \"" + *attrQualTable + "\" to table Table" );
				}
			}
			else {
				refQualTable = NULL;
			}
			editBuff->setOptionalLookupQualTable( refQualTable );

			loaderBehaviour = saxLoader->getTableLoaderBehaviour();
			origTable = dynamic_cast<cfbam::ICFBamTableObj*>( schemaObj->getTableTableObj()->readTableByUNameIdx( refSchemaDef->getRequiredTenantId(),
			refSchemaDef->getRequiredId(),
			editBuff->getRequiredName() ) );
			if( origTable == NULL ) {
				editTable = editBuff;
				editBuff = NULL;
			}
			else {
				switch( loaderBehaviour ) {
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert:
						editTable = NULL;
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update:
						editTable = dynamic_cast<cfbam::ICFBamTableEditObj*>( origTable->beginEdit() );
						editTable->setRequiredName( editBuff->getRequiredName() );
						if( editBuff->isOptionalDbNameNull() ) {
							editTable->setOptionalDbNameNull();
						}
						else {
							editTable->setOptionalDbNameValue( editBuff->getOptionalDbNameValue() );
						}
						if( editBuff->isOptionalShortNameNull() ) {
							editTable->setOptionalShortNameNull();
						}
						else {
							editTable->setOptionalShortNameValue( editBuff->getOptionalShortNameValue() );
						}
						if( editBuff->isOptionalLabelNull() ) {
							editTable->setOptionalLabelNull();
						}
						else {
							editTable->setOptionalLabelValue( editBuff->getOptionalLabelValue() );
						}
						if( editBuff->isOptionalShortDescriptionNull() ) {
							editTable->setOptionalShortDescriptionNull();
						}
						else {
							editTable->setOptionalShortDescriptionValue( editBuff->getOptionalShortDescriptionValue() );
						}
						if( editBuff->isOptionalDescriptionNull() ) {
							editTable->setOptionalDescriptionNull();
						}
						else {
							editTable->setOptionalDescriptionValue( editBuff->getOptionalDescriptionValue() );
						}
						editTable->setRequiredPageData( editBuff->getRequiredPageData() );
						editTable->setRequiredTableClassCode( editBuff->getRequiredTableClassCode() );
						editTable->setRequiredIsInstantiable( editBuff->getRequiredIsInstantiable() );
						editTable->setRequiredHasHistory( editBuff->getRequiredHasHistory() );
						editTable->setRequiredHasAuditColumns( editBuff->getRequiredHasAuditColumns() );
						editTable->setRequiredIsMutable( editBuff->getRequiredIsMutable() );
						editTable->setRequiredIsServerOnly( editBuff->getRequiredIsServerOnly() );
						editTable->setRequiredLoaderBehaviour( editBuff->getRequiredLoaderBehaviour() );
						editTable->setRequiredSecScope( editBuff->getRequiredSecScope() );
						if( editBuff->isOptionalJObjMembersNull() ) {
							editTable->setOptionalJObjMembersNull();
						}
						else {
							editTable->setOptionalJObjMembersValue( editBuff->getOptionalJObjMembersValue() );
						}
						if( editBuff->isOptionalJObjInterfaceNull() ) {
							editTable->setOptionalJObjInterfaceNull();
						}
						else {
							editTable->setOptionalJObjInterfaceValue( editBuff->getOptionalJObjInterfaceValue() );
						}
						if( editBuff->isOptionalJObjImportNull() ) {
							editTable->setOptionalJObjImportNull();
						}
						else {
							editTable->setOptionalJObjImportValue( editBuff->getOptionalJObjImportValue() );
						}
						if( editBuff->isOptionalJObjImplementationNull() ) {
							editTable->setOptionalJObjImplementationNull();
						}
						else {
							editTable->setOptionalJObjImplementationValue( editBuff->getOptionalJObjImplementationValue() );
						}
						if( editBuff->isOptionalJEditObjMembersNull() ) {
							editTable->setOptionalJEditObjMembersNull();
						}
						else {
							editTable->setOptionalJEditObjMembersValue( editBuff->getOptionalJEditObjMembersValue() );
						}
						if( editBuff->isOptionalJEditObjInterfaceNull() ) {
							editTable->setOptionalJEditObjInterfaceNull();
						}
						else {
							editTable->setOptionalJEditObjInterfaceValue( editBuff->getOptionalJEditObjInterfaceValue() );
						}
						if( editBuff->isOptionalJEditObjImportNull() ) {
							editTable->setOptionalJEditObjImportNull();
						}
						else {
							editTable->setOptionalJEditObjImportValue( editBuff->getOptionalJEditObjImportValue() );
						}
						if( editBuff->isOptionalJEditObjImplementationNull() ) {
							editTable->setOptionalJEditObjImplementationNull();
						}
						else {
							editTable->setOptionalJEditObjImplementationValue( editBuff->getOptionalJEditObjImplementationValue() );
						}
						if( editBuff->isOptionalJTableImportNull() ) {
							editTable->setOptionalJTableImportNull();
						}
						else {
							editTable->setOptionalJTableImportValue( editBuff->getOptionalJTableImportValue() );
						}
						if( editBuff->isOptionalJTableMembersNull() ) {
							editTable->setOptionalJTableMembersNull();
						}
						else {
							editTable->setOptionalJTableMembersValue( editBuff->getOptionalJTableMembersValue() );
						}
						if( editBuff->isOptionalJTableInterfaceNull() ) {
							editTable->setOptionalJTableInterfaceNull();
						}
						else {
							editTable->setOptionalJTableInterfaceValue( editBuff->getOptionalJTableInterfaceValue() );
						}
						if( editBuff->isOptionalJTableImplementationNull() ) {
							editTable->setOptionalJTableImplementationNull();
						}
						else {
							editTable->setOptionalJTableImplementationValue( editBuff->getOptionalJTableImplementationValue() );
						}
						if( editBuff->isOptionalJTableObjImportNull() ) {
							editTable->setOptionalJTableObjImportNull();
						}
						else {
							editTable->setOptionalJTableObjImportValue( editBuff->getOptionalJTableObjImportValue() );
						}
						if( editBuff->isOptionalJTableObjMembersNull() ) {
							editTable->setOptionalJTableObjMembersNull();
						}
						else {
							editTable->setOptionalJTableObjMembersValue( editBuff->getOptionalJTableObjMembersValue() );
						}
						if( editBuff->isOptionalJTableObjInterfaceNull() ) {
							editTable->setOptionalJTableObjInterfaceNull();
						}
						else {
							editTable->setOptionalJTableObjInterfaceValue( editBuff->getOptionalJTableObjInterfaceValue() );
						}
						if( editBuff->isOptionalJTableObjImplementationNull() ) {
							editTable->setOptionalJTableObjImplementationNull();
						}
						else {
							editTable->setOptionalJTableObjImplementationValue( editBuff->getOptionalJTableObjImplementationValue() );
						}
						if( editBuff->isOptionalJDb2LUWTableImportNull() ) {
							editTable->setOptionalJDb2LUWTableImportNull();
						}
						else {
							editTable->setOptionalJDb2LUWTableImportValue( editBuff->getOptionalJDb2LUWTableImportValue() );
						}
						if( editBuff->isOptionalJDb2LUWTableMembersNull() ) {
							editTable->setOptionalJDb2LUWTableMembersNull();
						}
						else {
							editTable->setOptionalJDb2LUWTableMembersValue( editBuff->getOptionalJDb2LUWTableMembersValue() );
						}
						if( editBuff->isOptionalJDb2LUWTableImplementationNull() ) {
							editTable->setOptionalJDb2LUWTableImplementationNull();
						}
						else {
							editTable->setOptionalJDb2LUWTableImplementationValue( editBuff->getOptionalJDb2LUWTableImplementationValue() );
						}
						if( editBuff->isOptionalJMSSqlTableImportNull() ) {
							editTable->setOptionalJMSSqlTableImportNull();
						}
						else {
							editTable->setOptionalJMSSqlTableImportValue( editBuff->getOptionalJMSSqlTableImportValue() );
						}
						if( editBuff->isOptionalJMSSqlTableMembersNull() ) {
							editTable->setOptionalJMSSqlTableMembersNull();
						}
						else {
							editTable->setOptionalJMSSqlTableMembersValue( editBuff->getOptionalJMSSqlTableMembersValue() );
						}
						if( editBuff->isOptionalJMSSqlTableImplementationNull() ) {
							editTable->setOptionalJMSSqlTableImplementationNull();
						}
						else {
							editTable->setOptionalJMSSqlTableImplementationValue( editBuff->getOptionalJMSSqlTableImplementationValue() );
						}
						if( editBuff->isOptionalJMySqlTableImportNull() ) {
							editTable->setOptionalJMySqlTableImportNull();
						}
						else {
							editTable->setOptionalJMySqlTableImportValue( editBuff->getOptionalJMySqlTableImportValue() );
						}
						if( editBuff->isOptionalJMySqlTableMembersNull() ) {
							editTable->setOptionalJMySqlTableMembersNull();
						}
						else {
							editTable->setOptionalJMySqlTableMembersValue( editBuff->getOptionalJMySqlTableMembersValue() );
						}
						if( editBuff->isOptionalJMySqlTableImplementationNull() ) {
							editTable->setOptionalJMySqlTableImplementationNull();
						}
						else {
							editTable->setOptionalJMySqlTableImplementationValue( editBuff->getOptionalJMySqlTableImplementationValue() );
						}
						if( editBuff->isOptionalJOracleTableImportNull() ) {
							editTable->setOptionalJOracleTableImportNull();
						}
						else {
							editTable->setOptionalJOracleTableImportValue( editBuff->getOptionalJOracleTableImportValue() );
						}
						if( editBuff->isOptionalJOracleTableMembersNull() ) {
							editTable->setOptionalJOracleTableMembersNull();
						}
						else {
							editTable->setOptionalJOracleTableMembersValue( editBuff->getOptionalJOracleTableMembersValue() );
						}
						if( editBuff->isOptionalJOracleTableImplementationNull() ) {
							editTable->setOptionalJOracleTableImplementationNull();
						}
						else {
							editTable->setOptionalJOracleTableImplementationValue( editBuff->getOptionalJOracleTableImplementationValue() );
						}
						if( editBuff->isOptionalJPgSqlTableImportNull() ) {
							editTable->setOptionalJPgSqlTableImportNull();
						}
						else {
							editTable->setOptionalJPgSqlTableImportValue( editBuff->getOptionalJPgSqlTableImportValue() );
						}
						if( editBuff->isOptionalJPgSqlTableMembersNull() ) {
							editTable->setOptionalJPgSqlTableMembersNull();
						}
						else {
							editTable->setOptionalJPgSqlTableMembersValue( editBuff->getOptionalJPgSqlTableMembersValue() );
						}
						if( editBuff->isOptionalJPgSqlTableImplementationNull() ) {
							editTable->setOptionalJPgSqlTableImplementationNull();
						}
						else {
							editTable->setOptionalJPgSqlTableImplementationValue( editBuff->getOptionalJPgSqlTableImplementationValue() );
						}
						if( editBuff->isOptionalJRamTableImportNull() ) {
							editTable->setOptionalJRamTableImportNull();
						}
						else {
							editTable->setOptionalJRamTableImportValue( editBuff->getOptionalJRamTableImportValue() );
						}
						if( editBuff->isOptionalJRamTableMembersNull() ) {
							editTable->setOptionalJRamTableMembersNull();
						}
						else {
							editTable->setOptionalJRamTableMembersValue( editBuff->getOptionalJRamTableMembersValue() );
						}
						if( editBuff->isOptionalJRamTableImplementationNull() ) {
							editTable->setOptionalJRamTableImplementationNull();
						}
						else {
							editTable->setOptionalJRamTableImplementationValue( editBuff->getOptionalJRamTableImplementationValue() );
						}
						if( editBuff->isOptionalJSaxLoaderImportNull() ) {
							editTable->setOptionalJSaxLoaderImportNull();
						}
						else {
							editTable->setOptionalJSaxLoaderImportValue( editBuff->getOptionalJSaxLoaderImportValue() );
						}
						if( editBuff->isOptionalJSaxLoaderStartElementNull() ) {
							editTable->setOptionalJSaxLoaderStartElementNull();
						}
						else {
							editTable->setOptionalJSaxLoaderStartElementValue( editBuff->getOptionalJSaxLoaderStartElementValue() );
						}
						if( editBuff->isOptionalJSaxLoaderEndElementNull() ) {
							editTable->setOptionalJSaxLoaderEndElementNull();
						}
						else {
							editTable->setOptionalJSaxLoaderEndElementValue( editBuff->getOptionalJSaxLoaderEndElementValue() );
						}
						if( editBuff->isOptionalJXMsgTableImportNull() ) {
							editTable->setOptionalJXMsgTableImportNull();
						}
						else {
							editTable->setOptionalJXMsgTableImportValue( editBuff->getOptionalJXMsgTableImportValue() );
						}
						if( editBuff->isOptionalJXMsgTableFormattersNull() ) {
							editTable->setOptionalJXMsgTableFormattersNull();
						}
						else {
							editTable->setOptionalJXMsgTableFormattersValue( editBuff->getOptionalJXMsgTableFormattersValue() );
						}
						if( editBuff->isOptionalJXMsgRqstTableImportNull() ) {
							editTable->setOptionalJXMsgRqstTableImportNull();
						}
						else {
							editTable->setOptionalJXMsgRqstTableImportValue( editBuff->getOptionalJXMsgRqstTableImportValue() );
						}
						if( editBuff->isOptionalJXMsgRspnTableImportNull() ) {
							editTable->setOptionalJXMsgRspnTableImportNull();
						}
						else {
							editTable->setOptionalJXMsgRspnTableImportValue( editBuff->getOptionalJXMsgRspnTableImportValue() );
						}
						if( editBuff->isOptionalJXMsgClientTableImportNull() ) {
							editTable->setOptionalJXMsgClientTableImportNull();
						}
						else {
							editTable->setOptionalJXMsgClientTableImportValue( editBuff->getOptionalJXMsgClientTableImportValue() );
						}
						if( editBuff->isOptionalJXMsgRqstTableBodyNull() ) {
							editTable->setOptionalJXMsgRqstTableBodyNull();
						}
						else {
							editTable->setOptionalJXMsgRqstTableBodyValue( editBuff->getOptionalJXMsgRqstTableBodyValue() );
						}
						if( editBuff->isOptionalJXMsgRspnTableBodyNull() ) {
							editTable->setOptionalJXMsgRspnTableBodyNull();
						}
						else {
							editTable->setOptionalJXMsgRspnTableBodyValue( editBuff->getOptionalJXMsgRspnTableBodyValue() );
						}
						if( editBuff->isOptionalJXMsgClientTableBodyNull() ) {
							editTable->setOptionalJXMsgClientTableBodyNull();
						}
						else {
							editTable->setOptionalJXMsgClientTableBodyValue( editBuff->getOptionalJXMsgClientTableBodyValue() );
						}
						if( editBuff->isOptionalCppObjMembersNull() ) {
							editTable->setOptionalCppObjMembersNull();
						}
						else {
							editTable->setOptionalCppObjMembersValue( editBuff->getOptionalCppObjMembersValue() );
						}
						if( editBuff->isOptionalCppObjInterfaceNull() ) {
							editTable->setOptionalCppObjInterfaceNull();
						}
						else {
							editTable->setOptionalCppObjInterfaceValue( editBuff->getOptionalCppObjInterfaceValue() );
						}
						if( editBuff->isOptionalCppObjIncludeNull() ) {
							editTable->setOptionalCppObjIncludeNull();
						}
						else {
							editTable->setOptionalCppObjIncludeValue( editBuff->getOptionalCppObjIncludeValue() );
						}
						if( editBuff->isOptionalCppObjImplementationNull() ) {
							editTable->setOptionalCppObjImplementationNull();
						}
						else {
							editTable->setOptionalCppObjImplementationValue( editBuff->getOptionalCppObjImplementationValue() );
						}
						if( editBuff->isOptionalCppEditObjMembersNull() ) {
							editTable->setOptionalCppEditObjMembersNull();
						}
						else {
							editTable->setOptionalCppEditObjMembersValue( editBuff->getOptionalCppEditObjMembersValue() );
						}
						if( editBuff->isOptionalCppEditObjInterfaceNull() ) {
							editTable->setOptionalCppEditObjInterfaceNull();
						}
						else {
							editTable->setOptionalCppEditObjInterfaceValue( editBuff->getOptionalCppEditObjInterfaceValue() );
						}
						if( editBuff->isOptionalCppEditObjIncludeNull() ) {
							editTable->setOptionalCppEditObjIncludeNull();
						}
						else {
							editTable->setOptionalCppEditObjIncludeValue( editBuff->getOptionalCppEditObjIncludeValue() );
						}
						if( editBuff->isOptionalCppEditObjImplementationNull() ) {
							editTable->setOptionalCppEditObjImplementationNull();
						}
						else {
							editTable->setOptionalCppEditObjImplementationValue( editBuff->getOptionalCppEditObjImplementationValue() );
						}
						if( editBuff->isOptionalCppTableIncludeNull() ) {
							editTable->setOptionalCppTableIncludeNull();
						}
						else {
							editTable->setOptionalCppTableIncludeValue( editBuff->getOptionalCppTableIncludeValue() );
						}
						if( editBuff->isOptionalCppTableMembersNull() ) {
							editTable->setOptionalCppTableMembersNull();
						}
						else {
							editTable->setOptionalCppTableMembersValue( editBuff->getOptionalCppTableMembersValue() );
						}
						if( editBuff->isOptionalCppTableInterfaceNull() ) {
							editTable->setOptionalCppTableInterfaceNull();
						}
						else {
							editTable->setOptionalCppTableInterfaceValue( editBuff->getOptionalCppTableInterfaceValue() );
						}
						if( editBuff->isOptionalCppTableImplementationNull() ) {
							editTable->setOptionalCppTableImplementationNull();
						}
						else {
							editTable->setOptionalCppTableImplementationValue( editBuff->getOptionalCppTableImplementationValue() );
						}
						if( editBuff->isOptionalCppTableObjIncludeNull() ) {
							editTable->setOptionalCppTableObjIncludeNull();
						}
						else {
							editTable->setOptionalCppTableObjIncludeValue( editBuff->getOptionalCppTableObjIncludeValue() );
						}
						if( editBuff->isOptionalCppTableObjMembersNull() ) {
							editTable->setOptionalCppTableObjMembersNull();
						}
						else {
							editTable->setOptionalCppTableObjMembersValue( editBuff->getOptionalCppTableObjMembersValue() );
						}
						if( editBuff->isOptionalCppTableObjInterfaceNull() ) {
							editTable->setOptionalCppTableObjInterfaceNull();
						}
						else {
							editTable->setOptionalCppTableObjInterfaceValue( editBuff->getOptionalCppTableObjInterfaceValue() );
						}
						if( editBuff->isOptionalCppTableObjImplementationNull() ) {
							editTable->setOptionalCppTableObjImplementationNull();
						}
						else {
							editTable->setOptionalCppTableObjImplementationValue( editBuff->getOptionalCppTableObjImplementationValue() );
						}
						if( editBuff->isOptionalCppDb2LUWTableIncludeNull() ) {
							editTable->setOptionalCppDb2LUWTableIncludeNull();
						}
						else {
							editTable->setOptionalCppDb2LUWTableIncludeValue( editBuff->getOptionalCppDb2LUWTableIncludeValue() );
						}
						if( editBuff->isOptionalCppDb2LUWTableMembersNull() ) {
							editTable->setOptionalCppDb2LUWTableMembersNull();
						}
						else {
							editTable->setOptionalCppDb2LUWTableMembersValue( editBuff->getOptionalCppDb2LUWTableMembersValue() );
						}
						if( editBuff->isOptionalCppDb2LUWTableImplementationNull() ) {
							editTable->setOptionalCppDb2LUWTableImplementationNull();
						}
						else {
							editTable->setOptionalCppDb2LUWTableImplementationValue( editBuff->getOptionalCppDb2LUWTableImplementationValue() );
						}
						if( editBuff->isOptionalCppMSSqlTableIncludeNull() ) {
							editTable->setOptionalCppMSSqlTableIncludeNull();
						}
						else {
							editTable->setOptionalCppMSSqlTableIncludeValue( editBuff->getOptionalCppMSSqlTableIncludeValue() );
						}
						if( editBuff->isOptionalCppMSSqlTableMembersNull() ) {
							editTable->setOptionalCppMSSqlTableMembersNull();
						}
						else {
							editTable->setOptionalCppMSSqlTableMembersValue( editBuff->getOptionalCppMSSqlTableMembersValue() );
						}
						if( editBuff->isOptionalCppMSSqlTableImplementationNull() ) {
							editTable->setOptionalCppMSSqlTableImplementationNull();
						}
						else {
							editTable->setOptionalCppMSSqlTableImplementationValue( editBuff->getOptionalCppMSSqlTableImplementationValue() );
						}
						if( editBuff->isOptionalCppMySqlTableIncludeNull() ) {
							editTable->setOptionalCppMySqlTableIncludeNull();
						}
						else {
							editTable->setOptionalCppMySqlTableIncludeValue( editBuff->getOptionalCppMySqlTableIncludeValue() );
						}
						if( editBuff->isOptionalCppMySqlTableMembersNull() ) {
							editTable->setOptionalCppMySqlTableMembersNull();
						}
						else {
							editTable->setOptionalCppMySqlTableMembersValue( editBuff->getOptionalCppMySqlTableMembersValue() );
						}
						if( editBuff->isOptionalCppMySqlTableImplementationNull() ) {
							editTable->setOptionalCppMySqlTableImplementationNull();
						}
						else {
							editTable->setOptionalCppMySqlTableImplementationValue( editBuff->getOptionalCppMySqlTableImplementationValue() );
						}
						if( editBuff->isOptionalCppOracleTableIncludeNull() ) {
							editTable->setOptionalCppOracleTableIncludeNull();
						}
						else {
							editTable->setOptionalCppOracleTableIncludeValue( editBuff->getOptionalCppOracleTableIncludeValue() );
						}
						if( editBuff->isOptionalCppOracleTableMembersNull() ) {
							editTable->setOptionalCppOracleTableMembersNull();
						}
						else {
							editTable->setOptionalCppOracleTableMembersValue( editBuff->getOptionalCppOracleTableMembersValue() );
						}
						if( editBuff->isOptionalCppOracleTableImplementationNull() ) {
							editTable->setOptionalCppOracleTableImplementationNull();
						}
						else {
							editTable->setOptionalCppOracleTableImplementationValue( editBuff->getOptionalCppOracleTableImplementationValue() );
						}
						if( editBuff->isOptionalCppPgSqlTableIncludeNull() ) {
							editTable->setOptionalCppPgSqlTableIncludeNull();
						}
						else {
							editTable->setOptionalCppPgSqlTableIncludeValue( editBuff->getOptionalCppPgSqlTableIncludeValue() );
						}
						if( editBuff->isOptionalCppPgSqlTableMembersNull() ) {
							editTable->setOptionalCppPgSqlTableMembersNull();
						}
						else {
							editTable->setOptionalCppPgSqlTableMembersValue( editBuff->getOptionalCppPgSqlTableMembersValue() );
						}
						if( editBuff->isOptionalCppPgSqlTableImplementationNull() ) {
							editTable->setOptionalCppPgSqlTableImplementationNull();
						}
						else {
							editTable->setOptionalCppPgSqlTableImplementationValue( editBuff->getOptionalCppPgSqlTableImplementationValue() );
						}
						if( editBuff->isOptionalCppRamTableIncludeNull() ) {
							editTable->setOptionalCppRamTableIncludeNull();
						}
						else {
							editTable->setOptionalCppRamTableIncludeValue( editBuff->getOptionalCppRamTableIncludeValue() );
						}
						if( editBuff->isOptionalCppRamTableMembersNull() ) {
							editTable->setOptionalCppRamTableMembersNull();
						}
						else {
							editTable->setOptionalCppRamTableMembersValue( editBuff->getOptionalCppRamTableMembersValue() );
						}
						if( editBuff->isOptionalCppRamTableImplementationNull() ) {
							editTable->setOptionalCppRamTableImplementationNull();
						}
						else {
							editTable->setOptionalCppRamTableImplementationValue( editBuff->getOptionalCppRamTableImplementationValue() );
						}
						if( editBuff->isOptionalCppSaxLoaderIncludeNull() ) {
							editTable->setOptionalCppSaxLoaderIncludeNull();
						}
						else {
							editTable->setOptionalCppSaxLoaderIncludeValue( editBuff->getOptionalCppSaxLoaderIncludeValue() );
						}
						if( editBuff->isOptionalCppSaxLoaderStartElementNull() ) {
							editTable->setOptionalCppSaxLoaderStartElementNull();
						}
						else {
							editTable->setOptionalCppSaxLoaderStartElementValue( editBuff->getOptionalCppSaxLoaderStartElementValue() );
						}
						if( editBuff->isOptionalCppSaxLoaderEndElementNull() ) {
							editTable->setOptionalCppSaxLoaderEndElementNull();
						}
						else {
							editTable->setOptionalCppSaxLoaderEndElementValue( editBuff->getOptionalCppSaxLoaderEndElementValue() );
						}
						if( editBuff->isOptionalCppXMsgTableIncludeNull() ) {
							editTable->setOptionalCppXMsgTableIncludeNull();
						}
						else {
							editTable->setOptionalCppXMsgTableIncludeValue( editBuff->getOptionalCppXMsgTableIncludeValue() );
						}
						if( editBuff->isOptionalCppXMsgTableFormattersNull() ) {
							editTable->setOptionalCppXMsgTableFormattersNull();
						}
						else {
							editTable->setOptionalCppXMsgTableFormattersValue( editBuff->getOptionalCppXMsgTableFormattersValue() );
						}
						if( editBuff->isOptionalCppXMsgRqstTableIncludeNull() ) {
							editTable->setOptionalCppXMsgRqstTableIncludeNull();
						}
						else {
							editTable->setOptionalCppXMsgRqstTableIncludeValue( editBuff->getOptionalCppXMsgRqstTableIncludeValue() );
						}
						if( editBuff->isOptionalCppXMsgRspnTableIncludeNull() ) {
							editTable->setOptionalCppXMsgRspnTableIncludeNull();
						}
						else {
							editTable->setOptionalCppXMsgRspnTableIncludeValue( editBuff->getOptionalCppXMsgRspnTableIncludeValue() );
						}
						if( editBuff->isOptionalCppXMsgClientTableIncludeNull() ) {
							editTable->setOptionalCppXMsgClientTableIncludeNull();
						}
						else {
							editTable->setOptionalCppXMsgClientTableIncludeValue( editBuff->getOptionalCppXMsgClientTableIncludeValue() );
						}
						if( editBuff->isOptionalCppXMsgRqstTableBodyNull() ) {
							editTable->setOptionalCppXMsgRqstTableBodyNull();
						}
						else {
							editTable->setOptionalCppXMsgRqstTableBodyValue( editBuff->getOptionalCppXMsgRqstTableBodyValue() );
						}
						if( editBuff->isOptionalCppXMsgRspnTableBodyNull() ) {
							editTable->setOptionalCppXMsgRspnTableBodyNull();
						}
						else {
							editTable->setOptionalCppXMsgRspnTableBodyValue( editBuff->getOptionalCppXMsgRspnTableBodyValue() );
						}
						if( editBuff->isOptionalCppXMsgClientTableBodyNull() ) {
							editTable->setOptionalCppXMsgClientTableBodyNull();
						}
						else {
							editTable->setOptionalCppXMsgClientTableBodyValue( editBuff->getOptionalCppXMsgClientTableBodyValue() );
						}
						if( editBuff->isOptionalHppObjMembersNull() ) {
							editTable->setOptionalHppObjMembersNull();
						}
						else {
							editTable->setOptionalHppObjMembersValue( editBuff->getOptionalHppObjMembersValue() );
						}
						if( editBuff->isOptionalHppObjInterfaceNull() ) {
							editTable->setOptionalHppObjInterfaceNull();
						}
						else {
							editTable->setOptionalHppObjInterfaceValue( editBuff->getOptionalHppObjInterfaceValue() );
						}
						if( editBuff->isOptionalHppObjIncludeNull() ) {
							editTable->setOptionalHppObjIncludeNull();
						}
						else {
							editTable->setOptionalHppObjIncludeValue( editBuff->getOptionalHppObjIncludeValue() );
						}
						if( editBuff->isOptionalHppObjImplementationNull() ) {
							editTable->setOptionalHppObjImplementationNull();
						}
						else {
							editTable->setOptionalHppObjImplementationValue( editBuff->getOptionalHppObjImplementationValue() );
						}
						if( editBuff->isOptionalHppEditObjMembersNull() ) {
							editTable->setOptionalHppEditObjMembersNull();
						}
						else {
							editTable->setOptionalHppEditObjMembersValue( editBuff->getOptionalHppEditObjMembersValue() );
						}
						if( editBuff->isOptionalHppEditObjInterfaceNull() ) {
							editTable->setOptionalHppEditObjInterfaceNull();
						}
						else {
							editTable->setOptionalHppEditObjInterfaceValue( editBuff->getOptionalHppEditObjInterfaceValue() );
						}
						if( editBuff->isOptionalHppEditObjIncludeNull() ) {
							editTable->setOptionalHppEditObjIncludeNull();
						}
						else {
							editTable->setOptionalHppEditObjIncludeValue( editBuff->getOptionalHppEditObjIncludeValue() );
						}
						if( editBuff->isOptionalHppEditObjImplementationNull() ) {
							editTable->setOptionalHppEditObjImplementationNull();
						}
						else {
							editTable->setOptionalHppEditObjImplementationValue( editBuff->getOptionalHppEditObjImplementationValue() );
						}
						if( editBuff->isOptionalHppTableIncludeNull() ) {
							editTable->setOptionalHppTableIncludeNull();
						}
						else {
							editTable->setOptionalHppTableIncludeValue( editBuff->getOptionalHppTableIncludeValue() );
						}
						if( editBuff->isOptionalHppTableMembersNull() ) {
							editTable->setOptionalHppTableMembersNull();
						}
						else {
							editTable->setOptionalHppTableMembersValue( editBuff->getOptionalHppTableMembersValue() );
						}
						if( editBuff->isOptionalHppTableInterfaceNull() ) {
							editTable->setOptionalHppTableInterfaceNull();
						}
						else {
							editTable->setOptionalHppTableInterfaceValue( editBuff->getOptionalHppTableInterfaceValue() );
						}
						if( editBuff->isOptionalHppTableImplementationNull() ) {
							editTable->setOptionalHppTableImplementationNull();
						}
						else {
							editTable->setOptionalHppTableImplementationValue( editBuff->getOptionalHppTableImplementationValue() );
						}
						if( editBuff->isOptionalHppTableObjIncludeNull() ) {
							editTable->setOptionalHppTableObjIncludeNull();
						}
						else {
							editTable->setOptionalHppTableObjIncludeValue( editBuff->getOptionalHppTableObjIncludeValue() );
						}
						if( editBuff->isOptionalHppTableObjMembersNull() ) {
							editTable->setOptionalHppTableObjMembersNull();
						}
						else {
							editTable->setOptionalHppTableObjMembersValue( editBuff->getOptionalHppTableObjMembersValue() );
						}
						if( editBuff->isOptionalHppTableObjInterfaceNull() ) {
							editTable->setOptionalHppTableObjInterfaceNull();
						}
						else {
							editTable->setOptionalHppTableObjInterfaceValue( editBuff->getOptionalHppTableObjInterfaceValue() );
						}
						if( editBuff->isOptionalHppTableObjImplementationNull() ) {
							editTable->setOptionalHppTableObjImplementationNull();
						}
						else {
							editTable->setOptionalHppTableObjImplementationValue( editBuff->getOptionalHppTableObjImplementationValue() );
						}
						if( editBuff->isOptionalHppDb2LUWTableIncludeNull() ) {
							editTable->setOptionalHppDb2LUWTableIncludeNull();
						}
						else {
							editTable->setOptionalHppDb2LUWTableIncludeValue( editBuff->getOptionalHppDb2LUWTableIncludeValue() );
						}
						if( editBuff->isOptionalHppDb2LUWTableMembersNull() ) {
							editTable->setOptionalHppDb2LUWTableMembersNull();
						}
						else {
							editTable->setOptionalHppDb2LUWTableMembersValue( editBuff->getOptionalHppDb2LUWTableMembersValue() );
						}
						if( editBuff->isOptionalHppDb2LUWTableImplementationNull() ) {
							editTable->setOptionalHppDb2LUWTableImplementationNull();
						}
						else {
							editTable->setOptionalHppDb2LUWTableImplementationValue( editBuff->getOptionalHppDb2LUWTableImplementationValue() );
						}
						if( editBuff->isOptionalHppMSSqlTableIncludeNull() ) {
							editTable->setOptionalHppMSSqlTableIncludeNull();
						}
						else {
							editTable->setOptionalHppMSSqlTableIncludeValue( editBuff->getOptionalHppMSSqlTableIncludeValue() );
						}
						if( editBuff->isOptionalHppMSSqlTableMembersNull() ) {
							editTable->setOptionalHppMSSqlTableMembersNull();
						}
						else {
							editTable->setOptionalHppMSSqlTableMembersValue( editBuff->getOptionalHppMSSqlTableMembersValue() );
						}
						if( editBuff->isOptionalHppMSSqlTableImplementationNull() ) {
							editTable->setOptionalHppMSSqlTableImplementationNull();
						}
						else {
							editTable->setOptionalHppMSSqlTableImplementationValue( editBuff->getOptionalHppMSSqlTableImplementationValue() );
						}
						if( editBuff->isOptionalHppMySqlTableIncludeNull() ) {
							editTable->setOptionalHppMySqlTableIncludeNull();
						}
						else {
							editTable->setOptionalHppMySqlTableIncludeValue( editBuff->getOptionalHppMySqlTableIncludeValue() );
						}
						if( editBuff->isOptionalHppMySqlTableMembersNull() ) {
							editTable->setOptionalHppMySqlTableMembersNull();
						}
						else {
							editTable->setOptionalHppMySqlTableMembersValue( editBuff->getOptionalHppMySqlTableMembersValue() );
						}
						if( editBuff->isOptionalHppMySqlTableImplementationNull() ) {
							editTable->setOptionalHppMySqlTableImplementationNull();
						}
						else {
							editTable->setOptionalHppMySqlTableImplementationValue( editBuff->getOptionalHppMySqlTableImplementationValue() );
						}
						if( editBuff->isOptionalHppOracleTableIncludeNull() ) {
							editTable->setOptionalHppOracleTableIncludeNull();
						}
						else {
							editTable->setOptionalHppOracleTableIncludeValue( editBuff->getOptionalHppOracleTableIncludeValue() );
						}
						if( editBuff->isOptionalHppOracleTableMembersNull() ) {
							editTable->setOptionalHppOracleTableMembersNull();
						}
						else {
							editTable->setOptionalHppOracleTableMembersValue( editBuff->getOptionalHppOracleTableMembersValue() );
						}
						if( editBuff->isOptionalHppOracleTableImplementationNull() ) {
							editTable->setOptionalHppOracleTableImplementationNull();
						}
						else {
							editTable->setOptionalHppOracleTableImplementationValue( editBuff->getOptionalHppOracleTableImplementationValue() );
						}
						if( editBuff->isOptionalHppPgSqlTableIncludeNull() ) {
							editTable->setOptionalHppPgSqlTableIncludeNull();
						}
						else {
							editTable->setOptionalHppPgSqlTableIncludeValue( editBuff->getOptionalHppPgSqlTableIncludeValue() );
						}
						if( editBuff->isOptionalHppPgSqlTableMembersNull() ) {
							editTable->setOptionalHppPgSqlTableMembersNull();
						}
						else {
							editTable->setOptionalHppPgSqlTableMembersValue( editBuff->getOptionalHppPgSqlTableMembersValue() );
						}
						if( editBuff->isOptionalHppPgSqlTableImplementationNull() ) {
							editTable->setOptionalHppPgSqlTableImplementationNull();
						}
						else {
							editTable->setOptionalHppPgSqlTableImplementationValue( editBuff->getOptionalHppPgSqlTableImplementationValue() );
						}
						if( editBuff->isOptionalHppRamTableIncludeNull() ) {
							editTable->setOptionalHppRamTableIncludeNull();
						}
						else {
							editTable->setOptionalHppRamTableIncludeValue( editBuff->getOptionalHppRamTableIncludeValue() );
						}
						if( editBuff->isOptionalHppRamTableMembersNull() ) {
							editTable->setOptionalHppRamTableMembersNull();
						}
						else {
							editTable->setOptionalHppRamTableMembersValue( editBuff->getOptionalHppRamTableMembersValue() );
						}
						if( editBuff->isOptionalHppRamTableImplementationNull() ) {
							editTable->setOptionalHppRamTableImplementationNull();
						}
						else {
							editTable->setOptionalHppRamTableImplementationValue( editBuff->getOptionalHppRamTableImplementationValue() );
						}
						if( editBuff->isOptionalHppSaxLoaderIncludeNull() ) {
							editTable->setOptionalHppSaxLoaderIncludeNull();
						}
						else {
							editTable->setOptionalHppSaxLoaderIncludeValue( editBuff->getOptionalHppSaxLoaderIncludeValue() );
						}
						if( editBuff->isOptionalHppSaxLoaderStartElementNull() ) {
							editTable->setOptionalHppSaxLoaderStartElementNull();
						}
						else {
							editTable->setOptionalHppSaxLoaderStartElementValue( editBuff->getOptionalHppSaxLoaderStartElementValue() );
						}
						if( editBuff->isOptionalHppSaxLoaderEndElementNull() ) {
							editTable->setOptionalHppSaxLoaderEndElementNull();
						}
						else {
							editTable->setOptionalHppSaxLoaderEndElementValue( editBuff->getOptionalHppSaxLoaderEndElementValue() );
						}
						if( editBuff->isOptionalHppXMsgTableIncludeNull() ) {
							editTable->setOptionalHppXMsgTableIncludeNull();
						}
						else {
							editTable->setOptionalHppXMsgTableIncludeValue( editBuff->getOptionalHppXMsgTableIncludeValue() );
						}
						if( editBuff->isOptionalHppXMsgTableFormattersNull() ) {
							editTable->setOptionalHppXMsgTableFormattersNull();
						}
						else {
							editTable->setOptionalHppXMsgTableFormattersValue( editBuff->getOptionalHppXMsgTableFormattersValue() );
						}
						if( editBuff->isOptionalHppXMsgRqstTableIncludeNull() ) {
							editTable->setOptionalHppXMsgRqstTableIncludeNull();
						}
						else {
							editTable->setOptionalHppXMsgRqstTableIncludeValue( editBuff->getOptionalHppXMsgRqstTableIncludeValue() );
						}
						if( editBuff->isOptionalHppXMsgRspnTableIncludeNull() ) {
							editTable->setOptionalHppXMsgRspnTableIncludeNull();
						}
						else {
							editTable->setOptionalHppXMsgRspnTableIncludeValue( editBuff->getOptionalHppXMsgRspnTableIncludeValue() );
						}
						if( editBuff->isOptionalHppXMsgClientTableIncludeNull() ) {
							editTable->setOptionalHppXMsgClientTableIncludeNull();
						}
						else {
							editTable->setOptionalHppXMsgClientTableIncludeValue( editBuff->getOptionalHppXMsgClientTableIncludeValue() );
						}
						if( editBuff->isOptionalHppXMsgRqstTableBodyNull() ) {
							editTable->setOptionalHppXMsgRqstTableBodyNull();
						}
						else {
							editTable->setOptionalHppXMsgRqstTableBodyValue( editBuff->getOptionalHppXMsgRqstTableBodyValue() );
						}
						if( editBuff->isOptionalHppXMsgRspnTableBodyNull() ) {
							editTable->setOptionalHppXMsgRspnTableBodyNull();
						}
						else {
							editTable->setOptionalHppXMsgRspnTableBodyValue( editBuff->getOptionalHppXMsgRspnTableBodyValue() );
						}
						if( editBuff->isOptionalHppXMsgClientTableBodyNull() ) {
							editTable->setOptionalHppXMsgClientTableBodyNull();
						}
						else {
							editTable->setOptionalHppXMsgClientTableBodyValue( editBuff->getOptionalHppXMsgClientTableBodyValue() );
						}
						if( editBuff->isOptionalCsObjMembersNull() ) {
							editTable->setOptionalCsObjMembersNull();
						}
						else {
							editTable->setOptionalCsObjMembersValue( editBuff->getOptionalCsObjMembersValue() );
						}
						if( editBuff->isOptionalCsObjInterfaceNull() ) {
							editTable->setOptionalCsObjInterfaceNull();
						}
						else {
							editTable->setOptionalCsObjInterfaceValue( editBuff->getOptionalCsObjInterfaceValue() );
						}
						if( editBuff->isOptionalCsObjUsingNull() ) {
							editTable->setOptionalCsObjUsingNull();
						}
						else {
							editTable->setOptionalCsObjUsingValue( editBuff->getOptionalCsObjUsingValue() );
						}
						if( editBuff->isOptionalCsObjImplementationNull() ) {
							editTable->setOptionalCsObjImplementationNull();
						}
						else {
							editTable->setOptionalCsObjImplementationValue( editBuff->getOptionalCsObjImplementationValue() );
						}
						if( editBuff->isOptionalCsEditObjMembersNull() ) {
							editTable->setOptionalCsEditObjMembersNull();
						}
						else {
							editTable->setOptionalCsEditObjMembersValue( editBuff->getOptionalCsEditObjMembersValue() );
						}
						if( editBuff->isOptionalCsEditObjInterfaceNull() ) {
							editTable->setOptionalCsEditObjInterfaceNull();
						}
						else {
							editTable->setOptionalCsEditObjInterfaceValue( editBuff->getOptionalCsEditObjInterfaceValue() );
						}
						if( editBuff->isOptionalCsEditObjUsingNull() ) {
							editTable->setOptionalCsEditObjUsingNull();
						}
						else {
							editTable->setOptionalCsEditObjUsingValue( editBuff->getOptionalCsEditObjUsingValue() );
						}
						if( editBuff->isOptionalCsEditObjImplementationNull() ) {
							editTable->setOptionalCsEditObjImplementationNull();
						}
						else {
							editTable->setOptionalCsEditObjImplementationValue( editBuff->getOptionalCsEditObjImplementationValue() );
						}
						if( editBuff->isOptionalCsTableUsingNull() ) {
							editTable->setOptionalCsTableUsingNull();
						}
						else {
							editTable->setOptionalCsTableUsingValue( editBuff->getOptionalCsTableUsingValue() );
						}
						if( editBuff->isOptionalCsTableMembersNull() ) {
							editTable->setOptionalCsTableMembersNull();
						}
						else {
							editTable->setOptionalCsTableMembersValue( editBuff->getOptionalCsTableMembersValue() );
						}
						if( editBuff->isOptionalCsTableInterfaceNull() ) {
							editTable->setOptionalCsTableInterfaceNull();
						}
						else {
							editTable->setOptionalCsTableInterfaceValue( editBuff->getOptionalCsTableInterfaceValue() );
						}
						if( editBuff->isOptionalCsTableImplementationNull() ) {
							editTable->setOptionalCsTableImplementationNull();
						}
						else {
							editTable->setOptionalCsTableImplementationValue( editBuff->getOptionalCsTableImplementationValue() );
						}
						if( editBuff->isOptionalCsTableObjUsingNull() ) {
							editTable->setOptionalCsTableObjUsingNull();
						}
						else {
							editTable->setOptionalCsTableObjUsingValue( editBuff->getOptionalCsTableObjUsingValue() );
						}
						if( editBuff->isOptionalCsTableObjMembersNull() ) {
							editTable->setOptionalCsTableObjMembersNull();
						}
						else {
							editTable->setOptionalCsTableObjMembersValue( editBuff->getOptionalCsTableObjMembersValue() );
						}
						if( editBuff->isOptionalCsTableObjInterfaceNull() ) {
							editTable->setOptionalCsTableObjInterfaceNull();
						}
						else {
							editTable->setOptionalCsTableObjInterfaceValue( editBuff->getOptionalCsTableObjInterfaceValue() );
						}
						if( editBuff->isOptionalCsTableObjImplementationNull() ) {
							editTable->setOptionalCsTableObjImplementationNull();
						}
						else {
							editTable->setOptionalCsTableObjImplementationValue( editBuff->getOptionalCsTableObjImplementationValue() );
						}
						if( editBuff->isOptionalCsDb2LUWTableUsingNull() ) {
							editTable->setOptionalCsDb2LUWTableUsingNull();
						}
						else {
							editTable->setOptionalCsDb2LUWTableUsingValue( editBuff->getOptionalCsDb2LUWTableUsingValue() );
						}
						if( editBuff->isOptionalCsDb2LUWTableMembersNull() ) {
							editTable->setOptionalCsDb2LUWTableMembersNull();
						}
						else {
							editTable->setOptionalCsDb2LUWTableMembersValue( editBuff->getOptionalCsDb2LUWTableMembersValue() );
						}
						if( editBuff->isOptionalCsDb2LUWTableImplementationNull() ) {
							editTable->setOptionalCsDb2LUWTableImplementationNull();
						}
						else {
							editTable->setOptionalCsDb2LUWTableImplementationValue( editBuff->getOptionalCsDb2LUWTableImplementationValue() );
						}
						if( editBuff->isOptionalCsMSSqlTableUsingNull() ) {
							editTable->setOptionalCsMSSqlTableUsingNull();
						}
						else {
							editTable->setOptionalCsMSSqlTableUsingValue( editBuff->getOptionalCsMSSqlTableUsingValue() );
						}
						if( editBuff->isOptionalCsMSSqlTableMembersNull() ) {
							editTable->setOptionalCsMSSqlTableMembersNull();
						}
						else {
							editTable->setOptionalCsMSSqlTableMembersValue( editBuff->getOptionalCsMSSqlTableMembersValue() );
						}
						if( editBuff->isOptionalCsMSSqlTableImplementationNull() ) {
							editTable->setOptionalCsMSSqlTableImplementationNull();
						}
						else {
							editTable->setOptionalCsMSSqlTableImplementationValue( editBuff->getOptionalCsMSSqlTableImplementationValue() );
						}
						if( editBuff->isOptionalCsMySqlTableUsingNull() ) {
							editTable->setOptionalCsMySqlTableUsingNull();
						}
						else {
							editTable->setOptionalCsMySqlTableUsingValue( editBuff->getOptionalCsMySqlTableUsingValue() );
						}
						if( editBuff->isOptionalCsMySqlTableMembersNull() ) {
							editTable->setOptionalCsMySqlTableMembersNull();
						}
						else {
							editTable->setOptionalCsMySqlTableMembersValue( editBuff->getOptionalCsMySqlTableMembersValue() );
						}
						if( editBuff->isOptionalCsMySqlTableImplementationNull() ) {
							editTable->setOptionalCsMySqlTableImplementationNull();
						}
						else {
							editTable->setOptionalCsMySqlTableImplementationValue( editBuff->getOptionalCsMySqlTableImplementationValue() );
						}
						if( editBuff->isOptionalCsOracleTableUsingNull() ) {
							editTable->setOptionalCsOracleTableUsingNull();
						}
						else {
							editTable->setOptionalCsOracleTableUsingValue( editBuff->getOptionalCsOracleTableUsingValue() );
						}
						if( editBuff->isOptionalCsOracleTableMembersNull() ) {
							editTable->setOptionalCsOracleTableMembersNull();
						}
						else {
							editTable->setOptionalCsOracleTableMembersValue( editBuff->getOptionalCsOracleTableMembersValue() );
						}
						if( editBuff->isOptionalCsOracleTableImplementationNull() ) {
							editTable->setOptionalCsOracleTableImplementationNull();
						}
						else {
							editTable->setOptionalCsOracleTableImplementationValue( editBuff->getOptionalCsOracleTableImplementationValue() );
						}
						if( editBuff->isOptionalCsPgSqlTableUsingNull() ) {
							editTable->setOptionalCsPgSqlTableUsingNull();
						}
						else {
							editTable->setOptionalCsPgSqlTableUsingValue( editBuff->getOptionalCsPgSqlTableUsingValue() );
						}
						if( editBuff->isOptionalCsPgSqlTableMembersNull() ) {
							editTable->setOptionalCsPgSqlTableMembersNull();
						}
						else {
							editTable->setOptionalCsPgSqlTableMembersValue( editBuff->getOptionalCsPgSqlTableMembersValue() );
						}
						if( editBuff->isOptionalCsPgSqlTableImplementationNull() ) {
							editTable->setOptionalCsPgSqlTableImplementationNull();
						}
						else {
							editTable->setOptionalCsPgSqlTableImplementationValue( editBuff->getOptionalCsPgSqlTableImplementationValue() );
						}
						if( editBuff->isOptionalCsRamTableUsingNull() ) {
							editTable->setOptionalCsRamTableUsingNull();
						}
						else {
							editTable->setOptionalCsRamTableUsingValue( editBuff->getOptionalCsRamTableUsingValue() );
						}
						if( editBuff->isOptionalCsRamTableMembersNull() ) {
							editTable->setOptionalCsRamTableMembersNull();
						}
						else {
							editTable->setOptionalCsRamTableMembersValue( editBuff->getOptionalCsRamTableMembersValue() );
						}
						if( editBuff->isOptionalCsRamTableImplementationNull() ) {
							editTable->setOptionalCsRamTableImplementationNull();
						}
						else {
							editTable->setOptionalCsRamTableImplementationValue( editBuff->getOptionalCsRamTableImplementationValue() );
						}
						if( editBuff->isOptionalCsSaxLoaderUsingNull() ) {
							editTable->setOptionalCsSaxLoaderUsingNull();
						}
						else {
							editTable->setOptionalCsSaxLoaderUsingValue( editBuff->getOptionalCsSaxLoaderUsingValue() );
						}
						if( editBuff->isOptionalCsSaxLoaderStartElementNull() ) {
							editTable->setOptionalCsSaxLoaderStartElementNull();
						}
						else {
							editTable->setOptionalCsSaxLoaderStartElementValue( editBuff->getOptionalCsSaxLoaderStartElementValue() );
						}
						if( editBuff->isOptionalCsSaxLoaderEndElementNull() ) {
							editTable->setOptionalCsSaxLoaderEndElementNull();
						}
						else {
							editTable->setOptionalCsSaxLoaderEndElementValue( editBuff->getOptionalCsSaxLoaderEndElementValue() );
						}
						if( editBuff->isOptionalCsXMsgTableUsingNull() ) {
							editTable->setOptionalCsXMsgTableUsingNull();
						}
						else {
							editTable->setOptionalCsXMsgTableUsingValue( editBuff->getOptionalCsXMsgTableUsingValue() );
						}
						if( editBuff->isOptionalCsXMsgTableFormattersNull() ) {
							editTable->setOptionalCsXMsgTableFormattersNull();
						}
						else {
							editTable->setOptionalCsXMsgTableFormattersValue( editBuff->getOptionalCsXMsgTableFormattersValue() );
						}
						if( editBuff->isOptionalCsXMsgRqstTableUsingNull() ) {
							editTable->setOptionalCsXMsgRqstTableUsingNull();
						}
						else {
							editTable->setOptionalCsXMsgRqstTableUsingValue( editBuff->getOptionalCsXMsgRqstTableUsingValue() );
						}
						if( editBuff->isOptionalCsXMsgRspnTableUsingNull() ) {
							editTable->setOptionalCsXMsgRspnTableUsingNull();
						}
						else {
							editTable->setOptionalCsXMsgRspnTableUsingValue( editBuff->getOptionalCsXMsgRspnTableUsingValue() );
						}
						if( editBuff->isOptionalCsXMsgClientTableUsingNull() ) {
							editTable->setOptionalCsXMsgClientTableUsingNull();
						}
						else {
							editTable->setOptionalCsXMsgClientTableUsingValue( editBuff->getOptionalCsXMsgClientTableUsingValue() );
						}
						if( editBuff->isOptionalCsXMsgRqstTableBodyNull() ) {
							editTable->setOptionalCsXMsgRqstTableBodyNull();
						}
						else {
							editTable->setOptionalCsXMsgRqstTableBodyValue( editBuff->getOptionalCsXMsgRqstTableBodyValue() );
						}
						if( editBuff->isOptionalCsXMsgRspnTableBodyNull() ) {
							editTable->setOptionalCsXMsgRspnTableBodyNull();
						}
						else {
							editTable->setOptionalCsXMsgRspnTableBodyValue( editBuff->getOptionalCsXMsgRspnTableBodyValue() );
						}
						if( editBuff->isOptionalCsXMsgClientTableBodyNull() ) {
							editTable->setOptionalCsXMsgClientTableBodyNull();
						}
						else {
							editTable->setOptionalCsXMsgClientTableBodyValue( editBuff->getOptionalCsXMsgClientTableBodyValue() );
						}
						editTable->setOptionalLookupDefSchema( editBuff->getOptionalLookupDefSchema() );
						editTable->setOptionalLookupLookupIndex( editBuff->getOptionalLookupLookupIndex() );
						editTable->setOptionalLookupAltIndex( editBuff->getOptionalLookupAltIndex() );
						editTable->setOptionalLookupQualTable( editBuff->getOptionalLookupQualTable() );
						editTable->setOptionalLookupPrimaryIndex( editBuff->getOptionalLookupPrimaryIndex() );
						editBuff->endEdit();
						editBuff = NULL;
						break;
					case cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Replace:
						editTable = dynamic_cast<cfbam::ICFBamTableEditObj*>( origTable->beginEdit() );
						editTable->deleteInstance();
						editTable = NULL;
						origTable = NULL;
						editTable = editBuff;
						editBuff = NULL;
						break;
				}
			}

			if( editTable != NULL ) {
				if( origTable != NULL ) {
					editTable->update();
				}
				else {
					origTable = dynamic_cast<cfbam::ICFBamTableObj*>( editTable->create() );
				}
				editTable = NULL;
			}

			if( ! tmpBuff->getIsNew() ) {
				tmpBuff = NULL;
			}

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

		if( natTableClassCode != NULL ) {
			delete natTableClassCode;
			natTableClassCode = NULL;
		}

		if( natCppPgSqlTableInclude != NULL ) {
			delete natCppPgSqlTableInclude;
			natCppPgSqlTableInclude = NULL;
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

		if( attrIsMutable != NULL ) {
			delete attrIsMutable;
			attrIsMutable = NULL;
		}

		if( attrIsServerOnly != NULL ) {
			delete attrIsServerOnly;
			attrIsServerOnly = NULL;
		}

		if( attrLoaderBehaviour != NULL ) {
			delete attrLoaderBehaviour;
			attrLoaderBehaviour = NULL;
		}

		if( attrSecScope != NULL ) {
			delete attrSecScope;
			attrSecScope = NULL;
		}

		if( attrCppPgSqlTableInclude != NULL ) {
			delete attrCppPgSqlTableInclude;
			attrCppPgSqlTableInclude = NULL;
		}

		if( attrDefSchema != NULL ) {
			delete attrDefSchema;
			attrDefSchema = NULL;
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

		if( attrPrimaryIndex != NULL ) {
			delete attrPrimaryIndex;
			attrPrimaryIndex = NULL;
		}

		if( editTable != NULL ) {
			editTable->endEdit();
			editTable = NULL;
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

	void CFBamSaxLoaderTableHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
		static const std::string S_ProcName( "endElement" );
		static const std::string S_Object( "Object" );
		static const std::string S_LookupIndex( "LookupIndex" );
		static const std::string S_AltIndex( "AltIndex" );
		static const std::string S_PrimaryIndex( "PrimaryIndex" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		static const std::string S_CurObj( "curObj" );
		CFLIB_EXCEPTION_DECLINFO
		cflib::CFLibXmlCoreContext* curContext = NULL;
		cfbam::CFBamSaxLoader* saxLoader = NULL;
		cfbam::ICFBamSchemaObj* schemaObj = NULL;
		cflib::ICFLibAnyObj* curObj = NULL;
		cfbam::ICFBamTableObj* origBuff = NULL;
		cfbam::ICFBamTableEditObj* editBuff = NULL;
		std::string* attrLookupIndex = NULL;
		std::string* attrAltIndex = NULL;
		std::string* attrPrimaryIndex = NULL;
		cfbam::ICFBamIndexObj* refLookupIndex = NULL;
		cfbam::ICFBamIndexObj* refAltIndex = NULL;
		cfbam::ICFBamIndexObj* refPrimaryIndex = NULL;
		try {
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

			curContext = getParser()->getCurContext();
			if( curContext == NULL ) {
				static const std::string S_CurContext( "getParser()->getCurContext" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CurContext );
			}

			curObj = curContext->getObj();
			if( curObj == NULL ) {
				static const std::string S_CurContextObj( "getParser()->getCurContext()->getObj()" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CurContextObj );
			}
			else if( curObj->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				origBuff = dynamic_cast<cfbam::ICFBamTableObj*>( curObj );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_CurObj,
					curObj,
					"ICFBamTableObj" );
			}
			try {
				const std::string strLookupIndex = curContext->getNamedTag( S_LookupIndex );
				attrLookupIndex = new std::string( strLookupIndex );
			}
			catch( ... ) {
				attrLookupIndex = NULL;
			}
			try {
				const std::string strAltIndex = curContext->getNamedTag( S_AltIndex );
				attrAltIndex = new std::string( strAltIndex );
			}
			catch( ... ) {
				attrAltIndex = NULL;
			}
			try {
				const std::string strPrimaryIndex = curContext->getNamedTag( S_PrimaryIndex );
				attrPrimaryIndex = new std::string( strPrimaryIndex );
			}
			catch( ... ) {
				attrPrimaryIndex = NULL;
			}
			// Lookup refLookupIndex by qualified name
			if( ( attrLookupIndex != NULL ) && ( attrLookupIndex->length() > 0 ) ) {
				refLookupIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( origBuff->getNamedObject( schemaObj->getIndexTableObj()->getObjQualifyingClassCode(),
					*attrLookupIndex ) );
				if( refLookupIndex == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve LookupIndex reference qualified name \"" + *attrLookupIndex + "\" to table Index" );
				}
			}
			else {
				refLookupIndex = NULL;
			}
			// The comparison works because instance interfaces are always from the same schema object, with one instance per primary key
			if( origBuff->getOptionalLookupLookupIndex() != refLookupIndex ) {
				if( editBuff == NULL ) {
					editBuff = dynamic_cast<cfbam::ICFBamTableEditObj*>( origBuff->beginEdit() );
				}
				editBuff->setOptionalLookupLookupIndex( refLookupIndex );
			}

			// Lookup refAltIndex by qualified name
			if( ( attrAltIndex != NULL ) && ( attrAltIndex->length() > 0 ) ) {
				refAltIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( origBuff->getNamedObject( schemaObj->getIndexTableObj()->getObjQualifyingClassCode(),
					*attrAltIndex ) );
				if( refAltIndex == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve AltIndex reference qualified name \"" + *attrAltIndex + "\" to table Index" );
				}
			}
			else {
				refAltIndex = NULL;
			}
			// The comparison works because instance interfaces are always from the same schema object, with one instance per primary key
			if( origBuff->getOptionalLookupAltIndex() != refAltIndex ) {
				if( editBuff == NULL ) {
					editBuff = dynamic_cast<cfbam::ICFBamTableEditObj*>( origBuff->beginEdit() );
				}
				editBuff->setOptionalLookupAltIndex( refAltIndex );
			}

			// Lookup refPrimaryIndex by qualified name
			if( ( attrPrimaryIndex != NULL ) && ( attrPrimaryIndex->length() > 0 ) ) {
				refPrimaryIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( origBuff->getNamedObject( schemaObj->getIndexTableObj()->getObjQualifyingClassCode(),
					*attrPrimaryIndex ) );
				if( refPrimaryIndex == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Resolve PrimaryIndex reference qualified name \"" + *attrPrimaryIndex + "\" to table Index" );
				}
			}
			else {
				refPrimaryIndex = NULL;
			}
			// The comparison works because instance interfaces are always from the same schema object, with one instance per primary key
			if( origBuff->getOptionalLookupPrimaryIndex() != refPrimaryIndex ) {
				if( editBuff == NULL ) {
					editBuff = dynamic_cast<cfbam::ICFBamTableEditObj*>( origBuff->beginEdit() );
				}
				editBuff->setOptionalLookupPrimaryIndex( refPrimaryIndex );
			}

			if( editBuff != NULL ) {
				editBuff->update();
				editBuff = NULL;
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editBuff != NULL ) {
			editBuff->endEdit();
			editBuff = NULL;
		}
		if( attrLookupIndex != NULL ) {
			delete attrLookupIndex;
			attrLookupIndex = NULL;
		}

		if( attrAltIndex != NULL ) {
			delete attrAltIndex;
			attrAltIndex = NULL;
		}

		if( attrPrimaryIndex != NULL ) {
			delete attrPrimaryIndex;
			attrPrimaryIndex = NULL;
		}


		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}
}
