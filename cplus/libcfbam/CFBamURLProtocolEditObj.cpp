// Description: C++18 edit object instance implementation for CFBam URLProtocol.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFInt 2.13 Internet Essentials
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
#include <cfbamobj/CFBamURLProtocolObj.hpp>
#include <cfbamobj/CFBamURLProtocolEditObj.hpp>


namespace cfbam {

	const std::string CFBamURLProtocolEditObj::CLASS_NAME( "CFBamURLProtocolEditObj" );

	CFBamURLProtocolEditObj::CFBamURLProtocolEditObj( cfint::ICFIntURLProtocolObj* argOrig )
	: ICFBamURLProtocolEditObj(),
	  ICFIntURLProtocolEditObj()
	{
		static const std::string S_ProcName( "CFBamURLProtocolEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfint::CFIntURLProtocolBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( origBuff->clone() );
	}

	CFBamURLProtocolEditObj::~CFBamURLProtocolEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamURLProtocolEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamURLProtocolEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getURLProtocolBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamURLProtocolEditObj::getCreatedAt() {
		return( getURLProtocolBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamURLProtocolEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getURLProtocolBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamURLProtocolEditObj::getUpdatedAt() {
		return( getURLProtocolBuff()->getUpdatedAt() );
	}

	void CFBamURLProtocolEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getURLProtocolEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamURLProtocolEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getURLProtocolEditBuff()->setCreatedAt( value );
	}

	void CFBamURLProtocolEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getURLProtocolEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamURLProtocolEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getURLProtocolEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamURLProtocolEditObj::getClassCode() const {
		return( cfint::CFIntURLProtocolBuff::CLASS_CODE );
	}

	bool CFBamURLProtocolEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamURLProtocolEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamURLProtocolEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_URLProtocolId( "URLProtocolId" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		static const std::string S_IsSecure( "IsSecure" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamURLProtocolEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamURLProtocolEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamURLProtocolEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamURLProtocolEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamURLProtocolEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_URLProtocolId, CFBamURLProtocolEditObj::getRequiredURLProtocolId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamURLProtocolEditObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamURLProtocolEditObj::getRequiredDescription() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsSecure, CFBamURLProtocolEditObj::getRequiredIsSecure() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamURLProtocolEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamURLProtocolEditObj::setRequiredRevision( int32_t value ) {
		getURLProtocolEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamURLProtocolEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamURLProtocolEditObj::getGenDefName() {
		return( cfint::CFIntURLProtocolBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamURLProtocolEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamURLProtocolEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamURLProtocolEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamURLProtocolEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamURLProtocolEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamURLProtocolEditObj::getObjQualifiedName() {
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

	std::string CFBamURLProtocolEditObj::getObjFullName() {
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

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfint::ICFIntURLProtocolObj* retobj = getSchema()->getURLProtocolTableObj()->realizeURLProtocol( dynamic_cast<cfint::ICFIntURLProtocolObj*>( this ) );
		return( retobj );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolEditObj::read( bool forceRead ) {
		cfint::ICFIntURLProtocolObj* retval = getOrigAsURLProtocol()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolEditObj::create() {
		cfint::ICFIntURLProtocolObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsURLProtocol()->getSchema() )->getURLProtocolTableObj()->createURLProtocol( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfint::ICFIntURLProtocolEditObj* CFBamURLProtocolEditObj::update() {
		getSchema()->getURLProtocolTableObj()->updateURLProtocol( this );
		return( NULL );
	}

	cfint::ICFIntURLProtocolEditObj* CFBamURLProtocolEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getURLProtocolTableObj()->deleteURLProtocol( this );
		return( NULL );
	}

	cfint::ICFIntURLProtocolTableObj* CFBamURLProtocolEditObj::getURLProtocolTable() {
		return( orig->getSchema()->getURLProtocolTableObj() );
	}

	cfint::ICFIntURLProtocolEditObj* CFBamURLProtocolEditObj::getEdit() {
		return( this );
	}

	cfint::ICFIntURLProtocolEditObj* CFBamURLProtocolEditObj::getURLProtocolEdit() {
		return( (cfint::ICFIntURLProtocolEditObj*)this );
	}

	cfint::ICFIntURLProtocolEditObj* CFBamURLProtocolEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamURLProtocolEditObj::endEdit() {
		orig->endEdit();
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolEditObj::getOrig() {
		return( orig );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolEditObj::getOrigAsURLProtocol() {
		return( dynamic_cast<cfint::ICFIntURLProtocolObj*>( orig ) );
	}

	cfint::ICFIntSchemaObj* CFBamURLProtocolEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfint::CFIntURLProtocolBuff* CFBamURLProtocolEditObj::getBuff() {
		return( buff );
	}

	void CFBamURLProtocolEditObj::setBuff( cfint::CFIntURLProtocolBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfint::CFIntURLProtocolPKey* CFBamURLProtocolEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamURLProtocolEditObj::setPKey( cfint::CFIntURLProtocolPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamURLProtocolEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamURLProtocolEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int32_t CFBamURLProtocolEditObj::getRequiredURLProtocolId() {
		return( getPKey()->getRequiredURLProtocolId() );
	}

	const int32_t* CFBamURLProtocolEditObj::getRequiredURLProtocolIdReference() {
		return( getPKey()->getRequiredURLProtocolIdReference() );
	}

	const std::string& CFBamURLProtocolEditObj::getRequiredName() {
		return( getURLProtocolBuff()->getRequiredName() );
	}

	const std::string* CFBamURLProtocolEditObj::getRequiredNameReference() {
		return( getURLProtocolBuff()->getRequiredNameReference() );
	}

	void CFBamURLProtocolEditObj::setRequiredName( const std::string& value ) {
		if( getURLProtocolBuff()->getRequiredName() != value ) {
			getURLProtocolEditBuff()->setRequiredName( value );
		}
	}

	const std::string& CFBamURLProtocolEditObj::getRequiredDescription() {
		return( getURLProtocolBuff()->getRequiredDescription() );
	}

	const std::string* CFBamURLProtocolEditObj::getRequiredDescriptionReference() {
		return( getURLProtocolBuff()->getRequiredDescriptionReference() );
	}

	void CFBamURLProtocolEditObj::setRequiredDescription( const std::string& value ) {
		if( getURLProtocolBuff()->getRequiredDescription() != value ) {
			getURLProtocolEditBuff()->setRequiredDescription( value );
		}
	}

	const bool CFBamURLProtocolEditObj::getRequiredIsSecure() {
		return( getURLProtocolBuff()->getRequiredIsSecure() );
	}

	const bool* CFBamURLProtocolEditObj::getRequiredIsSecureReference() {
		return( getURLProtocolBuff()->getRequiredIsSecureReference() );
	}

	void CFBamURLProtocolEditObj::setRequiredIsSecure( const bool value ) {
		if( getURLProtocolBuff()->getRequiredIsSecure() != value ) {
			getURLProtocolEditBuff()->setRequiredIsSecure( value );
		}
	}

	void CFBamURLProtocolEditObj::copyPKeyToBuff() {
		cfint::CFIntURLProtocolPKey* tablePKey = getPKey();
		cfint::CFIntURLProtocolBuff* tableBuff = getURLProtocolEditBuff();
		tableBuff->setRequiredURLProtocolId( tablePKey->getRequiredURLProtocolId() );
	}

	void CFBamURLProtocolEditObj::copyBuffToPKey() {
		cfint::CFIntURLProtocolPKey* tablePKey = getPKey();
		cfint::CFIntURLProtocolBuff* tableBuff = getURLProtocolBuff();
		tablePKey->setRequiredURLProtocolId( tableBuff->getRequiredURLProtocolId() );
	}

	void CFBamURLProtocolEditObj::copyBuffToOrig() {
		cfint::CFIntURLProtocolBuff* origBuff = getOrigAsURLProtocol()->getURLProtocolEditBuff();
		cfint::CFIntURLProtocolBuff* myBuff = getURLProtocolBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamURLProtocolEditObj::copyOrigToBuff() {
		cfint::CFIntURLProtocolBuff* origBuff = getOrigAsURLProtocol()->getURLProtocolBuff();
		cfint::CFIntURLProtocolBuff* myBuff = getURLProtocolEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
