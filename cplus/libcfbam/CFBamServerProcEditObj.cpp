// Description: C++18 edit object instance implementation for CFBam ServerProc.

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
#include <cfbamobj/CFBamServerProcObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/ICFBamServerMethodObj.hpp>
#include <cfbamobj/ICFBamServerMethodEditObj.hpp>
#include <cfbamobj/CFBamServerMethodObj.hpp>
#include <cfbamobj/CFBamServerMethodEditObj.hpp>
#include <cfbamobj/CFBamServerProcEditObj.hpp>


namespace cfbam {

	const std::string CFBamServerProcEditObj::CLASS_NAME( "CFBamServerProcEditObj" );

	CFBamServerProcEditObj::CFBamServerProcEditObj( cfbam::ICFBamServerProcObj* argOrig )
	: ICFBamServerProcEditObj(),
	  CFBamServerMethodEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamServerProcEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamServerProcEditObj::~CFBamServerProcEditObj() {
	}

	const std::string& CFBamServerProcEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamServerProcEditObj::getClassCode() const {
		return( cfbam::CFBamServerProcBuff::CLASS_CODE );
	}

	bool CFBamServerProcEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamServerMethodEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamServerProcEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServerProcEditObj" );
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
		static const std::string S_Dummy( "Dummy" );
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
		if( ! CFBamServerProcEditObj::isOptionalDummyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Dummy, CFBamServerProcEditObj::getOptionalDummyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamServerProcEditObj::getGenDefName() {
		return( cfbam::CFBamServerProcBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamServerProcEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamServerProcEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamServerProcEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamServerProcEditObj::getObjQualifiedName() {
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

	std::string CFBamServerProcEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamServerProcEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamServerProcObj* retobj = getSchema()->getServerProcTableObj()->realizeServerProc( dynamic_cast<cfbam::ICFBamServerProcObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamServerProcEditObj::create() {
		cfbam::ICFBamServerProcObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsServerProc()->getSchema() )->getServerProcTableObj()->createServerProc( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerProcEditObj::update() {
		getSchema()->getServerProcTableObj()->updateServerProc( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerProcEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getServerProcTableObj()->deleteServerProc( this );
		return( NULL );
	}

	cfbam::ICFBamServerProcTableObj* CFBamServerProcEditObj::getServerProcTable() {
		return( orig->getSchema()->getServerProcTableObj() );
	}

	cfbam::ICFBamServerProcEditObj* CFBamServerProcEditObj::getServerProcEdit() {
		return( (cfbam::ICFBamServerProcEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerProcEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamServerProcObj* CFBamServerProcEditObj::getOrigAsServerProc() {
		return( dynamic_cast<cfbam::ICFBamServerProcObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamServerProcEditObj::getBuff() {
		return( buff );
	}

	void CFBamServerProcEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamServerMethodEditObj::setBuff( value );
		}
	}

	bool CFBamServerProcEditObj::isOptionalDummyNull() {
		return( getServerProcBuff()->isOptionalDummyNull() );
	}

	const std::string& CFBamServerProcEditObj::getOptionalDummyValue() {
		return( getServerProcBuff()->getOptionalDummyValue() );
	}

	const std::string* CFBamServerProcEditObj::getOptionalDummyReference() {
		return( getServerProcBuff()->getOptionalDummyReference() );
	}

	void CFBamServerProcEditObj::setOptionalDummyNull() {
		if( ! getServerProcBuff()->isOptionalDummyNull() ) {
			getServerProcEditBuff()->setOptionalDummyNull();
		}
	}

	void CFBamServerProcEditObj::setOptionalDummyValue( const std::string& value ) {
		if( getServerProcBuff()->isOptionalDummyNull() ) {
			getServerProcEditBuff()->setOptionalDummyValue( value );
		}
		else if( getServerProcBuff()->getOptionalDummyValue() != value ) {
			getServerProcEditBuff()->setOptionalDummyValue( value );
		}
	}

	void CFBamServerProcEditObj::copyBuffToOrig() {
		cfbam::CFBamServerProcBuff* origBuff = getOrigAsServerProc()->getServerProcEditBuff();
		cfbam::CFBamServerProcBuff* myBuff = getServerProcBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamServerProcEditObj::copyOrigToBuff() {
		cfbam::CFBamServerProcBuff* origBuff = getOrigAsServerProc()->getServerProcBuff();
		cfbam::CFBamServerProcBuff* myBuff = getServerProcEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
