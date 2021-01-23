// Description: C++18 edit object instance implementation for CFBam Int16Def.

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
#include <cfbamobj/CFBamInt16DefObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamInt16DefEditObj.hpp>


namespace cfbam {

	const std::string CFBamInt16DefEditObj::CLASS_NAME( "CFBamInt16DefEditObj" );

	CFBamInt16DefEditObj::CFBamInt16DefEditObj( cfbam::ICFBamInt16DefObj* argOrig )
	: ICFBamInt16DefEditObj(),
	  CFBamAtomEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamInt16DefEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamInt16DefEditObj::~CFBamInt16DefEditObj() {
	}

	const std::string& CFBamInt16DefEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamInt16DefEditObj::getClassCode() const {
		return( cfbam::CFBamInt16DefBuff::CLASS_CODE );
	}

	bool CFBamInt16DefEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamAtomEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamInt16DefEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamInt16DefEditObj" );
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
		if( ! CFBamInt16DefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_InitValue, CFBamInt16DefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamInt16DefEditObj::isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_MinValue, CFBamInt16DefEditObj::getOptionalMinValueValue() ) );
		}
		if( ! CFBamInt16DefEditObj::isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_MaxValue, CFBamInt16DefEditObj::getOptionalMaxValueValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamInt16DefEditObj::getGenDefName() {
		return( cfbam::CFBamInt16DefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamInt16DefEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamInt16DefEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamInt16DefEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamInt16DefEditObj::getObjQualifiedName() {
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

	std::string CFBamInt16DefEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamInt16DefEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamInt16DefObj* retobj = getSchema()->getInt16DefTableObj()->realizeInt16Def( dynamic_cast<cfbam::ICFBamInt16DefObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamInt16DefEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamInt16DefEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamInt16DefEditObj::create() {
		cfbam::ICFBamInt16DefObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsInt16Def()->getSchema() )->getInt16DefTableObj()->createInt16Def( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamInt16DefEditObj::update() {
		getSchema()->getInt16DefTableObj()->updateInt16Def( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamInt16DefEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getInt16DefTableObj()->deleteInt16Def( this );
		return( NULL );
	}

	cfbam::ICFBamInt16DefTableObj* CFBamInt16DefEditObj::getInt16DefTable() {
		return( orig->getSchema()->getInt16DefTableObj() );
	}

	cfbam::ICFBamInt16DefEditObj* CFBamInt16DefEditObj::getInt16DefEdit() {
		return( (cfbam::ICFBamInt16DefEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamInt16DefEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamInt16DefObj* CFBamInt16DefEditObj::getOrigAsInt16Def() {
		return( dynamic_cast<cfbam::ICFBamInt16DefObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamInt16DefEditObj::getBuff() {
		return( buff );
	}

	void CFBamInt16DefEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamAtomEditObj::setBuff( value );
		}
	}

	bool CFBamInt16DefEditObj::isOptionalInitValueNull() {
		return( getInt16DefBuff()->isOptionalInitValueNull() );
	}

	const int16_t CFBamInt16DefEditObj::getOptionalInitValueValue() {
		return( getInt16DefBuff()->getOptionalInitValueValue() );
	}

	const int16_t* CFBamInt16DefEditObj::getOptionalInitValueReference() {
		return( getInt16DefBuff()->getOptionalInitValueReference() );
	}

	void CFBamInt16DefEditObj::setOptionalInitValueNull() {
		if( ! getInt16DefBuff()->isOptionalInitValueNull() ) {
			getInt16DefEditBuff()->setOptionalInitValueNull();
		}
	}

	void CFBamInt16DefEditObj::setOptionalInitValueValue( const int16_t value ) {
		if( getInt16DefBuff()->isOptionalInitValueNull() ) {
			getInt16DefEditBuff()->setOptionalInitValueValue( value );
		}
		else if( getInt16DefBuff()->getOptionalInitValueValue() != value ) {
			getInt16DefEditBuff()->setOptionalInitValueValue( value );
		}
	}

	bool CFBamInt16DefEditObj::isOptionalMinValueNull() {
		return( getInt16DefBuff()->isOptionalMinValueNull() );
	}

	const int16_t CFBamInt16DefEditObj::getOptionalMinValueValue() {
		return( getInt16DefBuff()->getOptionalMinValueValue() );
	}

	const int16_t* CFBamInt16DefEditObj::getOptionalMinValueReference() {
		return( getInt16DefBuff()->getOptionalMinValueReference() );
	}

	void CFBamInt16DefEditObj::setOptionalMinValueNull() {
		if( ! getInt16DefBuff()->isOptionalMinValueNull() ) {
			getInt16DefEditBuff()->setOptionalMinValueNull();
		}
	}

	void CFBamInt16DefEditObj::setOptionalMinValueValue( const int16_t value ) {
		if( getInt16DefBuff()->isOptionalMinValueNull() ) {
			getInt16DefEditBuff()->setOptionalMinValueValue( value );
		}
		else if( getInt16DefBuff()->getOptionalMinValueValue() != value ) {
			getInt16DefEditBuff()->setOptionalMinValueValue( value );
		}
	}

	bool CFBamInt16DefEditObj::isOptionalMaxValueNull() {
		return( getInt16DefBuff()->isOptionalMaxValueNull() );
	}

	const int16_t CFBamInt16DefEditObj::getOptionalMaxValueValue() {
		return( getInt16DefBuff()->getOptionalMaxValueValue() );
	}

	const int16_t* CFBamInt16DefEditObj::getOptionalMaxValueReference() {
		return( getInt16DefBuff()->getOptionalMaxValueReference() );
	}

	void CFBamInt16DefEditObj::setOptionalMaxValueNull() {
		if( ! getInt16DefBuff()->isOptionalMaxValueNull() ) {
			getInt16DefEditBuff()->setOptionalMaxValueNull();
		}
	}

	void CFBamInt16DefEditObj::setOptionalMaxValueValue( const int16_t value ) {
		if( getInt16DefBuff()->isOptionalMaxValueNull() ) {
			getInt16DefEditBuff()->setOptionalMaxValueValue( value );
		}
		else if( getInt16DefBuff()->getOptionalMaxValueValue() != value ) {
			getInt16DefEditBuff()->setOptionalMaxValueValue( value );
		}
	}

	void CFBamInt16DefEditObj::copyBuffToOrig() {
		cfbam::CFBamInt16DefBuff* origBuff = getOrigAsInt16Def()->getInt16DefEditBuff();
		cfbam::CFBamInt16DefBuff* myBuff = getInt16DefBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamInt16DefEditObj::copyOrigToBuff() {
		cfbam::CFBamInt16DefBuff* origBuff = getOrigAsInt16Def()->getInt16DefBuff();
		cfbam::CFBamInt16DefBuff* myBuff = getInt16DefEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
