// Description: C++18 edit object instance implementation for CFBam ClearSubDep1.

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
#include <cfbamobj/CFBamClearSubDep1Obj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamClearDepObj.hpp>
#include <cfbamobj/ICFBamClearDepEditObj.hpp>
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/CFBamClearDepEditObj.hpp>
#include <cfbamobj/CFBamClearSubDep1EditObj.hpp>


namespace cfbam {

	const std::string CFBamClearSubDep1EditObj::CLASS_NAME( "CFBamClearSubDep1EditObj" );

	CFBamClearSubDep1EditObj::CFBamClearSubDep1EditObj( cfbam::ICFBamClearSubDep1Obj* argOrig )
	: ICFBamClearSubDep1EditObj(),
	  CFBamClearDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamClearSubDep1EditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamClearSubDep1EditObj::~CFBamClearSubDep1EditObj() {
	}

	const std::string& CFBamClearSubDep1EditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClearSubDep1EditObj::getClassCode() const {
		return( cfbam::CFBamClearSubDep1Buff::CLASS_CODE );
	}

	bool CFBamClearSubDep1EditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamClearDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamClearSubDep1EditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep1EditObj" );
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
		static const std::string S_ClearTopDepTenantId( "ClearTopDepTenantId" );
		static const std::string S_ClearTopDepId( "ClearTopDepId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearTopDepTenantId, CFBamClearSubDep1EditObj::getRequiredClearTopDepTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearTopDepId, CFBamClearSubDep1EditObj::getRequiredClearTopDepId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamClearSubDep1EditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamClearSubDep1EditObj::getGenDefName() {
		return( cfbam::CFBamClearSubDep1Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep1EditObj::getScope() {
		cfbam::ICFBamClearTopDepObj* scope = getRequiredContainerClearTopDep();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep1EditObj::getObjScope() {
		cfbam::ICFBamClearTopDepObj* scope = getRequiredContainerClearTopDep();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep1EditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamClearSubDep1EditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep1EditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamClearSubDep1EditObj::getObjQualifiedName() {
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

	std::string CFBamClearSubDep1EditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamClearSubDep1EditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamClearSubDep1Obj* retobj = getSchema()->getClearSubDep1TableObj()->realizeClearSubDep1( dynamic_cast<cfbam::ICFBamClearSubDep1Obj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamClearSubDep1EditObj::create() {
		cfbam::ICFBamClearSubDep1Obj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearSubDep1()->getSchema() )->getClearSubDep1TableObj()->createClearSubDep1( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep1EditObj::update() {
		getSchema()->getClearSubDep1TableObj()->updateClearSubDep1( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep1EditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getClearSubDep1TableObj()->deleteClearSubDep1( this );
		return( NULL );
	}

	cfbam::ICFBamClearSubDep1TableObj* CFBamClearSubDep1EditObj::getClearSubDep1Table() {
		return( orig->getSchema()->getClearSubDep1TableObj() );
	}

	cfbam::ICFBamClearSubDep1EditObj* CFBamClearSubDep1EditObj::getClearSubDep1Edit() {
		return( (cfbam::ICFBamClearSubDep1EditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep1EditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamClearSubDep1Obj* CFBamClearSubDep1EditObj::getOrigAsClearSubDep1() {
		return( dynamic_cast<cfbam::ICFBamClearSubDep1Obj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamClearSubDep1EditObj::getBuff() {
		return( buff );
	}

	void CFBamClearSubDep1EditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamClearDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamClearSubDep1EditObj::getRequiredClearTopDepTenantId() {
		return( getClearSubDep1Buff()->getRequiredClearTopDepTenantId() );
	}

	const int64_t* CFBamClearSubDep1EditObj::getRequiredClearTopDepTenantIdReference() {
		return( getClearSubDep1Buff()->getRequiredClearTopDepTenantIdReference() );
	}

	const int64_t CFBamClearSubDep1EditObj::getRequiredClearTopDepId() {
		return( getClearSubDep1Buff()->getRequiredClearTopDepId() );
	}

	const int64_t* CFBamClearSubDep1EditObj::getRequiredClearTopDepIdReference() {
		return( getClearSubDep1Buff()->getRequiredClearTopDepIdReference() );
	}

	const std::string& CFBamClearSubDep1EditObj::getRequiredName() {
		return( getClearSubDep1Buff()->getRequiredName() );
	}

	const std::string* CFBamClearSubDep1EditObj::getRequiredNameReference() {
		return( getClearSubDep1Buff()->getRequiredNameReference() );
	}

	void CFBamClearSubDep1EditObj::setRequiredName( const std::string& value ) {
		if( getClearSubDep1Buff()->getRequiredName() != value ) {
			getClearSubDep1EditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamClearTopDepObj* CFBamClearSubDep1EditObj::getRequiredContainerClearTopDep( bool forceRead ) {
		cfbam::ICFBamClearTopDepObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearSubDep1()->getSchema() )->getClearTopDepTableObj()->readClearTopDepByIdIdx( getClearSubDep1Buff()->getRequiredClearTopDepTenantId(),
					getClearSubDep1Buff()->getRequiredClearTopDepId() );
		}
		return( retobj );
	}

	void CFBamClearSubDep1EditObj::setRequiredContainerClearTopDep( cfbam::ICFBamClearTopDepObj* value ) {
			
			if( value != NULL ) {
				getClearSubDep1EditBuff()->setRequiredClearTopDepTenantId( value->getRequiredTenantId() );
				getClearSubDep1EditBuff()->setRequiredClearTopDepId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep1EditObj::getOptionalComponentsClearDep( bool forceRead ) {
		std::vector<cfbam::ICFBamClearSubDep2Obj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearSubDep1()->getSchema() )->getClearSubDep2TableObj()->readClearSubDep2ByClearSubDep1Idx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamClearSubDep1EditObj::copyBuffToOrig() {
		cfbam::CFBamClearSubDep1Buff* origBuff = getOrigAsClearSubDep1()->getClearSubDep1EditBuff();
		cfbam::CFBamClearSubDep1Buff* myBuff = getClearSubDep1Buff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamClearSubDep1EditObj::copyOrigToBuff() {
		cfbam::CFBamClearSubDep1Buff* origBuff = getOrigAsClearSubDep1()->getClearSubDep1Buff();
		cfbam::CFBamClearSubDep1Buff* myBuff = getClearSubDep1EditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
