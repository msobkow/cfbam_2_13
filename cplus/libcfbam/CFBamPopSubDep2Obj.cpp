// Description: C++18 base object instance implementation for CFBam PopSubDep2.

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
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamPopDepObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamPopDepObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamPopSubDep2Obj.hpp>

namespace cfbam {

	const std::string CFBamPopSubDep2Obj::CLASS_NAME( "CFBamPopSubDep2Obj" );
	const classcode_t CFBamPopSubDep2Obj::CLASS_CODE = 0xa832L;

	const int64_t CFBamPopSubDep2Obj::getRequiredPopSubDep1TenantId() {
		return( getPopSubDep2Buff()->getRequiredPopSubDep1TenantId() );
	}

	const int64_t* CFBamPopSubDep2Obj::getRequiredPopSubDep1TenantIdReference() {
		return( getPopSubDep2Buff()->getRequiredPopSubDep1TenantIdReference() );
	}

	const int64_t CFBamPopSubDep2Obj::getRequiredPopSubDep1Id() {
		return( getPopSubDep2Buff()->getRequiredPopSubDep1Id() );
	}

	const int64_t* CFBamPopSubDep2Obj::getRequiredPopSubDep1IdReference() {
		return( getPopSubDep2Buff()->getRequiredPopSubDep1IdReference() );
	}

	const std::string& CFBamPopSubDep2Obj::getRequiredName() {
		return( getPopSubDep2Buff()->getRequiredName() );
	}

	const std::string* CFBamPopSubDep2Obj::getRequiredNameReference() {
		return( getPopSubDep2Buff()->getRequiredNameReference() );
	}


	cfbam::ICFBamPopSubDep1Obj* CFBamPopSubDep2Obj::getRequiredContainerPopSubDep1( bool forceRead ) {
		cfbam::ICFBamPopSubDep1Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep1TableObj()->readPopSubDep1ByIdIdx( getPopSubDep2Buff()->getRequiredPopSubDep1TenantId(),
					getPopSubDep2Buff()->getRequiredPopSubDep1Id(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamPopSubDep3Obj*> CFBamPopSubDep2Obj::getOptionalComponentsPopDep( bool forceRead ) {
		std::vector<cfbam::ICFBamPopSubDep3Obj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep3TableObj()->readPopSubDep3ByPopSubDep2Idx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamPopSubDep2Obj::CFBamPopSubDep2Obj()
	: ICFBamPopSubDep2Obj(),
	  CFBamPopDepObj()
	{
	}

	CFBamPopSubDep2Obj::CFBamPopSubDep2Obj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamPopSubDep2Obj(),
	  CFBamPopDepObj( argSchema )
	{
	}

	CFBamPopSubDep2Obj::~CFBamPopSubDep2Obj() {
	}

	cfbam::CFBamScopeBuff* CFBamPopSubDep2Obj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamPopSubDep2Buff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTablePopSubDep2()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamPopSubDep2Obj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamPopSubDep2Obj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopSubDep2Obj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamPopSubDep2Obj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamPopDepObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamPopSubDep2Obj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep2Obj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeObj::getRequiredId() ) );
		if( ! CFBamPopDepObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamPopDepObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamPopDepObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamPopDepObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationTenantId, CFBamPopDepObj::getRequiredRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamPopDepObj::getRequiredRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep1TenantId, CFBamPopSubDep2Obj::getRequiredPopSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep1Id, CFBamPopSubDep2Obj::getRequiredPopSubDep1Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamPopSubDep2Obj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamPopSubDep2Obj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamPopSubDep2Obj::getGenDefName() {
		return( cfbam::CFBamPopSubDep2Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep2Obj::getScope() {
		cfbam::ICFBamPopSubDep1Obj* scope = getRequiredContainerPopSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep2Obj::getObjScope() {
		cfbam::ICFBamPopSubDep1Obj* scope = getRequiredContainerPopSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep2Obj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamPopSubDep2Obj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep2Obj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamPopSubDep2Obj::getObjQualifiedName() {
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

	std::string CFBamPopSubDep2Obj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamPopSubDep2Obj::realize() {
		cfbam::ICFBamPopSubDep2Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep2TableObj()->realizePopSubDep2(
			(cfbam::ICFBamPopSubDep2Obj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamPopSubDep2Obj::read( bool forceRead ) {
		cfbam::ICFBamPopSubDep2Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep2TableObj()->readPopSubDep2ByIdIdx( getPopSubDep2Buff()->getRequiredTenantId(),
		getPopSubDep2Buff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep2Obj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamPopSubDep2Obj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep2TableObj()->lockPopSubDep2( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep2TableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamPopSubDep2EditObj* CFBamPopSubDep2Obj::getPopSubDep2Edit() {
		return( dynamic_cast<cfbam::ICFBamPopSubDep2EditObj*>( edit ) );
	}

}
