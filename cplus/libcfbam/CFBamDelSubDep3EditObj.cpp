// Description: C++18 edit object instance implementation for CFBam DelSubDep3.

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
#include <cfbamobj/CFBamDelSubDep3Obj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamDelDepObj.hpp>
#include <cfbamobj/ICFBamDelDepEditObj.hpp>
#include <cfbamobj/CFBamDelDepObj.hpp>
#include <cfbamobj/CFBamDelDepEditObj.hpp>
#include <cfbamobj/CFBamDelSubDep3EditObj.hpp>


namespace cfbam {

	const std::string CFBamDelSubDep3EditObj::CLASS_NAME( "CFBamDelSubDep3EditObj" );

	CFBamDelSubDep3EditObj::CFBamDelSubDep3EditObj( cfbam::ICFBamDelSubDep3Obj* argOrig )
	: ICFBamDelSubDep3EditObj(),
	  CFBamDelDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamDelSubDep3EditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamDelSubDep3EditObj::~CFBamDelSubDep3EditObj() {
	}

	const std::string& CFBamDelSubDep3EditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelSubDep3EditObj::getClassCode() const {
		return( cfbam::CFBamDelSubDep3Buff::CLASS_CODE );
	}

	bool CFBamDelSubDep3EditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamDelDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamDelSubDep3EditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep3EditObj" );
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
		static const std::string S_DelSubDep2TenantId( "DelSubDep2TenantId" );
		static const std::string S_DelSubDep2Id( "DelSubDep2Id" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep2TenantId, CFBamDelSubDep3EditObj::getRequiredDelSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep2Id, CFBamDelSubDep3EditObj::getRequiredDelSubDep2Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamDelSubDep3EditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamDelSubDep3EditObj::getGenDefName() {
		return( cfbam::CFBamDelSubDep3Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep3EditObj::getScope() {
		cfbam::ICFBamDelSubDep2Obj* scope = getRequiredContainerDelSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep3EditObj::getObjScope() {
		cfbam::ICFBamDelSubDep2Obj* scope = getRequiredContainerDelSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep3EditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamDelSubDep3EditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep3EditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamDelSubDep3EditObj::getObjQualifiedName() {
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

	std::string CFBamDelSubDep3EditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamDelSubDep3EditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamDelSubDep3Obj* retobj = getSchema()->getDelSubDep3TableObj()->realizeDelSubDep3( dynamic_cast<cfbam::ICFBamDelSubDep3Obj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamDelSubDep3EditObj::create() {
		cfbam::ICFBamDelSubDep3Obj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelSubDep3()->getSchema() )->getDelSubDep3TableObj()->createDelSubDep3( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep3EditObj::update() {
		getSchema()->getDelSubDep3TableObj()->updateDelSubDep3( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep3EditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getDelSubDep3TableObj()->deleteDelSubDep3( this );
		return( NULL );
	}

	cfbam::ICFBamDelSubDep3TableObj* CFBamDelSubDep3EditObj::getDelSubDep3Table() {
		return( orig->getSchema()->getDelSubDep3TableObj() );
	}

	cfbam::ICFBamDelSubDep3EditObj* CFBamDelSubDep3EditObj::getDelSubDep3Edit() {
		return( (cfbam::ICFBamDelSubDep3EditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep3EditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamDelSubDep3Obj* CFBamDelSubDep3EditObj::getOrigAsDelSubDep3() {
		return( dynamic_cast<cfbam::ICFBamDelSubDep3Obj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamDelSubDep3EditObj::getBuff() {
		return( buff );
	}

	void CFBamDelSubDep3EditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamDelDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamDelSubDep3EditObj::getRequiredDelSubDep2TenantId() {
		return( getDelSubDep3Buff()->getRequiredDelSubDep2TenantId() );
	}

	const int64_t* CFBamDelSubDep3EditObj::getRequiredDelSubDep2TenantIdReference() {
		return( getDelSubDep3Buff()->getRequiredDelSubDep2TenantIdReference() );
	}

	const int64_t CFBamDelSubDep3EditObj::getRequiredDelSubDep2Id() {
		return( getDelSubDep3Buff()->getRequiredDelSubDep2Id() );
	}

	const int64_t* CFBamDelSubDep3EditObj::getRequiredDelSubDep2IdReference() {
		return( getDelSubDep3Buff()->getRequiredDelSubDep2IdReference() );
	}

	const std::string& CFBamDelSubDep3EditObj::getRequiredName() {
		return( getDelSubDep3Buff()->getRequiredName() );
	}

	const std::string* CFBamDelSubDep3EditObj::getRequiredNameReference() {
		return( getDelSubDep3Buff()->getRequiredNameReference() );
	}

	void CFBamDelSubDep3EditObj::setRequiredName( const std::string& value ) {
		if( getDelSubDep3Buff()->getRequiredName() != value ) {
			getDelSubDep3EditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamDelSubDep2Obj* CFBamDelSubDep3EditObj::getRequiredContainerDelSubDep2( bool forceRead ) {
		cfbam::ICFBamDelSubDep2Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelSubDep3()->getSchema() )->getDelSubDep2TableObj()->readDelSubDep2ByIdIdx( getDelSubDep3Buff()->getRequiredDelSubDep2TenantId(),
					getDelSubDep3Buff()->getRequiredDelSubDep2Id() );
		}
		return( retobj );
	}

	void CFBamDelSubDep3EditObj::setRequiredContainerDelSubDep2( cfbam::ICFBamDelSubDep2Obj* value ) {
			
			if( value != NULL ) {
				getDelSubDep3EditBuff()->setRequiredDelSubDep2TenantId( value->getRequiredTenantId() );
				getDelSubDep3EditBuff()->setRequiredDelSubDep2Id( value->getRequiredId() );
			}
		}

	void CFBamDelSubDep3EditObj::copyBuffToOrig() {
		cfbam::CFBamDelSubDep3Buff* origBuff = getOrigAsDelSubDep3()->getDelSubDep3EditBuff();
		cfbam::CFBamDelSubDep3Buff* myBuff = getDelSubDep3Buff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamDelSubDep3EditObj::copyOrigToBuff() {
		cfbam::CFBamDelSubDep3Buff* origBuff = getOrigAsDelSubDep3()->getDelSubDep3Buff();
		cfbam::CFBamDelSubDep3Buff* myBuff = getDelSubDep3EditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
