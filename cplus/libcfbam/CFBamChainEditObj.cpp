// Description: C++18 edit object instance implementation for CFBam Chain.

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
#include <cfbamobj/CFBamChainObj.hpp>
#include <cfbamobj/CFBamChainEditObj.hpp>


namespace cfbam {

	const std::string CFBamChainEditObj::CLASS_NAME( "CFBamChainEditObj" );

	CFBamChainEditObj::CFBamChainEditObj( cfbam::ICFBamChainObj* argOrig )
	: ICFBamChainEditObj()
	{
		static const std::string S_ProcName( "CFBamChainEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfbam::CFBamChainBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfbam::CFBamChainBuff*>( origBuff->clone() );
	}

	CFBamChainEditObj::~CFBamChainEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamChainEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamChainEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getChainBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamChainEditObj::getCreatedAt() {
		return( getChainBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamChainEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getChainBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamChainEditObj::getUpdatedAt() {
		return( getChainBuff()->getUpdatedAt() );
	}

	void CFBamChainEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getChainEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamChainEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getChainEditBuff()->setCreatedAt( value );
	}

	void CFBamChainEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getChainEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamChainEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getChainEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamChainEditObj::getClassCode() const {
		return( cfbam::CFBamChainBuff::CLASS_CODE );
	}

	bool CFBamChainEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamChainBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamChainEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamChainEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_PrevRelationTenantId( "PrevRelationTenantId" );
		static const std::string S_PrevRelationId( "PrevRelationId" );
		static const std::string S_NextRelationTenantId( "NextRelationTenantId" );
		static const std::string S_NextRelationId( "NextRelationId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamChainEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamChainEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamChainEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamChainEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamChainEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamChainEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamChainEditObj::getRequiredId() ) );
		if( ! CFBamChainEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamChainEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamChainEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamChainEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamChainEditObj::getRequiredName() ) );
		if( ! CFBamChainEditObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamChainEditObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamChainEditObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamChainEditObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamChainEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamChainEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamChainEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamChainEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, CFBamChainEditObj::getRequiredTableId() ) );
		if( ! CFBamChainEditObj::isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, CFBamChainEditObj::getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevRelationTenantId, CFBamChainEditObj::getRequiredPrevRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevRelationId, CFBamChainEditObj::getRequiredPrevRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextRelationTenantId, CFBamChainEditObj::getRequiredNextRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextRelationId, CFBamChainEditObj::getRequiredNextRelationId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamChainEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamChainEditObj::setRequiredRevision( int32_t value ) {
		getChainEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamChainEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamChainEditObj::getGenDefName() {
		return( cfbam::CFBamChainBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamChainEditObj::getScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamChainEditObj::getObjScope() {
		cfbam::ICFBamTableObj* scope = getRequiredContainerTable();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamChainEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamChainEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamChainEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamChainEditObj::getObjQualifiedName() {
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

	std::string CFBamChainEditObj::getObjFullName() {
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

	cfbam::ICFBamChainObj* CFBamChainEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamChainObj* retobj = getSchema()->getChainTableObj()->realizeChain( dynamic_cast<cfbam::ICFBamChainObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamChainObj* CFBamChainEditObj::read( bool forceRead ) {
		cfbam::ICFBamChainObj* retval = getOrigAsChain()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfbam::ICFBamChainObj* CFBamChainEditObj::create() {
		cfbam::ICFBamChainObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsChain()->getSchema() )->getChainTableObj()->createChain( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamChainEditObj* CFBamChainEditObj::update() {
		getSchema()->getChainTableObj()->updateChain( this );
		return( NULL );
	}

	cfbam::ICFBamChainEditObj* CFBamChainEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getChainTableObj()->deleteChain( this );
		return( NULL );
	}

	cfbam::ICFBamChainTableObj* CFBamChainEditObj::getChainTable() {
		return( orig->getSchema()->getChainTableObj() );
	}

	cfbam::ICFBamChainEditObj* CFBamChainEditObj::getEdit() {
		return( this );
	}

	cfbam::ICFBamChainEditObj* CFBamChainEditObj::getChainEdit() {
		return( (cfbam::ICFBamChainEditObj*)this );
	}

	cfbam::ICFBamChainEditObj* CFBamChainEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamChainEditObj::endEdit() {
		orig->endEdit();
	}

	cfbam::ICFBamChainObj* CFBamChainEditObj::getOrig() {
		return( orig );
	}

	cfbam::ICFBamChainObj* CFBamChainEditObj::getOrigAsChain() {
		return( dynamic_cast<cfbam::ICFBamChainObj*>( orig ) );
	}

	cfbam::ICFBamSchemaObj* CFBamChainEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfbam::CFBamChainBuff* CFBamChainEditObj::getBuff() {
		return( buff );
	}

	void CFBamChainEditObj::setBuff( cfbam::CFBamChainBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfbam::CFBamChainPKey* CFBamChainEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamChainEditObj::setPKey( cfbam::CFBamChainPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamChainEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamChainEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFBamChainEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFBamChainEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFBamChainEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFBamChainEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	bool CFBamChainEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getChainBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamChainEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getChainBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamChainEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getChainBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamChainEditObj::isOptionalDefSchemaIdNull() {
		return( getChainBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamChainEditObj::getOptionalDefSchemaIdValue() {
		return( getChainBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamChainEditObj::getOptionalDefSchemaIdReference() {
		return( getChainBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamChainEditObj::getRequiredName() {
		return( getChainBuff()->getRequiredName() );
	}

	const std::string* CFBamChainEditObj::getRequiredNameReference() {
		return( getChainBuff()->getRequiredNameReference() );
	}

	void CFBamChainEditObj::setRequiredName( const std::string& value ) {
		if( getChainBuff()->getRequiredName() != value ) {
			getChainEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamChainEditObj::isOptionalShortNameNull() {
		return( getChainBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamChainEditObj::getOptionalShortNameValue() {
		return( getChainBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamChainEditObj::getOptionalShortNameReference() {
		return( getChainBuff()->getOptionalShortNameReference() );
	}

	void CFBamChainEditObj::setOptionalShortNameNull() {
		if( ! getChainBuff()->isOptionalShortNameNull() ) {
			getChainEditBuff()->setOptionalShortNameNull();
		}
	}

	void CFBamChainEditObj::setOptionalShortNameValue( const std::string& value ) {
		if( getChainBuff()->isOptionalShortNameNull() ) {
			getChainEditBuff()->setOptionalShortNameValue( value );
		}
		else if( getChainBuff()->getOptionalShortNameValue() != value ) {
			getChainEditBuff()->setOptionalShortNameValue( value );
		}
	}

	bool CFBamChainEditObj::isOptionalLabelNull() {
		return( getChainBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamChainEditObj::getOptionalLabelValue() {
		return( getChainBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamChainEditObj::getOptionalLabelReference() {
		return( getChainBuff()->getOptionalLabelReference() );
	}

	void CFBamChainEditObj::setOptionalLabelNull() {
		if( ! getChainBuff()->isOptionalLabelNull() ) {
			getChainEditBuff()->setOptionalLabelNull();
		}
	}

	void CFBamChainEditObj::setOptionalLabelValue( const std::string& value ) {
		if( getChainBuff()->isOptionalLabelNull() ) {
			getChainEditBuff()->setOptionalLabelValue( value );
		}
		else if( getChainBuff()->getOptionalLabelValue() != value ) {
			getChainEditBuff()->setOptionalLabelValue( value );
		}
	}

	bool CFBamChainEditObj::isOptionalShortDescriptionNull() {
		return( getChainBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamChainEditObj::getOptionalShortDescriptionValue() {
		return( getChainBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamChainEditObj::getOptionalShortDescriptionReference() {
		return( getChainBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamChainEditObj::setOptionalShortDescriptionNull() {
		if( ! getChainBuff()->isOptionalShortDescriptionNull() ) {
			getChainEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamChainEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getChainBuff()->isOptionalShortDescriptionNull() ) {
			getChainEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getChainBuff()->getOptionalShortDescriptionValue() != value ) {
			getChainEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamChainEditObj::isOptionalDescriptionNull() {
		return( getChainBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamChainEditObj::getOptionalDescriptionValue() {
		return( getChainBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamChainEditObj::getOptionalDescriptionReference() {
		return( getChainBuff()->getOptionalDescriptionReference() );
	}

	void CFBamChainEditObj::setOptionalDescriptionNull() {
		if( ! getChainBuff()->isOptionalDescriptionNull() ) {
			getChainEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamChainEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getChainBuff()->isOptionalDescriptionNull() ) {
			getChainEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getChainBuff()->getOptionalDescriptionValue() != value ) {
			getChainEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	const int64_t CFBamChainEditObj::getRequiredTableId() {
		return( getChainBuff()->getRequiredTableId() );
	}

	const int64_t* CFBamChainEditObj::getRequiredTableIdReference() {
		return( getChainBuff()->getRequiredTableIdReference() );
	}

	bool CFBamChainEditObj::isOptionalSuffixNull() {
		return( getChainBuff()->isOptionalSuffixNull() );
	}

	const std::string& CFBamChainEditObj::getOptionalSuffixValue() {
		return( getChainBuff()->getOptionalSuffixValue() );
	}

	const std::string* CFBamChainEditObj::getOptionalSuffixReference() {
		return( getChainBuff()->getOptionalSuffixReference() );
	}

	void CFBamChainEditObj::setOptionalSuffixNull() {
		if( ! getChainBuff()->isOptionalSuffixNull() ) {
			getChainEditBuff()->setOptionalSuffixNull();
		}
	}

	void CFBamChainEditObj::setOptionalSuffixValue( const std::string& value ) {
		if( getChainBuff()->isOptionalSuffixNull() ) {
			getChainEditBuff()->setOptionalSuffixValue( value );
		}
		else if( getChainBuff()->getOptionalSuffixValue() != value ) {
			getChainEditBuff()->setOptionalSuffixValue( value );
		}
	}

	const int64_t CFBamChainEditObj::getRequiredPrevRelationTenantId() {
		return( getChainBuff()->getRequiredPrevRelationTenantId() );
	}

	const int64_t* CFBamChainEditObj::getRequiredPrevRelationTenantIdReference() {
		return( getChainBuff()->getRequiredPrevRelationTenantIdReference() );
	}

	const int64_t CFBamChainEditObj::getRequiredPrevRelationId() {
		return( getChainBuff()->getRequiredPrevRelationId() );
	}

	const int64_t* CFBamChainEditObj::getRequiredPrevRelationIdReference() {
		return( getChainBuff()->getRequiredPrevRelationIdReference() );
	}

	const int64_t CFBamChainEditObj::getRequiredNextRelationTenantId() {
		return( getChainBuff()->getRequiredNextRelationTenantId() );
	}

	const int64_t* CFBamChainEditObj::getRequiredNextRelationTenantIdReference() {
		return( getChainBuff()->getRequiredNextRelationTenantIdReference() );
	}

	const int64_t CFBamChainEditObj::getRequiredNextRelationId() {
		return( getChainBuff()->getRequiredNextRelationId() );
	}

	const int64_t* CFBamChainEditObj::getRequiredNextRelationIdReference() {
		return( getChainBuff()->getRequiredNextRelationIdReference() );
	}

	cfsec::ICFSecTenantObj* CFBamChainEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsChain()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamChainEditObj::setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getChainEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamTableObj* CFBamChainEditObj::getRequiredContainerTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsChain()->getSchema() )->getTableTableObj()->readTableByIdIdx( getPKey()->getRequiredTenantId(),
					getChainBuff()->getRequiredTableId() );
		}
		return( retobj );
	}

	void CFBamChainEditObj::setRequiredContainerTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getChainEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getChainEditBuff()->setRequiredTableId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamChainEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getChainBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getChainBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsChain()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getChainBuff()->getOptionalDefSchemaTenantIdValue(),
					getChainBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamChainEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getChainEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getChainEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getChainEditBuff()->setOptionalDefSchemaTenantIdNull();
				getChainEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	cfbam::ICFBamRelationObj* CFBamChainEditObj::getRequiredLookupPrevRel( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsChain()->getSchema() )->getRelationTableObj()->readRelationByIdIdx( getChainBuff()->getRequiredPrevRelationTenantId(),
					getChainBuff()->getRequiredPrevRelationId() );
		}
		return( retobj );
	}

	void CFBamChainEditObj::setRequiredLookupPrevRel( cfbam::ICFBamRelationObj* value ) {
			
			if( value != NULL ) {
				getChainEditBuff()->setRequiredPrevRelationTenantId( value->getRequiredTenantId() );
				getChainEditBuff()->setRequiredPrevRelationId( value->getRequiredId() );
			}
			else {
			}
		}

	cfbam::ICFBamRelationObj* CFBamChainEditObj::getRequiredLookupNextRel( bool forceRead ) {
		cfbam::ICFBamRelationObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsChain()->getSchema() )->getRelationTableObj()->readRelationByIdIdx( getChainBuff()->getRequiredNextRelationTenantId(),
					getChainBuff()->getRequiredNextRelationId() );
		}
		return( retobj );
	}

	void CFBamChainEditObj::setRequiredLookupNextRel( cfbam::ICFBamRelationObj* value ) {
			
			if( value != NULL ) {
				getChainEditBuff()->setRequiredNextRelationTenantId( value->getRequiredTenantId() );
				getChainEditBuff()->setRequiredNextRelationId( value->getRequiredId() );
			}
			else {
			}
		}

	void CFBamChainEditObj::copyPKeyToBuff() {
		cfbam::CFBamChainPKey* tablePKey = getPKey();
		cfbam::CFBamChainBuff* tableBuff = getChainEditBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFBamChainEditObj::copyBuffToPKey() {
		cfbam::CFBamChainPKey* tablePKey = getPKey();
		cfbam::CFBamChainBuff* tableBuff = getChainBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFBamChainEditObj::copyBuffToOrig() {
		cfbam::CFBamChainBuff* origBuff = getOrigAsChain()->getChainEditBuff();
		cfbam::CFBamChainBuff* myBuff = getChainBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamChainEditObj::copyOrigToBuff() {
		cfbam::CFBamChainBuff* origBuff = getOrigAsChain()->getChainBuff();
		cfbam::CFBamChainBuff* myBuff = getChainEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	cfbam::ICFBamSubProjectObj* CFBamChainEditObj::getProject() {
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamSubProjectObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamTopDomainObj* CFBamChainEditObj::getCompany() {
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntTopDomainBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamTopDomainObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamSchemaDefObj* CFBamChainEditObj::getSchemaDef() {
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamMinorVersionObj* CFBamChainEditObj::getVersion() {
		for( cflib::ICFLibAnyObj* curDef = this; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTopDomainBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	std::string CFBamChainEditObj::getVersionStringForVersion( cflib::ICFLibAnyObj* value ) {
		std::string ret;
		if( value->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMinorVersionObj*>( value )->getRequiredName();
		}
		else if( value->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
			ret = dynamic_cast<cfbam::ICFBamMajorVersionObj*>( value )->getRequiredName();
		}
		return( ret );
	}

	std::string CFBamChainEditObj::getVersionString() {
		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* curDef = getVersion();
		std::vector<std::string> invertedNodeNames;
		while( curDef != NULL ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMajorVersionObj*>( curDef ) ) );
			}
			scopeDef = curDef->getObjScope();
			if( scopeDef == NULL ) {
				curDef = NULL;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else {
				curDef = NULL;
			}
		}
		std::string ret;
		if( ! invertedNodeNames.empty() ) {
			ret = invertedNodeNames.back();
			invertedNodeNames.pop_back();
			while( ! invertedNodeNames.empty() ) {
				ret.append( "-" );
				ret.append( invertedNodeNames.back() );
				invertedNodeNames.pop_back();
			}
		}
		return( ret );
	}

	std::string CFBamChainEditObj::getPackedVersionString() {
		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* curDef = getVersion();
		std::vector<std::string> invertedNodeNames;
		while( curDef != NULL ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMinorVersionObj*>( curDef ) ) );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				invertedNodeNames.push_back( getVersionStringForVersion( dynamic_cast<cfbam::ICFBamMajorVersionObj*>( curDef ) ) );
			}
			scopeDef = curDef->getObjScope();
			if( scopeDef == NULL ) {
				curDef = NULL;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				curDef = scopeDef;
			}
			else {
				curDef = NULL;
			}
		}
		std::string ret;
		if( ! invertedNodeNames.empty() ) {
			ret = invertedNodeNames.back();
			invertedNodeNames.pop_back();
			while( ! invertedNodeNames.empty() ) {
				ret.append( invertedNodeNames.back() );
				invertedNodeNames.pop_back();
			}
		}
		return( ret );
	}

	bool CFBamChainEditObj::isColumnInOwnerRelation() {
		static const std::string S_ProcName( "isColumnInOwnerRelation" );
		static const std::string S_This( "this" );
		static const std::string S_GenContextGenDefColumnDefLookupColumn( "GenContext.GenDef.ColumnDef.LookupColumn" );
		static const std::string S_GenContextGenDefFromColumnDef( "GenContext.GenDef.FromColumnDef" );
		static const std::string S_FirstClassList( "ICFBamAtomObj, ICFBamTableColObj" );
		static const std::string S_SecondClassList( "ICFBamAtomObj, ICFBamTableColObj, ICFBamIndexColObj, ICFBamRelationColObj" );
		cflib::ICFLibAnyObj* focusDef;
		cfbam::ICFBamTableObj* tableDef;
		if( implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			cfbam::ICFBamAtomObj* atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( this );
			cflib::ICFLibAnyObj* atomScopeDef = atomDef->getObjScope();
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( atomScopeDef );
			focusDef = this;
		}
		else if( implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamTableColObj* tableColDef = dynamic_cast<cfbam::ICFBamTableColObj*>( this );
			cflib::ICFLibAnyObj* tableColScopeDef = tableColDef->getObjScope();
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( tableColScopeDef );
			focusDef = this;
		}
		else if( implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamIndexColObj* indexColDef = dynamic_cast<cfbam::ICFBamIndexColObj*>( this );
			focusDef = indexColDef->getRequiredLookupColumn();
			if( focusDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamAtomObj*>( focusDef )->getObjScope() );
			}
			else if( focusDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamTableColObj*>( focusDef )->getObjScope() );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_GenContextGenDefColumnDefLookupColumn, focusDef, S_FirstClassList );
			}
		}
		else if( implementsClassCode( cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamRelationColObj* relColDef = dynamic_cast<cfbam::ICFBamRelationColObj*>( this );
			cflib::ICFLibAnyObj* columnDef = relColDef->getRequiredLookupFromCol();
			if( columnDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( columnDef->getObjScope() );
			}
			else if( columnDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( columnDef->getObjScope() );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_GenContextGenDefColumnDefLookupColumn, columnDef, S_FirstClassList );
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_This, this, S_SecondClassList );
		}

		std::vector<cfbam::ICFBamRelationObj*> ownerRelations = tableDef->getContainerOwnerRelations();
		if( ownerRelations.empty() ) {
			return( false );
		}

		cfbam::ICFBamRelationObj* ownerRelation;
		cfbam::ICFBamRelationColObj* ownerRelationCol;
		std::vector<cfbam::ICFBamRelationColObj*> ownerRelationCols;

		for( auto iterOwnerRelations = ownerRelations.begin(); iterOwnerRelations != ownerRelations.end(); iterOwnerRelations ++ ) {
			ownerRelation = *iterOwnerRelations;
			ownerRelationCols = ownerRelation->getOptionalComponentsColumns();
			for( auto iterCols = ownerRelationCols.begin(); iterCols != ownerRelationCols.end(); iterCols ++ ) {
				ownerRelationCol = *iterCols;
				if( ownerRelationCol->getRequiredLookupFromCol() == focusDef ) {
					return( true );
				}
			}
		}

		return( false );
	}

}
