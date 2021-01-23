// Description: C++18 edit object instance implementation for CFBam DelSubDep2.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
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
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamDelDepObj.hpp>
#include <cfbamobj/CFBamDelSubDep2Obj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamDelDepObj.hpp>
#include <cfbamobj/ICFBamDelDepEditObj.hpp>
#include <cfbamobj/CFBamDelDepObj.hpp>
#include <cfbamobj/CFBamDelDepEditObj.hpp>
#include <cfbamobj/CFBamDelSubDep2EditObj.hpp>


namespace cfbam {

	const std::string CFBamDelSubDep2EditObj::CLASS_NAME( "CFBamDelSubDep2EditObj" );

	CFBamDelSubDep2EditObj::CFBamDelSubDep2EditObj( cfbam::ICFBamDelSubDep2Obj* argOrig )
	: ICFBamDelSubDep2EditObj(),
	  CFBamDelDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamDelSubDep2EditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamDelSubDep2EditObj::~CFBamDelSubDep2EditObj() {
	}

	const std::string& CFBamDelSubDep2EditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelSubDep2EditObj::getClassCode() const {
		return( cfbam::CFBamDelSubDep2Buff::CLASS_CODE );
	}

	bool CFBamDelSubDep2EditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamDelDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamDelSubDep2EditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep2EditObj" );
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
		static const std::string S_DelSubDep1TenantId( "DelSubDep1TenantId" );
		static const std::string S_DelSubDep1Id( "DelSubDep1Id" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1TenantId, CFBamDelSubDep2EditObj::getRequiredDelSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1Id, CFBamDelSubDep2EditObj::getRequiredDelSubDep1Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamDelSubDep2EditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamDelSubDep2EditObj::getGenDefName() {
		return( cfbam::CFBamDelSubDep2Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep2EditObj::getScope() {
		cfbam::ICFBamDelSubDep1Obj* scope = getRequiredContainerDelSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep2EditObj::getObjScope() {
		cfbam::ICFBamDelSubDep1Obj* scope = getRequiredContainerDelSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep2EditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamDelSubDep2EditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep2EditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamDelSubDep2EditObj::getObjQualifiedName() {
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

	std::string CFBamDelSubDep2EditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamDelSubDep2EditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamDelSubDep2Obj* retobj = getSchema()->getDelSubDep2TableObj()->realizeDelSubDep2( dynamic_cast<cfbam::ICFBamDelSubDep2Obj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamDelSubDep2EditObj::create() {
		cfbam::ICFBamDelSubDep2Obj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelSubDep2()->getSchema() )->getDelSubDep2TableObj()->createDelSubDep2( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep2EditObj::update() {
		getSchema()->getDelSubDep2TableObj()->updateDelSubDep2( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep2EditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getDelSubDep2TableObj()->deleteDelSubDep2( this );
		return( NULL );
	}

	cfbam::ICFBamDelSubDep2TableObj* CFBamDelSubDep2EditObj::getDelSubDep2Table() {
		return( orig->getSchema()->getDelSubDep2TableObj() );
	}

	cfbam::ICFBamDelSubDep2EditObj* CFBamDelSubDep2EditObj::getDelSubDep2Edit() {
		return( (cfbam::ICFBamDelSubDep2EditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep2EditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamDelSubDep2Obj* CFBamDelSubDep2EditObj::getOrigAsDelSubDep2() {
		return( dynamic_cast<cfbam::ICFBamDelSubDep2Obj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamDelSubDep2EditObj::getBuff() {
		return( buff );
	}

	void CFBamDelSubDep2EditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamDelDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamDelSubDep2EditObj::getRequiredDelSubDep1TenantId() {
		return( getDelSubDep2Buff()->getRequiredDelSubDep1TenantId() );
	}

	const int64_t* CFBamDelSubDep2EditObj::getRequiredDelSubDep1TenantIdReference() {
		return( getDelSubDep2Buff()->getRequiredDelSubDep1TenantIdReference() );
	}

	const int64_t CFBamDelSubDep2EditObj::getRequiredDelSubDep1Id() {
		return( getDelSubDep2Buff()->getRequiredDelSubDep1Id() );
	}

	const int64_t* CFBamDelSubDep2EditObj::getRequiredDelSubDep1IdReference() {
		return( getDelSubDep2Buff()->getRequiredDelSubDep1IdReference() );
	}

	const std::string& CFBamDelSubDep2EditObj::getRequiredName() {
		return( getDelSubDep2Buff()->getRequiredName() );
	}

	const std::string* CFBamDelSubDep2EditObj::getRequiredNameReference() {
		return( getDelSubDep2Buff()->getRequiredNameReference() );
	}

	void CFBamDelSubDep2EditObj::setRequiredName( const std::string& value ) {
		if( getDelSubDep2Buff()->getRequiredName() != value ) {
			getDelSubDep2EditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep2EditObj::getRequiredContainerDelSubDep1( bool forceRead ) {
		cfbam::ICFBamDelSubDep1Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelSubDep2()->getSchema() )->getDelSubDep1TableObj()->readDelSubDep1ByIdIdx( getDelSubDep2Buff()->getRequiredDelSubDep1TenantId(),
					getDelSubDep2Buff()->getRequiredDelSubDep1Id() );
		}
		return( retobj );
	}

	void CFBamDelSubDep2EditObj::setRequiredContainerDelSubDep1( cfbam::ICFBamDelSubDep1Obj* value ) {
			
			if( value != NULL ) {
				getDelSubDep2EditBuff()->setRequiredDelSubDep1TenantId( value->getRequiredTenantId() );
				getDelSubDep2EditBuff()->setRequiredDelSubDep1Id( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamDelSubDep3Obj*> CFBamDelSubDep2EditObj::getOptionalComponentsDelDep( bool forceRead ) {
		std::vector<cfbam::ICFBamDelSubDep3Obj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelSubDep2()->getSchema() )->getDelSubDep3TableObj()->readDelSubDep3ByDelSubDep2Idx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamDelSubDep2EditObj::copyBuffToOrig() {
		cfbam::CFBamDelSubDep2Buff* origBuff = getOrigAsDelSubDep2()->getDelSubDep2EditBuff();
		cfbam::CFBamDelSubDep2Buff* myBuff = getDelSubDep2Buff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamDelSubDep2EditObj::copyOrigToBuff() {
		cfbam::CFBamDelSubDep2Buff* origBuff = getOrigAsDelSubDep2()->getDelSubDep2Buff();
		cfbam::CFBamDelSubDep2Buff* myBuff = getDelSubDep2EditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
