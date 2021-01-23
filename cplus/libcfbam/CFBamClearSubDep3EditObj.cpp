// Description: C++18 edit object instance implementation for CFBam ClearSubDep3.

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
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/CFBamClearSubDep3Obj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamClearDepObj.hpp>
#include <cfbamobj/ICFBamClearDepEditObj.hpp>
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/CFBamClearDepEditObj.hpp>
#include <cfbamobj/CFBamClearSubDep3EditObj.hpp>


namespace cfbam {

	const std::string CFBamClearSubDep3EditObj::CLASS_NAME( "CFBamClearSubDep3EditObj" );

	CFBamClearSubDep3EditObj::CFBamClearSubDep3EditObj( cfbam::ICFBamClearSubDep3Obj* argOrig )
	: ICFBamClearSubDep3EditObj(),
	  CFBamClearDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamClearSubDep3EditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamClearSubDep3EditObj::~CFBamClearSubDep3EditObj() {
	}

	const std::string& CFBamClearSubDep3EditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClearSubDep3EditObj::getClassCode() const {
		return( cfbam::CFBamClearSubDep3Buff::CLASS_CODE );
	}

	bool CFBamClearSubDep3EditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamClearDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamClearSubDep3EditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep3EditObj" );
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
		static const std::string S_ClearSubDep2TenantId( "ClearSubDep2TenantId" );
		static const std::string S_ClearSubDep2Id( "ClearSubDep2Id" );
		static const std::string S_Name( "Name" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep2TenantId, CFBamClearSubDep3EditObj::getRequiredClearSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep2Id, CFBamClearSubDep3EditObj::getRequiredClearSubDep2Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamClearSubDep3EditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamClearSubDep3EditObj::getGenDefName() {
		return( cfbam::CFBamClearSubDep3Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep3EditObj::getScope() {
		cfbam::ICFBamClearSubDep2Obj* scope = getRequiredContainerClearSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep3EditObj::getObjScope() {
		cfbam::ICFBamClearSubDep2Obj* scope = getRequiredContainerClearSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep3EditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamClearSubDep3EditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep3EditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamClearSubDep3EditObj::getObjQualifiedName() {
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

	std::string CFBamClearSubDep3EditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamClearSubDep3EditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamClearSubDep3Obj* retobj = getSchema()->getClearSubDep3TableObj()->realizeClearSubDep3( dynamic_cast<cfbam::ICFBamClearSubDep3Obj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamClearSubDep3EditObj::create() {
		cfbam::ICFBamClearSubDep3Obj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearSubDep3()->getSchema() )->getClearSubDep3TableObj()->createClearSubDep3( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep3EditObj::update() {
		getSchema()->getClearSubDep3TableObj()->updateClearSubDep3( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep3EditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getClearSubDep3TableObj()->deleteClearSubDep3( this );
		return( NULL );
	}

	cfbam::ICFBamClearSubDep3TableObj* CFBamClearSubDep3EditObj::getClearSubDep3Table() {
		return( orig->getSchema()->getClearSubDep3TableObj() );
	}

	cfbam::ICFBamClearSubDep3EditObj* CFBamClearSubDep3EditObj::getClearSubDep3Edit() {
		return( (cfbam::ICFBamClearSubDep3EditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep3EditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamClearSubDep3Obj* CFBamClearSubDep3EditObj::getOrigAsClearSubDep3() {
		return( dynamic_cast<cfbam::ICFBamClearSubDep3Obj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamClearSubDep3EditObj::getBuff() {
		return( buff );
	}

	void CFBamClearSubDep3EditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamClearDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamClearSubDep3EditObj::getRequiredClearSubDep2TenantId() {
		return( getClearSubDep3Buff()->getRequiredClearSubDep2TenantId() );
	}

	const int64_t* CFBamClearSubDep3EditObj::getRequiredClearSubDep2TenantIdReference() {
		return( getClearSubDep3Buff()->getRequiredClearSubDep2TenantIdReference() );
	}

	const int64_t CFBamClearSubDep3EditObj::getRequiredClearSubDep2Id() {
		return( getClearSubDep3Buff()->getRequiredClearSubDep2Id() );
	}

	const int64_t* CFBamClearSubDep3EditObj::getRequiredClearSubDep2IdReference() {
		return( getClearSubDep3Buff()->getRequiredClearSubDep2IdReference() );
	}

	const std::string& CFBamClearSubDep3EditObj::getRequiredName() {
		return( getClearSubDep3Buff()->getRequiredName() );
	}

	const std::string* CFBamClearSubDep3EditObj::getRequiredNameReference() {
		return( getClearSubDep3Buff()->getRequiredNameReference() );
	}

	void CFBamClearSubDep3EditObj::setRequiredName( const std::string& value ) {
		if( getClearSubDep3Buff()->getRequiredName() != value ) {
			getClearSubDep3EditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep3EditObj::getRequiredContainerClearSubDep2( bool forceRead ) {
		cfbam::ICFBamClearSubDep2Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearSubDep3()->getSchema() )->getClearSubDep2TableObj()->readClearSubDep2ByIdIdx( getClearSubDep3Buff()->getRequiredClearSubDep2TenantId(),
					getClearSubDep3Buff()->getRequiredClearSubDep2Id() );
		}
		return( retobj );
	}

	void CFBamClearSubDep3EditObj::setRequiredContainerClearSubDep2( cfbam::ICFBamClearSubDep2Obj* value ) {
			
			if( value != NULL ) {
				getClearSubDep3EditBuff()->setRequiredClearSubDep2TenantId( value->getRequiredTenantId() );
				getClearSubDep3EditBuff()->setRequiredClearSubDep2Id( value->getRequiredId() );
			}
		}

	void CFBamClearSubDep3EditObj::copyBuffToOrig() {
		cfbam::CFBamClearSubDep3Buff* origBuff = getOrigAsClearSubDep3()->getClearSubDep3EditBuff();
		cfbam::CFBamClearSubDep3Buff* myBuff = getClearSubDep3Buff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamClearSubDep3EditObj::copyOrigToBuff() {
		cfbam::CFBamClearSubDep3Buff* origBuff = getOrigAsClearSubDep3()->getClearSubDep3Buff();
		cfbam::CFBamClearSubDep3Buff* myBuff = getClearSubDep3EditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
