// Description: C++18 base object instance implementation for CFBam DelDep.

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
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamDelDepObj.hpp>

namespace cfbam {

	const std::string CFBamDelDepObj::CLASS_NAME( "CFBamDelDepObj" );
	const classcode_t CFBamDelDepObj::CLASS_CODE = 0xa817L;

	bool CFBamDelDepObj::isOptionalDefSchemaTenantIdNull() {
		return( getDelDepBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamDelDepObj::getOptionalDefSchemaTenantIdValue() {
		return( getDelDepBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamDelDepObj::getOptionalDefSchemaTenantIdReference() {
		return( getDelDepBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamDelDepObj::isOptionalDefSchemaIdNull() {
		return( getDelDepBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamDelDepObj::getOptionalDefSchemaIdValue() {
		return( getDelDepBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamDelDepObj::getOptionalDefSchemaIdReference() {
		return( getDelDepBuff()->getOptionalDefSchemaIdReference() );
	}

	const int64_t CFBamDelDepObj::getRequiredRelationTenantId() {
		return( getDelDepBuff()->getRequiredRelationTenantId() );
	}

	const int64_t* CFBamDelDepObj::getRequiredRelationTenantIdReference() {
		return( getDelDepBuff()->getRequiredRelationTenantIdReference() );
	}

	const int64_t CFBamDelDepObj::getRequiredRelationId() {
		return( getDelDepBuff()->getRequiredRelationId() );
	}

	const int64_t* CFBamDelDepObj::getRequiredRelationIdReference() {
		return( getDelDepBuff()->getRequiredRelationIdReference() );
	}


	cfbam::ICFBamRelationObj* CFBamDelDepObj::getRequiredLookupRelation( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByIdIdx( getDelDepBuff()->getRequiredRelationTenantId(),
					getDelDepBuff()->getRequiredRelationId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamDelDepObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getDelDepBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getDelDepBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getDelDepBuff()->getOptionalDefSchemaTenantIdValue(),
					getDelDepBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamDelDepObj::CFBamDelDepObj()
	: ICFBamDelDepObj(),
	  CFBamScopeObj()
	{
	}

	CFBamDelDepObj::CFBamDelDepObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamDelDepObj(),
	  CFBamScopeObj( argSchema )
	{
	}

	CFBamDelDepObj::~CFBamDelDepObj() {
	}

	cfbam::CFBamScopeBuff* CFBamDelDepObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamDelDepBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelDep()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamDelDepObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamDelDepObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelDepObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamDelDepObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamDelDepObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelDepObj" );
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
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamDelDepObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFBamDelDepObj::getGenDefName() {
		return( cfbam::CFBamDelDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamDelDepObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamDelDepObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamDelDepObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamDelDepObj::getObjQualifiedName() {
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

	std::string CFBamDelDepObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamDelDepObj::realize() {
		cfbam::ICFBamDelDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelDepTableObj()->realizeDelDep(
			(cfbam::ICFBamDelDepObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamDelDepObj::read( bool forceRead ) {
		cfbam::ICFBamDelDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelDepTableObj()->readDelDepByIdIdx( getDelDepBuff()->getRequiredTenantId(),
		getDelDepBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelDepObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamDelDepObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelDepTableObj()->lockDelDep( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelDepTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamDelDepEditObj* CFBamDelDepObj::getDelDepEdit() {
		return( dynamic_cast<cfbam::ICFBamDelDepEditObj*>( edit ) );
	}

}
