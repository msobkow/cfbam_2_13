// Description: C++18 base object instance implementation for CFBam EnumTag.

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
#include <cfbamobj/CFBamEnumTagObj.hpp>

namespace cfbam {

	const std::string CFBamEnumTagObj::CLASS_NAME( "CFBamEnumTagObj" );
	const classcode_t CFBamEnumTagObj::CLASS_CODE = 0xa81eL;

	int32_t CFBamEnumTagObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamEnumTagObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamEnumTagObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamEnumTagObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamEnumTagObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamEnumTagObj::isOptionalDefSchemaTenantIdNull() {
		return( getEnumTagBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamEnumTagObj::getOptionalDefSchemaTenantIdValue() {
		return( getEnumTagBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamEnumTagObj::getOptionalDefSchemaTenantIdReference() {
		return( getEnumTagBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamEnumTagObj::isOptionalDefSchemaIdNull() {
		return( getEnumTagBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamEnumTagObj::getOptionalDefSchemaIdValue() {
		return( getEnumTagBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamEnumTagObj::getOptionalDefSchemaIdReference() {
		return( getEnumTagBuff()->getOptionalDefSchemaIdReference() );
	}

	const int64_t CFBamEnumTagObj::getRequiredEnumId() {
		return( getEnumTagBuff()->getRequiredEnumId() );
	}

	const int64_t* CFBamEnumTagObj::getRequiredEnumIdReference() {
		return( getEnumTagBuff()->getRequiredEnumIdReference() );
	}

	bool CFBamEnumTagObj::isOptionalEnumCodeNull() {
		return( getEnumTagBuff()->isOptionalEnumCodeNull() );
	}

	const int16_t CFBamEnumTagObj::getOptionalEnumCodeValue() {
		return( getEnumTagBuff()->getOptionalEnumCodeValue() );
	}

	const int16_t* CFBamEnumTagObj::getOptionalEnumCodeReference() {
		return( getEnumTagBuff()->getOptionalEnumCodeReference() );
	}

	const std::string& CFBamEnumTagObj::getRequiredName() {
		return( getEnumTagBuff()->getRequiredName() );
	}

	const std::string* CFBamEnumTagObj::getRequiredNameReference() {
		return( getEnumTagBuff()->getRequiredNameReference() );
	}

	bool CFBamEnumTagObj::isOptionalPrevTenantIdNull() {
		return( getEnumTagBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamEnumTagObj::getOptionalPrevTenantIdValue() {
		return( getEnumTagBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamEnumTagObj::getOptionalPrevTenantIdReference() {
		return( getEnumTagBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamEnumTagObj::isOptionalPrevIdNull() {
		return( getEnumTagBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamEnumTagObj::getOptionalPrevIdValue() {
		return( getEnumTagBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamEnumTagObj::getOptionalPrevIdReference() {
		return( getEnumTagBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamEnumTagObj::isOptionalNextTenantIdNull() {
		return( getEnumTagBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamEnumTagObj::getOptionalNextTenantIdValue() {
		return( getEnumTagBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamEnumTagObj::getOptionalNextTenantIdReference() {
		return( getEnumTagBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamEnumTagObj::isOptionalNextIdNull() {
		return( getEnumTagBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamEnumTagObj::getOptionalNextIdValue() {
		return( getEnumTagBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamEnumTagObj::getOptionalNextIdReference() {
		return( getEnumTagBuff()->getOptionalNextIdReference() );
	}


	cfsec::ICFSecTenantObj* CFBamEnumTagObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamEnumDefObj* CFBamEnumTagObj::getRequiredContainerEnumDef( bool forceRead ) {
		cfbam::ICFBamEnumDefObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumDefTableObj()->readEnumDefByIdIdx( getPKey()->getRequiredTenantId(),
					getEnumTagBuff()->getRequiredEnumId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamEnumTagObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getEnumTagBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getEnumTagBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getEnumTagBuff()->getOptionalDefSchemaTenantIdValue(),
					getEnumTagBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamEnumTagObj* retobj = NULL;
		bool anyMissing = false;
			if( getEnumTagBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getEnumTagBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumTagTableObj()->readEnumTagByIdIdx( getEnumTagBuff()->getOptionalPrevTenantIdValue(),
					getEnumTagBuff()->getOptionalPrevIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamEnumTagObj* retobj = NULL;
		bool anyMissing = false;
			if( getEnumTagBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getEnumTagBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumTagTableObj()->readEnumTagByIdIdx( getEnumTagBuff()->getOptionalNextTenantIdValue(),
					getEnumTagBuff()->getOptionalNextIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamEnumTagObj::CFBamEnumTagObj()
	: ICFBamEnumTagObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamEnumTagObj::CFBamEnumTagObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamEnumTagObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamEnumTagObj::~CFBamEnumTagObj() {
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

	cfbam::CFBamEnumTagBuff* CFBamEnumTagObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamEnumTagBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableEnumTag()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamEnumTagObj::setBuff( cfbam::CFBamEnumTagBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamEnumTagObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamEnumTagObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamEnumTagObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamEnumTagObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamEnumTagObj" );
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
		static const std::string S_EnumId( "EnumId" );
		static const std::string S_EnumCode( "EnumCode" );
		static const std::string S_Name( "Name" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamEnumTagObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamEnumTagObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamEnumTagObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamEnumTagObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamEnumTagObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamEnumTagObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamEnumTagObj::getRequiredId() ) );
		if( ! CFBamEnumTagObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamEnumTagObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamEnumTagObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamEnumTagObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_EnumId, CFBamEnumTagObj::getRequiredEnumId() ) );
		if( ! CFBamEnumTagObj::isOptionalEnumCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_EnumCode, CFBamEnumTagObj::getOptionalEnumCodeValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamEnumTagObj::getRequiredName() ) );
		if( ! CFBamEnumTagObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamEnumTagObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamEnumTagObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamEnumTagObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamEnumTagObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamEnumTagObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamEnumTagObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamEnumTagObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamEnumTagObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamEnumTagObj::getGenDefName() {
		return( cfbam::CFBamEnumTagBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamEnumTagObj::getScope() {
		cfbam::ICFBamEnumDefObj* scope = getRequiredContainerEnumDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamEnumTagObj::getObjScope() {
		cfbam::ICFBamEnumDefObj* scope = getRequiredContainerEnumDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamEnumTagObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamEnumTagObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamEnumTagObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamEnumTagObj::getObjQualifiedName() {
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

	std::string CFBamEnumTagObj::getObjFullName() {
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

	cfbam::ICFBamEnumTagObj* CFBamEnumTagObj::realize() {
		cfbam::ICFBamEnumTagObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumTagTableObj()->realizeEnumTag(
			(cfbam::ICFBamEnumTagObj*)this );
		return( dynamic_cast<cfbam::ICFBamEnumTagObj*>( retobj ) );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagObj::read( bool forceRead ) {
		cfbam::ICFBamEnumTagObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumTagTableObj()->readEnumTagByIdIdx( getEnumTagBuff()->getRequiredTenantId(),
		getEnumTagBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamEnumTagObj*>( retobj ) );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagObj::moveUp() {
		cfbam::ICFBamEnumTagObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumTagTableObj()->moveUpEnumTag( this );
		return( dynamic_cast<cfbam::ICFBamEnumTagObj*>( retobj ) );
	}

	cfbam::ICFBamEnumTagObj* CFBamEnumTagObj::moveDown() {
		cfbam::ICFBamEnumTagObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumTagTableObj()->moveDownEnumTag( this );
		return( dynamic_cast<cfbam::ICFBamEnumTagObj*>( retobj ) );
	}

	cfbam::ICFBamEnumTagTableObj* CFBamEnumTagObj::getEnumTagTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumTagTableObj() );
	}

	cfbam::ICFBamSchemaObj* CFBamEnumTagObj::getSchema() {
		return( schema );
	}

	void CFBamEnumTagObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = value;
	}

	cfbam::CFBamEnumTagPKey* CFBamEnumTagObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfbam::CFBamEnumTagPKey();
		}
		return( pKey );
	}

	void CFBamEnumTagObj::setPKey( cfbam::CFBamEnumTagPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfbam::CFBamEnumTagPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamEnumTagObj::getIsNew() {
		return( isNew );
	}

	void CFBamEnumTagObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfbam::ICFBamEnumTagEditObj* CFBamEnumTagObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamEnumTagObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumTagTableObj()->lockEnumTag( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getEnumTagTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamEnumTagEditObj*>( edit ) );
	}

	void CFBamEnumTagObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfbam::ICFBamEnumTagEditObj* CFBamEnumTagObj::getEdit() {
		return( edit );
	}

	cfbam::ICFBamEnumTagEditObj* CFBamEnumTagObj::getEnumTagEdit() {
		return( dynamic_cast<cfbam::ICFBamEnumTagEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamEnumTagObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getEnumTagBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamEnumTagObj::getCreatedAt() {
		return( getEnumTagBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamEnumTagObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getEnumTagBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamEnumTagObj::getUpdatedAt() {
		return( getEnumTagBuff()->getUpdatedAt() );
	}

	void CFBamEnumTagObj::copyPKeyToBuff() {
		cfbam::CFBamEnumTagPKey* tablePKey = getPKey();
		cfbam::CFBamEnumTagBuff* tableBuff = getEnumTagEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamEnumTagObj::copyBuffToPKey() {
		cfbam::CFBamEnumTagPKey* tablePKey = getPKey();
		cfbam::CFBamEnumTagBuff* tableBuff = getEnumTagBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
