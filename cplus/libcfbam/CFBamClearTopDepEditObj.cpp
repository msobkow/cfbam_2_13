// Description: C++18 edit object instance implementation for CFBam ClearTopDep.

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
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/CFBamClearTopDepObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamClearDepObj.hpp>
#include <cfbamobj/ICFBamClearDepEditObj.hpp>
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/CFBamClearDepEditObj.hpp>
#include <cfbamobj/CFBamClearTopDepEditObj.hpp>


namespace cfbam {

	const std::string CFBamClearTopDepEditObj::CLASS_NAME( "CFBamClearTopDepEditObj" );

	CFBamClearTopDepEditObj::CFBamClearTopDepEditObj( cfbam::ICFBamClearTopDepObj* argOrig )
	: ICFBamClearTopDepEditObj(),
	  CFBamClearDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamClearTopDepEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamClearTopDepEditObj::~CFBamClearTopDepEditObj() {
	}

	const std::string& CFBamClearTopDepEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClearTopDepEditObj::getClassCode() const {
		return( cfbam::CFBamClearTopDepBuff::CLASS_CODE );
	}

	bool CFBamClearTopDepEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamClearTopDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamClearDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamClearTopDepEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearTopDepEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamClearDepEditObj::getRequiredRelationId() ) );
		if( ! CFBamClearDepEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamClearDepEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamClearDepEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamClearDepEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableTenantId, CFBamClearTopDepEditObj::getRequiredTableTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamClearTopDepEditObj::getRequiredTableId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamClearTopDepEditObj::getRequiredName() ) );
		if( ! CFBamClearTopDepEditObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamClearTopDepEditObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamClearTopDepEditObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamClearTopDepEditObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamClearTopDepEditObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamClearTopDepEditObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamClearTopDepEditObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamClearTopDepEditObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamClearTopDepEditObj::getGenDefName() {
		return( cfbam::CFBamClearTopDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamClearTopDepEditObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearTopDepEditObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamClearTopDepEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamClearTopDepEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamClearTopDepEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamClearTopDepEditObj::getObjQualifiedName() {
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

	std::string CFBamClearTopDepEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamClearTopDepEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamClearTopDepObj* retobj = getSchema()->getClearTopDepTableObj()->realizeClearTopDep( dynamic_cast<cfbam::ICFBamClearTopDepObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamClearTopDepObj* CFBamClearTopDepEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamClearTopDepObj* CFBamClearTopDepEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamScopeObj* CFBamClearTopDepEditObj::create() {
		cfbam::ICFBamClearTopDepObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearTopDep()->getSchema() )->getClearTopDepTableObj()->createClearTopDep( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearTopDepEditObj::update() {
		getSchema()->getClearTopDepTableObj()->updateClearTopDep( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearTopDepEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getClearTopDepTableObj()->deleteClearTopDep( this );
		return( NULL );
	}

	cfbam::ICFBamClearTopDepTableObj* CFBamClearTopDepEditObj::getClearTopDepTable() {
		return( orig->getSchema()->getClearTopDepTableObj() );
	}

	cfbam::ICFBamClearTopDepEditObj* CFBamClearTopDepEditObj::getClearTopDepEdit() {
		return( (cfbam::ICFBamClearTopDepEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamClearTopDepEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamClearTopDepObj* CFBamClearTopDepEditObj::getOrigAsClearTopDep() {
		return( dynamic_cast<cfbam::ICFBamClearTopDepObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamClearTopDepEditObj::getBuff() {
		return( buff );
	}

	void CFBamClearTopDepEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamClearDepEditObj::setBuff( value );
		}
	}

	const int64_t CFBamClearTopDepEditObj::getRequiredTableTenantId() {
		return( getClearTopDepBuff()->getRequiredTableTenantId() );
	}

	const int64_t* CFBamClearTopDepEditObj::getRequiredTableTenantIdReference() {
		return( getClearTopDepBuff()->getRequiredTableTenantIdReference() );
	}

	const int64_t CFBamClearTopDepEditObj::getRequiredTableId() {
		return( getClearTopDepBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamClearTopDepEditObj::getRequiredTableIdReference() {
		return( getClearTopDepBuff()->getRequiredTableIdReference() );
	}

	const std::string& CFBamClearTopDepEditObj::getRequiredName() {
		return( getClearTopDepBuff()->getRequiredName() );
	}

	const std::string* CFBamClearTopDepEditObj::getRequiredNameReference() {
		return( getClearTopDepBuff()->getRequiredNameReference() );
	}

	void CFBamClearTopDepEditObj::setRequiredName( const std::string& value ) {
		if( getClearTopDepBuff()->getRequiredName() != value ) {
			getClearTopDepEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamClearTopDepEditObj::isOptionalPrevTenantIdNull() {
		return( getClearTopDepBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamClearTopDepEditObj::getOptionalPrevTenantIdValue() {
		return( getClearTopDepBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamClearTopDepEditObj::getOptionalPrevTenantIdReference() {
		return( getClearTopDepBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamClearTopDepEditObj::isOptionalPrevIdNull() {
		return( getClearTopDepBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamClearTopDepEditObj::getOptionalPrevIdValue() {
		return( getClearTopDepBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamClearTopDepEditObj::getOptionalPrevIdReference() {
		return( getClearTopDepBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamClearTopDepEditObj::isOptionalNextTenantIdNull() {
		return( getClearTopDepBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamClearTopDepEditObj::getOptionalNextTenantIdValue() {
		return( getClearTopDepBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamClearTopDepEditObj::getOptionalNextTenantIdReference() {
		return( getClearTopDepBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamClearTopDepEditObj::isOptionalNextIdNull() {
		return( getClearTopDepBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamClearTopDepEditObj::getOptionalNextIdValue() {
		return( getClearTopDepBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamClearTopDepEditObj::getOptionalNextIdReference() {
		return( getClearTopDepBuff()->getOptionalNextIdReference() );
	}

	cfbam::ICFBamTableObj* CFBamClearTopDepEditObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearTopDep()->getSchema() )->getTableTableObj()->readTableByIdIdx( getClearTopDepBuff()->getRequiredTableTenantId(),
					getClearTopDepBuff()->getRequiredTableId() );
		}
		return( retobj );
	}

	void CFBamClearTopDepEditObj::setRequiredContainerTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getClearTopDepEditBuff()->setRequiredTableTenantId( value->getRequiredTenantId() );
				getClearTopDepEditBuff()->setRequiredTableId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamClearSubDep1Obj*> CFBamClearTopDepEditObj::getOptionalComponentsClearDep( bool forceRead ) {
		std::vector<cfbam::ICFBamClearSubDep1Obj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearTopDep()->getSchema() )->getClearSubDep1TableObj()->readClearSubDep1ByClearTopDepIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamClearTopDepObj* CFBamClearTopDepEditObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamClearTopDepObj* retobj = NULL;
		bool anyMissing = false;

			if( getClearTopDepBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getClearTopDepBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearTopDep()->getSchema() )->getClearTopDepTableObj()->readClearTopDepByIdIdx( getClearTopDepBuff()->getOptionalPrevTenantIdValue(),
					getClearTopDepBuff()->getOptionalPrevIdValue() );
		}
		return( retobj );
	}

	void CFBamClearTopDepEditObj::setOptionalLookupPrev( cfbam::ICFBamClearTopDepObj* value ) {
			
			if( value != NULL ) {
				getClearTopDepEditBuff()->setOptionalPrevTenantIdValue( value->getRequiredTenantId() );
				getClearTopDepEditBuff()->setOptionalPrevIdValue( value->getRequiredId() );
			}
			else {
				getClearTopDepEditBuff()->setOptionalPrevTenantIdNull();
				getClearTopDepEditBuff()->setOptionalPrevIdNull();
			}
		}

	cfbam::ICFBamClearTopDepObj* CFBamClearTopDepEditObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamClearTopDepObj* retobj = NULL;
		bool anyMissing = false;

			if( getClearTopDepBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getClearTopDepBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsClearTopDep()->getSchema() )->getClearTopDepTableObj()->readClearTopDepByIdIdx( getClearTopDepBuff()->getOptionalNextTenantIdValue(),
					getClearTopDepBuff()->getOptionalNextIdValue() );
		}
		return( retobj );
	}

	void CFBamClearTopDepEditObj::setOptionalLookupNext( cfbam::ICFBamClearTopDepObj* value ) {
			
			if( value != NULL ) {
				getClearTopDepEditBuff()->setOptionalNextTenantIdValue( value->getRequiredTenantId() );
				getClearTopDepEditBuff()->setOptionalNextIdValue( value->getRequiredId() );
			}
			else {
				getClearTopDepEditBuff()->setOptionalNextTenantIdNull();
				getClearTopDepEditBuff()->setOptionalNextIdNull();
			}
		}

	void CFBamClearTopDepEditObj::copyBuffToOrig() {
		cfbam::CFBamClearTopDepBuff* origBuff = getOrigAsClearTopDep()->getClearTopDepEditBuff();
		cfbam::CFBamClearTopDepBuff* myBuff = getClearTopDepBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamClearTopDepEditObj::copyOrigToBuff() {
		cfbam::CFBamClearTopDepBuff* origBuff = getOrigAsClearTopDep()->getClearTopDepBuff();
		cfbam::CFBamClearTopDepBuff* myBuff = getClearTopDepEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
