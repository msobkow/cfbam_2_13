// Description: C++18 base object instance implementation for CFBam ServerObjFunc.

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
#include <cfbamobj/ICFBamServerMethodObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamServerMethodObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamServerObjFuncObj.hpp>

namespace cfbam {

	const std::string CFBamServerObjFuncObj::CLASS_NAME( "CFBamServerObjFuncObj" );
	const classcode_t CFBamServerObjFuncObj::CLASS_CODE = 0xa806L;

	bool CFBamServerObjFuncObj::isOptionalRetTenantIdNull() {
		return( getServerObjFuncBuff()->isOptionalRetTenantIdNull() );
	}

	const int64_t CFBamServerObjFuncObj::getOptionalRetTenantIdValue() {
		return( getServerObjFuncBuff()->getOptionalRetTenantIdValue() );
	}

	const int64_t* CFBamServerObjFuncObj::getOptionalRetTenantIdReference() {
		return( getServerObjFuncBuff()->getOptionalRetTenantIdReference() );
	}

	bool CFBamServerObjFuncObj::isOptionalRetTableIdNull() {
		return( getServerObjFuncBuff()->isOptionalRetTableIdNull() );
	}

	const int64_t CFBamServerObjFuncObj::getOptionalRetTableIdValue() {
		return( getServerObjFuncBuff()->getOptionalRetTableIdValue() );
	}

	const int64_t* CFBamServerObjFuncObj::getOptionalRetTableIdReference() {
		return( getServerObjFuncBuff()->getOptionalRetTableIdReference() );
	}


	cfbam::ICFBamTableObj* CFBamServerObjFuncObj::getOptionalLookupRetTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
			if( getServerObjFuncBuff()->isOptionalRetTenantIdNull() ) {
				anyMissing = true;
			}
			if( getServerObjFuncBuff()->isOptionalRetTableIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getServerObjFuncBuff()->getOptionalRetTenantIdValue(),
					getServerObjFuncBuff()->getOptionalRetTableIdValue(), forceRead );
		}
		return( retobj );
	}

	CFBamServerObjFuncObj::CFBamServerObjFuncObj()
	: ICFBamServerObjFuncObj(),
	  CFBamServerMethodObj()
	{
	}

	CFBamServerObjFuncObj::CFBamServerObjFuncObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamServerObjFuncObj(),
	  CFBamServerMethodObj( argSchema )
	{
	}

	CFBamServerObjFuncObj::~CFBamServerObjFuncObj() {
	}

	cfbam::CFBamScopeBuff* CFBamServerObjFuncObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamServerObjFuncBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableServerObjFunc()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamServerObjFuncObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamServerObjFuncObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamServerObjFuncObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamServerObjFuncObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamServerMethodObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamServerObjFuncObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServerObjFuncObj" );
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
		if( ! CFBamServerObjFuncObj::isOptionalRetTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RetTenantId, CFBamServerObjFuncObj::getOptionalRetTenantIdValue() ) );
		}
		if( ! CFBamServerObjFuncObj::isOptionalRetTableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RetTableId, CFBamServerObjFuncObj::getOptionalRetTableIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamServerObjFuncObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamServerObjFuncObj::getGenDefName() {
		return( cfbam::CFBamServerObjFuncBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamServerObjFuncObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamServerObjFuncObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamServerObjFuncObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamServerObjFuncObj::getObjQualifiedName() {
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

	std::string CFBamServerObjFuncObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamServerObjFuncObj::realize() {
		cfbam::ICFBamServerObjFuncObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerObjFuncTableObj()->realizeServerObjFunc(
			(cfbam::ICFBamServerObjFuncObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamServerObjFuncObj::read( bool forceRead ) {
		cfbam::ICFBamServerObjFuncObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerObjFuncTableObj()->readServerObjFuncByIdIdx( getServerObjFuncBuff()->getRequiredTenantId(),
		getServerObjFuncBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamServerObjFuncObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamServerObjFuncObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerObjFuncTableObj()->lockServerObjFunc( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerObjFuncTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamServerObjFuncEditObj* CFBamServerObjFuncObj::getServerObjFuncEdit() {
		return( dynamic_cast<cfbam::ICFBamServerObjFuncEditObj*>( edit ) );
	}

}
