// Description: C++18 edit object instance implementation for CFBam TableCol.

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
#include <cfbamobj/CFBamTableColObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/CFBamTableColEditObj.hpp>


namespace cfbam {

	const std::string CFBamTableColEditObj::CLASS_NAME( "CFBamTableColEditObj" );

	CFBamTableColEditObj::CFBamTableColEditObj( cfbam::ICFBamTableColObj* argOrig )
	: ICFBamTableColEditObj(),
	  CFBamValueEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamTableColEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamTableColEditObj::~CFBamTableColEditObj() {
	}

	const std::string& CFBamTableColEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTableColEditObj::getClassCode() const {
		return( cfbam::CFBamTableColBuff::CLASS_CODE );
	}

	bool CFBamTableColEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamTableColBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamValueEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamTableColEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableColEditObj" );
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
		static const std::string S_TableId( "TableId" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_DataTenantId( "DataTenantId" );
		static const std::string S_DataId( "DataId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamTableColEditObj::getRequiredTableId() ) );
		if( ! CFBamTableColEditObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamTableColEditObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamTableColEditObj::isOptionalDataTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DataTenantId, CFBamTableColEditObj::getOptionalDataTenantIdValue() ) );
		}
		if( ! CFBamTableColEditObj::isOptionalDataIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DataId, CFBamTableColEditObj::getOptionalDataIdValue() ) );
		}
		if( ! CFBamTableColEditObj::isOptionalXmlElementNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_XmlElementName, CFBamTableColEditObj::getOptionalXmlElementNameValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamTableColEditObj::getGenDefName() {
		return( cfbam::CFBamTableColBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTableColEditObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTableColEditObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTableColEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTableColEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTableColEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTableColEditObj::getObjQualifiedName() {
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

	std::string CFBamTableColEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamTableColEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamTableColObj* retobj = getSchema()->getTableColTableObj()->realizeTableCol( dynamic_cast<cfbam::ICFBamTableColObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamTableColEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamTableColEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamTableColEditObj::create() {
		cfbam::ICFBamTableColObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTableCol()->getSchema() )->getTableColTableObj()->createTableCol( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamTableColEditObj::update() {
		getSchema()->getTableColTableObj()->updateTableCol( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamTableColEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTableColTableObj()->deleteTableCol( this );
		return( NULL );
	}

	cfbam::ICFBamTableColTableObj* CFBamTableColEditObj::getTableColTable() {
		return( orig->getSchema()->getTableColTableObj() );
	}

	cfbam::ICFBamTableColEditObj* CFBamTableColEditObj::getTableColEdit() {
		return( (cfbam::ICFBamTableColEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamTableColEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamTableColObj* CFBamTableColEditObj::getOrigAsTableCol() {
		return( dynamic_cast<cfbam::ICFBamTableColObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamTableColEditObj::getBuff() {
		return( buff );
	}

	void CFBamTableColEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamValueEditObj::setBuff( value );
		}
	}

	const int64_t CFBamTableColEditObj::getRequiredTableId() {
		return( getTableColBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamTableColEditObj::getRequiredTableIdReference() {
		return( getTableColBuff()->getRequiredTableIdReference() );
	}

	bool CFBamTableColEditObj::isOptionalDbNameNull() {
		return( getTableColBuff()->isOptionalDbNameNull() );
	}

	const std::string& CFBamTableColEditObj::getOptionalDbNameValue() {
		return( getTableColBuff()->getOptionalDbNameValue() );
	}

	const std::string* CFBamTableColEditObj::getOptionalDbNameReference() {
		return( getTableColBuff()->getOptionalDbNameReference() );
	}

	void CFBamTableColEditObj::setOptionalDbNameNull() {
		if( ! getTableColBuff()->isOptionalDbNameNull() ) {
			getTableColEditBuff()->setOptionalDbNameNull();
		}
	}

	void CFBamTableColEditObj::setOptionalDbNameValue( const std::string& value ) {
		if( getTableColBuff()->isOptionalDbNameNull() ) {
			getTableColEditBuff()->setOptionalDbNameValue( value );
		}
		else if( getTableColBuff()->getOptionalDbNameValue() != value ) {
			getTableColEditBuff()->setOptionalDbNameValue( value );
		}
	}

	bool CFBamTableColEditObj::isOptionalDataTenantIdNull() {
		return( getTableColBuff()->isOptionalDataTenantIdNull() );
	}

	const int64_t CFBamTableColEditObj::getOptionalDataTenantIdValue() {
		return( getTableColBuff()->getOptionalDataTenantIdValue() );
	}

	const int64_t* CFBamTableColEditObj::getOptionalDataTenantIdReference() {
		return( getTableColBuff()->getOptionalDataTenantIdReference() );
	}

	bool CFBamTableColEditObj::isOptionalDataIdNull() {
		return( getTableColBuff()->isOptionalDataIdNull() );
	}

	const int64_t CFBamTableColEditObj::getOptionalDataIdValue() {
		return( getTableColBuff()->getOptionalDataIdValue() );
	}

	const int64_t* CFBamTableColEditObj::getOptionalDataIdReference() {
		return( getTableColBuff()->getOptionalDataIdReference() );
	}

	bool CFBamTableColEditObj::isOptionalXmlElementNameNull() {
		return( getTableColBuff()->isOptionalXmlElementNameNull() );
	}

	const std::string& CFBamTableColEditObj::getOptionalXmlElementNameValue() {
		return( getTableColBuff()->getOptionalXmlElementNameValue() );
	}

	const std::string* CFBamTableColEditObj::getOptionalXmlElementNameReference() {
		return( getTableColBuff()->getOptionalXmlElementNameReference() );
	}

	void CFBamTableColEditObj::setOptionalXmlElementNameNull() {
		if( ! getTableColBuff()->isOptionalXmlElementNameNull() ) {
			getTableColEditBuff()->setOptionalXmlElementNameNull();
		}
	}

	void CFBamTableColEditObj::setOptionalXmlElementNameValue( const std::string& value ) {
		if( getTableColBuff()->isOptionalXmlElementNameNull() ) {
			getTableColEditBuff()->setOptionalXmlElementNameValue( value );
		}
		else if( getTableColBuff()->getOptionalXmlElementNameValue() != value ) {
			getTableColEditBuff()->setOptionalXmlElementNameValue( value );
		}
	}

	void CFBamTableColEditObj::setRequiredContainerScope( cfbam::ICFBamScopeObj* value ) {
		if( value == NULL ) {
			setRequiredContainerTable( NULL );
		}
		else {
			setRequiredContainerTable( dynamic_cast<cfbam::ICFBamTableObj*>( value ) );
		}
	}

	cfbam::ICFBamTableObj* CFBamTableColEditObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTableCol()->getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getTableColBuff()->getRequiredTableId() );
		}
		return( retobj );
	}

	void CFBamTableColEditObj::setRequiredContainerTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getTableColEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getTableColEditBuff()->setRequiredTableId( value->getRequiredId() );
			}

			CFBamValueEditObj::setRequiredContainerScope( value );		}

	cfbam::ICFBamValueObj* CFBamTableColEditObj::getRequiredParentDataType( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = NULL;
		bool anyMissing = false;

			if( getTableColBuff()->isOptionalDataTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableColBuff()->isOptionalDataIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTableCol()->getSchema() )->getValueTableObj()->readValueByIdIdx( getTableColBuff()->getOptionalDataTenantIdValue(),
					getTableColBuff()->getOptionalDataIdValue() );
		}
		return( retobj );
	}

	void CFBamTableColEditObj::setRequiredParentDataType( cfbam::ICFBamValueObj* value ) {
			
			if( value != NULL ) {
				getTableColEditBuff()->setOptionalDataTenantIdValue( value->getRequiredTenantId() );
				getTableColEditBuff()->setOptionalDataIdValue( value->getRequiredId() );
			}
			else {
				getTableColEditBuff()->setOptionalDataTenantIdNull();
				getTableColEditBuff()->setOptionalDataIdNull();
			}
		}

	void CFBamTableColEditObj::copyBuffToOrig() {
		cfbam::CFBamTableColBuff* origBuff = getOrigAsTableCol()->getTableColEditBuff();
		cfbam::CFBamTableColBuff* myBuff = getTableColBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamTableColEditObj::copyOrigToBuff() {
		cfbam::CFBamTableColBuff* origBuff = getOrigAsTableCol()->getTableColBuff();
		cfbam::CFBamTableColBuff* myBuff = getTableColEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
