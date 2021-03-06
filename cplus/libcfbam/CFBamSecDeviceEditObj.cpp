// Description: C++18 edit object instance implementation for CFBam SecDevice.

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
#include <cfbamobj/CFBamSecDeviceObj.hpp>
#include <cfbamobj/CFBamSecDeviceEditObj.hpp>


namespace cfbam {

	const std::string CFBamSecDeviceEditObj::CLASS_NAME( "CFBamSecDeviceEditObj" );

	CFBamSecDeviceEditObj::CFBamSecDeviceEditObj( cfsec::ICFSecSecDeviceObj* argOrig )
	: ICFBamSecDeviceEditObj(),
	  ICFSecSecDeviceEditObj(),
	  ICFIntSecDeviceEditObj()
	{
		static const std::string S_ProcName( "CFBamSecDeviceEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecSecDeviceBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecSecDeviceBuff*>( origBuff->clone() );
	}

	CFBamSecDeviceEditObj::~CFBamSecDeviceEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamSecDeviceEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamSecDeviceEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecDeviceBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecDeviceEditObj::getCreatedAt() {
		return( getSecDeviceBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamSecDeviceEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecDeviceBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecDeviceEditObj::getUpdatedAt() {
		return( getSecDeviceBuff()->getUpdatedAt() );
	}

	void CFBamSecDeviceEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecDeviceEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSecDeviceEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecDeviceEditBuff()->setCreatedAt( value );
	}

	void CFBamSecDeviceEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecDeviceEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSecDeviceEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecDeviceEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamSecDeviceEditObj::getClassCode() const {
		return( cfsec::CFSecSecDeviceBuff::CLASS_CODE );
	}

	bool CFBamSecDeviceEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecSecDeviceBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamSecDeviceEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSecDeviceEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_DevName( "DevName" );
		static const std::string S_PubKey( "PubKey" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamSecDeviceEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamSecDeviceEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamSecDeviceEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamSecDeviceEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamSecDeviceEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFBamSecDeviceEditObj::getRequiredSecUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DevName, CFBamSecDeviceEditObj::getRequiredDevName() ) );
		if( ! CFBamSecDeviceEditObj::isOptionalPubKeyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PubKey, CFBamSecDeviceEditObj::getOptionalPubKeyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamSecDeviceEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamSecDeviceEditObj::setRequiredRevision( int32_t value ) {
		getSecDeviceEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamSecDeviceEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredDevName() );
		return( objName );
	}

	const std::string CFBamSecDeviceEditObj::getGenDefName() {
		return( cfsec::CFSecSecDeviceBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSecDeviceEditObj::getScope() {
		cfsec::ICFSecSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecDeviceEditObj::getObjScope() {
		cfsec::ICFSecSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecDeviceEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSecDeviceEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSecDeviceEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamSecDeviceEditObj::getObjQualifiedName() {
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

	std::string CFBamSecDeviceEditObj::getObjFullName() {
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

	cfsec::ICFSecSecDeviceObj* CFBamSecDeviceEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecSecDeviceObj* retobj = getSchema()->getSecDeviceTableObj()->realizeSecDevice( dynamic_cast<cfsec::ICFSecSecDeviceObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecSecDeviceObj* CFBamSecDeviceEditObj::read( bool forceRead ) {
		cfsec::ICFSecSecDeviceObj* retval = getOrigAsSecDevice()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecSecDeviceObj* CFBamSecDeviceEditObj::create() {
		cfsec::ICFSecSecDeviceObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecDevice()->getSchema() )->getSecDeviceTableObj()->createSecDevice( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecSecDeviceEditObj* CFBamSecDeviceEditObj::update() {
		getSchema()->getSecDeviceTableObj()->updateSecDevice( this );
		return( NULL );
	}

	cfsec::ICFSecSecDeviceEditObj* CFBamSecDeviceEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecDeviceTableObj()->deleteSecDevice( this );
		return( NULL );
	}

	cfsec::ICFSecSecDeviceTableObj* CFBamSecDeviceEditObj::getSecDeviceTable() {
		return( orig->getSchema()->getSecDeviceTableObj() );
	}

	cfsec::ICFSecSecDeviceEditObj* CFBamSecDeviceEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecSecDeviceEditObj* CFBamSecDeviceEditObj::getSecDeviceEdit() {
		return( (cfsec::ICFSecSecDeviceEditObj*)this );
	}

	cfsec::ICFSecSecDeviceEditObj* CFBamSecDeviceEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamSecDeviceEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecSecDeviceObj* CFBamSecDeviceEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecSecDeviceObj* CFBamSecDeviceEditObj::getOrigAsSecDevice() {
		return( dynamic_cast<cfsec::ICFSecSecDeviceObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamSecDeviceEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecSecDeviceBuff* CFBamSecDeviceEditObj::getBuff() {
		return( buff );
	}

	void CFBamSecDeviceEditObj::setBuff( cfsec::CFSecSecDeviceBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecSecDevicePKey* CFBamSecDeviceEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamSecDeviceEditObj::setPKey( cfsec::CFSecSecDevicePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamSecDeviceEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamSecDeviceEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const uuid_ptr_t CFBamSecDeviceEditObj::getRequiredSecUserId() {
		return( getPKey()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFBamSecDeviceEditObj::getRequiredSecUserIdReference() {
		return( getPKey()->getRequiredSecUserIdReference() );
	}

	const std::string& CFBamSecDeviceEditObj::getRequiredDevName() {
		return( getPKey()->getRequiredDevName() );
	}

	const std::string* CFBamSecDeviceEditObj::getRequiredDevNameReference() {
		return( getPKey()->getRequiredDevNameReference() );
	}

	void CFBamSecDeviceEditObj::setRequiredDevName( const std::string& value ) {
		if( getPKey()->getRequiredDevName() != value ) {
			getPKey()->setRequiredDevName( value );
		}
		if( getSecDeviceBuff()->getRequiredDevName() != value ) {
			getSecDeviceEditBuff()->setRequiredDevName( value );
		}
	}

	bool CFBamSecDeviceEditObj::isOptionalPubKeyNull() {
		return( getSecDeviceBuff()->isOptionalPubKeyNull() );
	}

	const std::string& CFBamSecDeviceEditObj::getOptionalPubKeyValue() {
		return( getSecDeviceBuff()->getOptionalPubKeyValue() );
	}

	const std::string* CFBamSecDeviceEditObj::getOptionalPubKeyReference() {
		return( getSecDeviceBuff()->getOptionalPubKeyReference() );
	}

	void CFBamSecDeviceEditObj::setOptionalPubKeyNull() {
		if( ! getSecDeviceBuff()->isOptionalPubKeyNull() ) {
			getSecDeviceEditBuff()->setOptionalPubKeyNull();
		}
	}

	void CFBamSecDeviceEditObj::setOptionalPubKeyValue( const std::string& value ) {
		if( getSecDeviceBuff()->isOptionalPubKeyNull() ) {
			getSecDeviceEditBuff()->setOptionalPubKeyValue( value );
		}
		else if( getSecDeviceBuff()->getOptionalPubKeyValue() != value ) {
			getSecDeviceEditBuff()->setOptionalPubKeyValue( value );
		}
	}

	cfsec::ICFSecSecUserObj* CFBamSecDeviceEditObj::getRequiredContainerSecUser( bool forceRead ) {
		cfsec::ICFSecSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecDevice()->getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getPKey()->getRequiredSecUserId() );
		}
		return( retobj );
	}

	void CFBamSecDeviceEditObj::setRequiredContainerSecUser( cfsec::ICFSecSecUserObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredSecUserId
( value->getRequiredSecUserId() );
				getSecDeviceEditBuff()->setRequiredSecUserId( value->getRequiredSecUserId() );
			}
		}

	void CFBamSecDeviceEditObj::copyPKeyToBuff() {
		cfsec::CFSecSecDevicePKey* tablePKey = getPKey();
		cfsec::CFSecSecDeviceBuff* tableBuff = getSecDeviceEditBuff();
		tableBuff->setRequiredSecUserId( tablePKey->getRequiredSecUserId() );
		tableBuff->setRequiredDevName( tablePKey->getRequiredDevName() );
	}

	void CFBamSecDeviceEditObj::copyBuffToPKey() {
		cfsec::CFSecSecDevicePKey* tablePKey = getPKey();
		cfsec::CFSecSecDeviceBuff* tableBuff = getSecDeviceBuff();
		tablePKey->setRequiredSecUserId( tableBuff->getRequiredSecUserId() );
		tablePKey->setRequiredDevName( tableBuff->getRequiredDevName() );
	}

	void CFBamSecDeviceEditObj::copyBuffToOrig() {
		cfsec::CFSecSecDeviceBuff* origBuff = getOrigAsSecDevice()->getSecDeviceEditBuff();
		cfsec::CFSecSecDeviceBuff* myBuff = getSecDeviceBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamSecDeviceEditObj::copyOrigToBuff() {
		cfsec::CFSecSecDeviceBuff* origBuff = getOrigAsSecDevice()->getSecDeviceBuff();
		cfsec::CFSecSecDeviceBuff* myBuff = getSecDeviceEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
