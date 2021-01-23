// Description: C++18 base object instance implementation for CFBam Chain.

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
#include <cfbamobj/CFBamChainObj.hpp>

namespace cfbam {

	const std::string CFBamChainObj::CLASS_NAME( "CFBamChainObj" );
	const classcode_t CFBamChainObj::CLASS_CODE = 0xa80fL;

	int32_t CFBamChainObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamChainObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamChainObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamChainObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamChainObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamChainObj::isOptionalDefSchemaTenantIdNull() {
		return( getChainBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamChainObj::getOptionalDefSchemaTenantIdValue() {
		return( getChainBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamChainObj::getOptionalDefSchemaTenantIdReference() {
		return( getChainBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamChainObj::isOptionalDefSchemaIdNull() {
		return( getChainBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamChainObj::getOptionalDefSchemaIdValue() {
		return( getChainBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamChainObj::getOptionalDefSchemaIdReference() {
		return( getChainBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamChainObj::getRequiredName() {
		return( getChainBuff()->getRequiredName() );
	}

	const std::string* CFBamChainObj::getRequiredNameReference() {
		return( getChainBuff()->getRequiredNameReference() );
	}

	bool CFBamChainObj::isOptionalShortNameNull() {
		return( getChainBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamChainObj::getOptionalShortNameValue() {
		return( getChainBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamChainObj::getOptionalShortNameReference() {
		return( getChainBuff()->getOptionalShortNameReference() );
	}

	bool CFBamChainObj::isOptionalLabelNull() {
		return( getChainBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamChainObj::getOptionalLabelValue() {
		return( getChainBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamChainObj::getOptionalLabelReference() {
		return( getChainBuff()->getOptionalLabelReference() );
	}

	bool CFBamChainObj::isOptionalShortDescriptionNull() {
		return( getChainBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamChainObj::getOptionalShortDescriptionValue() {
		return( getChainBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamChainObj::getOptionalShortDescriptionReference() {
		return( getChainBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamChainObj::isOptionalDescriptionNull() {
		return( getChainBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamChainObj::getOptionalDescriptionValue() {
		return( getChainBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamChainObj::getOptionalDescriptionReference() {
		return( getChainBuff()->getOptionalDescriptionReference() );
	}

	const int64_t CFBamChainObj::getRequiredTableId() {
		return( getChainBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamChainObj::getRequiredTableIdReference() {
		return( getChainBuff()->getRequiredTableIdReference() );
	}

	bool CFBamChainObj::isOptionalSuffixNull() {
		return( getChainBuff()->isOptionalSuffixNull() );
	}

	const std::string& CFBamChainObj::getOptionalSuffixValue() {
		return( getChainBuff()->getOptionalSuffixValue() );
	}

	const std::string* CFBamChainObj::getOptionalSuffixReference() {
		return( getChainBuff()->getOptionalSuffixReference() );
	}

	const int64_t CFBamChainObj::getRequiredPrevRelationTenantId() {
		return( getChainBuff()->getRequiredPrevRelationTenantId() );
	}

	const int64_t* CFBamChainObj::getRequiredPrevRelationTenantIdReference() {
		return( getChainBuff()->getRequiredPrevRelationTenantIdReference() );
	}

	const int64_t CFBamChainObj::getRequiredPrevRelationId() {
		return( getChainBuff()->getRequiredPrevRelationId() );
	}

	const int64_t* CFBamChainObj::getRequiredPrevRelationIdReference() {
		return( getChainBuff()->getRequiredPrevRelationIdReference() );
	}

	const int64_t CFBamChainObj::getRequiredNextRelationTenantId() {
		return( getChainBuff()->getRequiredNextRelationTenantId() );
	}

	const int64_t* CFBamChainObj::getRequiredNextRelationTenantIdReference() {
		return( getChainBuff()->getRequiredNextRelationTenantIdReference() );
	}

	const int64_t CFBamChainObj::getRequiredNextRelationId() {
		return( getChainBuff()->getRequiredNextRelationId() );
	}

	const int64_t* CFBamChainObj::getRequiredNextRelationIdReference() {
		return( getChainBuff()->getRequiredNextRelationIdReference() );
	}


	cfsec::ICFSecTenantObj* CFBamChainObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamTableObj* CFBamChainObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getChainBuff()->getRequiredTableId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamChainObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getChainBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getChainBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getChainBuff()->getOptionalDefSchemaTenantIdValue(),
					getChainBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamRelationObj* CFBamChainObj::getRequiredLookupPrevRel( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByIdIdx( getChainBuff()->getRequiredPrevRelationTenantId(),
					getChainBuff()->getRequiredPrevRelationId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamRelationObj* CFBamChainObj::getRequiredLookupNextRel( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByIdIdx( getChainBuff()->getRequiredNextRelationTenantId(),
					getChainBuff()->getRequiredNextRelationId(), forceRead );
		}
		return( retobj );
	}

	CFBamChainObj::CFBamChainObj()
	: ICFBamChainObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamChainObj::CFBamChainObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamChainObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamChainObj::~CFBamChainObj() {
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

	cfbam::CFBamChainBuff* CFBamChainObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamChainBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamChainObj::setBuff( cfbam::CFBamChainBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamChainObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamChainObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamChainObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamChainBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamChainObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamChainObj" );
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
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_PrevRelationTenantId( "PrevRelationTenantId" );
		static const std::string S_PrevRelationId( "PrevRelationId" );
		static const std::string S_NextRelationTenantId( "NextRelationTenantId" );
		static const std::string S_NextRelationId( "NextRelationId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamChainObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamChainObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamChainObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamChainObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamChainObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamChainObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamChainObj::getRequiredId() ) );
		if( ! CFBamChainObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamChainObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamChainObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamChainObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamChainObj::getRequiredName() ) );
		if( ! CFBamChainObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamChainObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamChainObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamChainObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamChainObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamChainObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamChainObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamChainObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamChainObj::getRequiredTableId() ) );
		if( ! CFBamChainObj::isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, CFBamChainObj::getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevRelationTenantId, CFBamChainObj::getRequiredPrevRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevRelationId, CFBamChainObj::getRequiredPrevRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextRelationTenantId, CFBamChainObj::getRequiredNextRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextRelationId, CFBamChainObj::getRequiredNextRelationId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamChainObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamChainObj::getGenDefName() {
		return( cfbam::CFBamChainBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamChainObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamChainObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamChainObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamChainObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamChainObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamChainObj::getObjQualifiedName() {
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

	std::string CFBamChainObj::getObjFullName() {
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

	cfbam::ICFBamChainObj* CFBamChainObj::realize() {
		cfbam::ICFBamChainObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getChainTableObj()->realizeChain(
			(cfbam::ICFBamChainObj*)this );
		return( dynamic_cast<cfbam::ICFBamChainObj*>( retobj ) );
	}

	cfbam::ICFBamChainObj* CFBamChainObj::read( bool forceRead ) {
		cfbam::ICFBamChainObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getChainTableObj()->readChainByIdIdx( getChainBuff()->getRequiredTenantId(),
		getChainBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamChainObj*>( retobj ) );
	}

	cfbam::ICFBamChainTableObj* CFBamChainObj::getChainTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getChainTableObj() );
	}

	cfbam::ICFBamSchemaObj* CFBamChainObj::getSchema() {
		return( schema );
	}

	void CFBamChainObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = value;
	}

	cfbam::CFBamChainPKey* CFBamChainObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfbam::CFBamChainPKey();
		}
		return( pKey );
	}

	void CFBamChainObj::setPKey( cfbam::CFBamChainPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfbam::CFBamChainPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamChainObj::getIsNew() {
		return( isNew );
	}

	void CFBamChainObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfbam::ICFBamChainEditObj* CFBamChainObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamChainObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getChainTableObj()->lockChain( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getChainTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamChainEditObj*>( edit ) );
	}

	void CFBamChainObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfbam::ICFBamChainEditObj* CFBamChainObj::getEdit() {
		return( edit );
	}

	cfbam::ICFBamChainEditObj* CFBamChainObj::getChainEdit() {
		return( dynamic_cast<cfbam::ICFBamChainEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamChainObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getChainBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamChainObj::getCreatedAt() {
		return( getChainBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamChainObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getChainBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamChainObj::getUpdatedAt() {
		return( getChainBuff()->getUpdatedAt() );
	}

	void CFBamChainObj::copyPKeyToBuff() {
		cfbam::CFBamChainPKey* tablePKey = getPKey();
		cfbam::CFBamChainBuff* tableBuff = getChainEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamChainObj::copyBuffToPKey() {
		cfbam::CFBamChainPKey* tablePKey = getPKey();
		cfbam::CFBamChainBuff* tableBuff = getChainBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	cfbam::ICFBamSubProjectObj* CFBamChainObj::getProject() {
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamSubProjectObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamTopDomainObj* CFBamChainObj::getCompany() {
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntTopDomainBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamTopDomainObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamSchemaDefObj* CFBamChainObj::getSchemaDef() {
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamMinorVersionObj* CFBamChainObj::getVersion() {
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTopDomainBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	std::string CFBamChainObj::getVersionStringForVersion( cflib::ICFLibAnyObj* value ) {
		std::string ret;
		if( value->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMinorVersionObj*>( value )->getRequiredName();
		}
		else if( value->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMajorVersionObj*>( value )->getRequiredName();
		}
		return( ret );
	}

	std::string CFBamChainObj::getVersionString() {
		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* curDef = getVersion();
		std::vector<std::string> invertedNodeNames;
		while( curDef != NULL ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMajorVersionObj*>( curDef ) ) );
			}
			scopeDef = curDef->getObjScope();
			if( scopeDef == NULL ) {
				curDef = NULL;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else {
				curDef = NULL;
			}
		}
		std::string ret;
		if( ! invertedNodeNames.empty() ) {
			ret = invertedNodeNames.back();
			invertedNodeNames.pop_back();
			while( ! invertedNodeNames.empty() ) {
				ret.append( "-" );
				ret.append( invertedNodeNames.back() );
				invertedNodeNames.pop_back();
			}
		}
		return( ret );
	}

	std::string CFBamChainObj::getPackedVersionString() {
		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* curDef = getVersion();
		std::vector<std::string> invertedNodeNames;
		while( curDef != NULL ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMajorVersionObj*>( curDef ) ) );
			}
			scopeDef = curDef->getObjScope();
			if( scopeDef == NULL ) {
				curDef = NULL;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else {
				curDef = NULL;
			}
		}
		std::string ret;
		if( ! invertedNodeNames.empty() ) {
			ret = invertedNodeNames.back();
			invertedNodeNames.pop_back();
			while( ! invertedNodeNames.empty() ) {
				ret.append( invertedNodeNames.back() );
				invertedNodeNames.pop_back();
			}
		}
		return( ret );
	}

	bool CFBamChainObj::isColumnInOwnerRelation() {
		static const std::string S_ProcName( "isColumnInOwnerRelation" );
		static const std::string S_This( "this" );
		static const std::string S_GenContextGenDefColumnDefLookupColumn( "GenContext.GenDef.ColumnDef.LookupColumn" );
		static const std::string S_GenContextGenDefFromColumnDef( "GenContext.GenDef.FromColumnDef" );
		static const std::string S_FirstClassList( "ICFBamAtomObj, ICFBamTableColObj" );
		static const std::string S_SecondClassList( "ICFBamAtomObj, ICFBamTableColObj, ICFBamIndexColObj, ICFBamRelationColObj" );
		cflib::ICFLibAnyObj* focusDef;
		cfbam::ICFBamTableObj* tableDef;
		if( implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			cfbam::ICFBamAtomObj* atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( this );
			cflib::ICFLibAnyObj* atomScopeDef = atomDef->getObjScope();
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( atomScopeDef );
			focusDef = this;
		}
		else if( implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamTableColObj* tableColDef = dynamic_cast<cfbam::ICFBamTableColObj*>( this );
			cflib::ICFLibAnyObj* tableColScopeDef = tableColDef->getObjScope();
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( tableColScopeDef );
			focusDef = this;
		}
		else if( implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamIndexColObj* indexColDef = dynamic_cast<cfbam::ICFBamIndexColObj*>( this );
			focusDef = indexColDef->getRequiredLookupColumn();
			if( focusDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamAtomObj*>( focusDef )->getObjScope() );
			}
			else if( focusDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamTableColObj*>( focusDef )->getObjScope() );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_GenContextGenDefColumnDefLookupColumn, focusDef, S_FirstClassList );
			}
		}
		else if( implementsClassCode( cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamRelationColObj* relColDef = dynamic_cast<cfbam::ICFBamRelationColObj*>( this );
			cflib::ICFLibAnyObj* columnDef = relColDef->getRequiredLookupFromCol();
			if( columnDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( columnDef->getObjScope() );
			}
			else if( columnDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( columnDef->getObjScope() );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_GenContextGenDefColumnDefLookupColumn, columnDef, S_FirstClassList );
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_This, this, S_SecondClassList );
		}

		std::vector<cfbam::ICFBamRelationObj*> ownerRelations = tableDef->getContainerOwnerRelations();
		if( ownerRelations.empty() ) {
			return( false );
		}

		cfbam::ICFBamRelationObj* ownerRelation;
		cfbam::ICFBamRelationColObj* ownerRelationCol;
		std::vector<cfbam::ICFBamRelationColObj*> ownerRelationCols;

		for( auto iterOwnerRelations = ownerRelations.begin(); iterOwnerRelations != ownerRelations.end(); iterOwnerRelations ++ ) {
			ownerRelation = *iterOwnerRelations;
			ownerRelationCols = ownerRelation->getOptionalComponentsColumns();
			for( auto iterCols = ownerRelationCols.begin(); iterCols != ownerRelationCols.end(); iterCols ++ ) {
				ownerRelationCol = *iterCols;
				if( ownerRelationCol->getRequiredLookupFromCol() == focusDef ) {
					return( true );
				}
			}
		}

		return( false );
	}

}
