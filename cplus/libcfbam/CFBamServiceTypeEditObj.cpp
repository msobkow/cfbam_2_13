// Description: C++18 edit object instance implementation for CFBam ServiceType.

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
#include <cfbamobj/CFBamServiceTypeObj.hpp>
#include <cfbamobj/CFBamServiceTypeEditObj.hpp>


namespace cfbam {

	const std::string CFBamServiceTypeEditObj::CLASS_NAME( "CFBamServiceTypeEditObj" );

	CFBamServiceTypeEditObj::CFBamServiceTypeEditObj( cfsec::ICFSecServiceTypeObj* argOrig )
	: ICFBamServiceTypeEditObj(),
	  ICFSecServiceTypeEditObj(),
	  ICFIntServiceTypeEditObj()
	{
		static const std::string S_ProcName( "CFBamServiceTypeEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecServiceTypeBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecServiceTypeBuff*>( origBuff->clone() );
	}

	CFBamServiceTypeEditObj::~CFBamServiceTypeEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamServiceTypeEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamServiceTypeEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getServiceTypeBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamServiceTypeEditObj::getCreatedAt() {
		return( getServiceTypeBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamServiceTypeEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getServiceTypeBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamServiceTypeEditObj::getUpdatedAt() {
		return( getServiceTypeBuff()->getUpdatedAt() );
	}

	void CFBamServiceTypeEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getServiceTypeEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamServiceTypeEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getServiceTypeEditBuff()->setCreatedAt( value );
	}

	void CFBamServiceTypeEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getServiceTypeEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamServiceTypeEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getServiceTypeEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamServiceTypeEditObj::getClassCode() const {
		return( cfsec::CFSecServiceTypeBuff::CLASS_CODE );
	}

	bool CFBamServiceTypeEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecServiceTypeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamServiceTypeEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServiceTypeEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ServiceTypeId( "ServiceTypeId" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamServiceTypeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamServiceTypeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamServiceTypeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamServiceTypeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamServiceTypeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_ServiceTypeId, CFBamServiceTypeEditObj::getRequiredServiceTypeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamServiceTypeEditObj::getRequiredDescription() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamServiceTypeEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamServiceTypeEditObj::setRequiredRevision( int32_t value ) {
		getServiceTypeEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamServiceTypeEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredDescription() );
		return( objName );
	}

	const std::string CFBamServiceTypeEditObj::getGenDefName() {
		return( cfsec::CFSecServiceTypeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamServiceTypeEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamServiceTypeEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamServiceTypeEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamServiceTypeEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamServiceTypeEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamServiceTypeEditObj::getObjQualifiedName() {
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

	std::string CFBamServiceTypeEditObj::getObjFullName() {
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

	cfsec::ICFSecServiceTypeObj* CFBamServiceTypeEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecServiceTypeObj* retobj = getSchema()->getServiceTypeTableObj()->realizeServiceType( dynamic_cast<cfsec::ICFSecServiceTypeObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecServiceTypeObj* CFBamServiceTypeEditObj::read( bool forceRead ) {
		cfsec::ICFSecServiceTypeObj* retval = getOrigAsServiceType()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecServiceTypeObj* CFBamServiceTypeEditObj::create() {
		cfsec::ICFSecServiceTypeObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsServiceType()->getSchema() )->getServiceTypeTableObj()->createServiceType( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecServiceTypeEditObj* CFBamServiceTypeEditObj::update() {
		getSchema()->getServiceTypeTableObj()->updateServiceType( this );
		return( NULL );
	}

	cfsec::ICFSecServiceTypeEditObj* CFBamServiceTypeEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getServiceTypeTableObj()->deleteServiceType( this );
		return( NULL );
	}

	cfsec::ICFSecServiceTypeTableObj* CFBamServiceTypeEditObj::getServiceTypeTable() {
		return( orig->getSchema()->getServiceTypeTableObj() );
	}

	cfsec::ICFSecServiceTypeEditObj* CFBamServiceTypeEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecServiceTypeEditObj* CFBamServiceTypeEditObj::getServiceTypeEdit() {
		return( (cfsec::ICFSecServiceTypeEditObj*)this );
	}

	cfsec::ICFSecServiceTypeEditObj* CFBamServiceTypeEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamServiceTypeEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecServiceTypeObj* CFBamServiceTypeEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecServiceTypeObj* CFBamServiceTypeEditObj::getOrigAsServiceType() {
		return( dynamic_cast<cfsec::ICFSecServiceTypeObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamServiceTypeEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecServiceTypeBuff* CFBamServiceTypeEditObj::getBuff() {
		return( buff );
	}

	void CFBamServiceTypeEditObj::setBuff( cfsec::CFSecServiceTypeBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecServiceTypePKey* CFBamServiceTypeEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamServiceTypeEditObj::setPKey( cfsec::CFSecServiceTypePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamServiceTypeEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamServiceTypeEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int32_t CFBamServiceTypeEditObj::getRequiredServiceTypeId() {
		return( getPKey()->getRequiredServiceTypeId() );
	}

	const int32_t* CFBamServiceTypeEditObj::getRequiredServiceTypeIdReference() {
		return( getPKey()->getRequiredServiceTypeIdReference() );
	}

	const std::string& CFBamServiceTypeEditObj::getRequiredDescription() {
		return( getServiceTypeBuff()->getRequiredDescription() );
	}

	const std::string* CFBamServiceTypeEditObj::getRequiredDescriptionReference() {
		return( getServiceTypeBuff()->getRequiredDescriptionReference() );
	}

	void CFBamServiceTypeEditObj::setRequiredDescription( const std::string& value ) {
		if( getServiceTypeBuff()->getRequiredDescription() != value ) {
			getServiceTypeEditBuff()->setRequiredDescription( value );
		}
	}

	std::vector<cfsec::ICFSecServiceObj*> CFBamServiceTypeEditObj::getOptionalChildrenDeployed( bool forceRead ) {
		std::vector<cfsec::ICFSecServiceObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsServiceType()->getSchema() )->getServiceTableObj()->readServiceByTypeIdx( getPKey()->getRequiredServiceTypeId(),
			forceRead );
		return( retval );
	}

	void CFBamServiceTypeEditObj::copyPKeyToBuff() {
		cfsec::CFSecServiceTypePKey* tablePKey = getPKey();
		cfsec::CFSecServiceTypeBuff* tableBuff = getServiceTypeEditBuff();
		tableBuff->setRequiredServiceTypeId( tablePKey->getRequiredServiceTypeId() );
	}

	void CFBamServiceTypeEditObj::copyBuffToPKey() {
		cfsec::CFSecServiceTypePKey* tablePKey = getPKey();
		cfsec::CFSecServiceTypeBuff* tableBuff = getServiceTypeBuff();
		tablePKey->setRequiredServiceTypeId( tableBuff->getRequiredServiceTypeId() );
	}

	void CFBamServiceTypeEditObj::copyBuffToOrig() {
		cfsec::CFSecServiceTypeBuff* origBuff = getOrigAsServiceType()->getServiceTypeEditBuff();
		cfsec::CFSecServiceTypeBuff* myBuff = getServiceTypeBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamServiceTypeEditObj::copyOrigToBuff() {
		cfsec::CFSecServiceTypeBuff* origBuff = getOrigAsServiceType()->getServiceTypeBuff();
		cfsec::CFSecServiceTypeBuff* myBuff = getServiceTypeEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
