// Description: C++18 base object instance implementation for CFBam ServiceType.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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
#include <cfbamobj/CFBamServiceTypeObj.hpp>

namespace cfbam {

	const std::string CFBamServiceTypeObj::CLASS_NAME( "CFBamServiceTypeObj" );
	const classcode_t CFBamServiceTypeObj::CLASS_CODE = 0xa013L;

	int32_t CFBamServiceTypeObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int32_t CFBamServiceTypeObj::getRequiredServiceTypeId() {
		return( getPKey()->getRequiredServiceTypeId() );
	}

	const int32_t* CFBamServiceTypeObj::getRequiredServiceTypeIdReference() {
		return( getPKey()->getRequiredServiceTypeIdReference() );
	}

	const std::string& CFBamServiceTypeObj::getRequiredDescription() {
		return( getServiceTypeBuff()->getRequiredDescription() );
	}

	const std::string* CFBamServiceTypeObj::getRequiredDescriptionReference() {
		return( getServiceTypeBuff()->getRequiredDescriptionReference() );
	}


	std::vector<cfsec::ICFSecServiceObj*> CFBamServiceTypeObj::getOptionalChildrenDeployed( bool forceRead ) {
		std::vector<cfsec::ICFSecServiceObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTableObj()->readServiceByTypeIdx( getPKey()->getRequiredServiceTypeId(),
			forceRead );
		return( retval );
	}

	CFBamServiceTypeObj::CFBamServiceTypeObj()
	: ICFBamServiceTypeObj(),
	  ICFSecServiceTypeObj(),
	  ICFIntServiceTypeObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamServiceTypeObj::CFBamServiceTypeObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamServiceTypeObj(),
	  ICFSecServiceTypeObj(),
	  ICFIntServiceTypeObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamServiceTypeObj::~CFBamServiceTypeObj() {
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

	cfsec::CFSecServiceTypeBuff* CFBamServiceTypeObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecServiceTypeBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableServiceType()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredServiceTypeId() );
			}
		}
		return( buff );
	}

	void CFBamServiceTypeObj::setBuff( cfsec::CFSecServiceTypeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamServiceTypeObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamServiceTypeObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamServiceTypeObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecServiceTypeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamServiceTypeObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServiceTypeObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ServiceTypeId( "ServiceTypeId" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamServiceTypeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamServiceTypeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamServiceTypeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamServiceTypeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamServiceTypeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_ServiceTypeId, CFBamServiceTypeObj::getRequiredServiceTypeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamServiceTypeObj::getRequiredDescription() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamServiceTypeObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredDescription() );
		return( objName );
	}

	const std::string CFBamServiceTypeObj::getGenDefName() {
		return( cfsec::CFSecServiceTypeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamServiceTypeObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamServiceTypeObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamServiceTypeObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamServiceTypeObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamServiceTypeObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamServiceTypeObj::getObjQualifiedName() {
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

	std::string CFBamServiceTypeObj::getObjFullName() {
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

	cfsec::ICFSecServiceTypeObj* CFBamServiceTypeObj::realize() {
		cfsec::ICFSecServiceTypeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTypeTableObj()->realizeServiceType(
			(cfsec::ICFSecServiceTypeObj*)this );
		return( dynamic_cast<cfsec::ICFSecServiceTypeObj*>( retobj ) );
	}

	cfsec::ICFSecServiceTypeObj* CFBamServiceTypeObj::read( bool forceRead ) {
		cfsec::ICFSecServiceTypeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTypeTableObj()->readServiceTypeByIdIdx( getServiceTypeBuff()->getRequiredServiceTypeId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecServiceTypeObj*>( retobj ) );
	}

	cfsec::ICFSecServiceTypeTableObj* CFBamServiceTypeObj::getServiceTypeTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTypeTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamServiceTypeObj::getSchema() {
		return( schema );
	}

	void CFBamServiceTypeObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecServiceTypePKey* CFBamServiceTypeObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecServiceTypePKey();
		}
		return( pKey );
	}

	void CFBamServiceTypeObj::setPKey( cfsec::CFSecServiceTypePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecServiceTypePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamServiceTypeObj::getIsNew() {
		return( isNew );
	}

	void CFBamServiceTypeObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecServiceTypeEditObj* CFBamServiceTypeObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecServiceTypeObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTypeTableObj()->lockServiceType( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTypeTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecServiceTypeEditObj*>( edit ) );
	}

	void CFBamServiceTypeObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecServiceTypeEditObj* CFBamServiceTypeObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecServiceTypeEditObj* CFBamServiceTypeObj::getServiceTypeEdit() {
		return( dynamic_cast<cfsec::ICFSecServiceTypeEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamServiceTypeObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getServiceTypeBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamServiceTypeObj::getCreatedAt() {
		return( getServiceTypeBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamServiceTypeObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getServiceTypeBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamServiceTypeObj::getUpdatedAt() {
		return( getServiceTypeBuff()->getUpdatedAt() );
	}

	void CFBamServiceTypeObj::copyPKeyToBuff() {
		cfsec::CFSecServiceTypePKey* tablePKey = getPKey();
		cfsec::CFSecServiceTypeBuff* tableBuff = getServiceTypeEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredServiceTypeId( tablePKey->getRequiredServiceTypeId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamServiceTypeObj::copyBuffToPKey() {
		cfsec::CFSecServiceTypePKey* tablePKey = getPKey();
		cfsec::CFSecServiceTypeBuff* tableBuff = getServiceTypeBuff();
		tablePKey->setRequiredServiceTypeId( tableBuff->getRequiredServiceTypeId() );
	}

}
