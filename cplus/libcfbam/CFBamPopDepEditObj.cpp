// Description: C++18 edit object instance implementation for CFBam PopDep.

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
#include <cfbamobj/CFBamPopDepObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamPopDepEditObj.hpp>


namespace cfbam {

	const std::string CFBamPopDepEditObj::CLASS_NAME( "CFBamPopDepEditObj" );

	CFBamPopDepEditObj::CFBamPopDepEditObj( cfbam::ICFBamPopDepObj* argOrig )
	: ICFBamPopDepEditObj(),
	  CFBamScopeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamPopDepEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamPopDepEditObj::~CFBamPopDepEditObj() {
	}

	const std::string& CFBamPopDepEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopDepEditObj::getClassCode() const {
		return( cfbam::CFBamPopDepBuff::CLASS_CODE );
	}

	bool CFBamPopDepEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamPopDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamPopDepEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopDepEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_RelationTenantId( "RelationTenantId" );
		static const std::string S_RelationId( "RelationId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		if( ! CFBamPopDepEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamPopDepEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamPopDepEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamPopDepEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationTenantId, CFBamPopDepEditObj::getRequiredRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamPopDepEditObj::getRequiredRelationId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamPopDepEditObj::getGenDefName() {
		return( cfbam::CFBamPopDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamPopDepEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamPopDepEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamPopDepEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamPopDepEditObj::getObjQualifiedName() {
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

	std::string CFBamPopDepEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamPopDepEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamPopDepObj* retobj = getSchema()->getPopDepTableObj()->realizePopDep( dynamic_cast<cfbam::ICFBamPopDepObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamPopDepEditObj::create() {
		cfbam::ICFBamPopDepObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopDep()->getSchema() )->getPopDepTableObj()->createPopDep( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopDepEditObj::update() {
		getSchema()->getPopDepTableObj()->updatePopDep( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopDepEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getPopDepTableObj()->deletePopDep( this );
		return( NULL );
	}

	cfbam::ICFBamPopDepTableObj* CFBamPopDepEditObj::getPopDepTable() {
		return( orig->getSchema()->getPopDepTableObj() );
	}

	cfbam::ICFBamPopDepEditObj* CFBamPopDepEditObj::getPopDepEdit() {
		return( (cfbam::ICFBamPopDepEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopDepEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamPopDepObj* CFBamPopDepEditObj::getOrigAsPopDep() {
		return( dynamic_cast<cfbam::ICFBamPopDepObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamPopDepEditObj::getBuff() {
		return( buff );
	}

	void CFBamPopDepEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamScopeEditObj::setBuff( value );
		}
	}

	bool CFBamPopDepEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getPopDepBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamPopDepEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getPopDepBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamPopDepEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getPopDepBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamPopDepEditObj::isOptionalDefSchemaIdNull() {
		return( getPopDepBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamPopDepEditObj::getOptionalDefSchemaIdValue() {
		return( getPopDepBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamPopDepEditObj::getOptionalDefSchemaIdReference() {
		return( getPopDepBuff()->getOptionalDefSchemaIdReference() );
	}

	const int64_t CFBamPopDepEditObj::getRequiredRelationTenantId() {
		return( getPopDepBuff()->getRequiredRelationTenantId() );
	}

	const int64_t* CFBamPopDepEditObj::getRequiredRelationTenantIdReference() {
		return( getPopDepBuff()->getRequiredRelationTenantIdReference() );
	}

	const int64_t CFBamPopDepEditObj::getRequiredRelationId() {
		return( getPopDepBuff()->getRequiredRelationId() );
	}

	const int64_t* CFBamPopDepEditObj::getRequiredRelationIdReference() {
		return( getPopDepBuff()->getRequiredRelationIdReference() );
	}

	cfbam::ICFBamRelationObj* CFBamPopDepEditObj::getRequiredLookupRelation( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopDep()->getSchema() )->getRelationTableObj()->readRelationByIdIdx( getPopDepBuff()->getRequiredRelationTenantId(),
					getPopDepBuff()->getRequiredRelationId() );
		}
		return( retobj );
	}

	void CFBamPopDepEditObj::setRequiredLookupRelation( cfbam::ICFBamRelationObj* value ) {
			
			if( value != NULL ) {
				getPopDepEditBuff()->setRequiredRelationTenantId( value->getRequiredTenantId() );
				getPopDepEditBuff()->setRequiredRelationId( value->getRequiredId() );
			}
			else {
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamPopDepEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getPopDepBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getPopDepBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopDep()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getPopDepBuff()->getOptionalDefSchemaTenantIdValue(),
					getPopDepBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamPopDepEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getPopDepEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getPopDepEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getPopDepEditBuff()->setOptionalDefSchemaTenantIdNull();
				getPopDepEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	void CFBamPopDepEditObj::copyBuffToOrig() {
		cfbam::CFBamPopDepBuff* origBuff = getOrigAsPopDep()->getPopDepEditBuff();
		cfbam::CFBamPopDepBuff* myBuff = getPopDepBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamPopDepEditObj::copyOrigToBuff() {
		cfbam::CFBamPopDepBuff* origBuff = getOrigAsPopDep()->getPopDepBuff();
		cfbam::CFBamPopDepBuff* myBuff = getPopDepEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
