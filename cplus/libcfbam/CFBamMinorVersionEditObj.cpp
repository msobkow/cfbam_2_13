// Description: C++18 edit object instance implementation for CFBam MinorVersion.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFInt 2.13 Internet Essentials
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
#include <cfbamobj/CFBamMinorVersionObj.hpp>
#include <cfbamobj/CFBamMinorVersionEditObj.hpp>


namespace cfbam {

	const std::string CFBamMinorVersionEditObj::CLASS_NAME( "CFBamMinorVersionEditObj" );

	CFBamMinorVersionEditObj::CFBamMinorVersionEditObj( cfint::ICFIntMinorVersionObj* argOrig )
	: ICFBamMinorVersionEditObj(),
	  ICFIntMinorVersionEditObj()
	{
		static const std::string S_ProcName( "CFBamMinorVersionEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfint::CFIntMinorVersionBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( origBuff->clone() );
	}

	CFBamMinorVersionEditObj::~CFBamMinorVersionEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamMinorVersionEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamMinorVersionEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMinorVersionBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamMinorVersionEditObj::getCreatedAt() {
		return( getMinorVersionBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamMinorVersionEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMinorVersionBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamMinorVersionEditObj::getUpdatedAt() {
		return( getMinorVersionBuff()->getUpdatedAt() );
	}

	void CFBamMinorVersionEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getMinorVersionEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamMinorVersionEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getMinorVersionEditBuff()->setCreatedAt( value );
	}

	void CFBamMinorVersionEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getMinorVersionEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamMinorVersionEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getMinorVersionEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamMinorVersionEditObj::getClassCode() const {
		return( cfint::CFIntMinorVersionBuff::CLASS_CODE );
	}

	bool CFBamMinorVersionEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamMinorVersionEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamMinorVersionEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_MajorVersionId( "MajorVersionId" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamMinorVersionEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamMinorVersionEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamMinorVersionEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamMinorVersionEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamMinorVersionEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamMinorVersionEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamMinorVersionEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_MajorVersionId, CFBamMinorVersionEditObj::getRequiredMajorVersionId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamMinorVersionEditObj::getRequiredName() ) );
		if( ! CFBamMinorVersionEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamMinorVersionEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamMinorVersionEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamMinorVersionEditObj::setRequiredRevision( int32_t value ) {
		getMinorVersionEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamMinorVersionEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamMinorVersionEditObj::getGenDefName() {
		return( cfint::CFIntMinorVersionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamMinorVersionEditObj::getScope() {
		cfint::ICFIntMajorVersionObj* scope = getRequiredContainerParentMajVer();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamMinorVersionEditObj::getObjScope() {
		cfint::ICFIntMajorVersionObj* scope = getRequiredContainerParentMajVer();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamMinorVersionEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamMinorVersionEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamMinorVersionEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByLookupUNameIdx( getRequiredTenantId(),
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

	std::string CFBamMinorVersionEditObj::getObjQualifiedName() {
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

	std::string CFBamMinorVersionEditObj::getObjFullName() {
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

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfint::ICFIntMinorVersionObj* retobj = getSchema()->getMinorVersionTableObj()->realizeMinorVersion( dynamic_cast<cfint::ICFIntMinorVersionObj*>( this ) );
		return( retobj );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionEditObj::read( bool forceRead ) {
		cfint::ICFIntMinorVersionObj* retval = getOrigAsMinorVersion()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionEditObj::create() {
		cfint::ICFIntMinorVersionObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsMinorVersion()->getSchema() )->getMinorVersionTableObj()->createMinorVersion( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfint::ICFIntMinorVersionEditObj* CFBamMinorVersionEditObj::update() {
		getSchema()->getMinorVersionTableObj()->updateMinorVersion( this );
		return( NULL );
	}

	cfint::ICFIntMinorVersionEditObj* CFBamMinorVersionEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getMinorVersionTableObj()->deleteMinorVersion( this );
		return( NULL );
	}

	cfint::ICFIntMinorVersionTableObj* CFBamMinorVersionEditObj::getMinorVersionTable() {
		return( orig->getSchema()->getMinorVersionTableObj() );
	}

	cfint::ICFIntMinorVersionEditObj* CFBamMinorVersionEditObj::getEdit() {
		return( this );
	}

	cfint::ICFIntMinorVersionEditObj* CFBamMinorVersionEditObj::getMinorVersionEdit() {
		return( (cfint::ICFIntMinorVersionEditObj*)this );
	}

	cfint::ICFIntMinorVersionEditObj* CFBamMinorVersionEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamMinorVersionEditObj::endEdit() {
		orig->endEdit();
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionEditObj::getOrig() {
		return( orig );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionEditObj::getOrigAsMinorVersion() {
		return( dynamic_cast<cfint::ICFIntMinorVersionObj*>( orig ) );
	}

	cfint::ICFIntSchemaObj* CFBamMinorVersionEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfint::CFIntMinorVersionBuff* CFBamMinorVersionEditObj::getBuff() {
		return( buff );
	}

	void CFBamMinorVersionEditObj::setBuff( cfint::CFIntMinorVersionBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfint::CFIntMinorVersionPKey* CFBamMinorVersionEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamMinorVersionEditObj::setPKey( cfint::CFIntMinorVersionPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamMinorVersionEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamMinorVersionEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamMinorVersionEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamMinorVersionEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamMinorVersionEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamMinorVersionEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamMinorVersionEditObj::getRequiredMajorVersionId() {
		return( getMinorVersionBuff()->getRequiredMajorVersionId() );
	}

	const int64_t* CFBamMinorVersionEditObj::getRequiredMajorVersionIdReference() {
		return( getMinorVersionBuff()->getRequiredMajorVersionIdReference() );
	}

	const std::string& CFBamMinorVersionEditObj::getRequiredName() {
		return( getMinorVersionBuff()->getRequiredName() );
	}

	const std::string* CFBamMinorVersionEditObj::getRequiredNameReference() {
		return( getMinorVersionBuff()->getRequiredNameReference() );
	}

	void CFBamMinorVersionEditObj::setRequiredName( const std::string& value ) {
		if( getMinorVersionBuff()->getRequiredName() != value ) {
			getMinorVersionEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamMinorVersionEditObj::isOptionalDescriptionNull() {
		return( getMinorVersionBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamMinorVersionEditObj::getOptionalDescriptionValue() {
		return( getMinorVersionBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamMinorVersionEditObj::getOptionalDescriptionReference() {
		return( getMinorVersionBuff()->getOptionalDescriptionReference() );
	}

	void CFBamMinorVersionEditObj::setOptionalDescriptionNull() {
		if( ! getMinorVersionBuff()->isOptionalDescriptionNull() ) {
			getMinorVersionEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamMinorVersionEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getMinorVersionBuff()->isOptionalDescriptionNull() ) {
			getMinorVersionEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getMinorVersionBuff()->getOptionalDescriptionValue() != value ) {
			getMinorVersionEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	cfsec::ICFSecTenantObj* CFBamMinorVersionEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsMinorVersion()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamMinorVersionEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getMinorVersionEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfint::ICFIntMajorVersionObj* CFBamMinorVersionEditObj::getRequiredContainerParentMajVer( bool forceRead ) {
		cfint::ICFIntMajorVersionObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsMinorVersion()->getSchema() )->getMajorVersionTableObj()->readMajorVersionByIdIdx( getPKey()->getRequiredTenantId(),
					getMinorVersionBuff()->getRequiredMajorVersionId() );
		}
		return( retobj );
	}

	void CFBamMinorVersionEditObj::setRequiredContainerParentMajVer( cfint::ICFIntMajorVersionObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getMinorVersionEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getMinorVersionEditBuff()->setRequiredMajorVersionId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamMinorVersionEditObj::getOptionalComponentsSchemaDef( bool forceRead ) {
		std::vector<cfbam::ICFBamSchemaDefObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsMinorVersion()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByMinorVersionIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamMinorVersionEditObj::copyPKeyToBuff() {
		cfint::CFIntMinorVersionPKey* tablePKey = getPKey();
		cfint::CFIntMinorVersionBuff* tableBuff = getMinorVersionEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamMinorVersionEditObj::copyBuffToPKey() {
		cfint::CFIntMinorVersionPKey* tablePKey = getPKey();
		cfint::CFIntMinorVersionBuff* tableBuff = getMinorVersionBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamMinorVersionEditObj::copyBuffToOrig() {
		cfint::CFIntMinorVersionBuff* origBuff = getOrigAsMinorVersion()->getMinorVersionEditBuff();
		cfint::CFIntMinorVersionBuff* myBuff = getMinorVersionBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamMinorVersionEditObj::copyOrigToBuff() {
		cfint::CFIntMinorVersionBuff* origBuff = getOrigAsMinorVersion()->getMinorVersionBuff();
		cfint::CFIntMinorVersionBuff* myBuff = getMinorVersionEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
