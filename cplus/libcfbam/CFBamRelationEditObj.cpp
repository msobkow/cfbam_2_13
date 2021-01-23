// Description: C++18 edit object instance implementation for CFBam Relation.

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

using namespace std;

#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamRelationObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamRelationEditObj.hpp>


namespace cfbam {

	const std::string CFBamRelationEditObj::CLASS_NAME( "CFBamRelationEditObj" );

	CFBamRelationEditObj::CFBamRelationEditObj( cfbam::ICFBamRelationObj* argOrig )
	: ICFBamRelationEditObj(),
	  CFBamScopeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamRelationEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamRelationEditObj::~CFBamRelationEditObj() {
	}

	const std::string& CFBamRelationEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamRelationEditObj::getClassCode() const {
		return( cfbam::CFBamRelationBuff::CLASS_CODE );
	}

	bool CFBamRelationEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamRelationEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamRelationEditObj::getRequiredTableId() ) );
		if( ! CFBamRelationEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamRelationEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamRelationEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamRelationEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamRelationEditObj::getRequiredName() ) );
		if( ! CFBamRelationEditObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamRelationEditObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamRelationEditObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamRelationEditObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamRelationEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamRelationEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamRelationEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamRelationEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_RelationType, CFBamRelationEditObj::getRequiredRelationType() ) );
		if( ! CFBamRelationEditObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamRelationEditObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamRelationEditObj::isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, CFBamRelationEditObj::getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FromIndexId, CFBamRelationEditObj::getRequiredFromIndexId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToTableId, CFBamRelationEditObj::getRequiredToTableId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToIndexId, CFBamRelationEditObj::getRequiredToIndexId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsRequired, CFBamRelationEditObj::getRequiredIsRequired() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsXsdContainer, CFBamRelationEditObj::getRequiredIsXsdContainer() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsLateResolver, CFBamRelationEditObj::getRequiredIsLateResolver() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_AllowAddendum, CFBamRelationEditObj::getRequiredAllowAddendum() ) );
		if( ! CFBamRelationEditObj::isOptionalNarrowedTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NarrowedTenantId, CFBamRelationEditObj::getOptionalNarrowedTenantIdValue() ) );
		}
		if( ! CFBamRelationEditObj::isOptionalNarrowedIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NarrowedId, CFBamRelationEditObj::getOptionalNarrowedIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamRelationEditObj::getGenDefName() {
		return( cfbam::CFBamRelationBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamRelationEditObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerFromTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamRelationEditObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerFromTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamRelationEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamRelationEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamRelationEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamRelationEditObj::getObjQualifiedName() {
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

	std::string CFBamRelationEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamRelationEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamRelationObj* retobj = getSchema()->getRelationTableObj()->realizeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamRelationEditObj::create() {
		cfbam::ICFBamRelationObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getRelationTableObj()->createRelation( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamRelationEditObj::update() {
		getSchema()->getRelationTableObj()->updateRelation( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamRelationEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getRelationTableObj()->deleteRelation( this );
		return( NULL );
	}

	cfbam::ICFBamRelationTableObj* CFBamRelationEditObj::getRelationTable() {
		return( orig->getSchema()->getRelationTableObj() );
	}

	cfbam::ICFBamRelationEditObj* CFBamRelationEditObj::getRelationEdit() {
		return( (cfbam::ICFBamRelationEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamRelationEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamRelationObj* CFBamRelationEditObj::getOrigAsRelation() {
		return( dynamic_cast<cfbam::ICFBamRelationObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamRelationEditObj::getBuff() {
		return( buff );
	}

	void CFBamRelationEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamScopeEditObj::setBuff( value );
		}
	}

	const int64_t CFBamRelationEditObj::getRequiredTableId() {
		return( getRelationBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamRelationEditObj::getRequiredTableIdReference() {
		return( getRelationBuff()->getRequiredTableIdReference() );
	}

	bool CFBamRelationEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getRelationBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamRelationEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getRelationBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamRelationEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getRelationBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamRelationEditObj::isOptionalDefSchemaIdNull() {
		return( getRelationBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamRelationEditObj::getOptionalDefSchemaIdValue() {
		return( getRelationBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamRelationEditObj::getOptionalDefSchemaIdReference() {
		return( getRelationBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamRelationEditObj::getRequiredName() {
		return( getRelationBuff()->getRequiredName() );
	}

	const std::string* CFBamRelationEditObj::getRequiredNameReference() {
		return( getRelationBuff()->getRequiredNameReference() );
	}

	void CFBamRelationEditObj::setRequiredName( const std::string& value ) {
		if( getRelationBuff()->getRequiredName() != value ) {
			getRelationEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamRelationEditObj::isOptionalShortNameNull() {
		return( getRelationBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamRelationEditObj::getOptionalShortNameValue() {
		return( getRelationBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamRelationEditObj::getOptionalShortNameReference() {
		return( getRelationBuff()->getOptionalShortNameReference() );
	}

	void CFBamRelationEditObj::setOptionalShortNameNull() {
		if( ! getRelationBuff()->isOptionalShortNameNull() ) {
			getRelationEditBuff()->setOptionalShortNameNull();
		}
	}

	void CFBamRelationEditObj::setOptionalShortNameValue( const std::string& value ) {
		if( getRelationBuff()->isOptionalShortNameNull() ) {
			getRelationEditBuff()->setOptionalShortNameValue( value );
		}
		else if( getRelationBuff()->getOptionalShortNameValue() != value ) {
			getRelationEditBuff()->setOptionalShortNameValue( value );
		}
	}

	bool CFBamRelationEditObj::isOptionalLabelNull() {
		return( getRelationBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamRelationEditObj::getOptionalLabelValue() {
		return( getRelationBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamRelationEditObj::getOptionalLabelReference() {
		return( getRelationBuff()->getOptionalLabelReference() );
	}

	void CFBamRelationEditObj::setOptionalLabelNull() {
		if( ! getRelationBuff()->isOptionalLabelNull() ) {
			getRelationEditBuff()->setOptionalLabelNull();
		}
	}

	void CFBamRelationEditObj::setOptionalLabelValue( const std::string& value ) {
		if( getRelationBuff()->isOptionalLabelNull() ) {
			getRelationEditBuff()->setOptionalLabelValue( value );
		}
		else if( getRelationBuff()->getOptionalLabelValue() != value ) {
			getRelationEditBuff()->setOptionalLabelValue( value );
		}
	}

	bool CFBamRelationEditObj::isOptionalShortDescriptionNull() {
		return( getRelationBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamRelationEditObj::getOptionalShortDescriptionValue() {
		return( getRelationBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamRelationEditObj::getOptionalShortDescriptionReference() {
		return( getRelationBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamRelationEditObj::setOptionalShortDescriptionNull() {
		if( ! getRelationBuff()->isOptionalShortDescriptionNull() ) {
			getRelationEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamRelationEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getRelationBuff()->isOptionalShortDescriptionNull() ) {
			getRelationEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getRelationBuff()->getOptionalShortDescriptionValue() != value ) {
			getRelationEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamRelationEditObj::isOptionalDescriptionNull() {
		return( getRelationBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamRelationEditObj::getOptionalDescriptionValue() {
		return( getRelationBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamRelationEditObj::getOptionalDescriptionReference() {
		return( getRelationBuff()->getOptionalDescriptionReference() );
	}

	void CFBamRelationEditObj::setOptionalDescriptionNull() {
		if( ! getRelationBuff()->isOptionalDescriptionNull() ) {
			getRelationEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamRelationEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getRelationBuff()->isOptionalDescriptionNull() ) {
			getRelationEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getRelationBuff()->getOptionalDescriptionValue() != value ) {
			getRelationEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	const cfbam::ICFBamSchema::RelationTypeEnum CFBamRelationEditObj::getRequiredRelationType() {
		return( getRelationBuff()->getRequiredRelationType() );
	}

	const cfbam::ICFBamSchema::RelationTypeEnum* CFBamRelationEditObj::getRequiredRelationTypeReference() {
		return( getRelationBuff()->getRequiredRelationTypeReference() );
	}

	void CFBamRelationEditObj::setRequiredRelationType( const cfbam::ICFBamSchema::RelationTypeEnum value ) {
		if( getRelationBuff()->getRequiredRelationType() != value ) {
			getRelationEditBuff()->setRequiredRelationType( value );
		}
	}

	bool CFBamRelationEditObj::isOptionalDbNameNull() {
		return( getRelationBuff()->isOptionalDbNameNull() );
	}

	const std::string& CFBamRelationEditObj::getOptionalDbNameValue() {
		return( getRelationBuff()->getOptionalDbNameValue() );
	}

	const std::string* CFBamRelationEditObj::getOptionalDbNameReference() {
		return( getRelationBuff()->getOptionalDbNameReference() );
	}

	void CFBamRelationEditObj::setOptionalDbNameNull() {
		if( ! getRelationBuff()->isOptionalDbNameNull() ) {
			getRelationEditBuff()->setOptionalDbNameNull();
		}
	}

	void CFBamRelationEditObj::setOptionalDbNameValue( const std::string& value ) {
		if( getRelationBuff()->isOptionalDbNameNull() ) {
			getRelationEditBuff()->setOptionalDbNameValue( value );
		}
		else if( getRelationBuff()->getOptionalDbNameValue() != value ) {
			getRelationEditBuff()->setOptionalDbNameValue( value );
		}
	}

	bool CFBamRelationEditObj::isOptionalSuffixNull() {
		return( getRelationBuff()->isOptionalSuffixNull() );
	}

	const std::string& CFBamRelationEditObj::getOptionalSuffixValue() {
		return( getRelationBuff()->getOptionalSuffixValue() );
	}

	const std::string* CFBamRelationEditObj::getOptionalSuffixReference() {
		return( getRelationBuff()->getOptionalSuffixReference() );
	}

	void CFBamRelationEditObj::setOptionalSuffixNull() {
		if( ! getRelationBuff()->isOptionalSuffixNull() ) {
			getRelationEditBuff()->setOptionalSuffixNull();
		}
	}

	void CFBamRelationEditObj::setOptionalSuffixValue( const std::string& value ) {
		if( getRelationBuff()->isOptionalSuffixNull() ) {
			getRelationEditBuff()->setOptionalSuffixValue( value );
		}
		else if( getRelationBuff()->getOptionalSuffixValue() != value ) {
			getRelationEditBuff()->setOptionalSuffixValue( value );
		}
	}

	const int64_t CFBamRelationEditObj::getRequiredFromIndexId() {
		return( getRelationBuff()->getRequiredFromIndexId() );
	}

	const int64_t* CFBamRelationEditObj::getRequiredFromIndexIdReference() {
		return( getRelationBuff()->getRequiredFromIndexIdReference() );
	}

	const int64_t CFBamRelationEditObj::getRequiredToTableId() {
		return( getRelationBuff()->getRequiredToTableId() );
	}

	const int64_t* CFBamRelationEditObj::getRequiredToTableIdReference() {
		return( getRelationBuff()->getRequiredToTableIdReference() );
	}

	const int64_t CFBamRelationEditObj::getRequiredToIndexId() {
		return( getRelationBuff()->getRequiredToIndexId() );
	}

	const int64_t* CFBamRelationEditObj::getRequiredToIndexIdReference() {
		return( getRelationBuff()->getRequiredToIndexIdReference() );
	}

	const bool CFBamRelationEditObj::getRequiredIsRequired() {
		return( getRelationBuff()->getRequiredIsRequired() );
	}

	const bool* CFBamRelationEditObj::getRequiredIsRequiredReference() {
		return( getRelationBuff()->getRequiredIsRequiredReference() );
	}

	void CFBamRelationEditObj::setRequiredIsRequired( const bool value ) {
		if( getRelationBuff()->getRequiredIsRequired() != value ) {
			getRelationEditBuff()->setRequiredIsRequired( value );
		}
	}

	const bool CFBamRelationEditObj::getRequiredIsXsdContainer() {
		return( getRelationBuff()->getRequiredIsXsdContainer() );
	}

	const bool* CFBamRelationEditObj::getRequiredIsXsdContainerReference() {
		return( getRelationBuff()->getRequiredIsXsdContainerReference() );
	}

	void CFBamRelationEditObj::setRequiredIsXsdContainer( const bool value ) {
		if( getRelationBuff()->getRequiredIsXsdContainer() != value ) {
			getRelationEditBuff()->setRequiredIsXsdContainer( value );
		}
	}

	const bool CFBamRelationEditObj::getRequiredIsLateResolver() {
		return( getRelationBuff()->getRequiredIsLateResolver() );
	}

	const bool* CFBamRelationEditObj::getRequiredIsLateResolverReference() {
		return( getRelationBuff()->getRequiredIsLateResolverReference() );
	}

	void CFBamRelationEditObj::setRequiredIsLateResolver( const bool value ) {
		if( getRelationBuff()->getRequiredIsLateResolver() != value ) {
			getRelationEditBuff()->setRequiredIsLateResolver( value );
		}
	}

	const bool CFBamRelationEditObj::getRequiredAllowAddendum() {
		return( getRelationBuff()->getRequiredAllowAddendum() );
	}

	const bool* CFBamRelationEditObj::getRequiredAllowAddendumReference() {
		return( getRelationBuff()->getRequiredAllowAddendumReference() );
	}

	void CFBamRelationEditObj::setRequiredAllowAddendum( const bool value ) {
		if( getRelationBuff()->getRequiredAllowAddendum() != value ) {
			getRelationEditBuff()->setRequiredAllowAddendum( value );
		}
	}

	bool CFBamRelationEditObj::isOptionalNarrowedTenantIdNull() {
		return( getRelationBuff()->isOptionalNarrowedTenantIdNull() );
	}

	const int64_t CFBamRelationEditObj::getOptionalNarrowedTenantIdValue() {
		return( getRelationBuff()->getOptionalNarrowedTenantIdValue() );
	}

	const int64_t* CFBamRelationEditObj::getOptionalNarrowedTenantIdReference() {
		return( getRelationBuff()->getOptionalNarrowedTenantIdReference() );
	}

	bool CFBamRelationEditObj::isOptionalNarrowedIdNull() {
		return( getRelationBuff()->isOptionalNarrowedIdNull() );
	}

	const int64_t CFBamRelationEditObj::getOptionalNarrowedIdValue() {
		return( getRelationBuff()->getOptionalNarrowedIdValue() );
	}

	const int64_t* CFBamRelationEditObj::getOptionalNarrowedIdReference() {
		return( getRelationBuff()->getOptionalNarrowedIdReference() );
	}

	cfbam::ICFBamSchemaDefObj* CFBamRelationEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getRelationBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getRelationBuff()->getOptionalDefSchemaTenantIdValue(),
					getRelationBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamRelationEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getRelationEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getRelationEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getRelationEditBuff()->setOptionalDefSchemaTenantIdNull();
				getRelationEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	cfbam::ICFBamTableObj* CFBamRelationEditObj::getRequiredContainerFromTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationBuff()->getRequiredTableId() );
		}
		return( retobj );
	}

	void CFBamRelationEditObj::setRequiredContainerFromTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getRelationEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getRelationEditBuff()->setRequiredTableId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationEditObj::getOptionalComponentsColumns( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationColObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getRelationColTableObj()->readRelationColByRelationIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamPopTopDepObj*> CFBamRelationEditObj::getOptionalComponentsPopDep( bool forceRead ) {
		std::vector<cfbam::ICFBamPopTopDepObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getPopTopDepTableObj()->readPopTopDepByContRelIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfsec::ICFSecTenantObj* CFBamRelationEditObj::getRequiredOwnerRelTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamRelationEditObj::setRequiredOwnerRelTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getRelationEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}

			CFBamScopeEditObj::setRequiredOwnerTenant( value );		}

	cfbam::ICFBamIndexObj* CFBamRelationEditObj::getRequiredLookupFromIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getIndexTableObj()->readIndexByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationBuff()->getRequiredFromIndexId() );
		}
		return( retobj );
	}

	void CFBamRelationEditObj::setRequiredLookupFromIndex( cfbam::ICFBamIndexObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getRelationEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getRelationEditBuff()->setRequiredFromIndexId( value->getRequiredId() );
			}
			else {
			}
		}

	cfbam::ICFBamTableObj* CFBamRelationEditObj::getRequiredLookupToTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationBuff()->getRequiredToTableId() );
		}
		return( retobj );
	}

	void CFBamRelationEditObj::setRequiredLookupToTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getRelationEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getRelationEditBuff()->setRequiredToTableId( value->getRequiredId() );
			}
			else {
			}
		}

	cfbam::ICFBamIndexObj* CFBamRelationEditObj::getRequiredLookupToIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getIndexTableObj()->readIndexByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationBuff()->getRequiredToIndexId() );
		}
		return( retobj );
	}

	void CFBamRelationEditObj::setRequiredLookupToIndex( cfbam::ICFBamIndexObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getRelationEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getRelationEditBuff()->setRequiredToIndexId( value->getRequiredId() );
			}
			else {
			}
		}

	cfbam::ICFBamRelationObj* CFBamRelationEditObj::getOptionalLookupNarrowed( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;

			if( getRelationBuff()->isOptionalNarrowedTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationBuff()->isOptionalNarrowedIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelation()->getSchema() )->getRelationTableObj()->readRelationByIdIdx( getRelationBuff()->getOptionalNarrowedTenantIdValue(),
					getRelationBuff()->getOptionalNarrowedIdValue() );
		}
		return( retobj );
	}

	void CFBamRelationEditObj::setOptionalLookupNarrowed( cfbam::ICFBamRelationObj* value ) {
			
			if( value != NULL ) {
				getRelationEditBuff()->setOptionalNarrowedTenantIdValue( value->getRequiredTenantId() );
				getRelationEditBuff()->setOptionalNarrowedIdValue( value->getRequiredId() );
			}
			else {
				getRelationEditBuff()->setOptionalNarrowedTenantIdNull();
				getRelationEditBuff()->setOptionalNarrowedIdNull();
			}
		}

	void CFBamRelationEditObj::copyBuffToOrig() {
		cfbam::CFBamRelationBuff* origBuff = getOrigAsRelation()->getRelationEditBuff();
		cfbam::CFBamRelationBuff* myBuff = getRelationBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamRelationEditObj::copyOrigToBuff() {
		cfbam::CFBamRelationBuff* origBuff = getOrigAsRelation()->getRelationBuff();
		cfbam::CFBamRelationBuff* myBuff = getRelationEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	cfbam::ICFBamSubProjectObj* cfbam::CFBamRelationEditObj::getProject(){
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

	cfbam::ICFBamTopDomainObj* cfbam::CFBamRelationEditObj::getCompany(){
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

	cfbam::ICFBamSchemaDefObj* cfbam::CFBamRelationEditObj::getSchemaDef(){
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

	cfbam::ICFBamMinorVersionObj* cfbam::CFBamRelationEditObj::getVersion(){
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

	std::string cfbam::CFBamRelationEditObj::getVersionStringForVersion( cflib::ICFLibAnyObj* value ) {
		std::string ret;
		if( value->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMinorVersionObj*>( value )->getRequiredName();
		}
		else if( value->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMajorVersionObj*>( value )->getRequiredName();
		}
		return( ret );
	}

	std::string cfbam::CFBamRelationEditObj::getVersionString(){
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

	std::string cfbam::CFBamRelationEditObj::getPackedVersionString(){
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

	bool cfbam::CFBamRelationEditObj::isColumnInOwnerRelation(){
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
