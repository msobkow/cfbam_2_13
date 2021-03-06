// Description: C++18 edit object instance implementation for CFBam ISOCtryCcy.

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
#include <cfbamobj/CFBamISOCtryCcyObj.hpp>
#include <cfbamobj/CFBamISOCtryCcyEditObj.hpp>


namespace cfbam {

	const std::string CFBamISOCtryCcyEditObj::CLASS_NAME( "CFBamISOCtryCcyEditObj" );

	CFBamISOCtryCcyEditObj::CFBamISOCtryCcyEditObj( cfsec::ICFSecISOCtryCcyObj* argOrig )
	: ICFBamISOCtryCcyEditObj(),
	  ICFSecISOCtryCcyEditObj(),
	  ICFIntISOCtryCcyEditObj()
	{
		static const std::string S_ProcName( "CFBamISOCtryCcyEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecISOCtryCcyBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( origBuff->clone() );
	}

	CFBamISOCtryCcyEditObj::~CFBamISOCtryCcyEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamISOCtryCcyEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCtryCcyEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCtryCcyBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCtryCcyEditObj::getCreatedAt() {
		return( getISOCtryCcyBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCtryCcyEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCtryCcyBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCtryCcyEditObj::getUpdatedAt() {
		return( getISOCtryCcyBuff()->getUpdatedAt() );
	}

	void CFBamISOCtryCcyEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getISOCtryCcyEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamISOCtryCcyEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getISOCtryCcyEditBuff()->setCreatedAt( value );
	}

	void CFBamISOCtryCcyEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getISOCtryCcyEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamISOCtryCcyEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getISOCtryCcyEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamISOCtryCcyEditObj::getClassCode() const {
		return( cfsec::CFSecISOCtryCcyBuff::CLASS_CODE );
	}

	bool CFBamISOCtryCcyEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamISOCtryCcyEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamISOCtryCcyEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ISOCtryId( "ISOCtryId" );
		static const std::string S_ISOCcyId( "ISOCcyId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamISOCtryCcyEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamISOCtryCcyEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamISOCtryCcyEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamISOCtryCcyEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamISOCtryCcyEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOCtryId, CFBamISOCtryCcyEditObj::getRequiredISOCtryId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOCcyId, CFBamISOCtryCcyEditObj::getRequiredISOCcyId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamISOCtryCcyEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamISOCtryCcyEditObj::setRequiredRevision( int32_t value ) {
		getISOCtryCcyEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamISOCtryCcyEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int16_t val = getRequiredISOCcyId();
		objName = cflib::CFLibXmlUtil::formatInt16( val );
		return( objName );
	}

	const std::string CFBamISOCtryCcyEditObj::getGenDefName() {
		return( cfsec::CFSecISOCtryCcyBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryCcyEditObj::getScope() {
		cfsec::ICFSecISOCtryObj* scope = getRequiredContainerCtry();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryCcyEditObj::getObjScope() {
		cfsec::ICFSecISOCtryObj* scope = getRequiredContainerCtry();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryCcyEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamISOCtryCcyEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryCcyEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamISOCtryCcyEditObj::getObjQualifiedName() {
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

	std::string CFBamISOCtryCcyEditObj::getObjFullName() {
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

	cfsec::ICFSecISOCtryCcyObj* CFBamISOCtryCcyEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecISOCtryCcyObj* retobj = getSchema()->getISOCtryCcyTableObj()->realizeISOCtryCcy( dynamic_cast<cfsec::ICFSecISOCtryCcyObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecISOCtryCcyObj* CFBamISOCtryCcyEditObj::read( bool forceRead ) {
		cfsec::ICFSecISOCtryCcyObj* retval = getOrigAsISOCtryCcy()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecISOCtryCcyObj* CFBamISOCtryCcyEditObj::create() {
		cfsec::ICFSecISOCtryCcyObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsISOCtryCcy()->getSchema() )->getISOCtryCcyTableObj()->createISOCtryCcy( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecISOCtryCcyEditObj* CFBamISOCtryCcyEditObj::update() {
		getSchema()->getISOCtryCcyTableObj()->updateISOCtryCcy( this );
		return( NULL );
	}

	cfsec::ICFSecISOCtryCcyEditObj* CFBamISOCtryCcyEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getISOCtryCcyTableObj()->deleteISOCtryCcy( this );
		return( NULL );
	}

	cfsec::ICFSecISOCtryCcyTableObj* CFBamISOCtryCcyEditObj::getISOCtryCcyTable() {
		return( orig->getSchema()->getISOCtryCcyTableObj() );
	}

	cfsec::ICFSecISOCtryCcyEditObj* CFBamISOCtryCcyEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecISOCtryCcyEditObj* CFBamISOCtryCcyEditObj::getISOCtryCcyEdit() {
		return( (cfsec::ICFSecISOCtryCcyEditObj*)this );
	}

	cfsec::ICFSecISOCtryCcyEditObj* CFBamISOCtryCcyEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamISOCtryCcyEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecISOCtryCcyObj* CFBamISOCtryCcyEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecISOCtryCcyObj* CFBamISOCtryCcyEditObj::getOrigAsISOCtryCcy() {
		return( dynamic_cast<cfsec::ICFSecISOCtryCcyObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamISOCtryCcyEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecISOCtryCcyBuff* CFBamISOCtryCcyEditObj::getBuff() {
		return( buff );
	}

	void CFBamISOCtryCcyEditObj::setBuff( cfsec::CFSecISOCtryCcyBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecISOCtryCcyPKey* CFBamISOCtryCcyEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamISOCtryCcyEditObj::setPKey( cfsec::CFSecISOCtryCcyPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamISOCtryCcyEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamISOCtryCcyEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int16_t CFBamISOCtryCcyEditObj::getRequiredISOCtryId() {
		return( getPKey()->getRequiredISOCtryId() );
	}

	const int16_t* CFBamISOCtryCcyEditObj::getRequiredISOCtryIdReference() {
		return( getPKey()->getRequiredISOCtryIdReference() );
	}

	const int16_t CFBamISOCtryCcyEditObj::getRequiredISOCcyId() {
		return( getPKey()->getRequiredISOCcyId() );
	}

	const int16_t* CFBamISOCtryCcyEditObj::getRequiredISOCcyIdReference() {
		return( getPKey()->getRequiredISOCcyIdReference() );
	}

	cfsec::ICFSecISOCtryObj* CFBamISOCtryCcyEditObj::getRequiredContainerCtry( bool forceRead ) {
		cfsec::ICFSecISOCtryObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsISOCtryCcy()->getSchema() )->getISOCtryTableObj()->readISOCtryByIdIdx( getPKey()->getRequiredISOCtryId() );
		}
		return( retobj );
	}

	void CFBamISOCtryCcyEditObj::setRequiredContainerCtry( cfsec::ICFSecISOCtryObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredISOCtryId
( value->getRequiredISOCtryId() );
				getISOCtryCcyEditBuff()->setRequiredISOCtryId( value->getRequiredISOCtryId() );
			}
		}

	cfsec::ICFSecISOCcyObj* CFBamISOCtryCcyEditObj::getRequiredParentCcy( bool forceRead ) {
		cfsec::ICFSecISOCcyObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsISOCtryCcy()->getSchema() )->getISOCcyTableObj()->readISOCcyByIdIdx( getPKey()->getRequiredISOCcyId() );
		}
		return( retobj );
	}

	void CFBamISOCtryCcyEditObj::setRequiredParentCcy( cfsec::ICFSecISOCcyObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredISOCcyId
( value->getRequiredISOCcyId() );
				getISOCtryCcyEditBuff()->setRequiredISOCcyId( value->getRequiredISOCcyId() );
			}
			else {
			}
		}

	void CFBamISOCtryCcyEditObj::copyPKeyToBuff() {
		cfsec::CFSecISOCtryCcyPKey* tablePKey = getPKey();
		cfsec::CFSecISOCtryCcyBuff* tableBuff = getISOCtryCcyEditBuff();
		tableBuff->setRequiredISOCtryId( tablePKey->getRequiredISOCtryId() );
		tableBuff->setRequiredISOCcyId( tablePKey->getRequiredISOCcyId() );
	}

	void CFBamISOCtryCcyEditObj::copyBuffToPKey() {
		cfsec::CFSecISOCtryCcyPKey* tablePKey = getPKey();
		cfsec::CFSecISOCtryCcyBuff* tableBuff = getISOCtryCcyBuff();
		tablePKey->setRequiredISOCtryId( tableBuff->getRequiredISOCtryId() );
		tablePKey->setRequiredISOCcyId( tableBuff->getRequiredISOCcyId() );
	}

	void CFBamISOCtryCcyEditObj::copyBuffToOrig() {
		cfsec::CFSecISOCtryCcyBuff* origBuff = getOrigAsISOCtryCcy()->getISOCtryCcyEditBuff();
		cfsec::CFSecISOCtryCcyBuff* myBuff = getISOCtryCcyBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamISOCtryCcyEditObj::copyOrigToBuff() {
		cfsec::CFSecISOCtryCcyBuff* origBuff = getOrigAsISOCtryCcy()->getISOCtryCcyBuff();
		cfsec::CFSecISOCtryCcyBuff* myBuff = getISOCtryCcyEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
