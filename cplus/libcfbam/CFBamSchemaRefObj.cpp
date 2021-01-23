// Description: C++18 base object instance implementation for CFBam SchemaRef.

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
#include <cfbamobj/CFBamSchemaRefObj.hpp>

namespace cfbam {

	const std::string CFBamSchemaRefObj::CLASS_NAME( "CFBamSchemaRefObj" );
	const classcode_t CFBamSchemaRefObj::CLASS_CODE = 0xa804L;

	const int64_t CFBamSchemaRefObj::getRequiredSchemaId() {
		return( getSchemaRefBuff()->getRequiredSchemaId() );
	}

	const int64_t* CFBamSchemaRefObj::getRequiredSchemaIdReference() {
		return( getSchemaRefBuff()->getRequiredSchemaIdReference() );
	}

	const std::string& CFBamSchemaRefObj::getRequiredName() {
		return( getSchemaRefBuff()->getRequiredName() );
	}

	const std::string* CFBamSchemaRefObj::getRequiredNameReference() {
		return( getSchemaRefBuff()->getRequiredNameReference() );
	}

	const std::string& CFBamSchemaRefObj::getRequiredRefModelName() {
		return( getSchemaRefBuff()->getRequiredRefModelName() );
	}

	const std::string* CFBamSchemaRefObj::getRequiredRefModelNameReference() {
		return( getSchemaRefBuff()->getRequiredRefModelNameReference() );
	}

	const std::string& CFBamSchemaRefObj::getRequiredIncludeRoot() {
		return( getSchemaRefBuff()->getRequiredIncludeRoot() );
	}

	const std::string* CFBamSchemaRefObj::getRequiredIncludeRootReference() {
		return( getSchemaRefBuff()->getRequiredIncludeRootReference() );
	}

	bool CFBamSchemaRefObj::isOptionalRefSchemaTenantIdNull() {
		return( getSchemaRefBuff()->isOptionalRefSchemaTenantIdNull() );
	}

	const int64_t CFBamSchemaRefObj::getOptionalRefSchemaTenantIdValue() {
		return( getSchemaRefBuff()->getOptionalRefSchemaTenantIdValue() );
	}

	const int64_t* CFBamSchemaRefObj::getOptionalRefSchemaTenantIdReference() {
		return( getSchemaRefBuff()->getOptionalRefSchemaTenantIdReference() );
	}

	bool CFBamSchemaRefObj::isOptionalRefSchemaIdNull() {
		return( getSchemaRefBuff()->isOptionalRefSchemaIdNull() );
	}

	const int64_t CFBamSchemaRefObj::getOptionalRefSchemaIdValue() {
		return( getSchemaRefBuff()->getOptionalRefSchemaIdValue() );
	}

	const int64_t* CFBamSchemaRefObj::getOptionalRefSchemaIdReference() {
		return( getSchemaRefBuff()->getOptionalRefSchemaIdReference() );
	}

	bool CFBamSchemaRefObj::isOptionalPrevTenantIdNull() {
		return( getSchemaRefBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamSchemaRefObj::getOptionalPrevTenantIdValue() {
		return( getSchemaRefBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamSchemaRefObj::getOptionalPrevTenantIdReference() {
		return( getSchemaRefBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamSchemaRefObj::isOptionalPrevIdNull() {
		return( getSchemaRefBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamSchemaRefObj::getOptionalPrevIdValue() {
		return( getSchemaRefBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamSchemaRefObj::getOptionalPrevIdReference() {
		return( getSchemaRefBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamSchemaRefObj::isOptionalNextTenantIdNull() {
		return( getSchemaRefBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamSchemaRefObj::getOptionalNextTenantIdValue() {
		return( getSchemaRefBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamSchemaRefObj::getOptionalNextTenantIdReference() {
		return( getSchemaRefBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamSchemaRefObj::isOptionalNextIdNull() {
		return( getSchemaRefBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamSchemaRefObj::getOptionalNextIdValue() {
		return( getSchemaRefBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamSchemaRefObj::getOptionalNextIdReference() {
		return( getSchemaRefBuff()->getOptionalNextIdReference() );
	}


	cfbam::ICFBamSchemaDefObj* CFBamSchemaRefObj::getRequiredContainerSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getPKey()->getRequiredTenantId(),
					getSchemaRefBuff()->getRequiredSchemaId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaRefObj::getOptionalLookupRefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getSchemaRefBuff()->isOptionalRefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getSchemaRefBuff()->isOptionalRefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getSchemaRefBuff()->getOptionalRefSchemaTenantIdValue(),
					getSchemaRefBuff()->getOptionalRefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamSchemaRefObj* retobj = NULL;
		bool anyMissing = false;
			if( getSchemaRefBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getSchemaRefBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaRefTableObj()->readSchemaRefByIdIdx( getSchemaRefBuff()->getOptionalPrevTenantIdValue(),
					getSchemaRefBuff()->getOptionalPrevIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamSchemaRefObj* retobj = NULL;
		bool anyMissing = false;
			if( getSchemaRefBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getSchemaRefBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaRefTableObj()->readSchemaRefByIdIdx( getSchemaRefBuff()->getOptionalNextTenantIdValue(),
					getSchemaRefBuff()->getOptionalNextIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamSchemaRefObj::CFBamSchemaRefObj()
	: ICFBamSchemaRefObj(),
	  CFBamScopeObj()
	{
	}

	CFBamSchemaRefObj::CFBamSchemaRefObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamSchemaRefObj(),
	  CFBamScopeObj( argSchema )
	{
	}

	CFBamSchemaRefObj::~CFBamSchemaRefObj() {
	}

	cfbam::CFBamScopeBuff* CFBamSchemaRefObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamSchemaRefBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamSchemaRefObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamSchemaRefObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamSchemaRefObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamSchemaRefObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamSchemaRefObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaRefObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_SchemaId( "SchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_RefModelName( "RefModelName" );
		static const std::string S_IncludeRoot( "IncludeRoot" );
		static const std::string S_RefSchemaTenantId( "RefSchemaTenantId" );
		static const std::string S_RefSchemaId( "RefSchemaId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaId, CFBamSchemaRefObj::getRequiredSchemaId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamSchemaRefObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_RefModelName, CFBamSchemaRefObj::getRequiredRefModelName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_IncludeRoot, CFBamSchemaRefObj::getRequiredIncludeRoot() ) );
		if( ! CFBamSchemaRefObj::isOptionalRefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RefSchemaTenantId, CFBamSchemaRefObj::getOptionalRefSchemaTenantIdValue() ) );
		}
		if( ! CFBamSchemaRefObj::isOptionalRefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RefSchemaId, CFBamSchemaRefObj::getOptionalRefSchemaIdValue() ) );
		}
		if( ! CFBamSchemaRefObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamSchemaRefObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamSchemaRefObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamSchemaRefObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamSchemaRefObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamSchemaRefObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamSchemaRefObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamSchemaRefObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamSchemaRefObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamSchemaRefObj::getGenDefName() {
		return( cfbam::CFBamSchemaRefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSchemaRefObj::getScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchema();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSchemaRefObj::getObjScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchema();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSchemaRefObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSchemaRefObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSchemaRefObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamSchemaRefObj::getObjQualifiedName() {
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

	std::string CFBamSchemaRefObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamSchemaRefObj::realize() {
		cfbam::ICFBamSchemaRefObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaRefTableObj()->realizeSchemaRef(
			(cfbam::ICFBamSchemaRefObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamSchemaRefObj::read( bool forceRead ) {
		cfbam::ICFBamSchemaRefObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaRefTableObj()->readSchemaRefByIdIdx( getSchemaRefBuff()->getRequiredTenantId(),
		getSchemaRefBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefObj::moveUp() {
		cfbam::ICFBamSchemaRefObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaRefTableObj()->moveUpSchemaRef( this );
		return( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( retobj ) );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefObj::moveDown() {
		cfbam::ICFBamSchemaRefObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaRefTableObj()->moveDownSchemaRef( this );
		return( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamSchemaRefObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamSchemaRefObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaRefTableObj()->lockSchemaRef( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaRefTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamSchemaRefEditObj* CFBamSchemaRefObj::getSchemaRefEdit() {
		return( dynamic_cast<cfbam::ICFBamSchemaRefEditObj*>( edit ) );
	}

}
