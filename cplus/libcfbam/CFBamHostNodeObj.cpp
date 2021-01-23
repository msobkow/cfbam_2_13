// Description: C++18 base object instance implementation for CFBam HostNode.

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
#include <cfbamobj/CFBamHostNodeObj.hpp>

namespace cfbam {

	const std::string CFBamHostNodeObj::CLASS_NAME( "CFBamHostNodeObj" );
	const classcode_t CFBamHostNodeObj::CLASS_CODE = 0xa002L;

	int32_t CFBamHostNodeObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamHostNodeObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFBamHostNodeObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFBamHostNodeObj::getRequiredHostNodeId() {
		return( getPKey()->getRequiredHostNodeId() );
	}

	const int64_t* CFBamHostNodeObj::getRequiredHostNodeIdReference() {
		return( getPKey()->getRequiredHostNodeIdReference() );
	}

	const std::string& CFBamHostNodeObj::getRequiredDescription() {
		return( getHostNodeBuff()->getRequiredDescription() );
	}

	const std::string* CFBamHostNodeObj::getRequiredDescriptionReference() {
		return( getHostNodeBuff()->getRequiredDescriptionReference() );
	}

	const std::string& CFBamHostNodeObj::getRequiredHostName() {
		return( getHostNodeBuff()->getRequiredHostName() );
	}

	const std::string* CFBamHostNodeObj::getRequiredHostNameReference() {
		return( getHostNodeBuff()->getRequiredHostNameReference() );
	}


	cfsec::ICFSecClusterObj* CFBamHostNodeObj::getRequiredContainerCluster( bool forceRead ) {
		cfsec::ICFSecClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfsec::ICFSecServiceObj*> CFBamHostNodeObj::getOptionalComponentsService( bool forceRead ) {
		std::vector<cfsec::ICFSecServiceObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServiceTableObj()->readServiceByHostIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredHostNodeId(),
			forceRead );
		return( retval );
	}

	CFBamHostNodeObj::CFBamHostNodeObj()
	: ICFBamHostNodeObj(),
	  ICFSecHostNodeObj(),
	  ICFIntHostNodeObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamHostNodeObj::CFBamHostNodeObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamHostNodeObj(),
	  ICFSecHostNodeObj(),
	  ICFIntHostNodeObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamHostNodeObj::~CFBamHostNodeObj() {
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

	cfsec::CFSecHostNodeBuff* CFBamHostNodeObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecHostNodeBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableHostNode()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredClusterId(),
						getPKey()->getRequiredHostNodeId() );
			}
		}
		return( buff );
	}

	void CFBamHostNodeObj::setBuff( cfsec::CFSecHostNodeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamHostNodeObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamHostNodeObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamHostNodeObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamHostNodeObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamHostNodeObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_HostNodeId( "HostNodeId" );
		static const std::string S_Description( "Description" );
		static const std::string S_HostName( "HostName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamHostNodeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamHostNodeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamHostNodeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamHostNodeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamHostNodeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFBamHostNodeObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_HostNodeId, CFBamHostNodeObj::getRequiredHostNodeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamHostNodeObj::getRequiredDescription() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HostName, CFBamHostNodeObj::getRequiredHostName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamHostNodeObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredHostName() );
		return( objName );
	}

	const std::string CFBamHostNodeObj::getGenDefName() {
		return( cfsec::CFSecHostNodeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamHostNodeObj::getScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamHostNodeObj::getObjScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamHostNodeObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamHostNodeObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamHostNodeObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamHostNodeObj::getObjQualifiedName() {
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

	std::string CFBamHostNodeObj::getObjFullName() {
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

	cfsec::ICFSecHostNodeObj* CFBamHostNodeObj::realize() {
		cfsec::ICFSecHostNodeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getHostNodeTableObj()->realizeHostNode(
			(cfsec::ICFSecHostNodeObj*)this );
		return( dynamic_cast<cfsec::ICFSecHostNodeObj*>( retobj ) );
	}

	cfsec::ICFSecHostNodeObj* CFBamHostNodeObj::read( bool forceRead ) {
		cfsec::ICFSecHostNodeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getHostNodeTableObj()->readHostNodeByIdIdx( getHostNodeBuff()->getRequiredClusterId(),
		getHostNodeBuff()->getRequiredHostNodeId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecHostNodeObj*>( retobj ) );
	}

	cfsec::ICFSecHostNodeTableObj* CFBamHostNodeObj::getHostNodeTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getHostNodeTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamHostNodeObj::getSchema() {
		return( schema );
	}

	void CFBamHostNodeObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecHostNodePKey* CFBamHostNodeObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecHostNodePKey();
		}
		return( pKey );
	}

	void CFBamHostNodeObj::setPKey( cfsec::CFSecHostNodePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecHostNodePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamHostNodeObj::getIsNew() {
		return( isNew );
	}

	void CFBamHostNodeObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecHostNodeEditObj* CFBamHostNodeObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecHostNodeObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getHostNodeTableObj()->lockHostNode( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getHostNodeTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecHostNodeEditObj*>( edit ) );
	}

	void CFBamHostNodeObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecHostNodeEditObj* CFBamHostNodeObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecHostNodeEditObj* CFBamHostNodeObj::getHostNodeEdit() {
		return( dynamic_cast<cfsec::ICFSecHostNodeEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamHostNodeObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getHostNodeBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamHostNodeObj::getCreatedAt() {
		return( getHostNodeBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamHostNodeObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getHostNodeBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamHostNodeObj::getUpdatedAt() {
		return( getHostNodeBuff()->getUpdatedAt() );
	}

	void CFBamHostNodeObj::copyPKeyToBuff() {
		cfsec::CFSecHostNodePKey* tablePKey = getPKey();
		cfsec::CFSecHostNodeBuff* tableBuff = getHostNodeEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
			tableBuff->setRequiredHostNodeId( tablePKey->getRequiredHostNodeId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamHostNodeObj::copyBuffToPKey() {
		cfsec::CFSecHostNodePKey* tablePKey = getPKey();
		cfsec::CFSecHostNodeBuff* tableBuff = getHostNodeBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredHostNodeId( tableBuff->getRequiredHostNodeId() );
	}

}
