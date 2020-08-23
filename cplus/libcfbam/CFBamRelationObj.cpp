// Description: C++18 base object instance implementation for CFBam Relation.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>

using namespace std;

#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamRelationObj.hpp>

namespace cfbam {

	const std::string CFBamRelationObj::CLASS_NAME( "CFBamRelationObj" );
	const classcode_t CFBamRelationObj::CLASS_CODE = 0xa835L;

	const int64_t CFBamRelationObj::getRequiredTableId() {
		return( getRelationBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamRelationObj::getRequiredTableIdReference() {
		return( getRelationBuff()->getRequiredTableIdReference() );
	}

	bool CFBamRelationObj::isOptionalDefSchemaTenantIdNull() {
		return( getRelationBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamRelationObj::getOptionalDefSchemaTenantIdValue() {
		return( getRelationBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamRelationObj::getOptionalDefSchemaTenantIdReference() {
		return( getRelationBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamRelationObj::isOptionalDefSchemaIdNull() {
		return( getRelationBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamRelationObj::getOptionalDefSchemaIdValue() {
		return( getRelationBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamRelationObj::getOptionalDefSchemaIdReference() {
		return( getRelationBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamRelationObj::getRequiredName() {
		return( getRelationBuff()->getRequiredName() );
	}

	const std::string* CFBamRelationObj::getRequiredNameReference() {
		return( getRelationBuff()->getRequiredNameReference() );
	}

	bool CFBamRelationObj::isOptionalShortNameNull() {
		return( getRelationBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamRelationObj::getOptionalShortNameValue() {
		return( getRelationBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamRelationObj::getOptionalShortNameReference() {
		return( getRelationBuff()->getOptionalShortNameReference() );
	}

	bool CFBamRelationObj::isOptionalLabelNull() {
		return( getRelationBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamRelationObj::getOptionalLabelValue() {
		return( getRelationBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamRelationObj::getOptionalLabelReference() {
		return( getRelationBuff()->getOptionalLabelReference() );
	}

	bool CFBamRelationObj::isOptionalShortDescriptionNull() {
		return( getRelationBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamRelationObj::getOptionalShortDescriptionValue() {
		return( getRelationBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamRelationObj::getOptionalShortDescriptionReference() {
		return( getRelationBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamRelationObj::isOptionalDescriptionNull() {
		return( getRelationBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamRelationObj::getOptionalDescriptionValue() {
		return( getRelationBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamRelationObj::getOptionalDescriptionReference() {
		return( getRelationBuff()->getOptionalDescriptionReference() );
	}

	const cfbam::ICFBamSchema::RelationTypeEnum CFBamRelationObj::getRequiredRelationType() {
		return( getRelationBuff()->getRequiredRelationType() );
	}

	const cfbam::ICFBamSchema::RelationTypeEnum* CFBamRelationObj::getRequiredRelationTypeReference() {
		return( getRelationBuff()->getRequiredRelationTypeReference() );
	}

	bool CFBamRelationObj::isOptionalDbNameNull() {
		return( getRelationBuff()->isOptionalDbNameNull() );
	}

	const std::string& CFBamRelationObj::getOptionalDbNameValue() {
		return( getRelationBuff()->getOptionalDbNameValue() );
	}

	const std::string* CFBamRelationObj::getOptionalDbNameReference() {
		return( getRelationBuff()->getOptionalDbNameReference() );
	}

	bool CFBamRelationObj::isOptionalSuffixNull() {
		return( getRelationBuff()->isOptionalSuffixNull() );
	}

	const std::string& CFBamRelationObj::getOptionalSuffixValue() {
		return( getRelationBuff()->getOptionalSuffixValue() );
	}

	const std::string* CFBamRelationObj::getOptionalSuffixReference() {
		return( getRelationBuff()->getOptionalSuffixReference() );
	}

	const int64_t CFBamRelationObj::getRequiredFromIndexId() {
		return( getRelationBuff()->getRequiredFromIndexId() );
	}

	const int64_t* CFBamRelationObj::getRequiredFromIndexIdReference() {
		return( getRelationBuff()->getRequiredFromIndexIdReference() );
	}

	const int64_t CFBamRelationObj::getRequiredToTableId() {
		return( getRelationBuff()->getRequiredToTableId() );
	}

	const int64_t* CFBamRelationObj::getRequiredToTableIdReference() {
		return( getRelationBuff()->getRequiredToTableIdReference() );
	}

	const int64_t CFBamRelationObj::getRequiredToIndexId() {
		return( getRelationBuff()->getRequiredToIndexId() );
	}

	const int64_t* CFBamRelationObj::getRequiredToIndexIdReference() {
		return( getRelationBuff()->getRequiredToIndexIdReference() );
	}

	const bool CFBamRelationObj::getRequiredIsRequired() {
		return( getRelationBuff()->getRequiredIsRequired() );
	}

	const bool* CFBamRelationObj::getRequiredIsRequiredReference() {
		return( getRelationBuff()->getRequiredIsRequiredReference() );
	}

	const bool CFBamRelationObj::getRequiredIsXsdContainer() {
		return( getRelationBuff()->getRequiredIsXsdContainer() );
	}

	const bool* CFBamRelationObj::getRequiredIsXsdContainerReference() {
		return( getRelationBuff()->getRequiredIsXsdContainerReference() );
	}

	const bool CFBamRelationObj::getRequiredIsLateResolver() {
		return( getRelationBuff()->getRequiredIsLateResolver() );
	}

	const bool* CFBamRelationObj::getRequiredIsLateResolverReference() {
		return( getRelationBuff()->getRequiredIsLateResolverReference() );
	}

	const bool CFBamRelationObj::getRequiredAllowAddendum() {
		return( getRelationBuff()->getRequiredAllowAddendum() );
	}

	const bool* CFBamRelationObj::getRequiredAllowAddendumReference() {
		return( getRelationBuff()->getRequiredAllowAddendumReference() );
	}

	bool CFBamRelationObj::isOptionalNarrowedTenantIdNull() {
		return( getRelationBuff()->isOptionalNarrowedTenantIdNull() );
	}

	const int64_t CFBamRelationObj::getOptionalNarrowedTenantIdValue() {
		return( getRelationBuff()->getOptionalNarrowedTenantIdValue() );
	}

	const int64_t* CFBamRelationObj::getOptionalNarrowedTenantIdReference() {
		return( getRelationBuff()->getOptionalNarrowedTenantIdReference() );
	}

	bool CFBamRelationObj::isOptionalNarrowedIdNull() {
		return( getRelationBuff()->isOptionalNarrowedIdNull() );
	}

	const int64_t CFBamRelationObj::getOptionalNarrowedIdValue() {
		return( getRelationBuff()->getOptionalNarrowedIdValue() );
	}

	const int64_t* CFBamRelationObj::getOptionalNarrowedIdReference() {
		return( getRelationBuff()->getOptionalNarrowedIdReference() );
	}


	cfbam::ICFBamSchemaDefObj* CFBamRelationObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getRelationBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getRelationBuff()->getOptionalDefSchemaTenantIdValue(),
					getRelationBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamTableObj* CFBamRelationObj::getRequiredContainerFromTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationBuff()->getRequiredTableId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationObj::getOptionalComponentsColumns( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationColObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->readRelationColByRelationIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamPopTopDepObj*> CFBamRelationObj::getOptionalComponentsPopDep( bool forceRead ) {
		std::vector<cfbam::ICFBamPopTopDepObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopTopDepTableObj()->readPopTopDepByContRelIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfsec::ICFSecTenantObj* CFBamRelationObj::getRequiredOwnerRelTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamIndexObj* CFBamRelationObj::getRequiredLookupFromIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->readIndexByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationBuff()->getRequiredFromIndexId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamTableObj* CFBamRelationObj::getRequiredLookupToTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationBuff()->getRequiredToTableId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamIndexObj* CFBamRelationObj::getRequiredLookupToIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->readIndexByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationBuff()->getRequiredToIndexId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamRelationObj* CFBamRelationObj::getOptionalLookupNarrowed( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
			if( getRelationBuff()->isOptionalNarrowedTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationBuff()->isOptionalNarrowedIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByIdIdx( getRelationBuff()->getOptionalNarrowedTenantIdValue(),
					getRelationBuff()->getOptionalNarrowedIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamRelationObj::CFBamRelationObj()
	: ICFBamRelationObj(),
	  CFBamScopeObj()
	{
	}

	CFBamRelationObj::CFBamRelationObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamRelationObj(),
	  CFBamScopeObj( argSchema )
	{
	}

	CFBamRelationObj::~CFBamRelationObj() {
	}

	cfbam::CFBamScopeBuff* CFBamRelationObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamRelationBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelation()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamRelationObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamRelationObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamRelationObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamRelationObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamRelationObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
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
		static const std::string S_AllowAddendum( "AllowAddendum" );
		static const std::string S_NarrowedTenantId( "NarrowedTenantId" );
		static const std::string S_NarrowedId( "NarrowedId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamRelationObj::getRequiredTableId() ) );
		if( ! CFBamRelationObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamRelationObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamRelationObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamRelationObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamRelationObj::getRequiredName() ) );
		if( ! CFBamRelationObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamRelationObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamRelationObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamRelationObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamRelationObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamRelationObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamRelationObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamRelationObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_RelationType, CFBamRelationObj::getRequiredRelationType() ) );
		if( ! CFBamRelationObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamRelationObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamRelationObj::isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, CFBamRelationObj::getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FromIndexId, CFBamRelationObj::getRequiredFromIndexId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToTableId, CFBamRelationObj::getRequiredToTableId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToIndexId, CFBamRelationObj::getRequiredToIndexId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsRequired, CFBamRelationObj::getRequiredIsRequired() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsXsdContainer, CFBamRelationObj::getRequiredIsXsdContainer() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsLateResolver, CFBamRelationObj::getRequiredIsLateResolver() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_AllowAddendum, CFBamRelationObj::getRequiredAllowAddendum() ) );
		if( ! CFBamRelationObj::isOptionalNarrowedTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NarrowedTenantId, CFBamRelationObj::getOptionalNarrowedTenantIdValue() ) );
		}
		if( ! CFBamRelationObj::isOptionalNarrowedIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NarrowedId, CFBamRelationObj::getOptionalNarrowedIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamRelationObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamRelationObj::getGenDefName() {
		return( cfbam::CFBamRelationBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamRelationObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerFromTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamRelationObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerFromTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamRelationObj::getObjQualifier( const classcode_t* qualifyingClass ) {
		cflib::ICFLibAnyObj* container = this;
		if( qualifyingClass != NULL ) {
			while( container != NULL ) {
				if( container->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
					break;
				}
				else if( container->getClassCode() == cfsec::CFSecTenantBuff::CLASS_CODE ) {
					break;
				}
				else if( container->implementsClassCode( *qualifyingClass ) ) {
					break;
				}
				container = container->getObjScope();
			}
		}
		else {
			while( container != NULL ) {
				if( container->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
					break;
				}
				else if( container->getClassCode() == cfsec::CFSecTenantBuff::CLASS_CODE ) {
					break;
				}
				container = container->getObjScope();
			}
		}
		return( container );
	}

	cflib::ICFLibAnyObj* CFBamRelationObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamRelationObj::getNamedObject( const std::string& objName ) {
		std::string nextName;
		std::string remainingName;
		cflib::ICFLibAnyObj* subObj = NULL;
		cflib::ICFLibAnyObj* retObj;
		int32_t nextDot = objName.find( '.' );
		if( nextDot >= 0 ) {
			nextName = objName.substr( 0, nextDot );
			remainingName = objName.substr( nextDot + 1 );
		}
		else {
			nextName.clear();
			nextName.append( objName );
			remainingName.clear();
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->readRelationColByLookupUNameIdx( getRequiredTenantId(),
			getRequiredId(),
				nextName,
				false );
		}
		if( remainingName.length() <= 0 ) {
			retObj = subObj;
		}
		else if( subObj == NULL ) {
			retObj = NULL;
		}
		else {
			retObj = subObj->getNamedObject( remainingName );
		}
		return( retObj );
	}

	std::string CFBamRelationObj::getObjQualifiedName() {
		const static std::string S_Dot( "." );
		std::string qualName( getObjName() );
		cflib::ICFLibAnyObj* container = getObjScope();
		std::string containerName;
		std::string buildName;
		while( container != NULL ) {
			if( container->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
				container = NULL;
			}
			else if( container->getClassCode() == cfsec::CFSecTenantBuff::CLASS_CODE ) {
				container = NULL;
			}
			else if( container->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				container = NULL;
			}
			else {
				containerName = container->getObjName();
				buildName.clear();
				buildName.append( containerName );
				buildName.append( S_Dot );
				buildName.append( qualName );
				qualName.clear();
				qualName.append( buildName );
				container = container->getObjScope();
			}
		}
		return( qualName );
	}

	std::string CFBamRelationObj::getObjFullName() {
		const static std::string S_Dot( "." );
		std::string fullName = getObjName();
		cflib::ICFLibAnyObj* container = getObjScope();
		std::string containerName;
		std::string buildName;
		while( container != NULL ) {
			if( container->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
				container = NULL;
			}
			else if( container->getClassCode() == cfsec::CFSecTenantBuff::CLASS_CODE ) {
				container = NULL;
			}
			else {
				containerName = container->getObjName();
				buildName.clear();
				buildName.append( containerName );
				buildName.append( S_Dot );
				buildName.append( fullName );
				fullName.clear();
				fullName.append( buildName );
				container = container->getObjScope();
			}
		}
		return( fullName );
	}

	cfbam::ICFBamScopeObj* CFBamRelationObj::realize() {
		cfbam::ICFBamRelationObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->realizeRelation(
			(cfbam::ICFBamRelationObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamRelationObj::read( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByIdIdx( getRelationBuff()->getRequiredTenantId(),
		getRelationBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamRelationObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamRelationObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->lockRelation( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamRelationEditObj* CFBamRelationObj::getRelationEdit() {
		return( dynamic_cast<cfbam::ICFBamRelationEditObj*>( edit ) );
	}

	cfbam::ICFBamSubProjectObj* cfbam::CFBamRelationObj::getProject(){
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamSubProjectObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamTopDomainObj* cfbam::CFBamRelationObj::getCompany(){
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntTopDomainBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamTopDomainObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamSchemaDefObj* cfbam::CFBamRelationObj::getSchemaDef(){
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamMinorVersionObj* cfbam::CFBamRelationObj::getVersion(){
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTopDomainBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	std::string cfbam::CFBamRelationObj::getVersionStringForVersion( cflib::ICFLibAnyObj* value ) {
		std::string ret;
		if( value->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMinorVersionObj*>( value )->getRequiredName();
		}
		else if( value->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMajorVersionObj*>( value )->getRequiredName();
		}
		return( ret );
	}

	std::string cfbam::CFBamRelationObj::getVersionString(){
		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* curDef = getVersion();
		std::vector<std::string> invertedNodeNames;
		while (curDef != NULL) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMajorVersionObj*>( curDef ) ) );
			}
			scopeDef = curDef->getObjScope();
			if( scopeDef == NULL) {
				curDef = NULL;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else {
				curDef = NULL;
			}
		}
		std::string ret;
		if( ! invertedNodeNames.empty() ) {
			ret = invertedNodeNames.back();
			invertedNodeNames.pop_back();
			while( ! invertedNodeNames.empty() ) {
				ret.append( "-" );
				ret.append( invertedNodeNames.back() );
				invertedNodeNames.pop_back();
			}
		}
		return( ret );
	}

	std::string cfbam::CFBamRelationObj::getPackedVersionString(){
		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* curDef = getVersion();
		std::vector<std::string> invertedNodeNames;
		while (curDef != NULL) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMajorVersionObj*>( curDef ) ) );
			}
			scopeDef = curDef->getObjScope();
			if( scopeDef == NULL) {
				curDef = NULL;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else {
				curDef = NULL;
			}
		}
		std::string ret;
		if( ! invertedNodeNames.empty() ) {
			ret = invertedNodeNames.back();
			invertedNodeNames.pop_back();
			while( ! invertedNodeNames.empty() ) {
				ret.append( invertedNodeNames.back() );
				invertedNodeNames.pop_back();
			}
		}
		return( ret );
	}

	bool cfbam::CFBamRelationObj::isColumnInOwnerRelation(){
		static const std::string S_ProcName( "isColumnInOwnerRelation" );
		static const std::string S_This( "this" );
		static const std::string S_GenContextGenDefColumnDef( "genContext()->getGenDef()->getColumnDef()" );
		static const std::string S_GenContextGenDefFromColumnDef( "genContext()->getGenDef()->getFromColumnDef()" );
		static const std::string S_ClassListOne( "ICFBamAtomObj, ICFBamTableColObj" );
		static const std::string S_ClassListTwo( "ICFBamAtomObj, ICFBamTableColObj, ICFBamIndexColObj" );

		cflib::ICFLibAnyObj*		focusDef;
		cfbam::ICFBamTableObj*		tableDef;

		if( implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			cfbam::ICFBamAtomObj* atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( this );
			cflib::ICFLibAnyObj* atomScopeDef = atomDef->getObjScope();
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( atomScopeDef );
			focusDef = this;
		}
		else if( implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamTableColObj* tableColDef = dynamic_cast<cfbam::ICFBamTableColObj*>( this );
			cflib::ICFLibAnyObj* tableColScopeDef = tableColDef->getObjScope();
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( tableColScopeDef );
			focusDef = this;
		}
		else if( implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamIndexColObj* indexColDef = dynamic_cast<cfbam::ICFBamIndexColObj*>( this );
			focusDef = indexColDef->getRequiredLookupColumn();
			if( focusDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamAtomObj*>( focusDef )->getObjScope() );
			}
			else if( focusDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamTableColObj*>( focusDef )->getObjScope() );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_GenContextGenDefColumnDef, focusDef, S_ClassListOne );
			}
		}
		else if( implementsClassCode( cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamRelationColObj* relColDef = dynamic_cast<cfbam::ICFBamRelationColObj*>( this );
			cflib::ICFLibAnyObj* columnDef = relColDef->getRequiredLookupFromCol();
			if( columnDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( columnDef->getObjScope() );
			}
			else if( columnDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( columnDef->getObjScope() );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_GenContextGenDefFromColumnDef, focusDef, S_ClassListOne );
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_This, this, S_ClassListTwo );
		}

		std::vector<cfbam::ICFBamRelationObj*> ownerRelations = tableDef->getContainerOwnerRelations();
		if( ownerRelations.empty() ) {
			return( false );
		}

		cfbam::ICFBamRelationObj* ownerRelation;
		cfbam::ICFBamRelationColObj* ownerRelationCol;
		std::vector<cfbam::ICFBamRelationColObj*> ownerRelationCols;

		for( auto iterOwnerRelations = ownerRelations.begin(); iterOwnerRelations != ownerRelations.end(); iterOwnerRelations ++ ) {
			ownerRelation = *iterOwnerRelations;
			ownerRelationCols = ownerRelation->getOptionalComponentsColumns();
			for( auto iterCols = ownerRelationCols.begin(); iterCols != ownerRelationCols.end(); iterCols ++ ) {
				ownerRelationCol = *iterCols;
				if( ownerRelationCol->getRequiredLookupFromCol() == focusDef ) {
					return( true );
				}
			}
		}

		return( false );
	}

}
