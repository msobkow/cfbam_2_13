// Description: C++18 edit object instance implementation for CFBam UInt16Def.

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
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamUInt16DefObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamUInt16DefEditObj.hpp>


namespace cfbam {

	const std::string CFBamUInt16DefEditObj::CLASS_NAME( "CFBamUInt16DefEditObj" );

	CFBamUInt16DefEditObj::CFBamUInt16DefEditObj( cfbam::ICFBamUInt16DefObj* argOrig )
	: ICFBamUInt16DefEditObj(),
	  CFBamAtomEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamUInt16DefEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamUInt16DefEditObj::~CFBamUInt16DefEditObj() {
	}

	const std::string& CFBamUInt16DefEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamUInt16DefEditObj::getClassCode() const {
		return( cfbam::CFBamUInt16DefBuff::CLASS_CODE );
	}

	bool CFBamUInt16DefEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamAtomEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamUInt16DefEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamUInt16DefEditObj" );
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
		if( ! CFBamUInt16DefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUInt16( &S_Space, S_InitValue, CFBamUInt16DefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamUInt16DefEditObj::isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUInt16( &S_Space, S_MinValue, CFBamUInt16DefEditObj::getOptionalMinValueValue() ) );
		}
		if( ! CFBamUInt16DefEditObj::isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUInt16( &S_Space, S_MaxValue, CFBamUInt16DefEditObj::getOptionalMaxValueValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamUInt16DefEditObj::getGenDefName() {
		return( cfbam::CFBamUInt16DefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamUInt16DefEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamUInt16DefEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamUInt16DefEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamUInt16DefEditObj::getObjQualifiedName() {
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

	std::string CFBamUInt16DefEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamUInt16DefEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamUInt16DefObj* retobj = getSchema()->getUInt16DefTableObj()->realizeUInt16Def( dynamic_cast<cfbam::ICFBamUInt16DefObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamUInt16DefEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamUInt16DefEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamUInt16DefEditObj::create() {
		cfbam::ICFBamUInt16DefObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsUInt16Def()->getSchema() )->getUInt16DefTableObj()->createUInt16Def( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamUInt16DefEditObj::update() {
		getSchema()->getUInt16DefTableObj()->updateUInt16Def( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamUInt16DefEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getUInt16DefTableObj()->deleteUInt16Def( this );
		return( NULL );
	}

	cfbam::ICFBamUInt16DefTableObj* CFBamUInt16DefEditObj::getUInt16DefTable() {
		return( orig->getSchema()->getUInt16DefTableObj() );
	}

	cfbam::ICFBamUInt16DefEditObj* CFBamUInt16DefEditObj::getUInt16DefEdit() {
		return( (cfbam::ICFBamUInt16DefEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamUInt16DefEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamUInt16DefObj* CFBamUInt16DefEditObj::getOrigAsUInt16Def() {
		return( dynamic_cast<cfbam::ICFBamUInt16DefObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamUInt16DefEditObj::getBuff() {
		return( buff );
	}

	void CFBamUInt16DefEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamAtomEditObj::setBuff( value );
		}
	}

	bool CFBamUInt16DefEditObj::isOptionalInitValueNull() {
		return( getUInt16DefBuff()->isOptionalInitValueNull() );
	}

	const uint16_t CFBamUInt16DefEditObj::getOptionalInitValueValue() {
		return( getUInt16DefBuff()->getOptionalInitValueValue() );
	}

	const uint16_t* CFBamUInt16DefEditObj::getOptionalInitValueReference() {
		return( getUInt16DefBuff()->getOptionalInitValueReference() );
	}

	void CFBamUInt16DefEditObj::setOptionalInitValueNull() {
		if( ! getUInt16DefBuff()->isOptionalInitValueNull() ) {
			getUInt16DefEditBuff()->setOptionalInitValueNull();
		}
	}

	void CFBamUInt16DefEditObj::setOptionalInitValueValue( const uint16_t value ) {
		if( getUInt16DefBuff()->isOptionalInitValueNull() ) {
			getUInt16DefEditBuff()->setOptionalInitValueValue( value );
		}
		else if( getUInt16DefBuff()->getOptionalInitValueValue() != value ) {
			getUInt16DefEditBuff()->setOptionalInitValueValue( value );
		}
	}

	bool CFBamUInt16DefEditObj::isOptionalMinValueNull() {
		return( getUInt16DefBuff()->isOptionalMinValueNull() );
	}

	const uint16_t CFBamUInt16DefEditObj::getOptionalMinValueValue() {
		return( getUInt16DefBuff()->getOptionalMinValueValue() );
	}

	const uint16_t* CFBamUInt16DefEditObj::getOptionalMinValueReference() {
		return( getUInt16DefBuff()->getOptionalMinValueReference() );
	}

	void CFBamUInt16DefEditObj::setOptionalMinValueNull() {
		if( ! getUInt16DefBuff()->isOptionalMinValueNull() ) {
			getUInt16DefEditBuff()->setOptionalMinValueNull();
		}
	}

	void CFBamUInt16DefEditObj::setOptionalMinValueValue( const uint16_t value ) {
		if( getUInt16DefBuff()->isOptionalMinValueNull() ) {
			getUInt16DefEditBuff()->setOptionalMinValueValue( value );
		}
		else if( getUInt16DefBuff()->getOptionalMinValueValue() != value ) {
			getUInt16DefEditBuff()->setOptionalMinValueValue( value );
		}
	}

	bool CFBamUInt16DefEditObj::isOptionalMaxValueNull() {
		return( getUInt16DefBuff()->isOptionalMaxValueNull() );
	}

	const uint16_t CFBamUInt16DefEditObj::getOptionalMaxValueValue() {
		return( getUInt16DefBuff()->getOptionalMaxValueValue() );
	}

	const uint16_t* CFBamUInt16DefEditObj::getOptionalMaxValueReference() {
		return( getUInt16DefBuff()->getOptionalMaxValueReference() );
	}

	void CFBamUInt16DefEditObj::setOptionalMaxValueNull() {
		if( ! getUInt16DefBuff()->isOptionalMaxValueNull() ) {
			getUInt16DefEditBuff()->setOptionalMaxValueNull();
		}
	}

	void CFBamUInt16DefEditObj::setOptionalMaxValueValue( const uint16_t value ) {
		if( getUInt16DefBuff()->isOptionalMaxValueNull() ) {
			getUInt16DefEditBuff()->setOptionalMaxValueValue( value );
		}
		else if( getUInt16DefBuff()->getOptionalMaxValueValue() != value ) {
			getUInt16DefEditBuff()->setOptionalMaxValueValue( value );
		}
	}

	void CFBamUInt16DefEditObj::copyBuffToOrig() {
		cfbam::CFBamUInt16DefBuff* origBuff = getOrigAsUInt16Def()->getUInt16DefEditBuff();
		cfbam::CFBamUInt16DefBuff* myBuff = getUInt16DefBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamUInt16DefEditObj::copyOrigToBuff() {
		cfbam::CFBamUInt16DefBuff* origBuff = getOrigAsUInt16Def()->getUInt16DefBuff();
		cfbam::CFBamUInt16DefBuff* myBuff = getUInt16DefEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
