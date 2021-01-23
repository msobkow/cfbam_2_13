// Description: C++18 base object instance implementation for CFBam NmTokensType.

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
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamNmTokensDefObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamNmTokensDefObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamNmTokensTypeObj.hpp>

namespace cfbam {

	const std::string CFBamNmTokensTypeObj::CLASS_NAME( "CFBamNmTokensTypeObj" );
	const classcode_t CFBamNmTokensTypeObj::CLASS_CODE = 0xa82cL;

	const int64_t CFBamNmTokensTypeObj::getRequiredSchemaDefId() {
		return( getNmTokensTypeBuff()->getRequiredSchemaDefId() );
	}

	const int64_t* CFBamNmTokensTypeObj::getRequiredSchemaDefIdReference() {
		return( getNmTokensTypeBuff()->getRequiredSchemaDefIdReference() );
	}


	cfbam::ICFBamSchemaDefObj* CFBamNmTokensTypeObj::getRequiredContainerSchemaDef( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getPKey()->getRequiredTenantId(),
					getNmTokensTypeBuff()->getRequiredSchemaDefId(), forceRead );
		}
		return( retobj );
	}

	CFBamNmTokensTypeObj::CFBamNmTokensTypeObj()
	: ICFBamNmTokensTypeObj(),
	  CFBamNmTokensDefObj()
	{
	}

	CFBamNmTokensTypeObj::CFBamNmTokensTypeObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamNmTokensTypeObj(),
	  CFBamNmTokensDefObj( argSchema )
	{
	}

	CFBamNmTokensTypeObj::~CFBamNmTokensTypeObj() {
	}

	cfbam::CFBamValueBuff* CFBamNmTokensTypeObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamNmTokensTypeBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableNmTokensType()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamNmTokensTypeObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamNmTokensTypeObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamNmTokensTypeObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamNmTokensTypeObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamNmTokensDefObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamNmTokensTypeObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamNmTokensTypeObj" );
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
		static const std::string S_DbName( "DbName" );
		static const std::string S_MaxLen( "MaxLen" );
		static const std::string S_InitValue( "InitValue" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
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
		if( ! CFBamAtomObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamAtomObj::getOptionalDbNameValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_MaxLen, CFBamNmTokensDefObj::getRequiredMaxLen() ) );
		if( ! CFBamNmTokensDefObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_InitValue, CFBamNmTokensDefObj::getOptionalInitValueValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, CFBamNmTokensTypeObj::getRequiredSchemaDefId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamNmTokensTypeObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamNmTokensTypeObj::getGenDefName() {
		return( cfbam::CFBamNmTokensTypeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamNmTokensTypeObj::getScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchemaDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamNmTokensTypeObj::getObjScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchemaDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamNmTokensTypeObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamNmTokensTypeObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamNmTokensTypeObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamNmTokensTypeObj::getObjQualifiedName() {
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

	std::string CFBamNmTokensTypeObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamNmTokensTypeObj::realize() {
		cfbam::ICFBamNmTokensTypeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getNmTokensTypeTableObj()->realizeNmTokensType(
			(cfbam::ICFBamNmTokensTypeObj*)this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamNmTokensTypeObj::read( bool forceRead ) {
		cfbam::ICFBamNmTokensTypeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getNmTokensTypeTableObj()->readNmTokensTypeByIdIdx( getNmTokensTypeBuff()->getRequiredTenantId(),
		getNmTokensTypeBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamNmTokensTypeObj::moveUp() {
		cfbam::ICFBamNmTokensTypeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getNmTokensTypeTableObj()->moveUpNmTokensType( this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamNmTokensTypeObj::moveDown() {
		cfbam::ICFBamNmTokensTypeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getNmTokensTypeTableObj()->moveDownNmTokensType( this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueEditObj* CFBamNmTokensTypeObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamNmTokensTypeObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getNmTokensTypeTableObj()->lockNmTokensType( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getNmTokensTypeTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamValueEditObj*>( edit ) );
	}

	cfbam::ICFBamNmTokensTypeEditObj* CFBamNmTokensTypeObj::getNmTokensTypeEdit() {
		return( dynamic_cast<cfbam::ICFBamNmTokensTypeEditObj*>( edit ) );
	}

}
