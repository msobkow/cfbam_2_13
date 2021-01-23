// Description: C++18 edit object instance implementation for CFBam PopSubDep2.

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
#include <cfbamobj/CFBamPopDepObj.hpp>
#include <cfbamobj/CFBamPopSubDep2Obj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamPopDepObj.hpp>
#include <cfbamobj/ICFBamPopDepEditObj.hpp>
#include <cfbamobj/CFBamPopDepObj.hpp>
#include <cfbamobj/CFBamPopDepEditObj.hpp>
#include <cfbamobj/CFBamPopSubDep2EditObj.hpp>


namespace cfbam {

	const std::string CFBamPopSubDep2EditObj::CLASS_NAME( "CFBamPopSubDep2EditObj" );

	CFBamPopSubDep2EditObj::CFBamPopSubDep2EditObj( cfbam::ICFBamPopSubDep2Obj* argOrig )
	: ICFBamPopSubDep2EditObj(),
	  CFBamPopDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamPopSubDep2EditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamPopSubDep2EditObj::~CFBamPopSubDep2EditObj() {
	}

	const std::string& CFBamPopSubDep2EditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopSubDep2EditObj::getClassCode() const {
		return( cfbam::CFBamPopSubDep2Buff::CLASS_CODE );
	}

	bool CFBamPopSubDep2EditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamPopDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamPopSubDep2EditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep2EditObj" );
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
		static const std::string S_PopSubDep1TenantId( "PopSubDep1TenantId" );
		static const std::string S_PopSubDep1Id( "PopSubDep1Id" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep1TenantId, CFBamPopSubDep2EditObj::getRequiredPopSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep1Id, CFBamPopSubDep2EditObj::getRequiredPopSubDep1Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamPopSubDep2EditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamPopSubDep2EditObj::getGenDefName() {
		return( cfbam::CFBamPopSubDep2Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep2EditObj::getScope() {
		cfbam::ICFBamPopSubDep1Obj* scope = getRequiredContainerPopSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep2EditObj::getObjScope() {
		cfbam::ICFBamPopSubDep1Obj* scope = getRequiredContainerPopSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep2EditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamPopSubDep2EditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep2EditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamPopSubDep2EditObj::getObjQualifiedName() {
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

	std::string CFBamPopSubDep2EditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamPopSubDep2EditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamPopSubDep2Obj* retobj = getSchema()->getPopSubDep2TableObj()->realizePopSubDep2( dynamic_cast<cfbam::ICFBamPopSubDep2Obj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamPopSubDep2EditObj::create() {
		cfbam::ICFBamPopSubDep2Obj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopSubDep2()->getSchema() )->getPopSubDep2TableObj()->createPopSubDep2( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep2EditObj::update() {
		getSchema()->getPopSubDep2TableObj()->updatePopSubDep2( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep2EditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getPopSubDep2TableObj()->deletePopSubDep2( this );
		return( NULL );
	}

	cfbam::ICFBamPopSubDep2TableObj* CFBamPopSubDep2EditObj::getPopSubDep2Table() {
		return( orig->getSchema()->getPopSubDep2TableObj() );
	}

	cfbam::ICFBamPopSubDep2EditObj* CFBamPopSubDep2EditObj::getPopSubDep2Edit() {
		return( (cfbam::ICFBamPopSubDep2EditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep2EditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamPopSubDep2Obj* CFBamPopSubDep2EditObj::getOrigAsPopSubDep2() {
		return( dynamic_cast<cfbam::ICFBamPopSubDep2Obj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamPopSubDep2EditObj::getBuff() {
		return( buff );
	}

	void CFBamPopSubDep2EditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamPopDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamPopSubDep2EditObj::getRequiredPopSubDep1TenantId() {
		return( getPopSubDep2Buff()->getRequiredPopSubDep1TenantId() );
	}

	const int64_t* CFBamPopSubDep2EditObj::getRequiredPopSubDep1TenantIdReference() {
		return( getPopSubDep2Buff()->getRequiredPopSubDep1TenantIdReference() );
	}

	const int64_t CFBamPopSubDep2EditObj::getRequiredPopSubDep1Id() {
		return( getPopSubDep2Buff()->getRequiredPopSubDep1Id() );
	}

	const int64_t* CFBamPopSubDep2EditObj::getRequiredPopSubDep1IdReference() {
		return( getPopSubDep2Buff()->getRequiredPopSubDep1IdReference() );
	}

	const std::string& CFBamPopSubDep2EditObj::getRequiredName() {
		return( getPopSubDep2Buff()->getRequiredName() );
	}

	const std::string* CFBamPopSubDep2EditObj::getRequiredNameReference() {
		return( getPopSubDep2Buff()->getRequiredNameReference() );
	}

	void CFBamPopSubDep2EditObj::setRequiredName( const std::string& value ) {
		if( getPopSubDep2Buff()->getRequiredName() != value ) {
			getPopSubDep2EditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamPopSubDep1Obj* CFBamPopSubDep2EditObj::getRequiredContainerPopSubDep1( bool forceRead ) {
		cfbam::ICFBamPopSubDep1Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopSubDep2()->getSchema() )->getPopSubDep1TableObj()->readPopSubDep1ByIdIdx( getPopSubDep2Buff()->getRequiredPopSubDep1TenantId(),
					getPopSubDep2Buff()->getRequiredPopSubDep1Id() );
		}
		return( retobj );
	}

	void CFBamPopSubDep2EditObj::setRequiredContainerPopSubDep1( cfbam::ICFBamPopSubDep1Obj* value ) {
			
			if( value != NULL ) {
				getPopSubDep2EditBuff()->setRequiredPopSubDep1TenantId( value->getRequiredTenantId() );
				getPopSubDep2EditBuff()->setRequiredPopSubDep1Id( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamPopSubDep3Obj*> CFBamPopSubDep2EditObj::getOptionalComponentsPopDep( bool forceRead ) {
		std::vector<cfbam::ICFBamPopSubDep3Obj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopSubDep2()->getSchema() )->getPopSubDep3TableObj()->readPopSubDep3ByPopSubDep2Idx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamPopSubDep2EditObj::copyBuffToOrig() {
		cfbam::CFBamPopSubDep2Buff* origBuff = getOrigAsPopSubDep2()->getPopSubDep2EditBuff();
		cfbam::CFBamPopSubDep2Buff* myBuff = getPopSubDep2Buff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamPopSubDep2EditObj::copyOrigToBuff() {
		cfbam::CFBamPopSubDep2Buff* origBuff = getOrigAsPopSubDep2()->getPopSubDep2Buff();
		cfbam::CFBamPopSubDep2Buff* myBuff = getPopSubDep2EditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
