// Description: C++18 base object instance implementation for CFBam Tld.

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
#include <cfbamobj/CFBamTldObj.hpp>

namespace cfbam {

	const std::string CFBamTldObj::CLASS_NAME( "CFBamTldObj" );
	const classcode_t CFBamTldObj::CLASS_CODE = 0xa106L;

	int32_t CFBamTldObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamTldObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamTldObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamTldObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamTldObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFBamTldObj::getRequiredName() {
		return( getTldBuff()->getRequiredName() );
	}

	const std::string* CFBamTldObj::getRequiredNameReference() {
		return( getTldBuff()->getRequiredNameReference() );
	}

	bool CFBamTldObj::isOptionalDescriptionNull() {
		return( getTldBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamTldObj::getOptionalDescriptionValue() {
		return( getTldBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamTldObj::getOptionalDescriptionReference() {
		return( getTldBuff()->getOptionalDescriptionReference() );
	}


	cfsec::ICFSecTenantObj* CFBamTldObj::getRequiredContainerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfint::ICFIntTopDomainObj*> CFBamTldObj::getOptionalComponentsTopDomain( bool forceRead ) {
		std::vector<cfint::ICFIntTopDomainObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopDomainTableObj()->readTopDomainByTldIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamTldObj::CFBamTldObj()
	: ICFBamTldObj(),
	  ICFIntTldObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTldObj::CFBamTldObj( cfint::ICFIntSchemaObj* argSchema )
	: ICFBamTldObj(),
	  ICFIntTldObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTldObj::~CFBamTldObj() {
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

	cfint::CFIntTldBuff* CFBamTldObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfint::CFIntTldBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTld()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamTldObj::setBuff( cfint::CFIntTldBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamTldObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTldObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamTldObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntTldBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTldObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTldObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTldObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTldObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTldObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTldObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTldObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamTldObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamTldObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamTldObj::getRequiredName() ) );
		if( ! CFBamTldObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamTldObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamTldObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamTldObj::getGenDefName() {
		return( cfint::CFIntTldBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTldObj::getScope() {
		cfsec::ICFSecTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTldObj::getObjScope() {
		cfsec::ICFSecTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTldObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTldObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTldObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTldObj::getObjQualifiedName() {
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

	std::string CFBamTldObj::getObjFullName() {
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

	cfint::ICFIntTldObj* CFBamTldObj::realize() {
		cfint::ICFIntTldObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTldTableObj()->realizeTld(
			(cfint::ICFIntTldObj*)this );
		return( dynamic_cast<cfint::ICFIntTldObj*>( retobj ) );
	}

	cfint::ICFIntTldObj* CFBamTldObj::read( bool forceRead ) {
		cfint::ICFIntTldObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTldTableObj()->readTldByIdIdx( getTldBuff()->getRequiredTenantId(),
		getTldBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfint::ICFIntTldObj*>( retobj ) );
	}

	cfint::ICFIntTldTableObj* CFBamTldObj::getTldTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTldTableObj() );
	}

	cfint::ICFIntSchemaObj* CFBamTldObj::getSchema() {
		return( schema );
	}

	void CFBamTldObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = value;
	}

	cfint::CFIntTldPKey* CFBamTldObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfint::CFIntTldPKey();
		}
		return( pKey );
	}

	void CFBamTldObj::setPKey( cfint::CFIntTldPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfint::CFIntTldPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamTldObj::getIsNew() {
		return( isNew );
	}

	void CFBamTldObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfint::ICFIntTldEditObj* CFBamTldObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfint::ICFIntTldObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTldTableObj()->lockTld( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTldTableObj()->newEditInstance( this );
		return( dynamic_cast<cfint::ICFIntTldEditObj*>( edit ) );
	}

	void CFBamTldObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfint::ICFIntTldEditObj* CFBamTldObj::getEdit() {
		return( edit );
	}

	cfint::ICFIntTldEditObj* CFBamTldObj::getTldEdit() {
		return( dynamic_cast<cfint::ICFIntTldEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamTldObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTldBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTldObj::getCreatedAt() {
		return( getTldBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTldObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTldBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTldObj::getUpdatedAt() {
		return( getTldBuff()->getUpdatedAt() );
	}

	void CFBamTldObj::copyPKeyToBuff() {
		cfint::CFIntTldPKey* tablePKey = getPKey();
		cfint::CFIntTldBuff* tableBuff = getTldEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamTldObj::copyBuffToPKey() {
		cfint::CFIntTldPKey* tablePKey = getPKey();
		cfint::CFIntTldBuff* tableBuff = getTldBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
