// Description: C++18 XML Custom SAX XML Parser for Business Application Model 2.13 files 
/*
 *	com.github.msobkow.CFBam
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

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoader.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderSchemaRefHandler.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamCustXmlLoaderSchemaRefHandler::CLASS_NAME( "CFBamCustXmlLoaderSchemaRefHandler" );
	const std::string CFBamCustXmlLoaderSchemaRefHandler::S_True( "true" );
	const std::string CFBamCustXmlLoaderSchemaRefHandler::S_False( "false" );
	const std::string CFBamCustXmlLoaderSchemaRefHandler::S_Yes( "yes" );
	const std::string CFBamCustXmlLoaderSchemaRefHandler::S_No( "no" );
	const std::string CFBamCustXmlLoaderSchemaRefHandler::S_0( "0" );
	const std::string CFBamCustXmlLoaderSchemaRefHandler::S_1( "1" );

	CFBamCustXmlLoaderSchemaRefHandler::CFBamCustXmlLoaderSchemaRefHandler( cfbam::CFBamCustXmlLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamCustXmlLoaderSchemaRefHandler::~CFBamCustXmlLoaderSchemaRefHandler() {
	}

	void CFBamCustXmlLoaderSchemaRefHandler::startElement (
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
		static const std::string S_SchemaId( "SchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_RefModelName( "RefModelName" );
		static const std::string S_IncludeRoot( "IncludeRoot" );
		static const std::string S_RefSchemaTenantId( "RefSchemaTenantId" );
		static const std::string S_RefSchemaId( "RefSchemaId" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		static const std::string S_Schema( "Schema" );
		static const std::string S_RefSchema( "RefSchema" );
		static const std::string S_Prev( "Prev" );
		static const std::string S_Next( "Next" );
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
		cfbam::ICFBamSchemaRefObj* tmpBuff = NULL;
		cfbam::ICFBamSchemaRefEditObj* editBuff = NULL;
		cfbam::ICFBamSchemaRefObj* origSchemaRef = NULL;
		cfbam::ICFBamSchemaRefTableObj* schemaRefTableObj = NULL;
		cfbam::ICFBamSchemaRefObj* schemaRef = NULL;
		cfbam::ICFBamSchemaRefEditObj* editSchemaRef = NULL;
		cfbam::ICFBamSchemaDefObj* referencedSchemaDef = NULL;
		cflib::ICFLibAnyObj* resolvedObj = NULL;
		cflib::ICFLibMessageLog* log = NULL;
		cfbam::CFBamCustMssCFEngine* myEngine = NULL;
		cfbam::CFBamCustXmlLoader* subParser = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// Scope Attributes
		// Scope References
		cfsec::ICFSecTenantObj* refTenant = NULL;
		// SchemaRef Attributes
		std::string* attrName = NULL;
		std::string* attrRefModelName = NULL;
		std::string* attrIncludeRoot = NULL;
		// SchemaRef References
		cfbam::ICFBamSchemaDefObj* refSchema = NULL;
		cfbam::ICFBamSchemaDefObj* refRefSchema = NULL;
		// Native type conversions of attributes
		std::string* natName = NULL;
		std::string* natRefModelName = NULL;
		std::string* natIncludeRoot = NULL;
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
			if( cppQName != "SchemaRef" ) {
				std::string Msg( "Expected QName to be 'SchemaRef'" );
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
			tmpBuff = schemaObj->getSchemaRefTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamSchemaRefEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_RefModelName ) {
					if( attrRefModelName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrRefModelName = new std::string( *cppValue );
					}
					else {
						attrRefModelName = NULL;
					}
				}
				else if( *attrLocalName == S_IncludeRoot ) {
					if( attrIncludeRoot != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIncludeRoot = new std::string( *cppValue );
					}
					else {
						attrIncludeRoot = NULL;
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
			if( attrRefModelName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_RefModelName );
			}
			if( attrIncludeRoot == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IncludeRoot );
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

			if( attrRefModelName != NULL ) {
				natRefModelName = new std::string( *attrRefModelName );
			}
			else {
				natRefModelName = NULL;
			}
			if( natRefModelName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_RefModelName );
			}
			editBuff->setRequiredRefModelName( *natRefModelName );

			if( attrIncludeRoot != NULL ) {
				natIncludeRoot = new std::string( *attrIncludeRoot );
			}
			else {
				natIncludeRoot = NULL;
			}
			if( natIncludeRoot == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IncludeRoot );
			}
			editBuff->setRequiredIncludeRoot( *natIncludeRoot );

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
				refSchema = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( scopeObj );
				editBuff->setRequiredContainerSchema( refSchema );
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

			schemaRefTableObj = dynamic_cast<cfbam::ICFBamSchemaRefTableObj*>( schemaObj->getSchemaRefTableObj() );
			origSchemaRef = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( schemaRefTableObj->readSchemaRefByUNameIdx( refSchema->getRequiredTenantId(), refSchema->getRequiredId(), *attrName ) );
			schemaRef = NULL;
			editSchemaRef = NULL;
			referencedSchemaDef = NULL;

			bool needToLoad;

			if( origSchemaRef != NULL ) {
				schemaRef = origSchemaRef;
				editBuff->endEdit();
				editBuff = NULL;
				delete tmpBuff;
				tmpBuff = NULL;
				referencedSchemaDef = schemaRef->getOptionalLookupRefSchema();
				needToLoad = false;
			}
			else {
				editSchemaRef = editBuff;
				schemaRef = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( editSchemaRef->create() );
				editSchemaRef = NULL;
				needToLoad = true;
				referencedSchemaDef = NULL;
			}

			curContext->setObj( schemaRef );

			resolvedObj = NULL;
			try {
				resolvedObj = refTenant->getNamedObject( *attrIncludeRoot );
				if( resolvedObj != NULL ) {
					needToLoad = false;
				}
				else {
					needToLoad = true;
				}
			}
			catch( ... ) {
				resolvedObj = NULL;
				needToLoad = true;
			}

			log = getLog();

			if( needToLoad ) {
				myEngine = dynamic_cast<cfbam::CFBamCustMssCFEngine*>( saxLoader->getBamEngine() );
				if( myEngine == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							"Engine" );
				}

				subParser = new cfbam::CFBamCustXmlLoader( myEngine, log );
				subParser->setSchemaObj( saxLoader->getSchemaObj() );
				subParser->setTenant( saxLoader->getTenant() );

				subParser->loadTenant( *attrRefModelName );
			}

			// Re-attempt the resolution by name and complain if the load didn't fix the problem

			try {
				resolvedObj = refTenant->getNamedObject( *attrIncludeRoot );
			}
			catch( ... ) {
				resolvedObj = NULL;
			}

			if( resolvedObj == NULL ) {
				log->message( "WARNING: Could not resolve named object \"" + *attrIncludeRoot + "\"\n" );
				referencedSchemaDef = NULL;
			}
			else if( resolvedObj->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				referencedSchemaDef = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( resolvedObj );
				editSchemaRef = dynamic_cast<cfbam::ICFBamSchemaRefEditObj*>( schemaRef->beginEdit() );
				editSchemaRef->setOptionalLookupRefSchema( referencedSchemaDef );
				editSchemaRef->update();
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, 
					S_ProcName,
					*attrIncludeRoot,
					resolvedObj,
					"ICFBamSchemaDefObj" );
			}

//			MSS TODO WORKING Hope I don't have to do this 'cause the Obj is already used for my SchemaRef instance
//			curContext->setObj( "ReferencedSchemaDef", referencedSchemaDef );

			importMergeSchema( refSchema, referencedSchemaDef );
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

		if( natRefModelName != NULL ) {
			delete natRefModelName;
			natRefModelName = NULL;
		}

		if( natIncludeRoot != NULL ) {
			delete natIncludeRoot;
			natIncludeRoot = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrRefModelName != NULL ) {
			delete attrRefModelName;
			attrRefModelName = NULL;
		}

		if( attrIncludeRoot != NULL ) {
			delete attrIncludeRoot;
			attrIncludeRoot = NULL;
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

		if( editSchemaRef != NULL ) {
			editSchemaRef->endEdit();
			editSchemaRef = NULL;
		}

		if( schemaRef != NULL ) {
			if( schemaRef->getIsNew() ) {
				delete schemaRef;
			}
			schemaRef = NULL;
		}

		if( subParser != NULL ) {
			delete subParser;
			subParser = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchema( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchema" );

		if( dst == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				"dst" );
		}

		if( src == NULL ) {
			return;
		}

		if( dst == src ) {
			return;
		}

		int64_t tenantIdForRef = dst->getRequiredTenantId();
		dst->getSchema()->getId16GenTableObj()->readId16GenByDispIdx( &tenantIdForRef, 0L );
		dst->getSchema()->getId32GenTableObj()->readId32GenByDispIdx( &tenantIdForRef, 0L );
		dst->getSchema()->getId64GenTableObj()->readId64GenByDispIdx( &tenantIdForRef, 0L );

		importMergeSchemaTables( dst, src );
		importMergeSchemaTypes( dst, src );
		importMergeSchemaTableColumns( dst, src );
		importMergeSchemaTableIndexes( dst, src );
		importMergeSchemaTableResolvePrimaryIndexes( dst, src );
		importMergeSchemaTableResolveLookupIndexes( dst, src );
		importMergeSchemaTableRelations( dst, src );
		importMergeSchemaTableResolveNarrowedRelations( dst, src );
		importMergeSchemaTableTableChains( dst, src );
		importMergeSchemaTableRelationPopDeps( dst, src );
		importMergeSchemaTableTableClearDeps( dst, src );
		importMergeSchemaTableTableDelDeps( dst, src );
		importMergeSchemaTableServerMethods( dst, src );
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTables( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTables" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableTableObj* dstTableTableObj = dst->getSchema()->getTableTableObj();
		std::vector<cfbam::ICFBamTableObj*> srcTables = src->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		cfbam::ICFBamTableEditObj* editDstTable = NULL;
		cfbam::ICFBamSchemaDefObj* lookupSchema = NULL;
		cfbam::ICFBamTableObj* srcQualTable = NULL;
		cfbam::ICFBamTableObj* dstQualTable = NULL;
		int64_t origDstTableTenantId;
		int64_t origDstTableId;
		try {
			for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
				srcTable = *iterSrcTable;
				origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(),
					dst->getRequiredId(),
					srcTable->getRequiredName() );
				if( origDstTable == NULL ) {
					origDstTable = dstTableTableObj->newInstance();
					editDstTable = dynamic_cast<cfbam::ICFBamTableEditObj*>( origDstTable->beginEdit() );
					editDstTable->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
					editDstTable->setRequiredContainerSchemaDef( dst );
					editDstTable->setRequiredHasAuditColumns( srcTable->getRequiredHasAuditColumns() );
					editDstTable->setRequiredHasHistory( srcTable->getRequiredHasHistory() );
					editDstTable->setRequiredIsInstantiable( srcTable->getRequiredIsInstantiable() );
					editDstTable->setRequiredPageData( srcTable->getRequiredPageData() );
					if( srcTable->isOptionalJDb2LUWTableImplementationNull() ) {
						editDstTable->setOptionalJDb2LUWTableImplementationNull();
					}
					else {
						editDstTable->setOptionalJDb2LUWTableImplementationValue( srcTable->getOptionalJDb2LUWTableImplementationValue() );
					}
					if( srcTable->isOptionalJDb2LUWTableImportNull() ) {
						editDstTable->setOptionalJDb2LUWTableImportNull();
					}
					else {
						editDstTable->setOptionalJDb2LUWTableImportValue( srcTable->getOptionalJDb2LUWTableImportValue() );
					}
					if( srcTable->isOptionalJDb2LUWTableMembersNull() ) {
						editDstTable->setOptionalJDb2LUWTableMembersNull();
					}
					else {
						editDstTable->setOptionalJDb2LUWTableMembersValue( srcTable->getOptionalJDb2LUWTableMembersValue() );
					}
					if( srcTable->isOptionalJEditObjImplementationNull() ) {
						editDstTable->setOptionalJEditObjImplementationNull();
					}
					else {
						editDstTable->setOptionalJEditObjImplementationValue( srcTable->getOptionalJEditObjImplementationValue() );
					}
					if( srcTable->isOptionalJEditObjImportNull() ) {
						editDstTable->setOptionalJEditObjImportNull();
					}
					else {
						editDstTable->setOptionalJEditObjImportValue( srcTable->getOptionalJEditObjImportValue() );
					}
					if( srcTable->isOptionalJEditObjInterfaceNull() ) {
						editDstTable->setOptionalJEditObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalJEditObjInterfaceValue( srcTable->getOptionalJEditObjInterfaceValue() );
					}
					if( srcTable->isOptionalJMSSqlTableImplementationNull() ) {
						editDstTable->setOptionalJMSSqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalJMSSqlTableImplementationValue( srcTable->getOptionalJMSSqlTableImplementationValue() );
					}
					if( srcTable->isOptionalJMSSqlTableImportNull() ) {
						editDstTable->setOptionalJMSSqlTableImportNull();
					}
					else {
						editDstTable->setOptionalJMSSqlTableImportValue( srcTable->getOptionalJMSSqlTableImportValue() );
					}
					if( srcTable->isOptionalJMSSqlTableMembersNull() ) {
						editDstTable->setOptionalJMSSqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalJMSSqlTableMembersValue( srcTable->getOptionalJMSSqlTableMembersValue() );
					}
					if( srcTable->isOptionalJMySqlTableImplementationNull() ) {
						editDstTable->setOptionalJMySqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalJMySqlTableImplementationValue( srcTable->getOptionalJMySqlTableImplementationValue() );
					}
					if( srcTable->isOptionalJMySqlTableImportNull() ) {
						editDstTable->setOptionalJMySqlTableImportNull();
					}
					else {
						editDstTable->setOptionalJMySqlTableImportValue( srcTable->getOptionalJMySqlTableImportValue() );
					}
					if( srcTable->isOptionalJMySqlTableMembersNull() ) {
						editDstTable->setOptionalJMySqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalJMySqlTableMembersValue( srcTable->getOptionalJMySqlTableMembersValue() );
					}
					if( srcTable->isOptionalJObjImplementationNull() ) {
						editDstTable->setOptionalJObjImplementationNull();
					}
					else {
						editDstTable->setOptionalJObjImplementationValue( srcTable->getOptionalJObjImplementationValue() );
					}
					if( srcTable->isOptionalJObjImportNull() ) {
						editDstTable->setOptionalJObjImportNull();
					}
					else {
						editDstTable->setOptionalJObjImportValue( srcTable->getOptionalJObjImportValue() );
					}
					if( srcTable->isOptionalJObjInterfaceNull() ) {
						editDstTable->setOptionalJObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalJObjInterfaceValue( srcTable->getOptionalJObjInterfaceValue() );
					}
					if( srcTable->isOptionalJObjMembersNull() ) {
						editDstTable->setOptionalJObjMembersNull();
					}
					else {
						editDstTable->setOptionalJObjMembersValue( srcTable->getOptionalJObjMembersValue() );
					}
					if( srcTable->isOptionalJOracleTableImplementationNull() ) {
						editDstTable->setOptionalJOracleTableImplementationNull();
					}
					else {
						editDstTable->setOptionalJOracleTableImplementationValue( srcTable->getOptionalJOracleTableImplementationValue() );
					}
					if( srcTable->isOptionalJOracleTableImportNull() ) {
						editDstTable->setOptionalJOracleTableImportNull();
					}
					else {
						editDstTable->setOptionalJOracleTableImportValue( srcTable->getOptionalJOracleTableImportValue() );
					}
					if( srcTable->isOptionalJOracleTableMembersNull() ) {
						editDstTable->setOptionalJOracleTableMembersNull();
					}
					else {
						editDstTable->setOptionalJOracleTableMembersValue( srcTable->getOptionalJOracleTableMembersValue() );
					}
					if( srcTable->isOptionalJPgSqlTableImplementationNull() ) {
						editDstTable->setOptionalJPgSqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalJPgSqlTableImplementationValue( srcTable->getOptionalJPgSqlTableImplementationValue() );
					}
					if( srcTable->isOptionalJPgSqlTableImportNull() ) {
						editDstTable->setOptionalJPgSqlTableImportNull();
					}
					else {
						editDstTable->setOptionalJPgSqlTableImportValue( srcTable->getOptionalJPgSqlTableImportValue() );
					}
					if( srcTable->isOptionalJPgSqlTableMembersNull() ) {
						editDstTable->setOptionalJPgSqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalJPgSqlTableMembersValue( srcTable->getOptionalJPgSqlTableMembersValue() );
					}
					if( srcTable->isOptionalJRamTableImplementationNull() ) {
						editDstTable->setOptionalJRamTableImplementationNull();
					}
					else {
						editDstTable->setOptionalJRamTableImplementationValue( srcTable->getOptionalJRamTableImplementationValue() );
					}
					if( srcTable->isOptionalJRamTableImportNull() ) {
						editDstTable->setOptionalJRamTableImportNull();
					}
					else {
						editDstTable->setOptionalJRamTableImportValue( srcTable->getOptionalJRamTableImportValue() );
					}
					if( srcTable->isOptionalJRamTableMembersNull() ) {
						editDstTable->setOptionalJRamTableMembersNull();
					}
					else {
						editDstTable->setOptionalJRamTableMembersValue( srcTable->getOptionalJRamTableMembersValue() );
					}
					if( srcTable->isOptionalJSaxLoaderEndElementNull() ) {
						editDstTable->setOptionalJSaxLoaderEndElementNull();
					}
					else {
						editDstTable->setOptionalJSaxLoaderEndElementValue( srcTable->getOptionalJSaxLoaderEndElementValue() );
					}
					if( srcTable->isOptionalJSaxLoaderImportNull() ) {
						editDstTable->setOptionalJSaxLoaderImportNull();
					}
					else {
						editDstTable->setOptionalJSaxLoaderImportValue( srcTable->getOptionalJSaxLoaderImportValue() );
					}
					if( srcTable->isOptionalJSaxLoaderStartElementNull() ) {
						editDstTable->setOptionalJSaxLoaderStartElementNull();
					}
					else {
						editDstTable->setOptionalJSaxLoaderStartElementValue( srcTable->getOptionalJSaxLoaderStartElementValue() );
					}
					if( srcTable->isOptionalJTableImplementationNull() ) {
						editDstTable->setOptionalJTableImplementationNull();
					}
					else {
						editDstTable->setOptionalJTableImplementationValue( srcTable->getOptionalJTableImplementationValue() );
					}
					if( srcTable->isOptionalJTableImportNull() ) {
						editDstTable->setOptionalJTableImportNull();
					}
					else {
						editDstTable->setOptionalJTableImportValue( srcTable->getOptionalJTableImportValue() );
					}
					if( srcTable->isOptionalJTableInterfaceNull() ) {
						editDstTable->setOptionalJTableInterfaceNull();
					}
					else {
						editDstTable->setOptionalJTableInterfaceValue( srcTable->getOptionalJTableInterfaceValue() );
					}
					if( srcTable->isOptionalJTableMembersNull() ) {
						editDstTable->setOptionalJTableMembersNull();
					}
					else {
						editDstTable->setOptionalJTableMembersValue( srcTable->getOptionalJTableMembersValue() );
					}
					if( srcTable->isOptionalJTableObjImplementationNull() ) {
						editDstTable->setOptionalJTableObjImplementationNull();
					}
					else {
						editDstTable->setOptionalJTableObjImplementationValue( srcTable->getOptionalJTableObjImplementationValue() );
					}
					if( srcTable->isOptionalJTableObjImportNull() ) {
						editDstTable->setOptionalJTableObjImportNull();
					}
					else {
						editDstTable->setOptionalJTableObjImportValue( srcTable->getOptionalJTableObjImportValue() );
					}
					if( srcTable->isOptionalJTableObjInterfaceNull() ) {
						editDstTable->setOptionalJTableObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalJTableObjInterfaceValue( srcTable->getOptionalJTableObjInterfaceValue() );
					}
					if( srcTable->isOptionalJTableObjMembersNull() ) {
						editDstTable->setOptionalJTableObjMembersNull();
					}
					else {
						editDstTable->setOptionalJTableObjMembersValue( srcTable->getOptionalJTableObjMembersValue() );
					}
					if( srcTable->isOptionalJXMsgClientTableImportNull() ) {
						editDstTable->setOptionalJXMsgClientTableImportNull();
					}
					else {
						editDstTable->setOptionalJXMsgClientTableImportValue( srcTable->getOptionalJXMsgClientTableImportValue() );
					}
					if( srcTable->isOptionalJXMsgClientTableBodyNull() ) {
						editDstTable->setOptionalJXMsgClientTableBodyNull();
					}
					else {
						editDstTable->setOptionalJXMsgClientTableBodyValue( srcTable->getOptionalJXMsgClientTableBodyValue() );
					}
					if( srcTable->isOptionalJXMsgRqstTableBodyNull() ) {
						editDstTable->setOptionalJXMsgRqstTableBodyNull();
					}
					else {
						editDstTable->setOptionalJXMsgRqstTableBodyValue( srcTable->getOptionalJXMsgRqstTableBodyValue() );
					}
					if( srcTable->isOptionalJXMsgRqstTableImportNull() ) {
						editDstTable->setOptionalJXMsgRqstTableImportNull();
					}
					else {
						editDstTable->setOptionalJXMsgRqstTableImportValue( srcTable->getOptionalJXMsgRqstTableImportValue() );
					}
					if( srcTable->isOptionalJXMsgRspnTableBodyNull() ) {
						editDstTable->setOptionalJXMsgRspnTableBodyNull();
					}
					else {
						editDstTable->setOptionalJXMsgRspnTableBodyValue( srcTable->getOptionalJXMsgRspnTableBodyValue() );
					}
					if( srcTable->isOptionalJXMsgRspnTableImportNull() ) {
						editDstTable->setOptionalJXMsgRspnTableImportNull();
					}
					else {
						editDstTable->setOptionalJXMsgRspnTableImportValue( srcTable->getOptionalJXMsgRspnTableImportValue() );
					}
					if( srcTable->isOptionalJXMsgTableFormattersNull() ) {
						editDstTable->setOptionalJXMsgTableFormattersNull();
					}
					else {
						editDstTable->setOptionalJXMsgTableFormattersValue( srcTable->getOptionalJXMsgTableFormattersValue() );
					}
					if( srcTable->isOptionalJXMsgTableImportNull() ) {
						editDstTable->setOptionalJXMsgTableImportNull();
					}
					else {
						editDstTable->setOptionalJXMsgTableImportValue( srcTable->getOptionalJXMsgTableImportValue() );
					}
					if( srcTable->isOptionalHppDb2LUWTableImplementationNull() ) {
						editDstTable->setOptionalHppDb2LUWTableImplementationNull();
					}
					else {
						editDstTable->setOptionalHppDb2LUWTableImplementationValue( srcTable->getOptionalHppDb2LUWTableImplementationValue() );
					}
					if( srcTable->isOptionalHppDb2LUWTableIncludeNull() ) {
						editDstTable->setOptionalHppDb2LUWTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppDb2LUWTableIncludeValue( srcTable->getOptionalHppDb2LUWTableIncludeValue() );
					}
					if( srcTable->isOptionalHppDb2LUWTableMembersNull() ) {
						editDstTable->setOptionalHppDb2LUWTableMembersNull();
					}
					else {
						editDstTable->setOptionalHppDb2LUWTableMembersValue( srcTable->getOptionalHppDb2LUWTableMembersValue() );
					}
					if( srcTable->isOptionalHppEditObjImplementationNull() ) {
						editDstTable->setOptionalHppEditObjImplementationNull();
					}
					else {
						editDstTable->setOptionalHppEditObjImplementationValue( srcTable->getOptionalHppEditObjImplementationValue() );
					}
					if( srcTable->isOptionalHppEditObjIncludeNull() ) {
						editDstTable->setOptionalHppEditObjIncludeNull();
					}
					else {
						editDstTable->setOptionalHppEditObjIncludeValue( srcTable->getOptionalHppEditObjIncludeValue() );
					}
					if( srcTable->isOptionalHppEditObjInterfaceNull() ) {
						editDstTable->setOptionalHppEditObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalHppEditObjInterfaceValue( srcTable->getOptionalHppEditObjInterfaceValue() );
					}
					if( srcTable->isOptionalHppMSSqlTableImplementationNull() ) {
						editDstTable->setOptionalHppMSSqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalHppMSSqlTableImplementationValue( srcTable->getOptionalHppMSSqlTableImplementationValue() );
					}
					if( srcTable->isOptionalHppMSSqlTableIncludeNull() ) {
						editDstTable->setOptionalHppMSSqlTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppMSSqlTableIncludeValue( srcTable->getOptionalHppMSSqlTableIncludeValue() );
					}
					if( srcTable->isOptionalHppMSSqlTableMembersNull() ) {
						editDstTable->setOptionalHppMSSqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalHppMSSqlTableMembersValue( srcTable->getOptionalHppMSSqlTableMembersValue() );
					}
					if( srcTable->isOptionalHppMySqlTableImplementationNull() ) {
						editDstTable->setOptionalHppMySqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalHppMySqlTableImplementationValue( srcTable->getOptionalHppMySqlTableImplementationValue() );
					}
					if( srcTable->isOptionalHppMySqlTableIncludeNull() ) {
						editDstTable->setOptionalHppMySqlTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppMySqlTableIncludeValue( srcTable->getOptionalHppMySqlTableIncludeValue() );
					}
					if( srcTable->isOptionalHppMySqlTableMembersNull() ) {
						editDstTable->setOptionalHppMySqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalHppMySqlTableMembersValue( srcTable->getOptionalHppMySqlTableMembersValue() );
					}
					if( srcTable->isOptionalHppObjImplementationNull() ) {
						editDstTable->setOptionalHppObjImplementationNull();
					}
					else {
						editDstTable->setOptionalHppObjImplementationValue( srcTable->getOptionalHppObjImplementationValue() );
					}
					if( srcTable->isOptionalHppObjIncludeNull() ) {
						editDstTable->setOptionalHppObjIncludeNull();
					}
					else {
						editDstTable->setOptionalHppObjIncludeValue( srcTable->getOptionalHppObjIncludeValue() );
					}
					if( srcTable->isOptionalHppObjInterfaceNull() ) {
						editDstTable->setOptionalHppObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalHppObjInterfaceValue( srcTable->getOptionalHppObjInterfaceValue() );
					}
					if( srcTable->isOptionalHppObjMembersNull() ) {
						editDstTable->setOptionalHppObjMembersNull();
					}
					else {
						editDstTable->setOptionalHppObjMembersValue( srcTable->getOptionalHppObjMembersValue() );
					}
					if( srcTable->isOptionalHppOracleTableImplementationNull() ) {
						editDstTable->setOptionalHppOracleTableImplementationNull();
					}
					else {
						editDstTable->setOptionalHppOracleTableImplementationValue( srcTable->getOptionalHppOracleTableImplementationValue() );
					}
					if( srcTable->isOptionalHppOracleTableIncludeNull() ) {
						editDstTable->setOptionalHppOracleTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppOracleTableIncludeValue( srcTable->getOptionalHppOracleTableIncludeValue() );
					}
					if( srcTable->isOptionalHppOracleTableMembersNull() ) {
						editDstTable->setOptionalHppOracleTableMembersNull();
					}
					else {
						editDstTable->setOptionalHppOracleTableMembersValue( srcTable->getOptionalHppOracleTableMembersValue() );
					}
					if( srcTable->isOptionalHppPgSqlTableImplementationNull() ) {
						editDstTable->setOptionalHppPgSqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalHppPgSqlTableImplementationValue( srcTable->getOptionalHppPgSqlTableImplementationValue() );
					}
					if( srcTable->isOptionalHppPgSqlTableIncludeNull() ) {
						editDstTable->setOptionalHppPgSqlTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppPgSqlTableIncludeValue( srcTable->getOptionalHppPgSqlTableIncludeValue() );
					}
					if( srcTable->isOptionalHppPgSqlTableMembersNull() ) {
						editDstTable->setOptionalHppPgSqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalHppPgSqlTableMembersValue( srcTable->getOptionalHppPgSqlTableMembersValue() );
					}
					if( srcTable->isOptionalHppRamTableImplementationNull() ) {
						editDstTable->setOptionalHppRamTableImplementationNull();
					}
					else {
						editDstTable->setOptionalHppRamTableImplementationValue( srcTable->getOptionalHppRamTableImplementationValue() );
					}
					if( srcTable->isOptionalHppRamTableIncludeNull() ) {
						editDstTable->setOptionalHppRamTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppRamTableIncludeValue( srcTable->getOptionalHppRamTableIncludeValue() );
					}
					if( srcTable->isOptionalHppRamTableMembersNull() ) {
						editDstTable->setOptionalHppRamTableMembersNull();
					}
					else {
						editDstTable->setOptionalHppRamTableMembersValue( srcTable->getOptionalHppRamTableMembersValue() );
					}
					if( srcTable->isOptionalHppSaxLoaderEndElementNull() ) {
						editDstTable->setOptionalHppSaxLoaderEndElementNull();
					}
					else {
						editDstTable->setOptionalHppSaxLoaderEndElementValue( srcTable->getOptionalHppSaxLoaderEndElementValue() );
					}
					if( srcTable->isOptionalHppSaxLoaderIncludeNull() ) {
						editDstTable->setOptionalHppSaxLoaderIncludeNull();
					}
					else {
						editDstTable->setOptionalHppSaxLoaderIncludeValue( srcTable->getOptionalHppSaxLoaderIncludeValue() );
					}
					if( srcTable->isOptionalHppSaxLoaderStartElementNull() ) {
						editDstTable->setOptionalHppSaxLoaderStartElementNull();
					}
					else {
						editDstTable->setOptionalHppSaxLoaderStartElementValue( srcTable->getOptionalHppSaxLoaderStartElementValue() );
					}
					if( srcTable->isOptionalHppTableImplementationNull() ) {
						editDstTable->setOptionalHppTableImplementationNull();
					}
					else {
						editDstTable->setOptionalHppTableImplementationValue( srcTable->getOptionalHppTableImplementationValue() );
					}
					if( srcTable->isOptionalHppTableIncludeNull() ) {
						editDstTable->setOptionalHppTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppTableIncludeValue( srcTable->getOptionalHppTableIncludeValue() );
					}
					if( srcTable->isOptionalHppTableInterfaceNull() ) {
						editDstTable->setOptionalHppTableInterfaceNull();
					}
					else {
						editDstTable->setOptionalHppTableInterfaceValue( srcTable->getOptionalHppTableInterfaceValue() );
					}
					if( srcTable->isOptionalHppTableMembersNull() ) {
						editDstTable->setOptionalHppTableMembersNull();
					}
					else {
						editDstTable->setOptionalHppTableMembersValue( srcTable->getOptionalHppTableMembersValue() );
					}
					if( srcTable->isOptionalHppTableObjImplementationNull() ) {
						editDstTable->setOptionalHppTableObjImplementationNull();
					}
					else {
						editDstTable->setOptionalHppTableObjImplementationValue( srcTable->getOptionalHppTableObjImplementationValue() );
					}
					if( srcTable->isOptionalHppTableObjIncludeNull() ) {
						editDstTable->setOptionalHppTableObjIncludeNull();
					}
					else {
						editDstTable->setOptionalHppTableObjIncludeValue( srcTable->getOptionalHppTableObjIncludeValue() );
					}
					if( srcTable->isOptionalHppTableObjInterfaceNull() ) {
						editDstTable->setOptionalHppTableObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalHppTableObjInterfaceValue( srcTable->getOptionalHppTableObjInterfaceValue() );
					}
					if( srcTable->isOptionalHppTableObjMembersNull() ) {
						editDstTable->setOptionalHppTableObjMembersNull();
					}
					else {
						editDstTable->setOptionalHppTableObjMembersValue( srcTable->getOptionalHppTableObjMembersValue() );
					}
					if( srcTable->isOptionalHppXMsgClientTableIncludeNull() ) {
						editDstTable->setOptionalHppXMsgClientTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppXMsgClientTableIncludeValue( srcTable->getOptionalHppXMsgClientTableIncludeValue() );
					}
					if( srcTable->isOptionalHppXMsgClientTableBodyNull() ) {
						editDstTable->setOptionalHppXMsgClientTableBodyNull();
					}
					else {
						editDstTable->setOptionalHppXMsgClientTableBodyValue( srcTable->getOptionalHppXMsgClientTableBodyValue() );
					}
					if( srcTable->isOptionalHppXMsgRqstTableBodyNull() ) {
						editDstTable->setOptionalHppXMsgRqstTableBodyNull();
					}
					else {
						editDstTable->setOptionalHppXMsgRqstTableBodyValue( srcTable->getOptionalHppXMsgRqstTableBodyValue() );
					}
					if( srcTable->isOptionalHppXMsgRqstTableIncludeNull() ) {
						editDstTable->setOptionalHppXMsgRqstTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppXMsgRqstTableIncludeValue( srcTable->getOptionalHppXMsgRqstTableIncludeValue() );
					}
					if( srcTable->isOptionalHppXMsgRspnTableBodyNull() ) {
						editDstTable->setOptionalHppXMsgRspnTableBodyNull();
					}
					else {
						editDstTable->setOptionalHppXMsgRspnTableBodyValue( srcTable->getOptionalHppXMsgRspnTableBodyValue() );
					}
					if( srcTable->isOptionalHppXMsgRspnTableIncludeNull() ) {
						editDstTable->setOptionalHppXMsgRspnTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppXMsgRspnTableIncludeValue( srcTable->getOptionalHppXMsgRspnTableIncludeValue() );
					}
					if( srcTable->isOptionalHppXMsgTableFormattersNull() ) {
						editDstTable->setOptionalHppXMsgTableFormattersNull();
					}
					else {
						editDstTable->setOptionalHppXMsgTableFormattersValue( srcTable->getOptionalHppXMsgTableFormattersValue() );
					}
					if( srcTable->isOptionalHppXMsgTableIncludeNull() ) {
						editDstTable->setOptionalHppXMsgTableIncludeNull();
					}
					else {
						editDstTable->setOptionalHppXMsgTableIncludeValue( srcTable->getOptionalHppXMsgTableIncludeValue() );
					}
					if( srcTable->isOptionalCppDb2LUWTableImplementationNull() ) {
						editDstTable->setOptionalCppDb2LUWTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCppDb2LUWTableImplementationValue( srcTable->getOptionalCppDb2LUWTableImplementationValue() );
					}
					if( srcTable->isOptionalCppDb2LUWTableIncludeNull() ) {
						editDstTable->setOptionalCppDb2LUWTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppDb2LUWTableIncludeValue( srcTable->getOptionalCppDb2LUWTableIncludeValue() );
					}
					if( srcTable->isOptionalCppDb2LUWTableMembersNull() ) {
						editDstTable->setOptionalCppDb2LUWTableMembersNull();
					}
					else {
						editDstTable->setOptionalCppDb2LUWTableMembersValue( srcTable->getOptionalCppDb2LUWTableMembersValue() );
					}
					if( srcTable->isOptionalCppEditObjImplementationNull() ) {
						editDstTable->setOptionalCppEditObjImplementationNull();
					}
					else {
						editDstTable->setOptionalCppEditObjImplementationValue( srcTable->getOptionalCppEditObjImplementationValue() );
					}
					if( srcTable->isOptionalCppEditObjIncludeNull() ) {
						editDstTable->setOptionalCppEditObjIncludeNull();
					}
					else {
						editDstTable->setOptionalCppEditObjIncludeValue( srcTable->getOptionalCppEditObjIncludeValue() );
					}
					if( srcTable->isOptionalCppEditObjInterfaceNull() ) {
						editDstTable->setOptionalCppEditObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalCppEditObjInterfaceValue( srcTable->getOptionalCppEditObjInterfaceValue() );
					}
					if( srcTable->isOptionalCppMSSqlTableImplementationNull() ) {
						editDstTable->setOptionalCppMSSqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCppMSSqlTableImplementationValue( srcTable->getOptionalCppMSSqlTableImplementationValue() );
					}
					if( srcTable->isOptionalCppMSSqlTableIncludeNull() ) {
						editDstTable->setOptionalCppMSSqlTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppMSSqlTableIncludeValue( srcTable->getOptionalCppMSSqlTableIncludeValue() );
					}
					if( srcTable->isOptionalCppMSSqlTableMembersNull() ) {
						editDstTable->setOptionalCppMSSqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalCppMSSqlTableMembersValue( srcTable->getOptionalCppMSSqlTableMembersValue() );
					}
					if( srcTable->isOptionalCppMySqlTableImplementationNull() ) {
						editDstTable->setOptionalCppMySqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCppMySqlTableImplementationValue( srcTable->getOptionalCppMySqlTableImplementationValue() );
					}
					if( srcTable->isOptionalCppMySqlTableIncludeNull() ) {
						editDstTable->setOptionalCppMySqlTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppMySqlTableIncludeValue( srcTable->getOptionalCppMySqlTableIncludeValue() );
					}
					if( srcTable->isOptionalCppMySqlTableMembersNull() ) {
						editDstTable->setOptionalCppMySqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalCppMySqlTableMembersValue( srcTable->getOptionalCppMySqlTableMembersValue() );
					}
					if( srcTable->isOptionalCppObjImplementationNull() ) {
						editDstTable->setOptionalCppObjImplementationNull();
					}
					else {
						editDstTable->setOptionalCppObjImplementationValue( srcTable->getOptionalCppObjImplementationValue() );
					}
					if( srcTable->isOptionalCppObjIncludeNull() ) {
						editDstTable->setOptionalCppObjIncludeNull();
					}
					else {
						editDstTable->setOptionalCppObjIncludeValue( srcTable->getOptionalCppObjIncludeValue() );
					}
					if( srcTable->isOptionalCppObjInterfaceNull() ) {
						editDstTable->setOptionalCppObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalCppObjInterfaceValue( srcTable->getOptionalCppObjInterfaceValue() );
					}
					if( srcTable->isOptionalCppObjMembersNull() ) {
						editDstTable->setOptionalCppObjMembersNull();
					}
					else {
						editDstTable->setOptionalCppObjMembersValue( srcTable->getOptionalCppObjMembersValue() );
					}
					if( srcTable->isOptionalCppOracleTableImplementationNull() ) {
						editDstTable->setOptionalCppOracleTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCppOracleTableImplementationValue( srcTable->getOptionalCppOracleTableImplementationValue() );
					}
					if( srcTable->isOptionalCppOracleTableIncludeNull() ) {
						editDstTable->setOptionalCppOracleTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppOracleTableIncludeValue( srcTable->getOptionalCppOracleTableIncludeValue() );
					}
					if( srcTable->isOptionalCppOracleTableMembersNull() ) {
						editDstTable->setOptionalCppOracleTableMembersNull();
					}
					else {
						editDstTable->setOptionalCppOracleTableMembersValue( srcTable->getOptionalCppOracleTableMembersValue() );
					}
					if( srcTable->isOptionalCppPgSqlTableImplementationNull() ) {
						editDstTable->setOptionalCppPgSqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCppPgSqlTableImplementationValue( srcTable->getOptionalCppPgSqlTableImplementationValue() );
					}
					if( srcTable->isOptionalCppPgSqlTableIncludeNull() ) {
						editDstTable->setOptionalCppPgSqlTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppPgSqlTableIncludeValue( srcTable->getOptionalCppPgSqlTableIncludeValue() );
					}
					if( srcTable->isOptionalCppPgSqlTableMembersNull() ) {
						editDstTable->setOptionalCppPgSqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalCppPgSqlTableMembersValue( srcTable->getOptionalCppPgSqlTableMembersValue() );
					}
					if( srcTable->isOptionalCppRamTableImplementationNull() ) {
						editDstTable->setOptionalCppRamTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCppRamTableImplementationValue( srcTable->getOptionalCppRamTableImplementationValue() );
					}
					if( srcTable->isOptionalCppRamTableIncludeNull() ) {
						editDstTable->setOptionalCppRamTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppRamTableIncludeValue( srcTable->getOptionalCppRamTableIncludeValue() );
					}
					if( srcTable->isOptionalCppRamTableMembersNull() ) {
						editDstTable->setOptionalCppRamTableMembersNull();
					}
					else {
						editDstTable->setOptionalCppRamTableMembersValue( srcTable->getOptionalCppRamTableMembersValue() );
					}
					if( srcTable->isOptionalCppSaxLoaderEndElementNull() ) {
						editDstTable->setOptionalCppSaxLoaderEndElementNull();
					}
					else {
						editDstTable->setOptionalCppSaxLoaderEndElementValue( srcTable->getOptionalCppSaxLoaderEndElementValue() );
					}
					if( srcTable->isOptionalCppSaxLoaderIncludeNull() ) {
						editDstTable->setOptionalCppSaxLoaderIncludeNull();
					}
					else {
						editDstTable->setOptionalCppSaxLoaderIncludeValue( srcTable->getOptionalCppSaxLoaderIncludeValue() );
					}
					if( srcTable->isOptionalCppSaxLoaderStartElementNull() ) {
						editDstTable->setOptionalCppSaxLoaderStartElementNull();
					}
					else {
						editDstTable->setOptionalCppSaxLoaderStartElementValue( srcTable->getOptionalCppSaxLoaderStartElementValue() );
					}
					if( srcTable->isOptionalCppTableImplementationNull() ) {
						editDstTable->setOptionalCppTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCppTableImplementationValue( srcTable->getOptionalCppTableImplementationValue() );
					}
					if( srcTable->isOptionalCppTableIncludeNull() ) {
						editDstTable->setOptionalCppTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppTableIncludeValue( srcTable->getOptionalCppTableIncludeValue() );
					}
					if( srcTable->isOptionalCppTableInterfaceNull() ) {
						editDstTable->setOptionalCppTableInterfaceNull();
					}
					else {
						editDstTable->setOptionalCppTableInterfaceValue( srcTable->getOptionalCppTableInterfaceValue() );
					}
					if( srcTable->isOptionalCppTableMembersNull() ) {
						editDstTable->setOptionalCppTableMembersNull();
					}
					else {
						editDstTable->setOptionalCppTableMembersValue( srcTable->getOptionalCppTableMembersValue() );
					}
					if( srcTable->isOptionalCppTableObjImplementationNull() ) {
						editDstTable->setOptionalCppTableObjImplementationNull();
					}
					else {
						editDstTable->setOptionalCppTableObjImplementationValue( srcTable->getOptionalCppTableObjImplementationValue() );
					}
					if( srcTable->isOptionalCppTableObjIncludeNull() ) {
						editDstTable->setOptionalCppTableObjIncludeNull();
					}
					else {
						editDstTable->setOptionalCppTableObjIncludeValue( srcTable->getOptionalCppTableObjIncludeValue() );
					}
					if( srcTable->isOptionalCppTableObjInterfaceNull() ) {
						editDstTable->setOptionalCppTableObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalCppTableObjInterfaceValue( srcTable->getOptionalCppTableObjInterfaceValue() );
					}
					if( srcTable->isOptionalCppTableObjMembersNull() ) {
						editDstTable->setOptionalCppTableObjMembersNull();
					}
					else {
						editDstTable->setOptionalCppTableObjMembersValue( srcTable->getOptionalCppTableObjMembersValue() );
					}
					if( srcTable->isOptionalCppXMsgClientTableIncludeNull() ) {
						editDstTable->setOptionalCppXMsgClientTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppXMsgClientTableIncludeValue( srcTable->getOptionalCppXMsgClientTableIncludeValue() );
					}
					if( srcTable->isOptionalCppXMsgClientTableBodyNull() ) {
						editDstTable->setOptionalCppXMsgClientTableBodyNull();
					}
					else {
						editDstTable->setOptionalCppXMsgClientTableBodyValue( srcTable->getOptionalCppXMsgClientTableBodyValue() );
					}
					if( srcTable->isOptionalCppXMsgRqstTableBodyNull() ) {
						editDstTable->setOptionalCppXMsgRqstTableBodyNull();
					}
					else {
						editDstTable->setOptionalCppXMsgRqstTableBodyValue( srcTable->getOptionalCppXMsgRqstTableBodyValue() );
					}
					if( srcTable->isOptionalCppXMsgRqstTableIncludeNull() ) {
						editDstTable->setOptionalCppXMsgRqstTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppXMsgRqstTableIncludeValue( srcTable->getOptionalCppXMsgRqstTableIncludeValue() );
					}
					if( srcTable->isOptionalCppXMsgRspnTableBodyNull() ) {
						editDstTable->setOptionalCppXMsgRspnTableBodyNull();
					}
					else {
						editDstTable->setOptionalCppXMsgRspnTableBodyValue( srcTable->getOptionalCppXMsgRspnTableBodyValue() );
					}
					if( srcTable->isOptionalCppXMsgRspnTableIncludeNull() ) {
						editDstTable->setOptionalCppXMsgRspnTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppXMsgRspnTableIncludeValue( srcTable->getOptionalCppXMsgRspnTableIncludeValue() );
					}
					if( srcTable->isOptionalCppXMsgTableFormattersNull() ) {
						editDstTable->setOptionalCppXMsgTableFormattersNull();
					}
					else {
						editDstTable->setOptionalCppXMsgTableFormattersValue( srcTable->getOptionalCppXMsgTableFormattersValue() );
					}
					if( srcTable->isOptionalCppXMsgTableIncludeNull() ) {
						editDstTable->setOptionalCppXMsgTableIncludeNull();
					}
					else {
						editDstTable->setOptionalCppXMsgTableIncludeValue( srcTable->getOptionalCppXMsgTableIncludeValue() );
					}
					if( srcTable->isOptionalCsDb2LUWTableImplementationNull() ) {
						editDstTable->setOptionalCsDb2LUWTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCsDb2LUWTableImplementationValue( srcTable->getOptionalCsDb2LUWTableImplementationValue() );
					}
					if( srcTable->isOptionalCsDb2LUWTableUsingNull() ) {
						editDstTable->setOptionalCsDb2LUWTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsDb2LUWTableUsingValue( srcTable->getOptionalCsDb2LUWTableUsingValue() );
					}
					if( srcTable->isOptionalCsDb2LUWTableMembersNull() ) {
						editDstTable->setOptionalCsDb2LUWTableMembersNull();
					}
					else {
						editDstTable->setOptionalCsDb2LUWTableMembersValue( srcTable->getOptionalCsDb2LUWTableMembersValue() );
					}
					if( srcTable->isOptionalCsEditObjImplementationNull() ) {
						editDstTable->setOptionalCsEditObjImplementationNull();
					}
					else {
						editDstTable->setOptionalCsEditObjImplementationValue( srcTable->getOptionalCsEditObjImplementationValue() );
					}
					if( srcTable->isOptionalCsEditObjUsingNull() ) {
						editDstTable->setOptionalCsEditObjUsingNull();
					}
					else {
						editDstTable->setOptionalCsEditObjUsingValue( srcTable->getOptionalCsEditObjUsingValue() );
					}
					if( srcTable->isOptionalCsEditObjInterfaceNull() ) {
						editDstTable->setOptionalCsEditObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalCsEditObjInterfaceValue( srcTable->getOptionalCsEditObjInterfaceValue() );
					}
					if( srcTable->isOptionalCsMSSqlTableImplementationNull() ) {
						editDstTable->setOptionalCsMSSqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCsMSSqlTableImplementationValue( srcTable->getOptionalCsMSSqlTableImplementationValue() );
					}
					if( srcTable->isOptionalCsMSSqlTableUsingNull() ) {
						editDstTable->setOptionalCsMSSqlTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsMSSqlTableUsingValue( srcTable->getOptionalCsMSSqlTableUsingValue() );
					}
					if( srcTable->isOptionalCsMSSqlTableMembersNull() ) {
						editDstTable->setOptionalCsMSSqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalCsMSSqlTableMembersValue( srcTable->getOptionalCsMSSqlTableMembersValue() );
					}
					if( srcTable->isOptionalCsMySqlTableImplementationNull() ) {
						editDstTable->setOptionalCsMySqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCsMySqlTableImplementationValue( srcTable->getOptionalCsMySqlTableImplementationValue() );
					}
					if( srcTable->isOptionalCsMySqlTableUsingNull() ) {
						editDstTable->setOptionalCsMySqlTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsMySqlTableUsingValue( srcTable->getOptionalCsMySqlTableUsingValue() );
					}
					if( srcTable->isOptionalCsMySqlTableMembersNull() ) {
						editDstTable->setOptionalCsMySqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalCsMySqlTableMembersValue( srcTable->getOptionalCsMySqlTableMembersValue() );
					}
					if( srcTable->isOptionalCsObjImplementationNull() ) {
						editDstTable->setOptionalCsObjImplementationNull();
					}
					else {
						editDstTable->setOptionalCsObjImplementationValue( srcTable->getOptionalCsObjImplementationValue() );
					}
					if( srcTable->isOptionalCsObjUsingNull() ) {
						editDstTable->setOptionalCsObjUsingNull();
					}
					else {
						editDstTable->setOptionalCsObjUsingValue( srcTable->getOptionalCsObjUsingValue() );
					}
					if( srcTable->isOptionalCsObjInterfaceNull() ) {
						editDstTable->setOptionalCsObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalCsObjInterfaceValue( srcTable->getOptionalCsObjInterfaceValue() );
					}
					if( srcTable->isOptionalCsObjMembersNull() ) {
						editDstTable->setOptionalCsObjMembersNull();
					}
					else {
						editDstTable->setOptionalCsObjMembersValue( srcTable->getOptionalCsObjMembersValue() );
					}
					if( srcTable->isOptionalCsOracleTableImplementationNull() ) {
						editDstTable->setOptionalCsOracleTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCsOracleTableImplementationValue( srcTable->getOptionalCsOracleTableImplementationValue() );
					}
					if( srcTable->isOptionalCsOracleTableUsingNull() ) {
						editDstTable->setOptionalCsOracleTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsOracleTableUsingValue( srcTable->getOptionalCsOracleTableUsingValue() );
					}
					if( srcTable->isOptionalCsOracleTableMembersNull() ) {
						editDstTable->setOptionalCsOracleTableMembersNull();
					}
					else {
						editDstTable->setOptionalCsOracleTableMembersValue( srcTable->getOptionalCsOracleTableMembersValue() );
					}
					if( srcTable->isOptionalCsPgSqlTableImplementationNull() ) {
						editDstTable->setOptionalCsPgSqlTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCsPgSqlTableImplementationValue( srcTable->getOptionalCsPgSqlTableImplementationValue() );
					}
					if( srcTable->isOptionalCsPgSqlTableUsingNull() ) {
						editDstTable->setOptionalCsPgSqlTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsPgSqlTableUsingValue( srcTable->getOptionalCsPgSqlTableUsingValue() );
					}
					if( srcTable->isOptionalCsPgSqlTableMembersNull() ) {
						editDstTable->setOptionalCsPgSqlTableMembersNull();
					}
					else {
						editDstTable->setOptionalCsPgSqlTableMembersValue( srcTable->getOptionalCsPgSqlTableMembersValue() );
					}
					if( srcTable->isOptionalCsRamTableImplementationNull() ) {
						editDstTable->setOptionalCsRamTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCsRamTableImplementationValue( srcTable->getOptionalCsRamTableImplementationValue() );
					}
					if( srcTable->isOptionalCsRamTableUsingNull() ) {
						editDstTable->setOptionalCsRamTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsRamTableUsingValue( srcTable->getOptionalCsRamTableUsingValue() );
					}
					if( srcTable->isOptionalCsRamTableMembersNull() ) {
						editDstTable->setOptionalCsRamTableMembersNull();
					}
					else {
						editDstTable->setOptionalCsRamTableMembersValue( srcTable->getOptionalCsRamTableMembersValue() );
					}
					if( srcTable->isOptionalCsSaxLoaderEndElementNull() ) {
						editDstTable->setOptionalCsSaxLoaderEndElementNull();
					}
					else {
						editDstTable->setOptionalCsSaxLoaderEndElementValue( srcTable->getOptionalCsSaxLoaderEndElementValue() );
					}
					if( srcTable->isOptionalCsSaxLoaderUsingNull() ) {
						editDstTable->setOptionalCsSaxLoaderUsingNull();
					}
					else {
						editDstTable->setOptionalCsSaxLoaderUsingValue( srcTable->getOptionalCsSaxLoaderUsingValue() );
					}
					if( srcTable->isOptionalCsSaxLoaderStartElementNull() ) {
						editDstTable->setOptionalCsSaxLoaderStartElementNull();
					}
					else {
						editDstTable->setOptionalCsSaxLoaderStartElementValue( srcTable->getOptionalCsSaxLoaderStartElementValue() );
					}
					if( srcTable->isOptionalCsTableImplementationNull() ) {
						editDstTable->setOptionalCsTableImplementationNull();
					}
					else {
						editDstTable->setOptionalCsTableImplementationValue( srcTable->getOptionalCsTableImplementationValue() );
					}
					if( srcTable->isOptionalCsTableUsingNull() ) {
						editDstTable->setOptionalCsTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsTableUsingValue( srcTable->getOptionalCsTableUsingValue() );
					}
					if( srcTable->isOptionalCsTableInterfaceNull() ) {
						editDstTable->setOptionalCsTableInterfaceNull();
					}
					else {
						editDstTable->setOptionalCsTableInterfaceValue( srcTable->getOptionalCsTableInterfaceValue() );
					}
					if( srcTable->isOptionalCsTableMembersNull() ) {
						editDstTable->setOptionalCsTableMembersNull();
					}
					else {
						editDstTable->setOptionalCsTableMembersValue( srcTable->getOptionalCsTableMembersValue() );
					}
					if( srcTable->isOptionalCsTableObjImplementationNull() ) {
						editDstTable->setOptionalCsTableObjImplementationNull();
					}
					else {
						editDstTable->setOptionalCsTableObjImplementationValue( srcTable->getOptionalCsTableObjImplementationValue() );
					}
					if( srcTable->isOptionalCsTableObjUsingNull() ) {
						editDstTable->setOptionalCsTableObjUsingNull();
					}
					else {
						editDstTable->setOptionalCsTableObjUsingValue( srcTable->getOptionalCsTableObjUsingValue() );
					}
					if( srcTable->isOptionalCsTableObjInterfaceNull() ) {
						editDstTable->setOptionalCsTableObjInterfaceNull();
					}
					else {
						editDstTable->setOptionalCsTableObjInterfaceValue( srcTable->getOptionalCsTableObjInterfaceValue() );
					}
					if( srcTable->isOptionalCsTableObjMembersNull() ) {
						editDstTable->setOptionalCsTableObjMembersNull();
					}
					else {
						editDstTable->setOptionalCsTableObjMembersValue( srcTable->getOptionalCsTableObjMembersValue() );
					}
					if( srcTable->isOptionalCsXMsgClientTableUsingNull() ) {
						editDstTable->setOptionalCsXMsgClientTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsXMsgClientTableUsingValue( srcTable->getOptionalCsXMsgClientTableUsingValue() );
					}
					if( srcTable->isOptionalCsXMsgClientTableBodyNull() ) {
						editDstTable->setOptionalCsXMsgClientTableBodyNull();
					}
					else {
						editDstTable->setOptionalCsXMsgClientTableBodyValue( srcTable->getOptionalCsXMsgClientTableBodyValue() );
					}
					if( srcTable->isOptionalCsXMsgRqstTableBodyNull() ) {
						editDstTable->setOptionalCsXMsgRqstTableBodyNull();
					}
					else {
						editDstTable->setOptionalCsXMsgRqstTableBodyValue( srcTable->getOptionalCsXMsgRqstTableBodyValue() );
					}
					if( srcTable->isOptionalCsXMsgRqstTableUsingNull() ) {
						editDstTable->setOptionalCsXMsgRqstTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsXMsgRqstTableUsingValue( srcTable->getOptionalCsXMsgRqstTableUsingValue() );
					}
					if( srcTable->isOptionalCsXMsgRspnTableBodyNull() ) {
						editDstTable->setOptionalCsXMsgRspnTableBodyNull();
					}
					else {
						editDstTable->setOptionalCsXMsgRspnTableBodyValue( srcTable->getOptionalCsXMsgRspnTableBodyValue() );
					}
					if( srcTable->isOptionalCsXMsgRspnTableUsingNull() ) {
						editDstTable->setOptionalCsXMsgRspnTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsXMsgRspnTableUsingValue( srcTable->getOptionalCsXMsgRspnTableUsingValue() );
					}
					if( srcTable->isOptionalCsXMsgTableFormattersNull() ) {
						editDstTable->setOptionalCsXMsgTableFormattersNull();
					}
					else {
						editDstTable->setOptionalCsXMsgTableFormattersValue( srcTable->getOptionalCsXMsgTableFormattersValue() );
					}
					if( srcTable->isOptionalCsXMsgTableUsingNull() ) {
						editDstTable->setOptionalCsXMsgTableUsingNull();
					}
					else {
						editDstTable->setOptionalCsXMsgTableUsingValue( srcTable->getOptionalCsXMsgTableUsingValue() );
					}
					editDstTable->setRequiredLoaderBehaviour( srcTable->getRequiredLoaderBehaviour() );
					editDstTable->setRequiredSecScope( srcTable->getRequiredSecScope() );
					editDstTable->setRequiredName( srcTable->getRequiredName() );
					editDstTable->setRequiredTableClassCode( srcTable->getRequiredTableClassCode() );
					if( srcTable->isOptionalDbNameNull() ) {
						editDstTable->setOptionalDbNameNull();
					}
					else {
						editDstTable->setOptionalDbNameValue( srcTable->getOptionalDbNameValue() );
					}
					if( srcTable->isOptionalDescriptionNull() ) {
						editDstTable->setOptionalDescriptionNull();
					}
					else {
						editDstTable->setOptionalDescriptionValue( srcTable->getOptionalDescriptionValue() );
					}
					if( srcTable->isOptionalLabelNull() ) {
						editDstTable->setOptionalLabelNull();
					}
					else {
						editDstTable->setOptionalLabelValue( srcTable->getOptionalLabelValue() );
					}
					if( srcTable->isOptionalShortDescriptionNull() ) {
						editDstTable->setOptionalShortDescriptionNull();
					}
					else {
						editDstTable->setOptionalShortDescriptionValue( srcTable->getOptionalShortDescriptionValue() );
					}
					if( srcTable->isOptionalShortNameNull() ) {
						editDstTable->setOptionalShortNameNull();
					}
					else {
						editDstTable->setOptionalShortNameValue( srcTable->getOptionalShortNameValue() );
					}
					lookupSchema = srcTable->getOptionalLookupDefSchema();
					srcQualTable = srcTable->getOptionalLookupQualTable();
					if( srcQualTable == NULL ) {
						editDstTable->setOptionalLookupQualTable( NULL );
					}
					else {
						std::string srcQualTableName = srcQualTable->getRequiredName();
						dstQualTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcQualTableName );
						if( dstQualTable == NULL ) {
							throw cflib::CFLibRuntimeException( CLASS_NAME,
								S_ProcName,
								"Could not resolve destination qualifying table " + srcQualTableName + " referenced by table " + editDstTable->getRequiredName() );
						}
						editDstTable->setOptionalLookupQualTable( dstQualTable );
					}
					if( lookupSchema == NULL ) {
						lookupSchema = src;
					}
					editDstTable->setOptionalLookupDefSchema( lookupSchema );
					origDstTable = dynamic_cast<cfbam::ICFBamTableObj*>( editDstTable->create() );
					editDstTable = NULL;

					origDstTableTenantId = origDstTable->getRequiredTenantId();
					origDstTableId = origDstTable->getRequiredId();
					origDstTable->getSchema()->getId16GenTableObj()->readId16GenByDispIdx( &origDstTableTenantId, &origDstTableId );
					origDstTable->getSchema()->getId32GenTableObj()->readId32GenByDispIdx( &origDstTableTenantId, &origDstTableId );
					origDstTable->getSchema()->getId64GenTableObj()->readId64GenByDispIdx( &origDstTableTenantId, &origDstTableId );
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editDstTable != NULL ) {
			editDstTable->endEdit();
			editDstTable = NULL;
		}

		if( origDstTable != NULL ) {
			if( origDstTable->getIsNew() ) {
				delete origDstTable;
			}
			origDstTable = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTypes( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTypes" );
		CFLIB_EXCEPTION_DECLINFO
		std::vector<cfbam::ICFBamValueObj*> components = src->getOptionalComponentsTypes();
		cfbam::ICFBamValueTableObj* dstValueTableObj = dst->getSchema()->getValueTableObj();
		cfbam::ICFBamTableTableObj* dstTableTableObj = dst->getSchema()->getTableTableObj();
		cfbam::ICFBamTableObj* srcDispenser = NULL;
		cfbam::ICFBamTableObj* dstDispenser = NULL;
		cfbam::ICFBamValueObj* value = NULL;
		cfbam::ICFBamSchemaDefObj* lookupSchema = NULL;
		try {
			for( auto componentValues = components.begin(); componentValues != components.end(); componentValues ++ ) {
				value = *componentValues;
				if( NULL == dstValueTableObj->readValueByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), value->getRequiredName() ) ) {
					if( value->implementsClassCode( cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamBoolTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamBoolTypeObj* srcGenDef = NULL;
						cfbam::ICFBamBoolTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamBoolTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getBoolTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamBoolTypeObj*>( value );
							dstOrigDef = GenTableObj->readBoolTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamBoolTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalFalseStringNull() ) {
									dstEditDef->setOptionalFalseStringNull();
								}
								else {
									dstEditDef->setOptionalFalseStringValue( srcGenDef->getOptionalFalseStringValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalNullStringNull() ) {
									dstEditDef->setOptionalNullStringNull();
								}
								else {
									dstEditDef->setOptionalNullStringValue( srcGenDef->getOptionalNullStringValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								if( srcGenDef->isOptionalTrueStringNull() ) {
									dstEditDef->setOptionalTrueStringNull();
								}
								else {
									dstEditDef->setOptionalTrueStringValue( srcGenDef->getOptionalTrueStringValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamBoolTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamBlobTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamBlobTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamBlobTypeObj* srcGenDef = NULL;
						cfbam::ICFBamBlobTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamBlobTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getBlobTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamBlobTypeObj*>( value );
							dstOrigDef = GenTableObj->readBlobTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamBlobTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamBlobTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamId16GenBuff::CLASS_CODE ) ) {
						cfbam::ICFBamId16GenTableObj* GenTableObj = NULL;
						cfbam::ICFBamId16GenObj* srcGenDef = NULL;
						cfbam::ICFBamId16GenObj* dstOrigGenDef = NULL;
						cfbam::ICFBamId16GenEditObj* dstEditGenDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getId16GenTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamId16GenObj*>( value );
							dstOrigGenDef = GenTableObj->readId16GenByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigGenDef == NULL ) {

								srcDispenser = srcGenDef->getOptionalLookupDispenser();
								if( srcDispenser != NULL ) {
									dstDispenser = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(),
										dst->getRequiredId(),
										srcDispenser->getRequiredName() );
									if( dstDispenser == NULL ) {
										throw cflib::CFLibRuntimeException( CLASS_NAME,
											S_ProcName,
											"Could not resolve dstDespenser table " + srcDispenser->getRequiredName() + " for data type " + srcGenDef->getRequiredName() );
									}
								}
								else {
									dstDispenser = NULL;
								}

								dstOrigGenDef = GenTableObj->newInstance();
								dstEditGenDef = dynamic_cast<cfbam::ICFBamId16GenEditObj*>( dstOrigGenDef->beginEdit() );
								dstEditGenDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditGenDef->setRequiredContainerSchemaDef( dst );
								dstEditGenDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditGenDef->setRequiredName( srcGenDef->getRequiredName() );
								dstEditGenDef->setOptionalLookupDispenser( dstDispenser );
								dstEditGenDef->setRequiredSlice( srcGenDef->getRequiredSlice() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditGenDef->setOptionalDbNameNull();
								}
								else {
									dstEditGenDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditGenDef->setOptionalDescriptionNull();
								}
								else {
									dstEditGenDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditGenDef->setOptionalInitValueNull();
								}
								else {
									dstEditGenDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditGenDef->setOptionalLabelNull();
								}
								else {
									dstEditGenDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditGenDef->setOptionalMaxValueNull();
								}
								else {
									dstEditGenDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditGenDef->setOptionalMinValueNull();
								}
								else {
									dstEditGenDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditGenDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditGenDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditGenDef->setOptionalShortNameNull();
								}
								else {
									dstEditGenDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditGenDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigGenDef = dynamic_cast<cfbam::ICFBamId16GenObj*>( dstEditGenDef->create() );
								dstEditGenDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditGenDef != NULL ) {
							dstEditGenDef->endEdit();
							dstEditGenDef = NULL;
						}

						if( dstOrigGenDef != NULL ) {
							if( dstOrigGenDef->getIsNew() ) {
								delete dstOrigGenDef;
							}
							dstOrigGenDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamId32GenBuff::CLASS_CODE ) ) {
						cfbam::ICFBamId32GenTableObj* GenTableObj = NULL;
						cfbam::ICFBamId32GenObj* srcGenDef = NULL;
						cfbam::ICFBamId32GenObj* dstOrigGenDef = NULL;
						cfbam::ICFBamId32GenEditObj* dstEditGenDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getId32GenTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamId32GenObj*>( value );
							dstOrigGenDef = GenTableObj->readId32GenByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigGenDef == NULL ) {

								srcDispenser = srcGenDef->getOptionalLookupDispenser();
								if( srcDispenser != NULL ) {
									dstDispenser = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(),
										dst->getRequiredId(),
										srcDispenser->getRequiredName() );
									if( dstDispenser == NULL ) {
										throw cflib::CFLibRuntimeException( CLASS_NAME,
											S_ProcName,
											"Could not resolve dstDespenser table " + srcDispenser->getRequiredName() + " for data type " + srcGenDef->getRequiredName() );
									}
								}
								else {
									dstDispenser = NULL;
								}

								dstOrigGenDef = GenTableObj->newInstance();
								dstEditGenDef = dynamic_cast<cfbam::ICFBamId32GenEditObj*>( dstOrigGenDef->beginEdit() );
								dstEditGenDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditGenDef->setRequiredContainerSchemaDef( dst );
								dstEditGenDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditGenDef->setRequiredName( srcGenDef->getRequiredName() );
								dstEditGenDef->setOptionalLookupDispenser( dstDispenser );
								dstEditGenDef->setRequiredSlice( srcGenDef->getRequiredSlice() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditGenDef->setOptionalDbNameNull();
								}
								else {
									dstEditGenDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditGenDef->setOptionalDescriptionNull();
								}
								else {
									dstEditGenDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditGenDef->setOptionalInitValueNull();
								}
								else {
									dstEditGenDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditGenDef->setOptionalLabelNull();
								}
								else {
									dstEditGenDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditGenDef->setOptionalMaxValueNull();
								}
								else {
									dstEditGenDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditGenDef->setOptionalMinValueNull();
								}
								else {
									dstEditGenDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditGenDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditGenDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditGenDef->setOptionalShortNameNull();
								}
								else {
									dstEditGenDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditGenDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigGenDef = dynamic_cast<cfbam::ICFBamId32GenObj*>( dstEditGenDef->create() );
								dstEditGenDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditGenDef != NULL ) {
							dstEditGenDef->endEdit();
							dstEditGenDef = NULL;
						}

						if( dstOrigGenDef != NULL ) {
							if( dstOrigGenDef->getIsNew() ) {
								delete dstOrigGenDef;
							}
							dstOrigGenDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamId64GenBuff::CLASS_CODE ) ) {
						cfbam::ICFBamId64GenTableObj* GenTableObj = NULL;
						cfbam::ICFBamId64GenObj* srcGenDef = NULL;
						cfbam::ICFBamId64GenObj* dstOrigGenDef = NULL;
						cfbam::ICFBamId64GenEditObj* dstEditGenDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getId64GenTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamId64GenObj*>( value );
							dstOrigGenDef = GenTableObj->readId64GenByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigGenDef == NULL ) {

								srcDispenser = srcGenDef->getOptionalLookupDispenser();
								if( srcDispenser != NULL ) {
									dstDispenser = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(),
										dst->getRequiredId(),
										srcDispenser->getRequiredName() );
									if( dstDispenser == NULL ) {
										throw cflib::CFLibRuntimeException( CLASS_NAME,
											S_ProcName,
											"Could not resolve dstDespenser table " + srcDispenser->getRequiredName() + " for data type " + srcGenDef->getRequiredName() );
									}
								}
								else {
									dstDispenser = NULL;
								}

								dstOrigGenDef = GenTableObj->newInstance();
								dstEditGenDef = dynamic_cast<cfbam::ICFBamId64GenEditObj*>( dstOrigGenDef->beginEdit() );
								dstEditGenDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditGenDef->setRequiredContainerSchemaDef( dst );
								dstEditGenDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditGenDef->setRequiredName( srcGenDef->getRequiredName() );
								dstEditGenDef->setOptionalLookupDispenser( dstDispenser );
								dstEditGenDef->setRequiredSlice( srcGenDef->getRequiredSlice() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditGenDef->setOptionalDbNameNull();
								}
								else {
									dstEditGenDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditGenDef->setOptionalDescriptionNull();
								}
								else {
									dstEditGenDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditGenDef->setOptionalInitValueNull();
								}
								else {
									dstEditGenDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditGenDef->setOptionalLabelNull();
								}
								else {
									dstEditGenDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditGenDef->setOptionalMaxValueNull();
								}
								else {
									dstEditGenDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditGenDef->setOptionalMinValueNull();
								}
								else {
									dstEditGenDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditGenDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditGenDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditGenDef->setOptionalShortNameNull();
								}
								else {
									dstEditGenDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditGenDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigGenDef = dynamic_cast<cfbam::ICFBamId64GenObj*>( dstEditGenDef->create() );
								dstEditGenDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditGenDef != NULL ) {
							dstEditGenDef->endEdit();
							dstEditGenDef = NULL;
						}

						if( dstOrigGenDef != NULL ) {
							if( dstOrigGenDef->getIsNew() ) {
								delete dstOrigGenDef;
							}
							dstOrigGenDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamUuidGenBuff::CLASS_CODE ) ) {
						cfbam::ICFBamUuidGenTableObj* GenTableObj = NULL;
						cfbam::ICFBamUuidGenObj* srcGenDef = NULL;
						cfbam::ICFBamUuidGenObj* dstOrigGenDef = NULL;
						cfbam::ICFBamUuidGenEditObj* dstEditGenDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getUuidGenTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamUuidGenObj*>( value );
							dstOrigGenDef = GenTableObj->readUuidGenByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigGenDef == NULL ) {

								dstOrigGenDef = GenTableObj->newInstance();
								cfbam::ICFBamUuidGenEditObj* dstEditGenDef = dynamic_cast<cfbam::ICFBamUuidGenEditObj*>( dstOrigGenDef->beginEdit() );
								dstEditGenDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditGenDef->setRequiredContainerSchemaDef( dst );
								dstEditGenDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditGenDef->setRequiredName( srcGenDef->getRequiredName() );
								dstEditGenDef->setRequiredSlice( srcGenDef->getRequiredSlice() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditGenDef->setOptionalDbNameNull();
								}
								else {
									dstEditGenDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditGenDef->setOptionalDescriptionNull();
								}
								else {
									dstEditGenDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditGenDef->setOptionalInitValueNull();
								}
								else {
									dstEditGenDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditGenDef->setOptionalLabelNull();
								}
								else {
									dstEditGenDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditGenDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditGenDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditGenDef->setOptionalShortNameNull();
								}
								else {
									dstEditGenDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditGenDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigGenDef = dynamic_cast<cfbam::ICFBamUuidGenObj*>( dstEditGenDef->create() );
								dstEditGenDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditGenDef != NULL ) {
							dstEditGenDef->endEdit();
							dstEditGenDef = NULL;
						}

						if( dstOrigGenDef != NULL ) {
							if( dstOrigGenDef->getIsNew() ) {
								delete dstOrigGenDef;
							}
							dstOrigGenDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamEnumTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamEnumTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamEnumTagTableObj* srcEnumTagTableObj = NULL;
						cfbam::ICFBamEnumTagTableObj* dstEnumTagTableObj = NULL;
						cfbam::ICFBamEnumTypeObj* srcGenDef = NULL;
						cfbam::ICFBamEnumTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamEnumTypeEditObj* dstEditDef = NULL;
						cfbam::ICFBamEnumTagObj* srcEnumTag = NULL;
						cfbam::ICFBamEnumTagObj* dstOrigEnumTag = NULL;
						cfbam::ICFBamEnumTagEditObj* dstEditEnumTag = NULL;
						try {
							GenTableObj = dst->getSchema()->getEnumTypeTableObj();
							srcEnumTagTableObj = src->getSchema()->getEnumTagTableObj();
							dstEnumTagTableObj = dst->getSchema()->getEnumTagTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamEnumTypeObj*>( value );
							dstOrigDef = GenTableObj->readEnumTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamEnumTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamEnumTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;

								std::vector<cfbam::ICFBamEnumTagObj*> srcOrigEnumTags = srcEnumTagTableObj->readEnumTagByEnumIdx( srcGenDef->getRequiredTenantId(), srcGenDef->getRequiredId() );
								if( ! srcOrigEnumTags.empty() ) {
									for( auto iterSrcEnumTag = srcOrigEnumTags.begin(); iterSrcEnumTag != srcOrigEnumTags.end(); iterSrcEnumTag ++ ) {
										srcEnumTag = *iterSrcEnumTag;
										if( srcEnumTag != NULL ) {
											dstOrigEnumTag = dstEnumTagTableObj->readEnumTagByEnumNameIdx( dstOrigDef->getRequiredTenantId(), dstOrigDef->getRequiredId(), srcEnumTag->getRequiredName() );
											if( dstOrigEnumTag == NULL ) {
												dstOrigEnumTag = dstEnumTagTableObj->newInstance();
												dstEditEnumTag = dynamic_cast<cfbam::ICFBamEnumTagEditObj*>( dstOrigEnumTag->beginEdit() );
												dstEditEnumTag->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
												dstEditEnumTag->setRequiredContainerEnumDef( dstOrigDef );
												dstEditEnumTag->setRequiredName( srcEnumTag->getRequiredName() );
												if( srcEnumTag->isOptionalEnumCodeNull() ) {
													dstEditEnumTag->setOptionalEnumCodeNull();
												}
												else {
													dstEditEnumTag->setOptionalEnumCodeValue( srcEnumTag->getOptionalEnumCodeValue() );
												}
												lookupSchema = srcEnumTag->getOptionalLookupDefSchema();
												if( lookupSchema == NULL ) {
													lookupSchema = src;
												}
												dstEditEnumTag->setOptionalLookupDefSchema( lookupSchema );
												dstOrigEnumTag = dynamic_cast<cfbam::ICFBamEnumTagObj*>( dstEditEnumTag->create() );
												dstEditEnumTag = NULL;
											}
										}
									}
								}
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditEnumTag != NULL ) {
							dstEditEnumTag->endEdit();
							dstEditEnumTag = NULL;
						}

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigEnumTag != NULL ) {
							if( dstOrigEnumTag->getIsNew() ) {
								delete dstOrigEnumTag;
							}
							dstOrigEnumTag = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamInt16TypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamInt16TypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamInt16TypeObj* srcGenDef = NULL;
						cfbam::ICFBamInt16TypeObj* dstOrigDef = NULL;
						cfbam::ICFBamInt16TypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getInt16TypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamInt16TypeObj*>( value );
							dstOrigDef = GenTableObj->readInt16TypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamInt16TypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamInt16TypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamInt32TypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamInt32TypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamInt32TypeObj* srcGenDef = NULL;
						cfbam::ICFBamInt32TypeObj* dstOrigDef = NULL;
						cfbam::ICFBamInt32TypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getInt32TypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamInt32TypeObj*>( value );
							dstOrigDef = GenTableObj->readInt32TypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamInt32TypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamInt32TypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamInt64TypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamInt64TypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamInt64TypeObj* srcGenDef = NULL;
						cfbam::ICFBamInt64TypeObj* dstOrigDef = NULL;
						cfbam::ICFBamInt64TypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getInt64TypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamInt64TypeObj*>( value );
							dstOrigDef = GenTableObj->readInt64TypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamInt64TypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamInt64TypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamUInt16TypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamUInt16TypeObj* srcGenDef = NULL;
						cfbam::ICFBamUInt16TypeObj* dstOrigDef = NULL;
						cfbam::ICFBamUInt16TypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getUInt16TypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamUInt16TypeObj*>( value );
							dstOrigDef = GenTableObj->readUInt16TypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamUInt16TypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamUInt16TypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamUInt32TypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamUInt32TypeObj* srcGenDef = NULL;
						cfbam::ICFBamUInt32TypeObj* dstOrigDef = NULL;
						cfbam::ICFBamUInt32TypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getUInt32TypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamUInt32TypeObj*>( value );
							dstOrigDef = GenTableObj->readUInt32TypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamUInt32TypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamUInt32TypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamUInt64TypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamUInt64TypeObj* srcGenDef = NULL;
						cfbam::ICFBamUInt64TypeObj* dstOrigDef = NULL;
						cfbam::ICFBamUInt64TypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getUInt64TypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamUInt64TypeObj*>( value );
							dstOrigDef = GenTableObj->readUInt64TypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamUInt64TypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamUInt64TypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamNumberTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamNumberTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamNumberTypeObj* srcGenDef = NULL;
						cfbam::ICFBamNumberTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamNumberTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getNumberTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamNumberTypeObj*>( value );
							dstOrigDef = GenTableObj->readNumberTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamNumberTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								dstEditDef->setRequiredDigits( srcGenDef->getRequiredDigits() );
								dstEditDef->setRequiredPrecis( srcGenDef->getRequiredPrecis() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamNumberTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamFloatTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamFloatTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamFloatTypeObj* srcGenDef = NULL;
						cfbam::ICFBamFloatTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamFloatTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getFloatTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamFloatTypeObj*>( value );
							dstOrigDef = GenTableObj->readFloatTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamFloatTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamFloatTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamDoubleTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamDoubleTypeObj* srcGenDef = NULL;
						cfbam::ICFBamDoubleTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamDoubleTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getDoubleTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamDoubleTypeObj*>( value );
							dstOrigDef = GenTableObj->readDoubleTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamDoubleTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamDoubleTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamNmTokensTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamNmTokensTypeObj* srcGenDef = NULL;
						cfbam::ICFBamNmTokensTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamNmTokensTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getNmTokensTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamNmTokensTypeObj*>( value );
							dstOrigDef = GenTableObj->readNmTokensTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamNmTokensTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamNmTokensTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamNmTokenTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamNmTokenTypeObj* srcGenDef = NULL;
						cfbam::ICFBamNmTokenTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamNmTokenTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getNmTokenTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamNmTokenTypeObj*>( value );
							dstOrigDef = GenTableObj->readNmTokenTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamNmTokenTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamNmTokenTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamStringTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamStringTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamStringTypeObj* srcGenDef = NULL;
						cfbam::ICFBamStringTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamStringTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getStringTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamStringTypeObj*>( value );
							dstOrigDef = GenTableObj->readStringTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamStringTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamStringTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamTextTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamTextTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamTextTypeObj* srcGenDef = NULL;
						cfbam::ICFBamTextTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamTextTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getTextTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamTextTypeObj*>( value );
							dstOrigDef = GenTableObj->readTextTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTextTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalXmlElementNameNull() ) {
									dstEditDef->setOptionalXmlElementNameNull();
								}
								else {
									dstEditDef->setOptionalXmlElementNameValue( srcGenDef->getOptionalXmlElementNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTextTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamTokenTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamTokenTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamTokenTypeObj* srcGenDef = NULL;
						cfbam::ICFBamTokenTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamTokenTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getTokenTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( value );
							dstOrigDef = GenTableObj->readTokenTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTokenTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamDateTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamDateTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamDateTypeObj* srcGenDef = NULL;
						cfbam::ICFBamDateTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamDateTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getDateTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamDateTypeObj*>( value );
							dstOrigDef = GenTableObj->readDateTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamDateTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamDateTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamTimeTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamTimeTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamTimeTypeObj* srcGenDef = NULL;
						cfbam::ICFBamTimeTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamTimeTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getTimeTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamTimeTypeObj*>( value );
							dstOrigDef = GenTableObj->readTimeTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTimeTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTimeTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamTimestampTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamTimestampTypeObj* srcGenDef = NULL;
						cfbam::ICFBamTimestampTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamTimestampTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getTimestampTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamTimestampTypeObj*>( value );
							dstOrigDef = GenTableObj->readTimestampTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTimestampTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTimestampTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamTZDateTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamTZDateTypeObj* srcGenDef = NULL;
						cfbam::ICFBamTZDateTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamTZDateTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getTZDateTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamTZDateTypeObj*>( value );
							dstOrigDef = GenTableObj->readTZDateTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTZDateTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTZDateTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamTZTimeTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamTZTimeTypeObj* srcGenDef = NULL;
						cfbam::ICFBamTZTimeTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamTZTimeTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getTZTimeTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamTZTimeTypeObj*>( value );
							dstOrigDef = GenTableObj->readTZTimeTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTZTimeTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTZTimeTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamTZTimestampTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamTZTimestampTypeObj* srcGenDef = NULL;
						cfbam::ICFBamTZTimestampTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamTZTimestampTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getTZTimestampTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamTZTimestampTypeObj*>( value );
							dstOrigDef = GenTableObj->readTZTimestampTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTZTimestampTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTZTimestampTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else if( value->implementsClassCode( cfbam::CFBamUuidTypeBuff::CLASS_CODE ) ) {
						cfbam::ICFBamUuidTypeTableObj* GenTableObj = NULL;
						cfbam::ICFBamUuidTypeObj* srcGenDef = NULL;
						cfbam::ICFBamUuidTypeObj* dstOrigDef = NULL;
						cfbam::ICFBamUuidTypeEditObj* dstEditDef = NULL;
						try {
							GenTableObj = dst->getSchema()->getUuidTypeTableObj();
							srcGenDef = dynamic_cast<cfbam::ICFBamUuidTypeObj*>( value );
							dstOrigDef = GenTableObj->readUuidTypeByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
							if( dstOrigDef == NULL ) {
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamUuidTypeEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerSchemaDef( dst );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamUuidTypeObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
						}
						CFLIB_EXCEPTION_CATCH_FALLTHROUGH

						if( dstEditDef != NULL ) {
							dstEditDef->endEdit();
							dstEditDef = NULL;
						}

						if( dstOrigDef != NULL ) {
							if( dstOrigDef->getIsNew() ) {
								delete dstOrigDef;
							}
							dstOrigDef = NULL;
						}

						CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
					}
					else {
						throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
							S_ProcName,
							"value",
							value,
							"Hard-coded list of schema definition types" );
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableColumns( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableColumns" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableTableObj* dstTableTableObj = dst->getSchema()->getTableTableObj();
		cfbam::ICFBamValueTableObj* dstValueTableObj = dst->getSchema()->getValueTableObj();
		std::vector<cfbam::ICFBamTableObj*> srcTables = src->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		cfbam::ICFBamValueObj* value = NULL;
		cfbam::ICFBamValueObj* origDstColumn = NULL;
		cfbam::ICFBamTableObj* dstDispenser = NULL;
		cfbam::ICFBamTableObj* srcDispenser = NULL;
		cfbam::ICFBamSchemaDefObj* lookupSchema = NULL;
		try {
			for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
				srcTable = *iterSrcTable;
				origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
				if( origDstTable == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Could not resolve destination table " + srcTable->getRequiredName() );
				}

				std::vector<cfbam::ICFBamValueObj*> srcColumns = srcTable->getOptionalComponentsColumns();
				for( auto iterSrcColumns = srcColumns.begin(); iterSrcColumns != srcColumns.end(); iterSrcColumns++ ) {
					value = *iterSrcColumns;
					origDstColumn = dstValueTableObj->readValueByUNameIdx( origDstTable->getRequiredTenantId(), origDstTable->getRequiredId(), value->getRequiredName() );
					if( origDstColumn == NULL ) {
						if( value->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamTableColTableObj* GenTableObj = NULL;
							cfbam::ICFBamValueTableObj* valueTableObj = NULL;
							cfbam::ICFBamTableColObj* srcGenDef = NULL;
							cfbam::ICFBamTableColObj* dstOrigDef = NULL;
							cfbam::ICFBamTableColEditObj* dstEditDef = NULL;
							cfbam::ICFBamValueObj* srcLookupData = NULL;
							cfbam::ICFBamValueObj* dstLookupData = NULL;
							try {
								GenTableObj = dst->getSchema()->getTableColTableObj();
								valueTableObj = dst->getSchema()->getValueTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamTableColObj*>( value );
								dstOrigDef = GenTableObj->readTableColByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
								if( dstOrigDef == NULL ) {
									srcLookupData = srcGenDef->getRequiredParentDataType();
									dstLookupData = valueTableObj->readValueByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(), origDstTable->getRequiredContainerSchemaDef()->getRequiredId(), srcLookupData->getRequiredName() );
									if( dstLookupData == NULL ) {
										throw cflib::CFLibRuntimeException( CLASS_NAME,
											S_ProcName,
											"Could not resolve dstLookupData type " + srcLookupData->getRequiredName() + " for table " + srcTable->getRequiredName() + " column " + srcGenDef->getRequiredName() );
									}

									dstOrigDef = GenTableObj->newInstance();
									dstEditDef = dynamic_cast<cfbam::ICFBamTableColEditObj*>( dstOrigDef->beginEdit() );
									dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
									dstEditDef->setRequiredContainerTable( origDstTable );
									dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
									dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
									dstEditDef->setRequiredParentDataType( dstLookupData );
									if( srcGenDef->isOptionalDbNameNull() ) {
										dstEditDef->setOptionalDbNameNull();
									}
									else {
										dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
									}
									if( srcGenDef->isOptionalXmlElementNameNull() ) {
										dstEditDef->setOptionalXmlElementNameNull();
									}
									else {
										dstEditDef->setOptionalXmlElementNameValue( srcGenDef->getOptionalXmlElementNameValue() );
									}
									if( srcGenDef->isOptionalDescriptionNull() ) {
										dstEditDef->setOptionalDescriptionNull();
									}
									else {
										dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
									}
									if( srcGenDef->isOptionalGenerateIdNull() ) {
										dstEditDef->setOptionalGenerateIdNull();
									}
									else {
										dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
									}
									if( srcGenDef->isOptionalLabelNull() ) {
										dstEditDef->setOptionalLabelNull();
									}
									else {
										dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
									}
									if( srcGenDef->isOptionalShortDescriptionNull() ) {
										dstEditDef->setOptionalShortDescriptionNull();
									}
									else {
										dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
									}
									if( srcGenDef->isOptionalShortNameNull() ) {
										dstEditDef->setOptionalShortNameNull();
									}
									else {
										dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
									}
									lookupSchema = srcGenDef->getOptionalLookupDefSchema();
									if( lookupSchema == NULL ) {
										lookupSchema = src;
									}
									dstEditDef->setOptionalLookupDefSchema( lookupSchema );

									dstOrigDef = dynamic_cast<cfbam::ICFBamTableColObj*>( dstEditDef->create() );
									dstEditDef = NULL;
								}
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamBoolColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamBoolColTableObj* GenTableObj = NULL;
							cfbam::ICFBamBoolColObj* srcGenDef = NULL;
							cfbam::ICFBamBoolColObj* dstOrigDef = NULL;
							cfbam::ICFBamBoolColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getBoolColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamBoolColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamBoolColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									if( srcGenDef->isOptionalDbNameNull() ) {
										dstEditDef->setOptionalDbNameNull();
									}
									else {
										dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
									}
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalFalseStringNull() ) {
									dstEditDef->setOptionalFalseStringNull();
								}
								else {
									dstEditDef->setOptionalFalseStringValue( srcGenDef->getOptionalFalseStringValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalNullStringNull() ) {
									dstEditDef->setOptionalNullStringNull();
								}
								else {
									dstEditDef->setOptionalNullStringValue( srcGenDef->getOptionalNullStringValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								if( srcGenDef->isOptionalTrueStringNull() ) {
									dstEditDef->setOptionalTrueStringNull();
								}
								else {
									dstEditDef->setOptionalTrueStringValue( srcGenDef->getOptionalTrueStringValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamBoolColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamBlobColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamBlobColTableObj* GenTableObj = NULL;
							cfbam::ICFBamBlobColObj* srcGenDef = NULL;
							cfbam::ICFBamBlobColObj* dstOrigDef = NULL;
							cfbam::ICFBamBlobColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getBlobColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamBlobColObj*>( value );
								dstOrigDef = GenTableObj->readBlobColByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcGenDef->getRequiredName() );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamBlobColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamBlobColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamInt16ColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamInt16ColTableObj* GenTableObj = NULL;
							cfbam::ICFBamInt16ColObj* srcGenDef = NULL;
							cfbam::ICFBamInt16ColObj* dstOrigDef = NULL;
							cfbam::ICFBamInt16ColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getInt16ColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamInt16ColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamInt16ColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamInt16ColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamInt32ColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamInt32ColTableObj* GenTableObj = NULL;
							cfbam::ICFBamInt32ColObj* srcGenDef = NULL;
							cfbam::ICFBamInt32ColObj* dstOrigDef = NULL;
							cfbam::ICFBamInt32ColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getInt32ColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamInt32ColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamInt32ColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamInt32ColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamInt64ColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamInt64ColTableObj* GenTableObj = NULL;
							cfbam::ICFBamInt64ColObj* srcGenDef = NULL;
							cfbam::ICFBamInt64ColObj* dstOrigDef = NULL;
							cfbam::ICFBamInt64ColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getInt64ColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamInt64ColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamInt64ColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamInt64ColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamUInt16ColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamUInt16ColTableObj* GenTableObj = NULL;
							cfbam::ICFBamUInt16ColObj* srcGenDef = NULL;
							cfbam::ICFBamUInt16ColObj* dstOrigDef = NULL;
							cfbam::ICFBamUInt16ColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getUInt16ColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamUInt16ColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamUInt16ColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamUInt16ColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamUInt32ColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamUInt32ColTableObj* GenTableObj = NULL;
							cfbam::ICFBamUInt32ColObj* srcGenDef = NULL;
							cfbam::ICFBamUInt32ColObj* dstOrigDef = NULL;
							cfbam::ICFBamUInt32ColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getUInt32ColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamUInt32ColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamUInt32ColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamUInt32ColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamUInt64ColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamUInt64ColTableObj* GenTableObj = NULL;
							cfbam::ICFBamUInt64ColObj* srcGenDef = NULL;
							cfbam::ICFBamUInt64ColObj* dstOrigDef = NULL;
							cfbam::ICFBamUInt64ColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getUInt64ColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamUInt64ColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamUInt64ColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamUInt64ColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamNumberColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamNumberColTableObj* GenTableObj = NULL;
							cfbam::ICFBamNumberColObj* srcGenDef = NULL;
							cfbam::ICFBamNumberColObj* dstOrigDef =  NULL;
							cfbam::ICFBamNumberColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getNumberColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamNumberColObj*>( value );
								dstOrigDef =  GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamNumberColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								dstEditDef->setRequiredDigits( srcGenDef->getRequiredDigits() );
								dstEditDef->setRequiredPrecis( srcGenDef->getRequiredPrecis() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamNumberColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamFloatColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamFloatColTableObj* GenTableObj = NULL;
							cfbam::ICFBamFloatColObj* srcGenDef = NULL;
							cfbam::ICFBamFloatColObj* dstOrigDef = NULL;
							cfbam::ICFBamFloatColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getFloatColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamFloatColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamFloatColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamFloatColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamDoubleColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamDoubleColTableObj* GenTableObj = NULL;
							cfbam::ICFBamDoubleColObj* srcGenDef = NULL;
							cfbam::ICFBamDoubleColObj* dstOrigDef = NULL;
							cfbam::ICFBamDoubleColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getDoubleColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamDoubleColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamDoubleColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalMaxValueNull() ) {
									dstEditDef->setOptionalMaxValueNull();
								}
								else {
									dstEditDef->setOptionalMaxValueValue( srcGenDef->getOptionalMaxValueValue() );
								}
								if( srcGenDef->isOptionalMinValueNull() ) {
									dstEditDef->setOptionalMinValueNull();
								}
								else {
									dstEditDef->setOptionalMinValueValue( srcGenDef->getOptionalMinValueValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamDoubleColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamNmTokensColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamNmTokensColTableObj* GenTableObj = NULL;
							cfbam::ICFBamNmTokensColObj* srcGenDef = NULL;
							cfbam::ICFBamNmTokensColObj* dstOrigDef = NULL;
							cfbam::ICFBamNmTokensColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getNmTokensColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamNmTokensColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamNmTokensColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamNmTokensColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamNmTokenColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamNmTokenColTableObj* GenTableObj = NULL;
							cfbam::ICFBamNmTokenColObj* srcGenDef = NULL;
							cfbam::ICFBamNmTokenColObj* dstOrigDef = NULL;
							cfbam::ICFBamNmTokenColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getNmTokenColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamNmTokenColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamNmTokenColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamNmTokenColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamTextColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamTextColTableObj* GenTableObj = NULL;
							cfbam::ICFBamTextColObj* srcGenDef = NULL;
							cfbam::ICFBamTextColObj* dstOrigDef = NULL;
							cfbam::ICFBamTextColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getTextColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamTextColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTextColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalXmlElementNameNull() ) {
									dstEditDef->setOptionalXmlElementNameNull();
								}
								else {
									dstEditDef->setOptionalXmlElementNameValue( srcGenDef->getOptionalXmlElementNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTextColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamStringColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamStringColTableObj* GenTableObj = NULL;
							cfbam::ICFBamStringColObj* srcGenDef = NULL;
							cfbam::ICFBamStringColObj* dstOrigDef = NULL;
							cfbam::ICFBamStringColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getStringColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamStringColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamStringColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamStringColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamTokenColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamTokenColTableObj* GenTableObj = NULL;
							cfbam::ICFBamTokenColObj* srcGenDef = NULL;
							cfbam::ICFBamTokenColObj* dstOrigDef = NULL;
							cfbam::ICFBamTokenColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getTokenColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamTokenColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTokenColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredMaxLen( srcGenDef->getRequiredMaxLen() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTokenColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamDateColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamDateColTableObj* GenTableObj = NULL;
							cfbam::ICFBamDateColObj* srcGenDef = NULL;
							cfbam::ICFBamDateColObj* dstOrigDef = NULL;
							cfbam::ICFBamDateColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getDateColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamDateColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamDateColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamDateColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamTimeColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamTimeColTableObj* GenTableObj = NULL;
							cfbam::ICFBamTimeColObj* srcGenDef = NULL;
							cfbam::ICFBamTimeColObj* dstOrigDef = NULL;
							cfbam::ICFBamTimeColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getTimeColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamTimeColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTimeColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTimeColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamTimestampColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamTimestampColTableObj* GenTableObj = NULL;
							cfbam::ICFBamTimestampColObj* srcGenDef = NULL;
							cfbam::ICFBamTimestampColObj* dstOrigDef = NULL;
							cfbam::ICFBamTimestampColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getTimestampColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamTimestampColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTimestampColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTimestampColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamTZDateColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamTZDateColTableObj* GenTableObj = NULL;
							cfbam::ICFBamTZDateColObj* srcGenDef = NULL;
							cfbam::ICFBamTZDateColObj* dstOrigDef = NULL;
							cfbam::ICFBamTZDateColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getTZDateColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamTZDateColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTZDateColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTZDateColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamTZTimeColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamTZTimeColTableObj* GenTableObj = NULL;
							cfbam::ICFBamTZTimeColObj* srcGenDef = NULL;
							cfbam::ICFBamTZTimeColObj* dstOrigDef = NULL;
							cfbam::ICFBamTZTimeColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getTZTimeColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamTZTimeColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTZTimeColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTZTimeColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamTZTimestampColTableObj* GenTableObj = NULL;
							cfbam::ICFBamTZTimestampColObj* srcGenDef = NULL;
							cfbam::ICFBamTZTimestampColObj* dstOrigDef = NULL;
							cfbam::ICFBamTZTimestampColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getTZTimestampColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamTZTimestampColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamTZTimestampColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamTZTimestampColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else if( value->implementsClassCode( cfbam::CFBamUuidColBuff::CLASS_CODE ) ) {
							cfbam::ICFBamUuidColTableObj* GenTableObj = NULL;
							cfbam::ICFBamUuidColObj* srcGenDef = NULL;
							cfbam::ICFBamUuidColObj* dstOrigDef = NULL;
							cfbam::ICFBamUuidColEditObj* dstEditDef = NULL;
							try {
								GenTableObj = dst->getSchema()->getUuidColTableObj();
								srcGenDef = dynamic_cast<cfbam::ICFBamUuidColObj*>( value );
								dstOrigDef = GenTableObj->newInstance();
								dstEditDef = dynamic_cast<cfbam::ICFBamUuidColEditObj*>( dstOrigDef->beginEdit() );
								dstEditDef->setRequiredOwnerTenant( dst->getRequiredOwnerTenant() );
								dstEditDef->setRequiredContainerTable( origDstTable );
								dstEditDef->setRequiredIsNullable( srcGenDef->getRequiredIsNullable() );
								dstEditDef->setRequiredName( srcGenDef->getRequiredName() );
								if( srcGenDef->isOptionalDbNameNull() ) {
									dstEditDef->setOptionalDbNameNull();
								}
								else {
									dstEditDef->setOptionalDbNameValue( srcGenDef->getOptionalDbNameValue() );
								}
								if( srcGenDef->isOptionalDescriptionNull() ) {
									dstEditDef->setOptionalDescriptionNull();
								}
								else {
									dstEditDef->setOptionalDescriptionValue( srcGenDef->getOptionalDescriptionValue() );
								}
								if( srcGenDef->isOptionalGenerateIdNull() ) {
									dstEditDef->setOptionalGenerateIdNull();
								}
								else {
									dstEditDef->setOptionalGenerateIdValue( srcGenDef->getOptionalGenerateIdValue() );
								}
								if( srcGenDef->isOptionalInitValueNull() ) {
									dstEditDef->setOptionalInitValueNull();
								}
								else {
									dstEditDef->setOptionalInitValueValue( srcGenDef->getOptionalInitValueValue() );
								}
								if( srcGenDef->isOptionalLabelNull() ) {
									dstEditDef->setOptionalLabelNull();
								}
								else {
									dstEditDef->setOptionalLabelValue( srcGenDef->getOptionalLabelValue() );
								}
								if( srcGenDef->isOptionalShortDescriptionNull() ) {
									dstEditDef->setOptionalShortDescriptionNull();
								}
								else {
									dstEditDef->setOptionalShortDescriptionValue( srcGenDef->getOptionalShortDescriptionValue() );
								}
								if( srcGenDef->isOptionalShortNameNull() ) {
									dstEditDef->setOptionalShortNameNull();
								}
								else {
									dstEditDef->setOptionalShortNameValue( srcGenDef->getOptionalShortNameValue() );
								}
								lookupSchema = srcGenDef->getOptionalLookupDefSchema();
								if( lookupSchema == NULL ) {
									lookupSchema = src;
								}
								dstEditDef->setOptionalLookupDefSchema( lookupSchema );
								dstOrigDef = dynamic_cast<cfbam::ICFBamUuidColObj*>( dstEditDef->create() );
								dstEditDef = NULL;
							}
							CFLIB_EXCEPTION_CATCH_FALLTHROUGH

							if( dstEditDef != NULL ) {
								dstEditDef->endEdit();
								dstEditDef = NULL;
							}

							if( dstOrigDef != NULL ) {
								if( dstOrigDef->getIsNew() ) {
									delete dstOrigDef;
								}
								dstOrigDef = NULL;
							}

							CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
						}
						else {
							throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
								S_ProcName,
								"srcColumn",
								value,
								"Hard-coded list of table column types" );
						}
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableIndexes( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableIndexes" );
		cfbam::ICFBamTableTableObj* dstTableTableObj = dst->getSchema()->getTableTableObj();
		std::vector<cfbam::ICFBamTableObj*> srcTables = src->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		std::vector<cfbam::ICFBamIndexObj*> componentIndexes;
		cfbam::ICFBamIndexObj* dstIndex = NULL;
		cfbam::ICFBamIndexObj* srcIndex = NULL;
		for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
			srcTable = *iterSrcTable;
			origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
			if( origDstTable == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve destination table " + srcTable->getRequiredName() );
			}
			componentIndexes = srcTable->getOptionalComponentsIndex();
			for( auto iterSrcIndex = componentIndexes.begin(); iterSrcIndex != componentIndexes.end(); iterSrcIndex ++ ) {
				srcIndex = *iterSrcIndex;
				dstIndex = importMergeIndex( origDstTable, srcIndex );
			}
		}
	}

	cfbam::ICFBamIndexObj* CFBamCustXmlLoaderSchemaRefHandler::importMergeIndex( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamIndexObj* srcIndex ) {
		static const std::string S_ProcName( "importMergeIndex" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamIndexTableObj* dstIndexTableObj = NULL;
		cfbam::ICFBamIndexObj* origDstIndex = NULL;
		cfbam::ICFBamSchemaDefObj* defSchema = NULL;
		cfbam::ICFBamIndexEditObj* editDstIndex = NULL;
		cfsec::ICFSecTenantObj* dstTenant = NULL;
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		cfbam::ICFBamIndexColTableObj* dstIndexColTableObj = NULL;
		cfbam::ICFBamValueTableObj* dstValueTableObj = NULL;
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamIndexObj* dstIndex = NULL;
		cfbam::ICFBamIndexColObj* dstColumn = NULL;
		cfbam::ICFBamIndexColObj* srcColumn = NULL;
		cfbam::ICFBamIndexColEditObj* dstEditColumn = NULL;
		cfbam::ICFBamIndexColObj* dstIndexColumn = NULL;
		cfbam::ICFBamValueObj* dstLookupColumn = NULL;
		cfbam::ICFBamValueObj* srcLookupColumn = NULL;
		try {
			dstIndexTableObj = origDstTable->getSchema()->getIndexTableObj();
			std::string indexName = srcIndex->getRequiredName();
			origDstIndex = dstIndexTableObj->readIndexByUNameIdx( origDstTable->getRequiredTenantId(),
				origDstTable->getRequiredId(),
				indexName );
			if( origDstIndex != NULL ) {
				return( origDstIndex );
			}

			defSchema = srcIndex->getOptionalLookupDefSchema();
			if( defSchema == NULL ) {
				defSchema = srcIndex->getRequiredContainerTable()->getRequiredContainerSchemaDef();
			}

			origDstIndex = dstIndexTableObj->newInstance();
			editDstIndex = dynamic_cast<cfbam::ICFBamIndexEditObj*>( origDstIndex->beginEdit() );
			editDstIndex->setRequiredOwnerTenant( origDstTable->getRequiredOwnerTenant() );
			editDstIndex->setRequiredContainerTable( origDstTable );
			editDstIndex->setRequiredIsDbMapped( srcIndex->getRequiredIsDbMapped() );
			editDstIndex->setRequiredIsUnique( srcIndex->getRequiredIsUnique() );
			editDstIndex->setRequiredName( srcIndex->getRequiredName() );
			if( srcIndex->isOptionalDbNameNull() ) {
				editDstIndex->setOptionalDbNameNull();
			}
			else {
				editDstIndex->setOptionalDbNameValue( srcIndex->getOptionalDbNameValue() );
			}
			if( srcIndex->isOptionalDescriptionNull() ) {
				editDstIndex->setOptionalDescriptionNull();
			}
			else {
				editDstIndex->setOptionalDescriptionValue( srcIndex->getOptionalDescriptionValue() );
			}
			if( srcIndex->isOptionalLabelNull() ) {
				editDstIndex->setOptionalLabelNull();
			}
			else {
				editDstIndex->setOptionalLabelValue( srcIndex->getOptionalLabelValue() );
			}
			if( srcIndex->isOptionalShortDescriptionNull() ) {
				editDstIndex->setOptionalShortDescriptionNull();
			}
			else {
				editDstIndex->setOptionalShortDescriptionValue( srcIndex->getOptionalShortDescriptionValue() );
			}
			if( srcIndex->isOptionalShortNameNull() ) {
				editDstIndex->setOptionalShortNameNull();
			}
			else {
				editDstIndex->setOptionalShortNameValue( srcIndex->getOptionalShortNameValue() );
			}
			if( srcIndex->isOptionalSuffixNull() ) {
				editDstIndex->setOptionalSuffixNull();
			}
			else {
				editDstIndex->setOptionalSuffixValue( srcIndex->getOptionalSuffixValue() );
			}
			editDstIndex->setOptionalLookupDefSchema( defSchema );
			origDstIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( editDstIndex->create() );
			editDstIndex = NULL;

			dstTenant = origDstIndex->getRequiredOwnerTenant();
			dstTableTableObj = origDstIndex->getSchema()->getTableTableObj();
			dstIndexColTableObj = origDstIndex->getSchema()->getIndexColTableObj();
			dstValueTableObj = origDstIndex->getSchema()->getValueTableObj();
			cfbam::ICFBamIndexObj* dstIndex = origDstIndex;

			std::vector<cfbam::ICFBamIndexColObj*> srcColumns;
			std::vector<cfbam::ICFBamIndexObj*> componentIndexes;

			srcColumns = srcIndex->getOptionalComponentsColumns();
			for( auto iterSrcColumn = srcColumns.begin(); iterSrcColumn != srcColumns.end(); iterSrcColumn ++ ) {
				srcColumn = *iterSrcColumn;
				srcLookupColumn = srcColumn->getRequiredLookupColumn();
				dstLookupColumn = dstValueTableObj->readValueByUNameIdx( origDstTable->getRequiredTenantId(),
					origDstTable->getRequiredId(),
					srcColumn->getRequiredName() );
				if( dstLookupColumn == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Could not resolve dstLookupColumn for table " + srcTable->getRequiredName() + " index " + origDstIndex->getRequiredName() + " column " + srcColumn->getRequiredName() );
				}

				dstColumn = dstIndexColTableObj->newInstance();
				dstEditColumn = dynamic_cast<cfbam::ICFBamIndexColEditObj*>( dstColumn->beginEdit() );
				dstEditColumn->setRequiredOwnerTenant( dstTenant );
				dstEditColumn->setRequiredContainerIndex( origDstIndex );
				dstEditColumn->setRequiredLookupColumn( dstLookupColumn );
				dstEditColumn->setRequiredName( srcColumn->getRequiredName() );
				if( srcColumn->isOptionalDescriptionNull() ) {
					dstEditColumn->setOptionalDescriptionNull();
				}
				else {
					dstEditColumn->setOptionalDescriptionValue( srcColumn->getOptionalDescriptionValue() );
				}
				if( srcColumn->isOptionalLabelNull() ) {
					dstEditColumn->setOptionalLabelNull();
				}
				else {
					dstEditColumn->setOptionalLabelValue( srcColumn->getOptionalLabelValue() );
				}
				if( srcColumn->isOptionalShortDescriptionNull() ) {
					dstEditColumn->setOptionalShortDescriptionNull();
				}
				else {
					dstEditColumn->setOptionalShortDescriptionValue( srcColumn->getOptionalShortDescriptionValue() );
				}
				if( srcColumn->isOptionalShortNameNull() ) {
					dstEditColumn->setOptionalShortNameNull();
				}
				else {
					dstEditColumn->setOptionalShortNameValue( srcColumn->getOptionalShortNameValue() );
				}
				dstEditColumn->setOptionalLookupDefSchema( defSchema );
				if( NULL == dstIndexColTableObj->readIndexColByUNameIdx( origDstIndex->getRequiredTenantId(),
					origDstIndex->getRequiredId(),
					srcColumn->getRequiredName() ) )
				{
					dstColumn = dynamic_cast<cfbam::ICFBamIndexColObj*>( dstEditColumn->create() );
					dstEditColumn = NULL;
				}
				else {
					dstEditColumn->endEdit();
					dstEditColumn = NULL;
					delete dstColumn;
					dstColumn = NULL;
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( dstEditColumn != NULL ) {
			dstEditColumn->endEdit();
			dstEditColumn = NULL;
		}

		if( editDstIndex != NULL ) {
			editDstIndex->endEdit();
			editDstIndex = NULL;
		}

		if( dstIndexColumn != NULL ) {
			if( dstIndexColumn->getIsNew() ) {
				delete dstIndexColumn;
			}
			dstIndexColumn = NULL;
		}

		if( origDstIndex != NULL ) {
			if( origDstIndex->getIsNew() ) {
				delete origDstIndex;
			}
			origDstIndex = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( origDstIndex );
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableResolvePrimaryIndexes( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableResolvePrimaryIndexes" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		cfbam::ICFBamIndexTableObj* dstIndexTableObj = NULL;
		std::vector<cfbam::ICFBamTableObj*> srcTables;
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		cfbam::ICFBamIndexObj* dstPrimaryIndex = NULL;
		cfbam::ICFBamIndexObj* srcPrimaryIndex = NULL;
		cfbam::ICFBamTableEditObj* editDstTable = NULL;
		try {
			dstTableTableObj = dst->getSchema()->getTableTableObj();
			dstIndexTableObj = dst->getSchema()->getIndexTableObj();
			srcTables = src->getOptionalComponentsTables();
			for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
				srcTable = *iterSrcTable;
				origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
				if( origDstTable == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Could not resolve origDstTable " + srcTable->getRequiredName() );
				}

				dstPrimaryIndex = origDstTable->getOptionalLookupPrimaryIndex();
				if( dstPrimaryIndex == NULL ) {
					srcPrimaryIndex = srcTable->getOptionalLookupPrimaryIndex();
					if( srcPrimaryIndex != NULL ) {
						dstPrimaryIndex = dstIndexTableObj->readIndexByUNameIdx( origDstTable->getRequiredTenantId(), origDstTable->getRequiredId(), srcPrimaryIndex->getRequiredName() );
						if( dstPrimaryIndex == NULL ) {
							throw cflib::CFLibRuntimeException( CLASS_NAME,
								S_ProcName,
								"Could not resolve primary index " + srcPrimaryIndex->getRequiredName() + " for destination table " + origDstTable->getRequiredName() );
						}

						editDstTable = dynamic_cast<cfbam::ICFBamTableEditObj*>( origDstTable->beginEdit() );
						editDstTable->setOptionalLookupPrimaryIndex( dstPrimaryIndex );
						editDstTable->update();
						editDstTable = NULL;
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editDstTable != NULL ) {
			editDstTable->endEdit();
			editDstTable = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableResolveLookupIndexes( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableResolveLookupIndexes" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		cfbam::ICFBamIndexTableObj* dstIndexTableObj = NULL;
		std::vector<cfbam::ICFBamTableObj*> srcTables;
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		cfbam::ICFBamIndexObj* dstLookupIndex = NULL;
		cfbam::ICFBamIndexObj* srcLookupIndex = NULL;
		cfbam::ICFBamTableEditObj* editDstTable = NULL;
		try {
			dstTableTableObj = dst->getSchema()->getTableTableObj();
			dstIndexTableObj = dst->getSchema()->getIndexTableObj();
			srcTables = src->getOptionalComponentsTables();
			for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
				srcTable = *iterSrcTable;
				origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(),
					dst->getRequiredId(),
					srcTable->getRequiredName() );
				if( origDstTable == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Could not resolve origDstTable " + srcTable->getRequiredName() );
				}

				dstLookupIndex = origDstTable->getOptionalLookupLookupIndex();
				if( dstLookupIndex == NULL ) {
					srcLookupIndex = srcTable->getOptionalLookupLookupIndex();
					if( srcLookupIndex != NULL ) {
						dstLookupIndex = dstIndexTableObj->readIndexByUNameIdx( origDstTable->getRequiredTenantId(), origDstTable->getRequiredId(), srcLookupIndex->getRequiredName() );
						if( dstLookupIndex == NULL ) {
							throw cflib::CFLibRuntimeException( CLASS_NAME,
								S_ProcName,
								"Could not resolve lookup index " + srcLookupIndex->getRequiredName() + " for destination table " + origDstTable->getRequiredName() );
						}

						editDstTable = dynamic_cast<cfbam::ICFBamTableEditObj*>( origDstTable->beginEdit() );
						editDstTable->setOptionalLookupLookupIndex( dstLookupIndex );
						editDstTable->update();
						editDstTable = NULL;
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editDstTable != NULL ) {
			editDstTable->endEdit();
			editDstTable = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableRelations( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableRelations" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		std::vector<cfbam::ICFBamTableObj*> srcTables;
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		cfbam::ICFBamRelationObj* dstRelation = NULL;
		cfbam::ICFBamRelationObj* srcRelation = NULL;
		std::vector<cfbam::ICFBamRelationObj*> componentRelations;
		try {
			dstTableTableObj = dst->getSchema()->getTableTableObj();
			srcTables = src->getOptionalComponentsTables();
			for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
				srcTable = *iterSrcTable;
				origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
				if( origDstTable == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Could not resolve destination table " + srcTable->getRequiredName() );
				}
				componentRelations = srcTable->getOptionalComponentsRelation();
				for( auto iterSrcRelation = componentRelations.begin(); iterSrcRelation != componentRelations.end(); iterSrcRelation ++ ) {
					srcRelation = *iterSrcRelation;
					dstRelation = importMergeRelation( origDstTable, srcRelation );
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	cfbam::ICFBamRelationObj* CFBamCustXmlLoaderSchemaRefHandler::importMergeRelation( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamRelationObj* srcRelation ) {
		static const std::string S_ProcName( "importMergeRelation" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamRelationTableObj* dstRelationTableObj = NULL;
		cfbam::ICFBamRelationObj* origDstRelation = NULL;
		cfbam::ICFBamRelationEditObj* editDstRelation = NULL;
		cfbam::ICFBamRelationColObj* dstColumn = NULL;
		cfbam::ICFBamRelationColEditObj* dstEditColumn = NULL;
		cfbam::ICFBamSchemaDefObj* dstSchemaDef = NULL;
		cfbam::ICFBamSchemaDefObj* defSchema = NULL;
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		cfbam::ICFBamIndexTableObj* dstIndexTableObj = NULL;
		cfbam::ICFBamTableObj* srcRelationToTable = NULL;
		cfbam::ICFBamIndexObj* srcRelationToIndex = NULL;
		cfbam::ICFBamTableObj* dstRelationToTable = NULL;
		cfbam::ICFBamIndexObj* dstRelationToIndex = NULL;
		cfbam::ICFBamTableObj* srcRelationFromTable = NULL;
		cfbam::ICFBamIndexObj* srcRelationFromIndex = NULL;
		cfbam::ICFBamTableObj* dstRelationFromTable = NULL;
		cfbam::ICFBamIndexObj* dstRelationFromIndex = NULL;
		cfsec::ICFSecTenantObj* dstTenant = NULL;
		cfbam::ICFBamIndexColTableObj* dstIndexColTableObj = NULL;
		cfbam::ICFBamRelationColTableObj* dstRelationColTableObj = NULL;
		cfbam::ICFBamRelationObj* dstRelation = NULL;
		std::vector<cfbam::ICFBamRelationColObj*> srcColumns;
		cfbam::ICFBamRelationColObj* srcColumn = NULL;
		cfbam::ICFBamRelationColObj* dstLookupFromCol = NULL;
		cfbam::ICFBamIndexColObj* srcLookupFromCol = NULL;
		cfbam::ICFBamIndexColObj* srcLookupToCol = NULL;
		cfbam::ICFBamIndexColObj* dstLookupFromIndexCol = NULL;
		cfbam::ICFBamIndexColObj* dstLookupToIndexCol = NULL;
		try {
			dstRelationTableObj = origDstTable->getSchema()->getRelationTableObj();
			std::string relationName = srcRelation->getRequiredName();
			origDstRelation = dstRelationTableObj->readRelationByUNameIdx( origDstTable->getRequiredTenantId(), origDstTable->getRequiredId(), relationName );
			if( origDstRelation != NULL ) {
				return( origDstRelation );
			}

			dstSchemaDef = origDstTable->getRequiredContainerSchemaDef();
			defSchema = srcRelation->getOptionalLookupDefSchema();
			if( defSchema == NULL ) {
				defSchema = srcRelation->getRequiredContainerFromTable()->getRequiredContainerSchemaDef();
			}

			dstTableTableObj = origDstTable->getSchema()->getTableTableObj();
			dstIndexTableObj = origDstTable->getSchema()->getIndexTableObj();
			dstTenant = origDstTable->getRequiredOwnerTenant();

			srcRelationFromTable = srcRelation->getRequiredContainerFromTable();
			dstRelationFromTable = dstTableTableObj->readTableByUNameIdx( dstSchemaDef->getRequiredTenantId(),
				dstSchemaDef->getRequiredId(),
				srcRelationFromTable->getRequiredName() );
			if( dstRelationFromTable == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve destination from table " + srcRelationFromTable->getRequiredName() + " for relation " + srcRelation->getObjName() );
			}

			srcRelationToTable = srcRelation->getRequiredLookupToTable();
			dstRelationToTable = dstTableTableObj->readTableByUNameIdx( dstSchemaDef->getRequiredTenantId(),
				dstSchemaDef->getRequiredId(),
				srcRelationToTable->getRequiredName() );
			if( dstRelationToTable == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve destination to table " + srcRelationToTable->getRequiredName() + " for relation " + srcRelation->getObjName() );
			}

			srcRelationFromIndex = srcRelation->getRequiredLookupFromIndex();
			dstRelationFromIndex = dstIndexTableObj->readIndexByUNameIdx( dstRelationFromTable->getRequiredTenantId(),
				dstRelationFromTable->getRequiredId(),
				srcRelationFromIndex->getRequiredName() );
			if( dstRelationFromIndex == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve destination from index " + srcRelationFromIndex->getObjName() + " for relation " + srcRelation->getObjName() );
			}

			srcRelationToIndex = srcRelation->getRequiredLookupToIndex();
			dstRelationToIndex = dstIndexTableObj->readIndexByUNameIdx( dstRelationToTable->getRequiredTenantId(),
				dstRelationToTable->getRequiredId(),
				srcRelationToIndex->getRequiredName() );
			if( dstRelationToIndex == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve destination to index " + srcRelationToIndex->getObjName() + " for relation " + srcRelation->getObjName() );
			}

			origDstRelation = dstRelationTableObj->newInstance();
			editDstRelation = dynamic_cast<cfbam::ICFBamRelationEditObj*>( origDstRelation->beginEdit() );
			editDstRelation->setRequiredOwnerTenant( dstTenant );
			editDstRelation->setRequiredContainerFromTable( origDstTable );
			editDstRelation->setRequiredLookupFromIndex( dstRelationFromIndex );
			editDstRelation->setRequiredLookupToTable( dstRelationToTable );
			editDstRelation->setRequiredLookupToIndex( dstRelationToIndex );
			editDstRelation->setRequiredRelationType( srcRelation->getRequiredRelationType() );
			editDstRelation->setRequiredName( srcRelation->getRequiredName() );
			editDstRelation->setRequiredIsRequired( srcRelation->getRequiredIsRequired() );
			editDstRelation->setRequiredIsXsdContainer( srcRelation->getRequiredIsXsdContainer() );
			editDstRelation->setRequiredIsLateResolver( srcRelation->getRequiredIsLateResolver() );
			if( srcRelation->isOptionalDbNameNull() ) {
				editDstRelation->setOptionalDbNameNull();
			}
			else {
				editDstRelation->setOptionalDbNameValue( srcRelation->getOptionalDbNameValue() );
			}
			if( srcRelation->isOptionalDescriptionNull() ) {
				editDstRelation->setOptionalDescriptionNull();
			}
			else {
				editDstRelation->setOptionalDescriptionValue( srcRelation->getOptionalDescriptionValue() );
			}
			if( srcRelation->isOptionalLabelNull() ) {
				editDstRelation->setOptionalLabelNull();
			}
			else {
				editDstRelation->setOptionalLabelValue( srcRelation->getOptionalLabelValue() );
			}
			if( srcRelation->isOptionalShortDescriptionNull() ) {
				editDstRelation->setOptionalShortDescriptionNull();
			}
			else {
				editDstRelation->setOptionalShortDescriptionValue( srcRelation->getOptionalShortDescriptionValue() );
			}
			if( srcRelation->isOptionalShortNameNull() ) {
				editDstRelation->setOptionalShortNameNull();
			}
			else {
				editDstRelation->setOptionalShortNameValue( srcRelation->getOptionalShortNameValue() );
			}
			if( srcRelation->isOptionalSuffixNull() ) {
				editDstRelation->setOptionalSuffixNull();
			}
			else {
				editDstRelation->setOptionalSuffixValue( srcRelation->getOptionalSuffixValue() );
			}
			editDstRelation->setOptionalLookupDefSchema( defSchema );
			origDstRelation = dynamic_cast<cfbam::ICFBamRelationObj*>( editDstRelation->create() );
			editDstRelation = NULL;

			dstIndexColTableObj = origDstRelation->getSchema()->getIndexColTableObj();
			dstRelationColTableObj = origDstRelation->getSchema()->getRelationColTableObj();
			dstRelation = origDstRelation;

			srcColumns = srcRelation->getOptionalComponentsColumns();
			for( auto iterSrcColumn = srcColumns.begin(); iterSrcColumn != srcColumns.end(); iterSrcColumn ++ ) {
				srcColumn = *iterSrcColumn;
				dstColumn = dstRelationColTableObj->readRelationColByUNameIdx( dstRelation->getRequiredTenantId(), dstRelation->getRequiredId(), srcColumn->getRequiredName() );
				if( dstColumn == NULL ) {
					srcLookupFromCol = srcColumn->getRequiredLookupFromCol();
					dstLookupFromCol = dstRelationColTableObj->readRelationColByUNameIdx( origDstRelation->getRequiredTenantId(),
						origDstRelation->getRequiredId(),
						srcColumn->getRequiredName() );
		 
					if( dstLookupFromCol == NULL ) {
						srcLookupToCol = srcColumn->getRequiredLookupToCol();

						dstLookupToIndexCol = dstIndexColTableObj->readIndexColByUNameIdx( dstRelationToIndex->getRequiredTenantId(), dstRelationToIndex->getRequiredId(), srcLookupToCol->getRequiredName() );
						if( dstLookupToIndexCol == NULL ) {
							throw cflib::CFLibRuntimeException( CLASS_NAME,
								S_ProcName,
								"Could not resolve destination to index column " + srcLookupToCol->getObjName() + " for relation " + srcRelation->getObjName() );
						}

						dstLookupFromIndexCol = dstIndexColTableObj->readIndexColByUNameIdx( dstRelationFromIndex->getRequiredTenantId(), dstRelationFromIndex->getRequiredId(), srcLookupFromCol->getRequiredName() );
						if( dstLookupFromIndexCol == NULL ) {
							throw cflib::CFLibRuntimeException( CLASS_NAME,
								S_ProcName,
								"Could not resolve destination from index column " + srcLookupFromCol->getObjName() + " for relation " + srcRelation->getObjName() );
						}

						dstColumn = dstRelationColTableObj->newInstance();
						dstEditColumn = dynamic_cast<cfbam::ICFBamRelationColEditObj*>( dstColumn->beginEdit() );
						dstEditColumn->setRequiredOwnerTenant( dstTenant );
						dstEditColumn->setRequiredContainerRelation( origDstRelation );
						dstEditColumn->setRequiredLookupFromCol( dstLookupFromIndexCol );
						dstEditColumn->setRequiredLookupToCol( dstLookupToIndexCol );
						dstEditColumn->setRequiredName( srcColumn->getRequiredName() );
						if( srcColumn->isOptionalDescriptionNull() ) {
							dstEditColumn->setOptionalDescriptionNull();
						}
						else {
							dstEditColumn->setOptionalDescriptionValue( srcColumn->getOptionalDescriptionValue() );
						}
						if( srcColumn->isOptionalLabelNull() ) {
							dstEditColumn->setOptionalLabelNull();
						}
						else {
							dstEditColumn->setOptionalLabelValue( srcColumn->getOptionalLabelValue() );
						}
						if( srcColumn->isOptionalShortDescriptionNull() ) {
							dstEditColumn->setOptionalShortDescriptionNull();
						}
						else {
							dstEditColumn->setOptionalShortDescriptionValue( srcColumn->getOptionalShortDescriptionValue() );
						}
						if( srcColumn->isOptionalShortNameNull() ) {
							dstEditColumn->setOptionalShortNameNull();
						}
						else {
							dstEditColumn->setOptionalShortNameValue( srcColumn->getOptionalShortNameValue() );
						}
						dstEditColumn->setOptionalLookupDefSchema( defSchema );
						if( NULL == dstRelationColTableObj->readRelationColByUNameIdx( origDstRelation->getRequiredTenantId(), origDstRelation->getRequiredId(), srcColumn->getRequiredName() ) ) {
							dstColumn = dynamic_cast<cfbam::ICFBamRelationColObj*>( dstEditColumn->create() );
							dstEditColumn = NULL;
						}
						else {
							dstEditColumn->endEdit();
							dstEditColumn = NULL;
							delete dstColumn;
							dstColumn = NULL;
						}
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( dstEditColumn != NULL ) {
			dstEditColumn->endEdit();
			dstEditColumn = NULL;
		}

		if( dstColumn != NULL ) {
			if( dstColumn->getIsNew() ) {
				delete dstColumn;
			}
			dstColumn = NULL;
		}

		if( editDstRelation != NULL ) {
			editDstRelation->endEdit();
			editDstRelation = NULL;
		}

		if( origDstRelation != NULL ) {
			if( origDstRelation->getIsNew() ) {
				delete origDstRelation;
			}
			origDstRelation = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( origDstRelation );
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableResolveNarrowedRelations( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableResolveNarrowedRelations" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableTableObj* dstTableTableObj = dst->getSchema()->getTableTableObj();
		cfbam::ICFBamRelationTableObj* dstRelationTableObj = dst->getSchema()->getRelationTableObj();
		std::vector<cfbam::ICFBamTableObj*> srcTables = src->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		cfbam::ICFBamRelationObj* srcRelation = NULL;
		cfbam::ICFBamRelationObj* dstRelation = NULL;
		cfbam::ICFBamRelationEditObj* editDstRelation = NULL;
		std::vector<cfbam::ICFBamRelationObj*> srcRelations;
		cfbam::ICFBamRelationObj* srcRelationNarrowed = NULL;
		cfbam::ICFBamRelationObj* dstRelationNarrowed = NULL;
		std::string srcRelationNarrowedTableName;
		cfbam::ICFBamTableObj* srcRelationNarrowedTable = NULL;
		cfbam::ICFBamTableObj* dstRelationNarrowedTable = NULL;

		try {
			for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {

				srcTable = *iterSrcTable;
				origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
				if( origDstTable == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Could not resolve destination table " + srcTable->getRequiredName() );
				}

				srcRelations  = srcTable->getOptionalComponentsRelation();
				for( auto iterSrcRelations = srcRelations.begin(); iterSrcRelations != srcRelations.end(); iterSrcRelations ++ ) {
					srcRelation = *iterSrcRelations;
					if( srcRelation != NULL ) {
						dstRelation = dstRelationTableObj->readRelationByUNameIdx( origDstTable->getRequiredTenantId(), origDstTable->getRequiredId(), srcRelation->getRequiredName() );
						if( dstRelation == NULL ) {
							throw cflib::CFLibRuntimeException( CLASS_NAME,
								S_ProcName,
								"Could not resolve destination relation " + srcRelation->getRequiredName() + " in table " + origDstTable->getObjName() + " for relation " + srcRelation->getObjName() );
						}

						srcRelationNarrowed = srcRelation->getOptionalLookupNarrowed();
						if( srcRelationNarrowed == NULL ) {
							srcRelationNarrowedTableName = "";
							srcRelationNarrowedTable = NULL;
							dstRelationNarrowedTable = NULL;
							dstRelationNarrowed = NULL;
						}
						else {
							srcRelationNarrowedTableName = srcRelationNarrowed->getRequiredContainerFromTable()->getRequiredName();
							dstRelationNarrowedTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), 
								dst->getRequiredId(),
								srcRelationNarrowedTableName );
							if( dstRelationNarrowedTable == NULL ) {
								throw cflib::CFLibRuntimeException( CLASS_NAME,
									S_ProcName,
									"Could not resolve destination narrowed table " + srcRelationNarrowedTableName + " for relation " + srcRelation->getObjName() );
							}

							dstRelationNarrowed = dstRelationTableObj->readRelationByUNameIdx( dstRelationNarrowedTable->getRequiredTenantId(),
								dstRelationNarrowedTable->getRequiredId(),
								srcRelationNarrowed->getRequiredName() );
							if( dstRelationNarrowed == NULL ) {
								throw cflib::CFLibRuntimeException( CLASS_NAME,
									S_ProcName,
									"Could not resolve destination narrowed relation " + srcRelationNarrowed->getRequiredName() + " in narrowed table " + dstRelationNarrowedTable->getObjName() + " for relation " + srcRelation->getObjName() );
							}
						}

						editDstRelation = dynamic_cast<cfbam::ICFBamRelationEditObj*>( dstRelation->beginEdit() );
						editDstRelation->setOptionalLookupNarrowed( dstRelationNarrowed );
						editDstRelation->update();
						editDstRelation = NULL;
					}
					else {
						dstRelation = NULL;
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editDstRelation != NULL ) {
			editDstRelation->endEdit();
			editDstRelation = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableTableChains( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableTableChains" );
		cfbam::ICFBamTableTableObj* dstTableTableObj = dst->getSchema()->getTableTableObj();
		std::vector<cfbam::ICFBamTableObj*> srcTables = src->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
			srcTable = *iterSrcTable;
			origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
			if( origDstTable == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve destination table " + srcTable->getRequiredName() );
			}
			importMergeTableChains( origDstTable, srcTable );
		}
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeTableChains( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamTableObj* srcTable ) {
		static const std::string S_ProcName( "importMergeTableChains" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamRelationTableObj* dstRelationTableObj = NULL;
		cfbam::ICFBamSchemaDefObj* dstSchemaDef = NULL;
		cfbam::ICFBamSchemaDefObj* defSchema = NULL;
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		cfbam::ICFBamChainTableObj* dstChainTableObj = NULL;
		cfbam::ICFBamChainObj* srcChain = NULL;
		cfbam::ICFBamTableObj* srcPrevTable = NULL;
		cfbam::ICFBamRelationObj* srcPrevRelation = NULL;
		cfbam::ICFBamTableObj* dstPrevTable = NULL;
		cfbam::ICFBamRelationObj* dstPrevRelation = NULL;
		cfbam::ICFBamTableObj* srcNextTable = NULL;
		cfbam::ICFBamRelationObj* srcNextRelation = NULL;
		cfbam::ICFBamTableObj* dstNextTable = NULL;
		cfbam::ICFBamRelationObj* dstNextRelation = NULL;
		cfbam::ICFBamChainObj* origDstChain = NULL;
		cfbam::ICFBamChainEditObj* editDstChain = NULL;
		cfsec::ICFSecTenantObj* dstTenant = NULL;

		std::vector<cfbam::ICFBamChainObj*> srcChainList = srcTable->getOptionalComponentsChains();
		try {
			dstRelationTableObj = origDstTable->getSchema()->getRelationTableObj();
			std::string tableName = srcTable->getRequiredName();
			dstSchemaDef = origDstTable->getRequiredContainerSchemaDef();
			defSchema = srcTable->getRequiredContainerSchemaDef();
			dstTableTableObj = origDstTable->getSchema()->getTableTableObj();
			dstChainTableObj = origDstTable->getSchema()->getChainTableObj();
			dstTenant = origDstTable->getRequiredOwnerTenant();

			for( auto iterSrcChain = srcChainList.begin(); iterSrcChain != srcChainList.end(); iterSrcChain ++ ) {

				srcChain = *iterSrcChain;

				origDstChain = dstChainTableObj->readChainByUNameIdx( origDstTable->getRequiredTenantId(),
					origDstTable->getRequiredId(),
					srcChain->getRequiredName() );
				if( origDstChain == NULL ) {
					origDstChain = dstChainTableObj->newInstance();
					editDstChain = dynamic_cast<cfbam::ICFBamChainEditObj*>( origDstChain->beginEdit() );

					srcPrevRelation = srcChain->getRequiredLookupPrevRel();
					srcPrevTable = srcPrevRelation->getRequiredContainerFromTable();
					dstPrevTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
						origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
						srcPrevTable->getRequiredName() );
					dstPrevRelation = dstRelationTableObj->readRelationByUNameIdx( dstPrevTable->getRequiredTenantId(),
						dstPrevTable->getRequiredId(),
						srcPrevRelation->getRequiredName() );

					srcNextRelation = srcChain->getRequiredLookupNextRel();
					srcNextTable = srcNextRelation->getRequiredContainerFromTable();
					dstNextTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
						origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
						srcNextTable->getRequiredName() );
					dstNextRelation = dstRelationTableObj->readRelationByUNameIdx( dstNextTable->getRequiredTenantId(),
						dstNextTable->getRequiredId(),
						srcNextRelation->getRequiredName() );

					editDstChain->setRequiredOwnerTenant( dstTenant );
					editDstChain->setRequiredContainerTable( origDstTable );
					editDstChain->setRequiredLookupPrevRel( dstPrevRelation );
					editDstChain->setRequiredLookupNextRel( dstNextRelation );
					editDstChain->setRequiredName( srcChain->getRequiredName() );
					if( srcChain->isOptionalDescriptionNull() ) {
						editDstChain->setOptionalDescriptionNull();
					}
					else {
						editDstChain->setOptionalDescriptionValue( srcChain->getOptionalDescriptionValue() );
					}
					if( srcChain->isOptionalLabelNull() ) {
						editDstChain->setOptionalLabelNull();
					}
					else {
						editDstChain->setOptionalLabelValue( srcChain->getOptionalLabelValue() );
					}
					if( srcChain->isOptionalShortDescriptionNull() ) {
						editDstChain->setOptionalShortDescriptionNull();
					}
					else {
						editDstChain->setOptionalShortDescriptionValue( srcChain->getOptionalShortDescriptionValue() );
					}
					if( srcChain->isOptionalShortNameNull() ) {
						editDstChain->setOptionalShortNameNull();
					}
					else {
						editDstChain->setOptionalShortNameValue( srcChain->getOptionalShortNameValue() );
					}
					editDstChain->setOptionalLookupDefSchema( defSchema );
					origDstChain = dynamic_cast<cfbam::ICFBamChainObj*>( editDstChain->create() );
					editDstChain = NULL;
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editDstChain != NULL ) {
			editDstChain->endEdit();
			editDstChain = NULL;
		}

		if( origDstChain != NULL ) {
			if( origDstChain->getIsNew() ) {
				delete origDstChain;
			}
			origDstChain = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableRelationPopDeps( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableRelationPopDeps" );
		cfbam::ICFBamTableTableObj* dstTableTableObj = dst->getSchema()->getTableTableObj();
		std::vector<cfbam::ICFBamTableObj*> srcTables = src->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		cfbam::ICFBamRelationObj* srcRelation = NULL;
		std::vector<cfbam::ICFBamRelationObj*> componentRelations;

		for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
			srcTable = *iterSrcTable;
			origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
			if( origDstTable == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve destination table " + srcTable->getRequiredName() );
			}

			componentRelations = srcTable->getOptionalComponentsRelation();
			for( auto iterSrcRelation = componentRelations.begin(); iterSrcRelation != componentRelations.end(); iterSrcRelation ++ ) {
				srcRelation = *iterSrcRelation;
				importMergeRelationPopDeps( origDstTable, srcRelation );
			}
		}
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeRelationPopDeps( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamRelationObj* srcRelation ) {
		static const std::string S_ProcName( "importMergeRelationPopDeps" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaDefObj* srcSchema = NULL;
		cfbam::ICFBamRelationTableObj* dstRelationTableObj = NULL;
		cfbam::ICFBamRelationObj* origDstRelation = NULL;
		cfbam::ICFBamSchemaDefObj* dstSchemaDef = NULL;
		cfbam::ICFBamSchemaDefObj* defSchema = NULL;
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		cfbam::ICFBamPopTopDepTableObj* dstPopTopDepTableObj = NULL;
		cfbam::ICFBamPopSubDep1TableObj* dstPopSubDep1TableObj = NULL;
		cfbam::ICFBamPopSubDep2TableObj* dstPopSubDep2TableObj = NULL;
		cfbam::ICFBamPopSubDep3TableObj* dstPopSubDep3TableObj = NULL;
		cfbam::ICFBamPopTopDepObj* srcPopTopDep = NULL;
		cfbam::ICFBamPopSubDep1Obj* srcPopSubDep1 = NULL;
		cfbam::ICFBamPopSubDep2Obj* srcPopSubDep2 = NULL;
		cfbam::ICFBamPopSubDep3Obj* srcPopSubDep3 = NULL;
		cfsec::ICFSecTenantObj* dstTenant = NULL;
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* dstTable = NULL;
		cfbam::ICFBamRelationObj* dstRelation = NULL;
		cfbam::ICFBamPopTopDepObj* origDstPopTopDep = NULL;
		cfbam::ICFBamPopTopDepEditObj* editDstPopTopDep = NULL;
		cfbam::ICFBamPopSubDep1Obj* origDstPopSubDep1 = NULL;
		cfbam::ICFBamPopSubDep1EditObj* editDstPopSubDep1 = NULL;
		cfbam::ICFBamPopSubDep2Obj* origDstPopSubDep2 = NULL;
		cfbam::ICFBamPopSubDep2EditObj* editDstPopSubDep2 = NULL;
		cfbam::ICFBamPopSubDep3Obj* origDstPopSubDep3 = NULL;
		cfbam::ICFBamPopSubDep3EditObj* editDstPopSubDep3 = NULL;
		try {
			srcSchema = srcRelation->getOptionalLookupDefSchema();
			if( srcSchema == NULL ) {
				srcSchema = srcRelation->getSchemaDef();
			}
			dstRelationTableObj = origDstTable->getSchema()->getRelationTableObj();
			std::string relationName = srcRelation->getRequiredName();
			origDstRelation = dstRelationTableObj->readRelationByUNameIdx( origDstTable->getRequiredTenantId(),
				origDstTable->getRequiredId(),
				relationName );

			dstSchemaDef = origDstTable->getRequiredContainerSchemaDef();
			defSchema = srcRelation->getOptionalLookupDefSchema();
			if( defSchema == NULL ) {
				defSchema = srcRelation->getRequiredContainerFromTable()->getRequiredContainerSchemaDef();
			}

			dstTableTableObj = origDstTable->getSchema()->getTableTableObj();
			dstPopTopDepTableObj = origDstTable->getSchema()->getPopTopDepTableObj();
			dstPopSubDep1TableObj = origDstTable->getSchema()->getPopSubDep1TableObj();
			dstPopSubDep2TableObj = origDstTable->getSchema()->getPopSubDep2TableObj();
			dstPopSubDep3TableObj = origDstTable->getSchema()->getPopSubDep3TableObj();
			srcPopTopDep = NULL;
			srcPopSubDep1 = NULL;
			srcPopSubDep2 = NULL;
			srcPopSubDep3 = NULL;
			dstTenant = origDstTable->getRequiredOwnerTenant();

			std::vector<cfbam::ICFBamPopTopDepObj*> srcPopTopDepMap = srcRelation->getOptionalComponentsPopDep();
			auto iterSrcPopTopDep = srcPopTopDepMap.begin();
			if( iterSrcPopTopDep != srcPopTopDepMap.end() ) {
				srcPopTopDep = *iterSrcPopTopDep;
				std::vector<cfbam::ICFBamPopSubDep1Obj*> srcPopSubDep1Map = srcPopTopDep->getOptionalComponentsPopDep();
				auto iterSrcPopSubDep1 = srcPopSubDep1Map.begin();
				if( iterSrcPopSubDep1 != srcPopSubDep1Map.end() ) {
					srcPopSubDep1 = *iterSrcPopSubDep1;
					std::vector<cfbam::ICFBamPopSubDep2Obj*> srcPopSubDep2Map = srcPopSubDep1->getOptionalComponentsPopDep();
					auto iterSrcPopSubDep2 = srcPopSubDep2Map.begin();
					if( iterSrcPopSubDep2 != srcPopSubDep2Map.end() ) {
						srcPopSubDep2 = *iterSrcPopSubDep2;
						std::vector<cfbam::ICFBamPopSubDep3Obj*> srcPopSubDep3Map = srcPopSubDep2->getOptionalComponentsPopDep();
						auto iterSrcPopSubDep3 = srcPopSubDep3Map.begin();
						if( iterSrcPopSubDep3 != srcPopSubDep3Map.end() ) {
							srcPopSubDep3 = *iterSrcPopSubDep3;
						}
					}
				}
			}

			if( srcPopTopDep != NULL ) {
				origDstPopTopDep = dstPopTopDepTableObj->readPopTopDepByUNameIdx( origDstRelation->getRequiredTenantId(),
					origDstRelation->getRequiredId(),
					srcPopTopDep->getRequiredName() );
				if( origDstPopTopDep == NULL ) {

					srcRelation = srcPopTopDep->getRequiredLookupRelation();
					srcTable = srcRelation->getRequiredContainerFromTable();
					dstTable = dstTableTableObj->readTableByUNameIdx( dstSchemaDef->getRequiredTenantId(),
						dstSchemaDef->getRequiredId(),
						srcTable->getRequiredName() );
					dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
						dstTable->getRequiredId(),
						srcRelation->getRequiredName() );

					origDstPopTopDep = dstPopTopDepTableObj->newInstance();
					editDstPopTopDep = dynamic_cast<cfbam::ICFBamPopTopDepEditObj*>( origDstPopTopDep->beginEdit() );
					editDstPopTopDep->setRequiredOwnerTenant( dstTenant );
					editDstPopTopDep->setRequiredContainerContRelation( origDstRelation );
					editDstPopTopDep->setRequiredLookupRelation( dstRelation );
					editDstPopTopDep->setRequiredName( srcPopTopDep->getRequiredName() );
					editDstPopTopDep->setOptionalLookupDefSchema( srcSchema );
					origDstPopTopDep = dynamic_cast<cfbam::ICFBamPopTopDepObj*>( editDstPopTopDep->create() );
					editDstPopTopDep = NULL;

					if( srcPopSubDep1 != NULL ) {
						srcRelation = srcPopSubDep1->getRequiredLookupRelation();
						srcTable = srcRelation->getRequiredContainerFromTable();
						dstTable = dstTableTableObj->readTableByUNameIdx( dstSchemaDef->getRequiredTenantId(),
							dstSchemaDef->getRequiredId(),
							srcTable->getRequiredName() );
						dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
							dstTable->getRequiredId(),
							srcRelation->getRequiredName() );

						origDstPopSubDep1 = dstPopSubDep1TableObj->newInstance();
						editDstPopSubDep1 = dynamic_cast<cfbam::ICFBamPopSubDep1EditObj*>( origDstPopSubDep1->beginEdit() );
						editDstPopSubDep1->setRequiredOwnerTenant( dstTenant );
						editDstPopSubDep1->setRequiredContainerContPopTopDep( origDstPopTopDep );
						editDstPopSubDep1->setRequiredLookupRelation( dstRelation );
						editDstPopSubDep1->setRequiredName( srcPopSubDep1->getRequiredName() );
						editDstPopSubDep1->setOptionalLookupDefSchema( srcSchema );
						origDstPopSubDep1 = dynamic_cast<cfbam::ICFBamPopSubDep1Obj*>( editDstPopSubDep1->create() );
						editDstPopSubDep1 = NULL;

						if( srcPopSubDep2 != NULL ) {
							srcRelation = srcPopSubDep2->getRequiredLookupRelation();
							srcTable = srcRelation->getRequiredContainerFromTable();
							dstTable = dstTableTableObj->readTableByUNameIdx( dstSchemaDef->getRequiredTenantId(),
								dstSchemaDef->getRequiredId(),
								srcTable->getRequiredName() );
							dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
								dstTable->getRequiredId(),
								srcRelation->getRequiredName() );

							origDstPopSubDep2 = dstPopSubDep2TableObj->newInstance();
							editDstPopSubDep2 = dynamic_cast<cfbam::ICFBamPopSubDep2EditObj*>( origDstPopSubDep2->beginEdit() );
							editDstPopSubDep2->setRequiredOwnerTenant( dstTenant );
							editDstPopSubDep2->setRequiredContainerPopSubDep1( origDstPopSubDep1 );
							editDstPopSubDep2->setRequiredLookupRelation( dstRelation );
							editDstPopSubDep2->setRequiredName( srcPopSubDep2->getRequiredName() );
							editDstPopSubDep2->setOptionalLookupDefSchema( srcSchema );
							origDstPopSubDep2 = dynamic_cast<cfbam::ICFBamPopSubDep2Obj*>( editDstPopSubDep2->create() );
							editDstPopSubDep2 = NULL;

							if( srcPopSubDep3 != NULL ) {
								srcRelation = srcPopSubDep3->getRequiredLookupRelation();
								srcTable = srcRelation->getRequiredContainerFromTable();
								dstTable = dstTableTableObj->readTableByUNameIdx( dstSchemaDef->getRequiredTenantId(),
									dstSchemaDef->getRequiredId(),
									srcTable->getRequiredName() );
								dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
									dstTable->getRequiredId(),
									srcRelation->getRequiredName() );

								origDstPopSubDep3 = dstPopSubDep3TableObj->newInstance();
								editDstPopSubDep3 = dynamic_cast<cfbam::ICFBamPopSubDep3EditObj*>( origDstPopSubDep3->beginEdit() );
								editDstPopSubDep3->setRequiredOwnerTenant( dstTenant );
								editDstPopSubDep3->setRequiredContainerPopSubDep2( origDstPopSubDep2 );
								editDstPopSubDep3->setRequiredLookupRelation( dstRelation );
								editDstPopSubDep3->setRequiredName( srcPopSubDep3->getRequiredName() );
								editDstPopSubDep3->setOptionalLookupDefSchema( srcSchema );
								origDstPopSubDep3 = dynamic_cast<cfbam::ICFBamPopSubDep3Obj*>( editDstPopSubDep3->create() );
								editDstPopSubDep3 = NULL;
							}
						}
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editDstPopSubDep3 != NULL ) {
			editDstPopSubDep3->endEdit();
			editDstPopSubDep3 = NULL;
		}

		if( origDstPopSubDep3 != NULL ) {
			if( origDstPopSubDep3->getIsNew() ) {
				delete origDstPopSubDep3;
			}
			origDstPopSubDep3 = NULL;
		}

		if( editDstPopSubDep2 != NULL ) {
			editDstPopSubDep2->endEdit();
			editDstPopSubDep2 = NULL;
		}

		if( origDstPopSubDep2 != NULL ) {
			if( origDstPopSubDep2->getIsNew() ) {
				delete origDstPopSubDep2;
			}
			origDstPopSubDep2 = NULL;
		}

		if( editDstPopSubDep1 != NULL ) {
			editDstPopSubDep1->endEdit();
			editDstPopSubDep1 = NULL;
		}

		if( origDstPopSubDep1 != NULL ) {
			if( origDstPopSubDep1->getIsNew() ) {
				delete origDstPopSubDep1;
			}
			origDstPopSubDep1 = NULL;
		}

		if( editDstPopTopDep != NULL ) {
			editDstPopTopDep->endEdit();
			editDstPopTopDep = NULL;
		}

		if( origDstPopTopDep != NULL ) {
			if( origDstPopTopDep->getIsNew() ) {
				delete origDstPopTopDep;
			}
			origDstPopTopDep = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableTableClearDeps( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableTableClearDeps" );
		cfbam::ICFBamTableTableObj* dstTableTableObj = dst->getSchema()->getTableTableObj();
		std::vector<cfbam::ICFBamTableObj*> srcTables = src->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* srcTable;
		cfbam::ICFBamTableObj* origDstTable;
		for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
			srcTable = *iterSrcTable;
			origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
			if( origDstTable == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve destination table " + srcTable->getRequiredName() );
			}
			importMergeTableClearDeps( origDstTable, srcTable );
		}
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeTableClearDeps( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamTableObj* srcTable ) {
		static const std::string S_ProcName( "importMergeTableClearDeps" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaDefObj* srcSchema = NULL;
		cfbam::ICFBamRelationTableObj* dstRelationTableObj = NULL;
		cfbam::ICFBamSchemaDefObj* dstSchemaDef = NULL;
		cfbam::ICFBamSchemaDefObj* defSchema = NULL;
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		cfbam::ICFBamClearTopDepTableObj* dstClearTopDepTableObj = NULL;
		cfbam::ICFBamClearSubDep1TableObj* dstClearSubDep1TableObj = NULL;
		cfbam::ICFBamClearSubDep2TableObj* dstClearSubDep2TableObj = NULL;
		cfbam::ICFBamClearSubDep3TableObj* dstClearSubDep3TableObj = NULL;
		cfbam::ICFBamClearTopDepObj* srcClearTopDep = NULL;
		cfbam::ICFBamClearSubDep1Obj* srcClearSubDep1 = NULL;
		cfbam::ICFBamClearSubDep2Obj* srcClearSubDep2 = NULL;
		cfbam::ICFBamClearSubDep3Obj* srcClearSubDep3 = NULL;
		std::vector<cfbam::ICFBamClearSubDep1Obj*> srcClearSubDep1Map;
		std::vector<cfbam::ICFBamClearSubDep2Obj*> srcClearSubDep2Map;
		std::vector<cfbam::ICFBamClearSubDep3Obj*> srcClearSubDep3Map;
		cfbam::ICFBamRelationObj* srcRelation = NULL;
		cfbam::ICFBamTableObj* dstTable = NULL;
		cfbam::ICFBamRelationObj* dstRelation = NULL;
		cfbam::ICFBamClearTopDepObj* origDstClearTopDep = NULL;
		cfbam::ICFBamClearTopDepEditObj* editDstClearTopDep = NULL;
		cfbam::ICFBamClearSubDep1Obj* origDstClearSubDep1 = NULL;
		cfbam::ICFBamClearSubDep1EditObj* editDstClearSubDep1 = NULL;
		cfbam::ICFBamClearSubDep2Obj* origDstClearSubDep2 = NULL;
		cfbam::ICFBamClearSubDep2EditObj* editDstClearSubDep2 = NULL;
		cfbam::ICFBamClearSubDep3Obj* origDstClearSubDep3 = NULL;
		cfbam::ICFBamClearSubDep3EditObj* editDstClearSubDep3 = NULL;
		cfsec::ICFSecTenantObj* dstTenant = NULL;
		try {

			dstTenant = origDstTable->getRequiredOwnerTenant();
			dstRelationTableObj = origDstTable->getSchema()->getRelationTableObj();
			std::string tableName = srcTable->getRequiredName();
			dstSchemaDef = origDstTable->getRequiredContainerSchemaDef();
			defSchema = srcTable->getRequiredContainerSchemaDef();
			dstTableTableObj = origDstTable->getSchema()->getTableTableObj();
			dstClearTopDepTableObj = origDstTable->getSchema()->getClearTopDepTableObj();
			dstClearSubDep1TableObj = origDstTable->getSchema()->getClearSubDep1TableObj();
			dstClearSubDep2TableObj = origDstTable->getSchema()->getClearSubDep2TableObj();
			dstClearSubDep3TableObj = origDstTable->getSchema()->getClearSubDep3TableObj();
			std::vector<cfbam::ICFBamClearTopDepObj*> srcClearTopDepMap = srcTable->getOptionalComponentsClearDep();

			for( auto iterSrcClearTopDep = srcClearTopDepMap.begin(); iterSrcClearTopDep != srcClearTopDepMap.end(); iterSrcClearTopDep ++ ) {

				srcClearTopDep = *iterSrcClearTopDep;
				srcClearSubDep1 = NULL;
				srcClearSubDep2 = NULL;
				srcClearSubDep3 = NULL;

				srcClearSubDep1Map = srcClearTopDep->getOptionalComponentsClearDep();
				auto iterSrcClearSubDep1 = srcClearSubDep1Map.begin();
				if( iterSrcClearSubDep1 != srcClearSubDep1Map.end() ) {
					srcClearSubDep1 = *iterSrcClearSubDep1;
					srcClearSubDep2Map = srcClearSubDep1->getOptionalComponentsClearDep();
					auto iterSrcClearSubDep2 = srcClearSubDep2Map.begin();
					if( iterSrcClearSubDep2 != srcClearSubDep2Map.end() ) {
						srcClearSubDep2 = *iterSrcClearSubDep2;
						srcClearSubDep3Map = srcClearSubDep2->getOptionalComponentsClearDep();
						auto iterSrcClearSubDep3 = srcClearSubDep3Map.begin();
						if( iterSrcClearSubDep3 != srcClearSubDep3Map.end() ) {
							srcClearSubDep3 = *iterSrcClearSubDep3;
						}
					}
				}

				srcSchema = srcClearTopDep->getOptionalLookupDefSchema();
				if( srcSchema == NULL ) {
					srcSchema = srcClearTopDep->getRequiredContainerTable()->getRequiredContainerSchemaDef();
				}

				origDstClearTopDep = dstClearTopDepTableObj->readClearTopDepByUNameIdx( origDstTable->getRequiredTenantId(),
					origDstTable->getRequiredId(),
					srcClearTopDep->getRequiredName() );
				if( origDstClearTopDep == NULL ) {
					origDstClearTopDep = dstClearTopDepTableObj->newInstance();
					editDstClearTopDep = dynamic_cast<cfbam::ICFBamClearTopDepEditObj*>( origDstClearTopDep->beginEdit() );

					srcRelation = srcClearTopDep->getRequiredLookupRelation();
					srcTable = srcRelation->getRequiredContainerFromTable();
					dstTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
						origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
						srcTable->getRequiredName() );
					dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
						dstTable->getRequiredId(),
						srcRelation->getRequiredName() );
					editDstClearTopDep->setRequiredOwnerTenant( dstTenant );
					editDstClearTopDep->setRequiredContainerTable( origDstTable );
					editDstClearTopDep->setRequiredLookupRelation( dstRelation );
					editDstClearTopDep->setRequiredName( srcClearTopDep->getRequiredName() );
					editDstClearTopDep->setOptionalLookupDefSchema( srcSchema );
					origDstClearTopDep = dynamic_cast<cfbam::ICFBamClearTopDepObj*>( editDstClearTopDep->create() );
					editDstClearTopDep = NULL;

					if( srcClearSubDep1 != NULL ) {
						srcRelation = srcClearSubDep1->getRequiredLookupRelation();
						srcTable = srcRelation->getRequiredContainerFromTable();
						dstTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
							origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
							srcTable->getRequiredName() );
						dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
							dstTable->getRequiredId(),
							srcRelation->getRequiredName() );

						origDstClearSubDep1 = dstClearSubDep1TableObj->newInstance();
						editDstClearSubDep1 = dynamic_cast<cfbam::ICFBamClearSubDep1EditObj*>( origDstClearSubDep1->beginEdit() );
						editDstClearSubDep1->setRequiredOwnerTenant( dstTenant );
						editDstClearSubDep1->setRequiredContainerClearTopDep( origDstClearTopDep );
						editDstClearSubDep1->setRequiredLookupRelation( dstRelation );
						editDstClearSubDep1->setRequiredName( srcClearSubDep1->getRequiredName() );
						editDstClearSubDep1->setOptionalLookupDefSchema( srcSchema );
						origDstClearSubDep1 = dynamic_cast<cfbam::ICFBamClearSubDep1Obj*>( editDstClearSubDep1->create() );
						editDstClearSubDep1 = NULL;

						if( srcClearSubDep2 != NULL ) {

							srcRelation = srcClearSubDep2->getRequiredLookupRelation();
							srcTable = srcRelation->getRequiredContainerFromTable();
							dstTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
								origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
								srcTable->getRequiredName() );
							dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
								dstTable->getRequiredId(),
								srcRelation->getRequiredName() );

							origDstClearSubDep2 = dstClearSubDep2TableObj->newInstance();
							editDstClearSubDep2 = dynamic_cast<cfbam::ICFBamClearSubDep2EditObj*>( origDstClearSubDep2->beginEdit() );
							editDstClearSubDep2->setRequiredOwnerTenant( dstTenant );
							editDstClearSubDep2->setRequiredContainerClearSubDep1( origDstClearSubDep1 );
							editDstClearSubDep2->setRequiredLookupRelation( dstRelation );
							editDstClearSubDep2->setRequiredName( srcClearSubDep2->getRequiredName() );
							editDstClearSubDep2->setOptionalLookupDefSchema( srcSchema );
							origDstClearSubDep2 = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( editDstClearSubDep2->create() );
							editDstClearSubDep2 = NULL;

							if( srcClearSubDep3 != NULL ) {
								srcRelation = srcClearTopDep->getRequiredLookupRelation();
								srcTable = srcRelation->getRequiredContainerFromTable();
								dstTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
									origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
									srcTable->getRequiredName() );
								dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
									dstTable->getRequiredId(),
									srcRelation->getRequiredName() );
								origDstClearSubDep3 = dstClearSubDep3TableObj->newInstance();
								editDstClearSubDep3 = dynamic_cast<cfbam::ICFBamClearSubDep3EditObj*>( origDstClearSubDep3->beginEdit() );
								editDstClearSubDep3->setRequiredOwnerTenant( dstTenant );
								editDstClearSubDep3->setRequiredContainerClearSubDep2( origDstClearSubDep2 );
								editDstClearSubDep3->setRequiredLookupRelation( dstRelation );
								editDstClearSubDep3->setRequiredName( srcClearSubDep3->getRequiredName() );
								editDstClearSubDep3->setOptionalLookupDefSchema( srcSchema );
								origDstClearSubDep3 = dynamic_cast<cfbam::ICFBamClearSubDep3Obj*>( editDstClearSubDep3->create() );
								editDstClearSubDep3 = NULL;
							}
						}
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editDstClearSubDep3 != NULL ) {
			editDstClearSubDep3->endEdit();
			editDstClearSubDep3 = NULL;
		}

		if( origDstClearSubDep3 != NULL ) {
			if( origDstClearSubDep3->getIsNew() ) {
				delete origDstClearSubDep3;
			}
			origDstClearSubDep3 = NULL;
		}

		if( editDstClearSubDep2 != NULL ) {
			editDstClearSubDep2->endEdit();
			editDstClearSubDep2 = NULL;
		}

		if( origDstClearSubDep2 != NULL ) {
			if( origDstClearSubDep2->getIsNew() ) {
				delete origDstClearSubDep2;
			}
			origDstClearSubDep2 = NULL;
		}

		if( editDstClearSubDep1 != NULL ) {
			editDstClearSubDep1->endEdit();
			editDstClearSubDep1 = NULL;
		}

		if( origDstClearSubDep1 != NULL ) {
			if( origDstClearSubDep1->getIsNew() ) {
				delete origDstClearSubDep1;
			}
			origDstClearSubDep1 = NULL;
		}

		if( editDstClearTopDep != NULL ) {
			editDstClearTopDep->endEdit();
			editDstClearTopDep = NULL;
		}

		if( origDstClearTopDep != NULL ) {
			if( origDstClearTopDep->getIsNew() ) {
				delete origDstClearTopDep;
			}
			origDstClearTopDep = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableTableDelDeps( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableTableDelDeps" );
		cfbam::ICFBamTableTableObj* dstTableTableObj = dst->getSchema()->getTableTableObj();
		std::vector<cfbam::ICFBamTableObj*> srcTables = src->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* srcTable;
		cfbam::ICFBamTableObj* origDstTable;
		for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
			srcTable = *iterSrcTable;
			origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
			if( origDstTable == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve destination table " + srcTable->getRequiredName() );
			}
			importMergeTableDelDeps( origDstTable, srcTable );
		}
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeTableDelDeps( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamTableObj* srcTable ) {
		static const std::string S_ProcName( "importMergeTableDelDeps" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamRelationTableObj* dstRelationTableObj = NULL;
		cfbam::ICFBamSchemaDefObj* dstSchemaDef = NULL;
		cfbam::ICFBamSchemaDefObj* defSchema = NULL;
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		cfbam::ICFBamDelTopDepTableObj* dstDelTopDepTableObj = NULL;
		cfbam::ICFBamDelSubDep1TableObj* dstDelSubDep1TableObj = NULL;
		cfbam::ICFBamDelSubDep2TableObj* dstDelSubDep2TableObj = NULL;
		cfbam::ICFBamDelSubDep3TableObj* dstDelSubDep3TableObj = NULL;
		cfbam::ICFBamDelTopDepObj* srcDelTopDep = NULL;
		cfbam::ICFBamDelSubDep1Obj* srcDelSubDep1 = NULL;
		cfbam::ICFBamDelSubDep2Obj* srcDelSubDep2 = NULL;
		cfbam::ICFBamDelSubDep3Obj* srcDelSubDep3 = NULL;
		std::vector<cfbam::ICFBamDelSubDep1Obj*> srcDelSubDep1Map;
		std::vector<cfbam::ICFBamDelSubDep2Obj*> srcDelSubDep2Map;
		std::vector<cfbam::ICFBamDelSubDep3Obj*> srcDelSubDep3Map;
		cfbam::ICFBamRelationObj* srcRelation = NULL;
		cfbam::ICFBamTableObj* dstTable = NULL;
		cfbam::ICFBamRelationObj* dstRelation = NULL;
		cfbam::ICFBamDelTopDepObj* origDstDelTopDep = NULL;
		cfbam::ICFBamDelTopDepEditObj* editDstDelTopDep = NULL;
		cfbam::ICFBamDelSubDep1Obj* origDstDelSubDep1 = NULL;
		cfbam::ICFBamDelSubDep1EditObj* editDstDelSubDep1 = NULL;
		cfbam::ICFBamDelSubDep2Obj* origDstDelSubDep2 = NULL;
		cfbam::ICFBamDelSubDep2EditObj* editDstDelSubDep2 = NULL;
		cfbam::ICFBamDelSubDep3Obj* origDstDelSubDep3 = NULL;
		cfbam::ICFBamDelSubDep3EditObj* editDstDelSubDep3 = NULL;
		cfsec::ICFSecTenantObj* dstTenant = NULL;
		cfbam::ICFBamSchemaDefObj* srcSchema = NULL;
		try {
			dstRelationTableObj = origDstTable->getSchema()->getRelationTableObj();
			std::string tableName = srcTable->getRequiredName();
			dstSchemaDef = origDstTable->getRequiredContainerSchemaDef();
			defSchema = srcTable->getRequiredContainerSchemaDef();
			dstTableTableObj = origDstTable->getSchema()->getTableTableObj();
			dstDelTopDepTableObj = origDstTable->getSchema()->getDelTopDepTableObj();
			dstDelSubDep1TableObj = origDstTable->getSchema()->getDelSubDep1TableObj();
			dstDelSubDep2TableObj = origDstTable->getSchema()->getDelSubDep2TableObj();
			dstDelSubDep3TableObj = origDstTable->getSchema()->getDelSubDep3TableObj();
			srcDelTopDep = NULL;
			srcDelSubDep1 = NULL;
			srcDelSubDep2 = NULL;
			srcDelSubDep3 = NULL;
			dstTenant = origDstTable->getRequiredOwnerTenant();

			std::vector<cfbam::ICFBamDelTopDepObj*> srcDelTopDepMap = srcTable->getOptionalComponentsDelDep();
			for( auto iterSrcDelTopDep = srcDelTopDepMap.begin(); iterSrcDelTopDep != srcDelTopDepMap.end(); iterSrcDelTopDep ++ ) {

				srcDelTopDep = *iterSrcDelTopDep;
				srcDelSubDep1 = NULL;
				srcDelSubDep2 = NULL;
				srcDelSubDep3 = NULL;

				srcDelSubDep1Map = srcDelTopDep->getOptionalComponentsDelDep();
				auto iterSrcDelSubDep1 = srcDelSubDep1Map.begin();
				if( iterSrcDelSubDep1 != srcDelSubDep1Map.end() ) {
					srcDelSubDep1 = *iterSrcDelSubDep1;
					srcDelSubDep2Map = srcDelSubDep1->getOptionalComponentsDelDep();
					auto iterSrcDelSubDep2 = srcDelSubDep2Map.begin();
					if( iterSrcDelSubDep2 != srcDelSubDep2Map.end() ) {
						srcDelSubDep2 = *iterSrcDelSubDep2;
						srcDelSubDep3Map = srcDelSubDep2->getOptionalComponentsDelDep();
						auto iterSrcDelSubDep3 = srcDelSubDep3Map.begin();
						if( iterSrcDelSubDep3 != srcDelSubDep3Map.end() ) {
							srcDelSubDep3 = *iterSrcDelSubDep3;
						}
					}
				}

				srcSchema = srcDelTopDep->getOptionalLookupDefSchema();
				if( srcSchema == NULL ) {
					srcSchema = srcDelTopDep->getRequiredContainerTable()->getRequiredContainerSchemaDef();
				}

				origDstDelTopDep = dstDelTopDepTableObj->readDelTopDepByUNameIdx( origDstTable->getRequiredTenantId(),
					origDstTable->getRequiredId(),
					srcDelTopDep->getRequiredName() );
				if( origDstDelTopDep == NULL ) {
					origDstDelTopDep = dstDelTopDepTableObj->newInstance();
					editDstDelTopDep = dynamic_cast<cfbam::ICFBamDelTopDepEditObj*>( origDstDelTopDep->beginEdit() );

					srcRelation = srcDelTopDep->getRequiredLookupRelation();
					srcTable = srcRelation->getRequiredContainerFromTable();
					dstTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
						origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
						srcTable->getRequiredName() );
					dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
						dstTable->getRequiredId(),
						srcRelation->getRequiredName() );
					editDstDelTopDep->setRequiredOwnerTenant( dstTenant );
					editDstDelTopDep->setRequiredContainerTable( origDstTable );
					editDstDelTopDep->setRequiredLookupRelation( dstRelation );
					editDstDelTopDep->setRequiredName( srcDelTopDep->getRequiredName() );
					editDstDelTopDep->setOptionalLookupDefSchema( srcSchema );
					origDstDelTopDep = dynamic_cast<cfbam::ICFBamDelTopDepObj*>( editDstDelTopDep->create() );
					editDstDelTopDep = NULL;

					if( srcDelSubDep1 != NULL ) {
						srcRelation = srcDelSubDep1->getRequiredLookupRelation();
						srcTable = srcRelation->getRequiredContainerFromTable();
						dstTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
							origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
							srcTable->getRequiredName() );
						dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
							dstTable->getRequiredId(),
							srcRelation->getRequiredName() );

						origDstDelSubDep1 = dstDelSubDep1TableObj->newInstance();
						editDstDelSubDep1 = dynamic_cast<cfbam::ICFBamDelSubDep1EditObj*>( origDstDelSubDep1->beginEdit() );
						editDstDelSubDep1->setRequiredOwnerTenant( dstTenant );
						editDstDelSubDep1->setRequiredContainerDelTopDep( origDstDelTopDep );
						editDstDelSubDep1->setRequiredLookupRelation( dstRelation );
						editDstDelSubDep1->setRequiredName( srcDelSubDep1->getRequiredName() );
						editDstDelSubDep1->setOptionalLookupDefSchema( srcSchema );
						origDstDelSubDep1 = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( editDstDelSubDep1->create() );
						editDstDelSubDep1 = NULL;

						if( srcDelSubDep2 != NULL ) {

							srcRelation = srcDelSubDep2->getRequiredLookupRelation();
							srcTable = srcRelation->getRequiredContainerFromTable();
							dstTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
								origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
								srcTable->getRequiredName() );
							dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
								dstTable->getRequiredId(),
								srcRelation->getRequiredName() );

							origDstDelSubDep2 = dstDelSubDep2TableObj->newInstance();
							editDstDelSubDep2 = dynamic_cast<cfbam::ICFBamDelSubDep2EditObj*>( origDstDelSubDep2->beginEdit() );
							editDstDelSubDep2->setRequiredOwnerTenant( dstTenant );
							editDstDelSubDep2->setRequiredContainerDelSubDep1( origDstDelSubDep1 );
							editDstDelSubDep2->setRequiredLookupRelation( dstRelation );
							editDstDelSubDep2->setRequiredName( srcDelSubDep2->getRequiredName() );
							editDstDelSubDep2->setOptionalLookupDefSchema( srcSchema );
							origDstDelSubDep2 = dynamic_cast<cfbam::ICFBamDelSubDep2Obj*>( editDstDelSubDep2->create() );
							editDstDelSubDep2 = NULL;

							if( srcDelSubDep3 != NULL ) {
								srcRelation = srcDelTopDep->getRequiredLookupRelation();
								srcTable = srcRelation->getRequiredContainerFromTable();
								dstTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredContainerSchemaDef()->getRequiredTenantId(),
									origDstTable->getRequiredContainerSchemaDef()->getRequiredId(),
									srcTable->getRequiredName() );
								dstRelation = dstRelationTableObj->readRelationByUNameIdx( dstTable->getRequiredTenantId(),
									dstTable->getRequiredId(),
									srcRelation->getRequiredName() );
								origDstDelSubDep3 = dstDelSubDep3TableObj->newInstance();
								editDstDelSubDep3 = dynamic_cast<cfbam::ICFBamDelSubDep3EditObj*>( origDstDelSubDep3->beginEdit() );
								editDstDelSubDep3->setRequiredOwnerTenant( dstTenant );
								editDstDelSubDep3->setRequiredContainerDelSubDep2( origDstDelSubDep2 );
								editDstDelSubDep3->setRequiredLookupRelation( dstRelation );
								editDstDelSubDep3->setRequiredName( srcDelSubDep3->getRequiredName() );
								editDstDelSubDep3->setOptionalLookupDefSchema( srcSchema );
								origDstDelSubDep3 = dynamic_cast<cfbam::ICFBamDelSubDep3Obj*>( editDstDelSubDep3->create() );
								editDstDelSubDep3 = NULL;
							}
						}
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editDstDelSubDep3 != NULL ) {
			editDstDelSubDep3->endEdit();
			editDstDelSubDep3 = NULL;
		}

		if( origDstDelSubDep3 != NULL ) {
			if( origDstDelSubDep3->getIsNew() ) {
				delete origDstDelSubDep3;
			}
			origDstDelSubDep3 = NULL;
		}

		if( editDstDelSubDep2 != NULL ) {
			editDstDelSubDep2->endEdit();
			editDstDelSubDep2 = NULL;
		}

		if( origDstDelSubDep2 != NULL ) {
			if( origDstDelSubDep2->getIsNew() ) {
				delete origDstDelSubDep2;
			}
			origDstDelSubDep2 = NULL;
		}

		if( editDstDelSubDep1 != NULL ) {
			editDstDelSubDep1->endEdit();
			editDstDelSubDep1 = NULL;
		}

		if( origDstDelSubDep1 != NULL ) {
			if( origDstDelSubDep1->getIsNew() ) {
				delete origDstDelSubDep1;
			}
			origDstDelSubDep1 = NULL;
		}

		if( editDstDelTopDep != NULL ) {
			editDstDelTopDep->endEdit();
			editDstDelTopDep = NULL;
		}

		if( origDstDelTopDep != NULL ) {
			if( origDstDelTopDep->getIsNew() ) {
				delete origDstDelTopDep;
			}
			origDstDelTopDep = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	void CFBamCustXmlLoaderSchemaRefHandler::importMergeSchemaTableServerMethods( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src ) {
		static const std::string S_ProcName( "importMergeSchemaTableServerMethods" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		std::vector<cfbam::ICFBamTableObj*> srcTables;
		cfbam::ICFBamTableObj* srcTable = NULL;
		cfbam::ICFBamTableObj* origDstTable = NULL;
		cfbam::ICFBamServerMethodObj* dstServerMethod = NULL;
		cfbam::ICFBamServerMethodObj* srcServerMethod = NULL;
		std::vector<cfbam::ICFBamServerMethodObj*> componentServerMethods;
		try {
			dstTableTableObj = dst->getSchema()->getTableTableObj();
			srcTables = src->getOptionalComponentsTables();

			for( auto iterSrcTable = srcTables.begin(); iterSrcTable != srcTables.end(); iterSrcTable ++ ) {
				srcTable = *iterSrcTable;
				origDstTable = dstTableTableObj->readTableByUNameIdx( dst->getRequiredTenantId(), dst->getRequiredId(), srcTable->getRequiredName() );
				if( origDstTable == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Could not resolve destination table " + srcTable->getRequiredName() );
				}

				componentServerMethods = srcTable->getOptionalComponentsServerMethods();
				for( auto iterSrcServerMethod = componentServerMethods.begin(); iterSrcServerMethod != componentServerMethods.end(); iterSrcServerMethod ++ ) {
					srcServerMethod = *iterSrcServerMethod;
					dstServerMethod = importMergeServerMethod( origDstTable, srcServerMethod );
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}

	cfbam::ICFBamServerMethodObj* CFBamCustXmlLoaderSchemaRefHandler::importMergeServerMethod( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamServerMethodObj* srcServerMethod ) {
		static const std::string S_ProcName( "importMergeServerMethod" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaDefObj* origDstSchemaDef = NULL;
		cfbam::ICFBamTableTableObj* dstTableTableObj = NULL;
		cfbam::ICFBamServerMethodTableObj* dstServerMethodTableObj = NULL;
		cfbam::ICFBamServerProcTableObj* dstServerProcTableObj = NULL;
		cfbam::ICFBamServerObjFuncTableObj* dstServerObjFuncTableObj = NULL;
		cfbam::ICFBamServerListFuncTableObj* dstServerListFuncTableObj = NULL;
		cfbam::ICFBamServerMethodObj* origDstServerMethod = NULL;
		cfbam::ICFBamServerMethodEditObj* editDstServerMethod = NULL;
		cfbam::ICFBamSchemaDefObj* defSchema = NULL;
		cfbam::ICFBamTableObj* srcRetTable = NULL;
		cfbam::ICFBamTableObj* dstRetTable = NULL;
		cfsec::ICFSecTenantObj* dstTenant = NULL;
		cfbam::ICFBamParamTableObj* dstParamTableObj = NULL;
		cfbam::ICFBamValueTableObj* dstValueTableObj = NULL;
		std::vector<cfbam::ICFBamParamObj*> srcParams;
		cfbam::ICFBamParamObj* dstParam = NULL;
		cfbam::ICFBamParamObj* srcParam = NULL;
		cfbam::ICFBamParamEditObj* dstEditParam = NULL;
		cfbam::ICFBamValueObj* dstLookupType = NULL;
		cfbam::ICFBamValueObj* srcLookupType = NULL;
		try {
			origDstSchemaDef = origDstTable->getRequiredContainerSchemaDef();
			dstTableTableObj = origDstTable->getSchema()->getTableTableObj();
			dstServerMethodTableObj = origDstTable->getSchema()->getServerMethodTableObj();
			dstServerProcTableObj = origDstTable->getSchema()->getServerProcTableObj();
			dstServerObjFuncTableObj = origDstTable->getSchema()->getServerObjFuncTableObj();
			dstServerListFuncTableObj = origDstTable->getSchema()->getServerListFuncTableObj();
			std::string serverMethodName = srcServerMethod->getRequiredName();
			origDstServerMethod = dstServerMethodTableObj->readServerMethodByUNameIdx( origDstTable->getRequiredTenantId(),
				origDstTable->getRequiredId(),
				serverMethodName );
			if( origDstServerMethod != NULL ) {
				return( origDstServerMethod );
			}

			defSchema = srcServerMethod->getOptionalLookupDefSchema();
			if( defSchema == NULL ) {
				defSchema = srcServerMethod->getRequiredContainerForTable()->getRequiredContainerSchemaDef();
			}

			if( srcServerMethod->implementsClassCode( cfbam::CFBamServerProcBuff::CLASS_CODE ) ) {
				origDstServerMethod = dstServerProcTableObj->newInstance();
			}
			else if( srcServerMethod->implementsClassCode( cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) ) {
				origDstServerMethod = dstServerObjFuncTableObj->newInstance();
			}
			else if( srcServerMethod->implementsClassCode( cfbam::CFBamServerListFuncBuff::CLASS_CODE ) ) {
				origDstServerMethod = dstServerListFuncTableObj->newInstance();
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					"srcServerMethod",
					srcServerMethod,
					"cfbam::ICFBamServerProcObj, cfbam::ICFBamServerObjFuncObj, cfbam::ICFBamServerListFuncObj" );
			}

			editDstServerMethod = dynamic_cast<cfbam::ICFBamServerMethodEditObj*>( origDstServerMethod->beginEdit() );
			editDstServerMethod->setRequiredOwnerTenant( origDstTable->getRequiredOwnerTenant() );
			editDstServerMethod->setRequiredContainerForTable( origDstTable );
			editDstServerMethod->setRequiredIsInstanceMethod( srcServerMethod->getRequiredIsInstanceMethod() );
			editDstServerMethod->setRequiredName( srcServerMethod->getRequiredName() );
			editDstServerMethod->setRequiredJMethodBody( srcServerMethod->getRequiredJMethodBody() );
			editDstServerMethod->setRequiredCppMethodBody( srcServerMethod->getRequiredCppMethodBody() );
			editDstServerMethod->setRequiredCsMethodBody( srcServerMethod->getRequiredCsMethodBody() );
			if( srcServerMethod->isOptionalDescriptionNull() ) {
				editDstServerMethod->setOptionalDescriptionNull();
			}
			else {
				editDstServerMethod->setOptionalDescriptionValue( srcServerMethod->getOptionalDescriptionValue() );
			}
			if( srcServerMethod->isOptionalLabelNull() ) {
				editDstServerMethod->setOptionalLabelNull();
			}
			else {
				editDstServerMethod->setOptionalLabelValue( srcServerMethod->getOptionalLabelValue() );
			}
			if( srcServerMethod->isOptionalShortDescriptionNull() ) {
				editDstServerMethod->setOptionalShortDescriptionNull();
			}
			else {
				editDstServerMethod->setOptionalShortDescriptionValue( srcServerMethod->getOptionalShortDescriptionValue() );
			}
			if( srcServerMethod->isOptionalShortNameNull() ) {
				editDstServerMethod->setOptionalShortNameNull();
			}
			else {
				editDstServerMethod->setOptionalShortNameValue( srcServerMethod->getOptionalShortNameValue() );
			}
			if( srcServerMethod->isOptionalSuffixNull() ) {
				editDstServerMethod->setOptionalSuffixNull();
			}
			else {
				editDstServerMethod->setOptionalSuffixValue( srcServerMethod->getOptionalSuffixValue() );
			}
			editDstServerMethod->setOptionalLookupDefSchema( defSchema );
			if( srcServerMethod->implementsClassCode( cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) ) {
				srcRetTable = (dynamic_cast<cfbam::ICFBamServerObjFuncObj*>( srcServerMethod) )->getOptionalLookupRetTable();
				dstRetTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredTenantId(),
					origDstTable->getRequiredSchemaDefId(),
					srcRetTable->getObjName() );
				if( dstRetTable == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Could not resolve dstRetTable " + srcRetTable->getRequiredName() + " for server object function" + srcServerMethod->getObjName() );
				}
				dynamic_cast<cfbam::ICFBamServerObjFuncEditObj*>( editDstServerMethod )->setOptionalLookupRetTable( dstRetTable );
			}
			else if( srcServerMethod->implementsClassCode( cfbam::CFBamServerListFuncBuff::CLASS_CODE ) ) {
				srcRetTable = (dynamic_cast<cfbam::ICFBamServerListFuncObj*>( srcServerMethod) )->getOptionalLookupRetTable();
				dstRetTable = dstTableTableObj->readTableByUNameIdx( origDstTable->getRequiredTenantId(),
					origDstTable->getRequiredSchemaDefId(),
					srcRetTable->getObjName() );
				if( dstRetTable == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Could not resolve dstRetTable " + srcRetTable->getRequiredName() + " for server list function " + srcServerMethod->getObjName() );
				}
				dynamic_cast<cfbam::ICFBamServerListFuncEditObj*>( editDstServerMethod )->setOptionalLookupRetTable( dstRetTable );
			}
			origDstServerMethod = dynamic_cast<cfbam::ICFBamServerMethodObj*>( editDstServerMethod->create() );
			editDstServerMethod = NULL;

			dstTenant = origDstServerMethod->getRequiredOwnerTenant();
			dstParamTableObj = origDstServerMethod->getSchema()->getParamTableObj();
			dstValueTableObj = origDstServerMethod->getSchema()->getValueTableObj();

			std::vector<cfbam::ICFBamParamObj*> srcParams;

			srcParams = srcServerMethod->getOptionalComponentsParams();
			for( auto iterSrcParam = srcParams.begin(); iterSrcParam != srcParams.end(); iterSrcParam ++ ) {
				srcParam = *iterSrcParam;
				srcLookupType = srcParam->getRequiredLookupType();
				dstLookupType = dstValueTableObj->readValueByUNameIdx( origDstTable->getRequiredTenantId(),
					origDstSchemaDef->getRequiredId(),
					srcLookupType->getRequiredName() );
				if( dstLookupType == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"dstLookupType( " + srcLookupType->getRequiredName() + " )" );
				}

				dstParam = dstParamTableObj->newInstance();
				dstEditParam = dynamic_cast<cfbam::ICFBamParamEditObj*>( dstParam->beginEdit() );
				dstEditParam->setRequiredOwnerTenant( dstTenant );
				dstEditParam->setRequiredContainerServerMeth( origDstServerMethod );
				dstEditParam->setRequiredLookupType( dstLookupType );
				dstEditParam->setRequiredName( srcParam->getRequiredName() );
				if( srcParam->isOptionalDescriptionNull() ) {
					dstEditParam->setOptionalDescriptionNull();
				}
				else {
					dstEditParam->setOptionalDescriptionValue( srcParam->getOptionalDescriptionValue() );
				}
				if( srcParam->isOptionalShortDescriptionNull() ) {
					dstEditParam->setOptionalShortDescriptionNull();
				}
				else {
					dstEditParam->setOptionalShortDescriptionValue( srcParam->getOptionalShortDescriptionValue() );
				}
				dstEditParam->setOptionalLookupDefSchema( defSchema );
				if( NULL == dstParamTableObj->readParamByUNameIdx( origDstServerMethod->getRequiredTenantId(),
					origDstServerMethod->getRequiredId(),
					srcParam->getRequiredName() ) )
				{
					dstParam = dynamic_cast<cfbam::ICFBamParamObj*>( dstEditParam->create() );
					dstEditParam = NULL;
				}
				else {
					dstEditParam->endEdit();
					dstEditParam = NULL;
					delete dstParam;
					dstParam = NULL;
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( dstEditParam != NULL ) {
			dstEditParam->endEdit();
			dstEditParam = NULL;
		}

		if( dstParam != NULL ) {
			if( dstParam->getIsNew() ) {
				delete dstParam;
			}
			dstParam = NULL;
		}

		if( editDstServerMethod != NULL ) {
			editDstServerMethod->endEdit();
			editDstServerMethod = NULL;
		}

		if( origDstServerMethod != NULL ) {
			if( origDstServerMethod->getIsNew() ) {
				delete origDstServerMethod;
			}
			origDstServerMethod = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( origDstServerMethod );
	}
}
