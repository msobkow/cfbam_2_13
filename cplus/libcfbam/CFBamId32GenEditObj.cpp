// Description: C++18 edit object instance implementation for CFBam Id32Gen.

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
#include <cfbamobj/CFBamInt32DefObj.hpp>
#include <cfbamobj/CFBamInt32TypeObj.hpp>
#include <cfbamobj/CFBamId32GenObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/ICFBamInt32DefObj.hpp>
#include <cfbamobj/ICFBamInt32DefEditObj.hpp>
#include <cfbamobj/CFBamInt32DefObj.hpp>
#include <cfbamobj/CFBamInt32DefEditObj.hpp>
#include <cfbamobj/ICFBamInt32TypeObj.hpp>
#include <cfbamobj/ICFBamInt32TypeEditObj.hpp>
#include <cfbamobj/CFBamInt32TypeObj.hpp>
#include <cfbamobj/CFBamInt32TypeEditObj.hpp>
#include <cfbamobj/CFBamId32GenEditObj.hpp>


namespace cfbam {

	const std::string CFBamId32GenEditObj::CLASS_NAME( "CFBamId32GenEditObj" );

	CFBamId32GenEditObj::CFBamId32GenEditObj( cfbam::ICFBamId32GenObj* argOrig )
	: ICFBamId32GenEditObj(),
	  CFBamInt32TypeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamId32GenEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamId32GenEditObj::~CFBamId32GenEditObj() {
	}

	const std::string& CFBamId32GenEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamId32GenEditObj::getClassCode() const {
		return( cfbam::CFBamId32GenBuff::CLASS_CODE );
	}

	bool CFBamId32GenEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamInt32TypeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamId32GenEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamId32GenEditObj" );
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
		if( ! CFBamInt32DefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_InitValue, CFBamInt32DefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamInt32DefEditObj::isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_MinValue, CFBamInt32DefEditObj::getOptionalMinValueValue() ) );
		}
		if( ! CFBamInt32DefEditObj::isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_MaxValue, CFBamInt32DefEditObj::getOptionalMaxValueValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, CFBamInt32TypeEditObj::getRequiredSchemaDefId() ) );
		if( ! CFBamId32GenEditObj::isOptionalDispenserTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserTenantId, CFBamId32GenEditObj::getOptionalDispenserTenantIdValue() ) );
		}
		if( ! CFBamId32GenEditObj::isOptionalDispenserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserId, CFBamId32GenEditObj::getOptionalDispenserIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Slice, CFBamId32GenEditObj::getRequiredSlice() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_BlockSize, CFBamId32GenEditObj::getRequiredBlockSize() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamId32GenEditObj::getGenDefName() {
		return( cfbam::CFBamId32GenBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamId32GenEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamId32GenEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamId32GenEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamId32GenEditObj::getObjQualifiedName() {
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

	std::string CFBamId32GenEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamId32GenEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamId32GenObj* retobj = getSchema()->getId32GenTableObj()->realizeId32Gen( dynamic_cast<cfbam::ICFBamId32GenObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamId32GenEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamId32GenEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamId32GenEditObj::create() {
		cfbam::ICFBamId32GenObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsId32Gen()->getSchema() )->getId32GenTableObj()->createId32Gen( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamId32GenEditObj::update() {
		getSchema()->getId32GenTableObj()->updateId32Gen( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamId32GenEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getId32GenTableObj()->deleteId32Gen( this );
		return( NULL );
	}

	cfbam::ICFBamId32GenTableObj* CFBamId32GenEditObj::getId32GenTable() {
		return( orig->getSchema()->getId32GenTableObj() );
	}

	cfbam::ICFBamId32GenEditObj* CFBamId32GenEditObj::getId32GenEdit() {
		return( (cfbam::ICFBamId32GenEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamId32GenEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamId32GenObj* CFBamId32GenEditObj::getOrigAsId32Gen() {
		return( dynamic_cast<cfbam::ICFBamId32GenObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamId32GenEditObj::getBuff() {
		return( buff );
	}

	void CFBamId32GenEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamInt32TypeEditObj::setBuff( value );
		}
	}

	bool CFBamId32GenEditObj::isOptionalDispenserTenantIdNull() {
		return( getId32GenBuff()->isOptionalDispenserTenantIdNull() );
	}

	const int64_t CFBamId32GenEditObj::getOptionalDispenserTenantIdValue() {
		return( getId32GenBuff()->getOptionalDispenserTenantIdValue() );
	}

	const int64_t* CFBamId32GenEditObj::getOptionalDispenserTenantIdReference() {
		return( getId32GenBuff()->getOptionalDispenserTenantIdReference() );
	}

	bool CFBamId32GenEditObj::isOptionalDispenserIdNull() {
		return( getId32GenBuff()->isOptionalDispenserIdNull() );
	}

	const int64_t CFBamId32GenEditObj::getOptionalDispenserIdValue() {
		return( getId32GenBuff()->getOptionalDispenserIdValue() );
	}

	const int64_t* CFBamId32GenEditObj::getOptionalDispenserIdReference() {
		return( getId32GenBuff()->getOptionalDispenserIdReference() );
	}

	const int16_t CFBamId32GenEditObj::getRequiredSlice() {
		return( getId32GenBuff()->getRequiredSlice() );
	}

	const int16_t* CFBamId32GenEditObj::getRequiredSliceReference() {
		return( getId32GenBuff()->getRequiredSliceReference() );
	}

	void CFBamId32GenEditObj::setRequiredSlice( const int16_t value ) {
		if( getId32GenBuff()->getRequiredSlice() != value ) {
			getId32GenEditBuff()->setRequiredSlice( value );
		}
	}

	const int32_t CFBamId32GenEditObj::getRequiredBlockSize() {
		return( getId32GenBuff()->getRequiredBlockSize() );
	}

	const int32_t* CFBamId32GenEditObj::getRequiredBlockSizeReference() {
		return( getId32GenBuff()->getRequiredBlockSizeReference() );
	}

	void CFBamId32GenEditObj::setRequiredBlockSize( const int32_t value ) {
		if( getId32GenBuff()->getRequiredBlockSize() != value ) {
			getId32GenEditBuff()->setRequiredBlockSize( value );
		}
	}

	cfbam::ICFBamTableObj* CFBamId32GenEditObj::getOptionalLookupDispenser( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;

			if( getId32GenBuff()->isOptionalDispenserTenantIdNull() ) {
				anyMissing = true;
			}
			if( getId32GenBuff()->isOptionalDispenserIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsId32Gen()->getSchema() )->getTableTableObj()->readTableByIdIdx( getId32GenBuff()->getOptionalDispenserTenantIdValue(),
					getId32GenBuff()->getOptionalDispenserIdValue() );
		}
		return( retobj );
	}

	void CFBamId32GenEditObj::setOptionalLookupDispenser( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getId32GenEditBuff()->setOptionalDispenserTenantIdValue( value->getRequiredTenantId() );
				getId32GenEditBuff()->setOptionalDispenserIdValue( value->getRequiredId() );
			}
			else {
				getId32GenEditBuff()->setOptionalDispenserTenantIdNull();
				getId32GenEditBuff()->setOptionalDispenserIdNull();
			}
		}

	void CFBamId32GenEditObj::copyBuffToOrig() {
		cfbam::CFBamId32GenBuff* origBuff = getOrigAsId32Gen()->getId32GenEditBuff();
		cfbam::CFBamId32GenBuff* myBuff = getId32GenBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamId32GenEditObj::copyOrigToBuff() {
		cfbam::CFBamId32GenBuff* origBuff = getOrigAsId32Gen()->getId32GenBuff();
		cfbam::CFBamId32GenBuff* myBuff = getId32GenEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
