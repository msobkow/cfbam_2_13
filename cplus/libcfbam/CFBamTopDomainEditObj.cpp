// Description: C++18 edit object instance implementation for CFBam TopDomain.

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
#include <cfbamobj/CFBamTopDomainObj.hpp>
#include <cfbamobj/CFBamTopDomainEditObj.hpp>


namespace cfbam {

	const std::string CFBamTopDomainEditObj::CLASS_NAME( "CFBamTopDomainEditObj" );

	CFBamTopDomainEditObj::CFBamTopDomainEditObj( cfint::ICFIntTopDomainObj* argOrig )
	: ICFBamTopDomainEditObj(),
	  ICFIntTopDomainEditObj()
	{
		static const std::string S_ProcName( "CFBamTopDomainEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfint::CFIntTopDomainBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( origBuff->clone() );
	}

	CFBamTopDomainEditObj::~CFBamTopDomainEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamTopDomainEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamTopDomainEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTopDomainBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTopDomainEditObj::getCreatedAt() {
		return( getTopDomainBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTopDomainEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTopDomainBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTopDomainEditObj::getUpdatedAt() {
		return( getTopDomainBuff()->getUpdatedAt() );
	}

	void CFBamTopDomainEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getTopDomainEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTopDomainEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getTopDomainEditBuff()->setCreatedAt( value );
	}

	void CFBamTopDomainEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getTopDomainEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTopDomainEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getTopDomainEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamTopDomainEditObj::getClassCode() const {
		return( cfint::CFIntTopDomainBuff::CLASS_CODE );
	}

	bool CFBamTopDomainEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTopDomainEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTopDomainEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TldId( "TldId" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTopDomainEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTopDomainEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTopDomainEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTopDomainEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTopDomainEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamTopDomainEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamTopDomainEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TldId, CFBamTopDomainEditObj::getRequiredTldId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamTopDomainEditObj::getRequiredName() ) );
		if( ! CFBamTopDomainEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamTopDomainEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamTopDomainEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamTopDomainEditObj::setRequiredRevision( int32_t value ) {
		getTopDomainEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamTopDomainEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamTopDomainEditObj::getGenDefName() {
		return( cfint::CFIntTopDomainBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTopDomainEditObj::getScope() {
		cfint::ICFIntTldObj* scope = getRequiredContainerParentTld();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTopDomainEditObj::getObjScope() {
		cfint::ICFIntTldObj* scope = getRequiredContainerParentTld();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTopDomainEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTopDomainEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTopDomainEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getLicenseTableObj()->readLicenseByLookupUNameIdx( getRequiredTenantId(),
			getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopProjectTableObj()->readTopProjectByLookupNameIdx( getRequiredTenantId(),
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

	std::string CFBamTopDomainEditObj::getObjQualifiedName() {
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

	std::string CFBamTopDomainEditObj::getObjFullName() {
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

	cfint::ICFIntTopDomainObj* CFBamTopDomainEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfint::ICFIntTopDomainObj* retobj = getSchema()->getTopDomainTableObj()->realizeTopDomain( dynamic_cast<cfint::ICFIntTopDomainObj*>( this ) );
		return( retobj );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainEditObj::read( bool forceRead ) {
		cfint::ICFIntTopDomainObj* retval = getOrigAsTopDomain()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainEditObj::create() {
		cfint::ICFIntTopDomainObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTopDomain()->getSchema() )->getTopDomainTableObj()->createTopDomain( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfint::ICFIntTopDomainEditObj* CFBamTopDomainEditObj::update() {
		getSchema()->getTopDomainTableObj()->updateTopDomain( this );
		return( NULL );
	}

	cfint::ICFIntTopDomainEditObj* CFBamTopDomainEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTopDomainTableObj()->deleteTopDomain( this );
		return( NULL );
	}

	cfint::ICFIntTopDomainTableObj* CFBamTopDomainEditObj::getTopDomainTable() {
		return( orig->getSchema()->getTopDomainTableObj() );
	}

	cfint::ICFIntTopDomainEditObj* CFBamTopDomainEditObj::getEdit() {
		return( this );
	}

	cfint::ICFIntTopDomainEditObj* CFBamTopDomainEditObj::getTopDomainEdit() {
		return( (cfint::ICFIntTopDomainEditObj*)this );
	}

	cfint::ICFIntTopDomainEditObj* CFBamTopDomainEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamTopDomainEditObj::endEdit() {
		orig->endEdit();
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainEditObj::getOrig() {
		return( orig );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainEditObj::getOrigAsTopDomain() {
		return( dynamic_cast<cfint::ICFIntTopDomainObj*>( orig ) );
	}

	cfint::ICFIntSchemaObj* CFBamTopDomainEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfint::CFIntTopDomainBuff* CFBamTopDomainEditObj::getBuff() {
		return( buff );
	}

	void CFBamTopDomainEditObj::setBuff( cfint::CFIntTopDomainBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfint::CFIntTopDomainPKey* CFBamTopDomainEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamTopDomainEditObj::setPKey( cfint::CFIntTopDomainPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamTopDomainEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamTopDomainEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamTopDomainEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamTopDomainEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamTopDomainEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamTopDomainEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamTopDomainEditObj::getRequiredTldId() {
		return( getTopDomainBuff()->getRequiredTldId() );
	}

	const int64_t* CFBamTopDomainEditObj::getRequiredTldIdReference() {
		return( getTopDomainBuff()->getRequiredTldIdReference() );
	}

	const std::string& CFBamTopDomainEditObj::getRequiredName() {
		return( getTopDomainBuff()->getRequiredName() );
	}

	const std::string* CFBamTopDomainEditObj::getRequiredNameReference() {
		return( getTopDomainBuff()->getRequiredNameReference() );
	}

	void CFBamTopDomainEditObj::setRequiredName( const std::string& value ) {
		if( getTopDomainBuff()->getRequiredName() != value ) {
			getTopDomainEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamTopDomainEditObj::isOptionalDescriptionNull() {
		return( getTopDomainBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamTopDomainEditObj::getOptionalDescriptionValue() {
		return( getTopDomainBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamTopDomainEditObj::getOptionalDescriptionReference() {
		return( getTopDomainBuff()->getOptionalDescriptionReference() );
	}

	void CFBamTopDomainEditObj::setOptionalDescriptionNull() {
		if( ! getTopDomainBuff()->isOptionalDescriptionNull() ) {
			getTopDomainEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamTopDomainEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getTopDomainBuff()->isOptionalDescriptionNull() ) {
			getTopDomainEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getTopDomainBuff()->getOptionalDescriptionValue() != value ) {
			getTopDomainEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	cfsec::ICFSecTenantObj* CFBamTopDomainEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTopDomain()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamTopDomainEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getTopDomainEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfint::ICFIntTldObj* CFBamTopDomainEditObj::getRequiredContainerParentTld( bool forceRead ) {
		cfint::ICFIntTldObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTopDomain()->getSchema() )->getTldTableObj()->readTldByIdIdx( getPKey()->getRequiredTenantId(),
					getTopDomainBuff()->getRequiredTldId() );
		}
		return( retobj );
	}

	void CFBamTopDomainEditObj::setRequiredContainerParentTld( cfint::ICFIntTldObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getTopDomainEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getTopDomainEditBuff()->setRequiredTldId( value->getRequiredId() );
			}
		}

	std::vector<cfint::ICFIntLicenseObj*> CFBamTopDomainEditObj::getOptionalComponentsLicense( bool forceRead ) {
		std::vector<cfint::ICFIntLicenseObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTopDomain()->getSchema() )->getLicenseTableObj()->readLicenseByDomainIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfint::ICFIntTopProjectObj*> CFBamTopDomainEditObj::getOptionalComponentsTopProject( bool forceRead ) {
		std::vector<cfint::ICFIntTopProjectObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTopDomain()->getSchema() )->getTopProjectTableObj()->readTopProjectByTopDomainIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamTopDomainEditObj::copyPKeyToBuff() {
		cfint::CFIntTopDomainPKey* tablePKey = getPKey();
		cfint::CFIntTopDomainBuff* tableBuff = getTopDomainEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamTopDomainEditObj::copyBuffToPKey() {
		cfint::CFIntTopDomainPKey* tablePKey = getPKey();
		cfint::CFIntTopDomainBuff* tableBuff = getTopDomainBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamTopDomainEditObj::copyBuffToOrig() {
		cfint::CFIntTopDomainBuff* origBuff = getOrigAsTopDomain()->getTopDomainEditBuff();
		cfint::CFIntTopDomainBuff* myBuff = getTopDomainBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamTopDomainEditObj::copyOrigToBuff() {
		cfint::CFIntTopDomainBuff* origBuff = getOrigAsTopDomain()->getTopDomainBuff();
		cfint::CFIntTopDomainBuff* myBuff = getTopDomainEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
