// Description: C++18 edit object instance implementation for CFBam RelationCol.

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
#include <cfbamobj/CFBamRelationColObj.hpp>
#include <cfbamobj/CFBamRelationColEditObj.hpp>


namespace cfbam {

	const std::string CFBamRelationColEditObj::CLASS_NAME( "CFBamRelationColEditObj" );

	CFBamRelationColEditObj::CFBamRelationColEditObj( cfbam::ICFBamRelationColObj* argOrig )
	: ICFBamRelationColEditObj()
	{
		static const std::string S_ProcName( "CFBamRelationColEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfbam::CFBamRelationColBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( origBuff->clone() );
	}

	CFBamRelationColEditObj::~CFBamRelationColEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamRelationColEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamRelationColEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getRelationColBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamRelationColEditObj::getCreatedAt() {
		return( getRelationColBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamRelationColEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getRelationColBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamRelationColEditObj::getUpdatedAt() {
		return( getRelationColBuff()->getUpdatedAt() );
	}

	void CFBamRelationColEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getRelationColEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamRelationColEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getRelationColEditBuff()->setCreatedAt( value );
	}

	void CFBamRelationColEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getRelationColEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamRelationColEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getRelationColEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamRelationColEditObj::getClassCode() const {
		return( cfbam::CFBamRelationColBuff::CLASS_CODE );
	}

	bool CFBamRelationColEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamRelationColEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationColEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_RelationId( "RelationId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_FromColId( "FromColId" );
		static const std::string S_ToColId( "ToColId" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamRelationColEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamRelationColEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamRelationColEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamRelationColEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamRelationColEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamRelationColEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamRelationColEditObj::getRequiredRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamRelationColEditObj::getRequiredId() ) );
		if( ! CFBamRelationColEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamRelationColEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamRelationColEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamRelationColEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamRelationColEditObj::getRequiredName() ) );
		if( ! CFBamRelationColEditObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamRelationColEditObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamRelationColEditObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamRelationColEditObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamRelationColEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamRelationColEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamRelationColEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamRelationColEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FromColId, CFBamRelationColEditObj::getRequiredFromColId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToColId, CFBamRelationColEditObj::getRequiredToColId() ) );
		if( ! CFBamRelationColEditObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamRelationColEditObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamRelationColEditObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamRelationColEditObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamRelationColEditObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamRelationColEditObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamRelationColEditObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamRelationColEditObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamRelationColEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamRelationColEditObj::setRequiredRevision( int32_t value ) {
		getRelationColEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamRelationColEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamRelationColEditObj::getGenDefName() {
		return( cfbam::CFBamRelationColBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamRelationColEditObj::getScope() {
		cfbam::ICFBamRelationObj* scope = getRequiredContainerRelation();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamRelationColEditObj::getObjScope() {
		cfbam::ICFBamRelationObj* scope = getRequiredContainerRelation();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamRelationColEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamRelationColEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamRelationColEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamRelationColEditObj::getObjQualifiedName() {
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

	std::string CFBamRelationColEditObj::getObjFullName() {
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

	cfbam::ICFBamRelationColObj* CFBamRelationColEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamRelationColObj* retobj = getSchema()->getRelationColTableObj()->realizeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColEditObj::read( bool forceRead ) {
		cfbam::ICFBamRelationColObj* retval = getOrigAsRelationCol()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColEditObj::create() {
		cfbam::ICFBamRelationColObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelationCol()->getSchema() )->getRelationColTableObj()->createRelationCol( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamRelationColEditObj* CFBamRelationColEditObj::update() {
		getSchema()->getRelationColTableObj()->updateRelationCol( this );
		return( NULL );
	}

	cfbam::ICFBamRelationColEditObj* CFBamRelationColEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getRelationColTableObj()->deleteRelationCol( this );
		return( NULL );
	}

	cfbam::ICFBamRelationColTableObj* CFBamRelationColEditObj::getRelationColTable() {
		return( orig->getSchema()->getRelationColTableObj() );
	}

	cfbam::ICFBamRelationColEditObj* CFBamRelationColEditObj::getEdit() {
		return( this );
	}

	cfbam::ICFBamRelationColEditObj* CFBamRelationColEditObj::getRelationColEdit() {
		return( (cfbam::ICFBamRelationColEditObj*)this );
	}

	cfbam::ICFBamRelationColEditObj* CFBamRelationColEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamRelationColEditObj::endEdit() {
		orig->endEdit();
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColEditObj::getOrig() {
		return( orig );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColEditObj::getOrigAsRelationCol() {
		return( dynamic_cast<cfbam::ICFBamRelationColObj*>( orig ) );
	}

	cfbam::ICFBamSchemaObj* CFBamRelationColEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfbam::CFBamRelationColBuff* CFBamRelationColEditObj::getBuff() {
		return( buff );
	}

	void CFBamRelationColEditObj::setBuff( cfbam::CFBamRelationColBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfbam::CFBamRelationColPKey* CFBamRelationColEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamRelationColEditObj::setPKey( cfbam::CFBamRelationColPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamRelationColEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamRelationColEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamRelationColEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamRelationColEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamRelationColEditObj::getRequiredRelationId() {
		return( getRelationColBuff()->getRequiredRelationId() );
	}

	const int64_t* CFBamRelationColEditObj::getRequiredRelationIdReference() {
		return( getRelationColBuff()->getRequiredRelationIdReference() );
	}

	const int64_t CFBamRelationColEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamRelationColEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamRelationColEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getRelationColBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamRelationColEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getRelationColBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamRelationColEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getRelationColBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamRelationColEditObj::isOptionalDefSchemaIdNull() {
		return( getRelationColBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamRelationColEditObj::getOptionalDefSchemaIdValue() {
		return( getRelationColBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamRelationColEditObj::getOptionalDefSchemaIdReference() {
		return( getRelationColBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamRelationColEditObj::getRequiredName() {
		return( getRelationColBuff()->getRequiredName() );
	}

	const std::string* CFBamRelationColEditObj::getRequiredNameReference() {
		return( getRelationColBuff()->getRequiredNameReference() );
	}

	void CFBamRelationColEditObj::setRequiredName( const std::string& value ) {
		if( getRelationColBuff()->getRequiredName() != value ) {
			getRelationColEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamRelationColEditObj::isOptionalShortNameNull() {
		return( getRelationColBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamRelationColEditObj::getOptionalShortNameValue() {
		return( getRelationColBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamRelationColEditObj::getOptionalShortNameReference() {
		return( getRelationColBuff()->getOptionalShortNameReference() );
	}

	void CFBamRelationColEditObj::setOptionalShortNameNull() {
		if( ! getRelationColBuff()->isOptionalShortNameNull() ) {
			getRelationColEditBuff()->setOptionalShortNameNull();
		}
	}

	void CFBamRelationColEditObj::setOptionalShortNameValue( const std::string& value ) {
		if( getRelationColBuff()->isOptionalShortNameNull() ) {
			getRelationColEditBuff()->setOptionalShortNameValue( value );
		}
		else if( getRelationColBuff()->getOptionalShortNameValue() != value ) {
			getRelationColEditBuff()->setOptionalShortNameValue( value );
		}
	}

	bool CFBamRelationColEditObj::isOptionalLabelNull() {
		return( getRelationColBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamRelationColEditObj::getOptionalLabelValue() {
		return( getRelationColBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamRelationColEditObj::getOptionalLabelReference() {
		return( getRelationColBuff()->getOptionalLabelReference() );
	}

	void CFBamRelationColEditObj::setOptionalLabelNull() {
		if( ! getRelationColBuff()->isOptionalLabelNull() ) {
			getRelationColEditBuff()->setOptionalLabelNull();
		}
	}

	void CFBamRelationColEditObj::setOptionalLabelValue( const std::string& value ) {
		if( getRelationColBuff()->isOptionalLabelNull() ) {
			getRelationColEditBuff()->setOptionalLabelValue( value );
		}
		else if( getRelationColBuff()->getOptionalLabelValue() != value ) {
			getRelationColEditBuff()->setOptionalLabelValue( value );
		}
	}

	bool CFBamRelationColEditObj::isOptionalShortDescriptionNull() {
		return( getRelationColBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamRelationColEditObj::getOptionalShortDescriptionValue() {
		return( getRelationColBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamRelationColEditObj::getOptionalShortDescriptionReference() {
		return( getRelationColBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamRelationColEditObj::setOptionalShortDescriptionNull() {
		if( ! getRelationColBuff()->isOptionalShortDescriptionNull() ) {
			getRelationColEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamRelationColEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getRelationColBuff()->isOptionalShortDescriptionNull() ) {
			getRelationColEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getRelationColBuff()->getOptionalShortDescriptionValue() != value ) {
			getRelationColEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamRelationColEditObj::isOptionalDescriptionNull() {
		return( getRelationColBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamRelationColEditObj::getOptionalDescriptionValue() {
		return( getRelationColBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamRelationColEditObj::getOptionalDescriptionReference() {
		return( getRelationColBuff()->getOptionalDescriptionReference() );
	}

	void CFBamRelationColEditObj::setOptionalDescriptionNull() {
		if( ! getRelationColBuff()->isOptionalDescriptionNull() ) {
			getRelationColEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamRelationColEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getRelationColBuff()->isOptionalDescriptionNull() ) {
			getRelationColEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getRelationColBuff()->getOptionalDescriptionValue() != value ) {
			getRelationColEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	const int64_t CFBamRelationColEditObj::getRequiredFromColId() {
		return( getRelationColBuff()->getRequiredFromColId() );
	}

	const int64_t* CFBamRelationColEditObj::getRequiredFromColIdReference() {
		return( getRelationColBuff()->getRequiredFromColIdReference() );
	}

	const int64_t CFBamRelationColEditObj::getRequiredToColId() {
		return( getRelationColBuff()->getRequiredToColId() );
	}

	const int64_t* CFBamRelationColEditObj::getRequiredToColIdReference() {
		return( getRelationColBuff()->getRequiredToColIdReference() );
	}

	bool CFBamRelationColEditObj::isOptionalPrevTenantIdNull() {
		return( getRelationColBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamRelationColEditObj::getOptionalPrevTenantIdValue() {
		return( getRelationColBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamRelationColEditObj::getOptionalPrevTenantIdReference() {
		return( getRelationColBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamRelationColEditObj::isOptionalPrevIdNull() {
		return( getRelationColBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamRelationColEditObj::getOptionalPrevIdValue() {
		return( getRelationColBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamRelationColEditObj::getOptionalPrevIdReference() {
		return( getRelationColBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamRelationColEditObj::isOptionalNextTenantIdNull() {
		return( getRelationColBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamRelationColEditObj::getOptionalNextTenantIdValue() {
		return( getRelationColBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamRelationColEditObj::getOptionalNextTenantIdReference() {
		return( getRelationColBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamRelationColEditObj::isOptionalNextIdNull() {
		return( getRelationColBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamRelationColEditObj::getOptionalNextIdValue() {
		return( getRelationColBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamRelationColEditObj::getOptionalNextIdReference() {
		return( getRelationColBuff()->getOptionalNextIdReference() );
	}

	cfbam::ICFBamRelationObj* CFBamRelationColEditObj::getRequiredContainerRelation( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelationCol()->getSchema() )->getRelationTableObj()->readRelationByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationColBuff()->getRequiredRelationId() );
		}
		return( retobj );
	}

	void CFBamRelationColEditObj::setRequiredContainerRelation( cfbam::ICFBamRelationObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getRelationColEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getRelationColEditBuff()->setRequiredRelationId( value->getRequiredId() );
			}
		}

	cfsec::ICFSecTenantObj* CFBamRelationColEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelationCol()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamRelationColEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getRelationColEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamRelationColEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getRelationColBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationColBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelationCol()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getRelationColBuff()->getOptionalDefSchemaTenantIdValue(),
					getRelationColBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamRelationColEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getRelationColEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getRelationColEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getRelationColEditBuff()->setOptionalDefSchemaTenantIdNull();
				getRelationColEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	cfbam::ICFBamRelationColObj* CFBamRelationColEditObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamRelationColObj* retobj = NULL;
		bool anyMissing = false;

			if( getRelationColBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationColBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelationCol()->getSchema() )->getRelationColTableObj()->readRelationColByIdIdx( getRelationColBuff()->getOptionalPrevTenantIdValue(),
					getRelationColBuff()->getOptionalPrevIdValue() );
		}
		return( retobj );
	}

	void CFBamRelationColEditObj::setOptionalLookupPrev( cfbam::ICFBamRelationColObj* value ) {
			
			if( value != NULL ) {
				getRelationColEditBuff()->setOptionalPrevTenantIdValue( value->getRequiredTenantId() );
				getRelationColEditBuff()->setOptionalPrevIdValue( value->getRequiredId() );
			}
			else {
				getRelationColEditBuff()->setOptionalPrevTenantIdNull();
				getRelationColEditBuff()->setOptionalPrevIdNull();
			}
		}

	cfbam::ICFBamRelationColObj* CFBamRelationColEditObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamRelationColObj* retobj = NULL;
		bool anyMissing = false;

			if( getRelationColBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationColBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelationCol()->getSchema() )->getRelationColTableObj()->readRelationColByIdIdx( getRelationColBuff()->getOptionalNextTenantIdValue(),
					getRelationColBuff()->getOptionalNextIdValue() );
		}
		return( retobj );
	}

	void CFBamRelationColEditObj::setOptionalLookupNext( cfbam::ICFBamRelationColObj* value ) {
			
			if( value != NULL ) {
				getRelationColEditBuff()->setOptionalNextTenantIdValue( value->getRequiredTenantId() );
				getRelationColEditBuff()->setOptionalNextIdValue( value->getRequiredId() );
			}
			else {
				getRelationColEditBuff()->setOptionalNextTenantIdNull();
				getRelationColEditBuff()->setOptionalNextIdNull();
			}
		}

	cfbam::ICFBamIndexColObj* CFBamRelationColEditObj::getRequiredLookupFromCol( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelationCol()->getSchema() )->getIndexColTableObj()->readIndexColByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationColBuff()->getRequiredFromColId() );
		}
		return( retobj );
	}

	void CFBamRelationColEditObj::setRequiredLookupFromCol( cfbam::ICFBamIndexColObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getRelationColEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getRelationColEditBuff()->setRequiredFromColId( value->getRequiredId() );
			}
			else {
			}
		}

	cfbam::ICFBamIndexColObj* CFBamRelationColEditObj::getRequiredLookupToCol( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsRelationCol()->getSchema() )->getIndexColTableObj()->readIndexColByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationColBuff()->getRequiredToColId() );
		}
		return( retobj );
	}

	void CFBamRelationColEditObj::setRequiredLookupToCol( cfbam::ICFBamIndexColObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getRelationColEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getRelationColEditBuff()->setRequiredToColId( value->getRequiredId() );
			}
			else {
			}
		}

	void CFBamRelationColEditObj::copyPKeyToBuff() {
		cfbam::CFBamRelationColPKey* tablePKey = getPKey();
		cfbam::CFBamRelationColBuff* tableBuff = getRelationColEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamRelationColEditObj::copyBuffToPKey() {
		cfbam::CFBamRelationColPKey* tablePKey = getPKey();
		cfbam::CFBamRelationColBuff* tableBuff = getRelationColBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamRelationColEditObj::copyBuffToOrig() {
		cfbam::CFBamRelationColBuff* origBuff = getOrigAsRelationCol()->getRelationColEditBuff();
		cfbam::CFBamRelationColBuff* myBuff = getRelationColBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamRelationColEditObj::copyOrigToBuff() {
		cfbam::CFBamRelationColBuff* origBuff = getOrigAsRelationCol()->getRelationColBuff();
		cfbam::CFBamRelationColBuff* myBuff = getRelationColEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	cfbam::ICFBamSubProjectObj* CFBamRelationColEditObj::getProject() {
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

	cfbam::ICFBamTopDomainObj* CFBamRelationColEditObj::getCompany() {
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

	cfbam::ICFBamSchemaDefObj* CFBamRelationColEditObj::getSchemaDef() {
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

	cfbam::ICFBamMinorVersionObj* CFBamRelationColEditObj::getVersion() {
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

	std::string CFBamRelationColEditObj::getVersionStringForVersion( cflib::ICFLibAnyObj* value ) {
		std::string ret;
		if( value->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMinorVersionObj*>( value )->getRequiredName();
		}
		else if( value->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMajorVersionObj*>( value )->getRequiredName();
		}
		return( ret );
	}

	std::string CFBamRelationColEditObj::getVersionString() {
		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* curDef = getVersion();
		std::vector<std::string> invertedNodeNames;
		while( curDef != NULL ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMajorVersionObj*>( curDef ) ) );
			}
			scopeDef = curDef->getObjScope();
			if( scopeDef == NULL ) {
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

	std::string CFBamRelationColEditObj::getPackedVersionString() {
		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* curDef = getVersion();
		std::vector<std::string> invertedNodeNames;
		while( curDef != NULL ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMajorVersionObj*>( curDef ) ) );
			}
			scopeDef = curDef->getObjScope();
			if( scopeDef == NULL ) {
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

	bool CFBamRelationColEditObj::isColumnInOwnerRelation() {
		static const std::string S_ProcName( "isColumnInOwnerRelation" );
		static const std::string S_This( "this" );
		static const std::string S_GenContextGenDefColumnDefLookupColumn( "GenContext.GenDef.ColumnDef.LookupColumn" );
		static const std::string S_GenContextGenDefFromColumnDef( "GenContext.GenDef.FromColumnDef" );
		static const std::string S_FirstClassList( "ICFBamAtomObj, ICFBamTableColObj" );
		static const std::string S_SecondClassList( "ICFBamAtomObj, ICFBamTableColObj, ICFBamIndexColObj, ICFBamRelationColObj" );
		cflib::ICFLibAnyObj* focusDef;
		cfbam::ICFBamTableObj* tableDef;
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
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_GenContextGenDefColumnDefLookupColumn, focusDef, S_FirstClassList );
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
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_GenContextGenDefColumnDefLookupColumn, columnDef, S_FirstClassList );
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_This, this, S_SecondClassList );
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
