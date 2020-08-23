// Description: C++18 base object instance implementation for CFBam ServerMethod.

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
#include <cfbamobj/CFBamServerMethodObj.hpp>

namespace cfbam {

	const std::string CFBamServerMethodObj::CLASS_NAME( "CFBamServerMethodObj" );
	const classcode_t CFBamServerMethodObj::CLASS_CODE = 0xa805L;

	const int64_t CFBamServerMethodObj::getRequiredTableId() {
		return( getServerMethodBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamServerMethodObj::getRequiredTableIdReference() {
		return( getServerMethodBuff()->getRequiredTableIdReference() );
	}

	bool CFBamServerMethodObj::isOptionalDefSchemaTenantIdNull() {
		return( getServerMethodBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamServerMethodObj::getOptionalDefSchemaTenantIdValue() {
		return( getServerMethodBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamServerMethodObj::getOptionalDefSchemaTenantIdReference() {
		return( getServerMethodBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamServerMethodObj::isOptionalDefSchemaIdNull() {
		return( getServerMethodBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamServerMethodObj::getOptionalDefSchemaIdValue() {
		return( getServerMethodBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamServerMethodObj::getOptionalDefSchemaIdReference() {
		return( getServerMethodBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamServerMethodObj::getRequiredName() {
		return( getServerMethodBuff()->getRequiredName() );
	}

	const std::string* CFBamServerMethodObj::getRequiredNameReference() {
		return( getServerMethodBuff()->getRequiredNameReference() );
	}

	bool CFBamServerMethodObj::isOptionalShortNameNull() {
		return( getServerMethodBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamServerMethodObj::getOptionalShortNameValue() {
		return( getServerMethodBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamServerMethodObj::getOptionalShortNameReference() {
		return( getServerMethodBuff()->getOptionalShortNameReference() );
	}

	bool CFBamServerMethodObj::isOptionalLabelNull() {
		return( getServerMethodBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamServerMethodObj::getOptionalLabelValue() {
		return( getServerMethodBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamServerMethodObj::getOptionalLabelReference() {
		return( getServerMethodBuff()->getOptionalLabelReference() );
	}

	bool CFBamServerMethodObj::isOptionalShortDescriptionNull() {
		return( getServerMethodBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamServerMethodObj::getOptionalShortDescriptionValue() {
		return( getServerMethodBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamServerMethodObj::getOptionalShortDescriptionReference() {
		return( getServerMethodBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamServerMethodObj::isOptionalDescriptionNull() {
		return( getServerMethodBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamServerMethodObj::getOptionalDescriptionValue() {
		return( getServerMethodBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamServerMethodObj::getOptionalDescriptionReference() {
		return( getServerMethodBuff()->getOptionalDescriptionReference() );
	}

	bool CFBamServerMethodObj::isOptionalSuffixNull() {
		return( getServerMethodBuff()->isOptionalSuffixNull() );
	}

	const std::string& CFBamServerMethodObj::getOptionalSuffixValue() {
		return( getServerMethodBuff()->getOptionalSuffixValue() );
	}

	const std::string* CFBamServerMethodObj::getOptionalSuffixReference() {
		return( getServerMethodBuff()->getOptionalSuffixReference() );
	}

	const bool CFBamServerMethodObj::getRequiredIsInstanceMethod() {
		return( getServerMethodBuff()->getRequiredIsInstanceMethod() );
	}

	const bool* CFBamServerMethodObj::getRequiredIsInstanceMethodReference() {
		return( getServerMethodBuff()->getRequiredIsInstanceMethodReference() );
	}

	const bool CFBamServerMethodObj::getRequiredIsServerOnly() {
		return( getServerMethodBuff()->getRequiredIsServerOnly() );
	}

	const bool* CFBamServerMethodObj::getRequiredIsServerOnlyReference() {
		return( getServerMethodBuff()->getRequiredIsServerOnlyReference() );
	}

	const std::string& CFBamServerMethodObj::getRequiredJMethodBody() {
		return( getServerMethodBuff()->getRequiredJMethodBody() );
	}

	const std::string* CFBamServerMethodObj::getRequiredJMethodBodyReference() {
		return( getServerMethodBuff()->getRequiredJMethodBodyReference() );
	}

	const std::string& CFBamServerMethodObj::getRequiredCppMethodBody() {
		return( getServerMethodBuff()->getRequiredCppMethodBody() );
	}

	const std::string* CFBamServerMethodObj::getRequiredCppMethodBodyReference() {
		return( getServerMethodBuff()->getRequiredCppMethodBodyReference() );
	}

	const std::string& CFBamServerMethodObj::getRequiredCsMethodBody() {
		return( getServerMethodBuff()->getRequiredCsMethodBody() );
	}

	const std::string* CFBamServerMethodObj::getRequiredCsMethodBodyReference() {
		return( getServerMethodBuff()->getRequiredCsMethodBodyReference() );
	}


	cfbam::ICFBamSchemaDefObj* CFBamServerMethodObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getServerMethodBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getServerMethodBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getServerMethodBuff()->getOptionalDefSchemaTenantIdValue(),
					getServerMethodBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamTableObj* CFBamServerMethodObj::getRequiredContainerForTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getServerMethodBuff()->getRequiredTableId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamParamObj*> CFBamServerMethodObj::getOptionalComponentsParams( bool forceRead ) {
		std::vector<cfbam::ICFBamParamObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getParamTableObj()->readParamByServerMethodIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamServerMethodObj::CFBamServerMethodObj()
	: ICFBamServerMethodObj(),
	  CFBamScopeObj()
	{
	}

	CFBamServerMethodObj::CFBamServerMethodObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamServerMethodObj(),
	  CFBamScopeObj( argSchema )
	{
	}

	CFBamServerMethodObj::~CFBamServerMethodObj() {
	}

	cfbam::CFBamScopeBuff* CFBamServerMethodObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamServerMethodBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableServerMethod()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamServerMethodObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamServerMethodObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamServerMethodObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamServerMethodObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamServerMethodObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServerMethodObj" );
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
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_IsInstanceMethod( "IsInstanceMethod" );
		static const std::string S_IsServerOnly( "IsServerOnly" );
		static const std::string S_JMethodBody( "JMethodBody" );
		static const std::string S_CppMethodBody( "CppMethodBody" );
		static const std::string S_CsMethodBody( "CsMethodBody" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamServerMethodObj::getRequiredTableId() ) );
		if( ! CFBamServerMethodObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamServerMethodObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamServerMethodObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamServerMethodObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamServerMethodObj::getRequiredName() ) );
		if( ! CFBamServerMethodObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamServerMethodObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamServerMethodObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamServerMethodObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamServerMethodObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamServerMethodObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamServerMethodObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamServerMethodObj::getOptionalDescriptionValue() ) );
		}
		if( ! CFBamServerMethodObj::isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, CFBamServerMethodObj::getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsInstanceMethod, CFBamServerMethodObj::getRequiredIsInstanceMethod() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsServerOnly, CFBamServerMethodObj::getRequiredIsServerOnly() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMethodBody, CFBamServerMethodObj::getRequiredJMethodBody() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMethodBody, CFBamServerMethodObj::getRequiredCppMethodBody() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMethodBody, CFBamServerMethodObj::getRequiredCsMethodBody() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamServerMethodObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamServerMethodObj::getGenDefName() {
		return( cfbam::CFBamServerMethodBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamServerMethodObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerForTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamServerMethodObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerForTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamServerMethodObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamServerMethodObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamServerMethodObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamServerMethodObj::getObjQualifiedName() {
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

	std::string CFBamServerMethodObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamServerMethodObj::realize() {
		cfbam::ICFBamServerMethodObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerMethodTableObj()->realizeServerMethod(
			(cfbam::ICFBamServerMethodObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamServerMethodObj::read( bool forceRead ) {
		cfbam::ICFBamServerMethodObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerMethodTableObj()->readServerMethodByIdIdx( getServerMethodBuff()->getRequiredTenantId(),
		getServerMethodBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerMethodObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamServerMethodObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerMethodTableObj()->lockServerMethod( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerMethodTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamServerMethodEditObj* CFBamServerMethodObj::getServerMethodEdit() {
		return( dynamic_cast<cfbam::ICFBamServerMethodEditObj*>( edit ) );
	}

}
