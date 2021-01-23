// Description: C++18 edit object instance implementation for CFBam UInt32Def.

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
#include <cfbamobj/CFBamUInt32DefObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamUInt32DefEditObj.hpp>


namespace cfbam {

	const std::string CFBamUInt32DefEditObj::CLASS_NAME( "CFBamUInt32DefEditObj" );

	CFBamUInt32DefEditObj::CFBamUInt32DefEditObj( cfbam::ICFBamUInt32DefObj* argOrig )
	: ICFBamUInt32DefEditObj(),
	  CFBamAtomEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamUInt32DefEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamUInt32DefEditObj::~CFBamUInt32DefEditObj() {
	}

	const std::string& CFBamUInt32DefEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamUInt32DefEditObj::getClassCode() const {
		return( cfbam::CFBamUInt32DefBuff::CLASS_CODE );
	}

	bool CFBamUInt32DefEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamAtomEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamUInt32DefEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamUInt32DefEditObj" );
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
		if( ! CFBamUInt32DefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUInt32( &S_Space, S_InitValue, CFBamUInt32DefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamUInt32DefEditObj::isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUInt32( &S_Space, S_MinValue, CFBamUInt32DefEditObj::getOptionalMinValueValue() ) );
		}
		if( ! CFBamUInt32DefEditObj::isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUInt32( &S_Space, S_MaxValue, CFBamUInt32DefEditObj::getOptionalMaxValueValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamUInt32DefEditObj::getGenDefName() {
		return( cfbam::CFBamUInt32DefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamUInt32DefEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamUInt32DefEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamUInt32DefEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamUInt32DefEditObj::getObjQualifiedName() {
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

	std::string CFBamUInt32DefEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamUInt32DefEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamUInt32DefObj* retobj = getSchema()->getUInt32DefTableObj()->realizeUInt32Def( dynamic_cast<cfbam::ICFBamUInt32DefObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamUInt32DefEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamUInt32DefEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamUInt32DefEditObj::create() {
		cfbam::ICFBamUInt32DefObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsUInt32Def()->getSchema() )->getUInt32DefTableObj()->createUInt32Def( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamUInt32DefEditObj::update() {
		getSchema()->getUInt32DefTableObj()->updateUInt32Def( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamUInt32DefEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getUInt32DefTableObj()->deleteUInt32Def( this );
		return( NULL );
	}

	cfbam::ICFBamUInt32DefTableObj* CFBamUInt32DefEditObj::getUInt32DefTable() {
		return( orig->getSchema()->getUInt32DefTableObj() );
	}

	cfbam::ICFBamUInt32DefEditObj* CFBamUInt32DefEditObj::getUInt32DefEdit() {
		return( (cfbam::ICFBamUInt32DefEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamUInt32DefEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamUInt32DefObj* CFBamUInt32DefEditObj::getOrigAsUInt32Def() {
		return( dynamic_cast<cfbam::ICFBamUInt32DefObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamUInt32DefEditObj::getBuff() {
		return( buff );
	}

	void CFBamUInt32DefEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamAtomEditObj::setBuff( value );
		}
	}

	bool CFBamUInt32DefEditObj::isOptionalInitValueNull() {
		return( getUInt32DefBuff()->isOptionalInitValueNull() );
	}

	const uint32_t CFBamUInt32DefEditObj::getOptionalInitValueValue() {
		return( getUInt32DefBuff()->getOptionalInitValueValue() );
	}

	const uint32_t* CFBamUInt32DefEditObj::getOptionalInitValueReference() {
		return( getUInt32DefBuff()->getOptionalInitValueReference() );
	}

	void CFBamUInt32DefEditObj::setOptionalInitValueNull() {
		if( ! getUInt32DefBuff()->isOptionalInitValueNull() ) {
			getUInt32DefEditBuff()->setOptionalInitValueNull();
		}
	}

	void CFBamUInt32DefEditObj::setOptionalInitValueValue( const uint32_t value ) {
		if( getUInt32DefBuff()->isOptionalInitValueNull() ) {
			getUInt32DefEditBuff()->setOptionalInitValueValue( value );
		}
		else if( getUInt32DefBuff()->getOptionalInitValueValue() != value ) {
			getUInt32DefEditBuff()->setOptionalInitValueValue( value );
		}
	}

	bool CFBamUInt32DefEditObj::isOptionalMinValueNull() {
		return( getUInt32DefBuff()->isOptionalMinValueNull() );
	}

	const uint32_t CFBamUInt32DefEditObj::getOptionalMinValueValue() {
		return( getUInt32DefBuff()->getOptionalMinValueValue() );
	}

	const uint32_t* CFBamUInt32DefEditObj::getOptionalMinValueReference() {
		return( getUInt32DefBuff()->getOptionalMinValueReference() );
	}

	void CFBamUInt32DefEditObj::setOptionalMinValueNull() {
		if( ! getUInt32DefBuff()->isOptionalMinValueNull() ) {
			getUInt32DefEditBuff()->setOptionalMinValueNull();
		}
	}

	void CFBamUInt32DefEditObj::setOptionalMinValueValue( const uint32_t value ) {
		if( getUInt32DefBuff()->isOptionalMinValueNull() ) {
			getUInt32DefEditBuff()->setOptionalMinValueValue( value );
		}
		else if( getUInt32DefBuff()->getOptionalMinValueValue() != value ) {
			getUInt32DefEditBuff()->setOptionalMinValueValue( value );
		}
	}

	bool CFBamUInt32DefEditObj::isOptionalMaxValueNull() {
		return( getUInt32DefBuff()->isOptionalMaxValueNull() );
	}

	const uint32_t CFBamUInt32DefEditObj::getOptionalMaxValueValue() {
		return( getUInt32DefBuff()->getOptionalMaxValueValue() );
	}

	const uint32_t* CFBamUInt32DefEditObj::getOptionalMaxValueReference() {
		return( getUInt32DefBuff()->getOptionalMaxValueReference() );
	}

	void CFBamUInt32DefEditObj::setOptionalMaxValueNull() {
		if( ! getUInt32DefBuff()->isOptionalMaxValueNull() ) {
			getUInt32DefEditBuff()->setOptionalMaxValueNull();
		}
	}

	void CFBamUInt32DefEditObj::setOptionalMaxValueValue( const uint32_t value ) {
		if( getUInt32DefBuff()->isOptionalMaxValueNull() ) {
			getUInt32DefEditBuff()->setOptionalMaxValueValue( value );
		}
		else if( getUInt32DefBuff()->getOptionalMaxValueValue() != value ) {
			getUInt32DefEditBuff()->setOptionalMaxValueValue( value );
		}
	}

	void CFBamUInt32DefEditObj::copyBuffToOrig() {
		cfbam::CFBamUInt32DefBuff* origBuff = getOrigAsUInt32Def()->getUInt32DefEditBuff();
		cfbam::CFBamUInt32DefBuff* myBuff = getUInt32DefBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamUInt32DefEditObj::copyOrigToBuff() {
		cfbam::CFBamUInt32DefBuff* origBuff = getOrigAsUInt32Def()->getUInt32DefBuff();
		cfbam::CFBamUInt32DefBuff* myBuff = getUInt32DefEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
