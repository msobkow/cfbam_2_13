// Description: C++18 edit object instance implementation for CFBam SchemaRef.

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
#include <cfbamobj/CFBamSchemaRefObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamSchemaRefEditObj.hpp>


namespace cfbam {

	const std::string CFBamSchemaRefEditObj::CLASS_NAME( "CFBamSchemaRefEditObj" );

	CFBamSchemaRefEditObj::CFBamSchemaRefEditObj( cfbam::ICFBamSchemaRefObj* argOrig )
	: ICFBamSchemaRefEditObj(),
	  CFBamScopeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamSchemaRefEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamSchemaRefEditObj::~CFBamSchemaRefEditObj() {
	}

	const std::string& CFBamSchemaRefEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamSchemaRefEditObj::getClassCode() const {
		return( cfbam::CFBamSchemaRefBuff::CLASS_CODE );
	}

	bool CFBamSchemaRefEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamSchemaRefEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaRefEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_SchemaId( "SchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_RefModelName( "RefModelName" );
		static const std::string S_IncludeRoot( "IncludeRoot" );
		static const std::string S_RefSchemaTenantId( "RefSchemaTenantId" );
		static const std::string S_RefSchemaId( "RefSchemaId" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaId, CFBamSchemaRefEditObj::getRequiredSchemaId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamSchemaRefEditObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_RefModelName, CFBamSchemaRefEditObj::getRequiredRefModelName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_IncludeRoot, CFBamSchemaRefEditObj::getRequiredIncludeRoot() ) );
		if( ! CFBamSchemaRefEditObj::isOptionalRefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RefSchemaTenantId, CFBamSchemaRefEditObj::getOptionalRefSchemaTenantIdValue() ) );
		}
		if( ! CFBamSchemaRefEditObj::isOptionalRefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RefSchemaId, CFBamSchemaRefEditObj::getOptionalRefSchemaIdValue() ) );
		}
		if( ! CFBamSchemaRefEditObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamSchemaRefEditObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamSchemaRefEditObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamSchemaRefEditObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamSchemaRefEditObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamSchemaRefEditObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamSchemaRefEditObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamSchemaRefEditObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamSchemaRefEditObj::getGenDefName() {
		return( cfbam::CFBamSchemaRefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSchemaRefEditObj::getScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchema();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSchemaRefEditObj::getObjScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchema();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSchemaRefEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSchemaRefEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSchemaRefEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamSchemaRefEditObj::getObjQualifiedName() {
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

	std::string CFBamSchemaRefEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamSchemaRefEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamSchemaRefObj* retobj = getSchema()->getSchemaRefTableObj()->realizeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamScopeObj* CFBamSchemaRefEditObj::create() {
		cfbam::ICFBamSchemaRefObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaRef()->getSchema() )->getSchemaRefTableObj()->createSchemaRef( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamSchemaRefEditObj::update() {
		getSchema()->getSchemaRefTableObj()->updateSchemaRef( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamSchemaRefEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSchemaRefTableObj()->deleteSchemaRef( this );
		return( NULL );
	}

	cfbam::ICFBamSchemaRefTableObj* CFBamSchemaRefEditObj::getSchemaRefTable() {
		return( orig->getSchema()->getSchemaRefTableObj() );
	}

	cfbam::ICFBamSchemaRefEditObj* CFBamSchemaRefEditObj::getSchemaRefEdit() {
		return( (cfbam::ICFBamSchemaRefEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamSchemaRefEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefEditObj::getOrigAsSchemaRef() {
		return( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamSchemaRefEditObj::getBuff() {
		return( buff );
	}

	void CFBamSchemaRefEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamScopeEditObj::setBuff( value );
		}
	}

	const int64_t CFBamSchemaRefEditObj::getRequiredSchemaId() {
		return( getSchemaRefBuff()->getRequiredSchemaId() );
	}

	const int64_t* CFBamSchemaRefEditObj::getRequiredSchemaIdReference() {
		return( getSchemaRefBuff()->getRequiredSchemaIdReference() );
	}

	const std::string& CFBamSchemaRefEditObj::getRequiredName() {
		return( getSchemaRefBuff()->getRequiredName() );
	}

	const std::string* CFBamSchemaRefEditObj::getRequiredNameReference() {
		return( getSchemaRefBuff()->getRequiredNameReference() );
	}

	void CFBamSchemaRefEditObj::setRequiredName( const std::string& value ) {
		if( getSchemaRefBuff()->getRequiredName() != value ) {
			getSchemaRefEditBuff()->setRequiredName( value );
		}
	}

	const std::string& CFBamSchemaRefEditObj::getRequiredRefModelName() {
		return( getSchemaRefBuff()->getRequiredRefModelName() );
	}

	const std::string* CFBamSchemaRefEditObj::getRequiredRefModelNameReference() {
		return( getSchemaRefBuff()->getRequiredRefModelNameReference() );
	}

	void CFBamSchemaRefEditObj::setRequiredRefModelName( const std::string& value ) {
		if( getSchemaRefBuff()->getRequiredRefModelName() != value ) {
			getSchemaRefEditBuff()->setRequiredRefModelName( value );
		}
	}

	const std::string& CFBamSchemaRefEditObj::getRequiredIncludeRoot() {
		return( getSchemaRefBuff()->getRequiredIncludeRoot() );
	}

	const std::string* CFBamSchemaRefEditObj::getRequiredIncludeRootReference() {
		return( getSchemaRefBuff()->getRequiredIncludeRootReference() );
	}

	void CFBamSchemaRefEditObj::setRequiredIncludeRoot( const std::string& value ) {
		if( getSchemaRefBuff()->getRequiredIncludeRoot() != value ) {
			getSchemaRefEditBuff()->setRequiredIncludeRoot( value );
		}
	}

	bool CFBamSchemaRefEditObj::isOptionalRefSchemaTenantIdNull() {
		return( getSchemaRefBuff()->isOptionalRefSchemaTenantIdNull() );
	}

	const int64_t CFBamSchemaRefEditObj::getOptionalRefSchemaTenantIdValue() {
		return( getSchemaRefBuff()->getOptionalRefSchemaTenantIdValue() );
	}

	const int64_t* CFBamSchemaRefEditObj::getOptionalRefSchemaTenantIdReference() {
		return( getSchemaRefBuff()->getOptionalRefSchemaTenantIdReference() );
	}

	bool CFBamSchemaRefEditObj::isOptionalRefSchemaIdNull() {
		return( getSchemaRefBuff()->isOptionalRefSchemaIdNull() );
	}

	const int64_t CFBamSchemaRefEditObj::getOptionalRefSchemaIdValue() {
		return( getSchemaRefBuff()->getOptionalRefSchemaIdValue() );
	}

	const int64_t* CFBamSchemaRefEditObj::getOptionalRefSchemaIdReference() {
		return( getSchemaRefBuff()->getOptionalRefSchemaIdReference() );
	}

	bool CFBamSchemaRefEditObj::isOptionalPrevTenantIdNull() {
		return( getSchemaRefBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamSchemaRefEditObj::getOptionalPrevTenantIdValue() {
		return( getSchemaRefBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamSchemaRefEditObj::getOptionalPrevTenantIdReference() {
		return( getSchemaRefBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamSchemaRefEditObj::isOptionalPrevIdNull() {
		return( getSchemaRefBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamSchemaRefEditObj::getOptionalPrevIdValue() {
		return( getSchemaRefBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamSchemaRefEditObj::getOptionalPrevIdReference() {
		return( getSchemaRefBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamSchemaRefEditObj::isOptionalNextTenantIdNull() {
		return( getSchemaRefBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamSchemaRefEditObj::getOptionalNextTenantIdValue() {
		return( getSchemaRefBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamSchemaRefEditObj::getOptionalNextTenantIdReference() {
		return( getSchemaRefBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamSchemaRefEditObj::isOptionalNextIdNull() {
		return( getSchemaRefBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamSchemaRefEditObj::getOptionalNextIdValue() {
		return( getSchemaRefBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamSchemaRefEditObj::getOptionalNextIdReference() {
		return( getSchemaRefBuff()->getOptionalNextIdReference() );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaRefEditObj::getRequiredContainerSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaRef()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getPKey()->getRequiredTenantId(),
					getSchemaRefBuff()->getRequiredSchemaId() );
		}
		return( retobj );
	}

	void CFBamSchemaRefEditObj::setRequiredContainerSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getSchemaRefEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getSchemaRefEditBuff()->setRequiredSchemaId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaRefEditObj::getOptionalLookupRefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getSchemaRefBuff()->isOptionalRefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getSchemaRefBuff()->isOptionalRefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaRef()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getSchemaRefBuff()->getOptionalRefSchemaTenantIdValue(),
					getSchemaRefBuff()->getOptionalRefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamSchemaRefEditObj::setOptionalLookupRefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getSchemaRefEditBuff()->setOptionalRefSchemaTenantIdValue( value->getRequiredTenantId() );
				getSchemaRefEditBuff()->setOptionalRefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getSchemaRefEditBuff()->setOptionalRefSchemaTenantIdNull();
				getSchemaRefEditBuff()->setOptionalRefSchemaIdNull();
			}
		}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefEditObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamSchemaRefObj* retobj = NULL;
		bool anyMissing = false;

			if( getSchemaRefBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getSchemaRefBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaRef()->getSchema() )->getSchemaRefTableObj()->readSchemaRefByIdIdx( getSchemaRefBuff()->getOptionalPrevTenantIdValue(),
					getSchemaRefBuff()->getOptionalPrevIdValue() );
		}
		return( retobj );
	}

	void CFBamSchemaRefEditObj::setOptionalLookupPrev( cfbam::ICFBamSchemaRefObj* value ) {
			
			if( value != NULL ) {
				getSchemaRefEditBuff()->setOptionalPrevTenantIdValue( value->getRequiredTenantId() );
				getSchemaRefEditBuff()->setOptionalPrevIdValue( value->getRequiredId() );
			}
			else {
				getSchemaRefEditBuff()->setOptionalPrevTenantIdNull();
				getSchemaRefEditBuff()->setOptionalPrevIdNull();
			}
		}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefEditObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamSchemaRefObj* retobj = NULL;
		bool anyMissing = false;

			if( getSchemaRefBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getSchemaRefBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaRef()->getSchema() )->getSchemaRefTableObj()->readSchemaRefByIdIdx( getSchemaRefBuff()->getOptionalNextTenantIdValue(),
					getSchemaRefBuff()->getOptionalNextIdValue() );
		}
		return( retobj );
	}

	void CFBamSchemaRefEditObj::setOptionalLookupNext( cfbam::ICFBamSchemaRefObj* value ) {
			
			if( value != NULL ) {
				getSchemaRefEditBuff()->setOptionalNextTenantIdValue( value->getRequiredTenantId() );
				getSchemaRefEditBuff()->setOptionalNextIdValue( value->getRequiredId() );
			}
			else {
				getSchemaRefEditBuff()->setOptionalNextTenantIdNull();
				getSchemaRefEditBuff()->setOptionalNextIdNull();
			}
		}

	void CFBamSchemaRefEditObj::copyBuffToOrig() {
		cfbam::CFBamSchemaRefBuff* origBuff = getOrigAsSchemaRef()->getSchemaRefEditBuff();
		cfbam::CFBamSchemaRefBuff* myBuff = getSchemaRefBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamSchemaRefEditObj::copyOrigToBuff() {
		cfbam::CFBamSchemaRefBuff* origBuff = getOrigAsSchemaRef()->getSchemaRefBuff();
		cfbam::CFBamSchemaRefBuff* myBuff = getSchemaRefEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
