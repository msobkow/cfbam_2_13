// Description: C++18 edit object instance implementation for CFBam MajorVersion.

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
#include <cfbamobj/CFBamMajorVersionObj.hpp>
#include <cfbamobj/CFBamMajorVersionEditObj.hpp>


namespace cfbam {

	const std::string CFBamMajorVersionEditObj::CLASS_NAME( "CFBamMajorVersionEditObj" );

	CFBamMajorVersionEditObj::CFBamMajorVersionEditObj( cfint::ICFIntMajorVersionObj* argOrig )
	: ICFBamMajorVersionEditObj(),
	  ICFIntMajorVersionEditObj()
	{
		static const std::string S_ProcName( "CFBamMajorVersionEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfint::CFIntMajorVersionBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfint::CFIntMajorVersionBuff*>( origBuff->clone() );
	}

	CFBamMajorVersionEditObj::~CFBamMajorVersionEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamMajorVersionEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamMajorVersionEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMajorVersionBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamMajorVersionEditObj::getCreatedAt() {
		return( getMajorVersionBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamMajorVersionEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMajorVersionBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamMajorVersionEditObj::getUpdatedAt() {
		return( getMajorVersionBuff()->getUpdatedAt() );
	}

	void CFBamMajorVersionEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getMajorVersionEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamMajorVersionEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getMajorVersionEditBuff()->setCreatedAt( value );
	}

	void CFBamMajorVersionEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getMajorVersionEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamMajorVersionEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getMajorVersionEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamMajorVersionEditObj::getClassCode() const {
		return( cfint::CFIntMajorVersionBuff::CLASS_CODE );
	}

	bool CFBamMajorVersionEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntMajorVersionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamMajorVersionEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamMajorVersionEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_SubProjectId( "SubProjectId" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamMajorVersionEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamMajorVersionEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamMajorVersionEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamMajorVersionEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamMajorVersionEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamMajorVersionEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamMajorVersionEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubProjectId, CFBamMajorVersionEditObj::getRequiredSubProjectId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamMajorVersionEditObj::getRequiredName() ) );
		if( ! CFBamMajorVersionEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamMajorVersionEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamMajorVersionEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamMajorVersionEditObj::setRequiredRevision( int32_t value ) {
		getMajorVersionEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamMajorVersionEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamMajorVersionEditObj::getGenDefName() {
		return( cfint::CFIntMajorVersionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamMajorVersionEditObj::getScope() {
		cfint::ICFIntSubProjectObj* scope = getRequiredContainerParentSPrj();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamMajorVersionEditObj::getObjScope() {
		cfint::ICFIntSubProjectObj* scope = getRequiredContainerParentSPrj();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamMajorVersionEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamMajorVersionEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamMajorVersionEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMinorVersionTableObj()->readMinorVersionByLookupNameIdx( getRequiredTenantId(),
			getRequiredId(),
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

	std::string CFBamMajorVersionEditObj::getObjQualifiedName() {
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
			else if( container->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
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

	std::string CFBamMajorVersionEditObj::getObjFullName() {
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

	cfint::ICFIntMajorVersionObj* CFBamMajorVersionEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfint::ICFIntMajorVersionObj* retobj = getSchema()->getMajorVersionTableObj()->realizeMajorVersion( dynamic_cast<cfint::ICFIntMajorVersionObj*>( this ) );
		return( retobj );
	}

	cfint::ICFIntMajorVersionObj* CFBamMajorVersionEditObj::read( bool forceRead ) {
		cfint::ICFIntMajorVersionObj* retval = getOrigAsMajorVersion()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfint::ICFIntMajorVersionObj* CFBamMajorVersionEditObj::create() {
		cfint::ICFIntMajorVersionObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsMajorVersion()->getSchema() )->getMajorVersionTableObj()->createMajorVersion( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfint::ICFIntMajorVersionEditObj* CFBamMajorVersionEditObj::update() {
		getSchema()->getMajorVersionTableObj()->updateMajorVersion( this );
		return( NULL );
	}

	cfint::ICFIntMajorVersionEditObj* CFBamMajorVersionEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getMajorVersionTableObj()->deleteMajorVersion( this );
		return( NULL );
	}

	cfint::ICFIntMajorVersionTableObj* CFBamMajorVersionEditObj::getMajorVersionTable() {
		return( orig->getSchema()->getMajorVersionTableObj() );
	}

	cfint::ICFIntMajorVersionEditObj* CFBamMajorVersionEditObj::getEdit() {
		return( this );
	}

	cfint::ICFIntMajorVersionEditObj* CFBamMajorVersionEditObj::getMajorVersionEdit() {
		return( (cfint::ICFIntMajorVersionEditObj*)this );
	}

	cfint::ICFIntMajorVersionEditObj* CFBamMajorVersionEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamMajorVersionEditObj::endEdit() {
		orig->endEdit();
	}

	cfint::ICFIntMajorVersionObj* CFBamMajorVersionEditObj::getOrig() {
		return( orig );
	}

	cfint::ICFIntMajorVersionObj* CFBamMajorVersionEditObj::getOrigAsMajorVersion() {
		return( dynamic_cast<cfint::ICFIntMajorVersionObj*>( orig ) );
	}

	cfint::ICFIntSchemaObj* CFBamMajorVersionEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfint::CFIntMajorVersionBuff* CFBamMajorVersionEditObj::getBuff() {
		return( buff );
	}

	void CFBamMajorVersionEditObj::setBuff( cfint::CFIntMajorVersionBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfint::CFIntMajorVersionPKey* CFBamMajorVersionEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamMajorVersionEditObj::setPKey( cfint::CFIntMajorVersionPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamMajorVersionEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamMajorVersionEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamMajorVersionEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamMajorVersionEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamMajorVersionEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamMajorVersionEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamMajorVersionEditObj::getRequiredSubProjectId() {
		return( getMajorVersionBuff()->getRequiredSubProjectId() );
	}

	const int64_t* CFBamMajorVersionEditObj::getRequiredSubProjectIdReference() {
		return( getMajorVersionBuff()->getRequiredSubProjectIdReference() );
	}

	const std::string& CFBamMajorVersionEditObj::getRequiredName() {
		return( getMajorVersionBuff()->getRequiredName() );
	}

	const std::string* CFBamMajorVersionEditObj::getRequiredNameReference() {
		return( getMajorVersionBuff()->getRequiredNameReference() );
	}

	void CFBamMajorVersionEditObj::setRequiredName( const std::string& value ) {
		if( getMajorVersionBuff()->getRequiredName() != value ) {
			getMajorVersionEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamMajorVersionEditObj::isOptionalDescriptionNull() {
		return( getMajorVersionBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamMajorVersionEditObj::getOptionalDescriptionValue() {
		return( getMajorVersionBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamMajorVersionEditObj::getOptionalDescriptionReference() {
		return( getMajorVersionBuff()->getOptionalDescriptionReference() );
	}

	void CFBamMajorVersionEditObj::setOptionalDescriptionNull() {
		if( ! getMajorVersionBuff()->isOptionalDescriptionNull() ) {
			getMajorVersionEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamMajorVersionEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getMajorVersionBuff()->isOptionalDescriptionNull() ) {
			getMajorVersionEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getMajorVersionBuff()->getOptionalDescriptionValue() != value ) {
			getMajorVersionEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	cfsec::ICFSecTenantObj* CFBamMajorVersionEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsMajorVersion()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamMajorVersionEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getMajorVersionEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfint::ICFIntSubProjectObj* CFBamMajorVersionEditObj::getRequiredContainerParentSPrj( bool forceRead ) {
		cfint::ICFIntSubProjectObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsMajorVersion()->getSchema() )->getSubProjectTableObj()->readSubProjectByIdIdx( getPKey()->getRequiredTenantId(),
					getMajorVersionBuff()->getRequiredSubProjectId() );
		}
		return( retobj );
	}

	void CFBamMajorVersionEditObj::setRequiredContainerParentSPrj( cfint::ICFIntSubProjectObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getMajorVersionEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getMajorVersionEditBuff()->setRequiredSubProjectId( value->getRequiredId() );
			}
		}

	std::vector<cfint::ICFIntMinorVersionObj*> CFBamMajorVersionEditObj::getOptionalComponentsMinorVer( bool forceRead ) {
		std::vector<cfint::ICFIntMinorVersionObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsMajorVersion()->getSchema() )->getMinorVersionTableObj()->readMinorVersionByMajorVerIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamMajorVersionEditObj::copyPKeyToBuff() {
		cfint::CFIntMajorVersionPKey* tablePKey = getPKey();
		cfint::CFIntMajorVersionBuff* tableBuff = getMajorVersionEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamMajorVersionEditObj::copyBuffToPKey() {
		cfint::CFIntMajorVersionPKey* tablePKey = getPKey();
		cfint::CFIntMajorVersionBuff* tableBuff = getMajorVersionBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamMajorVersionEditObj::copyBuffToOrig() {
		cfint::CFIntMajorVersionBuff* origBuff = getOrigAsMajorVersion()->getMajorVersionEditBuff();
		cfint::CFIntMajorVersionBuff* myBuff = getMajorVersionBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamMajorVersionEditObj::copyOrigToBuff() {
		cfint::CFIntMajorVersionBuff* origBuff = getOrigAsMajorVersion()->getMajorVersionBuff();
		cfint::CFIntMajorVersionBuff* myBuff = getMajorVersionEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
