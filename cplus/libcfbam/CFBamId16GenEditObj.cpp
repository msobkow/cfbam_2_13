// Description: C++18 edit object instance implementation for CFBam Id16Gen.

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
#include <cfbamobj/CFBamInt16TypeObj.hpp>
#include <cfbamobj/CFBamId16GenObj.hpp>
#include <cfbamobj/ICFBamValueObj.hpp>
#include <cfbamobj/ICFBamValueEditObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/ICFBamAtomObj.hpp>
#include <cfbamobj/ICFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/ICFBamInt16DefObj.hpp>
#include <cfbamobj/ICFBamInt16DefEditObj.hpp>
#include <cfbamobj/CFBamInt16DefObj.hpp>
#include <cfbamobj/CFBamInt16DefEditObj.hpp>
#include <cfbamobj/ICFBamInt16TypeObj.hpp>
#include <cfbamobj/ICFBamInt16TypeEditObj.hpp>
#include <cfbamobj/CFBamInt16TypeObj.hpp>
#include <cfbamobj/CFBamInt16TypeEditObj.hpp>
#include <cfbamobj/CFBamId16GenEditObj.hpp>


namespace cfbam {

	const std::string CFBamId16GenEditObj::CLASS_NAME( "CFBamId16GenEditObj" );

	CFBamId16GenEditObj::CFBamId16GenEditObj( cfbam::ICFBamId16GenObj* argOrig )
	: ICFBamId16GenEditObj(),
	  CFBamInt16TypeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamId16GenEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamId16GenEditObj::~CFBamId16GenEditObj() {
	}

	const std::string& CFBamId16GenEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamId16GenEditObj::getClassCode() const {
		return( cfbam::CFBamId16GenBuff::CLASS_CODE );
	}

	bool CFBamId16GenEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamInt16TypeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamId16GenEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamId16GenEditObj" );
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
		if( ! CFBamInt16DefEditObj::isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_InitValue, CFBamInt16DefEditObj::getOptionalInitValueValue() ) );
		}
		if( ! CFBamInt16DefEditObj::isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_MinValue, CFBamInt16DefEditObj::getOptionalMinValueValue() ) );
		}
		if( ! CFBamInt16DefEditObj::isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_MaxValue, CFBamInt16DefEditObj::getOptionalMaxValueValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, CFBamInt16TypeEditObj::getRequiredSchemaDefId() ) );
		if( ! CFBamId16GenEditObj::isOptionalDispenserTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserTenantId, CFBamId16GenEditObj::getOptionalDispenserTenantIdValue() ) );
		}
		if( ! CFBamId16GenEditObj::isOptionalDispenserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserId, CFBamId16GenEditObj::getOptionalDispenserIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Slice, CFBamId16GenEditObj::getRequiredSlice() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_BlockSize, CFBamId16GenEditObj::getRequiredBlockSize() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamId16GenEditObj::getGenDefName() {
		return( cfbam::CFBamId16GenBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamId16GenEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamId16GenEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamId16GenEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamId16GenEditObj::getObjQualifiedName() {
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

	std::string CFBamId16GenEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamId16GenEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamId16GenObj* retobj = getSchema()->getId16GenTableObj()->realizeId16Gen( dynamic_cast<cfbam::ICFBamId16GenObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamId16GenEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamId16GenEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamId16GenEditObj::create() {
		cfbam::ICFBamId16GenObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsId16Gen()->getSchema() )->getId16GenTableObj()->createId16Gen( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamId16GenEditObj::update() {
		getSchema()->getId16GenTableObj()->updateId16Gen( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamId16GenEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getId16GenTableObj()->deleteId16Gen( this );
		return( NULL );
	}

	cfbam::ICFBamId16GenTableObj* CFBamId16GenEditObj::getId16GenTable() {
		return( orig->getSchema()->getId16GenTableObj() );
	}

	cfbam::ICFBamId16GenEditObj* CFBamId16GenEditObj::getId16GenEdit() {
		return( (cfbam::ICFBamId16GenEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamId16GenEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamId16GenObj* CFBamId16GenEditObj::getOrigAsId16Gen() {
		return( dynamic_cast<cfbam::ICFBamId16GenObj*>( orig ) );
	}

	cfbam::CFBamValueBuff* CFBamId16GenEditObj::getBuff() {
		return( buff );
	}

	void CFBamId16GenEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			CFBamInt16TypeEditObj::setBuff( value );
		}
	}

	bool CFBamId16GenEditObj::isOptionalDispenserTenantIdNull() {
		return( getId16GenBuff()->isOptionalDispenserTenantIdNull() );
	}

	const int64_t CFBamId16GenEditObj::getOptionalDispenserTenantIdValue() {
		return( getId16GenBuff()->getOptionalDispenserTenantIdValue() );
	}

	const int64_t* CFBamId16GenEditObj::getOptionalDispenserTenantIdReference() {
		return( getId16GenBuff()->getOptionalDispenserTenantIdReference() );
	}

	bool CFBamId16GenEditObj::isOptionalDispenserIdNull() {
		return( getId16GenBuff()->isOptionalDispenserIdNull() );
	}

	const int64_t CFBamId16GenEditObj::getOptionalDispenserIdValue() {
		return( getId16GenBuff()->getOptionalDispenserIdValue() );
	}

	const int64_t* CFBamId16GenEditObj::getOptionalDispenserIdReference() {
		return( getId16GenBuff()->getOptionalDispenserIdReference() );
	}

	const int16_t CFBamId16GenEditObj::getRequiredSlice() {
		return( getId16GenBuff()->getRequiredSlice() );
	}

	const int16_t* CFBamId16GenEditObj::getRequiredSliceReference() {
		return( getId16GenBuff()->getRequiredSliceReference() );
	}

	void CFBamId16GenEditObj::setRequiredSlice( const int16_t value ) {
		if( getId16GenBuff()->getRequiredSlice() != value ) {
			getId16GenEditBuff()->setRequiredSlice( value );
		}
	}

	const int16_t CFBamId16GenEditObj::getRequiredBlockSize() {
		return( getId16GenBuff()->getRequiredBlockSize() );
	}

	const int16_t* CFBamId16GenEditObj::getRequiredBlockSizeReference() {
		return( getId16GenBuff()->getRequiredBlockSizeReference() );
	}

	void CFBamId16GenEditObj::setRequiredBlockSize( const int16_t value ) {
		if( getId16GenBuff()->getRequiredBlockSize() != value ) {
			getId16GenEditBuff()->setRequiredBlockSize( value );
		}
	}

	cfbam::ICFBamTableObj* CFBamId16GenEditObj::getOptionalLookupDispenser( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;

			if( getId16GenBuff()->isOptionalDispenserTenantIdNull() ) {
				anyMissing = true;
			}
			if( getId16GenBuff()->isOptionalDispenserIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsId16Gen()->getSchema() )->getTableTableObj()->readTableByIdIdx( getId16GenBuff()->getOptionalDispenserTenantIdValue(),
					getId16GenBuff()->getOptionalDispenserIdValue() );
		}
		return( retobj );
	}

	void CFBamId16GenEditObj::setOptionalLookupDispenser( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getId16GenEditBuff()->setOptionalDispenserTenantIdValue( value->getRequiredTenantId() );
				getId16GenEditBuff()->setOptionalDispenserIdValue( value->getRequiredId() );
			}
			else {
				getId16GenEditBuff()->setOptionalDispenserTenantIdNull();
				getId16GenEditBuff()->setOptionalDispenserIdNull();
			}
		}

	void CFBamId16GenEditObj::copyBuffToOrig() {
		cfbam::CFBamId16GenBuff* origBuff = getOrigAsId16Gen()->getId16GenEditBuff();
		cfbam::CFBamId16GenBuff* myBuff = getId16GenBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamId16GenEditObj::copyOrigToBuff() {
		cfbam::CFBamId16GenBuff* origBuff = getOrigAsId16Gen()->getId16GenBuff();
		cfbam::CFBamId16GenBuff* myBuff = getId16GenEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
