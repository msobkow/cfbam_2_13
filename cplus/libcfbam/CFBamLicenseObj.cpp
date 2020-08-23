// Description: C++18 base object instance implementation for CFBam License.

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

namespace cfbam {

	const std::string CFBamLicenseObj::CLASS_NAME( "CFBamLicenseObj" );
	const classcode_t CFBamLicenseObj::CLASS_CODE = 0xa101L;

	int32_t CFBamLicenseObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamLicenseObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamLicenseObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamLicenseObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamLicenseObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamLicenseObj::getRequiredTopDomainId() {
		return( getLicenseBuff()->getRequiredTopDomainId() );
	}

	const int64_t* CFBamLicenseObj::getRequiredTopDomainIdReference() {
		return( getLicenseBuff()->getRequiredTopDomainIdReference() );
	}

	const std::string& CFBamLicenseObj::getRequiredName() {
		return( getLicenseBuff()->getRequiredName() );
	}

	const std::string* CFBamLicenseObj::getRequiredNameReference() {
		return( getLicenseBuff()->getRequiredNameReference() );
	}

	bool CFBamLicenseObj::isOptionalDescriptionNull() {
		return( getLicenseBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamLicenseObj::getOptionalDescriptionValue() {
		return( getLicenseBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamLicenseObj::getOptionalDescriptionReference() {
		return( getLicenseBuff()->getOptionalDescriptionReference() );
	}

	bool CFBamLicenseObj::isOptionalEmbeddedTextNull() {
		return( getLicenseBuff()->isOptionalEmbeddedTextNull() );
	}

	const std::string& CFBamLicenseObj::getOptionalEmbeddedTextValue() {
		return( getLicenseBuff()->getOptionalEmbeddedTextValue() );
	}

	const std::string* CFBamLicenseObj::getOptionalEmbeddedTextReference() {
		return( getLicenseBuff()->getOptionalEmbeddedTextReference() );
	}

	bool CFBamLicenseObj::isOptionalFullTextNull() {
		return( getLicenseBuff()->isOptionalFullTextNull() );
	}

	const std::string& CFBamLicenseObj::getOptionalFullTextValue() {
		return( getLicenseBuff()->getOptionalFullTextValue() );
	}

	const std::string* CFBamLicenseObj::getOptionalFullTextReference() {
		return( getLicenseBuff()->getOptionalFullTextReference() );
	}


	cfsec::ICFSecTenantObj* CFBamLicenseObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfint::ICFIntTopDomainObj* CFBamLicenseObj::getRequiredContainerTopDomain( bool forceRead ) {
		cfint::ICFIntTopDomainObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopDomainTableObj()->readTopDomainByIdIdx( getPKey()->getRequiredTenantId(),
					getLicenseBuff()->getRequiredTopDomainId(), forceRead );
		}
		return( retobj );
	}

	CFBamLicenseObj::CFBamLicenseObj()
	: ICFBamLicenseObj(),
	  ICFIntLicenseObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamLicenseObj::CFBamLicenseObj( cfint::ICFIntSchemaObj* argSchema )
	: ICFBamLicenseObj(),
	  ICFIntLicenseObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamLicenseObj::~CFBamLicenseObj() {
		schema = NULL;
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}
		if( pKey != NULL ) {
			delete pKey;
			pKey = NULL;
		}

	}

	cfint::CFIntLicenseBuff* CFBamLicenseObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfint::CFIntLicenseBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableLicense()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamLicenseObj::setBuff( cfint::CFIntLicenseBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamLicenseObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamLicenseObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamLicenseObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntLicenseBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamLicenseObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamLicenseObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamLicenseObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamLicenseObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamLicenseObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TopDomainId, CFBamLicenseObj::getRequiredTopDomainId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamLicenseObj::getRequiredName() ) );
		if( ! CFBamLicenseObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamLicenseObj::getOptionalDescriptionValue() ) );
		}
		if( ! CFBamLicenseObj::isOptionalEmbeddedTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EmbeddedText, CFBamLicenseObj::getOptionalEmbeddedTextValue() ) );
		}
		if( ! CFBamLicenseObj::isOptionalFullTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FullText, CFBamLicenseObj::getOptionalFullTextValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamLicenseObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamLicenseObj::getGenDefName() {
		return( cfint::CFIntLicenseBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamLicenseObj::getScope() {
		cfint::ICFIntTopDomainObj* scope = getRequiredContainerTopDomain();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamLicenseObj::getObjScope() {
		cfint::ICFIntTopDomainObj* scope = getRequiredContainerTopDomain();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamLicenseObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamLicenseObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamLicenseObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamLicenseObj::getObjQualifiedName() {
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

	std::string CFBamLicenseObj::getObjFullName() {
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

	cfint::ICFIntLicenseObj* CFBamLicenseObj::realize() {
		cfint::ICFIntLicenseObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getLicenseTableObj()->realizeLicense(
			(cfint::ICFIntLicenseObj*)this );
		return( dynamic_cast<cfint::ICFIntLicenseObj*>( retobj ) );
	}

	cfint::ICFIntLicenseObj* CFBamLicenseObj::read( bool forceRead ) {
		cfint::ICFIntLicenseObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getLicenseTableObj()->readLicenseByIdIdx( getLicenseBuff()->getRequiredTenantId(),
		getLicenseBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfint::ICFIntLicenseObj*>( retobj ) );
	}

	cfint::ICFIntLicenseTableObj* CFBamLicenseObj::getLicenseTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getLicenseTableObj() );
	}

	cfint::ICFIntSchemaObj* CFBamLicenseObj::getSchema() {
		return( schema );
	}

	void CFBamLicenseObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = value;
	}

	cfint::CFIntLicensePKey* CFBamLicenseObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfint::CFIntLicensePKey();
		}
		return( pKey );
	}

	void CFBamLicenseObj::setPKey( cfint::CFIntLicensePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfint::CFIntLicensePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamLicenseObj::getIsNew() {
		return( isNew );
	}

	void CFBamLicenseObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfint::ICFIntLicenseEditObj* CFBamLicenseObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfint::ICFIntLicenseObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getLicenseTableObj()->lockLicense( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getLicenseTableObj()->newEditInstance( this );
		return( dynamic_cast<cfint::ICFIntLicenseEditObj*>( edit ) );
	}

	void CFBamLicenseObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfint::ICFIntLicenseEditObj* CFBamLicenseObj::getEdit() {
		return( edit );
	}

	cfint::ICFIntLicenseEditObj* CFBamLicenseObj::getLicenseEdit() {
		return( dynamic_cast<cfint::ICFIntLicenseEditObj*>( edit ) );
	}

	void CFBamLicenseObj::copyPKeyToBuff() {
		cfint::CFIntLicensePKey* tablePKey = getPKey();
		cfint::CFIntLicenseBuff* tableBuff = getLicenseEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamLicenseObj::copyBuffToPKey() {
		cfint::CFIntLicensePKey* tablePKey = getPKey();
		cfint::CFIntLicenseBuff* tableBuff = getLicenseBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
