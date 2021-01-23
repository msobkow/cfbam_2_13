// Description: C++18 edit object instance implementation for CFBam ISOCtryLang.

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
#include <cfbamobj/CFBamISOCtryLangObj.hpp>
#include <cfbamobj/CFBamISOCtryLangEditObj.hpp>


namespace cfbam {

	const std::string CFBamISOCtryLangEditObj::CLASS_NAME( "CFBamISOCtryLangEditObj" );

	CFBamISOCtryLangEditObj::CFBamISOCtryLangEditObj( cfsec::ICFSecISOCtryLangObj* argOrig )
	: ICFBamISOCtryLangEditObj(),
	  ICFSecISOCtryLangEditObj(),
	  ICFIntISOCtryLangEditObj()
	{
		static const std::string S_ProcName( "CFBamISOCtryLangEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecISOCtryLangBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecISOCtryLangBuff*>( origBuff->clone() );
	}

	CFBamISOCtryLangEditObj::~CFBamISOCtryLangEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamISOCtryLangEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCtryLangEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCtryLangBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCtryLangEditObj::getCreatedAt() {
		return( getISOCtryLangBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCtryLangEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCtryLangBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCtryLangEditObj::getUpdatedAt() {
		return( getISOCtryLangBuff()->getUpdatedAt() );
	}

	void CFBamISOCtryLangEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getISOCtryLangEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamISOCtryLangEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getISOCtryLangEditBuff()->setCreatedAt( value );
	}

	void CFBamISOCtryLangEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getISOCtryLangEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamISOCtryLangEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getISOCtryLangEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamISOCtryLangEditObj::getClassCode() const {
		return( cfsec::CFSecISOCtryLangBuff::CLASS_CODE );
	}

	bool CFBamISOCtryLangEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecISOCtryLangBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamISOCtryLangEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamISOCtryLangEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ISOCtryId( "ISOCtryId" );
		static const std::string S_ISOLangId( "ISOLangId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamISOCtryLangEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamISOCtryLangEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamISOCtryLangEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamISOCtryLangEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamISOCtryLangEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOCtryId, CFBamISOCtryLangEditObj::getRequiredISOCtryId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOLangId, CFBamISOCtryLangEditObj::getRequiredISOLangId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamISOCtryLangEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamISOCtryLangEditObj::setRequiredRevision( int32_t value ) {
		getISOCtryLangEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamISOCtryLangEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int16_t val = getRequiredISOLangId();
		objName = cflib::CFLibXmlUtil::formatInt16( val );
		return( objName );
	}

	const std::string CFBamISOCtryLangEditObj::getGenDefName() {
		return( cfsec::CFSecISOCtryLangBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryLangEditObj::getScope() {
		cfsec::ICFSecISOCtryObj* scope = getRequiredContainerCtry();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryLangEditObj::getObjScope() {
		cfsec::ICFSecISOCtryObj* scope = getRequiredContainerCtry();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryLangEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamISOCtryLangEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryLangEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamISOCtryLangEditObj::getObjQualifiedName() {
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

	std::string CFBamISOCtryLangEditObj::getObjFullName() {
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

	cfsec::ICFSecISOCtryLangObj* CFBamISOCtryLangEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecISOCtryLangObj* retobj = getSchema()->getISOCtryLangTableObj()->realizeISOCtryLang( dynamic_cast<cfsec::ICFSecISOCtryLangObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecISOCtryLangObj* CFBamISOCtryLangEditObj::read( bool forceRead ) {
		cfsec::ICFSecISOCtryLangObj* retval = getOrigAsISOCtryLang()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecISOCtryLangObj* CFBamISOCtryLangEditObj::create() {
		cfsec::ICFSecISOCtryLangObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsISOCtryLang()->getSchema() )->getISOCtryLangTableObj()->createISOCtryLang( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecISOCtryLangEditObj* CFBamISOCtryLangEditObj::update() {
		getSchema()->getISOCtryLangTableObj()->updateISOCtryLang( this );
		return( NULL );
	}

	cfsec::ICFSecISOCtryLangEditObj* CFBamISOCtryLangEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getISOCtryLangTableObj()->deleteISOCtryLang( this );
		return( NULL );
	}

	cfsec::ICFSecISOCtryLangTableObj* CFBamISOCtryLangEditObj::getISOCtryLangTable() {
		return( orig->getSchema()->getISOCtryLangTableObj() );
	}

	cfsec::ICFSecISOCtryLangEditObj* CFBamISOCtryLangEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecISOCtryLangEditObj* CFBamISOCtryLangEditObj::getISOCtryLangEdit() {
		return( (cfsec::ICFSecISOCtryLangEditObj*)this );
	}

	cfsec::ICFSecISOCtryLangEditObj* CFBamISOCtryLangEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamISOCtryLangEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecISOCtryLangObj* CFBamISOCtryLangEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecISOCtryLangObj* CFBamISOCtryLangEditObj::getOrigAsISOCtryLang() {
		return( dynamic_cast<cfsec::ICFSecISOCtryLangObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamISOCtryLangEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecISOCtryLangBuff* CFBamISOCtryLangEditObj::getBuff() {
		return( buff );
	}

	void CFBamISOCtryLangEditObj::setBuff( cfsec::CFSecISOCtryLangBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecISOCtryLangPKey* CFBamISOCtryLangEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamISOCtryLangEditObj::setPKey( cfsec::CFSecISOCtryLangPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamISOCtryLangEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamISOCtryLangEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int16_t CFBamISOCtryLangEditObj::getRequiredISOCtryId() {
		return( getPKey()->getRequiredISOCtryId() );
	}

	const int16_t* CFBamISOCtryLangEditObj::getRequiredISOCtryIdReference() {
		return( getPKey()->getRequiredISOCtryIdReference() );
	}

	const int16_t CFBamISOCtryLangEditObj::getRequiredISOLangId() {
		return( getPKey()->getRequiredISOLangId() );
	}

	const int16_t* CFBamISOCtryLangEditObj::getRequiredISOLangIdReference() {
		return( getPKey()->getRequiredISOLangIdReference() );
	}

	cfsec::ICFSecISOCtryObj* CFBamISOCtryLangEditObj::getRequiredContainerCtry( bool forceRead ) {
		cfsec::ICFSecISOCtryObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsISOCtryLang()->getSchema() )->getISOCtryTableObj()->readISOCtryByIdIdx( getPKey()->getRequiredISOCtryId() );
		}
		return( retobj );
	}

	void CFBamISOCtryLangEditObj::setRequiredContainerCtry( cfsec::ICFSecISOCtryObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredISOCtryId
( value->getRequiredISOCtryId() );
				getISOCtryLangEditBuff()->setRequiredISOCtryId( value->getRequiredISOCtryId() );
			}
		}

	cfsec::ICFSecISOLangObj* CFBamISOCtryLangEditObj::getRequiredParentLang( bool forceRead ) {
		cfsec::ICFSecISOLangObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsISOCtryLang()->getSchema() )->getISOLangTableObj()->readISOLangByIdIdx( getPKey()->getRequiredISOLangId() );
		}
		return( retobj );
	}

	void CFBamISOCtryLangEditObj::setRequiredParentLang( cfsec::ICFSecISOLangObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredISOLangId
( value->getRequiredISOLangId() );
				getISOCtryLangEditBuff()->setRequiredISOLangId( value->getRequiredISOLangId() );
			}
			else {
			}
		}

	void CFBamISOCtryLangEditObj::copyPKeyToBuff() {
		cfsec::CFSecISOCtryLangPKey* tablePKey = getPKey();
		cfsec::CFSecISOCtryLangBuff* tableBuff = getISOCtryLangEditBuff();
		tableBuff->setRequiredISOCtryId( tablePKey->getRequiredISOCtryId() );
		tableBuff->setRequiredISOLangId( tablePKey->getRequiredISOLangId() );
	}

	void CFBamISOCtryLangEditObj::copyBuffToPKey() {
		cfsec::CFSecISOCtryLangPKey* tablePKey = getPKey();
		cfsec::CFSecISOCtryLangBuff* tableBuff = getISOCtryLangBuff();
		tablePKey->setRequiredISOCtryId( tableBuff->getRequiredISOCtryId() );
		tablePKey->setRequiredISOLangId( tableBuff->getRequiredISOLangId() );
	}

	void CFBamISOCtryLangEditObj::copyBuffToOrig() {
		cfsec::CFSecISOCtryLangBuff* origBuff = getOrigAsISOCtryLang()->getISOCtryLangEditBuff();
		cfsec::CFSecISOCtryLangBuff* myBuff = getISOCtryLangBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamISOCtryLangEditObj::copyOrigToBuff() {
		cfsec::CFSecISOCtryLangBuff* origBuff = getOrigAsISOCtryLang()->getISOCtryLangBuff();
		cfsec::CFSecISOCtryLangBuff* myBuff = getISOCtryLangEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
