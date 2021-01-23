// Description: C++18 base object instance implementation for CFBam MinorVersion.

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
#include <cfbamobj/CFBamMinorVersionObj.hpp>

namespace cfbam {

	const std::string CFBamMinorVersionObj::CLASS_NAME( "CFBamMinorVersionObj" );
	const classcode_t CFBamMinorVersionObj::CLASS_CODE = 0xa104L;

	int32_t CFBamMinorVersionObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamMinorVersionObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamMinorVersionObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamMinorVersionObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamMinorVersionObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamMinorVersionObj::getRequiredMajorVersionId() {
		return( getMinorVersionBuff()->getRequiredMajorVersionId() );
	}

	const int64_t* CFBamMinorVersionObj::getRequiredMajorVersionIdReference() {
		return( getMinorVersionBuff()->getRequiredMajorVersionIdReference() );
	}

	const std::string& CFBamMinorVersionObj::getRequiredName() {
		return( getMinorVersionBuff()->getRequiredName() );
	}

	const std::string* CFBamMinorVersionObj::getRequiredNameReference() {
		return( getMinorVersionBuff()->getRequiredNameReference() );
	}

	bool CFBamMinorVersionObj::isOptionalDescriptionNull() {
		return( getMinorVersionBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamMinorVersionObj::getOptionalDescriptionValue() {
		return( getMinorVersionBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamMinorVersionObj::getOptionalDescriptionReference() {
		return( getMinorVersionBuff()->getOptionalDescriptionReference() );
	}


	cfsec::ICFSecTenantObj* CFBamMinorVersionObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfint::ICFIntMajorVersionObj* CFBamMinorVersionObj::getRequiredContainerParentMajVer( bool forceRead ) {
		cfint::ICFIntMajorVersionObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMajorVersionTableObj()->readMajorVersionByIdIdx( getPKey()->getRequiredTenantId(),
					getMinorVersionBuff()->getRequiredMajorVersionId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamMinorVersionObj::getOptionalComponentsSchemaDef( bool forceRead ) {
		std::vector<cfbam::ICFBamSchemaDefObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByMinorVersionIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamMinorVersionObj::CFBamMinorVersionObj()
	: ICFBamMinorVersionObj(),
	  ICFIntMinorVersionObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamMinorVersionObj::CFBamMinorVersionObj( cfint::ICFIntSchemaObj* argSchema )
	: ICFBamMinorVersionObj(),
	  ICFIntMinorVersionObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamMinorVersionObj::~CFBamMinorVersionObj() {
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

	cfint::CFIntMinorVersionBuff* CFBamMinorVersionObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfint::CFIntMinorVersionBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMinorVersion()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamMinorVersionObj::setBuff( cfint::CFIntMinorVersionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamMinorVersionObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamMinorVersionObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamMinorVersionObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamMinorVersionObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamMinorVersionObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamMinorVersionObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamMinorVersionObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamMinorVersionObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamMinorVersionObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamMinorVersionObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamMinorVersionObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamMinorVersionObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_MajorVersionId, CFBamMinorVersionObj::getRequiredMajorVersionId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamMinorVersionObj::getRequiredName() ) );
		if( ! CFBamMinorVersionObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamMinorVersionObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamMinorVersionObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamMinorVersionObj::getGenDefName() {
		return( cfint::CFIntMinorVersionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamMinorVersionObj::getScope() {
		cfint::ICFIntMajorVersionObj* scope = getRequiredContainerParentMajVer();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamMinorVersionObj::getObjScope() {
		cfint::ICFIntMajorVersionObj* scope = getRequiredContainerParentMajVer();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamMinorVersionObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamMinorVersionObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamMinorVersionObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamMinorVersionObj::getObjQualifiedName() {
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

	std::string CFBamMinorVersionObj::getObjFullName() {
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

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionObj::realize() {
		cfint::ICFIntMinorVersionObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMinorVersionTableObj()->realizeMinorVersion(
			(cfint::ICFIntMinorVersionObj*)this );
		return( dynamic_cast<cfint::ICFIntMinorVersionObj*>( retobj ) );
	}

	cfint::ICFIntMinorVersionObj* CFBamMinorVersionObj::read( bool forceRead ) {
		cfint::ICFIntMinorVersionObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMinorVersionTableObj()->readMinorVersionByIdIdx( getMinorVersionBuff()->getRequiredTenantId(),
		getMinorVersionBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfint::ICFIntMinorVersionObj*>( retobj ) );
	}

	cfint::ICFIntMinorVersionTableObj* CFBamMinorVersionObj::getMinorVersionTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMinorVersionTableObj() );
	}

	cfint::ICFIntSchemaObj* CFBamMinorVersionObj::getSchema() {
		return( schema );
	}

	void CFBamMinorVersionObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = value;
	}

	cfint::CFIntMinorVersionPKey* CFBamMinorVersionObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfint::CFIntMinorVersionPKey();
		}
		return( pKey );
	}

	void CFBamMinorVersionObj::setPKey( cfint::CFIntMinorVersionPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfint::CFIntMinorVersionPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamMinorVersionObj::getIsNew() {
		return( isNew );
	}

	void CFBamMinorVersionObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfint::ICFIntMinorVersionEditObj* CFBamMinorVersionObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfint::ICFIntMinorVersionObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMinorVersionTableObj()->lockMinorVersion( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMinorVersionTableObj()->newEditInstance( this );
		return( dynamic_cast<cfint::ICFIntMinorVersionEditObj*>( edit ) );
	}

	void CFBamMinorVersionObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfint::ICFIntMinorVersionEditObj* CFBamMinorVersionObj::getEdit() {
		return( edit );
	}

	cfint::ICFIntMinorVersionEditObj* CFBamMinorVersionObj::getMinorVersionEdit() {
		return( dynamic_cast<cfint::ICFIntMinorVersionEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamMinorVersionObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMinorVersionBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamMinorVersionObj::getCreatedAt() {
		return( getMinorVersionBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamMinorVersionObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMinorVersionBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamMinorVersionObj::getUpdatedAt() {
		return( getMinorVersionBuff()->getUpdatedAt() );
	}

	void CFBamMinorVersionObj::copyPKeyToBuff() {
		cfint::CFIntMinorVersionPKey* tablePKey = getPKey();
		cfint::CFIntMinorVersionBuff* tableBuff = getMinorVersionEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamMinorVersionObj::copyBuffToPKey() {
		cfint::CFIntMinorVersionPKey* tablePKey = getPKey();
		cfint::CFIntMinorVersionBuff* tableBuff = getMinorVersionBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
