// Description: C++18 base object instance implementation for CFBam Index.

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
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamIndexObj.hpp>

namespace cfbam {

	const std::string CFBamIndexObj::CLASS_NAME( "CFBamIndexObj" );
	const classcode_t CFBamIndexObj::CLASS_CODE = 0xa821L;

	const int64_t CFBamIndexObj::getRequiredTableId() {
		return( getIndexBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamIndexObj::getRequiredTableIdReference() {
		return( getIndexBuff()->getRequiredTableIdReference() );
	}

	bool CFBamIndexObj::isOptionalDefSchemaTenantIdNull() {
		return( getIndexBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamIndexObj::getOptionalDefSchemaTenantIdValue() {
		return( getIndexBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamIndexObj::getOptionalDefSchemaTenantIdReference() {
		return( getIndexBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamIndexObj::isOptionalDefSchemaIdNull() {
		return( getIndexBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamIndexObj::getOptionalDefSchemaIdValue() {
		return( getIndexBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamIndexObj::getOptionalDefSchemaIdReference() {
		return( getIndexBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamIndexObj::getRequiredName() {
		return( getIndexBuff()->getRequiredName() );
	}

	const std::string* CFBamIndexObj::getRequiredNameReference() {
		return( getIndexBuff()->getRequiredNameReference() );
	}

	bool CFBamIndexObj::isOptionalShortNameNull() {
		return( getIndexBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamIndexObj::getOptionalShortNameValue() {
		return( getIndexBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamIndexObj::getOptionalShortNameReference() {
		return( getIndexBuff()->getOptionalShortNameReference() );
	}

	bool CFBamIndexObj::isOptionalLabelNull() {
		return( getIndexBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamIndexObj::getOptionalLabelValue() {
		return( getIndexBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamIndexObj::getOptionalLabelReference() {
		return( getIndexBuff()->getOptionalLabelReference() );
	}

	bool CFBamIndexObj::isOptionalShortDescriptionNull() {
		return( getIndexBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamIndexObj::getOptionalShortDescriptionValue() {
		return( getIndexBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamIndexObj::getOptionalShortDescriptionReference() {
		return( getIndexBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamIndexObj::isOptionalDescriptionNull() {
		return( getIndexBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamIndexObj::getOptionalDescriptionValue() {
		return( getIndexBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamIndexObj::getOptionalDescriptionReference() {
		return( getIndexBuff()->getOptionalDescriptionReference() );
	}

	bool CFBamIndexObj::isOptionalDbNameNull() {
		return( getIndexBuff()->isOptionalDbNameNull() );
	}

	const std::string& CFBamIndexObj::getOptionalDbNameValue() {
		return( getIndexBuff()->getOptionalDbNameValue() );
	}

	const std::string* CFBamIndexObj::getOptionalDbNameReference() {
		return( getIndexBuff()->getOptionalDbNameReference() );
	}

	bool CFBamIndexObj::isOptionalSuffixNull() {
		return( getIndexBuff()->isOptionalSuffixNull() );
	}

	const std::string& CFBamIndexObj::getOptionalSuffixValue() {
		return( getIndexBuff()->getOptionalSuffixValue() );
	}

	const std::string* CFBamIndexObj::getOptionalSuffixReference() {
		return( getIndexBuff()->getOptionalSuffixReference() );
	}

	const bool CFBamIndexObj::getRequiredIsUnique() {
		return( getIndexBuff()->getRequiredIsUnique() );
	}

	const bool* CFBamIndexObj::getRequiredIsUniqueReference() {
		return( getIndexBuff()->getRequiredIsUniqueReference() );
	}

	const bool CFBamIndexObj::getRequiredIsDbMapped() {
		return( getIndexBuff()->getRequiredIsDbMapped() );
	}

	const bool* CFBamIndexObj::getRequiredIsDbMappedReference() {
		return( getIndexBuff()->getRequiredIsDbMappedReference() );
	}


	cfbam::ICFBamTableObj* CFBamIndexObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getIndexBuff()->getRequiredTableId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamIndexObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getIndexBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getIndexBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getIndexBuff()->getOptionalDefSchemaTenantIdValue(),
					getIndexBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexObj::getOptionalComponentsColumns( bool forceRead ) {
		std::vector<cfbam::ICFBamIndexColObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexColTableObj()->readIndexColByIndexIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfsec::ICFSecTenantObj* CFBamIndexObj::getRequiredOwnerIdxTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	CFBamIndexObj::CFBamIndexObj()
	: ICFBamIndexObj(),
	  CFBamScopeObj()
	{
	}

	CFBamIndexObj::CFBamIndexObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamIndexObj(),
	  CFBamScopeObj( argSchema )
	{
	}

	CFBamIndexObj::~CFBamIndexObj() {
	}

	cfbam::CFBamScopeBuff* CFBamIndexObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamIndexBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndex()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamIndexObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamIndexObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamIndexObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamIndexObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamIndexObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamIndexObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamIndexObj::getRequiredTableId() ) );
		if( ! CFBamIndexObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamIndexObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamIndexObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamIndexObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamIndexObj::getRequiredName() ) );
		if( ! CFBamIndexObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamIndexObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamIndexObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamIndexObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamIndexObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamIndexObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamIndexObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamIndexObj::getOptionalDescriptionValue() ) );
		}
		if( ! CFBamIndexObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamIndexObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamIndexObj::isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, CFBamIndexObj::getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsUnique, CFBamIndexObj::getRequiredIsUnique() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsDbMapped, CFBamIndexObj::getRequiredIsDbMapped() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamIndexObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamIndexObj::getGenDefName() {
		return( cfbam::CFBamIndexBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamIndexObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamIndexObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamIndexObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamIndexObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamIndexObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamIndexObj::getObjQualifiedName() {
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

	std::string CFBamIndexObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamIndexObj::realize() {
		cfbam::ICFBamIndexObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->realizeIndex(
			(cfbam::ICFBamIndexObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamIndexObj::read( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->readIndexByIdIdx( getIndexBuff()->getRequiredTenantId(),
		getIndexBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamIndexObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamIndexObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->lockIndex( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamIndexEditObj* CFBamIndexObj::getIndexEdit() {
		return( dynamic_cast<cfbam::ICFBamIndexEditObj*>( edit ) );
	}

}
