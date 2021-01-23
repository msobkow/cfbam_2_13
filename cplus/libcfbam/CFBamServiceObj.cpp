// Description: C++18 base object instance implementation for CFBam Service.

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
#include <cfbamobj/CFBamServiceObj.hpp>

namespace cfbam {

	const std::string CFBamServiceObj::CLASS_NAME( "CFBamServiceObj" );
	const classcode_t CFBamServiceObj::CLASS_CODE = 0xa012L;

	int32_t CFBamServiceObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamServiceObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFBamServiceObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFBamServiceObj::getRequiredServiceId() {
		return( getPKey()->getRequiredServiceId() );
	}

	const int64_t* CFBamServiceObj::getRequiredServiceIdReference() {
		return( getPKey()->getRequiredServiceIdReference() );
	}

	const int64_t CFBamServiceObj::getRequiredHostNodeId() {
		return( getServiceBuff()->getRequiredHostNodeId() );
	}

	const int64_t* CFBamServiceObj::getRequiredHostNodeIdReference() {
		return( getServiceBuff()->getRequiredHostNodeIdReference() );
	}

	const int32_t CFBamServiceObj::getRequiredServiceTypeId() {
		return( getServiceBuff()->getRequiredServiceTypeId() );
	}

	const int32_t* CFBamServiceObj::getRequiredServiceTypeIdReference() {
		return( getServiceBuff()->getRequiredServiceTypeIdReference() );
	}

	const int16_t CFBamServiceObj::getRequiredHostPort() {
		return( getServiceBuff()->getRequiredHostPort() );
	}

	const int16_t* CFBamServiceObj::getRequiredHostPortReference() {
		return( getServiceBuff()->getRequiredHostPortReference() );
	}


	cfsec::ICFSecClusterObj* CFBamServiceObj::getRequiredOwnerCluster( bool forceRead ) {
		cfsec::ICFSecClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecHostNodeObj* CFBamServiceObj::getOptionalContainerHost( bool forceRead ) {
		cfsec::ICFSecHostNodeObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getHostNodeTableObj()->readHostNodeByIdIdx( getPKey()->getRequiredClusterId(),
					getServiceBuff()->getRequiredHostNodeId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecServiceTypeObj* CFBamServiceObj::getOptionalParentServiceType( bool forceRead ) {
		cfsec::ICFSecServiceTypeObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTypeTableObj()->readServiceTypeByIdIdx( getServiceBuff()->getRequiredServiceTypeId(), forceRead );
		}
		return( retobj );
	}

	CFBamServiceObj::CFBamServiceObj()
	: ICFBamServiceObj(),
	  ICFSecServiceObj(),
	  ICFIntServiceObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamServiceObj::CFBamServiceObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamServiceObj(),
	  ICFSecServiceObj(),
	  ICFIntServiceObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamServiceObj::~CFBamServiceObj() {
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

	cfsec::CFSecServiceBuff* CFBamServiceObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecServiceBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableService()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredClusterId(),
						getPKey()->getRequiredServiceId() );
			}
		}
		return( buff );
	}

	void CFBamServiceObj::setBuff( cfsec::CFSecServiceBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamServiceObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamServiceObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamServiceObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecServiceBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamServiceObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServiceObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_ServiceId( "ServiceId" );
		static const std::string S_HostNodeId( "HostNodeId" );
		static const std::string S_ServiceTypeId( "ServiceTypeId" );
		static const std::string S_HostPort( "HostPort" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamServiceObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamServiceObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamServiceObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamServiceObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamServiceObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFBamServiceObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ServiceId, CFBamServiceObj::getRequiredServiceId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_HostNodeId, CFBamServiceObj::getRequiredHostNodeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_ServiceTypeId, CFBamServiceObj::getRequiredServiceTypeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_HostPort, CFBamServiceObj::getRequiredHostPort() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamServiceObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredServiceId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFBamServiceObj::getGenDefName() {
		return( cfsec::CFSecServiceBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamServiceObj::getScope() {
		cfsec::ICFSecHostNodeObj* scope = getOptionalContainerHost();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamServiceObj::getObjScope() {
		cfsec::ICFSecHostNodeObj* scope = getOptionalContainerHost();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamServiceObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamServiceObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamServiceObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamServiceObj::getObjQualifiedName() {
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

	std::string CFBamServiceObj::getObjFullName() {
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

	cfsec::ICFSecServiceObj* CFBamServiceObj::realize() {
		cfsec::ICFSecServiceObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTableObj()->realizeService(
			(cfsec::ICFSecServiceObj*)this );
		return( dynamic_cast<cfsec::ICFSecServiceObj*>( retobj ) );
	}

	cfsec::ICFSecServiceObj* CFBamServiceObj::read( bool forceRead ) {
		cfsec::ICFSecServiceObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTableObj()->readServiceByIdIdx( getServiceBuff()->getRequiredClusterId(),
		getServiceBuff()->getRequiredServiceId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecServiceObj*>( retobj ) );
	}

	cfsec::ICFSecServiceTableObj* CFBamServiceObj::getServiceTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamServiceObj::getSchema() {
		return( schema );
	}

	void CFBamServiceObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecServicePKey* CFBamServiceObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecServicePKey();
		}
		return( pKey );
	}

	void CFBamServiceObj::setPKey( cfsec::CFSecServicePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecServicePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamServiceObj::getIsNew() {
		return( isNew );
	}

	void CFBamServiceObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecServiceEditObj* CFBamServiceObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecServiceObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTableObj()->lockService( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecServiceEditObj*>( edit ) );
	}

	void CFBamServiceObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecServiceEditObj* CFBamServiceObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecServiceEditObj* CFBamServiceObj::getServiceEdit() {
		return( dynamic_cast<cfsec::ICFSecServiceEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamServiceObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getServiceBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamServiceObj::getCreatedAt() {
		return( getServiceBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamServiceObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getServiceBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamServiceObj::getUpdatedAt() {
		return( getServiceBuff()->getUpdatedAt() );
	}

	void CFBamServiceObj::copyPKeyToBuff() {
		cfsec::CFSecServicePKey* tablePKey = getPKey();
		cfsec::CFSecServiceBuff* tableBuff = getServiceEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
			tableBuff->setRequiredServiceId( tablePKey->getRequiredServiceId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamServiceObj::copyBuffToPKey() {
		cfsec::CFSecServicePKey* tablePKey = getPKey();
		cfsec::CFSecServiceBuff* tableBuff = getServiceBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredServiceId( tableBuff->getRequiredServiceId() );
	}

}
