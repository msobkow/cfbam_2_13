// Description: C++18 base object instance implementation for CFBam TopDomain.

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

namespace cfbam {

	const std::string CFBamTopDomainObj::CLASS_NAME( "CFBamTopDomainObj" );
	const classcode_t CFBamTopDomainObj::CLASS_CODE = 0xa107L;

	int32_t CFBamTopDomainObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamTopDomainObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamTopDomainObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamTopDomainObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamTopDomainObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamTopDomainObj::getRequiredTldId() {
		return( getTopDomainBuff()->getRequiredTldId() );
	}

	const int64_t* CFBamTopDomainObj::getRequiredTldIdReference() {
		return( getTopDomainBuff()->getRequiredTldIdReference() );
	}

	const std::string& CFBamTopDomainObj::getRequiredName() {
		return( getTopDomainBuff()->getRequiredName() );
	}

	const std::string* CFBamTopDomainObj::getRequiredNameReference() {
		return( getTopDomainBuff()->getRequiredNameReference() );
	}

	bool CFBamTopDomainObj::isOptionalDescriptionNull() {
		return( getTopDomainBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamTopDomainObj::getOptionalDescriptionValue() {
		return( getTopDomainBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamTopDomainObj::getOptionalDescriptionReference() {
		return( getTopDomainBuff()->getOptionalDescriptionReference() );
	}


	cfsec::ICFSecTenantObj* CFBamTopDomainObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfint::ICFIntTldObj* CFBamTopDomainObj::getRequiredContainerParentTld( bool forceRead ) {
		cfint::ICFIntTldObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTldTableObj()->readTldByIdIdx( getPKey()->getRequiredTenantId(),
					getTopDomainBuff()->getRequiredTldId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfint::ICFIntLicenseObj*> CFBamTopDomainObj::getOptionalComponentsLicense( bool forceRead ) {
		std::vector<cfint::ICFIntLicenseObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getLicenseTableObj()->readLicenseByDomainIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfint::ICFIntTopProjectObj*> CFBamTopDomainObj::getOptionalComponentsTopProject( bool forceRead ) {
		std::vector<cfint::ICFIntTopProjectObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopProjectTableObj()->readTopProjectByTopDomainIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamTopDomainObj::CFBamTopDomainObj()
	: ICFBamTopDomainObj(),
	  ICFIntTopDomainObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTopDomainObj::CFBamTopDomainObj( cfint::ICFIntSchemaObj* argSchema )
	: ICFBamTopDomainObj(),
	  ICFIntTopDomainObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTopDomainObj::~CFBamTopDomainObj() {
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

	cfint::CFIntTopDomainBuff* CFBamTopDomainObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfint::CFIntTopDomainBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopDomain()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamTopDomainObj::setBuff( cfint::CFIntTopDomainBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamTopDomainObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTopDomainObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamTopDomainObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTopDomainObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTopDomainObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTopDomainObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTopDomainObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTopDomainObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTopDomainObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTopDomainObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamTopDomainObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamTopDomainObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TldId, CFBamTopDomainObj::getRequiredTldId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamTopDomainObj::getRequiredName() ) );
		if( ! CFBamTopDomainObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamTopDomainObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamTopDomainObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamTopDomainObj::getGenDefName() {
		return( cfint::CFIntTopDomainBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTopDomainObj::getScope() {
		cfint::ICFIntTldObj* scope = getRequiredContainerParentTld();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTopDomainObj::getObjScope() {
		cfint::ICFIntTldObj* scope = getRequiredContainerParentTld();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTopDomainObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTopDomainObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTopDomainObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTopDomainObj::getObjQualifiedName() {
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

	std::string CFBamTopDomainObj::getObjFullName() {
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

	cfint::ICFIntTopDomainObj* CFBamTopDomainObj::realize() {
		cfint::ICFIntTopDomainObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopDomainTableObj()->realizeTopDomain(
			(cfint::ICFIntTopDomainObj*)this );
		return( dynamic_cast<cfint::ICFIntTopDomainObj*>( retobj ) );
	}

	cfint::ICFIntTopDomainObj* CFBamTopDomainObj::read( bool forceRead ) {
		cfint::ICFIntTopDomainObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopDomainTableObj()->readTopDomainByIdIdx( getTopDomainBuff()->getRequiredTenantId(),
		getTopDomainBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfint::ICFIntTopDomainObj*>( retobj ) );
	}

	cfint::ICFIntTopDomainTableObj* CFBamTopDomainObj::getTopDomainTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopDomainTableObj() );
	}

	cfint::ICFIntSchemaObj* CFBamTopDomainObj::getSchema() {
		return( schema );
	}

	void CFBamTopDomainObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = value;
	}

	cfint::CFIntTopDomainPKey* CFBamTopDomainObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfint::CFIntTopDomainPKey();
		}
		return( pKey );
	}

	void CFBamTopDomainObj::setPKey( cfint::CFIntTopDomainPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfint::CFIntTopDomainPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamTopDomainObj::getIsNew() {
		return( isNew );
	}

	void CFBamTopDomainObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfint::ICFIntTopDomainEditObj* CFBamTopDomainObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfint::ICFIntTopDomainObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopDomainTableObj()->lockTopDomain( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopDomainTableObj()->newEditInstance( this );
		return( dynamic_cast<cfint::ICFIntTopDomainEditObj*>( edit ) );
	}

	void CFBamTopDomainObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfint::ICFIntTopDomainEditObj* CFBamTopDomainObj::getEdit() {
		return( edit );
	}

	cfint::ICFIntTopDomainEditObj* CFBamTopDomainObj::getTopDomainEdit() {
		return( dynamic_cast<cfint::ICFIntTopDomainEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamTopDomainObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTopDomainBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTopDomainObj::getCreatedAt() {
		return( getTopDomainBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTopDomainObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTopDomainBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTopDomainObj::getUpdatedAt() {
		return( getTopDomainBuff()->getUpdatedAt() );
	}

	void CFBamTopDomainObj::copyPKeyToBuff() {
		cfint::CFIntTopDomainPKey* tablePKey = getPKey();
		cfint::CFIntTopDomainBuff* tableBuff = getTopDomainEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamTopDomainObj::copyBuffToPKey() {
		cfint::CFIntTopDomainPKey* tablePKey = getPKey();
		cfint::CFIntTopDomainBuff* tableBuff = getTopDomainBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
