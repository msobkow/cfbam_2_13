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
#include <cfbamcustxmlloader/CFBamCustXmlLoaderClearDepHandler.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamCustXmlLoaderClearDepHandler::CLASS_NAME( "CFBamCustXmlLoaderClearDepHandler" );
	const std::string CFBamCustXmlLoaderClearDepHandler::S_True( "true" );
	const std::string CFBamCustXmlLoaderClearDepHandler::S_False( "false" );
	const std::string CFBamCustXmlLoaderClearDepHandler::S_Yes( "yes" );
	const std::string CFBamCustXmlLoaderClearDepHandler::S_No( "no" );
	const std::string CFBamCustXmlLoaderClearDepHandler::S_0( "0" );
	const std::string CFBamCustXmlLoaderClearDepHandler::S_1( "1" );

	CFBamCustXmlLoaderClearDepHandler::CFBamCustXmlLoaderClearDepHandler( cfbam::CFBamCustXmlLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamCustXmlLoaderClearDepHandler::~CFBamCustXmlLoaderClearDepHandler() {
	}

	void CFBamCustXmlLoaderClearDepHandler::startElement (
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
		static const std::string S_RelationId( "RelationId" );
		static const std::string S_Dot( "." );
		static const std::string S_Name( "Name" );
		static const std::string S_ClearDepChain( "ClearDepChain" );
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
		cfbam::ICFBamClearDepObj* tmpBuff = NULL;
		cfbam::ICFBamClearDepEditObj* editBuff = NULL;
		cfbam::ICFBamClearDepObj* origClearDep = NULL;
		// Common XML Attributes
		std::string* attrId = NULL;
		// Scope Attributes
		// Scope References
		cfsec::ICFSecTenantObj* refTenant = NULL;
		// ClearDep Attributes
		std::string* attrName = NULL;
		std::string* attrClearDepChain = NULL;
		// ClearDep References
		cfbam::ICFBamRelationObj* refRelation = NULL;
		cfbam::ICFBamTableObj* fromTable = NULL;
		cfbam::ICFBamRelationTableObj* relationTable = NULL;
		cfbam::ICFBamTableObj* curTable = NULL;
		cfbam::ICFBamRelationObj* resolvedRelation = NULL;
		cfbam::ICFBamClearTopDepObj* origTopDep = NULL;
		cfbam::ICFBamClearTopDepEditObj* editTopDep = NULL;
		cfbam::ICFBamClearSubDep1Obj* origSubDep1 = NULL;
		cfbam::ICFBamClearSubDep1EditObj* editSubDep1 = NULL;
		cfbam::ICFBamClearSubDep2Obj* origSubDep2 = NULL;
		cfbam::ICFBamClearSubDep2EditObj* editSubDep2 = NULL;
		cfbam::ICFBamClearSubDep3Obj* origSubDep3 = NULL;
		cfbam::ICFBamClearSubDep3EditObj* editSubDep3 = NULL;
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
			if( cppQName != "ClearDep" ) {
				static const std::string Msg( "Expected QName to be 'ClearDep'" );
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
				else if( *attrLocalName == S_ClearDepChain ) {
					if( attrClearDepChain != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrClearDepChain = new std::string( *cppValue );
					}
					else {
						attrClearDepChain = NULL;
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
			if( ( attrName == NULL ) || ( attrName->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}
			if( ( attrClearDepChain == NULL ) || ( attrClearDepChain->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					*attrName + S_Dot + S_ClearDepChain );
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
				goto cleanup;
			}

			// Get the scope/container object

			parentContext = curContext->getPrevContext();
			if( parentContext != NULL ) {
				scopeObj = parentContext->getObj();
			}
			else {
				scopeObj = NULL;
			}

			fromTable = dynamic_cast<cfbam::ICFBamTableObj*>( scopeObj );
			if( fromTable == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"ClearDep " + *attrName + " PrevContext.Object must be a Table" );
			}

			refTenant = fromTable->getRequiredOwnerTenant();

			int firstDot;
			relationTable = dynamic_cast<cfbam::ICFBamRelationTableObj*>( schemaObj->getRelationTableObj() );

			curTable = fromTable;
			firstDot = attrClearDepChain->find( '.' );
			std::string nextRelationName;
			std::string remainder;
			if( firstDot != std::string::npos ) {
				nextRelationName = attrClearDepChain->substr( 0, firstDot );
				remainder = attrClearDepChain->substr( firstDot + 1, attrClearDepChain->length() - ( firstDot + 1 ) );
			}
			else {
				nextRelationName = *attrClearDepChain;
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
						+ "\", " + *attrClearDepChain + " is invalid" );
			}
			origTopDep = schemaObj->getClearTopDepTableObj()->newInstance();
			editTopDep = dynamic_cast<cfbam::ICFBamClearTopDepEditObj*>( origTopDep->beginEdit() );
			editTopDep->setRequiredOwnerTenant( fromTable->getRequiredOwnerTenant() );
			editTopDep->setRequiredContainerTable( fromTable );
			editTopDep->setRequiredName( *attrName );
			editTopDep->setRequiredLookupRelation( resolvedRelation );
			origTopDep = dynamic_cast<cfbam::ICFBamClearTopDepObj*>( editTopDep->create() );
			editTopDep = NULL;

			curContext->setObj( origTopDep );

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
							+ "\", " + *attrClearDepChain + " is invalid" );
				}
				origSubDep1 = dynamic_cast<cfbam::ICFBamClearSubDep1Obj*>( schemaObj->getClearSubDep1TableObj()->newInstance() );
				editSubDep1 = dynamic_cast<cfbam::ICFBamClearSubDep1EditObj*>( origSubDep1->beginEdit() );
				editSubDep1->setRequiredOwnerTenant( fromTable->getRequiredOwnerTenant() );
				editSubDep1->setRequiredContainerClearTopDep( origTopDep );
				editSubDep1->setRequiredName( resolvedRelation->getRequiredName() );
				editSubDep1->setRequiredLookupRelation( resolvedRelation );
				origSubDep1 = dynamic_cast<cfbam::ICFBamClearSubDep1Obj*>( editSubDep1->create() );
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
								+ "\", " + *attrClearDepChain + " is invalid" );
					}
					origSubDep2 = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( schemaObj->getClearSubDep2TableObj()->newInstance() );
					editSubDep2 = dynamic_cast<cfbam::ICFBamClearSubDep2EditObj*>( origSubDep2->beginEdit() );
					editSubDep2->setRequiredOwnerTenant( fromTable->getRequiredOwnerTenant() );
					editSubDep2->setRequiredContainerClearSubDep1( origSubDep1 );
					editSubDep2->setRequiredName( resolvedRelation->getRequiredName() );
					editSubDep2->setRequiredLookupRelation( resolvedRelation );
					origSubDep2 = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( editSubDep2->create() );
					editSubDep2 = NULL;
					
					if( ! remainder.empty() ) {
						curTable = origSubDep2->getRequiredLookupRelation()->getRequiredLookupToTable();
						firstDot = remainder.find( '.' );
						if( firstDot != std::string::npos ) {
							throw cflib::CFLibRuntimeException( CLASS_NAME,
								S_ProcName,
								"Relation ClearDepChain " + *attrClearDepChain + " is invalid -- only 4 levels of indirection are supported" );
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
						origSubDep3 = dynamic_cast<cfbam::ICFBamClearSubDep3Obj*>( schemaObj->getClearSubDep3TableObj()->newInstance() );
						editSubDep3 = dynamic_cast<cfbam::ICFBamClearSubDep3EditObj*>( origSubDep3->beginEdit() );
						editSubDep3->setRequiredOwnerTenant( fromTable->getRequiredOwnerTenant() );
						editSubDep3->setRequiredContainerClearSubDep2( origSubDep2 );
						editSubDep3->setRequiredName( resolvedRelation->getRequiredName() );
						editSubDep3->setRequiredLookupRelation( resolvedRelation );
						origSubDep3 = dynamic_cast<cfbam::ICFBamClearSubDep3Obj*>( editSubDep3->create() );
						editSubDep3 = NULL;
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

		if( attrId != NULL ) {
			delete attrId;
			attrId = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrClearDepChain != NULL ) {
			delete attrClearDepChain;
			attrClearDepChain = NULL;
		}

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

	void CFBamCustXmlLoaderClearDepHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	cfbam::ICFBamRelationObj* CFBamCustXmlLoaderClearDepHandler::resolveInheritedRelation( cfbam::ICFBamRelationTableObj* relationTable, cfbam::ICFBamTableObj* tbl, const std::string& relName ) {
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
}
