// Description: C++18 base object instance implementation for CFBam TZTimeCol.

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
#include <cfbamobj/ICFBamTZTimeDefObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamTZTimeDefObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamTZTimeColObj.hpp>

namespace cfbam {

	const std::string CFBamTZTimeColObj::CLASS_NAME( "CFBamTZTimeColObj" );
	const classcode_t CFBamTZTimeColObj::CLASS_CODE = 0xa864L;

	const int64_t CFBamTZTimeColObj::getRequiredTableId() {
		return( getTZTimeColBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamTZTimeColObj::getRequiredTableIdReference() {
		return( getTZTimeColBuff()->getRequiredTableIdReference() );
	}


	cfbam::ICFBamTableObj* CFBamTZTimeColObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getTZTimeColBuff()->getRequiredTableId(), forceRead );
		}
		return( retobj );
	}

	CFBamTZTimeColObj::CFBamTZTimeColObj()
	: ICFBamTZTimeColObj(),
	  CFBamTZTimeDefObj()
	{
	}

	CFBamTZTimeColObj::CFBamTZTimeColObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamTZTimeColObj(),
	  CFBamTZTimeDefObj( argSchema )
	{
	}

	CFBamTZTimeColObj::~CFBamTZTimeColObj() {
	}

	cfbam::CFBamValueBuff* CFBamTZTimeColObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamTZTimeColBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTZTimeCol()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamTZTimeColObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamTZTimeColObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTZTimeColObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamTZTimeColObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamTZTimeDefObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamTZTimeColObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTZTimeColObj" );
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
		static const std::string S_Dummy( "Dummy" );
		static const std::string S_TableId( "TableId" );
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
		if( ! CFBamTZTimeDefObj::isOptionalDummyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Dummy, CFBamTZTimeDefObj::getOptionalDummyValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamTZTimeColObj::getRequiredTableId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamTZTimeColObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamTZTimeColObj::getGenDefName() {
		return( cfbam::CFBamTZTimeColBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTZTimeColObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTZTimeColObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTZTimeColObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTZTimeColObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTZTimeColObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTZTimeColObj::getObjQualifiedName() {
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

	std::string CFBamTZTimeColObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamTZTimeColObj::realize() {
		cfbam::ICFBamTZTimeColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTZTimeColTableObj()->realizeTZTimeCol(
			(cfbam::ICFBamTZTimeColObj*)this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamTZTimeColObj::read( bool forceRead ) {
		cfbam::ICFBamTZTimeColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTZTimeColTableObj()->readTZTimeColByIdIdx( getTZTimeColBuff()->getRequiredTenantId(),
		getTZTimeColBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamTZTimeColObj::moveUp() {
		cfbam::ICFBamTZTimeColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTZTimeColTableObj()->moveUpTZTimeCol( this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamTZTimeColObj::moveDown() {
		cfbam::ICFBamTZTimeColObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTZTimeColTableObj()->moveDownTZTimeCol( this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueEditObj* CFBamTZTimeColObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamTZTimeColObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTZTimeColTableObj()->lockTZTimeCol( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTZTimeColTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamValueEditObj*>( edit ) );
	}

	cfbam::ICFBamTZTimeColEditObj* CFBamTZTimeColObj::getTZTimeColEdit() {
		return( dynamic_cast<cfbam::ICFBamTZTimeColEditObj*>( edit ) );
	}

}
