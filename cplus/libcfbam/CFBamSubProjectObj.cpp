// Description: C++18 base object instance implementation for CFBam SubProject.

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

namespace cfbam {

	const std::string CFBamSubProjectObj::CLASS_NAME( "CFBamSubProjectObj" );
	const classcode_t CFBamSubProjectObj::CLASS_CODE = 0xa105L;

	int32_t CFBamSubProjectObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamSubProjectObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamSubProjectObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamSubProjectObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamSubProjectObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const int64_t CFBamSubProjectObj::getRequiredTopProjectId() {
		return( getSubProjectBuff()->getRequiredTopProjectId() );
	}

	const int64_t* CFBamSubProjectObj::getRequiredTopProjectIdReference() {
		return( getSubProjectBuff()->getRequiredTopProjectIdReference() );
	}

	const std::string& CFBamSubProjectObj::getRequiredName() {
		return( getSubProjectBuff()->getRequiredName() );
	}

	const std::string* CFBamSubProjectObj::getRequiredNameReference() {
		return( getSubProjectBuff()->getRequiredNameReference() );
	}

	bool CFBamSubProjectObj::isOptionalDescriptionNull() {
		return( getSubProjectBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamSubProjectObj::getOptionalDescriptionValue() {
		return( getSubProjectBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamSubProjectObj::getOptionalDescriptionReference() {
		return( getSubProjectBuff()->getOptionalDescriptionReference() );
	}


	cfsec::ICFSecTenantObj* CFBamSubProjectObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfint::ICFIntTopProjectObj* CFBamSubProjectObj::getRequiredContainerParentTPrj( bool forceRead ) {
		cfint::ICFIntTopProjectObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTopProjectTableObj()->readTopProjectByIdIdx( getPKey()->getRequiredTenantId(),
					getSubProjectBuff()->getRequiredTopProjectId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfint::ICFIntMajorVersionObj*> CFBamSubProjectObj::getOptionalComponentsMajorVer( bool forceRead ) {
		std::vector<cfint::ICFIntMajorVersionObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMajorVersionTableObj()->readMajorVersionBySubProjectIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamSubProjectObj::CFBamSubProjectObj()
	: ICFBamSubProjectObj(),
	  ICFIntSubProjectObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamSubProjectObj::CFBamSubProjectObj( cfint::ICFIntSchemaObj* argSchema )
	: ICFBamSubProjectObj(),
	  ICFIntSubProjectObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamSubProjectObj::~CFBamSubProjectObj() {
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

	cfint::CFIntSubProjectBuff* CFBamSubProjectObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfint::CFIntSubProjectBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSubProject()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamSubProjectObj::setBuff( cfint::CFIntSubProjectBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamSubProjectObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamSubProjectObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamSubProjectObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntSubProjectBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamSubProjectObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSubProjectObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamSubProjectObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamSubProjectObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamSubProjectObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamSubProjectObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamSubProjectObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamSubProjectObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamSubProjectObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TopProjectId, CFBamSubProjectObj::getRequiredTopProjectId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamSubProjectObj::getRequiredName() ) );
		if( ! CFBamSubProjectObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamSubProjectObj::getOptionalDescriptionValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamSubProjectObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamSubProjectObj::getGenDefName() {
		return( cfint::CFIntSubProjectBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSubProjectObj::getScope() {
		cfint::ICFIntTopProjectObj* scope = getRequiredContainerParentTPrj();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSubProjectObj::getObjScope() {
		cfint::ICFIntTopProjectObj* scope = getRequiredContainerParentTPrj();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSubProjectObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSubProjectObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSubProjectObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamSubProjectObj::getObjQualifiedName() {
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

	std::string CFBamSubProjectObj::getObjFullName() {
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

	cfint::ICFIntSubProjectObj* CFBamSubProjectObj::realize() {
		cfint::ICFIntSubProjectObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSubProjectTableObj()->realizeSubProject(
			(cfint::ICFIntSubProjectObj*)this );
		return( dynamic_cast<cfint::ICFIntSubProjectObj*>( retobj ) );
	}

	cfint::ICFIntSubProjectObj* CFBamSubProjectObj::read( bool forceRead ) {
		cfint::ICFIntSubProjectObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSubProjectTableObj()->readSubProjectByIdIdx( getSubProjectBuff()->getRequiredTenantId(),
		getSubProjectBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfint::ICFIntSubProjectObj*>( retobj ) );
	}

	cfint::ICFIntSubProjectTableObj* CFBamSubProjectObj::getSubProjectTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSubProjectTableObj() );
	}

	cfint::ICFIntSchemaObj* CFBamSubProjectObj::getSchema() {
		return( schema );
	}

	void CFBamSubProjectObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = value;
	}

	cfint::CFIntSubProjectPKey* CFBamSubProjectObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfint::CFIntSubProjectPKey();
		}
		return( pKey );
	}

	void CFBamSubProjectObj::setPKey( cfint::CFIntSubProjectPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfint::CFIntSubProjectPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamSubProjectObj::getIsNew() {
		return( isNew );
	}

	void CFBamSubProjectObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfint::ICFIntSubProjectEditObj* CFBamSubProjectObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfint::ICFIntSubProjectObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSubProjectTableObj()->lockSubProject( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSubProjectTableObj()->newEditInstance( this );
		return( dynamic_cast<cfint::ICFIntSubProjectEditObj*>( edit ) );
	}

	void CFBamSubProjectObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfint::ICFIntSubProjectEditObj* CFBamSubProjectObj::getEdit() {
		return( edit );
	}

	cfint::ICFIntSubProjectEditObj* CFBamSubProjectObj::getSubProjectEdit() {
		return( dynamic_cast<cfint::ICFIntSubProjectEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamSubProjectObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSubProjectBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamSubProjectObj::getCreatedAt() {
		return( getSubProjectBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamSubProjectObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSubProjectBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamSubProjectObj::getUpdatedAt() {
		return( getSubProjectBuff()->getUpdatedAt() );
	}

	void CFBamSubProjectObj::copyPKeyToBuff() {
		cfint::CFIntSubProjectPKey* tablePKey = getPKey();
		cfint::CFIntSubProjectBuff* tableBuff = getSubProjectEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamSubProjectObj::copyBuffToPKey() {
		cfint::CFIntSubProjectPKey* tablePKey = getPKey();
		cfint::CFIntSubProjectBuff* tableBuff = getSubProjectBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
