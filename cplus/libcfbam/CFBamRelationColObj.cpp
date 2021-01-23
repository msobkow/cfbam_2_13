// Description: C++18 base object instance implementation for CFBam RelationCol.

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
#include <cfbamobj/CFBamRelationColObj.hpp>

namespace cfbam {

	const std::string CFBamRelationColObj::CLASS_NAME( "CFBamRelationColObj" );
	const classcode_t CFBamRelationColObj::CLASS_CODE = 0xa836L;

	int32_t CFBamRelationColObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamRelationColObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamRelationColObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamRelationColObj::getRequiredRelationId() {
		return( getRelationColBuff()->getRequiredRelationId() );
	}

	const int64_t* CFBamRelationColObj::getRequiredRelationIdReference() {
		return( getRelationColBuff()->getRequiredRelationIdReference() );
	}

	const int64_t CFBamRelationColObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamRelationColObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamRelationColObj::isOptionalDefSchemaTenantIdNull() {
		return( getRelationColBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamRelationColObj::getOptionalDefSchemaTenantIdValue() {
		return( getRelationColBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamRelationColObj::getOptionalDefSchemaTenantIdReference() {
		return( getRelationColBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamRelationColObj::isOptionalDefSchemaIdNull() {
		return( getRelationColBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamRelationColObj::getOptionalDefSchemaIdValue() {
		return( getRelationColBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamRelationColObj::getOptionalDefSchemaIdReference() {
		return( getRelationColBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamRelationColObj::getRequiredName() {
		return( getRelationColBuff()->getRequiredName() );
	}

	const std::string* CFBamRelationColObj::getRequiredNameReference() {
		return( getRelationColBuff()->getRequiredNameReference() );
	}

	bool CFBamRelationColObj::isOptionalShortNameNull() {
		return( getRelationColBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamRelationColObj::getOptionalShortNameValue() {
		return( getRelationColBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamRelationColObj::getOptionalShortNameReference() {
		return( getRelationColBuff()->getOptionalShortNameReference() );
	}

	bool CFBamRelationColObj::isOptionalLabelNull() {
		return( getRelationColBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamRelationColObj::getOptionalLabelValue() {
		return( getRelationColBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamRelationColObj::getOptionalLabelReference() {
		return( getRelationColBuff()->getOptionalLabelReference() );
	}

	bool CFBamRelationColObj::isOptionalShortDescriptionNull() {
		return( getRelationColBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamRelationColObj::getOptionalShortDescriptionValue() {
		return( getRelationColBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamRelationColObj::getOptionalShortDescriptionReference() {
		return( getRelationColBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamRelationColObj::isOptionalDescriptionNull() {
		return( getRelationColBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamRelationColObj::getOptionalDescriptionValue() {
		return( getRelationColBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamRelationColObj::getOptionalDescriptionReference() {
		return( getRelationColBuff()->getOptionalDescriptionReference() );
	}

	const int64_t CFBamRelationColObj::getRequiredFromColId() {
		return( getRelationColBuff()->getRequiredFromColId() );
	}

	const int64_t* CFBamRelationColObj::getRequiredFromColIdReference() {
		return( getRelationColBuff()->getRequiredFromColIdReference() );
	}

	const int64_t CFBamRelationColObj::getRequiredToColId() {
		return( getRelationColBuff()->getRequiredToColId() );
	}

	const int64_t* CFBamRelationColObj::getRequiredToColIdReference() {
		return( getRelationColBuff()->getRequiredToColIdReference() );
	}

	bool CFBamRelationColObj::isOptionalPrevTenantIdNull() {
		return( getRelationColBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamRelationColObj::getOptionalPrevTenantIdValue() {
		return( getRelationColBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamRelationColObj::getOptionalPrevTenantIdReference() {
		return( getRelationColBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamRelationColObj::isOptionalPrevIdNull() {
		return( getRelationColBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamRelationColObj::getOptionalPrevIdValue() {
		return( getRelationColBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamRelationColObj::getOptionalPrevIdReference() {
		return( getRelationColBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamRelationColObj::isOptionalNextTenantIdNull() {
		return( getRelationColBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamRelationColObj::getOptionalNextTenantIdValue() {
		return( getRelationColBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamRelationColObj::getOptionalNextTenantIdReference() {
		return( getRelationColBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamRelationColObj::isOptionalNextIdNull() {
		return( getRelationColBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamRelationColObj::getOptionalNextIdValue() {
		return( getRelationColBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamRelationColObj::getOptionalNextIdReference() {
		return( getRelationColBuff()->getOptionalNextIdReference() );
	}


	cfbam::ICFBamRelationObj* CFBamRelationColObj::getRequiredContainerRelation( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationColBuff()->getRequiredRelationId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecTenantObj* CFBamRelationColObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamRelationColObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getRelationColBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationColBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getRelationColBuff()->getOptionalDefSchemaTenantIdValue(),
					getRelationColBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamRelationColObj* retobj = NULL;
		bool anyMissing = false;
			if( getRelationColBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationColBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->readRelationColByIdIdx( getRelationColBuff()->getOptionalPrevTenantIdValue(),
					getRelationColBuff()->getOptionalPrevIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamRelationColObj* retobj = NULL;
		bool anyMissing = false;
			if( getRelationColBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getRelationColBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->readRelationColByIdIdx( getRelationColBuff()->getOptionalNextTenantIdValue(),
					getRelationColBuff()->getOptionalNextIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamIndexColObj* CFBamRelationColObj::getRequiredLookupFromCol( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->readIndexColByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationColBuff()->getRequiredFromColId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamIndexColObj* CFBamRelationColObj::getRequiredLookupToCol( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->readIndexColByIdIdx( getPKey()->getRequiredTenantId(),
					getRelationColBuff()->getRequiredToColId(), forceRead );
		}
		return( retobj );
	}

	CFBamRelationColObj::CFBamRelationColObj()
	: ICFBamRelationColObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamRelationColObj::CFBamRelationColObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamRelationColObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamRelationColObj::~CFBamRelationColObj() {
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

	cfbam::CFBamRelationColBuff* CFBamRelationColObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamRelationColBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamRelationColObj::setBuff( cfbam::CFBamRelationColBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamRelationColObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamRelationColObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamRelationColObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamRelationColObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationColObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_RelationId( "RelationId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_FromColId( "FromColId" );
		static const std::string S_ToColId( "ToColId" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamRelationColObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamRelationColObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamRelationColObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamRelationColObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamRelationColObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamRelationColObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, CFBamRelationColObj::getRequiredRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamRelationColObj::getRequiredId() ) );
		if( ! CFBamRelationColObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamRelationColObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamRelationColObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamRelationColObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamRelationColObj::getRequiredName() ) );
		if( ! CFBamRelationColObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamRelationColObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamRelationColObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamRelationColObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamRelationColObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamRelationColObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamRelationColObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamRelationColObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FromColId, CFBamRelationColObj::getRequiredFromColId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToColId, CFBamRelationColObj::getRequiredToColId() ) );
		if( ! CFBamRelationColObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamRelationColObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamRelationColObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamRelationColObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamRelationColObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamRelationColObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamRelationColObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamRelationColObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamRelationColObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamRelationColObj::getGenDefName() {
		return( cfbam::CFBamRelationColBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamRelationColObj::getScope() {
		cfbam::ICFBamRelationObj* scope = getRequiredContainerRelation();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamRelationColObj::getObjScope() {
		cfbam::ICFBamRelationObj* scope = getRequiredContainerRelation();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamRelationColObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamRelationColObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamRelationColObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamRelationColObj::getObjQualifiedName() {
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

	std::string CFBamRelationColObj::getObjFullName() {
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

	cfbam::ICFBamRelationColObj* CFBamRelationColObj::realize() {
		cfbam::ICFBamRelationColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->realizeRelationCol(
			(cfbam::ICFBamRelationColObj*)this );
		return( dynamic_cast<cfbam::ICFBamRelationColObj*>( retobj ) );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColObj::read( bool forceRead ) {
		cfbam::ICFBamRelationColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->readRelationColByIdIdx( getRelationColBuff()->getRequiredTenantId(),
		getRelationColBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamRelationColObj*>( retobj ) );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColObj::moveUp() {
		cfbam::ICFBamRelationColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->moveUpRelationCol( this );
		return( dynamic_cast<cfbam::ICFBamRelationColObj*>( retobj ) );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColObj::moveDown() {
		cfbam::ICFBamRelationColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->moveDownRelationCol( this );
		return( dynamic_cast<cfbam::ICFBamRelationColObj*>( retobj ) );
	}

	cfbam::ICFBamRelationColTableObj* CFBamRelationColObj::getRelationColTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj() );
	}

	cfbam::ICFBamSchemaObj* CFBamRelationColObj::getSchema() {
		return( schema );
	}

	void CFBamRelationColObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = value;
	}

	cfbam::CFBamRelationColPKey* CFBamRelationColObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfbam::CFBamRelationColPKey();
		}
		return( pKey );
	}

	void CFBamRelationColObj::setPKey( cfbam::CFBamRelationColPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfbam::CFBamRelationColPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamRelationColObj::getIsNew() {
		return( isNew );
	}

	void CFBamRelationColObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfbam::ICFBamRelationColEditObj* CFBamRelationColObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamRelationColObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->lockRelationCol( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationColTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamRelationColEditObj*>( edit ) );
	}

	void CFBamRelationColObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfbam::ICFBamRelationColEditObj* CFBamRelationColObj::getEdit() {
		return( edit );
	}

	cfbam::ICFBamRelationColEditObj* CFBamRelationColObj::getRelationColEdit() {
		return( dynamic_cast<cfbam::ICFBamRelationColEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamRelationColObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getRelationColBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamRelationColObj::getCreatedAt() {
		return( getRelationColBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamRelationColObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getRelationColBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamRelationColObj::getUpdatedAt() {
		return( getRelationColBuff()->getUpdatedAt() );
	}

	void CFBamRelationColObj::copyPKeyToBuff() {
		cfbam::CFBamRelationColPKey* tablePKey = getPKey();
		cfbam::CFBamRelationColBuff* tableBuff = getRelationColEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamRelationColObj::copyBuffToPKey() {
		cfbam::CFBamRelationColPKey* tablePKey = getPKey();
		cfbam::CFBamRelationColBuff* tableBuff = getRelationColBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	cfbam::ICFBamSubProjectObj* CFBamRelationColObj::getProject() {
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

	cfbam::ICFBamTopDomainObj* CFBamRelationColObj::getCompany() {
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

	cfbam::ICFBamSchemaDefObj* CFBamRelationColObj::getSchemaDef() {
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

	cfbam::ICFBamMinorVersionObj* CFBamRelationColObj::getVersion() {
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

	std::string CFBamRelationColObj::getVersionStringForVersion( cflib::ICFLibAnyObj* value ) {
		std::string ret;
		if( value->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMinorVersionObj*>( value )->getRequiredName();
		}
		else if( value->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMajorVersionObj*>( value )->getRequiredName();
		}
		return( ret );
	}

	std::string CFBamRelationColObj::getVersionString() {
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

	std::string CFBamRelationColObj::getPackedVersionString() {
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

	bool CFBamRelationColObj::isColumnInOwnerRelation() {
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
