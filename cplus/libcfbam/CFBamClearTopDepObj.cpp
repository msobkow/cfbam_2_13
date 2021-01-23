// Description: C++18 base object instance implementation for CFBam ClearTopDep.

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
#include <cfbamobj/CFBamClearTopDepObj.hpp>

namespace cfbam {

	const std::string CFBamClearTopDepObj::CLASS_NAME( "CFBamClearTopDepObj" );
	const classcode_t CFBamClearTopDepObj::CLASS_CODE = 0xa814L;

	const int64_t CFBamClearTopDepObj::getRequiredTableTenantId() {
		return( getClearTopDepBuff()->getRequiredTableTenantId() );
	}

	const int64_t* CFBamClearTopDepObj::getRequiredTableTenantIdReference() {
		return( getClearTopDepBuff()->getRequiredTableTenantIdReference() );
	}

	const int64_t CFBamClearTopDepObj::getRequiredTableId() {
		return( getClearTopDepBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamClearTopDepObj::getRequiredTableIdReference() {
		return( getClearTopDepBuff()->getRequiredTableIdReference() );
	}

	const std::string& CFBamClearTopDepObj::getRequiredName() {
		return( getClearTopDepBuff()->getRequiredName() );
	}

	const std::string* CFBamClearTopDepObj::getRequiredNameReference() {
		return( getClearTopDepBuff()->getRequiredNameReference() );
	}

	bool CFBamClearTopDepObj::isOptionalPrevTenantIdNull() {
		return( getClearTopDepBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamClearTopDepObj::getOptionalPrevTenantIdValue() {
		return( getClearTopDepBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamClearTopDepObj::getOptionalPrevTenantIdReference() {
		return( getClearTopDepBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamClearTopDepObj::isOptionalPrevIdNull() {
		return( getClearTopDepBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamClearTopDepObj::getOptionalPrevIdValue() {
		return( getClearTopDepBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamClearTopDepObj::getOptionalPrevIdReference() {
		return( getClearTopDepBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamClearTopDepObj::isOptionalNextTenantIdNull() {
		return( getClearTopDepBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamClearTopDepObj::getOptionalNextTenantIdValue() {
		return( getClearTopDepBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamClearTopDepObj::getOptionalNextTenantIdReference() {
		return( getClearTopDepBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamClearTopDepObj::isOptionalNextIdNull() {
		return( getClearTopDepBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamClearTopDepObj::getOptionalNextIdValue() {
		return( getClearTopDepBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamClearTopDepObj::getOptionalNextIdReference() {
		return( getClearTopDepBuff()->getOptionalNextIdReference() );
	}


	cfbam::ICFBamTableObj* CFBamClearTopDepObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getClearTopDepBuff()->getRequiredTableTenantId(),
					getClearTopDepBuff()->getRequiredTableId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamClearSubDep1Obj*> CFBamClearTopDepObj::getOptionalComponentsClearDep( bool forceRead ) {
		std::vector<cfbam::ICFBamClearSubDep1Obj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearSubDep1TableObj()->readClearSubDep1ByClearTopDepIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamClearTopDepObj* CFBamClearTopDepObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamClearTopDepObj* retobj = NULL;
		bool anyMissing = false;
			if( getClearTopDepBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getClearTopDepBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearTopDepTableObj()->readClearTopDepByIdIdx( getClearTopDepBuff()->getOptionalPrevTenantIdValue(),
					getClearTopDepBuff()->getOptionalPrevIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamClearTopDepObj* CFBamClearTopDepObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamClearTopDepObj* retobj = NULL;
		bool anyMissing = false;
			if( getClearTopDepBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getClearTopDepBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearTopDepTableObj()->readClearTopDepByIdIdx( getClearTopDepBuff()->getOptionalNextTenantIdValue(),
					getClearTopDepBuff()->getOptionalNextIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamClearTopDepObj::CFBamClearTopDepObj()
	: ICFBamClearTopDepObj(),
	  CFBamClearDepObj()
	{
	}

	CFBamClearTopDepObj::CFBamClearTopDepObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamClearTopDepObj(),
	  CFBamClearDepObj( argSchema )
	{
	}

	CFBamClearTopDepObj::~CFBamClearTopDepObj() {
	}

	cfbam::CFBamScopeBuff* CFBamClearTopDepObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamClearTopDepBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearTopDep()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamClearTopDepObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamClearTopDepObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClearTopDepObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamClearTopDepObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamClearTopDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamClearDepObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamClearTopDepObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearTopDepObj" );
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
		static const std::string S_TableTenantId( "TableTenantId" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_Name( "Name" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamClearDepObj::getRequiredRelationId() ) );
		if( ! CFBamClearDepObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamClearDepObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamClearDepObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamClearDepObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableTenantId, CFBamClearTopDepObj::getRequiredTableTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamClearTopDepObj::getRequiredTableId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamClearTopDepObj::getRequiredName() ) );
		if( ! CFBamClearTopDepObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamClearTopDepObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamClearTopDepObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamClearTopDepObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamClearTopDepObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamClearTopDepObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamClearTopDepObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamClearTopDepObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamClearTopDepObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamClearTopDepObj::getGenDefName() {
		return( cfbam::CFBamClearTopDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamClearTopDepObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearTopDepObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearTopDepObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamClearTopDepObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamClearTopDepObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamClearTopDepObj::getObjQualifiedName() {
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

	std::string CFBamClearTopDepObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamClearTopDepObj::realize() {
		cfbam::ICFBamClearTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearTopDepTableObj()->realizeClearTopDep(
			(cfbam::ICFBamClearTopDepObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamClearTopDepObj::read( bool forceRead ) {
		cfbam::ICFBamClearTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearTopDepTableObj()->readClearTopDepByIdIdx( getClearTopDepBuff()->getRequiredTenantId(),
		getClearTopDepBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamClearTopDepObj* CFBamClearTopDepObj::moveUp() {
		cfbam::ICFBamClearTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearTopDepTableObj()->moveUpClearTopDep( this );
		return( dynamic_cast<cfbam::ICFBamClearTopDepObj*>( retobj ) );
	}

	cfbam::ICFBamClearTopDepObj* CFBamClearTopDepObj::moveDown() {
		cfbam::ICFBamClearTopDepObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearTopDepTableObj()->moveDownClearTopDep( this );
		return( dynamic_cast<cfbam::ICFBamClearTopDepObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearTopDepObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamClearTopDepObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearTopDepTableObj()->lockClearTopDep( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearTopDepTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamClearTopDepEditObj* CFBamClearTopDepObj::getClearTopDepEdit() {
		return( dynamic_cast<cfbam::ICFBamClearTopDepEditObj*>( edit ) );
	}

}
