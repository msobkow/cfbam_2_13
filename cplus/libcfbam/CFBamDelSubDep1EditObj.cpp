// Description: C++18 edit object instance implementation for CFBam DelSubDep1.

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
#include <cfbamobj/CFBamDelSubDep1Obj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamDelDepObj.hpp>
#include <cfbamobj/ICFBamDelDepEditObj.hpp>
#include <cfbamobj/CFBamDelDepObj.hpp>
#include <cfbamobj/CFBamDelDepEditObj.hpp>
#include <cfbamobj/CFBamDelSubDep1EditObj.hpp>


namespace cfbam {

	const std::string CFBamDelSubDep1EditObj::CLASS_NAME( "CFBamDelSubDep1EditObj" );

	CFBamDelSubDep1EditObj::CFBamDelSubDep1EditObj( cfbam::ICFBamDelSubDep1Obj* argOrig )
	: ICFBamDelSubDep1EditObj(),
	  CFBamDelDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamDelSubDep1EditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamDelSubDep1EditObj::~CFBamDelSubDep1EditObj() {
	}

	const std::string& CFBamDelSubDep1EditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelSubDep1EditObj::getClassCode() const {
		return( cfbam::CFBamDelSubDep1Buff::CLASS_CODE );
	}

	bool CFBamDelSubDep1EditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamDelDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamDelSubDep1EditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep1EditObj" );
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
		static const std::string S_DelTopDepTenantId( "DelTopDepTenantId" );
		static const std::string S_DelTopDepId( "DelTopDepId" );
		static const std::string S_Name( "Name" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelTopDepTenantId, CFBamDelSubDep1EditObj::getRequiredDelTopDepTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelTopDepId, CFBamDelSubDep1EditObj::getRequiredDelTopDepId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamDelSubDep1EditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamDelSubDep1EditObj::getGenDefName() {
		return( cfbam::CFBamDelSubDep1Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep1EditObj::getScope() {
		cfbam::ICFBamDelTopDepObj* scope = getRequiredContainerDelTopDep();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep1EditObj::getObjScope() {
		cfbam::ICFBamDelTopDepObj* scope = getRequiredContainerDelTopDep();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep1EditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamDelSubDep1EditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep1EditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamDelSubDep1EditObj::getObjQualifiedName() {
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

	std::string CFBamDelSubDep1EditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamDelSubDep1EditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamDelSubDep1Obj* retobj = getSchema()->getDelSubDep1TableObj()->realizeDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamDelSubDep1EditObj::create() {
		cfbam::ICFBamDelSubDep1Obj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelSubDep1()->getSchema() )->getDelSubDep1TableObj()->createDelSubDep1( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep1EditObj::update() {
		getSchema()->getDelSubDep1TableObj()->updateDelSubDep1( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep1EditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getDelSubDep1TableObj()->deleteDelSubDep1( this );
		return( NULL );
	}

	cfbam::ICFBamDelSubDep1TableObj* CFBamDelSubDep1EditObj::getDelSubDep1Table() {
		return( orig->getSchema()->getDelSubDep1TableObj() );
	}

	cfbam::ICFBamDelSubDep1EditObj* CFBamDelSubDep1EditObj::getDelSubDep1Edit() {
		return( (cfbam::ICFBamDelSubDep1EditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep1EditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep1EditObj::getOrigAsDelSubDep1() {
		return( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamDelSubDep1EditObj::getBuff() {
		return( buff );
	}

	void CFBamDelSubDep1EditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamDelDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamDelSubDep1EditObj::getRequiredDelTopDepTenantId() {
		return( getDelSubDep1Buff()->getRequiredDelTopDepTenantId() );
	}

	const int64_t* CFBamDelSubDep1EditObj::getRequiredDelTopDepTenantIdReference() {
		return( getDelSubDep1Buff()->getRequiredDelTopDepTenantIdReference() );
	}

	const int64_t CFBamDelSubDep1EditObj::getRequiredDelTopDepId() {
		return( getDelSubDep1Buff()->getRequiredDelTopDepId() );
	}

	const int64_t* CFBamDelSubDep1EditObj::getRequiredDelTopDepIdReference() {
		return( getDelSubDep1Buff()->getRequiredDelTopDepIdReference() );
	}

	const std::string& CFBamDelSubDep1EditObj::getRequiredName() {
		return( getDelSubDep1Buff()->getRequiredName() );
	}

	const std::string* CFBamDelSubDep1EditObj::getRequiredNameReference() {
		return( getDelSubDep1Buff()->getRequiredNameReference() );
	}

	void CFBamDelSubDep1EditObj::setRequiredName( const std::string& value ) {
		if( getDelSubDep1Buff()->getRequiredName() != value ) {
			getDelSubDep1EditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamDelTopDepObj* CFBamDelSubDep1EditObj::getRequiredContainerDelTopDep( bool forceRead ) {
		cfbam::ICFBamDelTopDepObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelSubDep1()->getSchema() )->getDelTopDepTableObj()->readDelTopDepByIdIdx( getDelSubDep1Buff()->getRequiredDelTopDepTenantId(),
					getDelSubDep1Buff()->getRequiredDelTopDepId() );
		}
		return( retobj );
	}

	void CFBamDelSubDep1EditObj::setRequiredContainerDelTopDep( cfbam::ICFBamDelTopDepObj* value ) {
			
			if( value != NULL ) {
				getDelSubDep1EditBuff()->setRequiredDelTopDepTenantId( value->getRequiredTenantId() );
				getDelSubDep1EditBuff()->setRequiredDelTopDepId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamDelSubDep2Obj*> CFBamDelSubDep1EditObj::getOptionalComponentsDelDep( bool forceRead ) {
		std::vector<cfbam::ICFBamDelSubDep2Obj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelSubDep1()->getSchema() )->getDelSubDep2TableObj()->readDelSubDep2ByContDelDep1Idx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamDelSubDep1EditObj::copyBuffToOrig() {
		cfbam::CFBamDelSubDep1Buff* origBuff = getOrigAsDelSubDep1()->getDelSubDep1EditBuff();
		cfbam::CFBamDelSubDep1Buff* myBuff = getDelSubDep1Buff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamDelSubDep1EditObj::copyOrigToBuff() {
		cfbam::CFBamDelSubDep1Buff* origBuff = getOrigAsDelSubDep1()->getDelSubDep1Buff();
		cfbam::CFBamDelSubDep1Buff* myBuff = getDelSubDep1EditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
