// Description: C++18 edit object instance implementation for CFBam PopTopDep.

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
#include <cfbamobj/CFBamPopTopDepObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamPopDepObj.hpp>
#include <cfbamobj/ICFBamPopDepEditObj.hpp>
#include <cfbamobj/CFBamPopDepObj.hpp>
#include <cfbamobj/CFBamPopDepEditObj.hpp>
#include <cfbamobj/CFBamPopTopDepEditObj.hpp>


namespace cfbam {

	const std::string CFBamPopTopDepEditObj::CLASS_NAME( "CFBamPopTopDepEditObj" );

	CFBamPopTopDepEditObj::CFBamPopTopDepEditObj( cfbam::ICFBamPopTopDepObj* argOrig )
	: ICFBamPopTopDepEditObj(),
	  CFBamPopDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamPopTopDepEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamPopTopDepEditObj::~CFBamPopTopDepEditObj() {
	}

	const std::string& CFBamPopTopDepEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopTopDepEditObj::getClassCode() const {
		return( cfbam::CFBamPopTopDepBuff::CLASS_CODE );
	}

	bool CFBamPopTopDepEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamPopDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamPopTopDepEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopTopDepEditObj" );
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
		static const std::string S_ContRelationTenantId( "ContRelationTenantId" );
		static const std::string S_ContRelationId( "ContRelationId" );
		static const std::string S_Name( "Name" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationTenantId, CFBamPopTopDepEditObj::getRequiredContRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationId, CFBamPopTopDepEditObj::getRequiredContRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamPopTopDepEditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamPopTopDepEditObj::getGenDefName() {
		return( cfbam::CFBamPopTopDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamPopTopDepEditObj::getScope() {
		cfbam::ICFBamRelationObj* scope = getRequiredContainerContRelation();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopTopDepEditObj::getObjScope() {
		cfbam::ICFBamRelationObj* scope = getRequiredContainerContRelation();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopTopDepEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamPopTopDepEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamPopTopDepEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamPopTopDepEditObj::getObjQualifiedName() {
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

	std::string CFBamPopTopDepEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamPopTopDepEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamPopTopDepObj* retobj = getSchema()->getPopTopDepTableObj()->realizePopTopDep( dynamic_cast<cfbam::ICFBamPopTopDepObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamPopTopDepEditObj::create() {
		cfbam::ICFBamPopTopDepObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopTopDep()->getSchema() )->getPopTopDepTableObj()->createPopTopDep( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopTopDepEditObj::update() {
		getSchema()->getPopTopDepTableObj()->updatePopTopDep( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopTopDepEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getPopTopDepTableObj()->deletePopTopDep( this );
		return( NULL );
	}

	cfbam::ICFBamPopTopDepTableObj* CFBamPopTopDepEditObj::getPopTopDepTable() {
		return( orig->getSchema()->getPopTopDepTableObj() );
	}

	cfbam::ICFBamPopTopDepEditObj* CFBamPopTopDepEditObj::getPopTopDepEdit() {
		return( (cfbam::ICFBamPopTopDepEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopTopDepEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamPopTopDepObj* CFBamPopTopDepEditObj::getOrigAsPopTopDep() {
		return( dynamic_cast<cfbam::ICFBamPopTopDepObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamPopTopDepEditObj::getBuff() {
		return( buff );
	}

	void CFBamPopTopDepEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamPopDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamPopTopDepEditObj::getRequiredContRelationTenantId() {
		return( getPopTopDepBuff()->getRequiredContRelationTenantId() );
	}

	const int64_t* CFBamPopTopDepEditObj::getRequiredContRelationTenantIdReference() {
		return( getPopTopDepBuff()->getRequiredContRelationTenantIdReference() );
	}

	const int64_t CFBamPopTopDepEditObj::getRequiredContRelationId() {
		return( getPopTopDepBuff()->getRequiredContRelationId() );
	}

	const int64_t* CFBamPopTopDepEditObj::getRequiredContRelationIdReference() {
		return( getPopTopDepBuff()->getRequiredContRelationIdReference() );
	}

	const std::string& CFBamPopTopDepEditObj::getRequiredName() {
		return( getPopTopDepBuff()->getRequiredName() );
	}

	const std::string* CFBamPopTopDepEditObj::getRequiredNameReference() {
		return( getPopTopDepBuff()->getRequiredNameReference() );
	}

	void CFBamPopTopDepEditObj::setRequiredName( const std::string& value ) {
		if( getPopTopDepBuff()->getRequiredName() != value ) {
			getPopTopDepEditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamRelationObj* CFBamPopTopDepEditObj::getRequiredContainerContRelation( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopTopDep()->getSchema() )->getRelationTableObj()->readRelationByIdIdx( getPopTopDepBuff()->getRequiredContRelationTenantId(),
					getPopTopDepBuff()->getRequiredContRelationId() );
		}
		return( retobj );
	}

	void CFBamPopTopDepEditObj::setRequiredContainerContRelation( cfbam::ICFBamRelationObj* value ) {
			
			if( value != NULL ) {
				getPopTopDepEditBuff()->setRequiredContRelationTenantId( value->getRequiredTenantId() );
				getPopTopDepEditBuff()->setRequiredContRelationId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamPopSubDep1Obj*> CFBamPopTopDepEditObj::getOptionalComponentsPopDep( bool forceRead ) {
		std::vector<cfbam::ICFBamPopSubDep1Obj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopTopDep()->getSchema() )->getPopSubDep1TableObj()->readPopSubDep1ByPopTopDepIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamPopTopDepEditObj::copyBuffToOrig() {
		cfbam::CFBamPopTopDepBuff* origBuff = getOrigAsPopTopDep()->getPopTopDepEditBuff();
		cfbam::CFBamPopTopDepBuff* myBuff = getPopTopDepBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamPopTopDepEditObj::copyOrigToBuff() {
		cfbam::CFBamPopTopDepBuff* origBuff = getOrigAsPopTopDep()->getPopTopDepBuff();
		cfbam::CFBamPopTopDepBuff* myBuff = getPopTopDepEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
