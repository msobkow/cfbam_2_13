// Description: C++18 edit object instance implementation for CFBam TopProject.

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
#include <cfbamobj/CFBamTopProjectObj.hpp>
#include <cfbamobj/CFBamTopProjectEditObj.hpp>


namespace cfbam {

	const std::string CFBamTopProjectEditObj::CLASS_NAME( "CFBamTopProjectEditObj" );

	CFBamTopProjectEditObj::CFBamTopProjectEditObj( cfint::ICFIntTopProjectObj* argOrig )
	: ICFBamTopProjectEditObj(),
	  ICFIntTopProjectEditObj()
	{
		static const std::string S_ProcName( "CFBamTopProjectEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfint::CFIntTopProjectBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfint::CFIntTopProjectBuff*>( origBuff->clone() );
	}

	CFBamTopProjectEditObj::~CFBamTopProjectEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamTopProjectEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamTopProjectEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTopProjectBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTopProjectEditObj::getCreatedAt() {
		return( getTopProjectBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTopProjectEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTopProjectBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTopProjectEditObj::getUpdatedAt() {
		return( getTopProjectBuff()->getUpdatedAt() );
	}

	void CFBamTopProjectEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getTopProjectEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTopProjectEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getTopProjectEditBuff()->setCreatedAt( value );
	}

	void CFBamTopProjectEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getTopProjectEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTopProjectEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getTopProjectEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamTopProjectEditObj::getClassCode() const {
		return( cfint::CFIntTopProjectBuff::CLASS_CODE );
	}

	bool CFBamTopProjectEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntTopProjectBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTopProjectEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTopProjectEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TopDomainId( "TopDomainId" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTopProjectEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTopProjectEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTopProjectEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTopProjectEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTopProjectEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamTopProjectEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamTopProjectEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TopDomainId, CFBamTopProjectEditObj::getRequiredTopDomainId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamTopProjectEditObj::getRequiredName() ) );
		if( ! CFBamTopProjectEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamTopProjectEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamTopProjectEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamTopProjectEditObj::setRequiredRevision( int32_t value ) {
		getTopProjectEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamTopProjectEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamTopProjectEditObj::getGenDefName() {
		return( cfint::CFIntTopProjectBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTopProjectEditObj::getScope() {
		cfint::ICFIntTopDomainObj* scope = getRequiredContainerParentSDom();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTopProjectEditObj::getObjScope() {
		cfint::ICFIntTopDomainObj* scope = getRequiredContainerParentSDom();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTopProjectEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTopProjectEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTopProjectEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSubProjectTableObj()->readSubProjectByLookupNameIdx( getRequiredTenantId(),
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

	std::string CFBamTopProjectEditObj::getObjQualifiedName() {
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

	std::string CFBamTopProjectEditObj::getObjFullName() {
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

	cfint::ICFIntTopProjectObj* CFBamTopProjectEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfint::ICFIntTopProjectObj* retobj = getSchema()->getTopProjectTableObj()->realizeTopProject( dynamic_cast<cfint::ICFIntTopProjectObj*>( this ) );
		return( retobj );
	}

	cfint::ICFIntTopProjectObj* CFBamTopProjectEditObj::read( bool forceRead ) {
		cfint::ICFIntTopProjectObj* retval = getOrigAsTopProject()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfint::ICFIntTopProjectObj* CFBamTopProjectEditObj::create() {
		cfint::ICFIntTopProjectObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTopProject()->getSchema() )->getTopProjectTableObj()->createTopProject( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfint::ICFIntTopProjectEditObj* CFBamTopProjectEditObj::update() {
		getSchema()->getTopProjectTableObj()->updateTopProject( this );
		return( NULL );
	}

	cfint::ICFIntTopProjectEditObj* CFBamTopProjectEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTopProjectTableObj()->deleteTopProject( this );
		return( NULL );
	}

	cfint::ICFIntTopProjectTableObj* CFBamTopProjectEditObj::getTopProjectTable() {
		return( orig->getSchema()->getTopProjectTableObj() );
	}

	cfint::ICFIntTopProjectEditObj* CFBamTopProjectEditObj::getEdit() {
		return( this );
	}

	cfint::ICFIntTopProjectEditObj* CFBamTopProjectEditObj::getTopProjectEdit() {
		return( (cfint::ICFIntTopProjectEditObj*)this );
	}

	cfint::ICFIntTopProjectEditObj* CFBamTopProjectEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamTopProjectEditObj::endEdit() {
		orig->endEdit();
	}

	cfint::ICFIntTopProjectObj* CFBamTopProjectEditObj::getOrig() {
		return( orig );
	}

	cfint::ICFIntTopProjectObj* CFBamTopProjectEditObj::getOrigAsTopProject() {
		return( dynamic_cast<cfint::ICFIntTopProjectObj*>( orig ) );
	}

	cfint::ICFIntSchemaObj* CFBamTopProjectEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfint::CFIntTopProjectBuff* CFBamTopProjectEditObj::getBuff() {
		return( buff );
	}

	void CFBamTopProjectEditObj::setBuff( cfint::CFIntTopProjectBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfint::CFIntTopProjectPKey* CFBamTopProjectEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamTopProjectEditObj::setPKey( cfint::CFIntTopProjectPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamTopProjectEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamTopProjectEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamTopProjectEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamTopProjectEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamTopProjectEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamTopProjectEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamTopProjectEditObj::getRequiredTopDomainId() {
		return( getTopProjectBuff()->getRequiredTopDomainId() );
	}

	const int64_t* CFBamTopProjectEditObj::getRequiredTopDomainIdReference() {
		return( getTopProjectBuff()->getRequiredTopDomainIdReference() );
	}

	const std::string& CFBamTopProjectEditObj::getRequiredName() {
		return( getTopProjectBuff()->getRequiredName() );
	}

	const std::string* CFBamTopProjectEditObj::getRequiredNameReference() {
		return( getTopProjectBuff()->getRequiredNameReference() );
	}

	void CFBamTopProjectEditObj::setRequiredName( const std::string& value ) {
		if( getTopProjectBuff()->getRequiredName() != value ) {
			getTopProjectEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamTopProjectEditObj::isOptionalDescriptionNull() {
		return( getTopProjectBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamTopProjectEditObj::getOptionalDescriptionValue() {
		return( getTopProjectBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamTopProjectEditObj::getOptionalDescriptionReference() {
		return( getTopProjectBuff()->getOptionalDescriptionReference() );
	}

	void CFBamTopProjectEditObj::setOptionalDescriptionNull() {
		if( ! getTopProjectBuff()->isOptionalDescriptionNull() ) {
			getTopProjectEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamTopProjectEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getTopProjectBuff()->isOptionalDescriptionNull() ) {
			getTopProjectEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getTopProjectBuff()->getOptionalDescriptionValue() != value ) {
			getTopProjectEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	cfsec::ICFSecTenantObj* CFBamTopProjectEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTopProject()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamTopProjectEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getTopProjectEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfint::ICFIntTopDomainObj* CFBamTopProjectEditObj::getRequiredContainerParentSDom( bool forceRead ) {
		cfint::ICFIntTopDomainObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTopProject()->getSchema() )->getTopDomainTableObj()->readTopDomainByIdIdx( getPKey()->getRequiredTenantId(),
					getTopProjectBuff()->getRequiredTopDomainId() );
		}
		return( retobj );
	}

	void CFBamTopProjectEditObj::setRequiredContainerParentSDom( cfint::ICFIntTopDomainObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getTopProjectEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getTopProjectEditBuff()->setRequiredTopDomainId( value->getRequiredId() );
			}
		}

	std::vector<cfint::ICFIntSubProjectObj*> CFBamTopProjectEditObj::getOptionalComponentsSubProject( bool forceRead ) {
		std::vector<cfint::ICFIntSubProjectObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTopProject()->getSchema() )->getSubProjectTableObj()->readSubProjectByTopProjectIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamTopProjectEditObj::copyPKeyToBuff() {
		cfint::CFIntTopProjectPKey* tablePKey = getPKey();
		cfint::CFIntTopProjectBuff* tableBuff = getTopProjectEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamTopProjectEditObj::copyBuffToPKey() {
		cfint::CFIntTopProjectPKey* tablePKey = getPKey();
		cfint::CFIntTopProjectBuff* tableBuff = getTopProjectBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamTopProjectEditObj::copyBuffToOrig() {
		cfint::CFIntTopProjectBuff* origBuff = getOrigAsTopProject()->getTopProjectEditBuff();
		cfint::CFIntTopProjectBuff* myBuff = getTopProjectBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamTopProjectEditObj::copyOrigToBuff() {
		cfint::CFIntTopProjectBuff* origBuff = getOrigAsTopProject()->getTopProjectBuff();
		cfint::CFIntTopProjectBuff* myBuff = getTopProjectEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
