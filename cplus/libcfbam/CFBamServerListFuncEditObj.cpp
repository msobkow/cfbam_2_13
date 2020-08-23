// Description: C++18 edit object instance implementation for CFBam ServerListFunc.

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
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamServerMethodObj.hpp>
#include <cfbamobj/CFBamServerListFuncObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamServerMethodObj.hpp>
#include <cfbamobj/ICFBamServerMethodEditObj.hpp>
#include <cfbamobj/CFBamServerMethodObj.hpp>
#include <cfbamobj/CFBamServerMethodEditObj.hpp>
#include <cfbamobj/CFBamServerListFuncEditObj.hpp>


namespace cfbam {

	const std::string CFBamServerListFuncEditObj::CLASS_NAME( "CFBamServerListFuncEditObj" );

	CFBamServerListFuncEditObj::CFBamServerListFuncEditObj( cfbam::ICFBamServerListFuncObj* argOrig )
	: ICFBamServerListFuncEditObj(),
	  CFBamServerMethodEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamServerListFuncEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamServerListFuncEditObj::~CFBamServerListFuncEditObj() {
	}

	const std::string& CFBamServerListFuncEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamServerListFuncEditObj::getClassCode() const {
		return( cfbam::CFBamServerListFuncBuff::CLASS_CODE );
	}

	bool CFBamServerListFuncEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamServerMethodEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamServerListFuncEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServerListFuncEditObj" );
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
		static const std::string S_RetTenantId( "RetTenantId" );
		static const std::string S_RetTableId( "RetTableId" );
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
		if( ! CFBamServerListFuncEditObj::isOptionalRetTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RetTenantId, CFBamServerListFuncEditObj::getOptionalRetTenantIdValue() ) );
		}
		if( ! CFBamServerListFuncEditObj::isOptionalRetTableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RetTableId, CFBamServerListFuncEditObj::getOptionalRetTableIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamServerListFuncEditObj::getGenDefName() {
		return( cfbam::CFBamServerListFuncBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamServerListFuncEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamServerListFuncEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamServerListFuncEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamServerListFuncEditObj::getObjQualifiedName() {
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

	std::string CFBamServerListFuncEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamServerListFuncEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamServerListFuncObj* retobj = getSchema()->getServerListFuncTableObj()->realizeServerListFunc( dynamic_cast<cfbam::ICFBamServerListFuncObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamServerListFuncEditObj::create() {
		cfbam::ICFBamServerListFuncObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsServerListFunc()->getSchema() )->getServerListFuncTableObj()->createServerListFunc( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerListFuncEditObj::update() {
		getSchema()->getServerListFuncTableObj()->updateServerListFunc( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerListFuncEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getServerListFuncTableObj()->deleteServerListFunc( this );
		return( NULL );
	}

	cfbam::ICFBamServerListFuncTableObj* CFBamServerListFuncEditObj::getServerListFuncTable() {
		return( orig->getSchema()->getServerListFuncTableObj() );
	}

	cfbam::ICFBamServerListFuncEditObj* CFBamServerListFuncEditObj::getServerListFuncEdit() {
		return( (cfbam::ICFBamServerListFuncEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerListFuncEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamServerListFuncObj* CFBamServerListFuncEditObj::getOrigAsServerListFunc() {
		return( dynamic_cast<cfbam::ICFBamServerListFuncObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamServerListFuncEditObj::getBuff() {
		return( buff );
	}

	void CFBamServerListFuncEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamServerMethodEditObj::setBuff( value );
		}
	}

	bool CFBamServerListFuncEditObj::isOptionalRetTenantIdNull() {
		return( getServerListFuncBuff()->isOptionalRetTenantIdNull() );
	}

	const int64_t CFBamServerListFuncEditObj::getOptionalRetTenantIdValue() {
		return( getServerListFuncBuff()->getOptionalRetTenantIdValue() );
	}

	const int64_t* CFBamServerListFuncEditObj::getOptionalRetTenantIdReference() {
		return( getServerListFuncBuff()->getOptionalRetTenantIdReference() );
	}

	bool CFBamServerListFuncEditObj::isOptionalRetTableIdNull() {
		return( getServerListFuncBuff()->isOptionalRetTableIdNull() );
	}

	const int64_t CFBamServerListFuncEditObj::getOptionalRetTableIdValue() {
		return( getServerListFuncBuff()->getOptionalRetTableIdValue() );
	}

	const int64_t* CFBamServerListFuncEditObj::getOptionalRetTableIdReference() {
		return( getServerListFuncBuff()->getOptionalRetTableIdReference() );
	}

	cfbam::ICFBamTableObj* CFBamServerListFuncEditObj::getOptionalLookupRetTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;

			if( getServerListFuncBuff()->isOptionalRetTenantIdNull() ) {
				anyMissing = true;
			}
			if( getServerListFuncBuff()->isOptionalRetTableIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsServerListFunc()->getSchema() )->getTableTableObj()->readTableByIdIdx( getServerListFuncBuff()->getOptionalRetTenantIdValue(),
					getServerListFuncBuff()->getOptionalRetTableIdValue() );
		}
		return( retobj );
	}

	void CFBamServerListFuncEditObj::setOptionalLookupRetTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getServerListFuncEditBuff()->setOptionalRetTenantIdValue( value->getRequiredTenantId() );
				getServerListFuncEditBuff()->setOptionalRetTableIdValue( value->getRequiredId() );
			}
			else {
				getServerListFuncEditBuff()->setOptionalRetTenantIdNull();
				getServerListFuncEditBuff()->setOptionalRetTableIdNull();
			}
		}

	void CFBamServerListFuncEditObj::copyBuffToOrig() {
		cfbam::CFBamServerListFuncBuff* origBuff = getOrigAsServerListFunc()->getServerListFuncEditBuff();
		cfbam::CFBamServerListFuncBuff* myBuff = getServerListFuncBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamServerListFuncEditObj::copyOrigToBuff() {
		cfbam::CFBamServerListFuncBuff* origBuff = getOrigAsServerListFunc()->getServerListFuncBuff();
		cfbam::CFBamServerListFuncBuff* myBuff = getServerListFuncEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
