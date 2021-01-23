// Description: C++18 base object instance implementation for CFBam TSecGrpInc.

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
#include <cfbamobj/CFBamTSecGrpIncObj.hpp>

namespace cfbam {

	const std::string CFBamTSecGrpIncObj::CLASS_NAME( "CFBamTSecGrpIncObj" );
	const classcode_t CFBamTSecGrpIncObj::CLASS_CODE = 0xa017L;

	int32_t CFBamTSecGrpIncObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamTSecGrpIncObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamTSecGrpIncObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamTSecGrpIncObj::getRequiredTSecGrpIncId() {
		return( getPKey()->getRequiredTSecGrpIncId() );
	}

	const int64_t* CFBamTSecGrpIncObj::getRequiredTSecGrpIncIdReference() {
		return( getPKey()->getRequiredTSecGrpIncIdReference() );
	}

	const int32_t CFBamTSecGrpIncObj::getRequiredTSecGroupId() {
		return( getTSecGrpIncBuff()->getRequiredTSecGroupId() );
	}

	const int32_t* CFBamTSecGrpIncObj::getRequiredTSecGroupIdReference() {
		return( getTSecGrpIncBuff()->getRequiredTSecGroupIdReference() );
	}

	const int32_t CFBamTSecGrpIncObj::getRequiredIncludeGroupId() {
		return( getTSecGrpIncBuff()->getRequiredIncludeGroupId() );
	}

	const int32_t* CFBamTSecGrpIncObj::getRequiredIncludeGroupIdReference() {
		return( getTSecGrpIncBuff()->getRequiredIncludeGroupIdReference() );
	}


	cfsec::ICFSecTenantObj* CFBamTSecGrpIncObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecTSecGroupObj* CFBamTSecGrpIncObj::getRequiredContainerGroup( bool forceRead ) {
		cfsec::ICFSecTSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getPKey()->getRequiredTenantId(),
					getTSecGrpIncBuff()->getRequiredTSecGroupId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecTSecGroupObj* CFBamTSecGrpIncObj::getRequiredParentSubGroup( bool forceRead ) {
		cfsec::ICFSecTSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getPKey()->getRequiredTenantId(),
					getTSecGrpIncBuff()->getRequiredIncludeGroupId(), forceRead );
		}
		return( retobj );
	}

	CFBamTSecGrpIncObj::CFBamTSecGrpIncObj()
	: ICFBamTSecGrpIncObj(),
	  ICFSecTSecGrpIncObj(),
	  ICFIntTSecGrpIncObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTSecGrpIncObj::CFBamTSecGrpIncObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamTSecGrpIncObj(),
	  ICFSecTSecGrpIncObj(),
	  ICFIntTSecGrpIncObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamTSecGrpIncObj::~CFBamTSecGrpIncObj() {
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

	cfsec::CFSecTSecGrpIncBuff* CFBamTSecGrpIncObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecTSecGrpIncBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredTSecGrpIncId() );
			}
		}
		return( buff );
	}

	void CFBamTSecGrpIncObj::setBuff( cfsec::CFSecTSecGrpIncBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamTSecGrpIncObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTSecGrpIncObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamTSecGrpIncObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTSecGrpIncObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTSecGrpIncObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGrpIncId( "TSecGrpIncId" );
		static const std::string S_TSecGroupId( "TSecGroupId" );
		static const std::string S_IncludeGroupId( "IncludeGroupId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTSecGrpIncObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTSecGrpIncObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTSecGrpIncObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTSecGrpIncObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTSecGrpIncObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamTSecGrpIncObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TSecGrpIncId, CFBamTSecGrpIncObj::getRequiredTSecGrpIncId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, CFBamTSecGrpIncObj::getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_IncludeGroupId, CFBamTSecGrpIncObj::getRequiredIncludeGroupId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamTSecGrpIncObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredTSecGrpIncId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFBamTSecGrpIncObj::getGenDefName() {
		return( cfsec::CFSecTSecGrpIncBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTSecGrpIncObj::getScope() {
		cfsec::ICFSecTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTSecGrpIncObj::getObjScope() {
		cfsec::ICFSecTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTSecGrpIncObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTSecGrpIncObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTSecGrpIncObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTSecGrpIncObj::getObjQualifiedName() {
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

	std::string CFBamTSecGrpIncObj::getObjFullName() {
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

	cfsec::ICFSecTSecGrpIncObj* CFBamTSecGrpIncObj::realize() {
		cfsec::ICFSecTSecGrpIncObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->realizeTSecGrpInc(
			(cfsec::ICFSecTSecGrpIncObj*)this );
		return( dynamic_cast<cfsec::ICFSecTSecGrpIncObj*>( retobj ) );
	}

	cfsec::ICFSecTSecGrpIncObj* CFBamTSecGrpIncObj::read( bool forceRead ) {
		cfsec::ICFSecTSecGrpIncObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->readTSecGrpIncByIdIdx( getTSecGrpIncBuff()->getRequiredTenantId(),
		getTSecGrpIncBuff()->getRequiredTSecGrpIncId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecTSecGrpIncObj*>( retobj ) );
	}

	cfsec::ICFSecTSecGrpIncTableObj* CFBamTSecGrpIncObj::getTSecGrpIncTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpIncTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamTSecGrpIncObj::getSchema() {
		return( schema );
	}

	void CFBamTSecGrpIncObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecTSecGrpIncPKey* CFBamTSecGrpIncObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecTSecGrpIncPKey();
		}
		return( pKey );
	}

	void CFBamTSecGrpIncObj::setPKey( cfsec::CFSecTSecGrpIncPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecTSecGrpIncPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamTSecGrpIncObj::getIsNew() {
		return( isNew );
	}

	void CFBamTSecGrpIncObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecTSecGrpIncEditObj* CFBamTSecGrpIncObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecTSecGrpIncObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->lockTSecGrpInc( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecTSecGrpIncEditObj*>( edit ) );
	}

	void CFBamTSecGrpIncObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecTSecGrpIncEditObj* CFBamTSecGrpIncObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecTSecGrpIncEditObj* CFBamTSecGrpIncObj::getTSecGrpIncEdit() {
		return( dynamic_cast<cfsec::ICFSecTSecGrpIncEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamTSecGrpIncObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpIncBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTSecGrpIncObj::getCreatedAt() {
		return( getTSecGrpIncBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTSecGrpIncObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpIncBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTSecGrpIncObj::getUpdatedAt() {
		return( getTSecGrpIncBuff()->getUpdatedAt() );
	}

	void CFBamTSecGrpIncObj::copyPKeyToBuff() {
		cfsec::CFSecTSecGrpIncPKey* tablePKey = getPKey();
		cfsec::CFSecTSecGrpIncBuff* tableBuff = getTSecGrpIncEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredTSecGrpIncId( tablePKey->getRequiredTSecGrpIncId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamTSecGrpIncObj::copyBuffToPKey() {
		cfsec::CFSecTSecGrpIncPKey* tablePKey = getPKey();
		cfsec::CFSecTSecGrpIncBuff* tableBuff = getTSecGrpIncBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredTSecGrpIncId( tableBuff->getRequiredTSecGrpIncId() );
	}

}
