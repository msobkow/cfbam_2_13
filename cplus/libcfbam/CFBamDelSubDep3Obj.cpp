// Description: C++18 base object instance implementation for CFBam DelSubDep3.

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
#include <cfbamobj/CFBamDelSubDep3Obj.hpp>

namespace cfbam {

	const std::string CFBamDelSubDep3Obj::CLASS_NAME( "CFBamDelSubDep3Obj" );
	const classcode_t CFBamDelSubDep3Obj::CLASS_CODE = 0xa81aL;

	const int64_t CFBamDelSubDep3Obj::getRequiredDelSubDep2TenantId() {
		return( getDelSubDep3Buff()->getRequiredDelSubDep2TenantId() );
	}

	const int64_t* CFBamDelSubDep3Obj::getRequiredDelSubDep2TenantIdReference() {
		return( getDelSubDep3Buff()->getRequiredDelSubDep2TenantIdReference() );
	}

	const int64_t CFBamDelSubDep3Obj::getRequiredDelSubDep2Id() {
		return( getDelSubDep3Buff()->getRequiredDelSubDep2Id() );
	}

	const int64_t* CFBamDelSubDep3Obj::getRequiredDelSubDep2IdReference() {
		return( getDelSubDep3Buff()->getRequiredDelSubDep2IdReference() );
	}

	const std::string& CFBamDelSubDep3Obj::getRequiredName() {
		return( getDelSubDep3Buff()->getRequiredName() );
	}

	const std::string* CFBamDelSubDep3Obj::getRequiredNameReference() {
		return( getDelSubDep3Buff()->getRequiredNameReference() );
	}


	cfbam::ICFBamDelSubDep2Obj* CFBamDelSubDep3Obj::getRequiredContainerDelSubDep2( bool forceRead ) {
		cfbam::ICFBamDelSubDep2Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep2TableObj()->readDelSubDep2ByIdIdx( getDelSubDep3Buff()->getRequiredDelSubDep2TenantId(),
					getDelSubDep3Buff()->getRequiredDelSubDep2Id(), forceRead );
		}
		return( retobj );
	}

	CFBamDelSubDep3Obj::CFBamDelSubDep3Obj()
	: ICFBamDelSubDep3Obj(),
	  CFBamDelDepObj()
	{
	}

	CFBamDelSubDep3Obj::CFBamDelSubDep3Obj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamDelSubDep3Obj(),
	  CFBamDelDepObj( argSchema )
	{
	}

	CFBamDelSubDep3Obj::~CFBamDelSubDep3Obj() {
	}

	cfbam::CFBamScopeBuff* CFBamDelSubDep3Obj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamDelSubDep3Buff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelSubDep3()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamDelSubDep3Obj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamDelSubDep3Obj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelSubDep3Obj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamDelSubDep3Obj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamDelDepObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamDelSubDep3Obj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep3Obj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep2TenantId, CFBamDelSubDep3Obj::getRequiredDelSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep2Id, CFBamDelSubDep3Obj::getRequiredDelSubDep2Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamDelSubDep3Obj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamDelSubDep3Obj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamDelSubDep3Obj::getGenDefName() {
		return( cfbam::CFBamDelSubDep3Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep3Obj::getScope() {
		cfbam::ICFBamDelSubDep2Obj* scope = getRequiredContainerDelSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep3Obj::getObjScope() {
		cfbam::ICFBamDelSubDep2Obj* scope = getRequiredContainerDelSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep3Obj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamDelSubDep3Obj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamDelSubDep3Obj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamDelSubDep3Obj::getObjQualifiedName() {
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

	std::string CFBamDelSubDep3Obj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamDelSubDep3Obj::realize() {
		cfbam::ICFBamDelSubDep3Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep3TableObj()->realizeDelSubDep3(
			(cfbam::ICFBamDelSubDep3Obj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamDelSubDep3Obj::read( bool forceRead ) {
		cfbam::ICFBamDelSubDep3Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep3TableObj()->readDelSubDep3ByIdIdx( getDelSubDep3Buff()->getRequiredTenantId(),
		getDelSubDep3Buff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelSubDep3Obj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamDelSubDep3Obj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep3TableObj()->lockDelSubDep3( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep3TableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamDelSubDep3EditObj* CFBamDelSubDep3Obj::getDelSubDep3Edit() {
		return( dynamic_cast<cfbam::ICFBamDelSubDep3EditObj*>( edit ) );
	}

}
