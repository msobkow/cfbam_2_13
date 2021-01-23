// Description: C++18 base object instance implementation for CFBam DelTopDep.

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
#include <cfbamobj/CFBamDelTopDepObj.hpp>

namespace cfbam {

	const std::string CFBamDelTopDepObj::CLASS_NAME( "CFBamDelTopDepObj" );
	const classcode_t CFBamDelTopDepObj::CLASS_CODE = 0xa81bL;

	const std::string& CFBamDelTopDepObj::getRequiredName() {
		return( getDelTopDepBuff()->getRequiredName() );
	}

	const std::string* CFBamDelTopDepObj::getRequiredNameReference() {
		return( getDelTopDepBuff()->getRequiredNameReference() );
	}

	const int64_t CFBamDelTopDepObj::getRequiredTableTenantId() {
		return( getDelTopDepBuff()->getRequiredTableTenantId() );
	}

	const int64_t* CFBamDelTopDepObj::getRequiredTableTenantIdReference() {
		return( getDelTopDepBuff()->getRequiredTableTenantIdReference() );
	}

	const int64_t CFBamDelTopDepObj::getRequiredTableId() {
		return( getDelTopDepBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamDelTopDepObj::getRequiredTableIdReference() {
		return( getDelTopDepBuff()->getRequiredTableIdReference() );
	}

	bool CFBamDelTopDepObj::isOptionalPrevTenantIdNull() {
		return( getDelTopDepBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamDelTopDepObj::getOptionalPrevTenantIdValue() {
		return( getDelTopDepBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamDelTopDepObj::getOptionalPrevTenantIdReference() {
		return( getDelTopDepBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamDelTopDepObj::isOptionalPrevIdNull() {
		return( getDelTopDepBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamDelTopDepObj::getOptionalPrevIdValue() {
		return( getDelTopDepBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamDelTopDepObj::getOptionalPrevIdReference() {
		return( getDelTopDepBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamDelTopDepObj::isOptionalNextTenantIdNull() {
		return( getDelTopDepBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamDelTopDepObj::getOptionalNextTenantIdValue() {
		return( getDelTopDepBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamDelTopDepObj::getOptionalNextTenantIdReference() {
		return( getDelTopDepBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamDelTopDepObj::isOptionalNextIdNull() {
		return( getDelTopDepBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamDelTopDepObj::getOptionalNextIdValue() {
		return( getDelTopDepBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamDelTopDepObj::getOptionalNextIdReference() {
		return( getDelTopDepBuff()->getOptionalNextIdReference() );
	}


	cfbam::ICFBamTableObj* CFBamDelTopDepObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getDelTopDepBuff()->getRequiredTableTenantId(),
					getDelTopDepBuff()->getRequiredTableId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelTopDepObj::getOptionalComponentsDelDep( bool forceRead ) {
		std::vector<cfbam::ICFBamDelSubDep1Obj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelSubDep1TableObj()->readDelSubDep1ByDelTopDepIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamDelTopDepObj* CFBamDelTopDepObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamDelTopDepObj* retobj = NULL;
		bool anyMissing = false;
			if( getDelTopDepBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getDelTopDepBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelTopDepTableObj()->readDelTopDepByIdIdx( getDelTopDepBuff()->getOptionalPrevTenantIdValue(),
					getDelTopDepBuff()->getOptionalPrevIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamDelTopDepObj* CFBamDelTopDepObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamDelTopDepObj* retobj = NULL;
		bool anyMissing = false;
			if( getDelTopDepBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getDelTopDepBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelTopDepTableObj()->readDelTopDepByIdIdx( getDelTopDepBuff()->getOptionalNextTenantIdValue(),
					getDelTopDepBuff()->getOptionalNextIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamDelTopDepObj::CFBamDelTopDepObj()
	: ICFBamDelTopDepObj(),
	  CFBamDelDepObj()
	{
	}

	CFBamDelTopDepObj::CFBamDelTopDepObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamDelTopDepObj(),
	  CFBamDelDepObj( argSchema )
	{
	}

	CFBamDelTopDepObj::~CFBamDelTopDepObj() {
	}

	cfbam::CFBamScopeBuff* CFBamDelTopDepObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamDelTopDepBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableDelTopDep()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamDelTopDepObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamDelTopDepObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelTopDepObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamDelTopDepObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamDelDepObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamDelTopDepObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelTopDepObj" );
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
		static const std::string S_Name( "Name" );
		static const std::string S_TableTenantId( "TableTenantId" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamDelTopDepObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableTenantId, CFBamDelTopDepObj::getRequiredTableTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamDelTopDepObj::getRequiredTableId() ) );
		if( ! CFBamDelTopDepObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamDelTopDepObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamDelTopDepObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamDelTopDepObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamDelTopDepObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamDelTopDepObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamDelTopDepObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamDelTopDepObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamDelTopDepObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamDelTopDepObj::getGenDefName() {
		return( cfbam::CFBamDelTopDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamDelTopDepObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelTopDepObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelTopDepObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamDelTopDepObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamDelTopDepObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamDelTopDepObj::getObjQualifiedName() {
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

	std::string CFBamDelTopDepObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamDelTopDepObj::realize() {
		cfbam::ICFBamDelTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelTopDepTableObj()->realizeDelTopDep(
			(cfbam::ICFBamDelTopDepObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamDelTopDepObj::read( bool forceRead ) {
		cfbam::ICFBamDelTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelTopDepTableObj()->readDelTopDepByIdIdx( getDelTopDepBuff()->getRequiredTenantId(),
		getDelTopDepBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamDelTopDepObj* CFBamDelTopDepObj::moveUp() {
		cfbam::ICFBamDelTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelTopDepTableObj()->moveUpDelTopDep( this );
		return( dynamic_cast<cfbam::ICFBamDelTopDepObj*>( retobj ) );
	}

	cfbam::ICFBamDelTopDepObj* CFBamDelTopDepObj::moveDown() {
		cfbam::ICFBamDelTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelTopDepTableObj()->moveDownDelTopDep( this );
		return( dynamic_cast<cfbam::ICFBamDelTopDepObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelTopDepObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamDelTopDepObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelTopDepTableObj()->lockDelTopDep( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelTopDepTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamDelTopDepEditObj* CFBamDelTopDepObj::getDelTopDepEdit() {
		return( dynamic_cast<cfbam::ICFBamDelTopDepEditObj*>( edit ) );
	}

}
