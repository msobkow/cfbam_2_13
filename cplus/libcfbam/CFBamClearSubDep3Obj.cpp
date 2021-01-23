// Description: C++18 base object instance implementation for CFBam ClearSubDep3.

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
#include <cfbamobj/ICFBamClearDepObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamClearSubDep3Obj.hpp>

namespace cfbam {

	const std::string CFBamClearSubDep3Obj::CLASS_NAME( "CFBamClearSubDep3Obj" );
	const classcode_t CFBamClearSubDep3Obj::CLASS_CODE = 0xa813L;

	const int64_t CFBamClearSubDep3Obj::getRequiredClearSubDep2TenantId() {
		return( getClearSubDep3Buff()->getRequiredClearSubDep2TenantId() );
	}

	const int64_t* CFBamClearSubDep3Obj::getRequiredClearSubDep2TenantIdReference() {
		return( getClearSubDep3Buff()->getRequiredClearSubDep2TenantIdReference() );
	}

	const int64_t CFBamClearSubDep3Obj::getRequiredClearSubDep2Id() {
		return( getClearSubDep3Buff()->getRequiredClearSubDep2Id() );
	}

	const int64_t* CFBamClearSubDep3Obj::getRequiredClearSubDep2IdReference() {
		return( getClearSubDep3Buff()->getRequiredClearSubDep2IdReference() );
	}

	const std::string& CFBamClearSubDep3Obj::getRequiredName() {
		return( getClearSubDep3Buff()->getRequiredName() );
	}

	const std::string* CFBamClearSubDep3Obj::getRequiredNameReference() {
		return( getClearSubDep3Buff()->getRequiredNameReference() );
	}


	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep3Obj::getRequiredContainerClearSubDep2( bool forceRead ) {
		cfbam::ICFBamClearSubDep2Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearSubDep2TableObj()->readClearSubDep2ByIdIdx( getClearSubDep3Buff()->getRequiredClearSubDep2TenantId(),
					getClearSubDep3Buff()->getRequiredClearSubDep2Id(), forceRead );
		}
		return( retobj );
	}

	CFBamClearSubDep3Obj::CFBamClearSubDep3Obj()
	: ICFBamClearSubDep3Obj(),
	  CFBamClearDepObj()
	{
	}

	CFBamClearSubDep3Obj::CFBamClearSubDep3Obj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamClearSubDep3Obj(),
	  CFBamClearDepObj( argSchema )
	{
	}

	CFBamClearSubDep3Obj::~CFBamClearSubDep3Obj() {
	}

	cfbam::CFBamScopeBuff* CFBamClearSubDep3Obj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamClearSubDep3Buff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep3()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamClearSubDep3Obj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamClearSubDep3Obj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClearSubDep3Obj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamClearSubDep3Obj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamClearDepObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamClearSubDep3Obj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep3Obj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamClearDepObj::getRequiredRelationId() ) );
		if( ! CFBamClearDepObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamClearDepObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamClearDepObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamClearDepObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep2TenantId, CFBamClearSubDep3Obj::getRequiredClearSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep2Id, CFBamClearSubDep3Obj::getRequiredClearSubDep2Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamClearSubDep3Obj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamClearSubDep3Obj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamClearSubDep3Obj::getGenDefName() {
		return( cfbam::CFBamClearSubDep3Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep3Obj::getScope() {
		cfbam::ICFBamClearSubDep2Obj* scope = getRequiredContainerClearSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep3Obj::getObjScope() {
		cfbam::ICFBamClearSubDep2Obj* scope = getRequiredContainerClearSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep3Obj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamClearSubDep3Obj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamClearSubDep3Obj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamClearSubDep3Obj::getObjQualifiedName() {
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

	std::string CFBamClearSubDep3Obj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamClearSubDep3Obj::realize() {
		cfbam::ICFBamClearSubDep3Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearSubDep3TableObj()->realizeClearSubDep3(
			(cfbam::ICFBamClearSubDep3Obj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamClearSubDep3Obj::read( bool forceRead ) {
		cfbam::ICFBamClearSubDep3Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearSubDep3TableObj()->readClearSubDep3ByIdIdx( getClearSubDep3Buff()->getRequiredTenantId(),
		getClearSubDep3Buff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearSubDep3Obj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamClearSubDep3Obj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearSubDep3TableObj()->lockClearSubDep3( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearSubDep3TableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamClearSubDep3EditObj* CFBamClearSubDep3Obj::getClearSubDep3Edit() {
		return( dynamic_cast<cfbam::ICFBamClearSubDep3EditObj*>( edit ) );
	}

}
