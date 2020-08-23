// Description: C++18 edit object instance implementation for CFBam ClearDep.

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
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamClearDepEditObj.hpp>


namespace cfbam {

	const std::string CFBamClearDepEditObj::CLASS_NAME( "CFBamClearDepEditObj" );

	CFBamClearDepEditObj::CFBamClearDepEditObj( cfbam::ICFBamClearDepObj* argOrig )
	: ICFBamClearDepEditObj(),
	  CFBamScopeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamClearDepEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamClearDepEditObj::~CFBamClearDepEditObj() {
	}

	const std::string& CFBamClearDepEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClearDepEditObj::getClassCode() const {
		return( cfbam::CFBamClearDepBuff::CLASS_CODE );
	}

	bool CFBamClearDepEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamClearDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamClearDepEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearDepEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_RelationId( "RelationId" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamClearDepEditObj::getRequiredRelationId() ) );
		if( ! CFBamClearDepEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamClearDepEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamClearDepEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamClearDepEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamClearDepEditObj::getGenDefName() {
		return( cfbam::CFBamClearDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamClearDepEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamClearDepEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamClearDepEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamClearDepEditObj::getObjQualifiedName() {
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
			else if( container->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
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

	std::string CFBamClearDepEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamClearDepEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamClearDepObj* retobj = getSchema()->getClearDepTableObj()->realizeClearDep( dynamic_cast<cfbam::ICFBamClearDepObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamClearDepEditObj::create() {
		cfbam::ICFBamClearDepObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearDep()->getSchema() )->getClearDepTableObj()->createClearDep( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearDepEditObj::update() {
		getSchema()->getClearDepTableObj()->updateClearDep( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearDepEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getClearDepTableObj()->deleteClearDep( this );
		return( NULL );
	}

	cfbam::ICFBamClearDepTableObj* CFBamClearDepEditObj::getClearDepTable() {
		return( orig->getSchema()->getClearDepTableObj() );
	}

	cfbam::ICFBamClearDepEditObj* CFBamClearDepEditObj::getClearDepEdit() {
		return( (cfbam::ICFBamClearDepEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearDepEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamClearDepObj* CFBamClearDepEditObj::getOrigAsClearDep() {
		return( dynamic_cast<cfbam::ICFBamClearDepObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamClearDepEditObj::getBuff() {
		return( buff );
	}

	void CFBamClearDepEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamScopeEditObj::setBuff( value );
		}
	}

	const int64_t CFBamClearDepEditObj::getRequiredRelationId() {
		return( getClearDepBuff()->getRequiredRelationId() );
	}

	const int64_t* CFBamClearDepEditObj::getRequiredRelationIdReference() {
		return( getClearDepBuff()->getRequiredRelationIdReference() );
	}

	bool CFBamClearDepEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getClearDepBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamClearDepEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getClearDepBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamClearDepEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getClearDepBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamClearDepEditObj::isOptionalDefSchemaIdNull() {
		return( getClearDepBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamClearDepEditObj::getOptionalDefSchemaIdValue() {
		return( getClearDepBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamClearDepEditObj::getOptionalDefSchemaIdReference() {
		return( getClearDepBuff()->getOptionalDefSchemaIdReference() );
	}

	cfbam::ICFBamRelationObj* CFBamClearDepEditObj::getRequiredLookupRelation( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearDep()->getSchema() )->getRelationTableObj()->readRelationByIdIdx( getPKey()->getRequiredTenantId(),
					getClearDepBuff()->getRequiredRelationId() );
		}
		return( retobj );
	}

	void CFBamClearDepEditObj::setRequiredLookupRelation( cfbam::ICFBamRelationObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getClearDepEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getClearDepEditBuff()->setRequiredRelationId( value->getRequiredId() );
			}
			else {
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamClearDepEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getClearDepBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getClearDepBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearDep()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getClearDepBuff()->getOptionalDefSchemaTenantIdValue(),
					getClearDepBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamClearDepEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getClearDepEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getClearDepEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getClearDepEditBuff()->setOptionalDefSchemaTenantIdNull();
				getClearDepEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	void CFBamClearDepEditObj::copyBuffToOrig() {
		cfbam::CFBamClearDepBuff* origBuff = getOrigAsClearDep()->getClearDepEditBuff();
		cfbam::CFBamClearDepBuff* myBuff = getClearDepBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamClearDepEditObj::copyOrigToBuff() {
		cfbam::CFBamClearDepBuff* origBuff = getOrigAsClearDep()->getClearDepBuff();
		cfbam::CFBamClearDepBuff* myBuff = getClearDepEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
