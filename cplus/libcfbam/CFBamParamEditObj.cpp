// Description: C++18 edit object instance implementation for CFBam Param.

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
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamParamObj.hpp>
#include <cfbamobj/CFBamParamEditObj.hpp>


namespace cfbam {

	const std::string CFBamParamEditObj::CLASS_NAME( "CFBamParamEditObj" );

	CFBamParamEditObj::CFBamParamEditObj( cfbam::ICFBamParamObj* argOrig )
	: ICFBamParamEditObj()
	{
		static const std::string S_ProcName( "CFBamParamEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfbam::CFBamParamBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfbam::CFBamParamBuff*>( origBuff->clone() );
	}

	CFBamParamEditObj::~CFBamParamEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamParamEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamParamEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getParamBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamParamEditObj::getCreatedAt() {
		return( getParamBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamParamEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getParamBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamParamEditObj::getUpdatedAt() {
		return( getParamBuff()->getUpdatedAt() );
	}

	void CFBamParamEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getParamEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamParamEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getParamEditBuff()->setCreatedAt( value );
	}

	void CFBamParamEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getParamEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamParamEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getParamEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamParamEditObj::getClassCode() const {
		return( cfbam::CFBamParamBuff::CLASS_CODE );
	}

	bool CFBamParamEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamParamBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamParamEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamParamEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ServerMethodId( "ServerMethodId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_IsNullable( "IsNullable" );
		static const std::string S_TypeTenantId( "TypeTenantId" );
		static const std::string S_TypeId( "TypeId" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamParamEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamParamEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamParamEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamParamEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamParamEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamParamEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ServerMethodId, CFBamParamEditObj::getRequiredServerMethodId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamParamEditObj::getRequiredId() ) );
		if( ! CFBamParamEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamParamEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamParamEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamParamEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamParamEditObj::getRequiredName() ) );
		if( ! CFBamParamEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamParamEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamParamEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamParamEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsNullable, CFBamParamEditObj::getRequiredIsNullable() ) );
		if( ! CFBamParamEditObj::isOptionalTypeTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TypeTenantId, CFBamParamEditObj::getOptionalTypeTenantIdValue() ) );
		}
		if( ! CFBamParamEditObj::isOptionalTypeIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TypeId, CFBamParamEditObj::getOptionalTypeIdValue() ) );
		}
		if( ! CFBamParamEditObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamParamEditObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamParamEditObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamParamEditObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamParamEditObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamParamEditObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamParamEditObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamParamEditObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamParamEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamParamEditObj::setRequiredRevision( int32_t value ) {
		getParamEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamParamEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamParamEditObj::getGenDefName() {
		return( cfbam::CFBamParamBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamParamEditObj::getScope() {
		cfbam::ICFBamServerMethodObj* scope = getRequiredContainerServerMeth();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamParamEditObj::getObjScope() {
		cfbam::ICFBamServerMethodObj* scope = getRequiredContainerServerMeth();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamParamEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamParamEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamParamEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamParamEditObj::getObjQualifiedName() {
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

	std::string CFBamParamEditObj::getObjFullName() {
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

	cfbam::ICFBamParamObj* CFBamParamEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamParamObj* retobj = getSchema()->getParamTableObj()->realizeParam( dynamic_cast<cfbam::ICFBamParamObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamParamObj* CFBamParamEditObj::read( bool forceRead ) {
		cfbam::ICFBamParamObj* retval = getOrigAsParam()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfbam::ICFBamParamObj* CFBamParamEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamParamObj* CFBamParamEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamParamObj* CFBamParamEditObj::create() {
		cfbam::ICFBamParamObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsParam()->getSchema() )->getParamTableObj()->createParam( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamParamEditObj* CFBamParamEditObj::update() {
		getSchema()->getParamTableObj()->updateParam( this );
		return( NULL );
	}

	cfbam::ICFBamParamEditObj* CFBamParamEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getParamTableObj()->deleteParam( this );
		return( NULL );
	}

	cfbam::ICFBamParamTableObj* CFBamParamEditObj::getParamTable() {
		return( orig->getSchema()->getParamTableObj() );
	}

	cfbam::ICFBamParamEditObj* CFBamParamEditObj::getEdit() {
		return( this );
	}

	cfbam::ICFBamParamEditObj* CFBamParamEditObj::getParamEdit() {
		return( (cfbam::ICFBamParamEditObj*)this );
	}

	cfbam::ICFBamParamEditObj* CFBamParamEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamParamEditObj::endEdit() {
		orig->endEdit();
	}

	cfbam::ICFBamParamObj* CFBamParamEditObj::getOrig() {
		return( orig );
	}

	cfbam::ICFBamParamObj* CFBamParamEditObj::getOrigAsParam() {
		return( dynamic_cast<cfbam::ICFBamParamObj*>( orig ) );
	}

	cfbam::ICFBamSchemaObj* CFBamParamEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfbam::CFBamParamBuff* CFBamParamEditObj::getBuff() {
		return( buff );
	}

	void CFBamParamEditObj::setBuff( cfbam::CFBamParamBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfbam::CFBamParamPKey* CFBamParamEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamParamEditObj::setPKey( cfbam::CFBamParamPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamParamEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamParamEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamParamEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamParamEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamParamEditObj::getRequiredServerMethodId() {
		return( getParamBuff()->getRequiredServerMethodId() );
	}

	const int64_t* CFBamParamEditObj::getRequiredServerMethodIdReference() {
		return( getParamBuff()->getRequiredServerMethodIdReference() );
	}

	const int64_t CFBamParamEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamParamEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamParamEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getParamBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamParamEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getParamBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamParamEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getParamBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamParamEditObj::isOptionalDefSchemaIdNull() {
		return( getParamBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamParamEditObj::getOptionalDefSchemaIdValue() {
		return( getParamBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamParamEditObj::getOptionalDefSchemaIdReference() {
		return( getParamBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamParamEditObj::getRequiredName() {
		return( getParamBuff()->getRequiredName() );
	}

	const std::string* CFBamParamEditObj::getRequiredNameReference() {
		return( getParamBuff()->getRequiredNameReference() );
	}

	void CFBamParamEditObj::setRequiredName( const std::string& value ) {
		if( getParamBuff()->getRequiredName() != value ) {
			getParamEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamParamEditObj::isOptionalShortDescriptionNull() {
		return( getParamBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamParamEditObj::getOptionalShortDescriptionValue() {
		return( getParamBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamParamEditObj::getOptionalShortDescriptionReference() {
		return( getParamBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamParamEditObj::setOptionalShortDescriptionNull() {
		if( ! getParamBuff()->isOptionalShortDescriptionNull() ) {
			getParamEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamParamEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getParamBuff()->isOptionalShortDescriptionNull() ) {
			getParamEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getParamBuff()->getOptionalShortDescriptionValue() != value ) {
			getParamEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamParamEditObj::isOptionalDescriptionNull() {
		return( getParamBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamParamEditObj::getOptionalDescriptionValue() {
		return( getParamBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamParamEditObj::getOptionalDescriptionReference() {
		return( getParamBuff()->getOptionalDescriptionReference() );
	}

	void CFBamParamEditObj::setOptionalDescriptionNull() {
		if( ! getParamBuff()->isOptionalDescriptionNull() ) {
			getParamEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamParamEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getParamBuff()->isOptionalDescriptionNull() ) {
			getParamEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getParamBuff()->getOptionalDescriptionValue() != value ) {
			getParamEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	const bool CFBamParamEditObj::getRequiredIsNullable() {
		return( getParamBuff()->getRequiredIsNullable() );
	}

	const bool* CFBamParamEditObj::getRequiredIsNullableReference() {
		return( getParamBuff()->getRequiredIsNullableReference() );
	}

	void CFBamParamEditObj::setRequiredIsNullable( const bool value ) {
		if( getParamBuff()->getRequiredIsNullable() != value ) {
			getParamEditBuff()->setRequiredIsNullable( value );
		}
	}

	bool CFBamParamEditObj::isOptionalTypeTenantIdNull() {
		return( getParamBuff()->isOptionalTypeTenantIdNull() );
	}

	const int64_t CFBamParamEditObj::getOptionalTypeTenantIdValue() {
		return( getParamBuff()->getOptionalTypeTenantIdValue() );
	}

	const int64_t* CFBamParamEditObj::getOptionalTypeTenantIdReference() {
		return( getParamBuff()->getOptionalTypeTenantIdReference() );
	}

	bool CFBamParamEditObj::isOptionalTypeIdNull() {
		return( getParamBuff()->isOptionalTypeIdNull() );
	}

	const int64_t CFBamParamEditObj::getOptionalTypeIdValue() {
		return( getParamBuff()->getOptionalTypeIdValue() );
	}

	const int64_t* CFBamParamEditObj::getOptionalTypeIdReference() {
		return( getParamBuff()->getOptionalTypeIdReference() );
	}

	bool CFBamParamEditObj::isOptionalPrevTenantIdNull() {
		return( getParamBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamParamEditObj::getOptionalPrevTenantIdValue() {
		return( getParamBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamParamEditObj::getOptionalPrevTenantIdReference() {
		return( getParamBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamParamEditObj::isOptionalPrevIdNull() {
		return( getParamBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamParamEditObj::getOptionalPrevIdValue() {
		return( getParamBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamParamEditObj::getOptionalPrevIdReference() {
		return( getParamBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamParamEditObj::isOptionalNextTenantIdNull() {
		return( getParamBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamParamEditObj::getOptionalNextTenantIdValue() {
		return( getParamBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamParamEditObj::getOptionalNextTenantIdReference() {
		return( getParamBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamParamEditObj::isOptionalNextIdNull() {
		return( getParamBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamParamEditObj::getOptionalNextIdValue() {
		return( getParamBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamParamEditObj::getOptionalNextIdReference() {
		return( getParamBuff()->getOptionalNextIdReference() );
	}

	cfbam::ICFBamServerMethodObj* CFBamParamEditObj::getRequiredContainerServerMeth( bool forceRead ) {
		cfbam::ICFBamServerMethodObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsParam()->getSchema() )->getServerMethodTableObj()->readServerMethodByIdIdx( getPKey()->getRequiredTenantId(),
					getParamBuff()->getRequiredServerMethodId() );
		}
		return( retobj );
	}

	void CFBamParamEditObj::setRequiredContainerServerMeth( cfbam::ICFBamServerMethodObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getParamEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getParamEditBuff()->setRequiredServerMethodId( value->getRequiredId() );
			}
		}

	cfsec::ICFSecTenantObj* CFBamParamEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsParam()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamParamEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getParamEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamParamEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getParamBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getParamBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsParam()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getParamBuff()->getOptionalDefSchemaTenantIdValue(),
					getParamBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamParamEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getParamEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getParamEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getParamEditBuff()->setOptionalDefSchemaTenantIdNull();
				getParamEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	cfbam::ICFBamParamObj* CFBamParamEditObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamParamObj* retobj = NULL;
		bool anyMissing = false;

			if( getParamBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getParamBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsParam()->getSchema() )->getParamTableObj()->readParamByIdIdx( getParamBuff()->getOptionalPrevTenantIdValue(),
					getParamBuff()->getOptionalPrevIdValue() );
		}
		return( retobj );
	}

	void CFBamParamEditObj::setOptionalLookupPrev( cfbam::ICFBamParamObj* value ) {
			
			if( value != NULL ) {
				getParamEditBuff()->setOptionalPrevTenantIdValue( value->getRequiredTenantId() );
				getParamEditBuff()->setOptionalPrevIdValue( value->getRequiredId() );
			}
			else {
				getParamEditBuff()->setOptionalPrevTenantIdNull();
				getParamEditBuff()->setOptionalPrevIdNull();
			}
		}

	cfbam::ICFBamParamObj* CFBamParamEditObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamParamObj* retobj = NULL;
		bool anyMissing = false;

			if( getParamBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getParamBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsParam()->getSchema() )->getParamTableObj()->readParamByIdIdx( getParamBuff()->getOptionalNextTenantIdValue(),
					getParamBuff()->getOptionalNextIdValue() );
		}
		return( retobj );
	}

	void CFBamParamEditObj::setOptionalLookupNext( cfbam::ICFBamParamObj* value ) {
			
			if( value != NULL ) {
				getParamEditBuff()->setOptionalNextTenantIdValue( value->getRequiredTenantId() );
				getParamEditBuff()->setOptionalNextIdValue( value->getRequiredId() );
			}
			else {
				getParamEditBuff()->setOptionalNextTenantIdNull();
				getParamEditBuff()->setOptionalNextIdNull();
			}
		}

	cfbam::ICFBamValueObj* CFBamParamEditObj::getRequiredLookupType( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = NULL;
		bool anyMissing = false;

			if( getParamBuff()->isOptionalTypeTenantIdNull() ) {
				anyMissing = true;
			}
			if( getParamBuff()->isOptionalTypeIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsParam()->getSchema() )->getValueTableObj()->readValueByIdIdx( getParamBuff()->getOptionalTypeTenantIdValue(),
					getParamBuff()->getOptionalTypeIdValue() );
		}
		return( retobj );
	}

	void CFBamParamEditObj::setRequiredLookupType( cfbam::ICFBamValueObj* value ) {
			
			if( value != NULL ) {
				getParamEditBuff()->setOptionalTypeTenantIdValue( value->getRequiredTenantId() );
				getParamEditBuff()->setOptionalTypeIdValue( value->getRequiredId() );
			}
			else {
				getParamEditBuff()->setOptionalTypeTenantIdNull();
				getParamEditBuff()->setOptionalTypeIdNull();
			}
		}

	void CFBamParamEditObj::copyPKeyToBuff() {
		cfbam::CFBamParamPKey* tablePKey = getPKey();
		cfbam::CFBamParamBuff* tableBuff = getParamEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamParamEditObj::copyBuffToPKey() {
		cfbam::CFBamParamPKey* tablePKey = getPKey();
		cfbam::CFBamParamBuff* tableBuff = getParamBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamParamEditObj::copyBuffToOrig() {
		cfbam::CFBamParamBuff* origBuff = getOrigAsParam()->getParamEditBuff();
		cfbam::CFBamParamBuff* myBuff = getParamBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamParamEditObj::copyOrigToBuff() {
		cfbam::CFBamParamBuff* origBuff = getOrigAsParam()->getParamBuff();
		cfbam::CFBamParamBuff* myBuff = getParamEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
