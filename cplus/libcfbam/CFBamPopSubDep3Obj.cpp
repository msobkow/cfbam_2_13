// Description: C++18 base object instance implementation for CFBam PopSubDep3.

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
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamPopDepObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamPopDepObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamPopSubDep3Obj.hpp>

namespace cfbam {

	const std::string CFBamPopSubDep3Obj::CLASS_NAME( "CFBamPopSubDep3Obj" );
	const classcode_t CFBamPopSubDep3Obj::CLASS_CODE = 0xa833L;

	const int64_t CFBamPopSubDep3Obj::getRequiredPopSubDep2TenantId() {
		return( getPopSubDep3Buff()->getRequiredPopSubDep2TenantId() );
	}

	const int64_t* CFBamPopSubDep3Obj::getRequiredPopSubDep2TenantIdReference() {
		return( getPopSubDep3Buff()->getRequiredPopSubDep2TenantIdReference() );
	}

	const int64_t CFBamPopSubDep3Obj::getRequiredPopSubDep2Id() {
		return( getPopSubDep3Buff()->getRequiredPopSubDep2Id() );
	}

	const int64_t* CFBamPopSubDep3Obj::getRequiredPopSubDep2IdReference() {
		return( getPopSubDep3Buff()->getRequiredPopSubDep2IdReference() );
	}

	const std::string& CFBamPopSubDep3Obj::getRequiredName() {
		return( getPopSubDep3Buff()->getRequiredName() );
	}

	const std::string* CFBamPopSubDep3Obj::getRequiredNameReference() {
		return( getPopSubDep3Buff()->getRequiredNameReference() );
	}


	cfbam::ICFBamPopSubDep2Obj* CFBamPopSubDep3Obj::getRequiredContainerPopSubDep2( bool forceRead ) {
		cfbam::ICFBamPopSubDep2Obj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep2TableObj()->readPopSubDep2ByIdIdx( getPopSubDep3Buff()->getRequiredPopSubDep2TenantId(),
					getPopSubDep3Buff()->getRequiredPopSubDep2Id(), forceRead );
		}
		return( retobj );
	}

	CFBamPopSubDep3Obj::CFBamPopSubDep3Obj()
	: ICFBamPopSubDep3Obj(),
	  CFBamPopDepObj()
	{
	}

	CFBamPopSubDep3Obj::CFBamPopSubDep3Obj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamPopSubDep3Obj(),
	  CFBamPopDepObj( argSchema )
	{
	}

	CFBamPopSubDep3Obj::~CFBamPopSubDep3Obj() {
	}

	cfbam::CFBamScopeBuff* CFBamPopSubDep3Obj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamPopSubDep3Buff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTablePopSubDep3()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamPopSubDep3Obj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamPopSubDep3Obj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopSubDep3Obj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamPopSubDep3Obj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamPopDepObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamPopSubDep3Obj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep3Obj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep2TenantId, CFBamPopSubDep3Obj::getRequiredPopSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep2Id, CFBamPopSubDep3Obj::getRequiredPopSubDep2Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamPopSubDep3Obj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamPopSubDep3Obj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamPopSubDep3Obj::getGenDefName() {
		return( cfbam::CFBamPopSubDep3Buff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep3Obj::getScope() {
		cfbam::ICFBamPopSubDep2Obj* scope = getRequiredContainerPopSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep3Obj::getObjScope() {
		cfbam::ICFBamPopSubDep2Obj* scope = getRequiredContainerPopSubDep2();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep3Obj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamPopSubDep3Obj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamPopSubDep3Obj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamPopSubDep3Obj::getObjQualifiedName() {
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

	std::string CFBamPopSubDep3Obj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamPopSubDep3Obj::realize() {
		cfbam::ICFBamPopSubDep3Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep3TableObj()->realizePopSubDep3(
			(cfbam::ICFBamPopSubDep3Obj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamPopSubDep3Obj::read( bool forceRead ) {
		cfbam::ICFBamPopSubDep3Obj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep3TableObj()->readPopSubDep3ByIdIdx( getPopSubDep3Buff()->getRequiredTenantId(),
		getPopSubDep3Buff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopSubDep3Obj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamPopSubDep3Obj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep3TableObj()->lockPopSubDep3( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep3TableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamPopSubDep3EditObj* CFBamPopSubDep3Obj::getPopSubDep3Edit() {
		return( dynamic_cast<cfbam::ICFBamPopSubDep3EditObj*>( edit ) );
	}

}
