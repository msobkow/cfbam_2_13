// Description: C++18 edit object instance implementation for CFBam TextDef.

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
#include <cfbamobj/CFBamTextDefObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamTextDefEditObj.hpp>


namespace cfbam {

	const std::string CFBamTextDefEditObj::CLASS_NAME( "CFBamTextDefEditObj" );

	CFBamTextDefEditObj::CFBamTextDefEditObj( cfbam::ICFBamTextDefObj* argOrig )
	: ICFBamTextDefEditObj(),
	  CFBamAtomEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamTextDefEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamTextDefEditObj::~CFBamTextDefEditObj() {
	}

	const std::string& CFBamTextDefEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTextDefEditObj::getClassCode() const {
		return( cfbam::CFBamTextDefBuff::CLASS_CODE );
	}

	bool CFBamTextDefEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamAtomEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamTextDefEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTextDefEditObj" );
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
		static const std::string S_XmlElementName( "XmlElementName" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_MaxLen, CFBamTextDefEditObj::getRequiredMaxLen() ) );
		if( ! CFBamTextDefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_InitValue, CFBamTextDefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamTextDefEditObj::isOptionalXmlElementNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_XmlElementName, CFBamTextDefEditObj::getOptionalXmlElementNameValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamTextDefEditObj::getGenDefName() {
		return( cfbam::CFBamTextDefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTextDefEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTextDefEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTextDefEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTextDefEditObj::getObjQualifiedName() {
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

	std::string CFBamTextDefEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamTextDefEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamTextDefObj* retobj = getSchema()->getTextDefTableObj()->realizeTextDef( dynamic_cast<cfbam::ICFBamTextDefObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamTextDefEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamTextDefEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamTextDefEditObj::create() {
		cfbam::ICFBamTextDefObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTextDef()->getSchema() )->getTextDefTableObj()->createTextDef( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamTextDefEditObj::update() {
		getSchema()->getTextDefTableObj()->updateTextDef( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamTextDefEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTextDefTableObj()->deleteTextDef( this );
		return( NULL );
	}

	cfbam::ICFBamTextDefTableObj* CFBamTextDefEditObj::getTextDefTable() {
		return( orig->getSchema()->getTextDefTableObj() );
	}

	cfbam::ICFBamTextDefEditObj* CFBamTextDefEditObj::getTextDefEdit() {
		return( (cfbam::ICFBamTextDefEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamTextDefEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamTextDefObj* CFBamTextDefEditObj::getOrigAsTextDef() {
		return( dynamic_cast<cfbam::ICFBamTextDefObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamTextDefEditObj::getBuff() {
		return( buff );
	}

	void CFBamTextDefEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamAtomEditObj::setBuff( value );
		}
	}

	const int32_t CFBamTextDefEditObj::getRequiredMaxLen() {
		return( getTextDefBuff()->getRequiredMaxLen() );
	}

	const int32_t* CFBamTextDefEditObj::getRequiredMaxLenReference() {
		return( getTextDefBuff()->getRequiredMaxLenReference() );
	}

	void CFBamTextDefEditObj::setRequiredMaxLen( const int32_t value ) {
		if( getTextDefBuff()->getRequiredMaxLen() != value ) {
			getTextDefEditBuff()->setRequiredMaxLen( value );
		}
	}

	bool CFBamTextDefEditObj::isOptionalInitValueNull() {
		return( getTextDefBuff()->isOptionalInitValueNull() );
	}

	const std::string& CFBamTextDefEditObj::getOptionalInitValueValue() {
		return( getTextDefBuff()->getOptionalInitValueValue() );
	}

	const std::string* CFBamTextDefEditObj::getOptionalInitValueReference() {
		return( getTextDefBuff()->getOptionalInitValueReference() );
	}

	void CFBamTextDefEditObj::setOptionalInitValueNull() {
		if( ! getTextDefBuff()->isOptionalInitValueNull() ) {
			getTextDefEditBuff()->setOptionalInitValueNull();
		}
	}

	void CFBamTextDefEditObj::setOptionalInitValueValue( const std::string& value ) {
		if( getTextDefBuff()->isOptionalInitValueNull() ) {
			getTextDefEditBuff()->setOptionalInitValueValue( value );
		}
		else if( getTextDefBuff()->getOptionalInitValueValue() != value ) {
			getTextDefEditBuff()->setOptionalInitValueValue( value );
		}
	}

	bool CFBamTextDefEditObj::isOptionalXmlElementNameNull() {
		return( getTextDefBuff()->isOptionalXmlElementNameNull() );
	}

	const std::string& CFBamTextDefEditObj::getOptionalXmlElementNameValue() {
		return( getTextDefBuff()->getOptionalXmlElementNameValue() );
	}

	const std::string* CFBamTextDefEditObj::getOptionalXmlElementNameReference() {
		return( getTextDefBuff()->getOptionalXmlElementNameReference() );
	}

	void CFBamTextDefEditObj::setOptionalXmlElementNameNull() {
		if( ! getTextDefBuff()->isOptionalXmlElementNameNull() ) {
			getTextDefEditBuff()->setOptionalXmlElementNameNull();
		}
	}

	void CFBamTextDefEditObj::setOptionalXmlElementNameValue( const std::string& value ) {
		if( getTextDefBuff()->isOptionalXmlElementNameNull() ) {
			getTextDefEditBuff()->setOptionalXmlElementNameValue( value );
		}
		else if( getTextDefBuff()->getOptionalXmlElementNameValue() != value ) {
			getTextDefEditBuff()->setOptionalXmlElementNameValue( value );
		}
	}

	void CFBamTextDefEditObj::copyBuffToOrig() {
		cfbam::CFBamTextDefBuff* origBuff = getOrigAsTextDef()->getTextDefEditBuff();
		cfbam::CFBamTextDefBuff* myBuff = getTextDefBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamTextDefEditObj::copyOrigToBuff() {
		cfbam::CFBamTextDefBuff* origBuff = getOrigAsTextDef()->getTextDefBuff();
		cfbam::CFBamTextDefBuff* myBuff = getTextDefEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
