// Description: C++18 edit object instance implementation for CFBam SecSession.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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
#include <cfbamobj/CFBamSecSessionObj.hpp>
#include <cfbamobj/CFBamSecSessionEditObj.hpp>


namespace cfbam {

	const std::string CFBamSecSessionEditObj::CLASS_NAME( "CFBamSecSessionEditObj" );

	CFBamSecSessionEditObj::CFBamSecSessionEditObj( cfsec::ICFSecSecSessionObj* argOrig )
	: ICFBamSecSessionEditObj(),
	  ICFSecSecSessionEditObj(),
	  ICFIntSecSessionEditObj()
	{
		static const std::string S_ProcName( "CFBamSecSessionEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecSecSessionBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecSecSessionBuff*>( origBuff->clone() );
	}

	CFBamSecSessionEditObj::~CFBamSecSessionEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamSecSessionEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamSecSessionEditObj::getClassCode() const {
		return( cfsec::CFSecSecSessionBuff::CLASS_CODE );
	}

	bool CFBamSecSessionEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecSecSessionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamSecSessionEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSecSessionEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_SecSessionId( "SecSessionId" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_SecDevName( "SecDevName" );
		static const std::string S_Start( "Start" );
		static const std::string S_Finish( "Finish" );
		static const std::string S_SecProxyId( "SecProxyId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamSecSessionEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecSessionId, CFBamSecSessionEditObj::getRequiredSecSessionId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFBamSecSessionEditObj::getRequiredSecUserId() ) );
		if( ! CFBamSecSessionEditObj::isOptionalSecDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SecDevName, CFBamSecSessionEditObj::getOptionalSecDevNameValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredTimestamp( &S_Space, S_Start, CFBamSecSessionEditObj::getRequiredStart() ) );
		if( ! CFBamSecSessionEditObj::isOptionalFinishNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredTimestamp( &S_Space, S_Finish, CFBamSecSessionEditObj::getOptionalFinishValue() ) );
		}
		if( ! CFBamSecSessionEditObj::isOptionalSecProxyIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecProxyId, CFBamSecSessionEditObj::getOptionalSecProxyIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamSecSessionEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamSecSessionEditObj::setRequiredRevision( int32_t value ) {
		getSecSessionEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamSecSessionEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		const uuid_ptr_t val = getRequiredSecSessionId();
		objName = cflib::CFLibXmlUtil::formatUuid( val );
		return( objName );
	}

	const std::string CFBamSecSessionEditObj::getGenDefName() {
		return( cfsec::CFSecSecSessionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSecSessionEditObj::getScope() {
		cfsec::ICFSecSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecSessionEditObj::getObjScope() {
		cfsec::ICFSecSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecSessionEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSecSessionEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSecSessionEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamSecSessionEditObj::getObjQualifiedName() {
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

	std::string CFBamSecSessionEditObj::getObjFullName() {
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

	cfsec::ICFSecSecSessionObj* CFBamSecSessionEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecSecSessionObj* retobj = getSchema()->getSecSessionTableObj()->realizeSecSession( dynamic_cast<cfsec::ICFSecSecSessionObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecSecSessionObj* CFBamSecSessionEditObj::read( bool forceRead ) {
		cfsec::ICFSecSecSessionObj* retval = getOrigAsSecSession()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecSecSessionObj* CFBamSecSessionEditObj::create() {
		cfsec::ICFSecSecSessionObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecSession()->getSchema() )->getSecSessionTableObj()->createSecSession( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecSecSessionEditObj* CFBamSecSessionEditObj::update() {
		getSchema()->getSecSessionTableObj()->updateSecSession( this );
		return( NULL );
	}

	cfsec::ICFSecSecSessionEditObj* CFBamSecSessionEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecSessionTableObj()->deleteSecSession( this );
		return( NULL );
	}

	cfsec::ICFSecSecSessionTableObj* CFBamSecSessionEditObj::getSecSessionTable() {
		return( orig->getSchema()->getSecSessionTableObj() );
	}

	cfsec::ICFSecSecSessionEditObj* CFBamSecSessionEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecSecSessionEditObj* CFBamSecSessionEditObj::getSecSessionEdit() {
		return( (cfsec::ICFSecSecSessionEditObj*)this );
	}

	cfsec::ICFSecSecSessionEditObj* CFBamSecSessionEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamSecSessionEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecSecSessionObj* CFBamSecSessionEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecSecSessionObj* CFBamSecSessionEditObj::getOrigAsSecSession() {
		return( dynamic_cast<cfsec::ICFSecSecSessionObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamSecSessionEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecSecSessionBuff* CFBamSecSessionEditObj::getBuff() {
		return( buff );
	}

	void CFBamSecSessionEditObj::setBuff( cfsec::CFSecSecSessionBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecSecSessionPKey* CFBamSecSessionEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamSecSessionEditObj::setPKey( cfsec::CFSecSecSessionPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamSecSessionEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamSecSessionEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const uuid_ptr_t CFBamSecSessionEditObj::getRequiredSecSessionId() {
		return( getPKey()->getRequiredSecSessionId() );
	}

	const uuid_ptr_t CFBamSecSessionEditObj::getRequiredSecSessionIdReference() {
		return( getPKey()->getRequiredSecSessionIdReference() );
	}

	const uuid_ptr_t CFBamSecSessionEditObj::getRequiredSecUserId() {
		return( getSecSessionBuff()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFBamSecSessionEditObj::getRequiredSecUserIdReference() {
		return( getSecSessionBuff()->getRequiredSecUserIdReference() );
	}

	bool CFBamSecSessionEditObj::isOptionalSecDevNameNull() {
		return( getSecSessionBuff()->isOptionalSecDevNameNull() );
	}

	const std::string& CFBamSecSessionEditObj::getOptionalSecDevNameValue() {
		return( getSecSessionBuff()->getOptionalSecDevNameValue() );
	}

	const std::string* CFBamSecSessionEditObj::getOptionalSecDevNameReference() {
		return( getSecSessionBuff()->getOptionalSecDevNameReference() );
	}

	void CFBamSecSessionEditObj::setOptionalSecDevNameNull() {
		if( ! getSecSessionBuff()->isOptionalSecDevNameNull() ) {
			getSecSessionEditBuff()->setOptionalSecDevNameNull();
		}
	}

	void CFBamSecSessionEditObj::setOptionalSecDevNameValue( const std::string& value ) {
		if( getSecSessionBuff()->isOptionalSecDevNameNull() ) {
			getSecSessionEditBuff()->setOptionalSecDevNameValue( value );
		}
		else if( getSecSessionBuff()->getOptionalSecDevNameValue() != value ) {
			getSecSessionEditBuff()->setOptionalSecDevNameValue( value );
		}
	}

	const std::chrono::system_clock::time_point& CFBamSecSessionEditObj::getRequiredStart() {
		return( getSecSessionBuff()->getRequiredStart() );
	}

	const std::chrono::system_clock::time_point* CFBamSecSessionEditObj::getRequiredStartReference() {
		return( getSecSessionBuff()->getRequiredStartReference() );
	}

	void CFBamSecSessionEditObj::setRequiredStart( const std::chrono::system_clock::time_point& value ) {
		if( getSecSessionBuff()->getRequiredStart() != value ) {
			getSecSessionEditBuff()->setRequiredStart( value );
		}
	}

	bool CFBamSecSessionEditObj::isOptionalFinishNull() {
		return( getSecSessionBuff()->isOptionalFinishNull() );
	}

	const std::chrono::system_clock::time_point& CFBamSecSessionEditObj::getOptionalFinishValue() {
		return( getSecSessionBuff()->getOptionalFinishValue() );
	}

	const std::chrono::system_clock::time_point* CFBamSecSessionEditObj::getOptionalFinishReference() {
		return( getSecSessionBuff()->getOptionalFinishReference() );
	}

	void CFBamSecSessionEditObj::setOptionalFinishNull() {
		if( ! getSecSessionBuff()->isOptionalFinishNull() ) {
			getSecSessionEditBuff()->setOptionalFinishNull();
		}
	}

	void CFBamSecSessionEditObj::setOptionalFinishValue( const std::chrono::system_clock::time_point& value ) {
		if( getSecSessionBuff()->isOptionalFinishNull() ) {
			getSecSessionEditBuff()->setOptionalFinishValue( value );
		}
		else if( getSecSessionBuff()->getOptionalFinishValue() != value ) {
			getSecSessionEditBuff()->setOptionalFinishValue( value );
		}
	}

	bool CFBamSecSessionEditObj::isOptionalSecProxyIdNull() {
		return( getSecSessionBuff()->isOptionalSecProxyIdNull() );
	}

	const uuid_ptr_t CFBamSecSessionEditObj::getOptionalSecProxyIdValue() {
		return( getSecSessionBuff()->getOptionalSecProxyIdValue() );
	}

	const uuid_ptr_t CFBamSecSessionEditObj::getOptionalSecProxyIdReference() {
		return( getSecSessionBuff()->getOptionalSecProxyIdReference() );
	}

	cfsec::ICFSecSecUserObj* CFBamSecSessionEditObj::getRequiredContainerSecUser( bool forceRead ) {
		cfsec::ICFSecSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecSession()->getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecSessionBuff()->getRequiredSecUserId() );
		}
		return( retobj );
	}

	void CFBamSecSessionEditObj::setRequiredContainerSecUser( cfsec::ICFSecSecUserObj* value ) {
			
			if( value != NULL ) {
				getSecSessionEditBuff()->setRequiredSecUserId( value->getRequiredSecUserId() );
			}
		}

	cfsec::ICFSecSecUserObj* CFBamSecSessionEditObj::getRequiredParentSecProxy( bool forceRead ) {
		cfsec::ICFSecSecUserObj* retobj = NULL;
		bool anyMissing = false;

			if( getSecSessionBuff()->isOptionalSecProxyIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecSession()->getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecSessionBuff()->getOptionalSecProxyIdValue() );
		}
		return( retobj );
	}

	void CFBamSecSessionEditObj::setRequiredParentSecProxy( cfsec::ICFSecSecUserObj* value ) {
			
			if( value != NULL ) {
				getSecSessionEditBuff()->setOptionalSecProxyIdValue( value->getRequiredSecUserId() );
			}
			else {
				getSecSessionEditBuff()->setOptionalSecProxyIdNull();
			}
		}

	void CFBamSecSessionEditObj::copyPKeyToBuff() {
		cfsec::CFSecSecSessionPKey* tablePKey = getPKey();
		cfsec::CFSecSecSessionBuff* tableBuff = getSecSessionEditBuff();
		tableBuff->setRequiredSecSessionId( tablePKey->getRequiredSecSessionId() );
	}

	void CFBamSecSessionEditObj::copyBuffToPKey() {
		cfsec::CFSecSecSessionPKey* tablePKey = getPKey();
		cfsec::CFSecSecSessionBuff* tableBuff = getSecSessionBuff();
		tablePKey->setRequiredSecSessionId( tableBuff->getRequiredSecSessionId() );
	}

	void CFBamSecSessionEditObj::copyBuffToOrig() {
		cfsec::CFSecSecSessionBuff* origBuff = getOrigAsSecSession()->getSecSessionEditBuff();
		cfsec::CFSecSecSessionBuff* myBuff = getSecSessionBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamSecSessionEditObj::copyOrigToBuff() {
		cfsec::CFSecSecSessionBuff* origBuff = getOrigAsSecSession()->getSecSessionBuff();
		cfsec::CFSecSecSessionBuff* myBuff = getSecSessionEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
