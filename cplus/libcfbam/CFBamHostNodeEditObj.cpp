// Description: C++18 edit object instance implementation for CFBam HostNode.

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
#include <cfbamobj/CFBamHostNodeEditObj.hpp>


namespace cfbam {

	const std::string CFBamHostNodeEditObj::CLASS_NAME( "CFBamHostNodeEditObj" );

	CFBamHostNodeEditObj::CFBamHostNodeEditObj( cfsec::ICFSecHostNodeObj* argOrig )
	: ICFBamHostNodeEditObj(),
	  ICFSecHostNodeEditObj(),
	  ICFIntHostNodeEditObj()
	{
		static const std::string S_ProcName( "CFBamHostNodeEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecHostNodeBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( origBuff->clone() );
	}

	CFBamHostNodeEditObj::~CFBamHostNodeEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamHostNodeEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamHostNodeEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getHostNodeBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamHostNodeEditObj::getCreatedAt() {
		return( getHostNodeBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamHostNodeEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getHostNodeBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamHostNodeEditObj::getUpdatedAt() {
		return( getHostNodeBuff()->getUpdatedAt() );
	}

	void CFBamHostNodeEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getHostNodeEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamHostNodeEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getHostNodeEditBuff()->setCreatedAt( value );
	}

	void CFBamHostNodeEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getHostNodeEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamHostNodeEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getHostNodeEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamHostNodeEditObj::getClassCode() const {
		return( cfsec::CFSecHostNodeBuff::CLASS_CODE );
	}

	bool CFBamHostNodeEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamHostNodeEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamHostNodeEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamHostNodeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamHostNodeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamHostNodeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamHostNodeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamHostNodeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFBamHostNodeEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_HostNodeId, CFBamHostNodeEditObj::getRequiredHostNodeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamHostNodeEditObj::getRequiredDescription() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HostName, CFBamHostNodeEditObj::getRequiredHostName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamHostNodeEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamHostNodeEditObj::setRequiredRevision( int32_t value ) {
		getHostNodeEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamHostNodeEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredHostName() );
		return( objName );
	}

	const std::string CFBamHostNodeEditObj::getGenDefName() {
		return( cfsec::CFSecHostNodeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamHostNodeEditObj::getScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamHostNodeEditObj::getObjScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamHostNodeEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamHostNodeEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamHostNodeEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamHostNodeEditObj::getObjQualifiedName() {
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

	std::string CFBamHostNodeEditObj::getObjFullName() {
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

	cfsec::ICFSecHostNodeObj* CFBamHostNodeEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecHostNodeObj* retobj = getSchema()->getHostNodeTableObj()->realizeHostNode( dynamic_cast<cfsec::ICFSecHostNodeObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecHostNodeObj* CFBamHostNodeEditObj::read( bool forceRead ) {
		cfsec::ICFSecHostNodeObj* retval = getOrigAsHostNode()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecHostNodeObj* CFBamHostNodeEditObj::create() {
		cfsec::ICFSecHostNodeObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsHostNode()->getSchema() )->getHostNodeTableObj()->createHostNode( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecHostNodeEditObj* CFBamHostNodeEditObj::update() {
		getSchema()->getHostNodeTableObj()->updateHostNode( this );
		return( NULL );
	}

	cfsec::ICFSecHostNodeEditObj* CFBamHostNodeEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getHostNodeTableObj()->deleteHostNode( this );
		return( NULL );
	}

	cfsec::ICFSecHostNodeTableObj* CFBamHostNodeEditObj::getHostNodeTable() {
		return( orig->getSchema()->getHostNodeTableObj() );
	}

	cfsec::ICFSecHostNodeEditObj* CFBamHostNodeEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecHostNodeEditObj* CFBamHostNodeEditObj::getHostNodeEdit() {
		return( (cfsec::ICFSecHostNodeEditObj*)this );
	}

	cfsec::ICFSecHostNodeEditObj* CFBamHostNodeEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamHostNodeEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecHostNodeObj* CFBamHostNodeEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecHostNodeObj* CFBamHostNodeEditObj::getOrigAsHostNode() {
		return( dynamic_cast<cfsec::ICFSecHostNodeObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamHostNodeEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecHostNodeBuff* CFBamHostNodeEditObj::getBuff() {
		return( buff );
	}

	void CFBamHostNodeEditObj::setBuff( cfsec::CFSecHostNodeBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecHostNodePKey* CFBamHostNodeEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamHostNodeEditObj::setPKey( cfsec::CFSecHostNodePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamHostNodeEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamHostNodeEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamHostNodeEditObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFBamHostNodeEditObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFBamHostNodeEditObj::getRequiredHostNodeId() {
		return( getPKey()->getRequiredHostNodeId() );
	}

	const int64_t* CFBamHostNodeEditObj::getRequiredHostNodeIdReference() {
		return( getPKey()->getRequiredHostNodeIdReference() );
	}

	const std::string& CFBamHostNodeEditObj::getRequiredDescription() {
		return( getHostNodeBuff()->getRequiredDescription() );
	}

	const std::string* CFBamHostNodeEditObj::getRequiredDescriptionReference() {
		return( getHostNodeBuff()->getRequiredDescriptionReference() );
	}

	void CFBamHostNodeEditObj::setRequiredDescription( const std::string& value ) {
		if( getHostNodeBuff()->getRequiredDescription() != value ) {
			getHostNodeEditBuff()->setRequiredDescription( value );
		}
	}

	const std::string& CFBamHostNodeEditObj::getRequiredHostName() {
		return( getHostNodeBuff()->getRequiredHostName() );
	}

	const std::string* CFBamHostNodeEditObj::getRequiredHostNameReference() {
		return( getHostNodeBuff()->getRequiredHostNameReference() );
	}

	void CFBamHostNodeEditObj::setRequiredHostName( const std::string& value ) {
		if( getHostNodeBuff()->getRequiredHostName() != value ) {
			getHostNodeEditBuff()->setRequiredHostName( value );
		}
	}

	cfsec::ICFSecClusterObj* CFBamHostNodeEditObj::getRequiredContainerCluster( bool forceRead ) {
		cfsec::ICFSecClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsHostNode()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFBamHostNodeEditObj::setRequiredContainerCluster( cfsec::ICFSecClusterObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredId() );
				getHostNodeEditBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	std::vector<cfsec::ICFSecServiceObj*> CFBamHostNodeEditObj::getOptionalComponentsService( bool forceRead ) {
		std::vector<cfsec::ICFSecServiceObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsHostNode()->getSchema() )->getServiceTableObj()->readServiceByHostIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredHostNodeId(),
			forceRead );
		return( retval );
	}

	void CFBamHostNodeEditObj::copyPKeyToBuff() {
		cfsec::CFSecHostNodePKey* tablePKey = getPKey();
		cfsec::CFSecHostNodeBuff* tableBuff = getHostNodeEditBuff();
		tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
		tableBuff->setRequiredHostNodeId( tablePKey->getRequiredHostNodeId() );
	}

	void CFBamHostNodeEditObj::copyBuffToPKey() {
		cfsec::CFSecHostNodePKey* tablePKey = getPKey();
		cfsec::CFSecHostNodeBuff* tableBuff = getHostNodeBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredHostNodeId( tableBuff->getRequiredHostNodeId() );
	}

	void CFBamHostNodeEditObj::copyBuffToOrig() {
		cfsec::CFSecHostNodeBuff* origBuff = getOrigAsHostNode()->getHostNodeEditBuff();
		cfsec::CFSecHostNodeBuff* myBuff = getHostNodeBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamHostNodeEditObj::copyOrigToBuff() {
		cfsec::CFSecHostNodeBuff* origBuff = getOrigAsHostNode()->getHostNodeBuff();
		cfsec::CFSecHostNodeBuff* myBuff = getHostNodeEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
