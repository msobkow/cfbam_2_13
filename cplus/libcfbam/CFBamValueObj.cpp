// Description: C++18 base object instance implementation for CFBam Value.

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
#include <cfbamobj/CFBamValueObj.hpp>

namespace cfbam {

	const std::string CFBamValueObj::CLASS_NAME( "CFBamValueObj" );
	const classcode_t CFBamValueObj::CLASS_CODE = 0xa809L;

	int32_t CFBamValueObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFBamValueObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamValueObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamValueObj::getRequiredScopeId() {
		return( getValueBuff()->getRequiredScopeId() );
	}

	const int64_t* CFBamValueObj::getRequiredScopeIdReference() {
		return( getValueBuff()->getRequiredScopeIdReference() );
	}

	const int64_t CFBamValueObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamValueObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamValueObj::isOptionalDefSchemaTenantIdNull() {
		return( getValueBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamValueObj::getOptionalDefSchemaTenantIdValue() {
		return( getValueBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamValueObj::getOptionalDefSchemaTenantIdReference() {
		return( getValueBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamValueObj::isOptionalDefSchemaIdNull() {
		return( getValueBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamValueObj::getOptionalDefSchemaIdValue() {
		return( getValueBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamValueObj::getOptionalDefSchemaIdReference() {
		return( getValueBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamValueObj::getRequiredName() {
		return( getValueBuff()->getRequiredName() );
	}

	const std::string* CFBamValueObj::getRequiredNameReference() {
		return( getValueBuff()->getRequiredNameReference() );
	}

	bool CFBamValueObj::isOptionalShortNameNull() {
		return( getValueBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamValueObj::getOptionalShortNameValue() {
		return( getValueBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamValueObj::getOptionalShortNameReference() {
		return( getValueBuff()->getOptionalShortNameReference() );
	}

	bool CFBamValueObj::isOptionalLabelNull() {
		return( getValueBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamValueObj::getOptionalLabelValue() {
		return( getValueBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamValueObj::getOptionalLabelReference() {
		return( getValueBuff()->getOptionalLabelReference() );
	}

	bool CFBamValueObj::isOptionalShortDescriptionNull() {
		return( getValueBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamValueObj::getOptionalShortDescriptionValue() {
		return( getValueBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamValueObj::getOptionalShortDescriptionReference() {
		return( getValueBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamValueObj::isOptionalDescriptionNull() {
		return( getValueBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamValueObj::getOptionalDescriptionValue() {
		return( getValueBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamValueObj::getOptionalDescriptionReference() {
		return( getValueBuff()->getOptionalDescriptionReference() );
	}

	bool CFBamValueObj::isOptionalDefaultXmlValueNull() {
		return( getValueBuff()->isOptionalDefaultXmlValueNull() );
	}

	const std::string& CFBamValueObj::getOptionalDefaultXmlValueValue() {
		return( getValueBuff()->getOptionalDefaultXmlValueValue() );
	}

	const std::string* CFBamValueObj::getOptionalDefaultXmlValueReference() {
		return( getValueBuff()->getOptionalDefaultXmlValueReference() );
	}

	const bool CFBamValueObj::getRequiredIsNullable() {
		return( getValueBuff()->getRequiredIsNullable() );
	}

	const bool* CFBamValueObj::getRequiredIsNullableReference() {
		return( getValueBuff()->getRequiredIsNullableReference() );
	}

	bool CFBamValueObj::isOptionalGenerateIdNull() {
		return( getValueBuff()->isOptionalGenerateIdNull() );
	}

	const bool CFBamValueObj::getOptionalGenerateIdValue() {
		return( getValueBuff()->getOptionalGenerateIdValue() );
	}

	const bool* CFBamValueObj::getOptionalGenerateIdReference() {
		return( getValueBuff()->getOptionalGenerateIdReference() );
	}

	const bool CFBamValueObj::getRequiredImplementsPolymorph() {
		return( getValueBuff()->getRequiredImplementsPolymorph() );
	}

	const bool* CFBamValueObj::getRequiredImplementsPolymorphReference() {
		return( getValueBuff()->getRequiredImplementsPolymorphReference() );
	}

	bool CFBamValueObj::isOptionalPrevTenantIdNull() {
		return( getValueBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamValueObj::getOptionalPrevTenantIdValue() {
		return( getValueBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamValueObj::getOptionalPrevTenantIdReference() {
		return( getValueBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamValueObj::isOptionalPrevIdNull() {
		return( getValueBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamValueObj::getOptionalPrevIdValue() {
		return( getValueBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamValueObj::getOptionalPrevIdReference() {
		return( getValueBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamValueObj::isOptionalNextTenantIdNull() {
		return( getValueBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamValueObj::getOptionalNextTenantIdValue() {
		return( getValueBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamValueObj::getOptionalNextTenantIdReference() {
		return( getValueBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamValueObj::isOptionalNextIdNull() {
		return( getValueBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamValueObj::getOptionalNextIdValue() {
		return( getValueBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamValueObj::getOptionalNextIdReference() {
		return( getValueBuff()->getOptionalNextIdReference() );
	}


	cfsec::ICFSecTenantObj* CFBamValueObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamValueObj::getRequiredContainerScope( bool forceRead ) {
		cfbam::ICFBamScopeObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getScopeTableObj()->readScopeByIdIdx( getPKey()->getRequiredTenantId(),
					getValueBuff()->getRequiredScopeId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamValueObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getValueBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getValueBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getValueBuff()->getOptionalDefSchemaTenantIdValue(),
					getValueBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamTableColObj*> CFBamValueObj::getOptionalChildrenRefTableCol( bool forceRead ) {
		std::vector<cfbam::ICFBamTableColObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableColTableObj()->readTableColByDataIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamValueObj::getOptionalChildrenRefIndexCol( bool forceRead ) {
		std::vector<cfbam::ICFBamIndexColObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->readIndexColByColIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamValueObj* CFBamValueObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = NULL;
		bool anyMissing = false;
			if( getValueBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getValueBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->readValueByIdIdx( getValueBuff()->getOptionalPrevTenantIdValue(),
					getValueBuff()->getOptionalPrevIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamValueObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = NULL;
		bool anyMissing = false;
			if( getValueBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getValueBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->readValueByIdIdx( getValueBuff()->getOptionalNextTenantIdValue(),
					getValueBuff()->getOptionalNextIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamValueObj::CFBamValueObj()
	: ICFBamValueObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamValueObj::CFBamValueObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamValueObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamValueObj::~CFBamValueObj() {
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

	cfbam::CFBamValueBuff* CFBamValueObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamValueBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableValue()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamValueObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamValueObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamValueObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamValueObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamValueBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamValueObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamValueObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ScopeId( "ScopeId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_DefaultXmlValue( "DefaultXmlValue" );
		static const std::string S_IsNullable( "IsNullable" );
		static const std::string S_GenerateId( "GenerateId" );
		static const std::string S_ImplementsPolymorph( "ImplementsPolymorph" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamValueObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamValueObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamValueObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamValueObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamValueObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamValueObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ScopeId, CFBamValueObj::getRequiredScopeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamValueObj::getRequiredId() ) );
		if( ! CFBamValueObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamValueObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamValueObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamValueObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamValueObj::getRequiredName() ) );
		if( ! CFBamValueObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamValueObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamValueObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamValueObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamValueObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamValueObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamValueObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamValueObj::getOptionalDescriptionValue() ) );
		}
		if( ! CFBamValueObj::isOptionalDefaultXmlValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefaultXmlValue, CFBamValueObj::getOptionalDefaultXmlValueValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsNullable, CFBamValueObj::getRequiredIsNullable() ) );
		if( ! CFBamValueObj::isOptionalGenerateIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_GenerateId, CFBamValueObj::getOptionalGenerateIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_ImplementsPolymorph, CFBamValueObj::getRequiredImplementsPolymorph() ) );
		if( ! CFBamValueObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamValueObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamValueObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamValueObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamValueObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamValueObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamValueObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamValueObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamValueObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamValueObj::getGenDefName() {
		return( cfbam::CFBamValueBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamValueObj::getScope() {
		cfbam::ICFBamScopeObj* scope = getRequiredContainerScope();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamValueObj::getObjScope() {
		cfbam::ICFBamScopeObj* scope = getRequiredContainerScope();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamValueObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamValueObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamValueObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamValueObj::getObjQualifiedName() {
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

	std::string CFBamValueObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamValueObj::realize() {
		cfbam::ICFBamValueObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->realizeValue(
			(cfbam::ICFBamValueObj*)this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamValueObj::read( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->readValueByIdIdx( getValueBuff()->getRequiredTenantId(),
		getValueBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamValueObj::moveUp() {
		cfbam::ICFBamValueObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->moveUpValue( this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamValueObj::moveDown() {
		cfbam::ICFBamValueObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->moveDownValue( this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueTableObj* CFBamValueObj::getValueTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj() );
	}

	cfbam::ICFBamSchemaObj* CFBamValueObj::getSchema() {
		return( schema );
	}

	void CFBamValueObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = value;
	}

	cfbam::CFBamValuePKey* CFBamValueObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfbam::CFBamValuePKey();
		}
		return( pKey );
	}

	void CFBamValueObj::setPKey( cfbam::CFBamValuePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfbam::CFBamValuePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamValueObj::getIsNew() {
		return( isNew );
	}

	void CFBamValueObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfbam::ICFBamValueEditObj* CFBamValueObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamValueObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->lockValue( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamValueEditObj*>( edit ) );
	}

	void CFBamValueObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfbam::ICFBamValueEditObj* CFBamValueObj::getEdit() {
		return( edit );
	}

	cfbam::ICFBamValueEditObj* CFBamValueObj::getValueEdit() {
		return( dynamic_cast<cfbam::ICFBamValueEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamValueObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getValueBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamValueObj::getCreatedAt() {
		return( getValueBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamValueObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getValueBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamValueObj::getUpdatedAt() {
		return( getValueBuff()->getUpdatedAt() );
	}

	void CFBamValueObj::copyPKeyToBuff() {
		cfbam::CFBamValuePKey* tablePKey = getPKey();
		cfbam::CFBamValueBuff* tableBuff = getValueEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamValueObj::copyBuffToPKey() {
		cfbam::CFBamValuePKey* tablePKey = getPKey();
		cfbam::CFBamValueBuff* tableBuff = getValueBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamValueObj::getAffectedIndexes() {
		static const std::string S_ProcName( "getAffectedIndexes" );
		static const std::string S_RequiredContainerScope( "container.getRequiredContanerScope()" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );
		std::vector<cfbam::ICFBamIndexObj*> list;
		cfbam::ICFBamScopeObj* container = getRequiredContainerScope();
		cfbam::ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredContainerScope );
		}
		else if( container->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( container );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredContainerScope, container, S_ICFBamTableObj );
		}
		std::vector<cfbam::ICFBamIndexObj*> myIndexDefs = tableDef->getOptionalComponentsIndex();
		cfbam::ICFBamIndexObj* indexDef;
		cfbam::ICFBamIndexColObj* indexColDef;
		std::vector<cfbam::ICFBamIndexColObj*> myIndexCols;
		for( auto iterMyIndexDefs = myIndexDefs.begin(); iterMyIndexDefs != myIndexDefs.end(); iterMyIndexDefs ++ ) {
			indexDef = *iterMyIndexDefs;
			myIndexCols = indexDef->getOptionalComponentsColumns();
			for( auto iterMyIndexCols = myIndexCols.begin(); iterMyIndexCols != myIndexCols.end(); iterMyIndexCols ++ ) {
				indexColDef = *iterMyIndexCols;
				if( indexColDef->getRequiredLookupColumn() == this ) {
					list.push_back( indexDef );
				}
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamValueObj::getAffectedRelations() {
		static const std::string S_ProcName( "getAffectedRelations" );
		static const std::string S_RequiredContainerScope( "RequiredContainerScope" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		cfbam::ICFBamScopeObj* container = getRequiredContainerScope();
		cfbam::ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredContainerScope );
		}
		else if( container->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( container );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredContainerScope, container, S_ICFBamTableObj );
		}
		std::vector<cfbam::ICFBamRelationObj*> myRelationDefs = tableDef->getOptionalComponentsRelation();
		std::vector<cfbam::ICFBamRelationColObj*> relationCols;
		cfbam::ICFBamRelationObj* relationDef;
		cfbam::ICFBamRelationColObj* relationColDef;
		for( auto iterMyRelationDefs = myRelationDefs.begin(); iterMyRelationDefs != myRelationDefs.end(); iterMyRelationDefs ++ ) {
			relationDef = *iterMyRelationDefs;
			relationCols = relationDef->getOptionalComponentsColumns();
			for( auto iterCols = relationCols.begin(); iterCols != relationCols.end(); iterCols ++ ) {
				relationColDef = *iterCols;
				if( relationColDef->getRequiredLookupFromCol()->getRequiredLookupColumn() == this ) {
					list.push_back( relationDef );
				}
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamValueObj::getAffectedUniqueIndexes() {
		static const std::string S_ProcName( "getAffectedUniqueIndexes" );
		static const std::string S_RequiredContainerScope( "RequiredContainerScope" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );
		std::vector<cfbam::ICFBamIndexObj*> affectedIndexes = getAffectedIndexes();
		std::vector<cfbam::ICFBamIndexObj*> list;
		cfbam::ICFBamScopeObj* container = getRequiredContainerScope();
		cfbam::ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredContainerScope );
		}
		else if( container->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( container );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredContainerScope, container, S_ICFBamTableObj );
		}
		std::vector<cfbam::ICFBamIndexObj*> myIndexDefs = affectedIndexes;
		cfbam::ICFBamIndexObj* indexDef;
		for( auto iterIndexDefs = myIndexDefs.begin(); iterIndexDefs != myIndexDefs.end(); iterIndexDefs ++ ) {
			indexDef = *iterIndexDefs;
			if( indexDef->getRequiredIsUnique() ) {
				list.push_back( indexDef );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamValueObj::getColumnInMemberRelations() {
		static const std::string S_ProcName( "getColumnInMemberRelations" );
		static const std::string S_RequiredContainerScope( "RequiredContainerScope" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );
		static const std::string S_RequiredObjScope( "RequiredObjScope" );
		cfbam::ICFBamTableObj* tableDef = NULL;
		cfbam::ICFBamScopeObj* scopeDef = dynamic_cast<cfbam::ICFBamScopeObj*>( getObjScope() );
		if( scopeDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredObjScope );
		}
		else if( scopeDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( scopeDef );
			std::vector<cfbam::ICFBamRelationObj*> list;
			std::vector<cfbam::ICFBamRelationObj*> relations = tableDef->getOptionalComponentsRelation();
			cfbam::ICFBamRelationColObj* relationCol;
			std::vector<cfbam::ICFBamRelationColObj*> relationColumns;
			cfbam::ICFBamRelationObj* relation;
			cfbam::ICFBamSchema::RelationTypeEnum relType;
			for( auto iterRelations = relations.begin(); iterRelations != relations.end(); iterRelations ++ ) {
				relation = *iterRelations;
				relType = relation->getRequiredRelationType();
				if( ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Lookup )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Container )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Components )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Parent )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Children )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) )
				{
					relationColumns = relation->getOptionalComponentsColumns();
					for( auto iterCols = relationColumns.begin(); iterCols != relationColumns.end(); iterCols ++ ) {
						relationCol = *iterCols;
						if( this == relationCol->getRequiredLookupFromCol()->getRequiredLookupColumn() ) {
							list.push_back( relation );
							break;
						}
					}
				}
			}
			return( list );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredObjScope, scopeDef, S_ICFBamTableObj );
		}
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamValueObj::getColumnInComponentsRelations() {
		static const std::string S_ProcName( "getColumnInComponentsRelation" );
		static const std::string S_RequiredContainerScope( "RequiredContainerScope" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );

		cfbam::ICFBamScopeObj* container = getRequiredContainerScope();
		cfbam::ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredContainerScope );
		}
		else if( container->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( container );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredContainerScope, container, S_ICFBamTableObj );
		}

		cfbam::ICFBamRelationColObj* relationCol;
		cfbam::ICFBamRelationObj* relation;
		std::vector<cfbam::ICFBamRelationColObj*> relationColumns;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> relations = tableDef->getOptionalComponentsRelation();

		for( auto iterRelations = relations.begin(); iterRelations != relations.end(); iterRelations ++ ) {
			relation = *iterRelations;
			if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Components ) {
				relationColumns = relation->getOptionalComponentsColumns();
				for( auto iterCols = relationColumns.begin(); iterCols != relationColumns.end(); iterCols ++ ) {
					relationCol = *iterCols;
					if( this == relationCol->getRequiredLookupFromCol()->getRequiredLookupColumn() ) {
						list.push_back( relation );
						break;
					}
				}
			}
		}

		return( list );
	}

	bool CFBamValueObj::getGenerateId() {
		bool ret;
		if( ! isOptionalGenerateIdNull() ) {
			ret = getOptionalGenerateIdValue();
		}
		else {
			ret = false;
		}
		return( ret );
	}

}
