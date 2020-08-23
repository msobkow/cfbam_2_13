// Description: C++18 base object instance implementation for CFBam MimeType.

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

namespace cfbam {

	const std::string CFBamMimeTypeObj::CLASS_NAME( "CFBamMimeTypeObj" );
	const classcode_t CFBamMimeTypeObj::CLASS_CODE = 0xa103L;

	int32_t CFBamMimeTypeObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int32_t CFBamMimeTypeObj::getRequiredMimeTypeId() {
		return( getPKey()->getRequiredMimeTypeId() );
	}

	const int32_t* CFBamMimeTypeObj::getRequiredMimeTypeIdReference() {
		return( getPKey()->getRequiredMimeTypeIdReference() );
	}

	const std::string& CFBamMimeTypeObj::getRequiredName() {
		return( getMimeTypeBuff()->getRequiredName() );
	}

	const std::string* CFBamMimeTypeObj::getRequiredNameReference() {
		return( getMimeTypeBuff()->getRequiredNameReference() );
	}

	bool CFBamMimeTypeObj::isOptionalFileTypesNull() {
		return( getMimeTypeBuff()->isOptionalFileTypesNull() );
	}

	const std::string& CFBamMimeTypeObj::getOptionalFileTypesValue() {
		return( getMimeTypeBuff()->getOptionalFileTypesValue() );
	}

	const std::string* CFBamMimeTypeObj::getOptionalFileTypesReference() {
		return( getMimeTypeBuff()->getOptionalFileTypesReference() );
	}


	CFBamMimeTypeObj::CFBamMimeTypeObj()
	: ICFBamMimeTypeObj(),
	  ICFIntMimeTypeObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamMimeTypeObj::CFBamMimeTypeObj( cfint::ICFIntSchemaObj* argSchema )
	: ICFBamMimeTypeObj(),
	  ICFIntMimeTypeObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamMimeTypeObj::~CFBamMimeTypeObj() {
		schema = NULL;
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}
		if( pKey != NULL ) {
			delete pKey;
			pKey = NULL;
		}

	}

	cfint::CFIntMimeTypeBuff* CFBamMimeTypeObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfint::CFIntMimeTypeBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableMimeType()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredMimeTypeId() );
			}
		}
		return( buff );
	}

	void CFBamMimeTypeObj::setBuff( cfint::CFIntMimeTypeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamMimeTypeObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamMimeTypeObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamMimeTypeObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntMimeTypeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamMimeTypeObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamMimeTypeObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamMimeTypeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamMimeTypeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamMimeTypeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamMimeTypeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamMimeTypeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_MimeTypeId, CFBamMimeTypeObj::getRequiredMimeTypeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamMimeTypeObj::getRequiredName() ) );
		if( ! CFBamMimeTypeObj::isOptionalFileTypesNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FileTypes, CFBamMimeTypeObj::getOptionalFileTypesValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamMimeTypeObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamMimeTypeObj::getGenDefName() {
		return( cfint::CFIntMimeTypeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamMimeTypeObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamMimeTypeObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamMimeTypeObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamMimeTypeObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamMimeTypeObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamMimeTypeObj::getObjQualifiedName() {
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

	std::string CFBamMimeTypeObj::getObjFullName() {
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

	cfint::ICFIntMimeTypeObj* CFBamMimeTypeObj::realize() {
		cfint::ICFIntMimeTypeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMimeTypeTableObj()->realizeMimeType(
			(cfint::ICFIntMimeTypeObj*)this );
		return( dynamic_cast<cfint::ICFIntMimeTypeObj*>( retobj ) );
	}

	cfint::ICFIntMimeTypeObj* CFBamMimeTypeObj::read( bool forceRead ) {
		cfint::ICFIntMimeTypeObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMimeTypeTableObj()->readMimeTypeByIdIdx( getMimeTypeBuff()->getRequiredMimeTypeId(), forceRead );
		return( dynamic_cast<cfint::ICFIntMimeTypeObj*>( retobj ) );
	}

	cfint::ICFIntMimeTypeTableObj* CFBamMimeTypeObj::getMimeTypeTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMimeTypeTableObj() );
	}

	cfint::ICFIntSchemaObj* CFBamMimeTypeObj::getSchema() {
		return( schema );
	}

	void CFBamMimeTypeObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = value;
	}

	cfint::CFIntMimeTypePKey* CFBamMimeTypeObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfint::CFIntMimeTypePKey();
		}
		return( pKey );
	}

	void CFBamMimeTypeObj::setPKey( cfint::CFIntMimeTypePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfint::CFIntMimeTypePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamMimeTypeObj::getIsNew() {
		return( isNew );
	}

	void CFBamMimeTypeObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfint::ICFIntMimeTypeEditObj* CFBamMimeTypeObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfint::ICFIntMimeTypeObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMimeTypeTableObj()->lockMimeType( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMimeTypeTableObj()->newEditInstance( this );
		return( dynamic_cast<cfint::ICFIntMimeTypeEditObj*>( edit ) );
	}

	void CFBamMimeTypeObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfint::ICFIntMimeTypeEditObj* CFBamMimeTypeObj::getEdit() {
		return( edit );
	}

	cfint::ICFIntMimeTypeEditObj* CFBamMimeTypeObj::getMimeTypeEdit() {
		return( dynamic_cast<cfint::ICFIntMimeTypeEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamMimeTypeObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMimeTypeBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamMimeTypeObj::getCreatedAt() {
		return( getMimeTypeBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamMimeTypeObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getMimeTypeBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamMimeTypeObj::getUpdatedAt() {
		return( getMimeTypeBuff()->getUpdatedAt() );
	}

	void CFBamMimeTypeObj::copyPKeyToBuff() {
		cfint::CFIntMimeTypePKey* tablePKey = getPKey();
		cfint::CFIntMimeTypeBuff* tableBuff = getMimeTypeEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredMimeTypeId( tablePKey->getRequiredMimeTypeId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamMimeTypeObj::copyBuffToPKey() {
		cfint::CFIntMimeTypePKey* tablePKey = getPKey();
		cfint::CFIntMimeTypeBuff* tableBuff = getMimeTypeBuff();
		tablePKey->setRequiredMimeTypeId( tableBuff->getRequiredMimeTypeId() );
	}

}
