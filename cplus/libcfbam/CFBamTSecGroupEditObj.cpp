// Description: C++18 edit object instance implementation for CFBam TSecGroup.

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
#include <cfbamobj/CFBamTSecGroupObj.hpp>
#include <cfbamobj/CFBamTSecGroupEditObj.hpp>


namespace cfbam {

	const std::string CFBamTSecGroupEditObj::CLASS_NAME( "CFBamTSecGroupEditObj" );

	CFBamTSecGroupEditObj::CFBamTSecGroupEditObj( cfsec::ICFSecTSecGroupObj* argOrig )
	: ICFBamTSecGroupEditObj(),
	  ICFSecTSecGroupEditObj(),
	  ICFIntTSecGroupEditObj()
	{
		static const std::string S_ProcName( "CFBamTSecGroupEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecTSecGroupBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecTSecGroupBuff*>( origBuff->clone() );
	}

	CFBamTSecGroupEditObj::~CFBamTSecGroupEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamTSecGroupEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamTSecGroupEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGroupBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTSecGroupEditObj::getCreatedAt() {
		return( getTSecGroupBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTSecGroupEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGroupBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTSecGroupEditObj::getUpdatedAt() {
		return( getTSecGroupBuff()->getUpdatedAt() );
	}

	void CFBamTSecGroupEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getTSecGroupEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTSecGroupEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getTSecGroupEditBuff()->setCreatedAt( value );
	}

	void CFBamTSecGroupEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getTSecGroupEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTSecGroupEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getTSecGroupEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamTSecGroupEditObj::getClassCode() const {
		return( cfsec::CFSecTSecGroupBuff::CLASS_CODE );
	}

	bool CFBamTSecGroupEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecTSecGroupBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTSecGroupEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTSecGroupEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGroupId( "TSecGroupId" );
		static const std::string S_Name( "Name" );
		static const std::string S_IsVisible( "IsVisible" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTSecGroupEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTSecGroupEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTSecGroupEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTSecGroupEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTSecGroupEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamTSecGroupEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, CFBamTSecGroupEditObj::getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamTSecGroupEditObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsVisible, CFBamTSecGroupEditObj::getRequiredIsVisible() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamTSecGroupEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamTSecGroupEditObj::setRequiredRevision( int32_t value ) {
		getTSecGroupEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamTSecGroupEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamTSecGroupEditObj::getGenDefName() {
		return( cfsec::CFSecTSecGroupBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTSecGroupEditObj::getScope() {
		cfsec::ICFSecTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTSecGroupEditObj::getObjScope() {
		cfsec::ICFSecTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTSecGroupEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTSecGroupEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTSecGroupEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTSecGroupEditObj::getObjQualifiedName() {
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

	std::string CFBamTSecGroupEditObj::getObjFullName() {
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

	cfsec::ICFSecTSecGroupObj* CFBamTSecGroupEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecTSecGroupObj* retobj = getSchema()->getTSecGroupTableObj()->realizeTSecGroup( dynamic_cast<cfsec::ICFSecTSecGroupObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecTSecGroupObj* CFBamTSecGroupEditObj::read( bool forceRead ) {
		cfsec::ICFSecTSecGroupObj* retval = getOrigAsTSecGroup()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecTSecGroupObj* CFBamTSecGroupEditObj::create() {
		cfsec::ICFSecTSecGroupObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTSecGroupTableObj()->createTSecGroup( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecTSecGroupEditObj* CFBamTSecGroupEditObj::update() {
		getSchema()->getTSecGroupTableObj()->updateTSecGroup( this );
		return( NULL );
	}

	cfsec::ICFSecTSecGroupEditObj* CFBamTSecGroupEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTSecGroupTableObj()->deleteTSecGroup( this );
		return( NULL );
	}

	cfsec::ICFSecTSecGroupTableObj* CFBamTSecGroupEditObj::getTSecGroupTable() {
		return( orig->getSchema()->getTSecGroupTableObj() );
	}

	cfsec::ICFSecTSecGroupEditObj* CFBamTSecGroupEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecTSecGroupEditObj* CFBamTSecGroupEditObj::getTSecGroupEdit() {
		return( (cfsec::ICFSecTSecGroupEditObj*)this );
	}

	cfsec::ICFSecTSecGroupEditObj* CFBamTSecGroupEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamTSecGroupEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecTSecGroupObj* CFBamTSecGroupEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecTSecGroupObj* CFBamTSecGroupEditObj::getOrigAsTSecGroup() {
		return( dynamic_cast<cfsec::ICFSecTSecGroupObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamTSecGroupEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecTSecGroupBuff* CFBamTSecGroupEditObj::getBuff() {
		return( buff );
	}

	void CFBamTSecGroupEditObj::setBuff( cfsec::CFSecTSecGroupBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecTSecGroupPKey* CFBamTSecGroupEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamTSecGroupEditObj::setPKey( cfsec::CFSecTSecGroupPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamTSecGroupEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamTSecGroupEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamTSecGroupEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamTSecGroupEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int32_t CFBamTSecGroupEditObj::getRequiredTSecGroupId() {
		return( getPKey()->getRequiredTSecGroupId() );
	}

	const int32_t* CFBamTSecGroupEditObj::getRequiredTSecGroupIdReference() {
		return( getPKey()->getRequiredTSecGroupIdReference() );
	}

	const std::string& CFBamTSecGroupEditObj::getRequiredName() {
		return( getTSecGroupBuff()->getRequiredName() );
	}

	const std::string* CFBamTSecGroupEditObj::getRequiredNameReference() {
		return( getTSecGroupBuff()->getRequiredNameReference() );
	}

	void CFBamTSecGroupEditObj::setRequiredName( const std::string& value ) {
		if( getTSecGroupBuff()->getRequiredName() != value ) {
			getTSecGroupEditBuff()->setRequiredName( value );
		}
	}

	const bool CFBamTSecGroupEditObj::getRequiredIsVisible() {
		return( getTSecGroupBuff()->getRequiredIsVisible() );
	}

	const bool* CFBamTSecGroupEditObj::getRequiredIsVisibleReference() {
		return( getTSecGroupBuff()->getRequiredIsVisibleReference() );
	}

	void CFBamTSecGroupEditObj::setRequiredIsVisible( const bool value ) {
		if( getTSecGroupBuff()->getRequiredIsVisible() != value ) {
			getTSecGroupEditBuff()->setRequiredIsVisible( value );
		}
	}

	cfsec::ICFSecTenantObj* CFBamTSecGroupEditObj::getRequiredContainerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamTSecGroupEditObj::setRequiredContainerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getTSecGroupEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	std::vector<cfsec::ICFSecTSecGrpIncObj*> CFBamTSecGroupEditObj::getOptionalComponentsInclude( bool forceRead ) {
		std::vector<cfsec::ICFSecTSecGrpIncObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTSecGrpIncTableObj()->readTSecGrpIncByGroupIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredTSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecTSecGrpMembObj*> CFBamTSecGroupEditObj::getOptionalComponentsMember( bool forceRead ) {
		std::vector<cfsec::ICFSecTSecGrpMembObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTSecGrpMembTableObj()->readTSecGrpMembByGroupIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredTSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecTSecGrpIncObj*> CFBamTSecGroupEditObj::getRequiredChildrenIncByGroup( bool forceRead ) {
		std::vector<cfsec::ICFSecTSecGrpIncObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTSecGrpIncTableObj()->readTSecGrpIncByIncludeIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredTSecGroupId(),
			forceRead );
		return( retval );
	}

	void CFBamTSecGroupEditObj::copyPKeyToBuff() {
		cfsec::CFSecTSecGroupPKey* tablePKey = getPKey();
		cfsec::CFSecTSecGroupBuff* tableBuff = getTSecGroupEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredTSecGroupId( tablePKey->getRequiredTSecGroupId() );
	}

	void CFBamTSecGroupEditObj::copyBuffToPKey() {
		cfsec::CFSecTSecGroupPKey* tablePKey = getPKey();
		cfsec::CFSecTSecGroupBuff* tableBuff = getTSecGroupBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredTSecGroupId( tableBuff->getRequiredTSecGroupId() );
	}

	void CFBamTSecGroupEditObj::copyBuffToOrig() {
		cfsec::CFSecTSecGroupBuff* origBuff = getOrigAsTSecGroup()->getTSecGroupEditBuff();
		cfsec::CFSecTSecGroupBuff* myBuff = getTSecGroupBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamTSecGroupEditObj::copyOrigToBuff() {
		cfsec::CFSecTSecGroupBuff* origBuff = getOrigAsTSecGroup()->getTSecGroupBuff();
		cfsec::CFSecTSecGroupBuff* myBuff = getTSecGroupEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
