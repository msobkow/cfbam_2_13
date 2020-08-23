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
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoader.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderRelationHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamCustXmlLoaderRelationHandler::CLASS_NAME( "CFBamCustXmlLoaderRelationHandler" );
	const std::string CFBamCustXmlLoaderRelationHandler::S_True( "true" );
	const std::string CFBamCustXmlLoaderRelationHandler::S_False( "false" );
	const std::string CFBamCustXmlLoaderRelationHandler::S_Yes( "yes" );
	const std::string CFBamCustXmlLoaderRelationHandler::S_No( "no" );
	const std::string CFBamCustXmlLoaderRelationHandler::S_0( "0" );
	const std::string CFBamCustXmlLoaderRelationHandler::S_1( "1" );

	CFBamCustXmlLoaderRelationHandler::CFBamCustXmlLoaderRelationHandler( cfbam::CFBamCustXmlLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamCustXmlLoaderRelationHandler::~CFBamCustXmlLoaderRelationHandler() {
	}

	void CFBamCustXmlLoaderRelationHandler::startElement (
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
		static const std::string S_RelationType( "RelationType" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_FromIndexId( "FromIndexId" );
		static const std::string S_ToTableId( "ToTableId" );
		static const std::string S_ToIndexId( "ToIndexId" );
		static const std::string S_IsRequired( "IsRequired" );
		static const std::string S_IsXsdContainer( "IsXsdContainer" );
		static const std::string S_IsLateResolver( "IsLateResolver" );
		static const std::string S_NarrowedTenantId( "NarrowedTenantId" );
		static const std::string S_NarrowedId( "NarrowedId" );
		static const std::string S_FromTable( "FromTable" );
		static const std::string S_Columns( "Columns" );
		static const std::string S_PopDep( "PopDep" );
		static const std::string S_RelTenant( "RelTenant" );
		static const std::string S_FromIndex( "FromIndex" );
		static const std::string S_ToTable( "ToTable" );
		static const std::string S_ToIndex( "ToIndex" );
		static const std::string S_Narrowed( "Narrowed" );
		static const std::string S_PopDepChain( "PopDepChain" );
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
		cfbam::ICFBamRelationObj* tmpBuff = NULL;
		cfbam::ICFBamRelationEditObj* editBuff = NULL;
		cfbam::ICFBamRelationObj* origRelation = NULL;
		cfbam::ICFBamRelationTableObj* relationTable = NULL;
		cfbam::ICFBamTableObj* curTable = NULL;
		cfbam::ICFBamRelationObj* resolvedRelation = NULL;
		cfbam::ICFBamPopTopDepObj* origTopDep = NULL;
		cfbam::ICFBamPopTopDepEditObj* editTopDep = NULL;
		cfbam::ICFBamPopSubDep1Obj* origSubDep1 = NULL;
		cfbam::ICFBamPopSubDep1EditObj* editSubDep1 = NULL;
		cfbam::ICFBamPopSubDep2Obj* origSubDep2 = NULL;
		cfbam::ICFBamPopSubDep2EditObj* editSubDep2 = NULL;
		cfbam::ICFBamPopSubDep3Obj* origSubDep3 = NULL;
		cfbam::ICFBamPopSubDep3EditObj* editSubDep3 = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// Scope Attributes
		// Scope References
		cfsec::ICFSecTenantObj* refTenant = NULL;
		// Relation Attributes
		std::string* attrName = NULL;
		std::string* attrShortName = NULL;
		std::string* attrLabel = NULL;
		std::string* attrShortDescription = NULL;
		std::string* attrDescription = NULL;
		std::string* attrRelationType = NULL;
		std::string* attrDbName = NULL;
		std::string* attrSuffix = NULL;
		std::string* attrIsRequired = NULL;
		std::string* attrIsXsdContainer = NULL;
		std::string* attrIsLateResolver = NULL;
		std::string* attrFromIndex = NULL;
		std::string* attrToIndex = NULL;
		std::string* attrNarrowed = NULL;
		std::string* attrPopDepChain = NULL;
		// Relation References
		cfbam::ICFBamTableObj* refFromTable = NULL;
		cfsec::ICFSecTenantObj* refRelTenant = NULL;
		cfbam::ICFBamIndexObj* refFromIndex = NULL;
		cfbam::ICFBamTableObj* refToTable = NULL;
		cfbam::ICFBamIndexObj* refToIndex = NULL;
		cfbam::ICFBamRelationObj* refNarrowed = NULL;
		// Native type conversions of attributes
		std::string* natName = NULL;
		std::string* natShortName = NULL;
		std::string* natLabel = NULL;
		std::string* natShortDescription = NULL;
		std::string* natDescription = NULL;
		cfbam::ICFBamSchema::RelationTypeEnum natRelationType;
		std::string* natDbName = NULL;
		std::string* natSuffix = NULL;
		bool natIsRequired;
		bool natIsXsdContainer;
		bool natIsLateResolver;
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
			if( cppQName != "Relation" ) {
				static const std::string Msg( "Expected QName to be 'Relation'" );
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
			tmpBuff = schemaObj->getRelationTableObj()->newInstance();
			editBuff = dynamic_cast<cfbam::ICFBamRelationEditObj*>( tmpBuff->beginEdit() );

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
				else if( *attrLocalName == S_RelationType ) {
					if( attrRelationType != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrRelationType = new std::string( *cppValue );
					}
					else {
						attrRelationType = NULL;
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
				else if( *attrLocalName == S_IsRequired ) {
					if( attrIsRequired != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsRequired = new std::string( *cppValue );
					}
					else {
						attrIsRequired = NULL;
					}
				}
				else if( *attrLocalName == S_IsXsdContainer ) {
					if( attrIsXsdContainer != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsXsdContainer = new std::string( *cppValue );
					}
					else {
						attrIsXsdContainer = NULL;
					}
				}
				else if( *attrLocalName == S_IsLateResolver ) {
					if( attrIsLateResolver != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrIsLateResolver = new std::string( *cppValue );
					}
					else {
						attrIsLateResolver = NULL;
					}
				}
				else if( *attrLocalName == S_FromIndex ) {
					if( attrFromIndex != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrFromIndex = new std::string( *cppValue );
					}
					else {
						attrFromIndex = NULL;
					}
				}
				else if( *attrLocalName == S_ToIndex ) {
					if( attrToIndex != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrToIndex = new std::string( *cppValue );
					}
					else {
						attrToIndex = NULL;
					}
				}
				else if( *attrLocalName == S_Narrowed ) {
					if( attrNarrowed != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrNarrowed = new std::string( *cppValue );
					}
					else {
						attrNarrowed = NULL;
					}
				}
				else if( *attrLocalName == S_PopDepChain ) {
					if( attrPopDepChain != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrPopDepChain = new std::string( *cppValue );
					}
					else {
						attrPopDepChain = NULL;
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
			if( ( attrRelationType == NULL ) || ( attrRelationType->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_RelationType );
			}
			if( ( attrIsRequired == NULL ) || ( attrIsRequired->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_IsRequired );
			}
			if( attrIsXsdContainer == NULL ) {
				attrIsXsdContainer = new std::string( S_False );
			}
			if( attrIsLateResolver == NULL ) {
				attrIsLateResolver = new std::string( S_False );
			}
			if( ( attrFromIndex == NULL ) || ( attrFromIndex->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_FromIndex );
			}
			if( ( attrToIndex == NULL ) || ( attrToIndex->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_ToIndex );
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

			cfbam::ICFBamSchema::RelationTypeEnum* pRelationType = cfbam::ICFBamSchema::parseRelationTypeEnum( attrRelationType );
			if( pRelationType != NULL ) {
				natRelationType = *pRelationType;
			}
			else {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_RelationType );
			}
			editBuff->setRequiredRelationType( natRelationType );

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

			if( ( *attrIsRequired == S_True ) || ( *attrIsRequired == S_Yes ) || ( *attrIsRequired == S_1 ) ) {
				natIsRequired = true;
			}
			else if( ( *attrIsRequired == S_False ) || ( *attrIsRequired == S_No ) || ( *attrIsRequired == S_0 ) ) {
				natIsRequired = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsRequired,
					*attrIsRequired );
			}
			editBuff->setRequiredIsRequired( natIsRequired );

			if( ( *attrIsXsdContainer == S_True ) || ( *attrIsXsdContainer == S_Yes ) || ( *attrIsXsdContainer == S_1 ) ) {
				natIsXsdContainer = true;
			}
			else if( ( *attrIsXsdContainer == S_False ) || ( *attrIsXsdContainer == S_No ) || ( *attrIsXsdContainer == S_0 ) ) {
				natIsXsdContainer = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsXsdContainer,
					*attrIsXsdContainer );
			}

			if( ( *attrIsLateResolver == S_True ) || ( *attrIsLateResolver == S_Yes ) || ( *attrIsLateResolver == S_1 ) ) {
				natIsLateResolver = true;
			}
			else if( ( *attrIsLateResolver == S_False ) || ( *attrIsLateResolver == S_No ) || ( *attrIsLateResolver == S_0 ) ) {
				natIsLateResolver = false;
			}
			else {
				throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IsLateResolver,
					*attrIsLateResolver );
			}
			editBuff->setRequiredIsLateResolver( natIsLateResolver );

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
				refFromTable = dynamic_cast<cfbam::ICFBamTableObj*>( scopeObj );
				editBuff->setRequiredContainerFromTable( refFromTable );
				refRelTenant = editBuff->getRequiredOwnerRelTenant();
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					"scopeObj",
					scopeObj,
					"ICFBamTableObj" );
			}

			// Resolve and apply Owner reference
 
			if( refRelTenant == NULL ) {
				if( scopeObj->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
					refRelTenant = dynamic_cast<cfsec::ICFSecTenantObj*>( scopeObj );
					editBuff->setRequiredOwnerRelTenant( refRelTenant );
				}
				else {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						"Owner<RelTenant>" );
				}
			}

			editBuff->setOptionalLookupDefSchema( NULL );

			// Lookup refFromIndex by qualified name
			if( ( attrFromIndex != NULL ) && ( attrFromIndex->length() > 0 ) ) {
				refFromIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( refFromTable->getNamedObject( *attrFromIndex ) );
				if( refFromIndex == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						refFromTable->getRequiredContainerSchemaDef()->getRequiredName() + S_Dot + refFromTable->getRequiredName() + S_Dot + *attrName + " could not resolve FromIndex reference qualified name \"" + *attrFromIndex + "\" to table Index" );
				}
			}
			else {
				refFromIndex = NULL;
			}
			editBuff->setRequiredLookupFromIndex( refFromIndex );

			// Lookup refToIndex by qualified name
			if( ( attrToIndex != NULL ) && ( attrToIndex->length() > 0 ) ) {
				refToIndex = dynamic_cast<cfbam::ICFBamIndexObj*>( editBuff->getNamedObject( schemaObj->getIndexTableObj()->getObjQualifyingClassCode(),
					*attrToIndex ) );
				if( refToIndex == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						refFromTable->getRequiredContainerSchemaDef()->getRequiredName() + S_Dot + refFromTable->getRequiredName() + S_Dot + *attrName + " could not resolve ToIndex reference qualified name \"" + *attrToIndex + "\" to table Index" );
				}
			}
			else {
				refToIndex = NULL;
			}
			editBuff->setRequiredLookupToIndex( refToIndex );
			editBuff->setRequiredLookupToTable( refToIndex->getRequiredContainerTable() );

			// Lookup refNarrowed by qualified name
			if( ( attrNarrowed != NULL ) && ( attrNarrowed->length() > 0 ) ) {
				refNarrowed = dynamic_cast<cfbam::ICFBamRelationObj*>( editBuff->getNamedObject( schemaObj->getRelationTableObj()->getObjQualifyingClassCode(),
					*attrNarrowed ) );
				if( refNarrowed == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						refFromTable->getRequiredContainerSchemaDef()->getRequiredName() + S_Dot + refFromTable->getRequiredName() + S_Dot + *attrName + " could not resolve Narrowed reference qualified name \"" + *attrNarrowed + "\" to table Relation" );
				}
			}
			else {
				refNarrowed = NULL;
			}
			editBuff->setOptionalLookupNarrowed( refNarrowed );

			origRelation = dynamic_cast<cfbam::ICFBamRelationObj*>( editBuff->create() );
			editBuff = NULL;
			tmpBuff = NULL;

			curContext->setObj( origRelation );

			int firstDot;
			relationTable = dynamic_cast<cfbam::ICFBamRelationTableObj*>( schemaObj->getRelationTableObj() );
				
			if( ( attrPopDepChain != NULL ) && ( ! attrPopDepChain->empty() ) ) {
				curTable = refFromTable;
				firstDot = attrPopDepChain->find( '.' );
				std::string nextRelationName;
				std::string remainder;
				if( firstDot != std::string::npos ) {
					nextRelationName = attrPopDepChain->substr( 0, firstDot );
					remainder = attrPopDepChain->substr( firstDot + 1, attrPopDepChain->length() - ( firstDot + 1 ) );
				}
				else {
					nextRelationName = *attrPopDepChain;
					remainder = cflib::CFLib::S_EMPTY;
				}
				resolvedRelation = resolveInheritedRelation( relationTable, curTable, nextRelationName );
				if( resolvedRelation == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						getParser()->getLocationInfo() + "Relation \""
							+ nextRelationName
							+ "\" not found for table \""
							+ curTable->getRequiredContainerSchemaDef()->getRequiredName()
							+ "."
							+ curTable->getRequiredName()
							+ "\", " + *attrPopDepChain + " is invalid" );
				}
				origTopDep = schemaObj->getPopTopDepTableObj()->newInstance();
				editTopDep = dynamic_cast<cfbam::ICFBamPopTopDepEditObj*>( origTopDep->beginEdit() );
				editTopDep->setRequiredOwnerTenant( refFromTable->getRequiredOwnerTenant() );
				editTopDep->setRequiredContainerContRelation( origRelation );
				editTopDep->setRequiredName( "PopTopDep_" + resolvedRelation->getRequiredName() );
				editTopDep->setRequiredLookupRelation( resolvedRelation );
				origTopDep = dynamic_cast<cfbam::ICFBamPopTopDepObj*>( editTopDep->create() );
				editTopDep = NULL;
				
				if( ! remainder.empty() ) {
					curTable = origTopDep->getRequiredLookupRelation()->getRequiredLookupToTable();
					firstDot = remainder.find( '.' );
					if( firstDot != std::string::npos ) {
						nextRelationName = remainder.substr( 0, firstDot );
						remainder = remainder.substr( firstDot + 1, remainder.length() - ( firstDot + 1 ) );
					}
					else {
						nextRelationName = remainder;
						remainder = cflib::CFLib::S_EMPTY;
					}
					resolvedRelation = resolveInheritedRelation( relationTable, curTable, nextRelationName );
					if( resolvedRelation == NULL ) {
						throw cflib::CFLibRuntimeException( CLASS_NAME,
							S_ProcName,
							getParser()->getLocationInfo() + "Relation \""
								+ nextRelationName
								+ "\" not found for table \""
								+ curTable->getRequiredContainerSchemaDef()->getRequiredName()
								+ "."
								+ curTable->getRequiredName()
								+ "\", " + *attrPopDepChain + " is invalid" );
					}
					origSubDep1 = dynamic_cast<cfbam::ICFBamPopSubDep1Obj*>( schemaObj->getPopSubDep1TableObj()->newInstance() );
					editSubDep1 = dynamic_cast<cfbam::ICFBamPopSubDep1EditObj*>( origSubDep1->beginEdit() );
					editSubDep1->setRequiredOwnerTenant( refFromTable->getRequiredOwnerTenant() );
					editSubDep1->setRequiredContainerContPopTopDep( origTopDep );
					editSubDep1->setRequiredName( resolvedRelation->getRequiredName() );
					editSubDep1->setRequiredLookupRelation( resolvedRelation );
					origSubDep1 = dynamic_cast<cfbam::ICFBamPopSubDep1Obj*>( editSubDep1->create() );
					editSubDep1 = NULL;

					if( ! remainder.empty() ) {
						curTable = origSubDep1->getRequiredLookupRelation()->getRequiredLookupToTable();
						firstDot = remainder.find( '.' );
						if( firstDot != std::string::npos ) {
							nextRelationName = remainder.substr( 0, firstDot );
							remainder = remainder.substr( firstDot + 1, remainder.length() - ( firstDot + 1 ) );
						}
						else {
							nextRelationName = remainder;
							remainder = cflib::CFLib::S_EMPTY;
						}
						resolvedRelation = resolveInheritedRelation( relationTable, curTable, nextRelationName );
						if( resolvedRelation == NULL ) {
							throw cflib::CFLibRuntimeException( CLASS_NAME,
								S_ProcName,
								getParser()->getLocationInfo() + "Relation \""
									+ nextRelationName
									+ "\" not found for table \""
									+ curTable->getRequiredContainerSchemaDef()->getRequiredName()
									+ "."
									+ curTable->getRequiredName()
									+ "\", " + *attrPopDepChain + " is invalid" );
						}
						origSubDep2 = dynamic_cast<cfbam::ICFBamPopSubDep2Obj*>( schemaObj->getPopSubDep2TableObj()->newInstance() );
						editSubDep2 = dynamic_cast<cfbam::ICFBamPopSubDep2EditObj*>( origSubDep2->beginEdit() );
						editSubDep2->setRequiredOwnerTenant( refFromTable->getRequiredOwnerTenant() );
						editSubDep2->setRequiredContainerPopSubDep1( origSubDep1 );
						editSubDep2->setRequiredName( resolvedRelation->getRequiredName() );
						editSubDep2->setRequiredLookupRelation( resolvedRelation );
						origSubDep2 = dynamic_cast<cfbam::ICFBamPopSubDep2Obj*>( editSubDep2->create() );
						editSubDep2 = NULL;
						
						if( ! remainder.empty() ) {
							curTable = origSubDep2->getRequiredLookupRelation()->getRequiredLookupToTable();
							firstDot = remainder.find( '.' );
							if( firstDot != std::string::npos ) {
								throw cflib::CFLibRuntimeException( CLASS_NAME,
									S_ProcName,
									"Relation PopDepChain " + *attrPopDepChain + " is invalid -- only 4 levels of indirection are supported" );
							}
							else {
								nextRelationName = remainder;
								remainder = cflib::CFLib::S_EMPTY;
							}
							resolvedRelation = resolveInheritedRelation( relationTable, curTable, nextRelationName );
							if( resolvedRelation == NULL ) {
								throw cflib::CFLibRuntimeException( CLASS_NAME,
										S_ProcName,
										getParser()->getLocationInfo() + "Relation \""
											+ nextRelationName
											+ "\" not found for table \""
											+ curTable->getRequiredContainerSchemaDef()->getRequiredName()
											+ "."
											+ curTable->getRequiredName()
											+ "\"" );
							}
							origSubDep3 = dynamic_cast<cfbam::ICFBamPopSubDep3Obj*>( schemaObj->getPopSubDep3TableObj()->newInstance() );
							editSubDep3 = dynamic_cast<cfbam::ICFBamPopSubDep3EditObj*>( origSubDep3->beginEdit() );
							editSubDep3->setRequiredOwnerTenant( refFromTable->getRequiredOwnerTenant() );
							editSubDep3->setRequiredContainerPopSubDep2( origSubDep2 );
							editSubDep3->setRequiredName( resolvedRelation->getRequiredName() );
							editSubDep3->setRequiredLookupRelation( resolvedRelation );
							origSubDep3 = dynamic_cast<cfbam::ICFBamPopSubDep3Obj*>( editSubDep3->create() );
							editSubDep3 = NULL;
						}
					}
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( editSubDep3 != NULL ) {
			editSubDep3->endEdit();
			editSubDep3 = NULL;
		}

		if( editSubDep2 != NULL ) {
			editSubDep2->endEdit();
			editSubDep2 = NULL;
		}

		if( editSubDep1 != NULL ) {
			editSubDep1->endEdit();
			editSubDep1 = NULL;
		}

		if( editTopDep != NULL ) {
			editTopDep->endEdit();
			editTopDep = NULL;
		}

		if( origSubDep3 != NULL ) {
			if( origSubDep3->getIsNew() ) {
				delete origSubDep3;
			}
			origSubDep3 = NULL;
		}

		if( origSubDep2 != NULL ) {
			if( origSubDep2->getIsNew() ) {
				delete origSubDep2;
			}
			origSubDep2 = NULL;
		}

		if( origSubDep1 != NULL ) {
			if( origSubDep1->getIsNew() ) {
				delete origSubDep1;
			}
			origSubDep1 = NULL;
		}

		if( origTopDep != NULL ) {
			if( origTopDep->getIsNew() ) {
				delete origTopDep;
			}
			origTopDep = NULL;
		}

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

		if( natDbName != NULL ) {
			delete natDbName;
			natDbName = NULL;
		}

		if( natSuffix != NULL ) {
			delete natSuffix;
			natSuffix = NULL;
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

		if( attrRelationType != NULL ) {
			delete attrRelationType;
			attrRelationType = NULL;
		}

		if( attrDbName != NULL ) {
			delete attrDbName;
			attrDbName = NULL;
		}

		if( attrSuffix != NULL ) {
			delete attrSuffix;
			attrSuffix = NULL;
		}

		if( attrIsRequired != NULL ) {
			delete attrIsRequired;
			attrIsRequired = NULL;
		}

		if( attrIsXsdContainer != NULL ) {
			delete attrIsXsdContainer;
			attrIsXsdContainer = NULL;
		}

		if( attrIsLateResolver != NULL ) {
			delete attrIsLateResolver;
			attrIsLateResolver = NULL;
		}

		if( attrFromIndex != NULL ) {
			delete attrFromIndex;
			attrFromIndex = NULL;
		}

		if( attrToIndex != NULL ) {
			delete attrToIndex;
			attrToIndex = NULL;
		}

		if( attrNarrowed != NULL ) {
			delete attrNarrowed;
			attrNarrowed = NULL;
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

	cfbam::ICFBamRelationObj* CFBamCustXmlLoaderRelationHandler::resolveInheritedRelation( cfbam::ICFBamRelationTableObj* relationTable, cfbam::ICFBamTableObj* tbl, const std::string& relName ) {
		cfbam::ICFBamRelationObj* curRelation;
		cfbam::ICFBamRelationObj* superRelation;
		cfbam::ICFBamRelationObj* retval = NULL;
		cfbam::ICFBamTableObj* curTable = tbl;
		while( ( retval == NULL ) && ( curTable != NULL ) ) {
			retval = relationTable->readRelationByUNameIdx( curTable->getRequiredTenantId(),
				curTable->getRequiredId(),
				relName );
			if( retval == NULL ) {
				std::vector<cfbam::ICFBamRelationObj*> relations = curTable->getOptionalComponentsRelation();
				superRelation = NULL;
				for( auto relIter = relations.begin(); ( superRelation == NULL ) && ( relIter != relations.end() ); relIter ++ ) {
					curRelation = *relIter;
					if( curRelation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superRelation = curRelation;
					}
				}
				if( superRelation != NULL ) {
					curTable = superRelation->getRequiredLookupToTable();
				}
				else {
					curTable = NULL;
				}
			}
		}
		return( retval );
	}

	void CFBamCustXmlLoaderRelationHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}
}
