// Description: C++18 edit object instance implementation for CFBam SecGrpInc.

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
#include <cfbamobj/CFBamSecGrpIncObj.hpp>
#include <cfbamobj/CFBamSecGrpIncEditObj.hpp>


namespace cfbam {

	const std::string CFBamSecGrpIncEditObj::CLASS_NAME( "CFBamSecGrpIncEditObj" );

	CFBamSecGrpIncEditObj::CFBamSecGrpIncEditObj( cfsec::ICFSecSecGrpIncObj* argOrig )
	: ICFBamSecGrpIncEditObj(),
	  ICFSecSecGrpIncEditObj(),
	  ICFIntSecGrpIncEditObj()
	{
		static const std::string S_ProcName( "CFBamSecGrpIncEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecSecGrpIncBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( origBuff->clone() );
	}

	CFBamSecGrpIncEditObj::~CFBamSecGrpIncEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamSecGrpIncEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamSecGrpIncEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGrpIncBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecGrpIncEditObj::getCreatedAt() {
		return( getSecGrpIncBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamSecGrpIncEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGrpIncBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamSecGrpIncEditObj::getUpdatedAt() {
		return( getSecGrpIncBuff()->getUpdatedAt() );
	}

	void CFBamSecGrpIncEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecGrpIncEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSecGrpIncEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGrpIncEditBuff()->setCreatedAt( value );
	}

	void CFBamSecGrpIncEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecGrpIncEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamSecGrpIncEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGrpIncEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamSecGrpIncEditObj::getClassCode() const {
		return( cfsec::CFSecSecGrpIncBuff::CLASS_CODE );
	}

	bool CFBamSecGrpIncEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamSecGrpIncEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSecGrpIncEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGrpIncId( "SecGrpIncId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_IncludeGroupId( "IncludeGroupId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamSecGrpIncEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamSecGrpIncEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamSecGrpIncEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamSecGrpIncEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamSecGrpIncEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFBamSecGrpIncEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGrpIncId, CFBamSecGrpIncEditObj::getRequiredSecGrpIncId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, CFBamSecGrpIncEditObj::getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_IncludeGroupId, CFBamSecGrpIncEditObj::getRequiredIncludeGroupId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamSecGrpIncEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamSecGrpIncEditObj::setRequiredRevision( int32_t value ) {
		getSecGrpIncEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamSecGrpIncEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredSecGrpIncId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFBamSecGrpIncEditObj::getGenDefName() {
		return( cfsec::CFSecSecGrpIncBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSecGrpIncEditObj::getScope() {
		cfsec::ICFSecSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecGrpIncEditObj::getObjScope() {
		cfsec::ICFSecSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSecGrpIncEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSecGrpIncEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSecGrpIncEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamSecGrpIncEditObj::getObjQualifiedName() {
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

	std::string CFBamSecGrpIncEditObj::getObjFullName() {
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

	cfsec::ICFSecSecGrpIncObj* CFBamSecGrpIncEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecSecGrpIncObj* retobj = getSchema()->getSecGrpIncTableObj()->realizeSecGrpInc( dynamic_cast<cfsec::ICFSecSecGrpIncObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecSecGrpIncObj* CFBamSecGrpIncEditObj::read( bool forceRead ) {
		cfsec::ICFSecSecGrpIncObj* retval = getOrigAsSecGrpInc()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecSecGrpIncObj* CFBamSecGrpIncEditObj::create() {
		cfsec::ICFSecSecGrpIncObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecGrpInc()->getSchema() )->getSecGrpIncTableObj()->createSecGrpInc( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecSecGrpIncEditObj* CFBamSecGrpIncEditObj::update() {
		getSchema()->getSecGrpIncTableObj()->updateSecGrpInc( this );
		return( NULL );
	}

	cfsec::ICFSecSecGrpIncEditObj* CFBamSecGrpIncEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecGrpIncTableObj()->deleteSecGrpInc( this );
		return( NULL );
	}

	cfsec::ICFSecSecGrpIncTableObj* CFBamSecGrpIncEditObj::getSecGrpIncTable() {
		return( orig->getSchema()->getSecGrpIncTableObj() );
	}

	cfsec::ICFSecSecGrpIncEditObj* CFBamSecGrpIncEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecSecGrpIncEditObj* CFBamSecGrpIncEditObj::getSecGrpIncEdit() {
		return( (cfsec::ICFSecSecGrpIncEditObj*)this );
	}

	cfsec::ICFSecSecGrpIncEditObj* CFBamSecGrpIncEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamSecGrpIncEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecSecGrpIncObj* CFBamSecGrpIncEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecSecGrpIncObj* CFBamSecGrpIncEditObj::getOrigAsSecGrpInc() {
		return( dynamic_cast<cfsec::ICFSecSecGrpIncObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamSecGrpIncEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamSecGrpIncEditObj::getBuff() {
		return( buff );
	}

	void CFBamSecGrpIncEditObj::setBuff( cfsec::CFSecSecGrpIncBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecSecGrpIncPKey* CFBamSecGrpIncEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamSecGrpIncEditObj::setPKey( cfsec::CFSecSecGrpIncPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamSecGrpIncEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamSecGrpIncEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamSecGrpIncEditObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFBamSecGrpIncEditObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFBamSecGrpIncEditObj::getRequiredSecGrpIncId() {
		return( getPKey()->getRequiredSecGrpIncId() );
	}

	const int64_t* CFBamSecGrpIncEditObj::getRequiredSecGrpIncIdReference() {
		return( getPKey()->getRequiredSecGrpIncIdReference() );
	}

	const int32_t CFBamSecGrpIncEditObj::getRequiredSecGroupId() {
		return( getSecGrpIncBuff()->getRequiredSecGroupId() );
	}

	const int32_t* CFBamSecGrpIncEditObj::getRequiredSecGroupIdReference() {
		return( getSecGrpIncBuff()->getRequiredSecGroupIdReference() );
	}

	const int32_t CFBamSecGrpIncEditObj::getRequiredIncludeGroupId() {
		return( getSecGrpIncBuff()->getRequiredIncludeGroupId() );
	}

	const int32_t* CFBamSecGrpIncEditObj::getRequiredIncludeGroupIdReference() {
		return( getSecGrpIncBuff()->getRequiredIncludeGroupIdReference() );
	}

	cfsec::ICFSecClusterObj* CFBamSecGrpIncEditObj::getRequiredOwnerCluster( bool forceRead ) {
		cfsec::ICFSecClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecGrpInc()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFBamSecGrpIncEditObj::setRequiredOwnerCluster( cfsec::ICFSecClusterObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredId() );
				getSecGrpIncEditBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	cfsec::ICFSecSecGroupObj* CFBamSecGrpIncEditObj::getRequiredContainerGroup( bool forceRead ) {
		cfsec::ICFSecSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecGrpInc()->getSchema() )->getSecGroupTableObj()->readSecGroupByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGrpIncBuff()->getRequiredSecGroupId() );
		}
		return( retobj );
	}

	void CFBamSecGrpIncEditObj::setRequiredContainerGroup( cfsec::ICFSecSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGrpIncEditBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGrpIncEditBuff()->setRequiredSecGroupId( value->getRequiredSecGroupId() );
			}
		}

	cfsec::ICFSecSecGroupObj* CFBamSecGrpIncEditObj::getRequiredParentSubGroup( bool forceRead ) {
		cfsec::ICFSecSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSecGrpInc()->getSchema() )->getSecGroupTableObj()->readSecGroupByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGrpIncBuff()->getRequiredIncludeGroupId() );
		}
		return( retobj );
	}

	void CFBamSecGrpIncEditObj::setRequiredParentSubGroup( cfsec::ICFSecSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGrpIncEditBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGrpIncEditBuff()->setRequiredIncludeGroupId( value->getRequiredSecGroupId() );
			}
			else {
			}
		}

	void CFBamSecGrpIncEditObj::copyPKeyToBuff() {
		cfsec::CFSecSecGrpIncPKey* tablePKey = getPKey();
		cfsec::CFSecSecGrpIncBuff* tableBuff = getSecGrpIncEditBuff();
		tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
		tableBuff->setRequiredSecGrpIncId( tablePKey->getRequiredSecGrpIncId() );
	}

	void CFBamSecGrpIncEditObj::copyBuffToPKey() {
		cfsec::CFSecSecGrpIncPKey* tablePKey = getPKey();
		cfsec::CFSecSecGrpIncBuff* tableBuff = getSecGrpIncBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecGrpIncId( tableBuff->getRequiredSecGrpIncId() );
	}

	void CFBamSecGrpIncEditObj::copyBuffToOrig() {
		cfsec::CFSecSecGrpIncBuff* origBuff = getOrigAsSecGrpInc()->getSecGrpIncEditBuff();
		cfsec::CFSecSecGrpIncBuff* myBuff = getSecGrpIncBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamSecGrpIncEditObj::copyOrigToBuff() {
		cfsec::CFSecSecGrpIncBuff* origBuff = getOrigAsSecGrpInc()->getSecGrpIncBuff();
		cfsec::CFSecSecGrpIncBuff* myBuff = getSecGrpIncEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
