// Description: C++18 edit object instance implementation for CFBam UInt64Def.

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
#include <cfbamobj/CFBamUInt64DefObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamUInt64DefEditObj.hpp>


namespace cfbam {

	const std::string CFBamUInt64DefEditObj::CLASS_NAME( "CFBamUInt64DefEditObj" );

	CFBamUInt64DefEditObj::CFBamUInt64DefEditObj( cfbam::ICFBamUInt64DefObj* argOrig )
	: ICFBamUInt64DefEditObj(),
	  CFBamAtomEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamUInt64DefEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamUInt64DefEditObj::~CFBamUInt64DefEditObj() {
	}

	const std::string& CFBamUInt64DefEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamUInt64DefEditObj::getClassCode() const {
		return( cfbam::CFBamUInt64DefBuff::CLASS_CODE );
	}

	bool CFBamUInt64DefEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamAtomEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamUInt64DefEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamUInt64DefEditObj" );
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
		if( ! CFBamUInt64DefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUInt64( &S_Space, S_InitValue, CFBamUInt64DefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamUInt64DefEditObj::isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUInt64( &S_Space, S_MinValue, CFBamUInt64DefEditObj::getOptionalMinValueValue() ) );
		}
		if( ! CFBamUInt64DefEditObj::isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUInt64( &S_Space, S_MaxValue, CFBamUInt64DefEditObj::getOptionalMaxValueValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamUInt64DefEditObj::getGenDefName() {
		return( cfbam::CFBamUInt64DefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamUInt64DefEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamUInt64DefEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamUInt64DefEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamUInt64DefEditObj::getObjQualifiedName() {
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

	std::string CFBamUInt64DefEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamUInt64DefEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamUInt64DefObj* retobj = getSchema()->getUInt64DefTableObj()->realizeUInt64Def( dynamic_cast<cfbam::ICFBamUInt64DefObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamUInt64DefEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamUInt64DefEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamUInt64DefEditObj::create() {
		cfbam::ICFBamUInt64DefObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsUInt64Def()->getSchema() )->getUInt64DefTableObj()->createUInt64Def( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamUInt64DefEditObj::update() {
		getSchema()->getUInt64DefTableObj()->updateUInt64Def( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamUInt64DefEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getUInt64DefTableObj()->deleteUInt64Def( this );
		return( NULL );
	}

	cfbam::ICFBamUInt64DefTableObj* CFBamUInt64DefEditObj::getUInt64DefTable() {
		return( orig->getSchema()->getUInt64DefTableObj() );
	}

	cfbam::ICFBamUInt64DefEditObj* CFBamUInt64DefEditObj::getUInt64DefEdit() {
		return( (cfbam::ICFBamUInt64DefEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamUInt64DefEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamUInt64DefObj* CFBamUInt64DefEditObj::getOrigAsUInt64Def() {
		return( dynamic_cast<cfbam::ICFBamUInt64DefObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamUInt64DefEditObj::getBuff() {
		return( buff );
	}

	void CFBamUInt64DefEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamAtomEditObj::setBuff( value );
		}
	}

	bool CFBamUInt64DefEditObj::isOptionalInitValueNull() {
		return( getUInt64DefBuff()->isOptionalInitValueNull() );
	}

	const uint64_t CFBamUInt64DefEditObj::getOptionalInitValueValue() {
		return( getUInt64DefBuff()->getOptionalInitValueValue() );
	}

	const uint64_t* CFBamUInt64DefEditObj::getOptionalInitValueReference() {
		return( getUInt64DefBuff()->getOptionalInitValueReference() );
	}

	void CFBamUInt64DefEditObj::setOptionalInitValueNull() {
		if( ! getUInt64DefBuff()->isOptionalInitValueNull() ) {
			getUInt64DefEditBuff()->setOptionalInitValueNull();
		}
	}

	void CFBamUInt64DefEditObj::setOptionalInitValueValue( const uint64_t value ) {
		if( getUInt64DefBuff()->isOptionalInitValueNull() ) {
			getUInt64DefEditBuff()->setOptionalInitValueValue( value );
		}
		else if( getUInt64DefBuff()->getOptionalInitValueValue() != value ) {
			getUInt64DefEditBuff()->setOptionalInitValueValue( value );
		}
	}

	bool CFBamUInt64DefEditObj::isOptionalMinValueNull() {
		return( getUInt64DefBuff()->isOptionalMinValueNull() );
	}

	const uint64_t CFBamUInt64DefEditObj::getOptionalMinValueValue() {
		return( getUInt64DefBuff()->getOptionalMinValueValue() );
	}

	const uint64_t* CFBamUInt64DefEditObj::getOptionalMinValueReference() {
		return( getUInt64DefBuff()->getOptionalMinValueReference() );
	}

	void CFBamUInt64DefEditObj::setOptionalMinValueNull() {
		if( ! getUInt64DefBuff()->isOptionalMinValueNull() ) {
			getUInt64DefEditBuff()->setOptionalMinValueNull();
		}
	}

	void CFBamUInt64DefEditObj::setOptionalMinValueValue( const uint64_t value ) {
		if( getUInt64DefBuff()->isOptionalMinValueNull() ) {
			getUInt64DefEditBuff()->setOptionalMinValueValue( value );
		}
		else if( getUInt64DefBuff()->getOptionalMinValueValue() != value ) {
			getUInt64DefEditBuff()->setOptionalMinValueValue( value );
		}
	}

	bool CFBamUInt64DefEditObj::isOptionalMaxValueNull() {
		return( getUInt64DefBuff()->isOptionalMaxValueNull() );
	}

	const uint64_t CFBamUInt64DefEditObj::getOptionalMaxValueValue() {
		return( getUInt64DefBuff()->getOptionalMaxValueValue() );
	}

	const uint64_t* CFBamUInt64DefEditObj::getOptionalMaxValueReference() {
		return( getUInt64DefBuff()->getOptionalMaxValueReference() );
	}

	void CFBamUInt64DefEditObj::setOptionalMaxValueNull() {
		if( ! getUInt64DefBuff()->isOptionalMaxValueNull() ) {
			getUInt64DefEditBuff()->setOptionalMaxValueNull();
		}
	}

	void CFBamUInt64DefEditObj::setOptionalMaxValueValue( const uint64_t value ) {
		if( getUInt64DefBuff()->isOptionalMaxValueNull() ) {
			getUInt64DefEditBuff()->setOptionalMaxValueValue( value );
		}
		else if( getUInt64DefBuff()->getOptionalMaxValueValue() != value ) {
			getUInt64DefEditBuff()->setOptionalMaxValueValue( value );
		}
	}

	void CFBamUInt64DefEditObj::copyBuffToOrig() {
		cfbam::CFBamUInt64DefBuff* origBuff = getOrigAsUInt64Def()->getUInt64DefEditBuff();
		cfbam::CFBamUInt64DefBuff* myBuff = getUInt64DefBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamUInt64DefEditObj::copyOrigToBuff() {
		cfbam::CFBamUInt64DefBuff* origBuff = getOrigAsUInt64Def()->getUInt64DefBuff();
		cfbam::CFBamUInt64DefBuff* myBuff = getUInt64DefEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
