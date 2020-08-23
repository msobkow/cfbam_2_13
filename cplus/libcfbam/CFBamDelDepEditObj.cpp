// Description: C++18 edit object instance implementation for CFBam DelDep.

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
#include <cfbamobj/CFBamDelDepObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamDelDepEditObj.hpp>


namespace cfbam {

	const std::string CFBamDelDepEditObj::CLASS_NAME( "CFBamDelDepEditObj" );

	CFBamDelDepEditObj::CFBamDelDepEditObj( cfbam::ICFBamDelDepObj* argOrig )
	: ICFBamDelDepEditObj(),
	  CFBamScopeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamDelDepEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamDelDepEditObj::~CFBamDelDepEditObj() {
	}

	const std::string& CFBamDelDepEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelDepEditObj::getClassCode() const {
		return( cfbam::CFBamDelDepBuff::CLASS_CODE );
	}

	bool CFBamDelDepEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamDelDepEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelDepEditObj" );
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
		if( ! CFBamDelDepEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamDelDepEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamDelDepEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamDelDepEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationTenantId, CFBamDelDepEditObj::getRequiredRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamDelDepEditObj::getRequiredRelationId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamDelDepEditObj::getGenDefName() {
		return( cfbam::CFBamDelDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamDelDepEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamDelDepEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamDelDepEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamDelDepEditObj::getObjQualifiedName() {
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

	std::string CFBamDelDepEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamDelDepEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamDelDepObj* retobj = getSchema()->getDelDepTableObj()->realizeDelDep( dynamic_cast<cfbam::ICFBamDelDepObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamDelDepEditObj::create() {
		cfbam::ICFBamDelDepObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelDep()->getSchema() )->getDelDepTableObj()->createDelDep( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelDepEditObj::update() {
		getSchema()->getDelDepTableObj()->updateDelDep( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelDepEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getDelDepTableObj()->deleteDelDep( this );
		return( NULL );
	}

	cfbam::ICFBamDelDepTableObj* CFBamDelDepEditObj::getDelDepTable() {
		return( orig->getSchema()->getDelDepTableObj() );
	}

	cfbam::ICFBamDelDepEditObj* CFBamDelDepEditObj::getDelDepEdit() {
		return( (cfbam::ICFBamDelDepEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelDepEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamDelDepObj* CFBamDelDepEditObj::getOrigAsDelDep() {
		return( dynamic_cast<cfbam::ICFBamDelDepObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamDelDepEditObj::getBuff() {
		return( buff );
	}

	void CFBamDelDepEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamScopeEditObj::setBuff( value );
		}
	}

	bool CFBamDelDepEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getDelDepBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamDelDepEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getDelDepBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamDelDepEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getDelDepBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamDelDepEditObj::isOptionalDefSchemaIdNull() {
		return( getDelDepBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamDelDepEditObj::getOptionalDefSchemaIdValue() {
		return( getDelDepBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamDelDepEditObj::getOptionalDefSchemaIdReference() {
		return( getDelDepBuff()->getOptionalDefSchemaIdReference() );
	}

	const int64_t CFBamDelDepEditObj::getRequiredRelationTenantId() {
		return( getDelDepBuff()->getRequiredRelationTenantId() );
	}

	const int64_t* CFBamDelDepEditObj::getRequiredRelationTenantIdReference() {
		return( getDelDepBuff()->getRequiredRelationTenantIdReference() );
	}

	const int64_t CFBamDelDepEditObj::getRequiredRelationId() {
		return( getDelDepBuff()->getRequiredRelationId() );
	}

	const int64_t* CFBamDelDepEditObj::getRequiredRelationIdReference() {
		return( getDelDepBuff()->getRequiredRelationIdReference() );
	}

	cfbam::ICFBamRelationObj* CFBamDelDepEditObj::getRequiredLookupRelation( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelDep()->getSchema() )->getRelationTableObj()->readRelationByIdIdx( getDelDepBuff()->getRequiredRelationTenantId(),
					getDelDepBuff()->getRequiredRelationId() );
		}
		return( retobj );
	}

	void CFBamDelDepEditObj::setRequiredLookupRelation( cfbam::ICFBamRelationObj* value ) {
			
			if( value != NULL ) {
				getDelDepEditBuff()->setRequiredRelationTenantId( value->getRequiredTenantId() );
				getDelDepEditBuff()->setRequiredRelationId( value->getRequiredId() );
			}
			else {
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamDelDepEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getDelDepBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getDelDepBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelDep()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getDelDepBuff()->getOptionalDefSchemaTenantIdValue(),
					getDelDepBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamDelDepEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getDelDepEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getDelDepEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getDelDepEditBuff()->setOptionalDefSchemaTenantIdNull();
				getDelDepEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	void CFBamDelDepEditObj::copyBuffToOrig() {
		cfbam::CFBamDelDepBuff* origBuff = getOrigAsDelDep()->getDelDepEditBuff();
		cfbam::CFBamDelDepBuff* myBuff = getDelDepBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamDelDepEditObj::copyOrigToBuff() {
		cfbam::CFBamDelDepBuff* origBuff = getOrigAsDelDep()->getDelDepBuff();
		cfbam::CFBamDelDepBuff* myBuff = getDelDepEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
