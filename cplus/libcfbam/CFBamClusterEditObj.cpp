// Description: C++18 edit object instance implementation for CFBam Cluster.

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
#include <cfbamobj/CFBamClusterObj.hpp>
#include <cfbamobj/CFBamClusterEditObj.hpp>


namespace cfbam {

	const std::string CFBamClusterEditObj::CLASS_NAME( "CFBamClusterEditObj" );

	CFBamClusterEditObj::CFBamClusterEditObj( cfsec::ICFSecClusterObj* argOrig )
	: ICFBamClusterEditObj(),
	  ICFSecClusterEditObj(),
	  ICFIntClusterEditObj()
	{
		static const std::string S_ProcName( "CFBamClusterEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecClusterBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecClusterBuff*>( origBuff->clone() );
	}

	CFBamClusterEditObj::~CFBamClusterEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamClusterEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamClusterEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getClusterBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamClusterEditObj::getCreatedAt() {
		return( getClusterBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamClusterEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getClusterBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamClusterEditObj::getUpdatedAt() {
		return( getClusterBuff()->getUpdatedAt() );
	}

	void CFBamClusterEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getClusterEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamClusterEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getClusterEditBuff()->setCreatedAt( value );
	}

	void CFBamClusterEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getClusterEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamClusterEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getClusterEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamClusterEditObj::getClassCode() const {
		return( cfsec::CFSecClusterBuff::CLASS_CODE );
	}

	bool CFBamClusterEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecClusterBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamClusterEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClusterEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamClusterEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamClusterEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamClusterEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamClusterEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamClusterEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamClusterEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FullDomName, CFBamClusterEditObj::getRequiredFullDomName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamClusterEditObj::getRequiredDescription() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamClusterEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamClusterEditObj::setRequiredRevision( int32_t value ) {
		getClusterEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamClusterEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredFullDomName() );
		return( objName );
	}

	const std::string CFBamClusterEditObj::getGenDefName() {
		return( cfsec::CFSecClusterBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamClusterEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamClusterEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamClusterEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamClusterEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamClusterEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamClusterEditObj::getObjQualifiedName() {
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

	std::string CFBamClusterEditObj::getObjFullName() {
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

	cfsec::ICFSecClusterObj* CFBamClusterEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecClusterObj* retobj = getSchema()->getClusterTableObj()->realizeCluster( dynamic_cast<cfsec::ICFSecClusterObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecClusterObj* CFBamClusterEditObj::read( bool forceRead ) {
		cfsec::ICFSecClusterObj* retval = getOrigAsCluster()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecClusterObj* CFBamClusterEditObj::create() {
		cfsec::ICFSecClusterObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsCluster()->getSchema() )->getClusterTableObj()->createCluster( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecClusterEditObj* CFBamClusterEditObj::update() {
		getSchema()->getClusterTableObj()->updateCluster( this );
		return( NULL );
	}

	cfsec::ICFSecClusterEditObj* CFBamClusterEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getClusterTableObj()->deleteCluster( this );
		return( NULL );
	}

	cfsec::ICFSecClusterTableObj* CFBamClusterEditObj::getClusterTable() {
		return( orig->getSchema()->getClusterTableObj() );
	}

	cfsec::ICFSecClusterEditObj* CFBamClusterEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecClusterEditObj* CFBamClusterEditObj::getClusterEdit() {
		return( (cfsec::ICFSecClusterEditObj*)this );
	}

	cfsec::ICFSecClusterEditObj* CFBamClusterEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamClusterEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecClusterObj* CFBamClusterEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecClusterObj* CFBamClusterEditObj::getOrigAsCluster() {
		return( dynamic_cast<cfsec::ICFSecClusterObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamClusterEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecClusterBuff* CFBamClusterEditObj::getBuff() {
		return( buff );
	}

	void CFBamClusterEditObj::setBuff( cfsec::CFSecClusterBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecClusterPKey* CFBamClusterEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamClusterEditObj::setPKey( cfsec::CFSecClusterPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamClusterEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamClusterEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamClusterEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamClusterEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFBamClusterEditObj::getRequiredFullDomName() {
		return( getClusterBuff()->getRequiredFullDomName() );
	}

	const std::string* CFBamClusterEditObj::getRequiredFullDomNameReference() {
		return( getClusterBuff()->getRequiredFullDomNameReference() );
	}

	void CFBamClusterEditObj::setRequiredFullDomName( const std::string& value ) {
		if( getClusterBuff()->getRequiredFullDomName() != value ) {
			getClusterEditBuff()->setRequiredFullDomName( value );
		}
	}

	const std::string& CFBamClusterEditObj::getRequiredDescription() {
		return( getClusterBuff()->getRequiredDescription() );
	}

	const std::string* CFBamClusterEditObj::getRequiredDescriptionReference() {
		return( getClusterBuff()->getRequiredDescriptionReference() );
	}

	void CFBamClusterEditObj::setRequiredDescription( const std::string& value ) {
		if( getClusterBuff()->getRequiredDescription() != value ) {
			getClusterEditBuff()->setRequiredDescription( value );
		}
	}

	std::vector<cfsec::ICFSecHostNodeObj*> CFBamClusterEditObj::getOptionalComponentsHostNode( bool forceRead ) {
		std::vector<cfsec::ICFSecHostNodeObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsCluster()->getSchema() )->getHostNodeTableObj()->readHostNodeByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecTenantObj*> CFBamClusterEditObj::getOptionalComponentsTenant( bool forceRead ) {
		std::vector<cfsec::ICFSecTenantObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsCluster()->getSchema() )->getTenantTableObj()->readTenantByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecSecAppObj*> CFBamClusterEditObj::getOptionalComponentsSecApp( bool forceRead ) {
		std::vector<cfsec::ICFSecSecAppObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsCluster()->getSchema() )->getSecAppTableObj()->readSecAppByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecSecGroupObj*> CFBamClusterEditObj::getOptionalComponentsSecGroup( bool forceRead ) {
		std::vector<cfsec::ICFSecSecGroupObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsCluster()->getSchema() )->getSecGroupTableObj()->readSecGroupByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfsec::ICFSecSysClusterObj*> CFBamClusterEditObj::getOptionalComponentsSysCluster( bool forceRead ) {
		std::vector<cfsec::ICFSecSysClusterObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsCluster()->getSchema() )->getSysClusterTableObj()->readSysClusterByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamClusterEditObj::copyPKeyToBuff() {
		cfsec::CFSecClusterPKey* tablePKey = getPKey();
		cfsec::CFSecClusterBuff* tableBuff = getClusterEditBuff();
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamClusterEditObj::copyBuffToPKey() {
		cfsec::CFSecClusterPKey* tablePKey = getPKey();
		cfsec::CFSecClusterBuff* tableBuff = getClusterBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamClusterEditObj::copyBuffToOrig() {
		cfsec::CFSecClusterBuff* origBuff = getOrigAsCluster()->getClusterEditBuff();
		cfsec::CFSecClusterBuff* myBuff = getClusterBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamClusterEditObj::copyOrigToBuff() {
		cfsec::CFSecClusterBuff* origBuff = getOrigAsCluster()->getClusterBuff();
		cfsec::CFSecClusterBuff* myBuff = getClusterEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
