// Description: C++18 edit object instance implementation for CFBam SecGroupForm.

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
#include <cfbamobj/CFBamSecGroupFormObj.hpp>
#include <cfbamobj/CFBamSecGroupFormEditObj.hpp>


namespace cfbam {

	const std::string CFBamSecGroupFormEditObj::CLASS_NAME( "CFBamSecGroupFormEditObj" );

	CFBamSecGroupFormEditObj::CFBamSecGroupFormEditObj( cfsec::ICFSecSecGroupFormObj* argOrig )
	: ICFBamSecGroupFormEditObj(),
	  ICFSecSecGroupFormEditObj(),
	  ICFIntSecGroupFormEditObj()
	{
		static const std::string S_ProcName( "CFBamSecGroupFormEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecSecGroupFormBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecSecGroupFormBuff*>( origBuff->clone() );
	}

	CFBamSecGroupFormEditObj::~CFBamSecGroupFormEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamSecGroupFormEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamSecGroupFormEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGroupFormBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecGroupFormEditObj::getCreatedAt() {
		return( getSecGroupFormBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamSecGroupFormEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGroupFormBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecGroupFormEditObj::getUpdatedAt() {
		return( getSecGroupFormBuff()->getUpdatedAt() );
	}

	void CFBamSecGroupFormEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecGroupFormEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSecGroupFormEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGroupFormEditBuff()->setCreatedAt( value );
	}

	void CFBamSecGroupFormEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecGroupFormEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSecGroupFormEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGroupFormEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamSecGroupFormEditObj::getClassCode() const {
		return( cfsec::CFSecSecGroupFormBuff::CLASS_CODE );
	}

	bool CFBamSecGroupFormEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecSecGroupFormBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamSecGroupFormEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSecGroupFormEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGroupFormId( "SecGroupFormId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_SecAppId( "SecAppId" );
		static const std::string S_SecFormId( "SecFormId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamSecGroupFormEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamSecGroupFormEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamSecGroupFormEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamSecGroupFormEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamSecGroupFormEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFBamSecGroupFormEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGroupFormId, CFBamSecGroupFormEditObj::getRequiredSecGroupFormId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, CFBamSecGroupFormEditObj::getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecAppId, CFBamSecGroupFormEditObj::getRequiredSecAppId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecFormId, CFBamSecGroupFormEditObj::getRequiredSecFormId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamSecGroupFormEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamSecGroupFormEditObj::setRequiredRevision( int32_t value ) {
		getSecGroupFormEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamSecGroupFormEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredSecGroupFormId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFBamSecGroupFormEditObj::getGenDefName() {
		return( cfsec::CFSecSecGroupFormBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSecGroupFormEditObj::getScope() {
		cfsec::ICFSecSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecGroupFormEditObj::getObjScope() {
		cfsec::ICFSecSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecGroupFormEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSecGroupFormEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSecGroupFormEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamSecGroupFormEditObj::getObjQualifiedName() {
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

	std::string CFBamSecGroupFormEditObj::getObjFullName() {
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

	cfsec::ICFSecSecGroupFormObj* CFBamSecGroupFormEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecSecGroupFormObj* retobj = getSchema()->getSecGroupFormTableObj()->realizeSecGroupForm( dynamic_cast<cfsec::ICFSecSecGroupFormObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecSecGroupFormObj* CFBamSecGroupFormEditObj::read( bool forceRead ) {
		cfsec::ICFSecSecGroupFormObj* retval = getOrigAsSecGroupForm()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecSecGroupFormObj* CFBamSecGroupFormEditObj::create() {
		cfsec::ICFSecSecGroupFormObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getSecGroupFormTableObj()->createSecGroupForm( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecSecGroupFormEditObj* CFBamSecGroupFormEditObj::update() {
		getSchema()->getSecGroupFormTableObj()->updateSecGroupForm( this );
		return( NULL );
	}

	cfsec::ICFSecSecGroupFormEditObj* CFBamSecGroupFormEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecGroupFormTableObj()->deleteSecGroupForm( this );
		return( NULL );
	}

	cfsec::ICFSecSecGroupFormTableObj* CFBamSecGroupFormEditObj::getSecGroupFormTable() {
		return( orig->getSchema()->getSecGroupFormTableObj() );
	}

	cfsec::ICFSecSecGroupFormEditObj* CFBamSecGroupFormEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecSecGroupFormEditObj* CFBamSecGroupFormEditObj::getSecGroupFormEdit() {
		return( (cfsec::ICFSecSecGroupFormEditObj*)this );
	}

	cfsec::ICFSecSecGroupFormEditObj* CFBamSecGroupFormEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamSecGroupFormEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecSecGroupFormObj* CFBamSecGroupFormEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecSecGroupFormObj* CFBamSecGroupFormEditObj::getOrigAsSecGroupForm() {
		return( dynamic_cast<cfsec::ICFSecSecGroupFormObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamSecGroupFormEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecSecGroupFormBuff* CFBamSecGroupFormEditObj::getBuff() {
		return( buff );
	}

	void CFBamSecGroupFormEditObj::setBuff( cfsec::CFSecSecGroupFormBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecSecGroupFormPKey* CFBamSecGroupFormEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamSecGroupFormEditObj::setPKey( cfsec::CFSecSecGroupFormPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamSecGroupFormEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamSecGroupFormEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamSecGroupFormEditObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFBamSecGroupFormEditObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFBamSecGroupFormEditObj::getRequiredSecGroupFormId() {
		return( getPKey()->getRequiredSecGroupFormId() );
	}

	const int64_t* CFBamSecGroupFormEditObj::getRequiredSecGroupFormIdReference() {
		return( getPKey()->getRequiredSecGroupFormIdReference() );
	}

	const int32_t CFBamSecGroupFormEditObj::getRequiredSecGroupId() {
		return( getSecGroupFormBuff()->getRequiredSecGroupId() );
	}

	const int32_t* CFBamSecGroupFormEditObj::getRequiredSecGroupIdReference() {
		return( getSecGroupFormBuff()->getRequiredSecGroupIdReference() );
	}

	const int32_t CFBamSecGroupFormEditObj::getRequiredSecAppId() {
		return( getSecGroupFormBuff()->getRequiredSecAppId() );
	}

	const int32_t* CFBamSecGroupFormEditObj::getRequiredSecAppIdReference() {
		return( getSecGroupFormBuff()->getRequiredSecAppIdReference() );
	}

	const int32_t CFBamSecGroupFormEditObj::getRequiredSecFormId() {
		return( getSecGroupFormBuff()->getRequiredSecFormId() );
	}

	const int32_t* CFBamSecGroupFormEditObj::getRequiredSecFormIdReference() {
		return( getSecGroupFormBuff()->getRequiredSecFormIdReference() );
	}

	cfsec::ICFSecClusterObj* CFBamSecGroupFormEditObj::getRequiredOwnerCluster( bool forceRead ) {
		cfsec::ICFSecClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFBamSecGroupFormEditObj::setRequiredOwnerCluster( cfsec::ICFSecClusterObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredId() );
				getSecGroupFormEditBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	cfsec::ICFSecSecGroupObj* CFBamSecGroupFormEditObj::getRequiredContainerGroup( bool forceRead ) {
		cfsec::ICFSecSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getSecGroupTableObj()->readSecGroupByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGroupFormBuff()->getRequiredSecGroupId() );
		}
		return( retobj );
	}

	void CFBamSecGroupFormEditObj::setRequiredContainerGroup( cfsec::ICFSecSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGroupFormEditBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGroupFormEditBuff()->setRequiredSecGroupId( value->getRequiredSecGroupId() );
			}
		}

	cfsec::ICFSecSecAppObj* CFBamSecGroupFormEditObj::getRequiredParentApp( bool forceRead ) {
		cfsec::ICFSecSecAppObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getSecAppTableObj()->readSecAppByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGroupFormBuff()->getRequiredSecAppId() );
		}
		return( retobj );
	}

	void CFBamSecGroupFormEditObj::setRequiredParentApp( cfsec::ICFSecSecAppObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGroupFormEditBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGroupFormEditBuff()->setRequiredSecAppId( value->getRequiredSecAppId() );
			}
			else {
			}
		}

	cfsec::ICFSecSecFormObj* CFBamSecGroupFormEditObj::getRequiredParentForm( bool forceRead ) {
		cfsec::ICFSecSecFormObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getSecFormTableObj()->readSecFormByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGroupFormBuff()->getRequiredSecFormId() );
		}
		return( retobj );
	}

	void CFBamSecGroupFormEditObj::setRequiredParentForm( cfsec::ICFSecSecFormObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGroupFormEditBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGroupFormEditBuff()->setRequiredSecFormId( value->getRequiredSecFormId() );
			}
			else {
			}
		}

	void CFBamSecGroupFormEditObj::copyPKeyToBuff() {
		cfsec::CFSecSecGroupFormPKey* tablePKey = getPKey();
		cfsec::CFSecSecGroupFormBuff* tableBuff = getSecGroupFormEditBuff();
		tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
		tableBuff->setRequiredSecGroupFormId( tablePKey->getRequiredSecGroupFormId() );
	}

	void CFBamSecGroupFormEditObj::copyBuffToPKey() {
		cfsec::CFSecSecGroupFormPKey* tablePKey = getPKey();
		cfsec::CFSecSecGroupFormBuff* tableBuff = getSecGroupFormBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecGroupFormId( tableBuff->getRequiredSecGroupFormId() );
	}

	void CFBamSecGroupFormEditObj::copyBuffToOrig() {
		cfsec::CFSecSecGroupFormBuff* origBuff = getOrigAsSecGroupForm()->getSecGroupFormEditBuff();
		cfsec::CFSecSecGroupFormBuff* myBuff = getSecGroupFormBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamSecGroupFormEditObj::copyOrigToBuff() {
		cfsec::CFSecSecGroupFormBuff* origBuff = getOrigAsSecGroupForm()->getSecGroupFormBuff();
		cfsec::CFSecSecGroupFormBuff* myBuff = getSecGroupFormEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
