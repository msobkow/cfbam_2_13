// Description: C++18 base object instance implementation for CFBam IndexCol.

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
#include <cfbamobj/CFBamIndexColObj.hpp>

namespace cfbam {

	const std::string CFBamIndexColObj::CLASS_NAME( "CFBamIndexColObj" );
	const classcode_t CFBamIndexColObj::CLASS_CODE = 0xa822L;

	int32_t CFBamIndexColObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamIndexColObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamIndexColObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamIndexColObj::getRequiredIndexId() {
		return( getIndexColBuff()->getRequiredIndexId() );
	}

	const int64_t* CFBamIndexColObj::getRequiredIndexIdReference() {
		return( getIndexColBuff()->getRequiredIndexIdReference() );
	}

	const int64_t CFBamIndexColObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamIndexColObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamIndexColObj::isOptionalDefSchemaTenantIdNull() {
		return( getIndexColBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamIndexColObj::getOptionalDefSchemaTenantIdValue() {
		return( getIndexColBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamIndexColObj::getOptionalDefSchemaTenantIdReference() {
		return( getIndexColBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamIndexColObj::isOptionalDefSchemaIdNull() {
		return( getIndexColBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamIndexColObj::getOptionalDefSchemaIdValue() {
		return( getIndexColBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamIndexColObj::getOptionalDefSchemaIdReference() {
		return( getIndexColBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamIndexColObj::getRequiredName() {
		return( getIndexColBuff()->getRequiredName() );
	}

	const std::string* CFBamIndexColObj::getRequiredNameReference() {
		return( getIndexColBuff()->getRequiredNameReference() );
	}

	bool CFBamIndexColObj::isOptionalShortNameNull() {
		return( getIndexColBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamIndexColObj::getOptionalShortNameValue() {
		return( getIndexColBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamIndexColObj::getOptionalShortNameReference() {
		return( getIndexColBuff()->getOptionalShortNameReference() );
	}

	bool CFBamIndexColObj::isOptionalLabelNull() {
		return( getIndexColBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamIndexColObj::getOptionalLabelValue() {
		return( getIndexColBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamIndexColObj::getOptionalLabelReference() {
		return( getIndexColBuff()->getOptionalLabelReference() );
	}

	bool CFBamIndexColObj::isOptionalShortDescriptionNull() {
		return( getIndexColBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamIndexColObj::getOptionalShortDescriptionValue() {
		return( getIndexColBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamIndexColObj::getOptionalShortDescriptionReference() {
		return( getIndexColBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamIndexColObj::isOptionalDescriptionNull() {
		return( getIndexColBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamIndexColObj::getOptionalDescriptionValue() {
		return( getIndexColBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamIndexColObj::getOptionalDescriptionReference() {
		return( getIndexColBuff()->getOptionalDescriptionReference() );
	}

	const int64_t CFBamIndexColObj::getRequiredColumnId() {
		return( getIndexColBuff()->getRequiredColumnId() );
	}

	const int64_t* CFBamIndexColObj::getRequiredColumnIdReference() {
		return( getIndexColBuff()->getRequiredColumnIdReference() );
	}

	const bool CFBamIndexColObj::getRequiredIsAscending() {
		return( getIndexColBuff()->getRequiredIsAscending() );
	}

	const bool* CFBamIndexColObj::getRequiredIsAscendingReference() {
		return( getIndexColBuff()->getRequiredIsAscendingReference() );
	}

	bool CFBamIndexColObj::isOptionalPrevTenantIdNull() {
		return( getIndexColBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamIndexColObj::getOptionalPrevTenantIdValue() {
		return( getIndexColBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamIndexColObj::getOptionalPrevTenantIdReference() {
		return( getIndexColBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamIndexColObj::isOptionalPrevIdNull() {
		return( getIndexColBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamIndexColObj::getOptionalPrevIdValue() {
		return( getIndexColBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamIndexColObj::getOptionalPrevIdReference() {
		return( getIndexColBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamIndexColObj::isOptionalNextTenantIdNull() {
		return( getIndexColBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamIndexColObj::getOptionalNextTenantIdValue() {
		return( getIndexColBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamIndexColObj::getOptionalNextTenantIdReference() {
		return( getIndexColBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamIndexColObj::isOptionalNextIdNull() {
		return( getIndexColBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamIndexColObj::getOptionalNextIdValue() {
		return( getIndexColBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamIndexColObj::getOptionalNextIdReference() {
		return( getIndexColBuff()->getOptionalNextIdReference() );
	}


	cfsec::ICFSecTenantObj* CFBamIndexColObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamIndexObj* CFBamIndexColObj::getRequiredContainerIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->readIndexByIdIdx( getPKey()->getRequiredTenantId(),
					getIndexColBuff()->getRequiredIndexId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamIndexColObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getIndexColBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getIndexColBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getIndexColBuff()->getOptionalDefSchemaTenantIdValue(),
					getIndexColBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamIndexColObj::getOptionalChildrenRefRelFromCol( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationColObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->readRelationColByFromColIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamIndexColObj::getOptionalChildrenRefRelToCol( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationColObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->readRelationColByToColIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retobj = NULL;
		bool anyMissing = false;
			if( getIndexColBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getIndexColBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->readIndexColByIdIdx( getIndexColBuff()->getOptionalPrevTenantIdValue(),
					getIndexColBuff()->getOptionalPrevIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retobj = NULL;
		bool anyMissing = false;
			if( getIndexColBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getIndexColBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->readIndexColByIdIdx( getIndexColBuff()->getOptionalNextTenantIdValue(),
					getIndexColBuff()->getOptionalNextIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamIndexColObj::getRequiredLookupColumn( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->readValueByIdIdx( getPKey()->getRequiredTenantId(),
					getIndexColBuff()->getRequiredColumnId(), forceRead );
		}
		return( retobj );
	}

	CFBamIndexColObj::CFBamIndexColObj()
	: ICFBamIndexColObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamIndexColObj::CFBamIndexColObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamIndexColObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamIndexColObj::~CFBamIndexColObj() {
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

	cfbam::CFBamIndexColBuff* CFBamIndexColObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamIndexColBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamIndexColObj::setBuff( cfbam::CFBamIndexColBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamIndexColObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamIndexColObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamIndexColObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamIndexColObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamIndexColObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_IndexId( "IndexId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_ColumnId( "ColumnId" );
		static const std::string S_IsAscending( "IsAscending" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamIndexColObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamIndexColObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamIndexColObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamIndexColObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamIndexColObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamIndexColObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_IndexId, CFBamIndexColObj::getRequiredIndexId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamIndexColObj::getRequiredId() ) );
		if( ! CFBamIndexColObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamIndexColObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamIndexColObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamIndexColObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamIndexColObj::getRequiredName() ) );
		if( ! CFBamIndexColObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamIndexColObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamIndexColObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamIndexColObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamIndexColObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamIndexColObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamIndexColObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamIndexColObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ColumnId, CFBamIndexColObj::getRequiredColumnId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsAscending, CFBamIndexColObj::getRequiredIsAscending() ) );
		if( ! CFBamIndexColObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamIndexColObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamIndexColObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamIndexColObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamIndexColObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamIndexColObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamIndexColObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamIndexColObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamIndexColObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamIndexColObj::getGenDefName() {
		return( cfbam::CFBamIndexColBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamIndexColObj::getScope() {
		cfbam::ICFBamIndexObj* scope = getRequiredContainerIndex();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamIndexColObj::getObjScope() {
		cfbam::ICFBamIndexObj* scope = getRequiredContainerIndex();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamIndexColObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamIndexColObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamIndexColObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamIndexColObj::getObjQualifiedName() {
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

	std::string CFBamIndexColObj::getObjFullName() {
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

	cfbam::ICFBamIndexColObj* CFBamIndexColObj::realize() {
		cfbam::ICFBamIndexColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->realizeIndexCol(
			(cfbam::ICFBamIndexColObj*)this );
		return( dynamic_cast<cfbam::ICFBamIndexColObj*>( retobj ) );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColObj::read( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->readIndexColByIdIdx( getIndexColBuff()->getRequiredTenantId(),
		getIndexColBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamIndexColObj*>( retobj ) );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColObj::moveUp() {
		cfbam::ICFBamIndexColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->moveUpIndexCol( this );
		return( dynamic_cast<cfbam::ICFBamIndexColObj*>( retobj ) );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColObj::moveDown() {
		cfbam::ICFBamIndexColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->moveDownIndexCol( this );
		return( dynamic_cast<cfbam::ICFBamIndexColObj*>( retobj ) );
	}

	cfbam::ICFBamIndexColTableObj* CFBamIndexColObj::getIndexColTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj() );
	}

	cfbam::ICFBamSchemaObj* CFBamIndexColObj::getSchema() {
		return( schema );
	}

	void CFBamIndexColObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = value;
	}

	cfbam::CFBamIndexColPKey* CFBamIndexColObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfbam::CFBamIndexColPKey();
		}
		return( pKey );
	}

	void CFBamIndexColObj::setPKey( cfbam::CFBamIndexColPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfbam::CFBamIndexColPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamIndexColObj::getIsNew() {
		return( isNew );
	}

	void CFBamIndexColObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfbam::ICFBamIndexColEditObj* CFBamIndexColObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamIndexColObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->lockIndexCol( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamIndexColEditObj*>( edit ) );
	}

	void CFBamIndexColObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfbam::ICFBamIndexColEditObj* CFBamIndexColObj::getEdit() {
		return( edit );
	}

	cfbam::ICFBamIndexColEditObj* CFBamIndexColObj::getIndexColEdit() {
		return( dynamic_cast<cfbam::ICFBamIndexColEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamIndexColObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getIndexColBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamIndexColObj::getCreatedAt() {
		return( getIndexColBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamIndexColObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getIndexColBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamIndexColObj::getUpdatedAt() {
		return( getIndexColBuff()->getUpdatedAt() );
	}

	void CFBamIndexColObj::copyPKeyToBuff() {
		cfbam::CFBamIndexColPKey* tablePKey = getPKey();
		cfbam::CFBamIndexColBuff* tableBuff = getIndexColEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamIndexColObj::copyBuffToPKey() {
		cfbam::CFBamIndexColPKey* tablePKey = getPKey();
		cfbam::CFBamIndexColBuff* tableBuff = getIndexColBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
