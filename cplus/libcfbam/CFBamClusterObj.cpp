// Description: C++18 base object instance implementation for CFBam Cluster.

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
#include <cfbamobj/CFBamClusterObj.hpp>

namespace cfbam {

	const std::string CFBamClusterObj::CLASS_NAME( "CFBamClusterObj" );
	const classcode_t CFBamClusterObj::CLASS_CODE = 0xa001L;

	int32_t CFBamClusterObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamClusterObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamClusterObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFBamClusterObj::getRequiredFullDomName() {
		return( getClusterBuff()->getRequiredFullDomName() );
	}

	const std::string* CFBamClusterObj::getRequiredFullDomNameReference() {
		return( getClusterBuff()->getRequiredFullDomNameReference() );
	}

	const std::string& CFBamClusterObj::getRequiredDescription() {
		return( getClusterBuff()->getRequiredDescription() );
	}

	const std::string* CFBamClusterObj::getRequiredDescriptionReference() {
		return( getClusterBuff()->getRequiredDescriptionReference() );
	}


	std::vector<cfsec::ICFSecHostNodeObj*> CFBamClusterObj::getOptionalComponentsHostNode( bool forceRead ) {
		std::vector<cfsec::ICFSecHostNodeObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getHostNodeTableObj()->readHostNodeByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecTenantObj*> CFBamClusterObj::getOptionalComponentsTenant( bool forceRead ) {
		std::vector<cfsec::ICFSecTenantObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecSecAppObj*> CFBamClusterObj::getOptionalComponentsSecApp( bool forceRead ) {
		std::vector<cfsec::ICFSecSecAppObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecAppTableObj()->readSecAppByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecSecGroupObj*> CFBamClusterObj::getOptionalComponentsSecGroup( bool forceRead ) {
		std::vector<cfsec::ICFSecSecGroupObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecGroupTableObj()->readSecGroupByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecSysClusterObj*> CFBamClusterObj::getOptionalComponentsSysCluster( bool forceRead ) {
		std::vector<cfsec::ICFSecSysClusterObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSysClusterTableObj()->readSysClusterByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamClusterObj::CFBamClusterObj()
	: ICFBamClusterObj(),
	  ICFSecClusterObj(),
	  ICFIntClusterObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamClusterObj::CFBamClusterObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamClusterObj(),
	  ICFSecClusterObj(),
	  ICFIntClusterObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamClusterObj::~CFBamClusterObj() {
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

	cfsec::CFSecClusterBuff* CFBamClusterObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecClusterBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableCluster()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamClusterObj::setBuff( cfsec::CFSecClusterBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamClusterObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClusterObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamClusterObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecClusterBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamClusterObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClusterObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_Id( "Id" );
		static const std::string S_FullDomName( "FullDomName" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamClusterObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamClusterObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamClusterObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamClusterObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamClusterObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamClusterObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FullDomName, CFBamClusterObj::getRequiredFullDomName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamClusterObj::getRequiredDescription() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamClusterObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredFullDomName() );
		return( objName );
	}

	const std::string CFBamClusterObj::getGenDefName() {
		return( cfsec::CFSecClusterBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamClusterObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamClusterObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamClusterObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamClusterObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamClusterObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getHostNodeTableObj()->readHostNodeByLookupHostNameIdx( getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByLookupUNameIdx( getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecAppTableObj()->readSecAppByLookupUJEEMountIdx( getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecGroupTableObj()->readSecGroupByLookupUNameIdx( getRequiredId(),
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

	std::string CFBamClusterObj::getObjQualifiedName() {
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

	std::string CFBamClusterObj::getObjFullName() {
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

	cfsec::ICFSecClusterObj* CFBamClusterObj::realize() {
		cfsec::ICFSecClusterObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClusterTableObj()->realizeCluster(
			(cfsec::ICFSecClusterObj*)this );
		return( dynamic_cast<cfsec::ICFSecClusterObj*>( retobj ) );
	}

	cfsec::ICFSecClusterObj* CFBamClusterObj::read( bool forceRead ) {
		cfsec::ICFSecClusterObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getClusterBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecClusterObj*>( retobj ) );
	}

	cfsec::ICFSecClusterTableObj* CFBamClusterObj::getClusterTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClusterTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamClusterObj::getSchema() {
		return( schema );
	}

	void CFBamClusterObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecClusterPKey* CFBamClusterObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecClusterPKey();
		}
		return( pKey );
	}

	void CFBamClusterObj::setPKey( cfsec::CFSecClusterPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecClusterPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamClusterObj::getIsNew() {
		return( isNew );
	}

	void CFBamClusterObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecClusterEditObj* CFBamClusterObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecClusterObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClusterTableObj()->lockCluster( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClusterTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecClusterEditObj*>( edit ) );
	}

	void CFBamClusterObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecClusterEditObj* CFBamClusterObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecClusterEditObj* CFBamClusterObj::getClusterEdit() {
		return( dynamic_cast<cfsec::ICFSecClusterEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamClusterObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getClusterBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamClusterObj::getCreatedAt() {
		return( getClusterBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamClusterObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getClusterBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamClusterObj::getUpdatedAt() {
		return( getClusterBuff()->getUpdatedAt() );
	}

	void CFBamClusterObj::copyPKeyToBuff() {
		cfsec::CFSecClusterPKey* tablePKey = getPKey();
		cfsec::CFSecClusterBuff* tableBuff = getClusterEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamClusterObj::copyBuffToPKey() {
		cfsec::CFSecClusterPKey* tablePKey = getPKey();
		cfsec::CFSecClusterBuff* tableBuff = getClusterBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
