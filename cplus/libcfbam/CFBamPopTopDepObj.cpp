// Description: C++18 base object instance implementation for CFBam PopTopDep.

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
#include <cfbamobj/CFBamPopTopDepObj.hpp>

namespace cfbam {

	const std::string CFBamPopTopDepObj::CLASS_NAME( "CFBamPopTopDepObj" );
	const classcode_t CFBamPopTopDepObj::CLASS_CODE = 0xa834L;

	const int64_t CFBamPopTopDepObj::getRequiredContRelationTenantId() {
		return( getPopTopDepBuff()->getRequiredContRelationTenantId() );
	}

	const int64_t* CFBamPopTopDepObj::getRequiredContRelationTenantIdReference() {
		return( getPopTopDepBuff()->getRequiredContRelationTenantIdReference() );
	}

	const int64_t CFBamPopTopDepObj::getRequiredContRelationId() {
		return( getPopTopDepBuff()->getRequiredContRelationId() );
	}

	const int64_t* CFBamPopTopDepObj::getRequiredContRelationIdReference() {
		return( getPopTopDepBuff()->getRequiredContRelationIdReference() );
	}

	const std::string& CFBamPopTopDepObj::getRequiredName() {
		return( getPopTopDepBuff()->getRequiredName() );
	}

	const std::string* CFBamPopTopDepObj::getRequiredNameReference() {
		return( getPopTopDepBuff()->getRequiredNameReference() );
	}


	cfbam::ICFBamRelationObj* CFBamPopTopDepObj::getRequiredContainerContRelation( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByIdIdx( getPopTopDepBuff()->getRequiredContRelationTenantId(),
					getPopTopDepBuff()->getRequiredContRelationId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamPopSubDep1Obj*> CFBamPopTopDepObj::getOptionalComponentsPopDep( bool forceRead ) {
		std::vector<cfbam::ICFBamPopSubDep1Obj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopSubDep1TableObj()->readPopSubDep1ByPopTopDepIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamPopTopDepObj::CFBamPopTopDepObj()
	: ICFBamPopTopDepObj(),
	  CFBamPopDepObj()
	{
	}

	CFBamPopTopDepObj::CFBamPopTopDepObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamPopTopDepObj(),
	  CFBamPopDepObj( argSchema )
	{
	}

	CFBamPopTopDepObj::~CFBamPopTopDepObj() {
	}

	cfbam::CFBamScopeBuff* CFBamPopTopDepObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamPopTopDepBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTablePopTopDep()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamPopTopDepObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamPopTopDepObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopTopDepObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamPopTopDepObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamPopDepObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamPopTopDepObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopTopDepObj" );
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
		static const std::string S_ContRelationTenantId( "ContRelationTenantId" );
		static const std::string S_ContRelationId( "ContRelationId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationTenantId, CFBamPopTopDepObj::getRequiredContRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationId, CFBamPopTopDepObj::getRequiredContRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamPopTopDepObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamPopTopDepObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamPopTopDepObj::getGenDefName() {
		return( cfbam::CFBamPopTopDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamPopTopDepObj::getScope() {
		cfbam::ICFBamRelationObj* scope = getRequiredContainerContRelation();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopTopDepObj::getObjScope() {
		cfbam::ICFBamRelationObj* scope = getRequiredContainerContRelation();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamPopTopDepObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamPopTopDepObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamPopTopDepObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamPopTopDepObj::getObjQualifiedName() {
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

	std::string CFBamPopTopDepObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamPopTopDepObj::realize() {
		cfbam::ICFBamPopTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopTopDepTableObj()->realizePopTopDep(
			(cfbam::ICFBamPopTopDepObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamPopTopDepObj::read( bool forceRead ) {
		cfbam::ICFBamPopTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopTopDepTableObj()->readPopTopDepByIdIdx( getPopTopDepBuff()->getRequiredTenantId(),
		getPopTopDepBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamPopTopDepObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamPopTopDepObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopTopDepTableObj()->lockPopTopDep( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getPopTopDepTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamPopTopDepEditObj* CFBamPopTopDepObj::getPopTopDepEdit() {
		return( dynamic_cast<cfbam::ICFBamPopTopDepEditObj*>( edit ) );
	}

}
