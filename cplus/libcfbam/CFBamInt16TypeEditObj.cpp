// Description: C++18 edit object instance implementation for CFBam Int16Type.

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
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamInt16DefObj.hpp>
#include <cfbamobj/CFBamInt16TypeObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/ICFBamInt16DefObj.hpp>
#include <cfbamobj/ICFBamInt16DefEditObj.hpp>
#include <cfbamobj/CFBamInt16DefObj.hpp>
#include <cfbamobj/CFBamInt16DefEditObj.hpp>
#include <cfbamobj/CFBamInt16TypeEditObj.hpp>


namespace cfbam {

	const std::string CFBamInt16TypeEditObj::CLASS_NAME( "CFBamInt16TypeEditObj" );

	CFBamInt16TypeEditObj::CFBamInt16TypeEditObj( cfbam::ICFBamInt16TypeObj* argOrig )
	: ICFBamInt16TypeEditObj(),
	  CFBamInt16DefEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamInt16TypeEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamInt16TypeEditObj::~CFBamInt16TypeEditObj() {
	}

	const std::string& CFBamInt16TypeEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamInt16TypeEditObj::getClassCode() const {
		return( cfbam::CFBamInt16TypeBuff::CLASS_CODE );
	}

	bool CFBamInt16TypeEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamInt16DefEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamInt16TypeEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamInt16TypeEditObj" );
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
		static const std::string S_InitValue( "InitValue" );
		static const std::string S_MinValue( "MinValue" );
		static const std::string S_MaxValue( "MaxValue" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamValueEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamValueEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamValueEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamValueEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamValueEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamValueEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ScopeId, CFBamValueEditObj::getRequiredScopeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamValueEditObj::getRequiredId() ) );
		if( ! CFBamValueEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamValueEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamValueEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamValueEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamValueEditObj::getRequiredName() ) );
		if( ! CFBamValueEditObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamValueEditObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamValueEditObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamValueEditObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamValueEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamValueEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamValueEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamValueEditObj::getOptionalDescriptionValue() ) );
		}
		if( ! CFBamValueEditObj::isOptionalDefaultXmlValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefaultXmlValue, CFBamValueEditObj::getOptionalDefaultXmlValueValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsNullable, CFBamValueEditObj::getRequiredIsNullable() ) );
		if( ! CFBamValueEditObj::isOptionalGenerateIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_GenerateId, CFBamValueEditObj::getOptionalGenerateIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_ImplementsPolymorph, CFBamValueEditObj::getRequiredImplementsPolymorph() ) );
		if( ! CFBamValueEditObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamValueEditObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamValueEditObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamValueEditObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamValueEditObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamValueEditObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamValueEditObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamValueEditObj::getOptionalNextIdValue() ) );
		}
		if( ! CFBamAtomEditObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamAtomEditObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamInt16DefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_InitValue, CFBamInt16DefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamInt16DefEditObj::isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_MinValue, CFBamInt16DefEditObj::getOptionalMinValueValue() ) );
		}
		if( ! CFBamInt16DefEditObj::isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_MaxValue, CFBamInt16DefEditObj::getOptionalMaxValueValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, CFBamInt16TypeEditObj::getRequiredSchemaDefId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamInt16TypeEditObj::getGenDefName() {
		return( cfbam::CFBamInt16TypeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamInt16TypeEditObj::getScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchemaDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamInt16TypeEditObj::getObjScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchemaDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamInt16TypeEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamInt16TypeEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamInt16TypeEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamInt16TypeEditObj::getObjQualifiedName() {
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

	std::string CFBamInt16TypeEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamInt16TypeEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamInt16TypeObj* retobj = getSchema()->getInt16TypeTableObj()->realizeInt16Type( dynamic_cast<cfbam::ICFBamInt16TypeObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamInt16TypeEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamInt16TypeEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamInt16TypeEditObj::create() {
		cfbam::ICFBamInt16TypeObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsInt16Type()->getSchema() )->getInt16TypeTableObj()->createInt16Type( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamInt16TypeEditObj::update() {
		getSchema()->getInt16TypeTableObj()->updateInt16Type( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamInt16TypeEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getInt16TypeTableObj()->deleteInt16Type( this );
		return( NULL );
	}

	cfbam::ICFBamInt16TypeTableObj* CFBamInt16TypeEditObj::getInt16TypeTable() {
		return( orig->getSchema()->getInt16TypeTableObj() );
	}

	cfbam::ICFBamInt16TypeEditObj* CFBamInt16TypeEditObj::getInt16TypeEdit() {
		return( (cfbam::ICFBamInt16TypeEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamInt16TypeEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamInt16TypeObj* CFBamInt16TypeEditObj::getOrigAsInt16Type() {
		return( dynamic_cast<cfbam::ICFBamInt16TypeObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamInt16TypeEditObj::getBuff() {
		return( buff );
	}

	void CFBamInt16TypeEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamInt16DefEditObj::setBuff( value );
		}
	}

	const int64_t CFBamInt16TypeEditObj::getRequiredSchemaDefId() {
		return( getInt16TypeBuff()->getRequiredSchemaDefId() );
	}

	const int64_t* CFBamInt16TypeEditObj::getRequiredSchemaDefIdReference() {
		return( getInt16TypeBuff()->getRequiredSchemaDefIdReference() );
	}

	void CFBamInt16TypeEditObj::setRequiredContainerScope( cfbam::ICFBamScopeObj* value ) {
		if( value == NULL ) {
			setRequiredContainerSchemaDef( NULL );
		}
		else {
			setRequiredContainerSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( value ) );
		}
	}

	cfbam::ICFBamSchemaDefObj* CFBamInt16TypeEditObj::getRequiredContainerSchemaDef( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsInt16Type()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getPKey()->getRequiredTenantId(),
					getInt16TypeBuff()->getRequiredSchemaDefId() );
		}
		return( retobj );
	}

	void CFBamInt16TypeEditObj::setRequiredContainerSchemaDef( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getInt16TypeEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getInt16TypeEditBuff()->setRequiredSchemaDefId( value->getRequiredId() );
			}

			CFBamInt16DefEditObj::setRequiredContainerScope( value );		}

	void CFBamInt16TypeEditObj::copyBuffToOrig() {
		cfbam::CFBamInt16TypeBuff* origBuff = getOrigAsInt16Type()->getInt16TypeEditBuff();
		cfbam::CFBamInt16TypeBuff* myBuff = getInt16TypeBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamInt16TypeEditObj::copyOrigToBuff() {
		cfbam::CFBamInt16TypeBuff* origBuff = getOrigAsInt16Type()->getInt16TypeBuff();
		cfbam::CFBamInt16TypeBuff* myBuff = getInt16TypeEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
