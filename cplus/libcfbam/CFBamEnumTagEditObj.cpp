// Description: C++18 edit object instance implementation for CFBam EnumTag.

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
#include <cfbamobj/CFBamEnumTagObj.hpp>
#include <cfbamobj/CFBamEnumTagEditObj.hpp>


namespace cfbam {

	const std::string CFBamEnumTagEditObj::CLASS_NAME( "CFBamEnumTagEditObj" );

	CFBamEnumTagEditObj::CFBamEnumTagEditObj( cfbam::ICFBamEnumTagObj* argOrig )
	: ICFBamEnumTagEditObj()
	{
		static const std::string S_ProcName( "CFBamEnumTagEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfbam::CFBamEnumTagBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( origBuff->clone() );
	}

	CFBamEnumTagEditObj::~CFBamEnumTagEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamEnumTagEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamEnumTagEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getEnumTagBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamEnumTagEditObj::getCreatedAt() {
		return( getEnumTagBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamEnumTagEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getEnumTagBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamEnumTagEditObj::getUpdatedAt() {
		return( getEnumTagBuff()->getUpdatedAt() );
	}

	void CFBamEnumTagEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getEnumTagEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamEnumTagEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getEnumTagEditBuff()->setCreatedAt( value );
	}

	void CFBamEnumTagEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getEnumTagEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamEnumTagEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getEnumTagEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamEnumTagEditObj::getClassCode() const {
		return( cfbam::CFBamEnumTagBuff::CLASS_CODE );
	}

	bool CFBamEnumTagEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamEnumTagEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamEnumTagEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_EnumId( "EnumId" );
		static const std::string S_EnumCode( "EnumCode" );
		static const std::string S_Name( "Name" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamEnumTagEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamEnumTagEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamEnumTagEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamEnumTagEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamEnumTagEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamEnumTagEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamEnumTagEditObj::getRequiredId() ) );
		if( ! CFBamEnumTagEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamEnumTagEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamEnumTagEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamEnumTagEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_EnumId, CFBamEnumTagEditObj::getRequiredEnumId() ) );
		if( ! CFBamEnumTagEditObj::isOptionalEnumCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_EnumCode, CFBamEnumTagEditObj::getOptionalEnumCodeValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamEnumTagEditObj::getRequiredName() ) );
		if( ! CFBamEnumTagEditObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamEnumTagEditObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamEnumTagEditObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamEnumTagEditObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamEnumTagEditObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamEnumTagEditObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamEnumTagEditObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamEnumTagEditObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamEnumTagEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamEnumTagEditObj::setRequiredRevision( int32_t value ) {
		getEnumTagEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamEnumTagEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamEnumTagEditObj::getGenDefName() {
		return( cfbam::CFBamEnumTagBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamEnumTagEditObj::getScope() {
		cfbam::ICFBamEnumDefObj* scope = getRequiredContainerEnumDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamEnumTagEditObj::getObjScope() {
		cfbam::ICFBamEnumDefObj* scope = getRequiredContainerEnumDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamEnumTagEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamEnumTagEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamEnumTagEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamEnumTagEditObj::getObjQualifiedName() {
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

	std::string CFBamEnumTagEditObj::getObjFullName() {
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

	cfbam::ICFBamEnumTagObj* CFBamEnumTagEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamEnumTagObj* retobj = getSchema()->getEnumTagTableObj()->realizeEnumTag( dynamic_cast<cfbam::ICFBamEnumTagObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagEditObj::read( bool forceRead ) {
		cfbam::ICFBamEnumTagObj* retval = getOrigAsEnumTag()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagEditObj::create() {
		cfbam::ICFBamEnumTagObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsEnumTag()->getSchema() )->getEnumTagTableObj()->createEnumTag( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamEnumTagEditObj* CFBamEnumTagEditObj::update() {
		getSchema()->getEnumTagTableObj()->updateEnumTag( this );
		return( NULL );
	}

	cfbam::ICFBamEnumTagEditObj* CFBamEnumTagEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getEnumTagTableObj()->deleteEnumTag( this );
		return( NULL );
	}

	cfbam::ICFBamEnumTagTableObj* CFBamEnumTagEditObj::getEnumTagTable() {
		return( orig->getSchema()->getEnumTagTableObj() );
	}

	cfbam::ICFBamEnumTagEditObj* CFBamEnumTagEditObj::getEdit() {
		return( this );
	}

	cfbam::ICFBamEnumTagEditObj* CFBamEnumTagEditObj::getEnumTagEdit() {
		return( (cfbam::ICFBamEnumTagEditObj*)this );
	}

	cfbam::ICFBamEnumTagEditObj* CFBamEnumTagEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamEnumTagEditObj::endEdit() {
		orig->endEdit();
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagEditObj::getOrig() {
		return( orig );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagEditObj::getOrigAsEnumTag() {
		return( dynamic_cast<cfbam::ICFBamEnumTagObj*>( orig ) );
	}

	cfbam::ICFBamSchemaObj* CFBamEnumTagEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfbam::CFBamEnumTagBuff* CFBamEnumTagEditObj::getBuff() {
		return( buff );
	}

	void CFBamEnumTagEditObj::setBuff( cfbam::CFBamEnumTagBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfbam::CFBamEnumTagPKey* CFBamEnumTagEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamEnumTagEditObj::setPKey( cfbam::CFBamEnumTagPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamEnumTagEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamEnumTagEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamEnumTagEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamEnumTagEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamEnumTagEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamEnumTagEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamEnumTagEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getEnumTagBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamEnumTagEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getEnumTagBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamEnumTagEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getEnumTagBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamEnumTagEditObj::isOptionalDefSchemaIdNull() {
		return( getEnumTagBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamEnumTagEditObj::getOptionalDefSchemaIdValue() {
		return( getEnumTagBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamEnumTagEditObj::getOptionalDefSchemaIdReference() {
		return( getEnumTagBuff()->getOptionalDefSchemaIdReference() );
	}

	const int64_t CFBamEnumTagEditObj::getRequiredEnumId() {
		return( getEnumTagBuff()->getRequiredEnumId() );
	}

	const int64_t* CFBamEnumTagEditObj::getRequiredEnumIdReference() {
		return( getEnumTagBuff()->getRequiredEnumIdReference() );
	}

	bool CFBamEnumTagEditObj::isOptionalEnumCodeNull() {
		return( getEnumTagBuff()->isOptionalEnumCodeNull() );
	}

	const int16_t CFBamEnumTagEditObj::getOptionalEnumCodeValue() {
		return( getEnumTagBuff()->getOptionalEnumCodeValue() );
	}

	const int16_t* CFBamEnumTagEditObj::getOptionalEnumCodeReference() {
		return( getEnumTagBuff()->getOptionalEnumCodeReference() );
	}

	void CFBamEnumTagEditObj::setOptionalEnumCodeNull() {
		if( ! getEnumTagBuff()->isOptionalEnumCodeNull() ) {
			getEnumTagEditBuff()->setOptionalEnumCodeNull();
		}
	}

	void CFBamEnumTagEditObj::setOptionalEnumCodeValue( const int16_t value ) {
		if( getEnumTagBuff()->isOptionalEnumCodeNull() ) {
			getEnumTagEditBuff()->setOptionalEnumCodeValue( value );
		}
		else if( getEnumTagBuff()->getOptionalEnumCodeValue() != value ) {
			getEnumTagEditBuff()->setOptionalEnumCodeValue( value );
		}
	}

	const std::string& CFBamEnumTagEditObj::getRequiredName() {
		return( getEnumTagBuff()->getRequiredName() );
	}

	const std::string* CFBamEnumTagEditObj::getRequiredNameReference() {
		return( getEnumTagBuff()->getRequiredNameReference() );
	}

	void CFBamEnumTagEditObj::setRequiredName( const std::string& value ) {
		if( getEnumTagBuff()->getRequiredName() != value ) {
			getEnumTagEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamEnumTagEditObj::isOptionalPrevTenantIdNull() {
		return( getEnumTagBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamEnumTagEditObj::getOptionalPrevTenantIdValue() {
		return( getEnumTagBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamEnumTagEditObj::getOptionalPrevTenantIdReference() {
		return( getEnumTagBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamEnumTagEditObj::isOptionalPrevIdNull() {
		return( getEnumTagBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamEnumTagEditObj::getOptionalPrevIdValue() {
		return( getEnumTagBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamEnumTagEditObj::getOptionalPrevIdReference() {
		return( getEnumTagBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamEnumTagEditObj::isOptionalNextTenantIdNull() {
		return( getEnumTagBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamEnumTagEditObj::getOptionalNextTenantIdValue() {
		return( getEnumTagBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamEnumTagEditObj::getOptionalNextTenantIdReference() {
		return( getEnumTagBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamEnumTagEditObj::isOptionalNextIdNull() {
		return( getEnumTagBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamEnumTagEditObj::getOptionalNextIdValue() {
		return( getEnumTagBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamEnumTagEditObj::getOptionalNextIdReference() {
		return( getEnumTagBuff()->getOptionalNextIdReference() );
	}

	cfsec::ICFSecTenantObj* CFBamEnumTagEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsEnumTag()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamEnumTagEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getEnumTagEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamEnumDefObj* CFBamEnumTagEditObj::getRequiredContainerEnumDef( bool forceRead ) {
		cfbam::ICFBamEnumDefObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsEnumTag()->getSchema() )->getEnumDefTableObj()->readEnumDefByIdIdx( getPKey()->getRequiredTenantId(),
					getEnumTagBuff()->getRequiredEnumId() );
		}
		return( retobj );
	}

	void CFBamEnumTagEditObj::setRequiredContainerEnumDef( cfbam::ICFBamEnumDefObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getEnumTagEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getEnumTagEditBuff()->setRequiredEnumId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamEnumTagEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getEnumTagBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getEnumTagBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsEnumTag()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getEnumTagBuff()->getOptionalDefSchemaTenantIdValue(),
					getEnumTagBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamEnumTagEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getEnumTagEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getEnumTagEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getEnumTagEditBuff()->setOptionalDefSchemaTenantIdNull();
				getEnumTagEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagEditObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamEnumTagObj* retobj = NULL;
		bool anyMissing = false;

			if( getEnumTagBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getEnumTagBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsEnumTag()->getSchema() )->getEnumTagTableObj()->readEnumTagByIdIdx( getEnumTagBuff()->getOptionalPrevTenantIdValue(),
					getEnumTagBuff()->getOptionalPrevIdValue() );
		}
		return( retobj );
	}

	void CFBamEnumTagEditObj::setOptionalLookupPrev( cfbam::ICFBamEnumTagObj* value ) {
			
			if( value != NULL ) {
				getEnumTagEditBuff()->setOptionalPrevTenantIdValue( value->getRequiredTenantId() );
				getEnumTagEditBuff()->setOptionalPrevIdValue( value->getRequiredId() );
			}
			else {
				getEnumTagEditBuff()->setOptionalPrevTenantIdNull();
				getEnumTagEditBuff()->setOptionalPrevIdNull();
			}
		}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagEditObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamEnumTagObj* retobj = NULL;
		bool anyMissing = false;

			if( getEnumTagBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getEnumTagBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsEnumTag()->getSchema() )->getEnumTagTableObj()->readEnumTagByIdIdx( getEnumTagBuff()->getOptionalNextTenantIdValue(),
					getEnumTagBuff()->getOptionalNextIdValue() );
		}
		return( retobj );
	}

	void CFBamEnumTagEditObj::setOptionalLookupNext( cfbam::ICFBamEnumTagObj* value ) {
			
			if( value != NULL ) {
				getEnumTagEditBuff()->setOptionalNextTenantIdValue( value->getRequiredTenantId() );
				getEnumTagEditBuff()->setOptionalNextIdValue( value->getRequiredId() );
			}
			else {
				getEnumTagEditBuff()->setOptionalNextTenantIdNull();
				getEnumTagEditBuff()->setOptionalNextIdNull();
			}
		}

	void CFBamEnumTagEditObj::copyPKeyToBuff() {
		cfbam::CFBamEnumTagPKey* tablePKey = getPKey();
		cfbam::CFBamEnumTagBuff* tableBuff = getEnumTagEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamEnumTagEditObj::copyBuffToPKey() {
		cfbam::CFBamEnumTagPKey* tablePKey = getPKey();
		cfbam::CFBamEnumTagBuff* tableBuff = getEnumTagBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamEnumTagEditObj::copyBuffToOrig() {
		cfbam::CFBamEnumTagBuff* origBuff = getOrigAsEnumTag()->getEnumTagEditBuff();
		cfbam::CFBamEnumTagBuff* myBuff = getEnumTagBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamEnumTagEditObj::copyOrigToBuff() {
		cfbam::CFBamEnumTagBuff* origBuff = getOrigAsEnumTag()->getEnumTagBuff();
		cfbam::CFBamEnumTagBuff* myBuff = getEnumTagEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
