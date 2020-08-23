// Description: C++18 edit object instance implementation for CFBam License.

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
#include <cfbamobj/CFBamLicenseObj.hpp>
#include <cfbamobj/CFBamLicenseEditObj.hpp>


namespace cfbam {

	const std::string CFBamLicenseEditObj::CLASS_NAME( "CFBamLicenseEditObj" );

	CFBamLicenseEditObj::CFBamLicenseEditObj( cfint::ICFIntLicenseObj* argOrig )
	: ICFBamLicenseEditObj(),
	  ICFIntLicenseEditObj()
	{
		static const std::string S_ProcName( "CFBamLicenseEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfint::CFIntLicenseBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfint::CFIntLicenseBuff*>( origBuff->clone() );
	}

	CFBamLicenseEditObj::~CFBamLicenseEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamLicenseEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamLicenseEditObj::getClassCode() const {
		return( cfint::CFIntLicenseBuff::CLASS_CODE );
	}

	bool CFBamLicenseEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntLicenseBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamLicenseEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamLicenseEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TopDomainId( "TopDomainId" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		static const std::string S_EmbeddedText( "EmbeddedText" );
		static const std::string S_FullText( "FullText" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamLicenseEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamLicenseEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamLicenseEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TopDomainId, CFBamLicenseEditObj::getRequiredTopDomainId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamLicenseEditObj::getRequiredName() ) );
		if( ! CFBamLicenseEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamLicenseEditObj::getOptionalDescriptionValue() ) );
		}
		if( ! CFBamLicenseEditObj::isOptionalEmbeddedTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EmbeddedText, CFBamLicenseEditObj::getOptionalEmbeddedTextValue() ) );
		}
		if( ! CFBamLicenseEditObj::isOptionalFullTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FullText, CFBamLicenseEditObj::getOptionalFullTextValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamLicenseEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamLicenseEditObj::setRequiredRevision( int32_t value ) {
		getLicenseEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamLicenseEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamLicenseEditObj::getGenDefName() {
		return( cfint::CFIntLicenseBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamLicenseEditObj::getScope() {
		cfint::ICFIntTopDomainObj* scope = getRequiredContainerTopDomain();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamLicenseEditObj::getObjScope() {
		cfint::ICFIntTopDomainObj* scope = getRequiredContainerTopDomain();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamLicenseEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamLicenseEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamLicenseEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamLicenseEditObj::getObjQualifiedName() {
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

	std::string CFBamLicenseEditObj::getObjFullName() {
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

	cfint::ICFIntLicenseObj* CFBamLicenseEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfint::ICFIntLicenseObj* retobj = getSchema()->getLicenseTableObj()->realizeLicense( dynamic_cast<cfint::ICFIntLicenseObj*>( this ) );
		return( retobj );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseEditObj::read( bool forceRead ) {
		cfint::ICFIntLicenseObj* retval = getOrigAsLicense()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseEditObj::create() {
		cfint::ICFIntLicenseObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsLicense()->getSchema() )->getLicenseTableObj()->createLicense( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfint::ICFIntLicenseEditObj* CFBamLicenseEditObj::update() {
		getSchema()->getLicenseTableObj()->updateLicense( this );
		return( NULL );
	}

	cfint::ICFIntLicenseEditObj* CFBamLicenseEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getLicenseTableObj()->deleteLicense( this );
		return( NULL );
	}

	cfint::ICFIntLicenseTableObj* CFBamLicenseEditObj::getLicenseTable() {
		return( orig->getSchema()->getLicenseTableObj() );
	}

	cfint::ICFIntLicenseEditObj* CFBamLicenseEditObj::getEdit() {
		return( this );
	}

	cfint::ICFIntLicenseEditObj* CFBamLicenseEditObj::getLicenseEdit() {
		return( (cfint::ICFIntLicenseEditObj*)this );
	}

	cfint::ICFIntLicenseEditObj* CFBamLicenseEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamLicenseEditObj::endEdit() {
		orig->endEdit();
	}

	cfint::ICFIntLicenseObj* CFBamLicenseEditObj::getOrig() {
		return( orig );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseEditObj::getOrigAsLicense() {
		return( dynamic_cast<cfint::ICFIntLicenseObj*>( orig ) );
	}

	cfint::ICFIntSchemaObj* CFBamLicenseEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfint::CFIntLicenseBuff* CFBamLicenseEditObj::getBuff() {
		return( buff );
	}

	void CFBamLicenseEditObj::setBuff( cfint::CFIntLicenseBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfint::CFIntLicensePKey* CFBamLicenseEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamLicenseEditObj::setPKey( cfint::CFIntLicensePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamLicenseEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamLicenseEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamLicenseEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamLicenseEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamLicenseEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamLicenseEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamLicenseEditObj::getRequiredTopDomainId() {
		return( getLicenseBuff()->getRequiredTopDomainId() );
	}

	const int64_t* CFBamLicenseEditObj::getRequiredTopDomainIdReference() {
		return( getLicenseBuff()->getRequiredTopDomainIdReference() );
	}

	const std::string& CFBamLicenseEditObj::getRequiredName() {
		return( getLicenseBuff()->getRequiredName() );
	}

	const std::string* CFBamLicenseEditObj::getRequiredNameReference() {
		return( getLicenseBuff()->getRequiredNameReference() );
	}

	void CFBamLicenseEditObj::setRequiredName( const std::string& value ) {
		if( getLicenseBuff()->getRequiredName() != value ) {
			getLicenseEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamLicenseEditObj::isOptionalDescriptionNull() {
		return( getLicenseBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamLicenseEditObj::getOptionalDescriptionValue() {
		return( getLicenseBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamLicenseEditObj::getOptionalDescriptionReference() {
		return( getLicenseBuff()->getOptionalDescriptionReference() );
	}

	void CFBamLicenseEditObj::setOptionalDescriptionNull() {
		if( ! getLicenseBuff()->isOptionalDescriptionNull() ) {
			getLicenseEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamLicenseEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getLicenseBuff()->isOptionalDescriptionNull() ) {
			getLicenseEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getLicenseBuff()->getOptionalDescriptionValue() != value ) {
			getLicenseEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	bool CFBamLicenseEditObj::isOptionalEmbeddedTextNull() {
		return( getLicenseBuff()->isOptionalEmbeddedTextNull() );
	}

	const std::string& CFBamLicenseEditObj::getOptionalEmbeddedTextValue() {
		return( getLicenseBuff()->getOptionalEmbeddedTextValue() );
	}

	const std::string* CFBamLicenseEditObj::getOptionalEmbeddedTextReference() {
		return( getLicenseBuff()->getOptionalEmbeddedTextReference() );
	}

	void CFBamLicenseEditObj::setOptionalEmbeddedTextNull() {
		if( ! getLicenseBuff()->isOptionalEmbeddedTextNull() ) {
			getLicenseEditBuff()->setOptionalEmbeddedTextNull();
		}
	}

	void CFBamLicenseEditObj::setOptionalEmbeddedTextValue( const std::string& value ) {
		if( getLicenseBuff()->isOptionalEmbeddedTextNull() ) {
			getLicenseEditBuff()->setOptionalEmbeddedTextValue( value );
		}
		else if( getLicenseBuff()->getOptionalEmbeddedTextValue() != value ) {
			getLicenseEditBuff()->setOptionalEmbeddedTextValue( value );
		}
	}

	bool CFBamLicenseEditObj::isOptionalFullTextNull() {
		return( getLicenseBuff()->isOptionalFullTextNull() );
	}

	const std::string& CFBamLicenseEditObj::getOptionalFullTextValue() {
		return( getLicenseBuff()->getOptionalFullTextValue() );
	}

	const std::string* CFBamLicenseEditObj::getOptionalFullTextReference() {
		return( getLicenseBuff()->getOptionalFullTextReference() );
	}

	void CFBamLicenseEditObj::setOptionalFullTextNull() {
		if( ! getLicenseBuff()->isOptionalFullTextNull() ) {
			getLicenseEditBuff()->setOptionalFullTextNull();
		}
	}

	void CFBamLicenseEditObj::setOptionalFullTextValue( const std::string& value ) {
		if( getLicenseBuff()->isOptionalFullTextNull() ) {
			getLicenseEditBuff()->setOptionalFullTextValue( value );
		}
		else if( getLicenseBuff()->getOptionalFullTextValue() != value ) {
			getLicenseEditBuff()->setOptionalFullTextValue( value );
		}
	}

	cfsec::ICFSecTenantObj* CFBamLicenseEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsLicense()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamLicenseEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getLicenseEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfint::ICFIntTopDomainObj* CFBamLicenseEditObj::getRequiredContainerTopDomain( bool forceRead ) {
		cfint::ICFIntTopDomainObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsLicense()->getSchema() )->getTopDomainTableObj()->readTopDomainByIdIdx( getPKey()->getRequiredTenantId(),
					getLicenseBuff()->getRequiredTopDomainId() );
		}
		return( retobj );
	}

	void CFBamLicenseEditObj::setRequiredContainerTopDomain( cfint::ICFIntTopDomainObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getLicenseEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getLicenseEditBuff()->setRequiredTopDomainId( value->getRequiredId() );
			}
		}

	void CFBamLicenseEditObj::copyPKeyToBuff() {
		cfint::CFIntLicensePKey* tablePKey = getPKey();
		cfint::CFIntLicenseBuff* tableBuff = getLicenseEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamLicenseEditObj::copyBuffToPKey() {
		cfint::CFIntLicensePKey* tablePKey = getPKey();
		cfint::CFIntLicenseBuff* tableBuff = getLicenseBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamLicenseEditObj::copyBuffToOrig() {
		cfint::CFIntLicenseBuff* origBuff = getOrigAsLicense()->getLicenseEditBuff();
		cfint::CFIntLicenseBuff* myBuff = getLicenseBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamLicenseEditObj::copyOrigToBuff() {
		cfint::CFIntLicenseBuff* origBuff = getOrigAsLicense()->getLicenseBuff();
		cfint::CFIntLicenseBuff* myBuff = getLicenseEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
