// Description: C++18 base object instance implementation for CFBam SecApp.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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
#include <cfbamobj/CFBamSecAppObj.hpp>

namespace cfbam {

	const std::string CFBamSecAppObj::CLASS_NAME( "CFBamSecAppObj" );
	const classcode_t CFBamSecAppObj::CLASS_CODE = 0xa009L;

	int32_t CFBamSecAppObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamSecAppObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFBamSecAppObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int32_t CFBamSecAppObj::getRequiredSecAppId() {
		return( getPKey()->getRequiredSecAppId() );
	}

	const int32_t* CFBamSecAppObj::getRequiredSecAppIdReference() {
		return( getPKey()->getRequiredSecAppIdReference() );
	}

	const std::string& CFBamSecAppObj::getRequiredJEEMountName() {
		return( getSecAppBuff()->getRequiredJEEMountName() );
	}

	const std::string* CFBamSecAppObj::getRequiredJEEMountNameReference() {
		return( getSecAppBuff()->getRequiredJEEMountNameReference() );
	}


	cfsec::ICFSecClusterObj* CFBamSecAppObj::getRequiredContainerCluster( bool forceRead ) {
		cfsec::ICFSecClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfsec::ICFSecSecFormObj*> CFBamSecAppObj::getOptionalComponentsForm( bool forceRead ) {
		std::vector<cfsec::ICFSecSecFormObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecFormTableObj()->readSecFormBySecAppIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecAppId(),
			forceRead );
		return( retval );
	}

	CFBamSecAppObj::CFBamSecAppObj()
	: ICFBamSecAppObj(),
	  ICFSecSecAppObj(),
	  ICFIntSecAppObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamSecAppObj::CFBamSecAppObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamSecAppObj(),
	  ICFSecSecAppObj(),
	  ICFIntSecAppObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamSecAppObj::~CFBamSecAppObj() {
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

	cfsec::CFSecSecAppBuff* CFBamSecAppObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecSecAppBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecApp()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredClusterId(),
						getPKey()->getRequiredSecAppId() );
			}
		}
		return( buff );
	}

	void CFBamSecAppObj::setBuff( cfsec::CFSecSecAppBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamSecAppObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamSecAppObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamSecAppObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecSecAppBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamSecAppObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSecAppObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecAppId( "SecAppId" );
		static const std::string S_JEEMountName( "JEEMountName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamSecAppObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamSecAppObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamSecAppObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamSecAppObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamSecAppObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFBamSecAppObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecAppId, CFBamSecAppObj::getRequiredSecAppId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEEMountName, CFBamSecAppObj::getRequiredJEEMountName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamSecAppObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredJEEMountName() );
		return( objName );
	}

	const std::string CFBamSecAppObj::getGenDefName() {
		return( cfsec::CFSecSecAppBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSecAppObj::getScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecAppObj::getObjScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecAppObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSecAppObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSecAppObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecFormTableObj()->readSecFormByLookupUJEEServletIdx( getRequiredClusterId(),
			getRequiredSecAppId(),
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

	std::string CFBamSecAppObj::getObjQualifiedName() {
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

	std::string CFBamSecAppObj::getObjFullName() {
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

	cfsec::ICFSecSecAppObj* CFBamSecAppObj::realize() {
		cfsec::ICFSecSecAppObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecAppTableObj()->realizeSecApp(
			(cfsec::ICFSecSecAppObj*)this );
		return( dynamic_cast<cfsec::ICFSecSecAppObj*>( retobj ) );
	}

	cfsec::ICFSecSecAppObj* CFBamSecAppObj::read( bool forceRead ) {
		cfsec::ICFSecSecAppObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecAppTableObj()->readSecAppByIdIdx( getSecAppBuff()->getRequiredClusterId(),
		getSecAppBuff()->getRequiredSecAppId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecSecAppObj*>( retobj ) );
	}

	cfsec::ICFSecSecAppTableObj* CFBamSecAppObj::getSecAppTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecAppTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamSecAppObj::getSchema() {
		return( schema );
	}

	void CFBamSecAppObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecSecAppPKey* CFBamSecAppObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecSecAppPKey();
		}
		return( pKey );
	}

	void CFBamSecAppObj::setPKey( cfsec::CFSecSecAppPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecSecAppPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamSecAppObj::getIsNew() {
		return( isNew );
	}

	void CFBamSecAppObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecSecAppEditObj* CFBamSecAppObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecSecAppObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecAppTableObj()->lockSecApp( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecAppTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecSecAppEditObj*>( edit ) );
	}

	void CFBamSecAppObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecSecAppEditObj* CFBamSecAppObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecSecAppEditObj* CFBamSecAppObj::getSecAppEdit() {
		return( dynamic_cast<cfsec::ICFSecSecAppEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamSecAppObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecAppBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecAppObj::getCreatedAt() {
		return( getSecAppBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamSecAppObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecAppBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecAppObj::getUpdatedAt() {
		return( getSecAppBuff()->getUpdatedAt() );
	}

	void CFBamSecAppObj::copyPKeyToBuff() {
		cfsec::CFSecSecAppPKey* tablePKey = getPKey();
		cfsec::CFSecSecAppBuff* tableBuff = getSecAppEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
			tableBuff->setRequiredSecAppId( tablePKey->getRequiredSecAppId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamSecAppObj::copyBuffToPKey() {
		cfsec::CFSecSecAppPKey* tablePKey = getPKey();
		cfsec::CFSecSecAppBuff* tableBuff = getSecAppBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecAppId( tableBuff->getRequiredSecAppId() );
	}

}
