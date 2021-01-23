// Description: C++18 edit object instance implementation for CFBam ServerMethod.

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
#include <cfbamobj/CFBamServerMethodObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamServerMethodEditObj.hpp>


namespace cfbam {

	const std::string CFBamServerMethodEditObj::CLASS_NAME( "CFBamServerMethodEditObj" );

	CFBamServerMethodEditObj::CFBamServerMethodEditObj( cfbam::ICFBamServerMethodObj* argOrig )
	: ICFBamServerMethodEditObj(),
	  CFBamScopeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamServerMethodEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamServerMethodEditObj::~CFBamServerMethodEditObj() {
	}

	const std::string& CFBamServerMethodEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamServerMethodEditObj::getClassCode() const {
		return( cfbam::CFBamServerMethodBuff::CLASS_CODE );
	}

	bool CFBamServerMethodEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamServerMethodEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServerMethodEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamServerMethodEditObj::getRequiredTableId() ) );
		if( ! CFBamServerMethodEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamServerMethodEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamServerMethodEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamServerMethodEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamServerMethodEditObj::getRequiredName() ) );
		if( ! CFBamServerMethodEditObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamServerMethodEditObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamServerMethodEditObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamServerMethodEditObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamServerMethodEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamServerMethodEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamServerMethodEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamServerMethodEditObj::getOptionalDescriptionValue() ) );
		}
		if( ! CFBamServerMethodEditObj::isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, CFBamServerMethodEditObj::getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsInstanceMethod, CFBamServerMethodEditObj::getRequiredIsInstanceMethod() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsServerOnly, CFBamServerMethodEditObj::getRequiredIsServerOnly() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMethodBody, CFBamServerMethodEditObj::getRequiredJMethodBody() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMethodBody, CFBamServerMethodEditObj::getRequiredCppMethodBody() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMethodBody, CFBamServerMethodEditObj::getRequiredCsMethodBody() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamServerMethodEditObj::getGenDefName() {
		return( cfbam::CFBamServerMethodBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamServerMethodEditObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerForTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamServerMethodEditObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerForTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamServerMethodEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamServerMethodEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamServerMethodEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamServerMethodEditObj::getObjQualifiedName() {
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

	std::string CFBamServerMethodEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamServerMethodEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamServerMethodObj* retobj = getSchema()->getServerMethodTableObj()->realizeServerMethod( dynamic_cast<cfbam::ICFBamServerMethodObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamServerMethodEditObj::create() {
		cfbam::ICFBamServerMethodObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsServerMethod()->getSchema() )->getServerMethodTableObj()->createServerMethod( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerMethodEditObj::update() {
		getSchema()->getServerMethodTableObj()->updateServerMethod( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerMethodEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getServerMethodTableObj()->deleteServerMethod( this );
		return( NULL );
	}

	cfbam::ICFBamServerMethodTableObj* CFBamServerMethodEditObj::getServerMethodTable() {
		return( orig->getSchema()->getServerMethodTableObj() );
	}

	cfbam::ICFBamServerMethodEditObj* CFBamServerMethodEditObj::getServerMethodEdit() {
		return( (cfbam::ICFBamServerMethodEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerMethodEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamServerMethodObj* CFBamServerMethodEditObj::getOrigAsServerMethod() {
		return( dynamic_cast<cfbam::ICFBamServerMethodObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamServerMethodEditObj::getBuff() {
		return( buff );
	}

	void CFBamServerMethodEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamScopeEditObj::setBuff( value );
		}
	}

	const int64_t CFBamServerMethodEditObj::getRequiredTableId() {
		return( getServerMethodBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamServerMethodEditObj::getRequiredTableIdReference() {
		return( getServerMethodBuff()->getRequiredTableIdReference() );
	}

	bool CFBamServerMethodEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getServerMethodBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamServerMethodEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getServerMethodBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamServerMethodEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getServerMethodBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamServerMethodEditObj::isOptionalDefSchemaIdNull() {
		return( getServerMethodBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamServerMethodEditObj::getOptionalDefSchemaIdValue() {
		return( getServerMethodBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamServerMethodEditObj::getOptionalDefSchemaIdReference() {
		return( getServerMethodBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamServerMethodEditObj::getRequiredName() {
		return( getServerMethodBuff()->getRequiredName() );
	}

	const std::string* CFBamServerMethodEditObj::getRequiredNameReference() {
		return( getServerMethodBuff()->getRequiredNameReference() );
	}

	void CFBamServerMethodEditObj::setRequiredName( const std::string& value ) {
		if( getServerMethodBuff()->getRequiredName() != value ) {
			getServerMethodEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamServerMethodEditObj::isOptionalShortNameNull() {
		return( getServerMethodBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamServerMethodEditObj::getOptionalShortNameValue() {
		return( getServerMethodBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamServerMethodEditObj::getOptionalShortNameReference() {
		return( getServerMethodBuff()->getOptionalShortNameReference() );
	}

	void CFBamServerMethodEditObj::setOptionalShortNameNull() {
		if( ! getServerMethodBuff()->isOptionalShortNameNull() ) {
			getServerMethodEditBuff()->setOptionalShortNameNull();
		}
	}

	void CFBamServerMethodEditObj::setOptionalShortNameValue( const std::string& value ) {
		if( getServerMethodBuff()->isOptionalShortNameNull() ) {
			getServerMethodEditBuff()->setOptionalShortNameValue( value );
		}
		else if( getServerMethodBuff()->getOptionalShortNameValue() != value ) {
			getServerMethodEditBuff()->setOptionalShortNameValue( value );
		}
	}

	bool CFBamServerMethodEditObj::isOptionalLabelNull() {
		return( getServerMethodBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamServerMethodEditObj::getOptionalLabelValue() {
		return( getServerMethodBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamServerMethodEditObj::getOptionalLabelReference() {
		return( getServerMethodBuff()->getOptionalLabelReference() );
	}

	void CFBamServerMethodEditObj::setOptionalLabelNull() {
		if( ! getServerMethodBuff()->isOptionalLabelNull() ) {
			getServerMethodEditBuff()->setOptionalLabelNull();
		}
	}

	void CFBamServerMethodEditObj::setOptionalLabelValue( const std::string& value ) {
		if( getServerMethodBuff()->isOptionalLabelNull() ) {
			getServerMethodEditBuff()->setOptionalLabelValue( value );
		}
		else if( getServerMethodBuff()->getOptionalLabelValue() != value ) {
			getServerMethodEditBuff()->setOptionalLabelValue( value );
		}
	}

	bool CFBamServerMethodEditObj::isOptionalShortDescriptionNull() {
		return( getServerMethodBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamServerMethodEditObj::getOptionalShortDescriptionValue() {
		return( getServerMethodBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamServerMethodEditObj::getOptionalShortDescriptionReference() {
		return( getServerMethodBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamServerMethodEditObj::setOptionalShortDescriptionNull() {
		if( ! getServerMethodBuff()->isOptionalShortDescriptionNull() ) {
			getServerMethodEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamServerMethodEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getServerMethodBuff()->isOptionalShortDescriptionNull() ) {
			getServerMethodEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getServerMethodBuff()->getOptionalShortDescriptionValue() != value ) {
			getServerMethodEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamServerMethodEditObj::isOptionalDescriptionNull() {
		return( getServerMethodBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamServerMethodEditObj::getOptionalDescriptionValue() {
		return( getServerMethodBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamServerMethodEditObj::getOptionalDescriptionReference() {
		return( getServerMethodBuff()->getOptionalDescriptionReference() );
	}

	void CFBamServerMethodEditObj::setOptionalDescriptionNull() {
		if( ! getServerMethodBuff()->isOptionalDescriptionNull() ) {
			getServerMethodEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamServerMethodEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getServerMethodBuff()->isOptionalDescriptionNull() ) {
			getServerMethodEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getServerMethodBuff()->getOptionalDescriptionValue() != value ) {
			getServerMethodEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	bool CFBamServerMethodEditObj::isOptionalSuffixNull() {
		return( getServerMethodBuff()->isOptionalSuffixNull() );
	}

	const std::string& CFBamServerMethodEditObj::getOptionalSuffixValue() {
		return( getServerMethodBuff()->getOptionalSuffixValue() );
	}

	const std::string* CFBamServerMethodEditObj::getOptionalSuffixReference() {
		return( getServerMethodBuff()->getOptionalSuffixReference() );
	}

	void CFBamServerMethodEditObj::setOptionalSuffixNull() {
		if( ! getServerMethodBuff()->isOptionalSuffixNull() ) {
			getServerMethodEditBuff()->setOptionalSuffixNull();
		}
	}

	void CFBamServerMethodEditObj::setOptionalSuffixValue( const std::string& value ) {
		if( getServerMethodBuff()->isOptionalSuffixNull() ) {
			getServerMethodEditBuff()->setOptionalSuffixValue( value );
		}
		else if( getServerMethodBuff()->getOptionalSuffixValue() != value ) {
			getServerMethodEditBuff()->setOptionalSuffixValue( value );
		}
	}

	const bool CFBamServerMethodEditObj::getRequiredIsInstanceMethod() {
		return( getServerMethodBuff()->getRequiredIsInstanceMethod() );
	}

	const bool* CFBamServerMethodEditObj::getRequiredIsInstanceMethodReference() {
		return( getServerMethodBuff()->getRequiredIsInstanceMethodReference() );
	}

	void CFBamServerMethodEditObj::setRequiredIsInstanceMethod( const bool value ) {
		if( getServerMethodBuff()->getRequiredIsInstanceMethod() != value ) {
			getServerMethodEditBuff()->setRequiredIsInstanceMethod( value );
		}
	}

	const bool CFBamServerMethodEditObj::getRequiredIsServerOnly() {
		return( getServerMethodBuff()->getRequiredIsServerOnly() );
	}

	const bool* CFBamServerMethodEditObj::getRequiredIsServerOnlyReference() {
		return( getServerMethodBuff()->getRequiredIsServerOnlyReference() );
	}

	void CFBamServerMethodEditObj::setRequiredIsServerOnly( const bool value ) {
		if( getServerMethodBuff()->getRequiredIsServerOnly() != value ) {
			getServerMethodEditBuff()->setRequiredIsServerOnly( value );
		}
	}

	const std::string& CFBamServerMethodEditObj::getRequiredJMethodBody() {
		return( getServerMethodBuff()->getRequiredJMethodBody() );
	}

	const std::string* CFBamServerMethodEditObj::getRequiredJMethodBodyReference() {
		return( getServerMethodBuff()->getRequiredJMethodBodyReference() );
	}

	void CFBamServerMethodEditObj::setRequiredJMethodBody( const std::string& value ) {
		if( getServerMethodBuff()->getRequiredJMethodBody() != value ) {
			getServerMethodEditBuff()->setRequiredJMethodBody( value );
		}
	}

	const std::string& CFBamServerMethodEditObj::getRequiredCppMethodBody() {
		return( getServerMethodBuff()->getRequiredCppMethodBody() );
	}

	const std::string* CFBamServerMethodEditObj::getRequiredCppMethodBodyReference() {
		return( getServerMethodBuff()->getRequiredCppMethodBodyReference() );
	}

	void CFBamServerMethodEditObj::setRequiredCppMethodBody( const std::string& value ) {
		if( getServerMethodBuff()->getRequiredCppMethodBody() != value ) {
			getServerMethodEditBuff()->setRequiredCppMethodBody( value );
		}
	}

	const std::string& CFBamServerMethodEditObj::getRequiredCsMethodBody() {
		return( getServerMethodBuff()->getRequiredCsMethodBody() );
	}

	const std::string* CFBamServerMethodEditObj::getRequiredCsMethodBodyReference() {
		return( getServerMethodBuff()->getRequiredCsMethodBodyReference() );
	}

	void CFBamServerMethodEditObj::setRequiredCsMethodBody( const std::string& value ) {
		if( getServerMethodBuff()->getRequiredCsMethodBody() != value ) {
			getServerMethodEditBuff()->setRequiredCsMethodBody( value );
		}
	}

	cfbam::ICFBamSchemaDefObj* CFBamServerMethodEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getServerMethodBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getServerMethodBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsServerMethod()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getServerMethodBuff()->getOptionalDefSchemaTenantIdValue(),
					getServerMethodBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamServerMethodEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getServerMethodEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getServerMethodEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getServerMethodEditBuff()->setOptionalDefSchemaTenantIdNull();
				getServerMethodEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	cfbam::ICFBamTableObj* CFBamServerMethodEditObj::getRequiredContainerForTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsServerMethod()->getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getServerMethodBuff()->getRequiredTableId() );
		}
		return( retobj );
	}

	void CFBamServerMethodEditObj::setRequiredContainerForTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getServerMethodEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getServerMethodEditBuff()->setRequiredTableId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamParamObj*> CFBamServerMethodEditObj::getOptionalComponentsParams( bool forceRead ) {
		std::vector<cfbam::ICFBamParamObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsServerMethod()->getSchema() )->getParamTableObj()->readParamByServerMethodIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamServerMethodEditObj::copyBuffToOrig() {
		cfbam::CFBamServerMethodBuff* origBuff = getOrigAsServerMethod()->getServerMethodEditBuff();
		cfbam::CFBamServerMethodBuff* myBuff = getServerMethodBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamServerMethodEditObj::copyOrigToBuff() {
		cfbam::CFBamServerMethodBuff* origBuff = getOrigAsServerMethod()->getServerMethodBuff();
		cfbam::CFBamServerMethodBuff* myBuff = getServerMethodEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
