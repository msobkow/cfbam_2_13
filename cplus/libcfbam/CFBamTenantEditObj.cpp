// Description: C++18 edit object instance implementation for CFBam Tenant.

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
#include <cfbamobj/CFBamTenantObj.hpp>
#include <cfbamobj/CFBamTenantEditObj.hpp>


namespace cfbam {

	const std::string CFBamTenantEditObj::CLASS_NAME( "CFBamTenantEditObj" );

	CFBamTenantEditObj::CFBamTenantEditObj( cfsec::ICFSecTenantObj* argOrig )
	: ICFBamTenantEditObj(),
	  ICFSecTenantEditObj(),
	  ICFIntTenantEditObj()
	{
		static const std::string S_ProcName( "CFBamTenantEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecTenantBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecTenantBuff*>( origBuff->clone() );
	}

	CFBamTenantEditObj::~CFBamTenantEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamTenantEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamTenantEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTenantBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamTenantEditObj::getCreatedAt() {
		return( getTenantBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamTenantEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTenantBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamTenantEditObj::getUpdatedAt() {
		return( getTenantBuff()->getUpdatedAt() );
	}

	void CFBamTenantEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getTenantEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTenantEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getTenantEditBuff()->setCreatedAt( value );
	}

	void CFBamTenantEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getTenantEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamTenantEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getTenantEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamTenantEditObj::getClassCode() const {
		return( cfsec::CFSecTenantBuff::CLASS_CODE );
	}

	bool CFBamTenantEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecTenantBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamTenantEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTenantEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TenantName( "TenantName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamTenantEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamTenantEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamTenantEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamTenantEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamTenantEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFBamTenantEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamTenantEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TenantName, CFBamTenantEditObj::getRequiredTenantName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamTenantEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamTenantEditObj::setRequiredRevision( int32_t value ) {
		getTenantEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamTenantEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredTenantName() );
		return( objName );
	}

	const std::string CFBamTenantEditObj::getGenDefName() {
		return( cfsec::CFSecTenantBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTenantEditObj::getScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTenantEditObj::getObjScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTenantEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTenantEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTenantEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTldTableObj()->readTldByLookupNameIdx( getRequiredId(),
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

	std::string CFBamTenantEditObj::getObjQualifiedName() {
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

	std::string CFBamTenantEditObj::getObjFullName() {
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

	cfsec::ICFSecTenantObj* CFBamTenantEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecTenantObj* retobj = getSchema()->getTenantTableObj()->realizeTenant( dynamic_cast<cfsec::ICFSecTenantObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecTenantObj* CFBamTenantEditObj::read( bool forceRead ) {
		cfsec::ICFSecTenantObj* retval = getOrigAsTenant()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecTenantObj* CFBamTenantEditObj::create() {
		cfsec::ICFSecTenantObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTenant()->getSchema() )->getTenantTableObj()->createTenant( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecTenantEditObj* CFBamTenantEditObj::update() {
		getSchema()->getTenantTableObj()->updateTenant( this );
		return( NULL );
	}

	cfsec::ICFSecTenantEditObj* CFBamTenantEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTenantTableObj()->deleteTenant( this );
		return( NULL );
	}

	cfsec::ICFSecTenantTableObj* CFBamTenantEditObj::getTenantTable() {
		return( orig->getSchema()->getTenantTableObj() );
	}

	cfsec::ICFSecTenantEditObj* CFBamTenantEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecTenantEditObj* CFBamTenantEditObj::getTenantEdit() {
		return( (cfsec::ICFSecTenantEditObj*)this );
	}

	cfsec::ICFSecTenantEditObj* CFBamTenantEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamTenantEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecTenantObj* CFBamTenantEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecTenantObj* CFBamTenantEditObj::getOrigAsTenant() {
		return( dynamic_cast<cfsec::ICFSecTenantObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamTenantEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecTenantBuff* CFBamTenantEditObj::getBuff() {
		return( buff );
	}

	void CFBamTenantEditObj::setBuff( cfsec::CFSecTenantBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecTenantPKey* CFBamTenantEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamTenantEditObj::setPKey( cfsec::CFSecTenantPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamTenantEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamTenantEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamTenantEditObj::getRequiredClusterId() {
		return( getTenantBuff()->getRequiredClusterId() );
	}

	const int64_t* CFBamTenantEditObj::getRequiredClusterIdReference() {
		return( getTenantBuff()->getRequiredClusterIdReference() );
	}

	const int64_t CFBamTenantEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamTenantEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFBamTenantEditObj::getRequiredTenantName() {
		return( getTenantBuff()->getRequiredTenantName() );
	}

	const std::string* CFBamTenantEditObj::getRequiredTenantNameReference() {
		return( getTenantBuff()->getRequiredTenantNameReference() );
	}

	void CFBamTenantEditObj::setRequiredTenantName( const std::string& value ) {
		if( getTenantBuff()->getRequiredTenantName() != value ) {
			getTenantEditBuff()->setRequiredTenantName( value );
		}
	}

	cfsec::ICFSecClusterObj* CFBamTenantEditObj::getRequiredContainerCluster( bool forceRead ) {
		cfsec::ICFSecClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTenant()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getTenantBuff()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFBamTenantEditObj::setRequiredContainerCluster( cfsec::ICFSecClusterObj* value ) {
			
			if( value != NULL ) {
				getTenantEditBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	std::vector<cfsec::ICFSecTSecGroupObj*> CFBamTenantEditObj::getOptionalComponentsTSecGroup( bool forceRead ) {
		std::vector<cfsec::ICFSecTSecGroupObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTenant()->getSchema() )->getTSecGroupTableObj()->readTSecGroupByTenantIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfint::ICFIntTldObj*> CFBamTenantEditObj::getOptionalComponentsTld( bool forceRead ) {
		std::vector<cfint::ICFIntTldObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTenant()->getSchema() )->getTldTableObj()->readTldByTenantIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamSchemaDefObj*> CFBamTenantEditObj::getOptionalComponentsSchema( bool forceRead ) {
		std::vector<cfbam::ICFBamSchemaDefObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTenant()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByCTenantIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamTenantEditObj::copyPKeyToBuff() {
		cfsec::CFSecTenantPKey* tablePKey = getPKey();
		cfsec::CFSecTenantBuff* tableBuff = getTenantEditBuff();
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamTenantEditObj::copyBuffToPKey() {
		cfsec::CFSecTenantPKey* tablePKey = getPKey();
		cfsec::CFSecTenantBuff* tableBuff = getTenantBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamTenantEditObj::copyBuffToOrig() {
		cfsec::CFSecTenantBuff* origBuff = getOrigAsTenant()->getTenantEditBuff();
		cfsec::CFSecTenantBuff* myBuff = getTenantBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamTenantEditObj::copyOrigToBuff() {
		cfsec::CFSecTenantBuff* origBuff = getOrigAsTenant()->getTenantBuff();
		cfsec::CFSecTenantBuff* myBuff = getTenantEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
