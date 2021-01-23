// Description: C++18 base object instance implementation for CFBam DelSubDep2.

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
#include <cfbamobj/ICFBamDelDepObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamDelDepObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamDelSubDep2Obj.hpp>

namespace cfbam {

	const std::string CFBamDelSubDep2Obj::CLASS_NAME( "CFBamDelSubDep2Obj" );
	const classcode_t CFBamDelSubDep2Obj::CLASS_CODE = 0xa819L;

	const int64_t CFBamDelSubDep2Obj::getRequiredDelSubDep1TenantId() {
		return( getDelSubDep2Buff()->getRequiredDelSubDep1TenantId() );
	}

	const int64_t* CFBamDelSubDep2Obj::getRequiredDelSubDep1TenantIdReference() {
		return( getDelSubDep2Buff()->getRequiredDelSubDep1TenantIdReference() );
	}

	const int64_t CFBamDelSubDep2Obj::getRequiredDelSubDep1Id() {
		return( getDelSubDep2Buff()->getRequiredDelSubDep1Id() );
	}

	const int64_t* CFBamDelSubDep2Obj::getRequiredDelSubDep1IdReference() {
		return( getDelSubDep2Buff()->getRequiredDelSubDep1IdReference() );
	}

	const std::string& CFBamDelSubDep2Obj::getRequiredName() {
		return( getDelSubDep2Buff()->getRequiredName() );
	}

	const std::string* CFBamDelSubDep2Obj::getRequiredNameReference() {
		return( getDelSubDep2Buff()->getRequiredNameReference() );
	}


	cfbam::ICFBamDelSubDep1Obj* CFBamDelSubDep2Obj::getRequiredContainerDelSubDep1( bool forceRead ) {
		cfbam::ICFBamDelSubDep1Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep1TableObj()->readDelSubDep1ByIdIdx( getDelSubDep2Buff()->getRequiredDelSubDep1TenantId(),
					getDelSubDep2Buff()->getRequiredDelSubDep1Id(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamDelSubDep3Obj*> CFBamDelSubDep2Obj::getOptionalComponentsDelDep( bool forceRead ) {
		std::vector<cfbam::ICFBamDelSubDep3Obj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep3TableObj()->readDelSubDep3ByDelSubDep2Idx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamDelSubDep2Obj::CFBamDelSubDep2Obj()
	: ICFBamDelSubDep2Obj(),
	  CFBamDelDepObj()
	{
	}

	CFBamDelSubDep2Obj::CFBamDelSubDep2Obj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamDelSubDep2Obj(),
	  CFBamDelDepObj( argSchema )
	{
	}

	CFBamDelSubDep2Obj::~CFBamDelSubDep2Obj() {
	}

	cfbam::CFBamScopeBuff* CFBamDelSubDep2Obj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamDelSubDep2Buff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep2()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamDelSubDep2Obj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamDelSubDep2Obj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelSubDep2Obj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamDelSubDep2Obj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamDelDepObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamDelSubDep2Obj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep2Obj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeObj::getRequiredId() ) );
		if( ! CFBamDelDepObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamDelDepObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamDelDepObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamDelDepObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationTenantId, CFBamDelDepObj::getRequiredRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamDelDepObj::getRequiredRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1TenantId, CFBamDelSubDep2Obj::getRequiredDelSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1Id, CFBamDelSubDep2Obj::getRequiredDelSubDep1Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamDelSubDep2Obj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamDelSubDep2Obj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamDelSubDep2Obj::getGenDefName() {
		return( cfbam::CFBamDelSubDep2Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep2Obj::getScope() {
		cfbam::ICFBamDelSubDep1Obj* scope = getRequiredContainerDelSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep2Obj::getObjScope() {
		cfbam::ICFBamDelSubDep1Obj* scope = getRequiredContainerDelSubDep1();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep2Obj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamDelSubDep2Obj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep2Obj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamDelSubDep2Obj::getObjQualifiedName() {
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

	std::string CFBamDelSubDep2Obj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamDelSubDep2Obj::realize() {
		cfbam::ICFBamDelSubDep2Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep2TableObj()->realizeDelSubDep2(
			(cfbam::ICFBamDelSubDep2Obj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamDelSubDep2Obj::read( bool forceRead ) {
		cfbam::ICFBamDelSubDep2Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep2TableObj()->readDelSubDep2ByIdIdx( getDelSubDep2Buff()->getRequiredTenantId(),
		getDelSubDep2Buff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep2Obj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamDelSubDep2Obj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep2TableObj()->lockDelSubDep2( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep2TableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamDelSubDep2EditObj* CFBamDelSubDep2Obj::getDelSubDep2Edit() {
		return( dynamic_cast<cfbam::ICFBamDelSubDep2EditObj*>( edit ) );
	}

}
