// Description: C++18 base object instance implementation for CFBam Param.

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
#include <cfbamobj/CFBamParamObj.hpp>

namespace cfbam {

	const std::string CFBamParamObj::CLASS_NAME( "CFBamParamObj" );
	const classcode_t CFBamParamObj::CLASS_CODE = 0xa82fL;

	int32_t CFBamParamObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamParamObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamParamObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamParamObj::getRequiredServerMethodId() {
		return( getParamBuff()->getRequiredServerMethodId() );
	}

	const int64_t* CFBamParamObj::getRequiredServerMethodIdReference() {
		return( getParamBuff()->getRequiredServerMethodIdReference() );
	}

	const int64_t CFBamParamObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamParamObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamParamObj::isOptionalDefSchemaTenantIdNull() {
		return( getParamBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamParamObj::getOptionalDefSchemaTenantIdValue() {
		return( getParamBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamParamObj::getOptionalDefSchemaTenantIdReference() {
		return( getParamBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamParamObj::isOptionalDefSchemaIdNull() {
		return( getParamBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamParamObj::getOptionalDefSchemaIdValue() {
		return( getParamBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamParamObj::getOptionalDefSchemaIdReference() {
		return( getParamBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamParamObj::getRequiredName() {
		return( getParamBuff()->getRequiredName() );
	}

	const std::string* CFBamParamObj::getRequiredNameReference() {
		return( getParamBuff()->getRequiredNameReference() );
	}

	bool CFBamParamObj::isOptionalShortDescriptionNull() {
		return( getParamBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamParamObj::getOptionalShortDescriptionValue() {
		return( getParamBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamParamObj::getOptionalShortDescriptionReference() {
		return( getParamBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamParamObj::isOptionalDescriptionNull() {
		return( getParamBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamParamObj::getOptionalDescriptionValue() {
		return( getParamBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamParamObj::getOptionalDescriptionReference() {
		return( getParamBuff()->getOptionalDescriptionReference() );
	}

	const bool CFBamParamObj::getRequiredIsNullable() {
		return( getParamBuff()->getRequiredIsNullable() );
	}

	const bool* CFBamParamObj::getRequiredIsNullableReference() {
		return( getParamBuff()->getRequiredIsNullableReference() );
	}

	bool CFBamParamObj::isOptionalTypeTenantIdNull() {
		return( getParamBuff()->isOptionalTypeTenantIdNull() );
	}

	const int64_t CFBamParamObj::getOptionalTypeTenantIdValue() {
		return( getParamBuff()->getOptionalTypeTenantIdValue() );
	}

	const int64_t* CFBamParamObj::getOptionalTypeTenantIdReference() {
		return( getParamBuff()->getOptionalTypeTenantIdReference() );
	}

	bool CFBamParamObj::isOptionalTypeIdNull() {
		return( getParamBuff()->isOptionalTypeIdNull() );
	}

	const int64_t CFBamParamObj::getOptionalTypeIdValue() {
		return( getParamBuff()->getOptionalTypeIdValue() );
	}

	const int64_t* CFBamParamObj::getOptionalTypeIdReference() {
		return( getParamBuff()->getOptionalTypeIdReference() );
	}

	bool CFBamParamObj::isOptionalPrevTenantIdNull() {
		return( getParamBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamParamObj::getOptionalPrevTenantIdValue() {
		return( getParamBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamParamObj::getOptionalPrevTenantIdReference() {
		return( getParamBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamParamObj::isOptionalPrevIdNull() {
		return( getParamBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamParamObj::getOptionalPrevIdValue() {
		return( getParamBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamParamObj::getOptionalPrevIdReference() {
		return( getParamBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamParamObj::isOptionalNextTenantIdNull() {
		return( getParamBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamParamObj::getOptionalNextTenantIdValue() {
		return( getParamBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamParamObj::getOptionalNextTenantIdReference() {
		return( getParamBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamParamObj::isOptionalNextIdNull() {
		return( getParamBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamParamObj::getOptionalNextIdValue() {
		return( getParamBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamParamObj::getOptionalNextIdReference() {
		return( getParamBuff()->getOptionalNextIdReference() );
	}


	cfbam::ICFBamServerMethodObj* CFBamParamObj::getRequiredContainerServerMeth( bool forceRead ) {
		cfbam::ICFBamServerMethodObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerMethodTableObj()->readServerMethodByIdIdx( getPKey()->getRequiredTenantId(),
					getParamBuff()->getRequiredServerMethodId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecTenantObj* CFBamParamObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamParamObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getParamBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getParamBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getParamBuff()->getOptionalDefSchemaTenantIdValue(),
					getParamBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamParamObj* CFBamParamObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamParamObj* retobj = NULL;
		bool anyMissing = false;
			if( getParamBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getParamBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj()->readParamByIdIdx( getParamBuff()->getOptionalPrevTenantIdValue(),
					getParamBuff()->getOptionalPrevIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamParamObj* CFBamParamObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamParamObj* retobj = NULL;
		bool anyMissing = false;
			if( getParamBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getParamBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj()->readParamByIdIdx( getParamBuff()->getOptionalNextTenantIdValue(),
					getParamBuff()->getOptionalNextIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamParamObj::getRequiredLookupType( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = NULL;
		bool anyMissing = false;
			if( getParamBuff()->isOptionalTypeTenantIdNull() ) {
				anyMissing = true;
			}
			if( getParamBuff()->isOptionalTypeIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->readValueByIdIdx( getParamBuff()->getOptionalTypeTenantIdValue(),
					getParamBuff()->getOptionalTypeIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamParamObj::CFBamParamObj()
	: ICFBamParamObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamParamObj::CFBamParamObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamParamObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamParamObj::~CFBamParamObj() {
		schema = NULL;
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}
		if( pKey != NULL ) {
			delete pKey;
			pKey = NULL;
		}

	}

	cfbam::CFBamParamBuff* CFBamParamObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamParamBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableParam()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamParamObj::setBuff( cfbam::CFBamParamBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamParamObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamParamObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamParamObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamParamBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamParamObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamParamObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ServerMethodId( "ServerMethodId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_IsNullable( "IsNullable" );
		static const std::string S_TypeTenantId( "TypeTenantId" );
		static const std::string S_TypeId( "TypeId" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamParamObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamParamObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamParamObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamParamObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamParamObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamParamObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ServerMethodId, CFBamParamObj::getRequiredServerMethodId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamParamObj::getRequiredId() ) );
		if( ! CFBamParamObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamParamObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamParamObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamParamObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamParamObj::getRequiredName() ) );
		if( ! CFBamParamObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamParamObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamParamObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamParamObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsNullable, CFBamParamObj::getRequiredIsNullable() ) );
		if( ! CFBamParamObj::isOptionalTypeTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TypeTenantId, CFBamParamObj::getOptionalTypeTenantIdValue() ) );
		}
		if( ! CFBamParamObj::isOptionalTypeIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TypeId, CFBamParamObj::getOptionalTypeIdValue() ) );
		}
		if( ! CFBamParamObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamParamObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamParamObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamParamObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamParamObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamParamObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamParamObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamParamObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamParamObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamParamObj::getGenDefName() {
		return( cfbam::CFBamParamBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamParamObj::getScope() {
		cfbam::ICFBamServerMethodObj* scope = getRequiredContainerServerMeth();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamParamObj::getObjScope() {
		cfbam::ICFBamServerMethodObj* scope = getRequiredContainerServerMeth();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamParamObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamParamObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamParamObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamParamObj::getObjQualifiedName() {
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

	std::string CFBamParamObj::getObjFullName() {
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

	cfbam::ICFBamParamObj* CFBamParamObj::realize() {
		cfbam::ICFBamParamObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj()->realizeParam(
			(cfbam::ICFBamParamObj*)this );
		return( dynamic_cast<cfbam::ICFBamParamObj*>( retobj ) );
	}

	cfbam::ICFBamParamObj* CFBamParamObj::read( bool forceRead ) {
		cfbam::ICFBamParamObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj()->readParamByIdIdx( getParamBuff()->getRequiredTenantId(),
		getParamBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamParamObj*>( retobj ) );
	}

	cfbam::ICFBamParamObj* CFBamParamObj::moveUp() {
		cfbam::ICFBamParamObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj()->moveUpParam( this );
		return( dynamic_cast<cfbam::ICFBamParamObj*>( retobj ) );
	}

	cfbam::ICFBamParamObj* CFBamParamObj::moveDown() {
		cfbam::ICFBamParamObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj()->moveDownParam( this );
		return( dynamic_cast<cfbam::ICFBamParamObj*>( retobj ) );
	}

	cfbam::ICFBamParamTableObj* CFBamParamObj::getParamTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj() );
	}

	cfbam::ICFBamSchemaObj* CFBamParamObj::getSchema() {
		return( schema );
	}

	void CFBamParamObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = value;
	}

	cfbam::CFBamParamPKey* CFBamParamObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfbam::CFBamParamPKey();
		}
		return( pKey );
	}

	void CFBamParamObj::setPKey( cfbam::CFBamParamPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfbam::CFBamParamPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamParamObj::getIsNew() {
		return( isNew );
	}

	void CFBamParamObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfbam::ICFBamParamEditObj* CFBamParamObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamParamObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj()->lockParam( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamParamEditObj*>( edit ) );
	}

	void CFBamParamObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfbam::ICFBamParamEditObj* CFBamParamObj::getEdit() {
		return( edit );
	}

	cfbam::ICFBamParamEditObj* CFBamParamObj::getParamEdit() {
		return( dynamic_cast<cfbam::ICFBamParamEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamParamObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getParamBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamParamObj::getCreatedAt() {
		return( getParamBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamParamObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getParamBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamParamObj::getUpdatedAt() {
		return( getParamBuff()->getUpdatedAt() );
	}

	void CFBamParamObj::copyPKeyToBuff() {
		cfbam::CFBamParamPKey* tablePKey = getPKey();
		cfbam::CFBamParamBuff* tableBuff = getParamEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamParamObj::copyBuffToPKey() {
		cfbam::CFBamParamPKey* tablePKey = getPKey();
		cfbam::CFBamParamBuff* tableBuff = getParamBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
