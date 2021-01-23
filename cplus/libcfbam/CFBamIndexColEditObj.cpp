// Description: C++18 edit object instance implementation for CFBam IndexCol.

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
#include <cfbamobj/CFBamIndexColObj.hpp>
#include <cfbamobj/CFBamIndexColEditObj.hpp>


namespace cfbam {

	const std::string CFBamIndexColEditObj::CLASS_NAME( "CFBamIndexColEditObj" );

	CFBamIndexColEditObj::CFBamIndexColEditObj( cfbam::ICFBamIndexColObj* argOrig )
	: ICFBamIndexColEditObj()
	{
		static const std::string S_ProcName( "CFBamIndexColEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfbam::CFBamIndexColBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( origBuff->clone() );
	}

	CFBamIndexColEditObj::~CFBamIndexColEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamIndexColEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamIndexColEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getIndexColBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamIndexColEditObj::getCreatedAt() {
		return( getIndexColBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamIndexColEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getIndexColBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamIndexColEditObj::getUpdatedAt() {
		return( getIndexColBuff()->getUpdatedAt() );
	}

	void CFBamIndexColEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getIndexColEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamIndexColEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getIndexColEditBuff()->setCreatedAt( value );
	}

	void CFBamIndexColEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getIndexColEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamIndexColEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getIndexColEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamIndexColEditObj::getClassCode() const {
		return( cfbam::CFBamIndexColBuff::CLASS_CODE );
	}

	bool CFBamIndexColEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamIndexColEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamIndexColEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_IndexId( "IndexId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_ColumnId( "ColumnId" );
		static const std::string S_IsAscending( "IsAscending" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamIndexColEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamIndexColEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamIndexColEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamIndexColEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamIndexColEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamIndexColEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_IndexId, CFBamIndexColEditObj::getRequiredIndexId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamIndexColEditObj::getRequiredId() ) );
		if( ! CFBamIndexColEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamIndexColEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamIndexColEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamIndexColEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamIndexColEditObj::getRequiredName() ) );
		if( ! CFBamIndexColEditObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamIndexColEditObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamIndexColEditObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamIndexColEditObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamIndexColEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamIndexColEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamIndexColEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamIndexColEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ColumnId, CFBamIndexColEditObj::getRequiredColumnId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsAscending, CFBamIndexColEditObj::getRequiredIsAscending() ) );
		if( ! CFBamIndexColEditObj::isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, CFBamIndexColEditObj::getOptionalPrevTenantIdValue() ) );
		}
		if( ! CFBamIndexColEditObj::isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, CFBamIndexColEditObj::getOptionalPrevIdValue() ) );
		}
		if( ! CFBamIndexColEditObj::isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, CFBamIndexColEditObj::getOptionalNextTenantIdValue() ) );
		}
		if( ! CFBamIndexColEditObj::isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, CFBamIndexColEditObj::getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamIndexColEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamIndexColEditObj::setRequiredRevision( int32_t value ) {
		getIndexColEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamIndexColEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamIndexColEditObj::getGenDefName() {
		return( cfbam::CFBamIndexColBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamIndexColEditObj::getScope() {
		cfbam::ICFBamIndexObj* scope = getRequiredContainerIndex();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamIndexColEditObj::getObjScope() {
		cfbam::ICFBamIndexObj* scope = getRequiredContainerIndex();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamIndexColEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamIndexColEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamIndexColEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamIndexColEditObj::getObjQualifiedName() {
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

	std::string CFBamIndexColEditObj::getObjFullName() {
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

	cfbam::ICFBamIndexColObj* CFBamIndexColEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamIndexColObj* retobj = getSchema()->getIndexColTableObj()->realizeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColEditObj::read( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retval = getOrigAsIndexCol()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColEditObj::moveUp() {
		static const std::string S_ProcName( "moveUp" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColEditObj::moveDown() {
		static const std::string S_ProcName( "moveDown" );
		static const std::string S_Message( "You cannot move an edited object in the chain" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColEditObj::create() {
		cfbam::ICFBamIndexColObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndexCol()->getSchema() )->getIndexColTableObj()->createIndexCol( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamIndexColEditObj* CFBamIndexColEditObj::update() {
		getSchema()->getIndexColTableObj()->updateIndexCol( this );
		return( NULL );
	}

	cfbam::ICFBamIndexColEditObj* CFBamIndexColEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getIndexColTableObj()->deleteIndexCol( this );
		return( NULL );
	}

	cfbam::ICFBamIndexColTableObj* CFBamIndexColEditObj::getIndexColTable() {
		return( orig->getSchema()->getIndexColTableObj() );
	}

	cfbam::ICFBamIndexColEditObj* CFBamIndexColEditObj::getEdit() {
		return( this );
	}

	cfbam::ICFBamIndexColEditObj* CFBamIndexColEditObj::getIndexColEdit() {
		return( (cfbam::ICFBamIndexColEditObj*)this );
	}

	cfbam::ICFBamIndexColEditObj* CFBamIndexColEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamIndexColEditObj::endEdit() {
		orig->endEdit();
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColEditObj::getOrig() {
		return( orig );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColEditObj::getOrigAsIndexCol() {
		return( dynamic_cast<cfbam::ICFBamIndexColObj*>( orig ) );
	}

	cfbam::ICFBamSchemaObj* CFBamIndexColEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfbam::CFBamIndexColBuff* CFBamIndexColEditObj::getBuff() {
		return( buff );
	}

	void CFBamIndexColEditObj::setBuff( cfbam::CFBamIndexColBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfbam::CFBamIndexColPKey* CFBamIndexColEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamIndexColEditObj::setPKey( cfbam::CFBamIndexColPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamIndexColEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamIndexColEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamIndexColEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamIndexColEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamIndexColEditObj::getRequiredIndexId() {
		return( getIndexColBuff()->getRequiredIndexId() );
	}

	const int64_t* CFBamIndexColEditObj::getRequiredIndexIdReference() {
		return( getIndexColBuff()->getRequiredIndexIdReference() );
	}

	const int64_t CFBamIndexColEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamIndexColEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamIndexColEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getIndexColBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamIndexColEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getIndexColBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamIndexColEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getIndexColBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamIndexColEditObj::isOptionalDefSchemaIdNull() {
		return( getIndexColBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamIndexColEditObj::getOptionalDefSchemaIdValue() {
		return( getIndexColBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamIndexColEditObj::getOptionalDefSchemaIdReference() {
		return( getIndexColBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamIndexColEditObj::getRequiredName() {
		return( getIndexColBuff()->getRequiredName() );
	}

	const std::string* CFBamIndexColEditObj::getRequiredNameReference() {
		return( getIndexColBuff()->getRequiredNameReference() );
	}

	void CFBamIndexColEditObj::setRequiredName( const std::string& value ) {
		if( getIndexColBuff()->getRequiredName() != value ) {
			getIndexColEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamIndexColEditObj::isOptionalShortNameNull() {
		return( getIndexColBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamIndexColEditObj::getOptionalShortNameValue() {
		return( getIndexColBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamIndexColEditObj::getOptionalShortNameReference() {
		return( getIndexColBuff()->getOptionalShortNameReference() );
	}

	void CFBamIndexColEditObj::setOptionalShortNameNull() {
		if( ! getIndexColBuff()->isOptionalShortNameNull() ) {
			getIndexColEditBuff()->setOptionalShortNameNull();
		}
	}

	void CFBamIndexColEditObj::setOptionalShortNameValue( const std::string& value ) {
		if( getIndexColBuff()->isOptionalShortNameNull() ) {
			getIndexColEditBuff()->setOptionalShortNameValue( value );
		}
		else if( getIndexColBuff()->getOptionalShortNameValue() != value ) {
			getIndexColEditBuff()->setOptionalShortNameValue( value );
		}
	}

	bool CFBamIndexColEditObj::isOptionalLabelNull() {
		return( getIndexColBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamIndexColEditObj::getOptionalLabelValue() {
		return( getIndexColBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamIndexColEditObj::getOptionalLabelReference() {
		return( getIndexColBuff()->getOptionalLabelReference() );
	}

	void CFBamIndexColEditObj::setOptionalLabelNull() {
		if( ! getIndexColBuff()->isOptionalLabelNull() ) {
			getIndexColEditBuff()->setOptionalLabelNull();
		}
	}

	void CFBamIndexColEditObj::setOptionalLabelValue( const std::string& value ) {
		if( getIndexColBuff()->isOptionalLabelNull() ) {
			getIndexColEditBuff()->setOptionalLabelValue( value );
		}
		else if( getIndexColBuff()->getOptionalLabelValue() != value ) {
			getIndexColEditBuff()->setOptionalLabelValue( value );
		}
	}

	bool CFBamIndexColEditObj::isOptionalShortDescriptionNull() {
		return( getIndexColBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamIndexColEditObj::getOptionalShortDescriptionValue() {
		return( getIndexColBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamIndexColEditObj::getOptionalShortDescriptionReference() {
		return( getIndexColBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamIndexColEditObj::setOptionalShortDescriptionNull() {
		if( ! getIndexColBuff()->isOptionalShortDescriptionNull() ) {
			getIndexColEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamIndexColEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getIndexColBuff()->isOptionalShortDescriptionNull() ) {
			getIndexColEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getIndexColBuff()->getOptionalShortDescriptionValue() != value ) {
			getIndexColEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamIndexColEditObj::isOptionalDescriptionNull() {
		return( getIndexColBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamIndexColEditObj::getOptionalDescriptionValue() {
		return( getIndexColBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamIndexColEditObj::getOptionalDescriptionReference() {
		return( getIndexColBuff()->getOptionalDescriptionReference() );
	}

	void CFBamIndexColEditObj::setOptionalDescriptionNull() {
		if( ! getIndexColBuff()->isOptionalDescriptionNull() ) {
			getIndexColEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamIndexColEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getIndexColBuff()->isOptionalDescriptionNull() ) {
			getIndexColEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getIndexColBuff()->getOptionalDescriptionValue() != value ) {
			getIndexColEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	const int64_t CFBamIndexColEditObj::getRequiredColumnId() {
		return( getIndexColBuff()->getRequiredColumnId() );
	}

	const int64_t* CFBamIndexColEditObj::getRequiredColumnIdReference() {
		return( getIndexColBuff()->getRequiredColumnIdReference() );
	}

	const bool CFBamIndexColEditObj::getRequiredIsAscending() {
		return( getIndexColBuff()->getRequiredIsAscending() );
	}

	const bool* CFBamIndexColEditObj::getRequiredIsAscendingReference() {
		return( getIndexColBuff()->getRequiredIsAscendingReference() );
	}

	void CFBamIndexColEditObj::setRequiredIsAscending( const bool value ) {
		if( getIndexColBuff()->getRequiredIsAscending() != value ) {
			getIndexColEditBuff()->setRequiredIsAscending( value );
		}
	}

	bool CFBamIndexColEditObj::isOptionalPrevTenantIdNull() {
		return( getIndexColBuff()->isOptionalPrevTenantIdNull() );
	}

	const int64_t CFBamIndexColEditObj::getOptionalPrevTenantIdValue() {
		return( getIndexColBuff()->getOptionalPrevTenantIdValue() );
	}

	const int64_t* CFBamIndexColEditObj::getOptionalPrevTenantIdReference() {
		return( getIndexColBuff()->getOptionalPrevTenantIdReference() );
	}

	bool CFBamIndexColEditObj::isOptionalPrevIdNull() {
		return( getIndexColBuff()->isOptionalPrevIdNull() );
	}

	const int64_t CFBamIndexColEditObj::getOptionalPrevIdValue() {
		return( getIndexColBuff()->getOptionalPrevIdValue() );
	}

	const int64_t* CFBamIndexColEditObj::getOptionalPrevIdReference() {
		return( getIndexColBuff()->getOptionalPrevIdReference() );
	}

	bool CFBamIndexColEditObj::isOptionalNextTenantIdNull() {
		return( getIndexColBuff()->isOptionalNextTenantIdNull() );
	}

	const int64_t CFBamIndexColEditObj::getOptionalNextTenantIdValue() {
		return( getIndexColBuff()->getOptionalNextTenantIdValue() );
	}

	const int64_t* CFBamIndexColEditObj::getOptionalNextTenantIdReference() {
		return( getIndexColBuff()->getOptionalNextTenantIdReference() );
	}

	bool CFBamIndexColEditObj::isOptionalNextIdNull() {
		return( getIndexColBuff()->isOptionalNextIdNull() );
	}

	const int64_t CFBamIndexColEditObj::getOptionalNextIdValue() {
		return( getIndexColBuff()->getOptionalNextIdValue() );
	}

	const int64_t* CFBamIndexColEditObj::getOptionalNextIdReference() {
		return( getIndexColBuff()->getOptionalNextIdReference() );
	}

	cfsec::ICFSecTenantObj* CFBamIndexColEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndexCol()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamIndexColEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getIndexColEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamIndexObj* CFBamIndexColEditObj::getRequiredContainerIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndexCol()->getSchema() )->getIndexTableObj()->readIndexByIdIdx( getPKey()->getRequiredTenantId(),
					getIndexColBuff()->getRequiredIndexId() );
		}
		return( retobj );
	}

	void CFBamIndexColEditObj::setRequiredContainerIndex( cfbam::ICFBamIndexObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getIndexColEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getIndexColEditBuff()->setRequiredIndexId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamIndexColEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getIndexColBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getIndexColBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndexCol()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getIndexColBuff()->getOptionalDefSchemaTenantIdValue(),
					getIndexColBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamIndexColEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getIndexColEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getIndexColEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getIndexColEditBuff()->setOptionalDefSchemaTenantIdNull();
				getIndexColEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamIndexColEditObj::getOptionalChildrenRefRelFromCol( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationColObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndexCol()->getSchema() )->getRelationColTableObj()->readRelationColByFromColIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamIndexColEditObj::getOptionalChildrenRefRelToCol( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationColObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndexCol()->getSchema() )->getRelationColTableObj()->readRelationColByToColIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColEditObj::getOptionalLookupPrev( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retobj = NULL;
		bool anyMissing = false;

			if( getIndexColBuff()->isOptionalPrevTenantIdNull() ) {
				anyMissing = true;
			}
			if( getIndexColBuff()->isOptionalPrevIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndexCol()->getSchema() )->getIndexColTableObj()->readIndexColByIdIdx( getIndexColBuff()->getOptionalPrevTenantIdValue(),
					getIndexColBuff()->getOptionalPrevIdValue() );
		}
		return( retobj );
	}

	void CFBamIndexColEditObj::setOptionalLookupPrev( cfbam::ICFBamIndexColObj* value ) {
			
			if( value != NULL ) {
				getIndexColEditBuff()->setOptionalPrevTenantIdValue( value->getRequiredTenantId() );
				getIndexColEditBuff()->setOptionalPrevIdValue( value->getRequiredId() );
			}
			else {
				getIndexColEditBuff()->setOptionalPrevTenantIdNull();
				getIndexColEditBuff()->setOptionalPrevIdNull();
			}
		}

	cfbam::ICFBamIndexColObj* CFBamIndexColEditObj::getOptionalLookupNext( bool forceRead ) {
		cfbam::ICFBamIndexColObj* retobj = NULL;
		bool anyMissing = false;

			if( getIndexColBuff()->isOptionalNextTenantIdNull() ) {
				anyMissing = true;
			}
			if( getIndexColBuff()->isOptionalNextIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndexCol()->getSchema() )->getIndexColTableObj()->readIndexColByIdIdx( getIndexColBuff()->getOptionalNextTenantIdValue(),
					getIndexColBuff()->getOptionalNextIdValue() );
		}
		return( retobj );
	}

	void CFBamIndexColEditObj::setOptionalLookupNext( cfbam::ICFBamIndexColObj* value ) {
			
			if( value != NULL ) {
				getIndexColEditBuff()->setOptionalNextTenantIdValue( value->getRequiredTenantId() );
				getIndexColEditBuff()->setOptionalNextIdValue( value->getRequiredId() );
			}
			else {
				getIndexColEditBuff()->setOptionalNextTenantIdNull();
				getIndexColEditBuff()->setOptionalNextIdNull();
			}
		}

	cfbam::ICFBamValueObj* CFBamIndexColEditObj::getRequiredLookupColumn( bool forceRead ) {
		cfbam::ICFBamValueObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsIndexCol()->getSchema() )->getValueTableObj()->readValueByIdIdx( getPKey()->getRequiredTenantId(),
					getIndexColBuff()->getRequiredColumnId() );
		}
		return( retobj );
	}

	void CFBamIndexColEditObj::setRequiredLookupColumn( cfbam::ICFBamValueObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getIndexColEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getIndexColEditBuff()->setRequiredColumnId( value->getRequiredId() );
			}
			else {
			}
		}

	void CFBamIndexColEditObj::copyPKeyToBuff() {
		cfbam::CFBamIndexColPKey* tablePKey = getPKey();
		cfbam::CFBamIndexColBuff* tableBuff = getIndexColEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamIndexColEditObj::copyBuffToPKey() {
		cfbam::CFBamIndexColPKey* tablePKey = getPKey();
		cfbam::CFBamIndexColBuff* tableBuff = getIndexColBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamIndexColEditObj::copyBuffToOrig() {
		cfbam::CFBamIndexColBuff* origBuff = getOrigAsIndexCol()->getIndexColEditBuff();
		cfbam::CFBamIndexColBuff* myBuff = getIndexColBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamIndexColEditObj::copyOrigToBuff() {
		cfbam::CFBamIndexColBuff* origBuff = getOrigAsIndexCol()->getIndexColBuff();
		cfbam::CFBamIndexColBuff* myBuff = getIndexColEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
