// Description: C++18 edit object instance implementation for CFBam Tld.

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
#include <cfbamobj/CFBamTldObj.hpp>
#include <cfbamobj/CFBamTldEditObj.hpp>


namespace cfbam {

	const std::string CFBamTldEditObj::CLASS_NAME( "CFBamTldEditObj" );

	CFBamTldEditObj::CFBamTldEditObj( cfint::ICFIntTldObj* argOrig )
	: ICFBamTldEditObj(),
	  ICFIntTldEditObj()
	{
		static const std::string S_ProcName( "CFBamTldEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfint::CFIntTldBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfint::CFIntTldBuff*>( origBuff->clone() );
	}

	CFBamTldEditObj::~CFBamTldEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamTldEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamTldEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTldBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTldEditObj::getCreatedAt() {
		return( getTldBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTldEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTldBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTldEditObj::getUpdatedAt() {
		return( getTldBuff()->getUpdatedAt() );
	}

	void CFBamTldEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getTldEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTldEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getTldEditBuff()->setCreatedAt( value );
	}

	void CFBamTldEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getTldEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTldEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getTldEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamTldEditObj::getClassCode() const {
		return( cfint::CFIntTldBuff::CLASS_CODE );
	}

	bool CFBamTldEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntTldBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTldEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTldEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTldEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTldEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTldEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTldEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTldEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamTldEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamTldEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamTldEditObj::getRequiredName() ) );
		if( ! CFBamTldEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamTldEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamTldEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamTldEditObj::setRequiredRevision( int32_t value ) {
		getTldEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamTldEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamTldEditObj::getGenDefName() {
		return( cfint::CFIntTldBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTldEditObj::getScope() {
		cfsec::ICFSecTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTldEditObj::getObjScope() {
		cfsec::ICFSecTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTldEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTldEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTldEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopDomainTableObj()->readTopDomainByLookupNameIdx( getRequiredTenantId(),
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

	std::string CFBamTldEditObj::getObjQualifiedName() {
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

	std::string CFBamTldEditObj::getObjFullName() {
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

	cfint::ICFIntTldObj* CFBamTldEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfint::ICFIntTldObj* retobj = getSchema()->getTldTableObj()->realizeTld( dynamic_cast<cfint::ICFIntTldObj*>( this ) );
		return( retobj );
	}

	cfint::ICFIntTldObj* CFBamTldEditObj::read( bool forceRead ) {
		cfint::ICFIntTldObj* retval = getOrigAsTld()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfint::ICFIntTldObj* CFBamTldEditObj::create() {
		cfint::ICFIntTldObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTld()->getSchema() )->getTldTableObj()->createTld( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfint::ICFIntTldEditObj* CFBamTldEditObj::update() {
		getSchema()->getTldTableObj()->updateTld( this );
		return( NULL );
	}

	cfint::ICFIntTldEditObj* CFBamTldEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTldTableObj()->deleteTld( this );
		return( NULL );
	}

	cfint::ICFIntTldTableObj* CFBamTldEditObj::getTldTable() {
		return( orig->getSchema()->getTldTableObj() );
	}

	cfint::ICFIntTldEditObj* CFBamTldEditObj::getEdit() {
		return( this );
	}

	cfint::ICFIntTldEditObj* CFBamTldEditObj::getTldEdit() {
		return( (cfint::ICFIntTldEditObj*)this );
	}

	cfint::ICFIntTldEditObj* CFBamTldEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamTldEditObj::endEdit() {
		orig->endEdit();
	}

	cfint::ICFIntTldObj* CFBamTldEditObj::getOrig() {
		return( orig );
	}

	cfint::ICFIntTldObj* CFBamTldEditObj::getOrigAsTld() {
		return( dynamic_cast<cfint::ICFIntTldObj*>( orig ) );
	}

	cfint::ICFIntSchemaObj* CFBamTldEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfint::CFIntTldBuff* CFBamTldEditObj::getBuff() {
		return( buff );
	}

	void CFBamTldEditObj::setBuff( cfint::CFIntTldBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfint::CFIntTldPKey* CFBamTldEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamTldEditObj::setPKey( cfint::CFIntTldPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamTldEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamTldEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamTldEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamTldEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamTldEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamTldEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFBamTldEditObj::getRequiredName() {
		return( getTldBuff()->getRequiredName() );
	}

	const std::string* CFBamTldEditObj::getRequiredNameReference() {
		return( getTldBuff()->getRequiredNameReference() );
	}

	void CFBamTldEditObj::setRequiredName( const std::string& value ) {
		if( getTldBuff()->getRequiredName() != value ) {
			getTldEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamTldEditObj::isOptionalDescriptionNull() {
		return( getTldBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamTldEditObj::getOptionalDescriptionValue() {
		return( getTldBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamTldEditObj::getOptionalDescriptionReference() {
		return( getTldBuff()->getOptionalDescriptionReference() );
	}

	void CFBamTldEditObj::setOptionalDescriptionNull() {
		if( ! getTldBuff()->isOptionalDescriptionNull() ) {
			getTldEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamTldEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getTldBuff()->isOptionalDescriptionNull() ) {
			getTldEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getTldBuff()->getOptionalDescriptionValue() != value ) {
			getTldEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	cfsec::ICFSecTenantObj* CFBamTldEditObj::getRequiredContainerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTld()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamTldEditObj::setRequiredContainerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getTldEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	std::vector<cfint::ICFIntTopDomainObj*> CFBamTldEditObj::getOptionalComponentsTopDomain( bool forceRead ) {
		std::vector<cfint::ICFIntTopDomainObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTld()->getSchema() )->getTopDomainTableObj()->readTopDomainByTldIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamTldEditObj::copyPKeyToBuff() {
		cfint::CFIntTldPKey* tablePKey = getPKey();
		cfint::CFIntTldBuff* tableBuff = getTldEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamTldEditObj::copyBuffToPKey() {
		cfint::CFIntTldPKey* tablePKey = getPKey();
		cfint::CFIntTldBuff* tableBuff = getTldBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamTldEditObj::copyBuffToOrig() {
		cfint::CFIntTldBuff* origBuff = getOrigAsTld()->getTldEditBuff();
		cfint::CFIntTldBuff* myBuff = getTldBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamTldEditObj::copyOrigToBuff() {
		cfint::CFIntTldBuff* origBuff = getOrigAsTld()->getTldBuff();
		cfint::CFIntTldBuff* myBuff = getTldEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
