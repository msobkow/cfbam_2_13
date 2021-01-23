// Description: C++18 edit object instance implementation for CFBam SubProject.

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
#include <cfbamobj/CFBamSubProjectObj.hpp>
#include <cfbamobj/CFBamSubProjectEditObj.hpp>


namespace cfbam {

	const std::string CFBamSubProjectEditObj::CLASS_NAME( "CFBamSubProjectEditObj" );

	CFBamSubProjectEditObj::CFBamSubProjectEditObj( cfint::ICFIntSubProjectObj* argOrig )
	: ICFBamSubProjectEditObj(),
	  ICFIntSubProjectEditObj()
	{
		static const std::string S_ProcName( "CFBamSubProjectEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfint::CFIntSubProjectBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( origBuff->clone() );
	}

	CFBamSubProjectEditObj::~CFBamSubProjectEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamSubProjectEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamSubProjectEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSubProjectBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamSubProjectEditObj::getCreatedAt() {
		return( getSubProjectBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamSubProjectEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSubProjectBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamSubProjectEditObj::getUpdatedAt() {
		return( getSubProjectBuff()->getUpdatedAt() );
	}

	void CFBamSubProjectEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSubProjectEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSubProjectEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSubProjectEditBuff()->setCreatedAt( value );
	}

	void CFBamSubProjectEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSubProjectEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSubProjectEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSubProjectEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamSubProjectEditObj::getClassCode() const {
		return( cfint::CFIntSubProjectBuff::CLASS_CODE );
	}

	bool CFBamSubProjectEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntSubProjectBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamSubProjectEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSubProjectEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TopProjectId( "TopProjectId" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamSubProjectEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamSubProjectEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamSubProjectEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamSubProjectEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamSubProjectEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamSubProjectEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamSubProjectEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TopProjectId, CFBamSubProjectEditObj::getRequiredTopProjectId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamSubProjectEditObj::getRequiredName() ) );
		if( ! CFBamSubProjectEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamSubProjectEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamSubProjectEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamSubProjectEditObj::setRequiredRevision( int32_t value ) {
		getSubProjectEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamSubProjectEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamSubProjectEditObj::getGenDefName() {
		return( cfint::CFIntSubProjectBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSubProjectEditObj::getScope() {
		cfint::ICFIntTopProjectObj* scope = getRequiredContainerParentTPrj();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSubProjectEditObj::getObjScope() {
		cfint::ICFIntTopProjectObj* scope = getRequiredContainerParentTPrj();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSubProjectEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSubProjectEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSubProjectEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMajorVersionTableObj()->readMajorVersionByLookupNameIdx( getRequiredTenantId(),
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

	std::string CFBamSubProjectEditObj::getObjQualifiedName() {
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

	std::string CFBamSubProjectEditObj::getObjFullName() {
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

	cfint::ICFIntSubProjectObj* CFBamSubProjectEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfint::ICFIntSubProjectObj* retobj = getSchema()->getSubProjectTableObj()->realizeSubProject( dynamic_cast<cfint::ICFIntSubProjectObj*>( this ) );
		return( retobj );
	}

	cfint::ICFIntSubProjectObj* CFBamSubProjectEditObj::read( bool forceRead ) {
		cfint::ICFIntSubProjectObj* retval = getOrigAsSubProject()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfint::ICFIntSubProjectObj* CFBamSubProjectEditObj::create() {
		cfint::ICFIntSubProjectObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSubProject()->getSchema() )->getSubProjectTableObj()->createSubProject( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfint::ICFIntSubProjectEditObj* CFBamSubProjectEditObj::update() {
		getSchema()->getSubProjectTableObj()->updateSubProject( this );
		return( NULL );
	}

	cfint::ICFIntSubProjectEditObj* CFBamSubProjectEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSubProjectTableObj()->deleteSubProject( this );
		return( NULL );
	}

	cfint::ICFIntSubProjectTableObj* CFBamSubProjectEditObj::getSubProjectTable() {
		return( orig->getSchema()->getSubProjectTableObj() );
	}

	cfint::ICFIntSubProjectEditObj* CFBamSubProjectEditObj::getEdit() {
		return( this );
	}

	cfint::ICFIntSubProjectEditObj* CFBamSubProjectEditObj::getSubProjectEdit() {
		return( (cfint::ICFIntSubProjectEditObj*)this );
	}

	cfint::ICFIntSubProjectEditObj* CFBamSubProjectEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamSubProjectEditObj::endEdit() {
		orig->endEdit();
	}

	cfint::ICFIntSubProjectObj* CFBamSubProjectEditObj::getOrig() {
		return( orig );
	}

	cfint::ICFIntSubProjectObj* CFBamSubProjectEditObj::getOrigAsSubProject() {
		return( dynamic_cast<cfint::ICFIntSubProjectObj*>( orig ) );
	}

	cfint::ICFIntSchemaObj* CFBamSubProjectEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfint::CFIntSubProjectBuff* CFBamSubProjectEditObj::getBuff() {
		return( buff );
	}

	void CFBamSubProjectEditObj::setBuff( cfint::CFIntSubProjectBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfint::CFIntSubProjectPKey* CFBamSubProjectEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamSubProjectEditObj::setPKey( cfint::CFIntSubProjectPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamSubProjectEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamSubProjectEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamSubProjectEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamSubProjectEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamSubProjectEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamSubProjectEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamSubProjectEditObj::getRequiredTopProjectId() {
		return( getSubProjectBuff()->getRequiredTopProjectId() );
	}

	const int64_t* CFBamSubProjectEditObj::getRequiredTopProjectIdReference() {
		return( getSubProjectBuff()->getRequiredTopProjectIdReference() );
	}

	const std::string& CFBamSubProjectEditObj::getRequiredName() {
		return( getSubProjectBuff()->getRequiredName() );
	}

	const std::string* CFBamSubProjectEditObj::getRequiredNameReference() {
		return( getSubProjectBuff()->getRequiredNameReference() );
	}

	void CFBamSubProjectEditObj::setRequiredName( const std::string& value ) {
		if( getSubProjectBuff()->getRequiredName() != value ) {
			getSubProjectEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamSubProjectEditObj::isOptionalDescriptionNull() {
		return( getSubProjectBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamSubProjectEditObj::getOptionalDescriptionValue() {
		return( getSubProjectBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamSubProjectEditObj::getOptionalDescriptionReference() {
		return( getSubProjectBuff()->getOptionalDescriptionReference() );
	}

	void CFBamSubProjectEditObj::setOptionalDescriptionNull() {
		if( ! getSubProjectBuff()->isOptionalDescriptionNull() ) {
			getSubProjectEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamSubProjectEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getSubProjectBuff()->isOptionalDescriptionNull() ) {
			getSubProjectEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getSubProjectBuff()->getOptionalDescriptionValue() != value ) {
			getSubProjectEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	cfsec::ICFSecTenantObj* CFBamSubProjectEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSubProject()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamSubProjectEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getSubProjectEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfint::ICFIntTopProjectObj* CFBamSubProjectEditObj::getRequiredContainerParentTPrj( bool forceRead ) {
		cfint::ICFIntTopProjectObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSubProject()->getSchema() )->getTopProjectTableObj()->readTopProjectByIdIdx( getPKey()->getRequiredTenantId(),
					getSubProjectBuff()->getRequiredTopProjectId() );
		}
		return( retobj );
	}

	void CFBamSubProjectEditObj::setRequiredContainerParentTPrj( cfint::ICFIntTopProjectObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getSubProjectEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getSubProjectEditBuff()->setRequiredTopProjectId( value->getRequiredId() );
			}
		}

	std::vector<cfint::ICFIntMajorVersionObj*> CFBamSubProjectEditObj::getOptionalComponentsMajorVer( bool forceRead ) {
		std::vector<cfint::ICFIntMajorVersionObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSubProject()->getSchema() )->getMajorVersionTableObj()->readMajorVersionBySubProjectIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamSubProjectEditObj::copyPKeyToBuff() {
		cfint::CFIntSubProjectPKey* tablePKey = getPKey();
		cfint::CFIntSubProjectBuff* tableBuff = getSubProjectEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamSubProjectEditObj::copyBuffToPKey() {
		cfint::CFIntSubProjectPKey* tablePKey = getPKey();
		cfint::CFIntSubProjectBuff* tableBuff = getSubProjectBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamSubProjectEditObj::copyBuffToOrig() {
		cfint::CFIntSubProjectBuff* origBuff = getOrigAsSubProject()->getSubProjectEditBuff();
		cfint::CFIntSubProjectBuff* myBuff = getSubProjectBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamSubProjectEditObj::copyOrigToBuff() {
		cfint::CFIntSubProjectBuff* origBuff = getOrigAsSubProject()->getSubProjectBuff();
		cfint::CFIntSubProjectBuff* myBuff = getSubProjectEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
