// Description: C++18 base object instance implementation for CFBam Id32Gen.

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
#include <cfbamobj/ICFBamInt32DefObj.hpp>
#include <cfbamobj/ICFBamInt32TypeObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamInt32DefObj.hpp>
#include <cfbamobj/CFBamInt32TypeObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamId32GenObj.hpp>

namespace cfbam {

	const std::string CFBamId32GenObj::CLASS_NAME( "CFBamId32GenObj" );
	const classcode_t CFBamId32GenObj::CLASS_CODE = 0xa85aL;

	bool CFBamId32GenObj::isOptionalDispenserTenantIdNull() {
		return( getId32GenBuff()->isOptionalDispenserTenantIdNull() );
	}

	const int64_t CFBamId32GenObj::getOptionalDispenserTenantIdValue() {
		return( getId32GenBuff()->getOptionalDispenserTenantIdValue() );
	}

	const int64_t* CFBamId32GenObj::getOptionalDispenserTenantIdReference() {
		return( getId32GenBuff()->getOptionalDispenserTenantIdReference() );
	}

	bool CFBamId32GenObj::isOptionalDispenserIdNull() {
		return( getId32GenBuff()->isOptionalDispenserIdNull() );
	}

	const int64_t CFBamId32GenObj::getOptionalDispenserIdValue() {
		return( getId32GenBuff()->getOptionalDispenserIdValue() );
	}

	const int64_t* CFBamId32GenObj::getOptionalDispenserIdReference() {
		return( getId32GenBuff()->getOptionalDispenserIdReference() );
	}

	const int16_t CFBamId32GenObj::getRequiredSlice() {
		return( getId32GenBuff()->getRequiredSlice() );
	}

	const int16_t* CFBamId32GenObj::getRequiredSliceReference() {
		return( getId32GenBuff()->getRequiredSliceReference() );
	}

	const int32_t CFBamId32GenObj::getRequiredBlockSize() {
		return( getId32GenBuff()->getRequiredBlockSize() );
	}

	const int32_t* CFBamId32GenObj::getRequiredBlockSizeReference() {
		return( getId32GenBuff()->getRequiredBlockSizeReference() );
	}


	cfbam::ICFBamTableObj* CFBamId32GenObj::getOptionalLookupDispenser( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
			if( getId32GenBuff()->isOptionalDispenserTenantIdNull() ) {
				anyMissing = true;
			}
			if( getId32GenBuff()->isOptionalDispenserIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getId32GenBuff()->getOptionalDispenserTenantIdValue(),
					getId32GenBuff()->getOptionalDispenserIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamId32GenObj::CFBamId32GenObj()
	: ICFBamId32GenObj(),
	  CFBamInt32TypeObj()
	{
	}

	CFBamId32GenObj::CFBamId32GenObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamId32GenObj(),
	  CFBamInt32TypeObj( argSchema )
	{
	}

	CFBamId32GenObj::~CFBamId32GenObj() {
	}

	cfbam::CFBamValueBuff* CFBamId32GenObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamId32GenBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableId32Gen()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamId32GenObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamId32GenObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamId32GenObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamId32GenObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamInt32TypeObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamId32GenObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamId32GenObj" );
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
		static const std::string S_DispenserTenantId( "DispenserTenantId" );
		static const std::string S_DispenserId( "DispenserId" );
		static const std::string S_Slice( "Slice" );
		static const std::string S_BlockSize( "BlockSize" );
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
		if( ! CFBamInt32DefObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_InitValue, CFBamInt32DefObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamInt32DefObj::isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_MinValue, CFBamInt32DefObj::getOptionalMinValueValue() ) );
		}
		if( ! CFBamInt32DefObj::isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_MaxValue, CFBamInt32DefObj::getOptionalMaxValueValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, CFBamInt32TypeObj::getRequiredSchemaDefId() ) );
		if( ! CFBamId32GenObj::isOptionalDispenserTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserTenantId, CFBamId32GenObj::getOptionalDispenserTenantIdValue() ) );
		}
		if( ! CFBamId32GenObj::isOptionalDispenserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserId, CFBamId32GenObj::getOptionalDispenserIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Slice, CFBamId32GenObj::getRequiredSlice() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_BlockSize, CFBamId32GenObj::getRequiredBlockSize() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamId32GenObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamId32GenObj::getGenDefName() {
		return( cfbam::CFBamId32GenBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamId32GenObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamId32GenObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamId32GenObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamId32GenObj::getObjQualifiedName() {
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

	std::string CFBamId32GenObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamId32GenObj::realize() {
		cfbam::ICFBamId32GenObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getId32GenTableObj()->realizeId32Gen(
			(cfbam::ICFBamId32GenObj*)this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamId32GenObj::read( bool forceRead ) {
		cfbam::ICFBamId32GenObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getId32GenTableObj()->readId32GenByIdIdx( getId32GenBuff()->getRequiredTenantId(),
		getId32GenBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamId32GenObj::moveUp() {
		cfbam::ICFBamId32GenObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getId32GenTableObj()->moveUpId32Gen( this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueObj* CFBamId32GenObj::moveDown() {
		cfbam::ICFBamId32GenObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getId32GenTableObj()->moveDownId32Gen( this );
		return( dynamic_cast<cfbam::ICFBamValueObj*>( retobj ) );
	}

	cfbam::ICFBamValueEditObj* CFBamId32GenObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamId32GenObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getId32GenTableObj()->lockId32Gen( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getId32GenTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamValueEditObj*>( edit ) );
	}

	cfbam::ICFBamId32GenEditObj* CFBamId32GenObj::getId32GenEdit() {
		return( dynamic_cast<cfbam::ICFBamId32GenEditObj*>( edit ) );
	}

}
