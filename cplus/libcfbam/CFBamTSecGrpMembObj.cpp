// Description: C++18 base object instance implementation for CFBam TSecGrpMemb.

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
#include <cfbamobj/CFBamTSecGrpMembObj.hpp>

namespace cfbam {

	const std::string CFBamTSecGrpMembObj::CLASS_NAME( "CFBamTSecGrpMembObj" );
	const classcode_t CFBamTSecGrpMembObj::CLASS_CODE = 0xa018L;

	int32_t CFBamTSecGrpMembObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamTSecGrpMembObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamTSecGrpMembObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamTSecGrpMembObj::getRequiredTSecGrpMembId() {
		return( getPKey()->getRequiredTSecGrpMembId() );
	}

	const int64_t* CFBamTSecGrpMembObj::getRequiredTSecGrpMembIdReference() {
		return( getPKey()->getRequiredTSecGrpMembIdReference() );
	}

	const int32_t CFBamTSecGrpMembObj::getRequiredTSecGroupId() {
		return( getTSecGrpMembBuff()->getRequiredTSecGroupId() );
	}

	const int32_t* CFBamTSecGrpMembObj::getRequiredTSecGroupIdReference() {
		return( getTSecGrpMembBuff()->getRequiredTSecGroupIdReference() );
	}

	const uuid_ptr_t CFBamTSecGrpMembObj::getRequiredSecUserId() {
		return( getTSecGrpMembBuff()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFBamTSecGrpMembObj::getRequiredSecUserIdReference() {
		return( getTSecGrpMembBuff()->getRequiredSecUserIdReference() );
	}


	cfsec::ICFSecTenantObj* CFBamTSecGrpMembObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecTSecGroupObj* CFBamTSecGrpMembObj::getRequiredContainerGroup( bool forceRead ) {
		cfsec::ICFSecTSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getPKey()->getRequiredTenantId(),
					getTSecGrpMembBuff()->getRequiredTSecGroupId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecSecUserObj* CFBamTSecGrpMembObj::getRequiredParentUser( bool forceRead ) {
		cfsec::ICFSecSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpMembBuff()->getRequiredSecUserId(), forceRead );
		}
		return( retobj );
	}

	CFBamTSecGrpMembObj::CFBamTSecGrpMembObj()
	: ICFBamTSecGrpMembObj(),
	  ICFSecTSecGrpMembObj(),
	  ICFIntTSecGrpMembObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTSecGrpMembObj::CFBamTSecGrpMembObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamTSecGrpMembObj(),
	  ICFSecTSecGrpMembObj(),
	  ICFIntTSecGrpMembObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTSecGrpMembObj::~CFBamTSecGrpMembObj() {
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

	cfsec::CFSecTSecGrpMembBuff* CFBamTSecGrpMembObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecTSecGrpMembBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTSecGrpMemb()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredTSecGrpMembId() );
			}
		}
		return( buff );
	}

	void CFBamTSecGrpMembObj::setBuff( cfsec::CFSecTSecGrpMembBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamTSecGrpMembObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTSecGrpMembObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamTSecGrpMembObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTSecGrpMembObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTSecGrpMembObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGrpMembId( "TSecGrpMembId" );
		static const std::string S_TSecGroupId( "TSecGroupId" );
		static const std::string S_SecUserId( "SecUserId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTSecGrpMembObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTSecGrpMembObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTSecGrpMembObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTSecGrpMembObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTSecGrpMembObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamTSecGrpMembObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TSecGrpMembId, CFBamTSecGrpMembObj::getRequiredTSecGrpMembId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, CFBamTSecGrpMembObj::getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFBamTSecGrpMembObj::getRequiredSecUserId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamTSecGrpMembObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredTSecGrpMembId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFBamTSecGrpMembObj::getGenDefName() {
		return( cfsec::CFSecTSecGrpMembBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTSecGrpMembObj::getScope() {
		cfsec::ICFSecTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTSecGrpMembObj::getObjScope() {
		cfsec::ICFSecTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTSecGrpMembObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTSecGrpMembObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTSecGrpMembObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTSecGrpMembObj::getObjQualifiedName() {
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

	std::string CFBamTSecGrpMembObj::getObjFullName() {
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

	cfsec::ICFSecTSecGrpMembObj* CFBamTSecGrpMembObj::realize() {
		cfsec::ICFSecTSecGrpMembObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->realizeTSecGrpMemb(
			(cfsec::ICFSecTSecGrpMembObj*)this );
		return( dynamic_cast<cfsec::ICFSecTSecGrpMembObj*>( retobj ) );
	}

	cfsec::ICFSecTSecGrpMembObj* CFBamTSecGrpMembObj::read( bool forceRead ) {
		cfsec::ICFSecTSecGrpMembObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->readTSecGrpMembByIdIdx( getTSecGrpMembBuff()->getRequiredTenantId(),
		getTSecGrpMembBuff()->getRequiredTSecGrpMembId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecTSecGrpMembObj*>( retobj ) );
	}

	cfsec::ICFSecTSecGrpMembTableObj* CFBamTSecGrpMembObj::getTSecGrpMembTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpMembTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamTSecGrpMembObj::getSchema() {
		return( schema );
	}

	void CFBamTSecGrpMembObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecTSecGrpMembPKey* CFBamTSecGrpMembObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecTSecGrpMembPKey();
		}
		return( pKey );
	}

	void CFBamTSecGrpMembObj::setPKey( cfsec::CFSecTSecGrpMembPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecTSecGrpMembPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamTSecGrpMembObj::getIsNew() {
		return( isNew );
	}

	void CFBamTSecGrpMembObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecTSecGrpMembEditObj* CFBamTSecGrpMembObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecTSecGrpMembObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->lockTSecGrpMemb( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecTSecGrpMembEditObj*>( edit ) );
	}

	void CFBamTSecGrpMembObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecTSecGrpMembEditObj* CFBamTSecGrpMembObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecTSecGrpMembEditObj* CFBamTSecGrpMembObj::getTSecGrpMembEdit() {
		return( dynamic_cast<cfsec::ICFSecTSecGrpMembEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamTSecGrpMembObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpMembBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTSecGrpMembObj::getCreatedAt() {
		return( getTSecGrpMembBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTSecGrpMembObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpMembBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTSecGrpMembObj::getUpdatedAt() {
		return( getTSecGrpMembBuff()->getUpdatedAt() );
	}

	void CFBamTSecGrpMembObj::copyPKeyToBuff() {
		cfsec::CFSecTSecGrpMembPKey* tablePKey = getPKey();
		cfsec::CFSecTSecGrpMembBuff* tableBuff = getTSecGrpMembEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredTSecGrpMembId( tablePKey->getRequiredTSecGrpMembId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamTSecGrpMembObj::copyBuffToPKey() {
		cfsec::CFSecTSecGrpMembPKey* tablePKey = getPKey();
		cfsec::CFSecTSecGrpMembBuff* tableBuff = getTSecGrpMembBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredTSecGrpMembId( tableBuff->getRequiredTSecGrpMembId() );
	}

}
