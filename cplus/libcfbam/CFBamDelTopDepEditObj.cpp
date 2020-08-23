// Description: C++18 edit object instance implementation for CFBam DelTopDep.

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
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamDelDepObj.hpp>
#include <cfbamobj/CFBamDelTopDepObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamDelDepObj.hpp>
#include <cfbamobj/ICFBamDelDepEditObj.hpp>
#include <cfbamobj/CFBamDelDepObj.hpp>
#include <cfbamobj/CFBamDelDepEditObj.hpp>
#include <cfbamobj/CFBamDelTopDepEditObj.hpp>


namespace cfbam {

	const std::string CFBamDelTopDepEditObj::CLASS_NAME( "CFBamDelTopDepEditObj" );

	CFBamDelTopDepEditObj::CFBamDelTopDepEditObj( cfbam::ICFBamDelTopDepObj* argOrig )
	: ICFBamDelTopDepEditObj(),
	  CFBamDelDepEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamDelTopDepEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamDelTopDepEditObj::~CFBamDelTopDepEditObj() {
	}

	const std::string& CFBamDelTopDepEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelTopDepEditObj::getClassCode() const {
		return( cfbam::CFBamDelTopDepBuff::CLASS_CODE );
	}

	bool CFBamDelTopDepEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamDelDepEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamDelTopDepEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelTopDepEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		if( ! CFBamDelDepEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamDelDepEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamDelDepEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamDelDepEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationTenantId, CFBamDelDepEditObj::getRequiredRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamDelDepEditObj::getRequiredRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamDelTopDepEditObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableTenantId, CFBamDelTopDepEditObj::getRequiredTableTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamDelTopDepEditObj::getRequiredTableId() ) );
		if( ! CFBamDelTopDepEditObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamDelTopDepEditObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamDelTopDepEditObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamDelTopDepEditObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamDelTopDepEditObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamDelTopDepEditObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamDelTopDepEditObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamDelTopDepEditObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamDelTopDepEditObj::getGenDefName() {
		return( cfbam::CFBamDelTopDepBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamDelTopDepEditObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelTopDepEditObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamDelTopDepEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamDelTopDepEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamDelTopDepEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamDelTopDepEditObj::getObjQualifiedName() {
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

	std::string CFBamDelTopDepEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamDelTopDepEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamDelTopDepObj* retobj = getSchema()->getDelTopDepTableObj()->realizeDelTopDep( dynamic_cast<cfbam::ICFBamDelTopDepObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamDelTopDepObj* CFBamDelTopDepEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamDelTopDepObj* CFBamDelTopDepEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamScopeObj* CFBamDelTopDepEditObj::create() {
		cfbam::ICFBamDelTopDepObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelTopDep()->getSchema() )->getDelTopDepTableObj()->createDelTopDep( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelTopDepEditObj::update() {
		getSchema()->getDelTopDepTableObj()->updateDelTopDep( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelTopDepEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getDelTopDepTableObj()->deleteDelTopDep( this );
		return( NULL );
	}

	cfbam::ICFBamDelTopDepTableObj* CFBamDelTopDepEditObj::getDelTopDepTable() {
		return( orig->getSchema()->getDelTopDepTableObj() );
	}

	cfbam::ICFBamDelTopDepEditObj* CFBamDelTopDepEditObj::getDelTopDepEdit() {
		return( (cfbam::ICFBamDelTopDepEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamDelTopDepEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamDelTopDepObj* CFBamDelTopDepEditObj::getOrigAsDelTopDep() {
		return( dynamic_cast<cfbam::ICFBamDelTopDepObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamDelTopDepEditObj::getBuff() {
		return( buff );
	}

	void CFBamDelTopDepEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamDelDepEditObj::setBuff( value );
		}
	}

	const std::string& CFBamDelTopDepEditObj::getRequiredName() {
		return( getDelTopDepBuff()->getRequiredName() );
	}

	const std::string* CFBamDelTopDepEditObj::getRequiredNameReference() {
		return( getDelTopDepBuff()->getRequiredNameReference() );
	}

	void CFBamDelTopDepEditObj::setRequiredName( const std::string& value ) {
		if( getDelTopDepBuff()->getRequiredName() != value ) {
			getDelTopDepEditBuff()->setRequiredName( value );
		}
	}

	const int64_t CFBamDelTopDepEditObj::getRequiredTableTenantId() {
		return( getDelTopDepBuff()->getRequiredTableTenantId() );
	}

	const int64_t* CFBamDelTopDepEditObj::getRequiredTableTenantIdReference() {
		return( getDelTopDepBuff()->getRequiredTableTenantIdReference() );
	}

	const int64_t CFBamDelTopDepEditObj::getRequiredTableId() {
		return( getDelTopDepBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamDelTopDepEditObj::getRequiredTableIdReference() {
		return( getDelTopDepBuff()->getRequiredTableIdReference() );
	}

	bool CFBamDelTopDepEditObj::isOptionalPrevTenantIdNull() {
		return( getDelTopDepBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamDelTopDepEditObj::getOptionalPrevTenantIdValue() {
		return( getDelTopDepBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamDelTopDepEditObj::getOptionalPrevTenantIdReference() {
		return( getDelTopDepBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamDelTopDepEditObj::isOptionalPrevIdNull() {
		return( getDelTopDepBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamDelTopDepEditObj::getOptionalPrevIdValue() {
		return( getDelTopDepBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamDelTopDepEditObj::getOptionalPrevIdReference() {
		return( getDelTopDepBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamDelTopDepEditObj::isOptionalNextTenantIdNull() {
		return( getDelTopDepBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamDelTopDepEditObj::getOptionalNextTenantIdValue() {
		return( getDelTopDepBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamDelTopDepEditObj::getOptionalNextTenantIdReference() {
		return( getDelTopDepBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamDelTopDepEditObj::isOptionalNextIdNull() {
		return( getDelTopDepBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamDelTopDepEditObj::getOptionalNextIdValue() {
		return( getDelTopDepBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamDelTopDepEditObj::getOptionalNextIdReference() {
		return( getDelTopDepBuff()->getOptionalNextIdReference() );
	}

	cfbam::ICFBamTableObj* CFBamDelTopDepEditObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelTopDep()->getSchema() )->getTableTableObj()->readTableByIdIdx( getDelTopDepBuff()->getRequiredTableTenantId(),
					getDelTopDepBuff()->getRequiredTableId() );
		}
		return( retobj );
	}

	void CFBamDelTopDepEditObj::setRequiredContainerTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getDelTopDepEditBuff()->setRequiredTableTenantId( value->getRequiredTenantId() );
				getDelTopDepEditBuff()->setRequiredTableId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamDelSubDep1Obj*> CFBamDelTopDepEditObj::getOptionalComponentsDelDep( bool forceRead ) {
		std::vector<cfbam::ICFBamDelSubDep1Obj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelTopDep()->getSchema() )->getDelSubDep1TableObj()->readDelSubDep1ByDelTopDepIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamDelTopDepObj* CFBamDelTopDepEditObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamDelTopDepObj* retobj = NULL;
		bool anyMissing = false;

			if( getDelTopDepBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getDelTopDepBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelTopDep()->getSchema() )->getDelTopDepTableObj()->readDelTopDepByIdIdx( getDelTopDepBuff()->getOptionalPrevTenantIdValue(),
					getDelTopDepBuff()->getOptionalPrevIdValue() );
		}
		return( retobj );
	}

	void CFBamDelTopDepEditObj::setOptionalLookupPrev( cfbam::ICFBamDelTopDepObj* value ) {
			
			if( value != NULL ) {
				getDelTopDepEditBuff()->setOptionalPrevTenantIdValue( value->getRequiredTenantId() );
				getDelTopDepEditBuff()->setOptionalPrevIdValue( value->getRequiredId() );
			}
			else {
				getDelTopDepEditBuff()->setOptionalPrevTenantIdNull();
				getDelTopDepEditBuff()->setOptionalPrevIdNull();
			}
		}

	cfbam::ICFBamDelTopDepObj* CFBamDelTopDepEditObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamDelTopDepObj* retobj = NULL;
		bool anyMissing = false;

			if( getDelTopDepBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getDelTopDepBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsDelTopDep()->getSchema() )->getDelTopDepTableObj()->readDelTopDepByIdIdx( getDelTopDepBuff()->getOptionalNextTenantIdValue(),
					getDelTopDepBuff()->getOptionalNextIdValue() );
		}
		return( retobj );
	}

	void CFBamDelTopDepEditObj::setOptionalLookupNext( cfbam::ICFBamDelTopDepObj* value ) {
			
			if( value != NULL ) {
				getDelTopDepEditBuff()->setOptionalNextTenantIdValue( value->getRequiredTenantId() );
				getDelTopDepEditBuff()->setOptionalNextIdValue( value->getRequiredId() );
			}
			else {
				getDelTopDepEditBuff()->setOptionalNextTenantIdNull();
				getDelTopDepEditBuff()->setOptionalNextIdNull();
			}
		}

	void CFBamDelTopDepEditObj::copyBuffToOrig() {
		cfbam::CFBamDelTopDepBuff* origBuff = getOrigAsDelTopDep()->getDelTopDepEditBuff();
		cfbam::CFBamDelTopDepBuff* myBuff = getDelTopDepBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamDelTopDepEditObj::copyOrigToBuff() {
		cfbam::CFBamDelTopDepBuff* origBuff = getOrigAsDelTopDep()->getDelTopDepBuff();
		cfbam::CFBamDelTopDepBuff* myBuff = getDelTopDepEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
