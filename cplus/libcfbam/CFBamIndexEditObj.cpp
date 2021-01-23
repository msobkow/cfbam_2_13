// Description: C++18 edit object instance implementation for CFBam Index.

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
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamIndexObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamIndexEditObj.hpp>


namespace cfbam {

	const std::string CFBamIndexEditObj::CLASS_NAME( "CFBamIndexEditObj" );

	CFBamIndexEditObj::CFBamIndexEditObj( cfbam::ICFBamIndexObj* argOrig )
	: ICFBamIndexEditObj(),
	  CFBamScopeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamIndexEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamIndexEditObj::~CFBamIndexEditObj() {
	}

	const std::string& CFBamIndexEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamIndexEditObj::getClassCode() const {
		return( cfbam::CFBamIndexBuff::CLASS_CODE );
	}

	bool CFBamIndexEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamIndexEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamIndexEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_IsUnique( "IsUnique" );
		static const std::string S_IsDbMapped( "IsDbMapped" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamIndexEditObj::getRequiredTableId() ) );
		if( ! CFBamIndexEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamIndexEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamIndexEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamIndexEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamIndexEditObj::getRequiredName() ) );
		if( ! CFBamIndexEditObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamIndexEditObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamIndexEditObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamIndexEditObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamIndexEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamIndexEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamIndexEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamIndexEditObj::getOptionalDescriptionValue() ) );
		}
		if( ! CFBamIndexEditObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamIndexEditObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamIndexEditObj::isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, CFBamIndexEditObj::getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsUnique, CFBamIndexEditObj::getRequiredIsUnique() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsDbMapped, CFBamIndexEditObj::getRequiredIsDbMapped() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamIndexEditObj::getGenDefName() {
		return( cfbam::CFBamIndexBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamIndexEditObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamIndexEditObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamIndexEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamIndexEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamIndexEditObj::getNamedObject( const std::string& objName ) {
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
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->readIndexColByLookupUNameIdx( getRequiredTenantId(),
			getRequiredId(),
				nextName,
				false );
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

	std::string CFBamIndexEditObj::getObjQualifiedName() {
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

	std::string CFBamIndexEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamIndexEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamIndexObj* retobj = getSchema()->getIndexTableObj()->realizeIndex( dynamic_cast<cfbam::ICFBamIndexObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamIndexEditObj::create() {
		cfbam::ICFBamIndexObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndex()->getSchema() )->getIndexTableObj()->createIndex( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamIndexEditObj::update() {
		getSchema()->getIndexTableObj()->updateIndex( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamIndexEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getIndexTableObj()->deleteIndex( this );
		return( NULL );
	}

	cfbam::ICFBamIndexTableObj* CFBamIndexEditObj::getIndexTable() {
		return( orig->getSchema()->getIndexTableObj() );
	}

	cfbam::ICFBamIndexEditObj* CFBamIndexEditObj::getIndexEdit() {
		return( (cfbam::ICFBamIndexEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamIndexEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamIndexObj* CFBamIndexEditObj::getOrigAsIndex() {
		return( dynamic_cast<cfbam::ICFBamIndexObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamIndexEditObj::getBuff() {
		return( buff );
	}

	void CFBamIndexEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamScopeEditObj::setBuff( value );
		}
	}

	const int64_t CFBamIndexEditObj::getRequiredTableId() {
		return( getIndexBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamIndexEditObj::getRequiredTableIdReference() {
		return( getIndexBuff()->getRequiredTableIdReference() );
	}

	bool CFBamIndexEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getIndexBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamIndexEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getIndexBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamIndexEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getIndexBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamIndexEditObj::isOptionalDefSchemaIdNull() {
		return( getIndexBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamIndexEditObj::getOptionalDefSchemaIdValue() {
		return( getIndexBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamIndexEditObj::getOptionalDefSchemaIdReference() {
		return( getIndexBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamIndexEditObj::getRequiredName() {
		return( getIndexBuff()->getRequiredName() );
	}

	const std::string* CFBamIndexEditObj::getRequiredNameReference() {
		return( getIndexBuff()->getRequiredNameReference() );
	}

	void CFBamIndexEditObj::setRequiredName( const std::string& value ) {
		if( getIndexBuff()->getRequiredName() != value ) {
			getIndexEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamIndexEditObj::isOptionalShortNameNull() {
		return( getIndexBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamIndexEditObj::getOptionalShortNameValue() {
		return( getIndexBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamIndexEditObj::getOptionalShortNameReference() {
		return( getIndexBuff()->getOptionalShortNameReference() );
	}

	void CFBamIndexEditObj::setOptionalShortNameNull() {
		if( ! getIndexBuff()->isOptionalShortNameNull() ) {
			getIndexEditBuff()->setOptionalShortNameNull();
		}
	}

	void CFBamIndexEditObj::setOptionalShortNameValue( const std::string& value ) {
		if( getIndexBuff()->isOptionalShortNameNull() ) {
			getIndexEditBuff()->setOptionalShortNameValue( value );
		}
		else if( getIndexBuff()->getOptionalShortNameValue() != value ) {
			getIndexEditBuff()->setOptionalShortNameValue( value );
		}
	}

	bool CFBamIndexEditObj::isOptionalLabelNull() {
		return( getIndexBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamIndexEditObj::getOptionalLabelValue() {
		return( getIndexBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamIndexEditObj::getOptionalLabelReference() {
		return( getIndexBuff()->getOptionalLabelReference() );
	}

	void CFBamIndexEditObj::setOptionalLabelNull() {
		if( ! getIndexBuff()->isOptionalLabelNull() ) {
			getIndexEditBuff()->setOptionalLabelNull();
		}
	}

	void CFBamIndexEditObj::setOptionalLabelValue( const std::string& value ) {
		if( getIndexBuff()->isOptionalLabelNull() ) {
			getIndexEditBuff()->setOptionalLabelValue( value );
		}
		else if( getIndexBuff()->getOptionalLabelValue() != value ) {
			getIndexEditBuff()->setOptionalLabelValue( value );
		}
	}

	bool CFBamIndexEditObj::isOptionalShortDescriptionNull() {
		return( getIndexBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamIndexEditObj::getOptionalShortDescriptionValue() {
		return( getIndexBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamIndexEditObj::getOptionalShortDescriptionReference() {
		return( getIndexBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamIndexEditObj::setOptionalShortDescriptionNull() {
		if( ! getIndexBuff()->isOptionalShortDescriptionNull() ) {
			getIndexEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamIndexEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getIndexBuff()->isOptionalShortDescriptionNull() ) {
			getIndexEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getIndexBuff()->getOptionalShortDescriptionValue() != value ) {
			getIndexEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamIndexEditObj::isOptionalDescriptionNull() {
		return( getIndexBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamIndexEditObj::getOptionalDescriptionValue() {
		return( getIndexBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamIndexEditObj::getOptionalDescriptionReference() {
		return( getIndexBuff()->getOptionalDescriptionReference() );
	}

	void CFBamIndexEditObj::setOptionalDescriptionNull() {
		if( ! getIndexBuff()->isOptionalDescriptionNull() ) {
			getIndexEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamIndexEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getIndexBuff()->isOptionalDescriptionNull() ) {
			getIndexEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getIndexBuff()->getOptionalDescriptionValue() != value ) {
			getIndexEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	bool CFBamIndexEditObj::isOptionalDbNameNull() {
		return( getIndexBuff()->isOptionalDbNameNull() );
	}

	const std::string& CFBamIndexEditObj::getOptionalDbNameValue() {
		return( getIndexBuff()->getOptionalDbNameValue() );
	}

	const std::string* CFBamIndexEditObj::getOptionalDbNameReference() {
		return( getIndexBuff()->getOptionalDbNameReference() );
	}

	void CFBamIndexEditObj::setOptionalDbNameNull() {
		if( ! getIndexBuff()->isOptionalDbNameNull() ) {
			getIndexEditBuff()->setOptionalDbNameNull();
		}
	}

	void CFBamIndexEditObj::setOptionalDbNameValue( const std::string& value ) {
		if( getIndexBuff()->isOptionalDbNameNull() ) {
			getIndexEditBuff()->setOptionalDbNameValue( value );
		}
		else if( getIndexBuff()->getOptionalDbNameValue() != value ) {
			getIndexEditBuff()->setOptionalDbNameValue( value );
		}
	}

	bool CFBamIndexEditObj::isOptionalSuffixNull() {
		return( getIndexBuff()->isOptionalSuffixNull() );
	}

	const std::string& CFBamIndexEditObj::getOptionalSuffixValue() {
		return( getIndexBuff()->getOptionalSuffixValue() );
	}

	const std::string* CFBamIndexEditObj::getOptionalSuffixReference() {
		return( getIndexBuff()->getOptionalSuffixReference() );
	}

	void CFBamIndexEditObj::setOptionalSuffixNull() {
		if( ! getIndexBuff()->isOptionalSuffixNull() ) {
			getIndexEditBuff()->setOptionalSuffixNull();
		}
	}

	void CFBamIndexEditObj::setOptionalSuffixValue( const std::string& value ) {
		if( getIndexBuff()->isOptionalSuffixNull() ) {
			getIndexEditBuff()->setOptionalSuffixValue( value );
		}
		else if( getIndexBuff()->getOptionalSuffixValue() != value ) {
			getIndexEditBuff()->setOptionalSuffixValue( value );
		}
	}

	const bool CFBamIndexEditObj::getRequiredIsUnique() {
		return( getIndexBuff()->getRequiredIsUnique() );
	}

	const bool* CFBamIndexEditObj::getRequiredIsUniqueReference() {
		return( getIndexBuff()->getRequiredIsUniqueReference() );
	}

	void CFBamIndexEditObj::setRequiredIsUnique( const bool value ) {
		if( getIndexBuff()->getRequiredIsUnique() != value ) {
			getIndexEditBuff()->setRequiredIsUnique( value );
		}
	}

	const bool CFBamIndexEditObj::getRequiredIsDbMapped() {
		return( getIndexBuff()->getRequiredIsDbMapped() );
	}

	const bool* CFBamIndexEditObj::getRequiredIsDbMappedReference() {
		return( getIndexBuff()->getRequiredIsDbMappedReference() );
	}

	void CFBamIndexEditObj::setRequiredIsDbMapped( const bool value ) {
		if( getIndexBuff()->getRequiredIsDbMapped() != value ) {
			getIndexEditBuff()->setRequiredIsDbMapped( value );
		}
	}

	cfbam::ICFBamTableObj* CFBamIndexEditObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndex()->getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getIndexBuff()->getRequiredTableId() );
		}
		return( retobj );
	}

	void CFBamIndexEditObj::setRequiredContainerTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getIndexEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getIndexEditBuff()->setRequiredTableId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamIndexEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getIndexBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getIndexBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndex()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getIndexBuff()->getOptionalDefSchemaTenantIdValue(),
					getIndexBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamIndexEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getIndexEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getIndexEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getIndexEditBuff()->setOptionalDefSchemaTenantIdNull();
				getIndexEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexEditObj::getOptionalComponentsColumns( bool forceRead ) {
		std::vector<cfbam::ICFBamIndexColObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndex()->getSchema() )->getIndexColTableObj()->readIndexColByIndexIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfsec::ICFSecTenantObj* CFBamIndexEditObj::getRequiredOwnerIdxTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndex()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamIndexEditObj::setRequiredOwnerIdxTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getIndexEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}

			CFBamScopeEditObj::setRequiredOwnerTenant( value );		}

	void CFBamIndexEditObj::copyBuffToOrig() {
		cfbam::CFBamIndexBuff* origBuff = getOrigAsIndex()->getIndexEditBuff();
		cfbam::CFBamIndexBuff* myBuff = getIndexBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamIndexEditObj::copyOrigToBuff() {
		cfbam::CFBamIndexBuff* origBuff = getOrigAsIndex()->getIndexBuff();
		cfbam::CFBamIndexBuff* myBuff = getIndexEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
