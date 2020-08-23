// Description: C++18 edit object instance implementation for CFBam Scope.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
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
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>


namespace cfbam {

	const std::string CFBamScopeEditObj::CLASS_NAME( "CFBamScopeEditObj" );

	CFBamScopeEditObj::CFBamScopeEditObj( cfbam::ICFBamScopeObj* argOrig )
	: ICFBamScopeEditObj()
	{
		static const std::string S_ProcName( "CFBamScopeEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfbam::CFBamScopeBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfbam::CFBamScopeBuff*>( origBuff->clone() );
	}

	CFBamScopeEditObj::~CFBamScopeEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamScopeEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamScopeEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getScopeBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamScopeEditObj::getCreatedAt() {
		return( getScopeBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamScopeEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getScopeBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamScopeEditObj::getUpdatedAt() {
		return( getScopeBuff()->getUpdatedAt() );
	}

	void CFBamScopeEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getScopeEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamScopeEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getScopeEditBuff()->setCreatedAt( value );
	}

	void CFBamScopeEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getScopeEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamScopeEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getScopeEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamScopeEditObj::getClassCode() const {
		return( cfbam::CFBamScopeBuff::CLASS_CODE );
	}

	bool CFBamScopeEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamScopeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamScopeEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamScopeEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamScopeEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamScopeEditObj::setRequiredRevision( int32_t value ) {
		getScopeEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamScopeEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFBamScopeEditObj::getGenDefName() {
		return( cfbam::CFBamScopeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamScopeEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamScopeEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamScopeEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamScopeEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamScopeEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamScopeEditObj::getObjQualifiedName() {
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

	std::string CFBamScopeEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamScopeEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamScopeObj* retobj = getSchema()->getScopeTableObj()->realizeScope( dynamic_cast<cfbam::ICFBamScopeObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamScopeEditObj::read( bool forceRead ) {
		cfbam::ICFBamScopeObj* retval = getOrigAsScope()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfbam::ICFBamScopeObj* CFBamScopeEditObj::create() {
		cfbam::ICFBamScopeObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsScope()->getSchema() )->getScopeTableObj()->createScope( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamScopeEditObj::update() {
		getSchema()->getScopeTableObj()->updateScope( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamScopeEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getScopeTableObj()->deleteScope( this );
		return( NULL );
	}

	cfbam::ICFBamScopeTableObj* CFBamScopeEditObj::getScopeTable() {
		return( orig->getSchema()->getScopeTableObj() );
	}

	cfbam::ICFBamScopeEditObj* CFBamScopeEditObj::getEdit() {
		return( this );
	}

	cfbam::ICFBamScopeEditObj* CFBamScopeEditObj::getScopeEdit() {
		return( (cfbam::ICFBamScopeEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamScopeEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamScopeEditObj::endEdit() {
		orig->endEdit();
	}

	cfbam::ICFBamScopeObj* CFBamScopeEditObj::getOrig() {
		return( orig );
	}

	cfbam::ICFBamScopeObj* CFBamScopeEditObj::getOrigAsScope() {
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( orig ) );
	}

	cfbam::ICFBamSchemaObj* CFBamScopeEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfbam::CFBamScopeBuff* CFBamScopeEditObj::getBuff() {
		return( buff );
	}

	void CFBamScopeEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfbam::CFBamScopePKey* CFBamScopeEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamScopeEditObj::setPKey( cfbam::CFBamScopePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamScopeEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamScopeEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamScopeEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamScopeEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamScopeEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamScopeEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	cfsec::ICFSecTenantObj* CFBamScopeEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsScope()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamScopeEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getScopeEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	void CFBamScopeEditObj::copyPKeyToBuff() {
		cfbam::CFBamScopePKey* tablePKey = getPKey();
		cfbam::CFBamScopeBuff* tableBuff = getScopeEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamScopeEditObj::copyBuffToPKey() {
		cfbam::CFBamScopePKey* tablePKey = getPKey();
		cfbam::CFBamScopeBuff* tableBuff = getScopeBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamScopeEditObj::copyBuffToOrig() {
		cfbam::CFBamScopeBuff* origBuff = getOrigAsScope()->getScopeEditBuff();
		cfbam::CFBamScopeBuff* myBuff = getScopeBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamScopeEditObj::copyOrigToBuff() {
		cfbam::CFBamScopeBuff* origBuff = getOrigAsScope()->getScopeBuff();
		cfbam::CFBamScopeBuff* myBuff = getScopeEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
