// Description: C++18 edit object instance implementation for CFBam BoolDef.

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
#include <cfbamobj/CFBamBoolDefObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamBoolDefEditObj.hpp>


namespace cfbam {

	const std::string CFBamBoolDefEditObj::CLASS_NAME( "CFBamBoolDefEditObj" );

	CFBamBoolDefEditObj::CFBamBoolDefEditObj( cfbam::ICFBamBoolDefObj* argOrig )
	: ICFBamBoolDefEditObj(),
	  CFBamAtomEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamBoolDefEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamBoolDefEditObj::~CFBamBoolDefEditObj() {
	}

	const std::string& CFBamBoolDefEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamBoolDefEditObj::getClassCode() const {
		return( cfbam::CFBamBoolDefBuff::CLASS_CODE );
	}

	bool CFBamBoolDefEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamAtomEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamBoolDefEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamBoolDefEditObj" );
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
		static const std::string S_FalseString( "FalseString" );
		static const std::string S_TrueString( "TrueString" );
		static const std::string S_NullString( "NullString" );
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
		if( ! CFBamBoolDefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_InitValue, CFBamBoolDefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamBoolDefEditObj::isOptionalFalseStringNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FalseString, CFBamBoolDefEditObj::getOptionalFalseStringValue() ) );
		}
		if( ! CFBamBoolDefEditObj::isOptionalTrueStringNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TrueString, CFBamBoolDefEditObj::getOptionalTrueStringValue() ) );
		}
		if( ! CFBamBoolDefEditObj::isOptionalNullStringNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_NullString, CFBamBoolDefEditObj::getOptionalNullStringValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamBoolDefEditObj::getGenDefName() {
		return( cfbam::CFBamBoolDefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamBoolDefEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamBoolDefEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamBoolDefEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamBoolDefEditObj::getObjQualifiedName() {
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

	std::string CFBamBoolDefEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamBoolDefEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamBoolDefObj* retobj = getSchema()->getBoolDefTableObj()->realizeBoolDef( dynamic_cast<cfbam::ICFBamBoolDefObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamBoolDefEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamBoolDefEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamBoolDefEditObj::create() {
		cfbam::ICFBamBoolDefObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsBoolDef()->getSchema() )->getBoolDefTableObj()->createBoolDef( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamBoolDefEditObj::update() {
		getSchema()->getBoolDefTableObj()->updateBoolDef( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamBoolDefEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getBoolDefTableObj()->deleteBoolDef( this );
		return( NULL );
	}

	cfbam::ICFBamBoolDefTableObj* CFBamBoolDefEditObj::getBoolDefTable() {
		return( orig->getSchema()->getBoolDefTableObj() );
	}

	cfbam::ICFBamBoolDefEditObj* CFBamBoolDefEditObj::getBoolDefEdit() {
		return( (cfbam::ICFBamBoolDefEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamBoolDefEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamBoolDefObj* CFBamBoolDefEditObj::getOrigAsBoolDef() {
		return( dynamic_cast<cfbam::ICFBamBoolDefObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamBoolDefEditObj::getBuff() {
		return( buff );
	}

	void CFBamBoolDefEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamAtomEditObj::setBuff( value );
		}
	}

	bool CFBamBoolDefEditObj::isOptionalInitValueNull() {
		return( getBoolDefBuff()->isOptionalInitValueNull() );
	}

	const bool CFBamBoolDefEditObj::getOptionalInitValueValue() {
		return( getBoolDefBuff()->getOptionalInitValueValue() );
	}

	const bool* CFBamBoolDefEditObj::getOptionalInitValueReference() {
		return( getBoolDefBuff()->getOptionalInitValueReference() );
	}

	void CFBamBoolDefEditObj::setOptionalInitValueNull() {
		if( ! getBoolDefBuff()->isOptionalInitValueNull() ) {
			getBoolDefEditBuff()->setOptionalInitValueNull();
		}
	}

	void CFBamBoolDefEditObj::setOptionalInitValueValue( const bool value ) {
		if( getBoolDefBuff()->isOptionalInitValueNull() ) {
			getBoolDefEditBuff()->setOptionalInitValueValue( value );
		}
		else if( getBoolDefBuff()->getOptionalInitValueValue() != value ) {
			getBoolDefEditBuff()->setOptionalInitValueValue( value );
		}
	}

	bool CFBamBoolDefEditObj::isOptionalFalseStringNull() {
		return( getBoolDefBuff()->isOptionalFalseStringNull() );
	}

	const std::string& CFBamBoolDefEditObj::getOptionalFalseStringValue() {
		return( getBoolDefBuff()->getOptionalFalseStringValue() );
	}

	const std::string* CFBamBoolDefEditObj::getOptionalFalseStringReference() {
		return( getBoolDefBuff()->getOptionalFalseStringReference() );
	}

	void CFBamBoolDefEditObj::setOptionalFalseStringNull() {
		if( ! getBoolDefBuff()->isOptionalFalseStringNull() ) {
			getBoolDefEditBuff()->setOptionalFalseStringNull();
		}
	}

	void CFBamBoolDefEditObj::setOptionalFalseStringValue( const std::string& value ) {
		if( getBoolDefBuff()->isOptionalFalseStringNull() ) {
			getBoolDefEditBuff()->setOptionalFalseStringValue( value );
		}
		else if( getBoolDefBuff()->getOptionalFalseStringValue() != value ) {
			getBoolDefEditBuff()->setOptionalFalseStringValue( value );
		}
	}

	bool CFBamBoolDefEditObj::isOptionalTrueStringNull() {
		return( getBoolDefBuff()->isOptionalTrueStringNull() );
	}

	const std::string& CFBamBoolDefEditObj::getOptionalTrueStringValue() {
		return( getBoolDefBuff()->getOptionalTrueStringValue() );
	}

	const std::string* CFBamBoolDefEditObj::getOptionalTrueStringReference() {
		return( getBoolDefBuff()->getOptionalTrueStringReference() );
	}

	void CFBamBoolDefEditObj::setOptionalTrueStringNull() {
		if( ! getBoolDefBuff()->isOptionalTrueStringNull() ) {
			getBoolDefEditBuff()->setOptionalTrueStringNull();
		}
	}

	void CFBamBoolDefEditObj::setOptionalTrueStringValue( const std::string& value ) {
		if( getBoolDefBuff()->isOptionalTrueStringNull() ) {
			getBoolDefEditBuff()->setOptionalTrueStringValue( value );
		}
		else if( getBoolDefBuff()->getOptionalTrueStringValue() != value ) {
			getBoolDefEditBuff()->setOptionalTrueStringValue( value );
		}
	}

	bool CFBamBoolDefEditObj::isOptionalNullStringNull() {
		return( getBoolDefBuff()->isOptionalNullStringNull() );
	}

	const std::string& CFBamBoolDefEditObj::getOptionalNullStringValue() {
		return( getBoolDefBuff()->getOptionalNullStringValue() );
	}

	const std::string* CFBamBoolDefEditObj::getOptionalNullStringReference() {
		return( getBoolDefBuff()->getOptionalNullStringReference() );
	}

	void CFBamBoolDefEditObj::setOptionalNullStringNull() {
		if( ! getBoolDefBuff()->isOptionalNullStringNull() ) {
			getBoolDefEditBuff()->setOptionalNullStringNull();
		}
	}

	void CFBamBoolDefEditObj::setOptionalNullStringValue( const std::string& value ) {
		if( getBoolDefBuff()->isOptionalNullStringNull() ) {
			getBoolDefEditBuff()->setOptionalNullStringValue( value );
		}
		else if( getBoolDefBuff()->getOptionalNullStringValue() != value ) {
			getBoolDefEditBuff()->setOptionalNullStringValue( value );
		}
	}

	void CFBamBoolDefEditObj::copyBuffToOrig() {
		cfbam::CFBamBoolDefBuff* origBuff = getOrigAsBoolDef()->getBoolDefEditBuff();
		cfbam::CFBamBoolDefBuff* myBuff = getBoolDefBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamBoolDefEditObj::copyOrigToBuff() {
		cfbam::CFBamBoolDefBuff* origBuff = getOrigAsBoolDef()->getBoolDefBuff();
		cfbam::CFBamBoolDefBuff* myBuff = getBoolDefEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
