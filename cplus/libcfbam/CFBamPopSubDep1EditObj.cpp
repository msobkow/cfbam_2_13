// Description: C++18 edit object instance implementation for CFBam PopSubDep1.

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
#include <cfbamobj/CFBamPopSubDep1Obj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamPopDepObj.hpp>
#include <cfbamobj/ICFBamPopDepEditObj.hpp>
#include <cfbamobj/CFBamPopDepObj.hpp>
#include <cfbamobj/CFBamPopDepEditObj.hpp>
#include <cfbamobj/CFBamPopSubDep1EditObj.hpp>


namespace cfbam {

	const std::string CFBamPopSubDep1EditObj::CLASS_NAME( "CFBamPopSubDep1EditObj" );

	CFBamPopSubDep1EditObj::CFBamPopSubDep1EditObj( cfbam::ICFBamPopSubDep1Obj* argOrig )
	: ICFBamPopSubDep1EditObj(),
	  CFBamPopDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamPopSubDep1EditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamPopSubDep1EditObj::~CFBamPopSubDep1EditObj() {
	}

	const std::string& CFBamPopSubDep1EditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopSubDep1EditObj::getClassCode() const {
		return( cfbam::CFBamPopSubDep1Buff::CLASS_CODE );
	}

	bool CFBamPopSubDep1EditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamPopDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamPopSubDep1EditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep1EditObj" );
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
		static const std::string S_PopTopDepTenantId( "PopTopDepTenantId" );
		static const std::string S_PopTopDepId( "PopTopDepId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopTopDepTenantId, CFBamPopSubDep1EditObj::getRequiredPopTopDepTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopTopDepId, CFBamPopSubDep1EditObj::getRequiredPopTopDepId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamPopSubDep1EditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamPopSubDep1EditObj::getGenDefName() {
		return( cfbam::CFBamPopSubDep1Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep1EditObj::getScope() {
		cfbam::ICFBamPopTopDepObj* scope = getRequiredContainerContPopTopDep();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep1EditObj::getObjScope() {
		cfbam::ICFBamPopTopDepObj* scope = getRequiredContainerContPopTopDep();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep1EditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamPopSubDep1EditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep1EditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamPopSubDep1EditObj::getObjQualifiedName() {
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

	std::string CFBamPopSubDep1EditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamPopSubDep1EditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamPopSubDep1Obj* retobj = getSchema()->getPopSubDep1TableObj()->realizePopSubDep1( dynamic_cast<cfbam::ICFBamPopSubDep1Obj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamPopSubDep1EditObj::create() {
		cfbam::ICFBamPopSubDep1Obj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopSubDep1()->getSchema() )->getPopSubDep1TableObj()->createPopSubDep1( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep1EditObj::update() {
		getSchema()->getPopSubDep1TableObj()->updatePopSubDep1( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep1EditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getPopSubDep1TableObj()->deletePopSubDep1( this );
		return( NULL );
	}

	cfbam::ICFBamPopSubDep1TableObj* CFBamPopSubDep1EditObj::getPopSubDep1Table() {
		return( orig->getSchema()->getPopSubDep1TableObj() );
	}

	cfbam::ICFBamPopSubDep1EditObj* CFBamPopSubDep1EditObj::getPopSubDep1Edit() {
		return( (cfbam::ICFBamPopSubDep1EditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep1EditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamPopSubDep1Obj* CFBamPopSubDep1EditObj::getOrigAsPopSubDep1() {
		return( dynamic_cast<cfbam::ICFBamPopSubDep1Obj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamPopSubDep1EditObj::getBuff() {
		return( buff );
	}

	void CFBamPopSubDep1EditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamPopDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamPopSubDep1EditObj::getRequiredPopTopDepTenantId() {
		return( getPopSubDep1Buff()->getRequiredPopTopDepTenantId() );
	}

	const int64_t* CFBamPopSubDep1EditObj::getRequiredPopTopDepTenantIdReference() {
		return( getPopSubDep1Buff()->getRequiredPopTopDepTenantIdReference() );
	}

	const int64_t CFBamPopSubDep1EditObj::getRequiredPopTopDepId() {
		return( getPopSubDep1Buff()->getRequiredPopTopDepId() );
	}

	const int64_t* CFBamPopSubDep1EditObj::getRequiredPopTopDepIdReference() {
		return( getPopSubDep1Buff()->getRequiredPopTopDepIdReference() );
	}

	const std::string& CFBamPopSubDep1EditObj::getRequiredName() {
		return( getPopSubDep1Buff()->getRequiredName() );
	}

	const std::string* CFBamPopSubDep1EditObj::getRequiredNameReference() {
		return( getPopSubDep1Buff()->getRequiredNameReference() );
	}

	void CFBamPopSubDep1EditObj::setRequiredName( const std::string& value ) {
		if( getPopSubDep1Buff()->getRequiredName() != value ) {
			getPopSubDep1EditBuff()->setRequiredName( value );
		}
	}

	cfbam::ICFBamPopTopDepObj* CFBamPopSubDep1EditObj::getRequiredContainerContPopTopDep( bool forceRead ) {
		cfbam::ICFBamPopTopDepObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopSubDep1()->getSchema() )->getPopTopDepTableObj()->readPopTopDepByIdIdx( getPopSubDep1Buff()->getRequiredPopTopDepTenantId(),
					getPopSubDep1Buff()->getRequiredPopTopDepId() );
		}
		return( retobj );
	}

	void CFBamPopSubDep1EditObj::setRequiredContainerContPopTopDep( cfbam::ICFBamPopTopDepObj* value ) {
			
			if( value != NULL ) {
				getPopSubDep1EditBuff()->setRequiredPopTopDepTenantId( value->getRequiredTenantId() );
				getPopSubDep1EditBuff()->setRequiredPopTopDepId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamPopSubDep2Obj*> CFBamPopSubDep1EditObj::getOptionalComponentsPopDep( bool forceRead ) {
		std::vector<cfbam::ICFBamPopSubDep2Obj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsPopSubDep1()->getSchema() )->getPopSubDep2TableObj()->readPopSubDep2ByPopSubDep1Idx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamPopSubDep1EditObj::copyBuffToOrig() {
		cfbam::CFBamPopSubDep1Buff* origBuff = getOrigAsPopSubDep1()->getPopSubDep1EditBuff();
		cfbam::CFBamPopSubDep1Buff* myBuff = getPopSubDep1Buff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamPopSubDep1EditObj::copyOrigToBuff() {
		cfbam::CFBamPopSubDep1Buff* origBuff = getOrigAsPopSubDep1()->getPopSubDep1Buff();
		cfbam::CFBamPopSubDep1Buff* myBuff = getPopSubDep1EditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
