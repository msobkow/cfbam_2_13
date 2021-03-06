// Description: C++18 base object instance implementation for CFBam TopProject.

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

namespace cfbam {

	const std::string CFBamTopProjectObj::CLASS_NAME( "CFBamTopProjectObj" );
	const classcode_t CFBamTopProjectObj::CLASS_CODE = 0xa108L;

	int32_t CFBamTopProjectObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamTopProjectObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamTopProjectObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamTopProjectObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamTopProjectObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamTopProjectObj::getRequiredTopDomainId() {
		return( getTopProjectBuff()->getRequiredTopDomainId() );
	}

	const int64_t* CFBamTopProjectObj::getRequiredTopDomainIdReference() {
		return( getTopProjectBuff()->getRequiredTopDomainIdReference() );
	}

	const std::string& CFBamTopProjectObj::getRequiredName() {
		return( getTopProjectBuff()->getRequiredName() );
	}

	const std::string* CFBamTopProjectObj::getRequiredNameReference() {
		return( getTopProjectBuff()->getRequiredNameReference() );
	}

	bool CFBamTopProjectObj::isOptionalDescriptionNull() {
		return( getTopProjectBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamTopProjectObj::getOptionalDescriptionValue() {
		return( getTopProjectBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamTopProjectObj::getOptionalDescriptionReference() {
		return( getTopProjectBuff()->getOptionalDescriptionReference() );
	}


	cfsec::ICFSecTenantObj* CFBamTopProjectObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfint::ICFIntTopDomainObj* CFBamTopProjectObj::getRequiredContainerParentSDom( bool forceRead ) {
		cfint::ICFIntTopDomainObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopDomainTableObj()->readTopDomainByIdIdx( getPKey()->getRequiredTenantId(),
					getTopProjectBuff()->getRequiredTopDomainId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfint::ICFIntSubProjectObj*> CFBamTopProjectObj::getOptionalComponentsSubProject( bool forceRead ) {
		std::vector<cfint::ICFIntSubProjectObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSubProjectTableObj()->readSubProjectByTopProjectIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamTopProjectObj::CFBamTopProjectObj()
	: ICFBamTopProjectObj(),
	  ICFIntTopProjectObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTopProjectObj::CFBamTopProjectObj( cfint::ICFIntSchemaObj* argSchema )
	: ICFBamTopProjectObj(),
	  ICFIntTopProjectObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTopProjectObj::~CFBamTopProjectObj() {
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

	cfint::CFIntTopProjectBuff* CFBamTopProjectObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfint::CFIntTopProjectBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTopProject()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamTopProjectObj::setBuff( cfint::CFIntTopProjectBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamTopProjectObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTopProjectObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamTopProjectObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntTopProjectBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTopProjectObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTopProjectObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTopProjectObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTopProjectObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTopProjectObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTopProjectObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTopProjectObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamTopProjectObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamTopProjectObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TopDomainId, CFBamTopProjectObj::getRequiredTopDomainId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamTopProjectObj::getRequiredName() ) );
		if( ! CFBamTopProjectObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamTopProjectObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamTopProjectObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamTopProjectObj::getGenDefName() {
		return( cfint::CFIntTopProjectBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTopProjectObj::getScope() {
		cfint::ICFIntTopDomainObj* scope = getRequiredContainerParentSDom();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTopProjectObj::getObjScope() {
		cfint::ICFIntTopDomainObj* scope = getRequiredContainerParentSDom();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTopProjectObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTopProjectObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTopProjectObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTopProjectObj::getObjQualifiedName() {
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

	std::string CFBamTopProjectObj::getObjFullName() {
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

	cfint::ICFIntTopProjectObj* CFBamTopProjectObj::realize() {
		cfint::ICFIntTopProjectObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopProjectTableObj()->realizeTopProject(
			(cfint::ICFIntTopProjectObj*)this );
		return( dynamic_cast<cfint::ICFIntTopProjectObj*>( retobj ) );
	}

	cfint::ICFIntTopProjectObj* CFBamTopProjectObj::read( bool forceRead ) {
		cfint::ICFIntTopProjectObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopProjectTableObj()->readTopProjectByIdIdx( getTopProjectBuff()->getRequiredTenantId(),
		getTopProjectBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfint::ICFIntTopProjectObj*>( retobj ) );
	}

	cfint::ICFIntTopProjectTableObj* CFBamTopProjectObj::getTopProjectTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopProjectTableObj() );
	}

	cfint::ICFIntSchemaObj* CFBamTopProjectObj::getSchema() {
		return( schema );
	}

	void CFBamTopProjectObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = value;
	}

	cfint::CFIntTopProjectPKey* CFBamTopProjectObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfint::CFIntTopProjectPKey();
		}
		return( pKey );
	}

	void CFBamTopProjectObj::setPKey( cfint::CFIntTopProjectPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfint::CFIntTopProjectPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamTopProjectObj::getIsNew() {
		return( isNew );
	}

	void CFBamTopProjectObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfint::ICFIntTopProjectEditObj* CFBamTopProjectObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfint::ICFIntTopProjectObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopProjectTableObj()->lockTopProject( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopProjectTableObj()->newEditInstance( this );
		return( dynamic_cast<cfint::ICFIntTopProjectEditObj*>( edit ) );
	}

	void CFBamTopProjectObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfint::ICFIntTopProjectEditObj* CFBamTopProjectObj::getEdit() {
		return( edit );
	}

	cfint::ICFIntTopProjectEditObj* CFBamTopProjectObj::getTopProjectEdit() {
		return( dynamic_cast<cfint::ICFIntTopProjectEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamTopProjectObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTopProjectBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTopProjectObj::getCreatedAt() {
		return( getTopProjectBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTopProjectObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTopProjectBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTopProjectObj::getUpdatedAt() {
		return( getTopProjectBuff()->getUpdatedAt() );
	}

	void CFBamTopProjectObj::copyPKeyToBuff() {
		cfint::CFIntTopProjectPKey* tablePKey = getPKey();
		cfint::CFIntTopProjectBuff* tableBuff = getTopProjectEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamTopProjectObj::copyBuffToPKey() {
		cfint::CFIntTopProjectPKey* tablePKey = getPKey();
		cfint::CFIntTopProjectBuff* tableBuff = getTopProjectBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
