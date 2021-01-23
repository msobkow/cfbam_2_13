// Description: C++18 edit object instance implementation for CFBam SecUser.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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
#include <cfbamobj/CFBamSecUserObj.hpp>
#include <cfbamobj/CFBamSecUserEditObj.hpp>


namespace cfbam {

	const std::string CFBamSecUserEditObj::CLASS_NAME( "CFBamSecUserEditObj" );

	CFBamSecUserEditObj::CFBamSecUserEditObj( cfsec::ICFSecSecUserObj* argOrig )
	: ICFBamSecUserEditObj(),
	  ICFSecSecUserEditObj(),
	  ICFIntSecUserEditObj()
	{
		static const std::string S_ProcName( "CFBamSecUserEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecSecUserBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecSecUserBuff*>( origBuff->clone() );
	}

	CFBamSecUserEditObj::~CFBamSecUserEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamSecUserEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecUserBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecUserEditObj::getCreatedAt() {
		return( getSecUserBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecUserBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecUserEditObj::getUpdatedAt() {
		return( getSecUserBuff()->getUpdatedAt() );
	}

	void CFBamSecUserEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecUserEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSecUserEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecUserEditBuff()->setCreatedAt( value );
	}

	void CFBamSecUserEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecUserEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSecUserEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecUserEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamSecUserEditObj::getClassCode() const {
		return( cfsec::CFSecSecUserBuff::CLASS_CODE );
	}

	bool CFBamSecUserEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecSecUserBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamSecUserEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSecUserEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_LoginId( "LoginId" );
		static const std::string S_EMailAddress( "EMailAddress" );
		static const std::string S_EMailConfirmUuid( "EMailConfirmUuid" );
		static const std::string S_DfltDevUserId( "DfltDevUserId" );
		static const std::string S_DfltDevName( "DfltDevName" );
		static const std::string S_PasswordHash( "PasswordHash" );
		static const std::string S_PasswordResetUuid( "PasswordResetUuid" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamSecUserEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamSecUserEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamSecUserEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamSecUserEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamSecUserEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFBamSecUserEditObj::getRequiredSecUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LoginId, CFBamSecUserEditObj::getRequiredLoginId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EMailAddress, CFBamSecUserEditObj::getRequiredEMailAddress() ) );
		if( ! CFBamSecUserEditObj::isOptionalEMailConfirmUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_EMailConfirmUuid, CFBamSecUserEditObj::getOptionalEMailConfirmUuidValue() ) );
		}
		if( ! CFBamSecUserEditObj::isOptionalDfltDevUserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_DfltDevUserId, CFBamSecUserEditObj::getOptionalDfltDevUserIdValue() ) );
		}
		if( ! CFBamSecUserEditObj::isOptionalDfltDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DfltDevName, CFBamSecUserEditObj::getOptionalDfltDevNameValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PasswordHash, CFBamSecUserEditObj::getRequiredPasswordHash() ) );
		if( ! CFBamSecUserEditObj::isOptionalPasswordResetUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_PasswordResetUuid, CFBamSecUserEditObj::getOptionalPasswordResetUuidValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamSecUserEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamSecUserEditObj::setRequiredRevision( int32_t value ) {
		getSecUserEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamSecUserEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredLoginId() );
		return( objName );
	}

	const std::string CFBamSecUserEditObj::getGenDefName() {
		return( cfsec::CFSecSecUserBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSecUserEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamSecUserEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamSecUserEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSecUserEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSecUserEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecDeviceTableObj()->readSecDeviceByLookupNameIdx( getRequiredSecUserId(),
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

	std::string CFBamSecUserEditObj::getObjQualifiedName() {
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

	std::string CFBamSecUserEditObj::getObjFullName() {
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

	cfsec::ICFSecSecUserObj* CFBamSecUserEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecSecUserObj* retobj = getSchema()->getSecUserTableObj()->realizeSecUser( dynamic_cast<cfsec::ICFSecSecUserObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserEditObj::read( bool forceRead ) {
		cfsec::ICFSecSecUserObj* retval = getOrigAsSecUser()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserEditObj::create() {
		cfsec::ICFSecSecUserObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecUserTableObj()->createSecUser( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecSecUserEditObj* CFBamSecUserEditObj::update() {
		getSchema()->getSecUserTableObj()->updateSecUser( this );
		return( NULL );
	}

	cfsec::ICFSecSecUserEditObj* CFBamSecUserEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecUserTableObj()->deleteSecUser( this );
		return( NULL );
	}

	cfsec::ICFSecSecUserTableObj* CFBamSecUserEditObj::getSecUserTable() {
		return( orig->getSchema()->getSecUserTableObj() );
	}

	cfsec::ICFSecSecUserEditObj* CFBamSecUserEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecSecUserEditObj* CFBamSecUserEditObj::getSecUserEdit() {
		return( (cfsec::ICFSecSecUserEditObj*)this );
	}

	cfsec::ICFSecSecUserEditObj* CFBamSecUserEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamSecUserEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecSecUserObj* CFBamSecUserEditObj::getOrigAsSecUser() {
		return( dynamic_cast<cfsec::ICFSecSecUserObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamSecUserEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecSecUserBuff* CFBamSecUserEditObj::getBuff() {
		return( buff );
	}

	void CFBamSecUserEditObj::setBuff( cfsec::CFSecSecUserBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecSecUserPKey* CFBamSecUserEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamSecUserEditObj::setPKey( cfsec::CFSecSecUserPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamSecUserEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamSecUserEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const uuid_ptr_t CFBamSecUserEditObj::getRequiredSecUserId() {
		return( getPKey()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFBamSecUserEditObj::getRequiredSecUserIdReference() {
		return( getPKey()->getRequiredSecUserIdReference() );
	}

	const std::string& CFBamSecUserEditObj::getRequiredLoginId() {
		return( getSecUserBuff()->getRequiredLoginId() );
	}

	const std::string* CFBamSecUserEditObj::getRequiredLoginIdReference() {
		return( getSecUserBuff()->getRequiredLoginIdReference() );
	}

	void CFBamSecUserEditObj::setRequiredLoginId( const std::string& value ) {
		if( getSecUserBuff()->getRequiredLoginId() != value ) {
			getSecUserEditBuff()->setRequiredLoginId( value );
		}
	}

	const std::string& CFBamSecUserEditObj::getRequiredEMailAddress() {
		return( getSecUserBuff()->getRequiredEMailAddress() );
	}

	const std::string* CFBamSecUserEditObj::getRequiredEMailAddressReference() {
		return( getSecUserBuff()->getRequiredEMailAddressReference() );
	}

	void CFBamSecUserEditObj::setRequiredEMailAddress( const std::string& value ) {
		if( getSecUserBuff()->getRequiredEMailAddress() != value ) {
			getSecUserEditBuff()->setRequiredEMailAddress( value );
		}
	}

	bool CFBamSecUserEditObj::isOptionalEMailConfirmUuidNull() {
		return( getSecUserBuff()->isOptionalEMailConfirmUuidNull() );
	}

	const uuid_ptr_t CFBamSecUserEditObj::getOptionalEMailConfirmUuidValue() {
		return( getSecUserBuff()->getOptionalEMailConfirmUuidValue() );
	}

	const uuid_ptr_t CFBamSecUserEditObj::getOptionalEMailConfirmUuidReference() {
		return( getSecUserBuff()->getOptionalEMailConfirmUuidReference() );
	}

	void CFBamSecUserEditObj::setOptionalEMailConfirmUuidNull() {
		if( ! getSecUserBuff()->isOptionalEMailConfirmUuidNull() ) {
			getSecUserEditBuff()->setOptionalEMailConfirmUuidNull();
		}
	}

	void CFBamSecUserEditObj::setOptionalEMailConfirmUuidValue( const uuid_ptr_t value ) {
		if( getSecUserBuff()->isOptionalEMailConfirmUuidNull() ) {
			getSecUserEditBuff()->setOptionalEMailConfirmUuidValue( value );
		}
		else if( getSecUserBuff()->getOptionalEMailConfirmUuidValue() != value ) {
			getSecUserEditBuff()->setOptionalEMailConfirmUuidValue( value );
		}
	}

	bool CFBamSecUserEditObj::isOptionalDfltDevUserIdNull() {
		return( getSecUserBuff()->isOptionalDfltDevUserIdNull() );
	}

	const uuid_ptr_t CFBamSecUserEditObj::getOptionalDfltDevUserIdValue() {
		return( getSecUserBuff()->getOptionalDfltDevUserIdValue() );
	}

	const uuid_ptr_t CFBamSecUserEditObj::getOptionalDfltDevUserIdReference() {
		return( getSecUserBuff()->getOptionalDfltDevUserIdReference() );
	}

	bool CFBamSecUserEditObj::isOptionalDfltDevNameNull() {
		return( getSecUserBuff()->isOptionalDfltDevNameNull() );
	}

	const std::string& CFBamSecUserEditObj::getOptionalDfltDevNameValue() {
		return( getSecUserBuff()->getOptionalDfltDevNameValue() );
	}

	const std::string* CFBamSecUserEditObj::getOptionalDfltDevNameReference() {
		return( getSecUserBuff()->getOptionalDfltDevNameReference() );
	}

	const std::string& CFBamSecUserEditObj::getRequiredPasswordHash() {
		return( getSecUserBuff()->getRequiredPasswordHash() );
	}

	const std::string* CFBamSecUserEditObj::getRequiredPasswordHashReference() {
		return( getSecUserBuff()->getRequiredPasswordHashReference() );
	}

	void CFBamSecUserEditObj::setRequiredPasswordHash( const std::string& value ) {
		if( getSecUserBuff()->getRequiredPasswordHash() != value ) {
			getSecUserEditBuff()->setRequiredPasswordHash( value );
		}
	}

	bool CFBamSecUserEditObj::isOptionalPasswordResetUuidNull() {
		return( getSecUserBuff()->isOptionalPasswordResetUuidNull() );
	}

	const uuid_ptr_t CFBamSecUserEditObj::getOptionalPasswordResetUuidValue() {
		return( getSecUserBuff()->getOptionalPasswordResetUuidValue() );
	}

	const uuid_ptr_t CFBamSecUserEditObj::getOptionalPasswordResetUuidReference() {
		return( getSecUserBuff()->getOptionalPasswordResetUuidReference() );
	}

	void CFBamSecUserEditObj::setOptionalPasswordResetUuidNull() {
		if( ! getSecUserBuff()->isOptionalPasswordResetUuidNull() ) {
			getSecUserEditBuff()->setOptionalPasswordResetUuidNull();
		}
	}

	void CFBamSecUserEditObj::setOptionalPasswordResetUuidValue( const uuid_ptr_t value ) {
		if( getSecUserBuff()->isOptionalPasswordResetUuidNull() ) {
			getSecUserEditBuff()->setOptionalPasswordResetUuidValue( value );
		}
		else if( getSecUserBuff()->getOptionalPasswordResetUuidValue() != value ) {
			getSecUserEditBuff()->setOptionalPasswordResetUuidValue( value );
		}
	}

	std::vector<cfsec::ICFSecSecDeviceObj*> CFBamSecUserEditObj::getOptionalComponentsSecDev( bool forceRead ) {
		std::vector<cfsec::ICFSecSecDeviceObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecDeviceTableObj()->readSecDeviceByUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	cfsec::ICFSecSecDeviceObj* CFBamSecUserEditObj::getOptionalLookupDefDev( bool forceRead ) {
		cfsec::ICFSecSecDeviceObj* retobj = NULL;
		bool anyMissing = false;

			if( getSecUserBuff()->isOptionalDfltDevUserIdNull() ) {
				anyMissing = true;
			}
			if( getSecUserBuff()->isOptionalDfltDevNameNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecDeviceTableObj()->readSecDeviceByIdIdx( getSecUserBuff()->getOptionalDfltDevUserIdValue(),
					getSecUserBuff()->getOptionalDfltDevNameValue() );
		}
		return( retobj );
	}

	void CFBamSecUserEditObj::setOptionalLookupDefDev( cfsec::ICFSecSecDeviceObj* value ) {
			
			if( value != NULL ) {
				getSecUserEditBuff()->setOptionalDfltDevUserIdValue( value->getRequiredSecUserId() );
				getSecUserEditBuff()->setOptionalDfltDevNameValue( value->getRequiredDevName() );
			}
			else {
				getSecUserEditBuff()->setOptionalDfltDevUserIdNull();
				getSecUserEditBuff()->setOptionalDfltDevNameNull();
			}
		}

	std::vector<cfsec::ICFSecSecSessionObj*> CFBamSecUserEditObj::getOptionalComponentsSecSess( bool forceRead ) {
		std::vector<cfsec::ICFSecSecSessionObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecSessionTableObj()->readSecSessionBySecUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecSecSessionObj*> CFBamSecUserEditObj::getOptionalChildrenSecProxy( bool forceRead ) {
		std::vector<cfsec::ICFSecSecSessionObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecSessionTableObj()->readSecSessionBySecProxyIdx( getPKey()->getRequiredSecUserIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecSecGrpMembObj*> CFBamSecUserEditObj::getOptionalChildrenSecGrpMemb( bool forceRead ) {
		std::vector<cfsec::ICFSecSecGrpMembObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecGrpMembTableObj()->readSecGrpMembByUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecTSecGrpMembObj*> CFBamSecUserEditObj::getOptionalChildrenTSecGrpMemb( bool forceRead ) {
		std::vector<cfsec::ICFSecTSecGrpMembObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecUser()->getSchema() )->getTSecGrpMembTableObj()->readTSecGrpMembByUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	void CFBamSecUserEditObj::copyPKeyToBuff() {
		cfsec::CFSecSecUserPKey* tablePKey = getPKey();
		cfsec::CFSecSecUserBuff* tableBuff = getSecUserEditBuff();
		tableBuff->setRequiredSecUserId( tablePKey->getRequiredSecUserId() );
	}

	void CFBamSecUserEditObj::copyBuffToPKey() {
		cfsec::CFSecSecUserPKey* tablePKey = getPKey();
		cfsec::CFSecSecUserBuff* tableBuff = getSecUserBuff();
		tablePKey->setRequiredSecUserId( tableBuff->getRequiredSecUserId() );
	}

	void CFBamSecUserEditObj::copyBuffToOrig() {
		cfsec::CFSecSecUserBuff* origBuff = getOrigAsSecUser()->getSecUserEditBuff();
		cfsec::CFSecSecUserBuff* myBuff = getSecUserBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamSecUserEditObj::copyOrigToBuff() {
		cfsec::CFSecSecUserBuff* origBuff = getOrigAsSecUser()->getSecUserBuff();
		cfsec::CFSecSecUserBuff* myBuff = getSecUserEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
