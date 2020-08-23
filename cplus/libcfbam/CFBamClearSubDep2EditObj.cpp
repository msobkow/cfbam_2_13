// Description: C++18 edit object instance implementation for CFBam ClearSubDep2.

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
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/CFBamClearSubDep2Obj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamClearDepObj.hpp>
#include <cfbamobj/ICFBamClearDepEditObj.hpp>
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/CFBamClearDepEditObj.hpp>
#include <cfbamobj/CFBamClearSubDep2EditObj.hpp>


namespace cfbam {

	const std::string CFBamClearSubDep2EditObj::CLASS_NAME( "CFBamClearSubDep2EditObj" );

	CFBamClearSubDep2EditObj::CFBamClearSubDep2EditObj( cfbam::ICFBamClearSubDep2Obj* argOrig )
	: ICFBamClearSubDep2EditObj(),
	  CFBamClearDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamClearSubDep2EditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamClearSubDep2EditObj::~CFBamClearSubDep2EditObj() {
	}

	const std::string& CFBamClearSubDep2EditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClearSubDep2EditObj::getClassCode() const {
		return( cfbam::CFBamClearSubDep2Buff::CLASS_CODE );
	}

	bool CFBamClearSubDep2EditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamClearDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamClearSubDep2EditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep2EditObj" );
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
		static const std::string S_ClearSubDep1TenantId( "ClearSubDep1TenantId" );
		static const std::string S_ClearSubDep1Id( "ClearSubDep1Id" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep1TenantId, CFBamClearSubDep2EditObj::getRequiredClearSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep1Id, CFBamClearSubDep2EditObj::getRequiredClearSubDep1Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamClearSubDep2EditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamClearSubDep2EditObj::getGenDefName() {
		return( cfbam::CFBamClearSubDep2Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep2EditObj::getScope() {
		cfbam::ICFBamClearSubDep1Obj* scope = getRequiredContainerClearSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep2EditObj::getObjScope() {
		cfbam::ICFBamClearSubDep1Obj* scope = getRequiredContainerClearSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep2EditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamClearSubDep2EditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep2EditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamClearSubDep2EditObj::getObjQualifiedName() {
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

	std::string CFBamClearSubDep2EditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamClearSubDep2EditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamClearSubDep2Obj* retobj = getSchema()->getClearSubDep2TableObj()->realizeClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamClearSubDep2EditObj::create() {
		cfbam::ICFBamClearSubDep2Obj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearSubDep2()->getSchema() )->getClearSubDep2TableObj()->createClearSubDep2( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep2EditObj::update() {
		getSchema()->getClearSubDep2TableObj()->updateClearSubDep2( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep2EditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getClearSubDep2TableObj()->deleteClearSubDep2( this );
		return( NULL );
	}

	cfbam::ICFBamClearSubDep2TableObj* CFBamClearSubDep2EditObj::getClearSubDep2Table() {
		return( orig->getSchema()->getClearSubDep2TableObj() );
	}

	cfbam::ICFBamClearSubDep2EditObj* CFBamClearSubDep2EditObj::getClearSubDep2Edit() {
		return( (cfbam::ICFBamClearSubDep2EditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep2EditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2EditObj::getOrigAsClearSubDep2() {
		return( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamClearSubDep2EditObj::getBuff() {
		return( buff );
	}

	void CFBamClearSubDep2EditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamClearDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamClearSubDep2EditObj::getRequiredClearSubDep1TenantId() {
		return( getClearSubDep2Buff()->getRequiredClearSubDep1TenantId() );
	}

	const int64_t* CFBamClearSubDep2EditObj::getRequiredClearSubDep1TenantIdReference() {
		return( getClearSubDep2Buff()->getRequiredClearSubDep1TenantIdReference() );
	}

	const int64_t CFBamClearSubDep2EditObj::getRequiredClearSubDep1Id() {
		return( getClearSubDep2Buff()->getRequiredClearSubDep1Id() );
	}

	const int64_t* CFBamClearSubDep2EditObj::getRequiredClearSubDep1IdReference() {
		return( getClearSubDep2Buff()->getRequiredClearSubDep1IdReference() );
	}

	const std::string& CFBamClearSubDep2EditObj::getRequiredName() {
		return( getClearSubDep2Buff()->getRequiredName() );
	}

	const std::string* CFBamClearSubDep2EditObj::getRequiredNameReference() {
		return( getClearSubDep2Buff()->getRequiredNameReference() );
	}

	void CFBamClearSubDep2EditObj::setRequiredName( const std::string& value ) {
		if( getClearSubDep2Buff()->getRequiredName() != value ) {
			getClearSubDep2EditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamClearSubDep1Obj* CFBamClearSubDep2EditObj::getRequiredContainerClearSubDep1( bool forceRead ) {
		cfbam::ICFBamClearSubDep1Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearSubDep2()->getSchema() )->getClearSubDep1TableObj()->readClearSubDep1ByIdIdx( getClearSubDep2Buff()->getRequiredClearSubDep1TenantId(),
					getClearSubDep2Buff()->getRequiredClearSubDep1Id() );
		}
		return( retobj );
	}

	void CFBamClearSubDep2EditObj::setRequiredContainerClearSubDep1( cfbam::ICFBamClearSubDep1Obj* value ) {
			
			if( value != NULL ) {
				getClearSubDep2EditBuff()->setRequiredClearSubDep1TenantId( value->getRequiredTenantId() );
				getClearSubDep2EditBuff()->setRequiredClearSubDep1Id( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamClearSubDep3Obj*> CFBamClearSubDep2EditObj::getOptionalComponentsClearDep( bool forceRead ) {
		std::vector<cfbam::ICFBamClearSubDep3Obj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearSubDep2()->getSchema() )->getClearSubDep3TableObj()->readClearSubDep3ByClearSubDep2Idx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamClearSubDep2EditObj::copyBuffToOrig() {
		cfbam::CFBamClearSubDep2Buff* origBuff = getOrigAsClearSubDep2()->getClearSubDep2EditBuff();
		cfbam::CFBamClearSubDep2Buff* myBuff = getClearSubDep2Buff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamClearSubDep2EditObj::copyOrigToBuff() {
		cfbam::CFBamClearSubDep2Buff* origBuff = getOrigAsClearSubDep2()->getClearSubDep2Buff();
		cfbam::CFBamClearSubDep2Buff* myBuff = getClearSubDep2EditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
