// Description: C++18 edit object instance implementation for CFBam MimeType.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFInt 2.13 Internet Essentials
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
#include <cfbamobj/CFBamMimeTypeObj.hpp>
#include <cfbamobj/CFBamMimeTypeEditObj.hpp>


namespace cfbam {

	const std::string CFBamMimeTypeEditObj::CLASS_NAME( "CFBamMimeTypeEditObj" );

	CFBamMimeTypeEditObj::CFBamMimeTypeEditObj( cfint::ICFIntMimeTypeObj* argOrig )
	: ICFBamMimeTypeEditObj(),
	  ICFIntMimeTypeEditObj()
	{
		static const std::string S_ProcName( "CFBamMimeTypeEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfint::CFIntMimeTypeBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfint::CFIntMimeTypeBuff*>( origBuff->clone() );
	}

	CFBamMimeTypeEditObj::~CFBamMimeTypeEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamMimeTypeEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamMimeTypeEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMimeTypeBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamMimeTypeEditObj::getCreatedAt() {
		return( getMimeTypeBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamMimeTypeEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMimeTypeBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamMimeTypeEditObj::getUpdatedAt() {
		return( getMimeTypeBuff()->getUpdatedAt() );
	}

	void CFBamMimeTypeEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getMimeTypeEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamMimeTypeEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getMimeTypeEditBuff()->setCreatedAt( value );
	}

	void CFBamMimeTypeEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getMimeTypeEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamMimeTypeEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getMimeTypeEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamMimeTypeEditObj::getClassCode() const {
		return( cfint::CFIntMimeTypeBuff::CLASS_CODE );
	}

	bool CFBamMimeTypeEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntMimeTypeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamMimeTypeEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamMimeTypeEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_MimeTypeId( "MimeTypeId" );
		static const std::string S_Name( "Name" );
		static const std::string S_FileTypes( "FileTypes" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamMimeTypeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamMimeTypeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamMimeTypeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamMimeTypeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamMimeTypeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_MimeTypeId, CFBamMimeTypeEditObj::getRequiredMimeTypeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamMimeTypeEditObj::getRequiredName() ) );
		if( ! CFBamMimeTypeEditObj::isOptionalFileTypesNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FileTypes, CFBamMimeTypeEditObj::getOptionalFileTypesValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamMimeTypeEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamMimeTypeEditObj::setRequiredRevision( int32_t value ) {
		getMimeTypeEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamMimeTypeEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamMimeTypeEditObj::getGenDefName() {
		return( cfint::CFIntMimeTypeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamMimeTypeEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamMimeTypeEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamMimeTypeEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamMimeTypeEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamMimeTypeEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamMimeTypeEditObj::getObjQualifiedName() {
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

	std::string CFBamMimeTypeEditObj::getObjFullName() {
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

	cfint::ICFIntMimeTypeObj* CFBamMimeTypeEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfint::ICFIntMimeTypeObj* retobj = getSchema()->getMimeTypeTableObj()->realizeMimeType( dynamic_cast<cfint::ICFIntMimeTypeObj*>( this ) );
		return( retobj );
	}

	cfint::ICFIntMimeTypeObj* CFBamMimeTypeEditObj::read( bool forceRead ) {
		cfint::ICFIntMimeTypeObj* retval = getOrigAsMimeType()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfint::ICFIntMimeTypeObj* CFBamMimeTypeEditObj::create() {
		cfint::ICFIntMimeTypeObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsMimeType()->getSchema() )->getMimeTypeTableObj()->createMimeType( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfint::ICFIntMimeTypeEditObj* CFBamMimeTypeEditObj::update() {
		getSchema()->getMimeTypeTableObj()->updateMimeType( this );
		return( NULL );
	}

	cfint::ICFIntMimeTypeEditObj* CFBamMimeTypeEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getMimeTypeTableObj()->deleteMimeType( this );
		return( NULL );
	}

	cfint::ICFIntMimeTypeTableObj* CFBamMimeTypeEditObj::getMimeTypeTable() {
		return( orig->getSchema()->getMimeTypeTableObj() );
	}

	cfint::ICFIntMimeTypeEditObj* CFBamMimeTypeEditObj::getEdit() {
		return( this );
	}

	cfint::ICFIntMimeTypeEditObj* CFBamMimeTypeEditObj::getMimeTypeEdit() {
		return( (cfint::ICFIntMimeTypeEditObj*)this );
	}

	cfint::ICFIntMimeTypeEditObj* CFBamMimeTypeEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamMimeTypeEditObj::endEdit() {
		orig->endEdit();
	}

	cfint::ICFIntMimeTypeObj* CFBamMimeTypeEditObj::getOrig() {
		return( orig );
	}

	cfint::ICFIntMimeTypeObj* CFBamMimeTypeEditObj::getOrigAsMimeType() {
		return( dynamic_cast<cfint::ICFIntMimeTypeObj*>( orig ) );
	}

	cfint::ICFIntSchemaObj* CFBamMimeTypeEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfint::CFIntMimeTypeBuff* CFBamMimeTypeEditObj::getBuff() {
		return( buff );
	}

	void CFBamMimeTypeEditObj::setBuff( cfint::CFIntMimeTypeBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfint::CFIntMimeTypePKey* CFBamMimeTypeEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamMimeTypeEditObj::setPKey( cfint::CFIntMimeTypePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamMimeTypeEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamMimeTypeEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int32_t CFBamMimeTypeEditObj::getRequiredMimeTypeId() {
		return( getPKey()->getRequiredMimeTypeId() );
	}

	const int32_t* CFBamMimeTypeEditObj::getRequiredMimeTypeIdReference() {
		return( getPKey()->getRequiredMimeTypeIdReference() );
	}

	const std::string& CFBamMimeTypeEditObj::getRequiredName() {
		return( getMimeTypeBuff()->getRequiredName() );
	}

	const std::string* CFBamMimeTypeEditObj::getRequiredNameReference() {
		return( getMimeTypeBuff()->getRequiredNameReference() );
	}

	void CFBamMimeTypeEditObj::setRequiredName( const std::string& value ) {
		if( getMimeTypeBuff()->getRequiredName() != value ) {
			getMimeTypeEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamMimeTypeEditObj::isOptionalFileTypesNull() {
		return( getMimeTypeBuff()->isOptionalFileTypesNull() );
	}

	const std::string& CFBamMimeTypeEditObj::getOptionalFileTypesValue() {
		return( getMimeTypeBuff()->getOptionalFileTypesValue() );
	}

	const std::string* CFBamMimeTypeEditObj::getOptionalFileTypesReference() {
		return( getMimeTypeBuff()->getOptionalFileTypesReference() );
	}

	void CFBamMimeTypeEditObj::setOptionalFileTypesNull() {
		if( ! getMimeTypeBuff()->isOptionalFileTypesNull() ) {
			getMimeTypeEditBuff()->setOptionalFileTypesNull();
		}
	}

	void CFBamMimeTypeEditObj::setOptionalFileTypesValue( const std::string& value ) {
		if( getMimeTypeBuff()->isOptionalFileTypesNull() ) {
			getMimeTypeEditBuff()->setOptionalFileTypesValue( value );
		}
		else if( getMimeTypeBuff()->getOptionalFileTypesValue() != value ) {
			getMimeTypeEditBuff()->setOptionalFileTypesValue( value );
		}
	}

	void CFBamMimeTypeEditObj::copyPKeyToBuff() {
		cfint::CFIntMimeTypePKey* tablePKey = getPKey();
		cfint::CFIntMimeTypeBuff* tableBuff = getMimeTypeEditBuff();
		tableBuff->setRequiredMimeTypeId( tablePKey->getRequiredMimeTypeId() );
	}

	void CFBamMimeTypeEditObj::copyBuffToPKey() {
		cfint::CFIntMimeTypePKey* tablePKey = getPKey();
		cfint::CFIntMimeTypeBuff* tableBuff = getMimeTypeBuff();
		tablePKey->setRequiredMimeTypeId( tableBuff->getRequiredMimeTypeId() );
	}

	void CFBamMimeTypeEditObj::copyBuffToOrig() {
		cfint::CFIntMimeTypeBuff* origBuff = getOrigAsMimeType()->getMimeTypeEditBuff();
		cfint::CFIntMimeTypeBuff* myBuff = getMimeTypeBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamMimeTypeEditObj::copyOrigToBuff() {
		cfint::CFIntMimeTypeBuff* origBuff = getOrigAsMimeType()->getMimeTypeBuff();
		cfint::CFIntMimeTypeBuff* myBuff = getMimeTypeEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
