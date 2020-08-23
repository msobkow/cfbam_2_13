// Description: C++18 edit object instance implementation for CFBam Value.

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
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>


namespace cfbam {

	const std::string CFBamValueEditObj::CLASS_NAME( "CFBamValueEditObj" );

	CFBamValueEditObj::CFBamValueEditObj( cfbam::ICFBamValueObj* argOrig )
	: ICFBamValueEditObj()
	{
		static const std::string S_ProcName( "CFBamValueEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfbam::CFBamValueBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfbam::CFBamValueBuff*>( origBuff->clone() );
	}

	CFBamValueEditObj::~CFBamValueEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamValueEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamValueEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getValueBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamValueEditObj::getCreatedAt() {
		return( getValueBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamValueEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getValueBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamValueEditObj::getUpdatedAt() {
		return( getValueBuff()->getUpdatedAt() );
	}

	void CFBamValueEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getValueEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamValueEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getValueEditBuff()->setCreatedAt( value );
	}

	void CFBamValueEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getValueEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamValueEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getValueEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamValueEditObj::getClassCode() const {
		return( cfbam::CFBamValueBuff::CLASS_CODE );
	}

	bool CFBamValueEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamValueBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamValueEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamValueEditObj" );
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
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamValueEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamValueEditObj::setRequiredRevision( int32_t value ) {
		getValueEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamValueEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamValueEditObj::getGenDefName() {
		return( cfbam::CFBamValueBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamValueEditObj::getScope() {
		cfbam::ICFBamScopeObj* scope = getRequiredContainerScope();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamValueEditObj::getObjScope() {
		cfbam::ICFBamScopeObj* scope = getRequiredContainerScope();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamValueEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamValueEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamValueEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamValueEditObj::getObjQualifiedName() {
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

	std::string CFBamValueEditObj::getObjFullName() {
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

	cfbam::ICFBamValueObj* CFBamValueEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamValueObj* retobj = getSchema()->getValueTableObj()->realizeValue( dynamic_cast<cfbam::ICFBamValueObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamValueObj* CFBamValueEditObj::read( bool forceRead ) {
		cfbam::ICFBamValueObj* retval = getOrigAsValue()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfbam::ICFBamValueObj* CFBamValueEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamValueEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamValueObj* CFBamValueEditObj::create() {
		cfbam::ICFBamValueObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsValue()->getSchema() )->getValueTableObj()->createValue( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamValueEditObj* CFBamValueEditObj::update() {
		getSchema()->getValueTableObj()->updateValue( this );
		return( NULL );
	}

	cfbam::ICFBamValueEditObj* CFBamValueEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getValueTableObj()->deleteValue( this );
		return( NULL );
	}

	cfbam::ICFBamValueTableObj* CFBamValueEditObj::getValueTable() {
		return( orig->getSchema()->getValueTableObj() );
	}

	cfbam::ICFBamValueEditObj* CFBamValueEditObj::getEdit() {
		return( this );
	}

	cfbam::ICFBamValueEditObj* CFBamValueEditObj::getValueEdit() {
		return( (cfbam::ICFBamValueEditObj*)this );
	}

	cfbam::ICFBamValueEditObj* CFBamValueEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamValueEditObj::endEdit() {
		orig->endEdit();
	}

	cfbam::ICFBamValueObj* CFBamValueEditObj::getOrig() {
		return( orig );
	}

	cfbam::ICFBamValueObj* CFBamValueEditObj::getOrigAsValue() {
		return( dynamic_cast<cfbam::ICFBamValueObj*>( orig ) );
	}

	cfbam::ICFBamSchemaObj* CFBamValueEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfbam::CFBamValueBuff* CFBamValueEditObj::getBuff() {
		return( buff );
	}

	void CFBamValueEditObj::setBuff( cfbam::CFBamValueBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfbam::CFBamValuePKey* CFBamValueEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamValueEditObj::setPKey( cfbam::CFBamValuePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamValueEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamValueEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamValueEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamValueEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamValueEditObj::getRequiredScopeId() {
		return( getValueBuff()->getRequiredScopeId() );
	}

	const int64_t* CFBamValueEditObj::getRequiredScopeIdReference() {
		return( getValueBuff()->getRequiredScopeIdReference() );
	}

	const int64_t CFBamValueEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamValueEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamValueEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getValueBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamValueEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getValueBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamValueEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getValueBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamValueEditObj::isOptionalDefSchemaIdNull() {
		return( getValueBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamValueEditObj::getOptionalDefSchemaIdValue() {
		return( getValueBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamValueEditObj::getOptionalDefSchemaIdReference() {
		return( getValueBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamValueEditObj::getRequiredName() {
		return( getValueBuff()->getRequiredName() );
	}

	const std::string* CFBamValueEditObj::getRequiredNameReference() {
		return( getValueBuff()->getRequiredNameReference() );
	}

	void CFBamValueEditObj::setRequiredName( const std::string& value ) {
		if( getValueBuff()->getRequiredName() != value ) {
			getValueEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamValueEditObj::isOptionalShortNameNull() {
		return( getValueBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamValueEditObj::getOptionalShortNameValue() {
		return( getValueBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamValueEditObj::getOptionalShortNameReference() {
		return( getValueBuff()->getOptionalShortNameReference() );
	}

	void CFBamValueEditObj::setOptionalShortNameNull() {
		if( ! getValueBuff()->isOptionalShortNameNull() ) {
			getValueEditBuff()->setOptionalShortNameNull();
		}
	}

	void CFBamValueEditObj::setOptionalShortNameValue( const std::string& value ) {
		if( getValueBuff()->isOptionalShortNameNull() ) {
			getValueEditBuff()->setOptionalShortNameValue( value );
		}
		else if( getValueBuff()->getOptionalShortNameValue() != value ) {
			getValueEditBuff()->setOptionalShortNameValue( value );
		}
	}

	bool CFBamValueEditObj::isOptionalLabelNull() {
		return( getValueBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamValueEditObj::getOptionalLabelValue() {
		return( getValueBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamValueEditObj::getOptionalLabelReference() {
		return( getValueBuff()->getOptionalLabelReference() );
	}

	void CFBamValueEditObj::setOptionalLabelNull() {
		if( ! getValueBuff()->isOptionalLabelNull() ) {
			getValueEditBuff()->setOptionalLabelNull();
		}
	}

	void CFBamValueEditObj::setOptionalLabelValue( const std::string& value ) {
		if( getValueBuff()->isOptionalLabelNull() ) {
			getValueEditBuff()->setOptionalLabelValue( value );
		}
		else if( getValueBuff()->getOptionalLabelValue() != value ) {
			getValueEditBuff()->setOptionalLabelValue( value );
		}
	}

	bool CFBamValueEditObj::isOptionalShortDescriptionNull() {
		return( getValueBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamValueEditObj::getOptionalShortDescriptionValue() {
		return( getValueBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamValueEditObj::getOptionalShortDescriptionReference() {
		return( getValueBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamValueEditObj::setOptionalShortDescriptionNull() {
		if( ! getValueBuff()->isOptionalShortDescriptionNull() ) {
			getValueEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamValueEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getValueBuff()->isOptionalShortDescriptionNull() ) {
			getValueEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getValueBuff()->getOptionalShortDescriptionValue() != value ) {
			getValueEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamValueEditObj::isOptionalDescriptionNull() {
		return( getValueBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamValueEditObj::getOptionalDescriptionValue() {
		return( getValueBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamValueEditObj::getOptionalDescriptionReference() {
		return( getValueBuff()->getOptionalDescriptionReference() );
	}

	void CFBamValueEditObj::setOptionalDescriptionNull() {
		if( ! getValueBuff()->isOptionalDescriptionNull() ) {
			getValueEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamValueEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getValueBuff()->isOptionalDescriptionNull() ) {
			getValueEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getValueBuff()->getOptionalDescriptionValue() != value ) {
			getValueEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	bool CFBamValueEditObj::isOptionalDefaultXmlValueNull() {
		return( getValueBuff()->isOptionalDefaultXmlValueNull() );
	}

	const std::string& CFBamValueEditObj::getOptionalDefaultXmlValueValue() {
		return( getValueBuff()->getOptionalDefaultXmlValueValue() );
	}

	const std::string* CFBamValueEditObj::getOptionalDefaultXmlValueReference() {
		return( getValueBuff()->getOptionalDefaultXmlValueReference() );
	}

	void CFBamValueEditObj::setOptionalDefaultXmlValueNull() {
		if( ! getValueBuff()->isOptionalDefaultXmlValueNull() ) {
			getValueEditBuff()->setOptionalDefaultXmlValueNull();
		}
	}

	void CFBamValueEditObj::setOptionalDefaultXmlValueValue( const std::string& value ) {
		if( getValueBuff()->isOptionalDefaultXmlValueNull() ) {
			getValueEditBuff()->setOptionalDefaultXmlValueValue( value );
		}
		else if( getValueBuff()->getOptionalDefaultXmlValueValue() != value ) {
			getValueEditBuff()->setOptionalDefaultXmlValueValue( value );
		}
	}

	const bool CFBamValueEditObj::getRequiredIsNullable() {
		return( getValueBuff()->getRequiredIsNullable() );
	}

	const bool* CFBamValueEditObj::getRequiredIsNullableReference() {
		return( getValueBuff()->getRequiredIsNullableReference() );
	}

	void CFBamValueEditObj::setRequiredIsNullable( const bool value ) {
		if( getValueBuff()->getRequiredIsNullable() != value ) {
			getValueEditBuff()->setRequiredIsNullable( value );
		}
	}

	bool CFBamValueEditObj::isOptionalGenerateIdNull() {
		return( getValueBuff()->isOptionalGenerateIdNull() );
	}

	const bool CFBamValueEditObj::getOptionalGenerateIdValue() {
		return( getValueBuff()->getOptionalGenerateIdValue() );
	}

	const bool* CFBamValueEditObj::getOptionalGenerateIdReference() {
		return( getValueBuff()->getOptionalGenerateIdReference() );
	}

	void CFBamValueEditObj::setOptionalGenerateIdNull() {
		if( ! getValueBuff()->isOptionalGenerateIdNull() ) {
			getValueEditBuff()->setOptionalGenerateIdNull();
		}
	}

	void CFBamValueEditObj::setOptionalGenerateIdValue( const bool value ) {
		if( getValueBuff()->isOptionalGenerateIdNull() ) {
			getValueEditBuff()->setOptionalGenerateIdValue( value );
		}
		else if( getValueBuff()->getOptionalGenerateIdValue() != value ) {
			getValueEditBuff()->setOptionalGenerateIdValue( value );
		}
	}

	const bool CFBamValueEditObj::getRequiredImplementsPolymorph() {
		return( getValueBuff()->getRequiredImplementsPolymorph() );
	}

	const bool* CFBamValueEditObj::getRequiredImplementsPolymorphReference() {
		return( getValueBuff()->getRequiredImplementsPolymorphReference() );
	}

	void CFBamValueEditObj::setRequiredImplementsPolymorph( const bool value ) {
		if( getValueBuff()->getRequiredImplementsPolymorph() != value ) {
			getValueEditBuff()->setRequiredImplementsPolymorph( value );
		}
	}

	bool CFBamValueEditObj::isOptionalPrevTenantIdNull() {
		return( getValueBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamValueEditObj::getOptionalPrevTenantIdValue() {
		return( getValueBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamValueEditObj::getOptionalPrevTenantIdReference() {
		return( getValueBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamValueEditObj::isOptionalPrevIdNull() {
		return( getValueBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamValueEditObj::getOptionalPrevIdValue() {
		return( getValueBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamValueEditObj::getOptionalPrevIdReference() {
		return( getValueBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamValueEditObj::isOptionalNextTenantIdNull() {
		return( getValueBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamValueEditObj::getOptionalNextTenantIdValue() {
		return( getValueBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamValueEditObj::getOptionalNextTenantIdReference() {
		return( getValueBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamValueEditObj::isOptionalNextIdNull() {
		return( getValueBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamValueEditObj::getOptionalNextIdValue() {
		return( getValueBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamValueEditObj::getOptionalNextIdReference() {
		return( getValueBuff()->getOptionalNextIdReference() );
	}

	cfsec::ICFSecTenantObj* CFBamValueEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsValue()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamValueEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getValueEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamScopeObj* CFBamValueEditObj::getRequiredContainerScope( bool forceRead ) {
		cfbam::ICFBamScopeObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsValue()->getSchema() )->getScopeTableObj()->readScopeByIdIdx( getPKey()->getRequiredTenantId(),
					getValueBuff()->getRequiredScopeId() );
		}
		return( retobj );
	}

	void CFBamValueEditObj::setRequiredContainerScope( cfbam::ICFBamScopeObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getValueEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getValueEditBuff()->setRequiredScopeId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamValueEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getValueBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getValueBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsValue()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getValueBuff()->getOptionalDefSchemaTenantIdValue(),
					getValueBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamValueEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getValueEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getValueEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getValueEditBuff()->setOptionalDefSchemaTenantIdNull();
				getValueEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	std::vector<cfbam::ICFBamTableColObj*> CFBamValueEditObj::getOptionalChildrenRefTableCol( bool forceRead ) {
		std::vector<cfbam::ICFBamTableColObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsValue()->getSchema() )->getTableColTableObj()->readTableColByDataIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamValueEditObj::getOptionalChildrenRefIndexCol( bool forceRead ) {
		std::vector<cfbam::ICFBamIndexColObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsValue()->getSchema() )->getIndexColTableObj()->readIndexColByColIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamValueObj* CFBamValueEditObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = NULL;
		bool anyMissing = false;

			if( getValueBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getValueBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsValue()->getSchema() )->getValueTableObj()->readValueByIdIdx( getValueBuff()->getOptionalPrevTenantIdValue(),
					getValueBuff()->getOptionalPrevIdValue() );
		}
		return( retobj );
	}

	void CFBamValueEditObj::setOptionalLookupPrev( cfbam::ICFBamValueObj* value ) {
			
			if( value != NULL ) {
				getValueEditBuff()->setOptionalPrevTenantIdValue( value->getRequiredTenantId() );
				getValueEditBuff()->setOptionalPrevIdValue( value->getRequiredId() );
			}
			else {
				getValueEditBuff()->setOptionalPrevTenantIdNull();
				getValueEditBuff()->setOptionalPrevIdNull();
			}
		}

	cfbam::ICFBamValueObj* CFBamValueEditObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = NULL;
		bool anyMissing = false;

			if( getValueBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getValueBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsValue()->getSchema() )->getValueTableObj()->readValueByIdIdx( getValueBuff()->getOptionalNextTenantIdValue(),
					getValueBuff()->getOptionalNextIdValue() );
		}
		return( retobj );
	}

	void CFBamValueEditObj::setOptionalLookupNext( cfbam::ICFBamValueObj* value ) {
			
			if( value != NULL ) {
				getValueEditBuff()->setOptionalNextTenantIdValue( value->getRequiredTenantId() );
				getValueEditBuff()->setOptionalNextIdValue( value->getRequiredId() );
			}
			else {
				getValueEditBuff()->setOptionalNextTenantIdNull();
				getValueEditBuff()->setOptionalNextIdNull();
			}
		}

	void CFBamValueEditObj::copyPKeyToBuff() {
		cfbam::CFBamValuePKey* tablePKey = getPKey();
		cfbam::CFBamValueBuff* tableBuff = getValueEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamValueEditObj::copyBuffToPKey() {
		cfbam::CFBamValuePKey* tablePKey = getPKey();
		cfbam::CFBamValueBuff* tableBuff = getValueBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamValueEditObj::copyBuffToOrig() {
		cfbam::CFBamValueBuff* origBuff = getOrigAsValue()->getValueEditBuff();
		cfbam::CFBamValueBuff* myBuff = getValueBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamValueEditObj::copyOrigToBuff() {
		cfbam::CFBamValueBuff* origBuff = getOrigAsValue()->getValueBuff();
		cfbam::CFBamValueBuff* myBuff = getValueEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamValueEditObj::getAffectedIndexes() {
		static const std::string S_ProcName( "getAffectedIndexes" );
		static const std::string S_RequiredContainerScope( "container.getRequiredContanerScope()" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );
		std::vector<cfbam::ICFBamIndexObj*> list;
		cfbam::ICFBamScopeObj* container = getRequiredContainerScope();
		cfbam::ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredContainerScope );
		}
		else if( container->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( container );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredContainerScope, container, S_ICFBamTableObj );
		}
		std::vector<cfbam::ICFBamIndexObj*> myIndexDefs = tableDef->getOptionalComponentsIndex();
		cfbam::ICFBamIndexObj* indexDef;
		cfbam::ICFBamIndexColObj* indexColDef;
		std::vector<cfbam::ICFBamIndexColObj*> myIndexCols;
		for( auto iterMyIndexDefs = myIndexDefs.begin(); iterMyIndexDefs != myIndexDefs.end(); iterMyIndexDefs ++ ) {
			indexDef = *iterMyIndexDefs;
			myIndexCols = indexDef->getOptionalComponentsColumns();
			for( auto iterMyIndexCols = myIndexCols.begin(); iterMyIndexCols != myIndexCols.end(); iterMyIndexCols ++ ) {
				indexColDef = *iterMyIndexCols;
				if( indexColDef->getRequiredLookupColumn() == this ) {
					list.push_back( indexDef );
				}
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamValueEditObj::getAffectedRelations() {
		static const std::string S_ProcName( "getAffectedRelations" );
		static const std::string S_RequiredContainerScope( "RequiredContainerScope" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );
		std::vector<cfbam::ICFBamRelationObj*> list;
		cfbam::ICFBamScopeObj* container = getRequiredContainerScope();
		cfbam::ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredContainerScope );
		}
		else if( container->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( container );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredContainerScope, container, S_ICFBamTableObj );
		}
		std::vector<cfbam::ICFBamRelationObj*> myRelationDefs = tableDef->getOptionalComponentsRelation();
		std::vector<cfbam::ICFBamRelationColObj*> relationCols;
		cfbam::ICFBamRelationObj* relationDef;
		cfbam::ICFBamRelationColObj* relationColDef;
		for( auto iterMyRelationDefs = myRelationDefs.begin(); iterMyRelationDefs != myRelationDefs.end(); iterMyRelationDefs ++ ) {
			relationDef = *iterMyRelationDefs;
			relationCols = relationDef->getOptionalComponentsColumns();
			for( auto iterCols = relationCols.begin(); iterCols != relationCols.end(); iterCols ++ ) {
				relationColDef = *iterCols;
				if( relationColDef->getRequiredLookupFromCol()->getRequiredLookupColumn() == this ) {
					list.push_back( relationDef );
				}
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamValueEditObj::getAffectedUniqueIndexes() {
		static const std::string S_ProcName( "getAffectedUniqueIndexes" );
		static const std::string S_RequiredContainerScope( "RequiredContainerScope" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );
		std::vector<cfbam::ICFBamIndexObj*> affectedIndexes = getAffectedIndexes();
		std::vector<cfbam::ICFBamIndexObj*> list;
		cfbam::ICFBamScopeObj* container = getRequiredContainerScope();
		cfbam::ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredContainerScope );
		}
		else if( container->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( container );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredContainerScope, container, S_ICFBamTableObj );
		}
		std::vector<cfbam::ICFBamIndexObj*> myIndexDefs = affectedIndexes;
		cfbam::ICFBamIndexObj* indexDef;
		for( auto iterIndexDefs = myIndexDefs.begin(); iterIndexDefs != myIndexDefs.end(); iterIndexDefs ++ ) {
			indexDef = *iterIndexDefs;
			if( indexDef->getRequiredIsUnique() ) {
				list.push_back( indexDef );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamValueEditObj::getColumnInMemberRelations() {
		static const std::string S_ProcName( "getColumnInMemberRelations" );
		static const std::string S_RequiredContainerScope( "RequiredContainerScope" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );
		static const std::string S_RequiredObjScope( "RequiredObjScope" );
		cfbam::ICFBamTableObj* tableDef = NULL;
		cfbam::ICFBamScopeObj* scopeDef = dynamic_cast<cfbam::ICFBamScopeObj*>( getObjScope() );
		if( scopeDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredObjScope );
		}
		else if( scopeDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( scopeDef );
			std::vector<cfbam::ICFBamRelationObj*> list;
			std::vector<cfbam::ICFBamRelationObj*> relations = tableDef->getOptionalComponentsRelation();
			cfbam::ICFBamRelationColObj* relationCol;
			std::vector<cfbam::ICFBamRelationColObj*> relationColumns;
			cfbam::ICFBamRelationObj* relation;
			cfbam::ICFBamSchema::RelationTypeEnum relType;
			for( auto iterRelations = relations.begin(); iterRelations != relations.end(); iterRelations ++ ) {
				relation = *iterRelations;
				relType = relation->getRequiredRelationType();
				if( ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Lookup )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Container )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Components )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Parent )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Children )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) )
				{
					relationColumns = relation->getOptionalComponentsColumns();
					for( auto iterCols = relationColumns.begin(); iterCols != relationColumns.end(); iterCols ++ ) {
						relationCol = *iterCols;
						if( this == relationCol->getRequiredLookupFromCol()->getRequiredLookupColumn() ) {
							list.push_back( relation );
							break;
						}
					}
				}
			}
			return( list );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredObjScope, scopeDef, S_ICFBamTableObj );
		}
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamValueEditObj::getColumnInComponentsRelations() {
		static const std::string S_ProcName( "getColumnInComponentsRelation" );
		static const std::string S_RequiredContainerScope( "RequiredContainerScope" );
		static const std::string S_ICFBamTableObj( "ICFBamTableObj" );

		cfbam::ICFBamScopeObj* container = getRequiredContainerScope();
		cfbam::ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RequiredContainerScope );
		}
		else if( container->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( container );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_RequiredContainerScope, container, S_ICFBamTableObj );
		}

		cfbam::ICFBamRelationColObj* relationCol;
		cfbam::ICFBamRelationObj* relation;
		std::vector<cfbam::ICFBamRelationColObj*> relationColumns;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> relations = tableDef->getOptionalComponentsRelation();

		for( auto iterRelations = relations.begin(); iterRelations != relations.end(); iterRelations ++ ) {
			relation = *iterRelations;
			if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Components ) {
				relationColumns = relation->getOptionalComponentsColumns();
				for( auto iterCols = relationColumns.begin(); iterCols != relationColumns.end(); iterCols ++ ) {
					relationCol = *iterCols;
					if( this == relationCol->getRequiredLookupFromCol()->getRequiredLookupColumn() ) {
						list.push_back( relation );
						break;
					}
				}
			}
		}

		return( list );
	}

	bool CFBamValueEditObj::getGenerateId() {
		bool ret;
		if( ! isOptionalGenerateIdNull() ) {
			ret = getOptionalGenerateIdValue();
		}
		else {
			ret = false;
		}
		return( ret );
	}

}
