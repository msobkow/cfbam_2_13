// Description: C++18 edit object instance implementation for CFBam PopSubDep3.

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
#include <cfbamobj/CFBamPopSubDep3Obj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamPopDepObj.hpp>
#include <cfbamobj/ICFBamPopDepEditObj.hpp>
#include <cfbamobj/CFBamPopDepObj.hpp>
#include <cfbamobj/CFBamPopDepEditObj.hpp>
#include <cfbamobj/CFBamPopSubDep3EditObj.hpp>


namespace cfbam {

	const std::string CFBamPopSubDep3EditObj::CLASS_NAME( "CFBamPopSubDep3EditObj" );

	CFBamPopSubDep3EditObj::CFBamPopSubDep3EditObj( cfbam::ICFBamPopSubDep3Obj* argOrig )
	: ICFBamPopSubDep3EditObj(),
	  CFBamPopDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamPopSubDep3EditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamPopSubDep3EditObj::~CFBamPopSubDep3EditObj() {
	}

	const std::string& CFBamPopSubDep3EditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopSubDep3EditObj::getClassCode() const {
		return( cfbam::CFBamPopSubDep3Buff::CLASS_CODE );
	}

	bool CFBamPopSubDep3EditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamPopDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamPopSubDep3EditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep3EditObj" );
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
		static const std::string S_PopSubDep2TenantId( "PopSubDep2TenantId" );
		static const std::string S_PopSubDep2Id( "PopSubDep2Id" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep2TenantId, CFBamPopSubDep3EditObj::getRequiredPopSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep2Id, CFBamPopSubDep3EditObj::getRequiredPopSubDep2Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamPopSubDep3EditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamPopSubDep3EditObj::getGenDefName() {
		return( cfbam::CFBamPopSubDep3Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep3EditObj::getScope() {
		cfbam::ICFBamPopSubDep2Obj* scope = getRequiredContainerPopSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep3EditObj::getObjScope() {
		cfbam::ICFBamPopSubDep2Obj* scope = getRequiredContainerPopSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep3EditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamPopSubDep3EditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep3EditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamPopSubDep3EditObj::getObjQualifiedName() {
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

	std::string CFBamPopSubDep3EditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamPopSubDep3EditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamPopSubDep3Obj* retobj = getSchema()->getPopSubDep3TableObj()->realizePopSubDep3( dynamic_cast<cfbam::ICFBamPopSubDep3Obj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamPopSubDep3EditObj::create() {
		cfbam::ICFBamPopSubDep3Obj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopSubDep3()->getSchema() )->getPopSubDep3TableObj()->createPopSubDep3( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep3EditObj::update() {
		getSchema()->getPopSubDep3TableObj()->updatePopSubDep3( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep3EditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getPopSubDep3TableObj()->deletePopSubDep3( this );
		return( NULL );
	}

	cfbam::ICFBamPopSubDep3TableObj* CFBamPopSubDep3EditObj::getPopSubDep3Table() {
		return( orig->getSchema()->getPopSubDep3TableObj() );
	}

	cfbam::ICFBamPopSubDep3EditObj* CFBamPopSubDep3EditObj::getPopSubDep3Edit() {
		return( (cfbam::ICFBamPopSubDep3EditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep3EditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamPopSubDep3Obj* CFBamPopSubDep3EditObj::getOrigAsPopSubDep3() {
		return( dynamic_cast<cfbam::ICFBamPopSubDep3Obj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamPopSubDep3EditObj::getBuff() {
		return( buff );
	}

	void CFBamPopSubDep3EditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamPopDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamPopSubDep3EditObj::getRequiredPopSubDep2TenantId() {
		return( getPopSubDep3Buff()->getRequiredPopSubDep2TenantId() );
	}

	const int64_t* CFBamPopSubDep3EditObj::getRequiredPopSubDep2TenantIdReference() {
		return( getPopSubDep3Buff()->getRequiredPopSubDep2TenantIdReference() );
	}

	const int64_t CFBamPopSubDep3EditObj::getRequiredPopSubDep2Id() {
		return( getPopSubDep3Buff()->getRequiredPopSubDep2Id() );
	}

	const int64_t* CFBamPopSubDep3EditObj::getRequiredPopSubDep2IdReference() {
		return( getPopSubDep3Buff()->getRequiredPopSubDep2IdReference() );
	}

	const std::string& CFBamPopSubDep3EditObj::getRequiredName() {
		return( getPopSubDep3Buff()->getRequiredName() );
	}

	const std::string* CFBamPopSubDep3EditObj::getRequiredNameReference() {
		return( getPopSubDep3Buff()->getRequiredNameReference() );
	}

	void CFBamPopSubDep3EditObj::setRequiredName( const std::string& value ) {
		if( getPopSubDep3Buff()->getRequiredName() != value ) {
			getPopSubDep3EditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamPopSubDep2Obj* CFBamPopSubDep3EditObj::getRequiredContainerPopSubDep2( bool forceRead ) {
		cfbam::ICFBamPopSubDep2Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopSubDep3()->getSchema() )->getPopSubDep2TableObj()->readPopSubDep2ByIdIdx( getPopSubDep3Buff()->getRequiredPopSubDep2TenantId(),
					getPopSubDep3Buff()->getRequiredPopSubDep2Id() );
		}
		return( retobj );
	}

	void CFBamPopSubDep3EditObj::setRequiredContainerPopSubDep2( cfbam::ICFBamPopSubDep2Obj* value ) {
			
			if( value != NULL ) {
				getPopSubDep3EditBuff()->setRequiredPopSubDep2TenantId( value->getRequiredTenantId() );
				getPopSubDep3EditBuff()->setRequiredPopSubDep2Id( value->getRequiredId() );
			}
		}

	void CFBamPopSubDep3EditObj::copyBuffToOrig() {
		cfbam::CFBamPopSubDep3Buff* origBuff = getOrigAsPopSubDep3()->getPopSubDep3EditBuff();
		cfbam::CFBamPopSubDep3Buff* myBuff = getPopSubDep3Buff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamPopSubDep3EditObj::copyOrigToBuff() {
		cfbam::CFBamPopSubDep3Buff* origBuff = getOrigAsPopSubDep3()->getPopSubDep3Buff();
		cfbam::CFBamPopSubDep3Buff* myBuff = getPopSubDep3EditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
