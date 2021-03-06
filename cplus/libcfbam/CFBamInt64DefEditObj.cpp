// Description: C++18 edit object instance implementation for CFBam Int64Def.

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
#include <cfbamobj/CFBamInt64DefObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamInt64DefEditObj.hpp>


namespace cfbam {

	const std::string CFBamInt64DefEditObj::CLASS_NAME( "CFBamInt64DefEditObj" );

	CFBamInt64DefEditObj::CFBamInt64DefEditObj( cfbam::ICFBamInt64DefObj* argOrig )
	: ICFBamInt64DefEditObj(),
	  CFBamAtomEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamInt64DefEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamInt64DefEditObj::~CFBamInt64DefEditObj() {
	}

	const std::string& CFBamInt64DefEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamInt64DefEditObj::getClassCode() const {
		return( cfbam::CFBamInt64DefBuff::CLASS_CODE );
	}

	bool CFBamInt64DefEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamAtomEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamInt64DefEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamInt64DefEditObj" );
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
		if( ! CFBamInt64DefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_InitValue, CFBamInt64DefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamInt64DefEditObj::isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_MinValue, CFBamInt64DefEditObj::getOptionalMinValueValue() ) );
		}
		if( ! CFBamInt64DefEditObj::isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_MaxValue, CFBamInt64DefEditObj::getOptionalMaxValueValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamInt64DefEditObj::getGenDefName() {
		return( cfbam::CFBamInt64DefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamInt64DefEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamInt64DefEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamInt64DefEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamInt64DefEditObj::getObjQualifiedName() {
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

	std::string CFBamInt64DefEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamInt64DefEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamInt64DefObj* retobj = getSchema()->getInt64DefTableObj()->realizeInt64Def( dynamic_cast<cfbam::ICFBamInt64DefObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamInt64DefEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamInt64DefEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamInt64DefEditObj::create() {
		cfbam::ICFBamInt64DefObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsInt64Def()->getSchema() )->getInt64DefTableObj()->createInt64Def( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamInt64DefEditObj::update() {
		getSchema()->getInt64DefTableObj()->updateInt64Def( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamInt64DefEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getInt64DefTableObj()->deleteInt64Def( this );
		return( NULL );
	}

	cfbam::ICFBamInt64DefTableObj* CFBamInt64DefEditObj::getInt64DefTable() {
		return( orig->getSchema()->getInt64DefTableObj() );
	}

	cfbam::ICFBamInt64DefEditObj* CFBamInt64DefEditObj::getInt64DefEdit() {
		return( (cfbam::ICFBamInt64DefEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamInt64DefEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamInt64DefObj* CFBamInt64DefEditObj::getOrigAsInt64Def() {
		return( dynamic_cast<cfbam::ICFBamInt64DefObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamInt64DefEditObj::getBuff() {
		return( buff );
	}

	void CFBamInt64DefEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamAtomEditObj::setBuff( value );
		}
	}

	bool CFBamInt64DefEditObj::isOptionalInitValueNull() {
		return( getInt64DefBuff()->isOptionalInitValueNull() );
	}

	const int64_t CFBamInt64DefEditObj::getOptionalInitValueValue() {
		return( getInt64DefBuff()->getOptionalInitValueValue() );
	}

	const int64_t* CFBamInt64DefEditObj::getOptionalInitValueReference() {
		return( getInt64DefBuff()->getOptionalInitValueReference() );
	}

	void CFBamInt64DefEditObj::setOptionalInitValueNull() {
		if( ! getInt64DefBuff()->isOptionalInitValueNull() ) {
			getInt64DefEditBuff()->setOptionalInitValueNull();
		}
	}

	void CFBamInt64DefEditObj::setOptionalInitValueValue( const int64_t value ) {
		if( getInt64DefBuff()->isOptionalInitValueNull() ) {
			getInt64DefEditBuff()->setOptionalInitValueValue( value );
		}
		else if( getInt64DefBuff()->getOptionalInitValueValue() != value ) {
			getInt64DefEditBuff()->setOptionalInitValueValue( value );
		}
	}

	bool CFBamInt64DefEditObj::isOptionalMinValueNull() {
		return( getInt64DefBuff()->isOptionalMinValueNull() );
	}

	const int64_t CFBamInt64DefEditObj::getOptionalMinValueValue() {
		return( getInt64DefBuff()->getOptionalMinValueValue() );
	}

	const int64_t* CFBamInt64DefEditObj::getOptionalMinValueReference() {
		return( getInt64DefBuff()->getOptionalMinValueReference() );
	}

	void CFBamInt64DefEditObj::setOptionalMinValueNull() {
		if( ! getInt64DefBuff()->isOptionalMinValueNull() ) {
			getInt64DefEditBuff()->setOptionalMinValueNull();
		}
	}

	void CFBamInt64DefEditObj::setOptionalMinValueValue( const int64_t value ) {
		if( getInt64DefBuff()->isOptionalMinValueNull() ) {
			getInt64DefEditBuff()->setOptionalMinValueValue( value );
		}
		else if( getInt64DefBuff()->getOptionalMinValueValue() != value ) {
			getInt64DefEditBuff()->setOptionalMinValueValue( value );
		}
	}

	bool CFBamInt64DefEditObj::isOptionalMaxValueNull() {
		return( getInt64DefBuff()->isOptionalMaxValueNull() );
	}

	const int64_t CFBamInt64DefEditObj::getOptionalMaxValueValue() {
		return( getInt64DefBuff()->getOptionalMaxValueValue() );
	}

	const int64_t* CFBamInt64DefEditObj::getOptionalMaxValueReference() {
		return( getInt64DefBuff()->getOptionalMaxValueReference() );
	}

	void CFBamInt64DefEditObj::setOptionalMaxValueNull() {
		if( ! getInt64DefBuff()->isOptionalMaxValueNull() ) {
			getInt64DefEditBuff()->setOptionalMaxValueNull();
		}
	}

	void CFBamInt64DefEditObj::setOptionalMaxValueValue( const int64_t value ) {
		if( getInt64DefBuff()->isOptionalMaxValueNull() ) {
			getInt64DefEditBuff()->setOptionalMaxValueValue( value );
		}
		else if( getInt64DefBuff()->getOptionalMaxValueValue() != value ) {
			getInt64DefEditBuff()->setOptionalMaxValueValue( value );
		}
	}

	void CFBamInt64DefEditObj::copyBuffToOrig() {
		cfbam::CFBamInt64DefBuff* origBuff = getOrigAsInt64Def()->getInt64DefEditBuff();
		cfbam::CFBamInt64DefBuff* myBuff = getInt64DefBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamInt64DefEditObj::copyOrigToBuff() {
		cfbam::CFBamInt64DefBuff* origBuff = getOrigAsInt64Def()->getInt64DefBuff();
		cfbam::CFBamInt64DefBuff* myBuff = getInt64DefEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
