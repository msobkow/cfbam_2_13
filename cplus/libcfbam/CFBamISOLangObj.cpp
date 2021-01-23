// Description: C++18 base object instance implementation for CFBam ISOLang.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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
#include <cfbamobj/CFBamISOLangObj.hpp>

namespace cfbam {

	const std::string CFBamISOLangObj::CLASS_NAME( "CFBamISOLangObj" );
	const classcode_t CFBamISOLangObj::CLASS_CODE = 0xa007L;

	int32_t CFBamISOLangObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int16_t CFBamISOLangObj::getRequiredISOLangId() {
		return( getPKey()->getRequiredISOLangId() );
	}

	const int16_t* CFBamISOLangObj::getRequiredISOLangIdReference() {
		return( getPKey()->getRequiredISOLangIdReference() );
	}

	const std::string& CFBamISOLangObj::getRequiredISO6392Code() {
		return( getISOLangBuff()->getRequiredISO6392Code() );
	}

	const std::string* CFBamISOLangObj::getRequiredISO6392CodeReference() {
		return( getISOLangBuff()->getRequiredISO6392CodeReference() );
	}

	bool CFBamISOLangObj::isOptionalISO6391CodeNull() {
		return( getISOLangBuff()->isOptionalISO6391CodeNull() );
	}

	const std::string& CFBamISOLangObj::getOptionalISO6391CodeValue() {
		return( getISOLangBuff()->getOptionalISO6391CodeValue() );
	}

	const std::string* CFBamISOLangObj::getOptionalISO6391CodeReference() {
		return( getISOLangBuff()->getOptionalISO6391CodeReference() );
	}

	const std::string& CFBamISOLangObj::getRequiredEnglishName() {
		return( getISOLangBuff()->getRequiredEnglishName() );
	}

	const std::string* CFBamISOLangObj::getRequiredEnglishNameReference() {
		return( getISOLangBuff()->getRequiredEnglishNameReference() );
	}


	std::vector<cfsec::ICFSecISOCtryLangObj*> CFBamISOLangObj::getOptionalChildrenCtry( bool forceRead ) {
		std::vector<cfsec::ICFSecISOCtryLangObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryLangTableObj()->readISOCtryLangByLangIdx( getPKey()->getRequiredISOLangId(),
			forceRead );
		return( retval );
	}

	CFBamISOLangObj::CFBamISOLangObj()
	: ICFBamISOLangObj(),
	  ICFSecISOLangObj(),
	  ICFIntISOLangObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamISOLangObj::CFBamISOLangObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamISOLangObj(),
	  ICFSecISOLangObj(),
	  ICFIntISOLangObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamISOLangObj::~CFBamISOLangObj() {
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

	cfsec::CFSecISOLangBuff* CFBamISOLangObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecISOLangBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOLang()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredISOLangId() );
			}
		}
		return( buff );
	}

	void CFBamISOLangObj::setBuff( cfsec::CFSecISOLangBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamISOLangObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamISOLangObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamISOLangObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamISOLangObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamISOLangObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ISOLangId( "ISOLangId" );
		static const std::string S_ISO6392Code( "ISO6392Code" );
		static const std::string S_ISO6391Code( "ISO6391Code" );
		static const std::string S_EnglishName( "EnglishName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamISOLangObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamISOLangObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamISOLangObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamISOLangObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamISOLangObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOLangId, CFBamISOLangObj::getRequiredISOLangId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ISO6392Code, CFBamISOLangObj::getRequiredISO6392Code() ) );
		if( ! CFBamISOLangObj::isOptionalISO6391CodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ISO6391Code, CFBamISOLangObj::getOptionalISO6391CodeValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EnglishName, CFBamISOLangObj::getRequiredEnglishName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamISOLangObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredISO6392Code() );
		return( objName );
	}

	const std::string CFBamISOLangObj::getGenDefName() {
		return( cfsec::CFSecISOLangBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamISOLangObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamISOLangObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamISOLangObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamISOLangObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamISOLangObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamISOLangObj::getObjQualifiedName() {
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

	std::string CFBamISOLangObj::getObjFullName() {
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

	cfsec::ICFSecISOLangObj* CFBamISOLangObj::realize() {
		cfsec::ICFSecISOLangObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOLangTableObj()->realizeISOLang(
			(cfsec::ICFSecISOLangObj*)this );
		return( dynamic_cast<cfsec::ICFSecISOLangObj*>( retobj ) );
	}

	cfsec::ICFSecISOLangObj* CFBamISOLangObj::read( bool forceRead ) {
		cfsec::ICFSecISOLangObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOLangTableObj()->readISOLangByIdIdx( getISOLangBuff()->getRequiredISOLangId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecISOLangObj*>( retobj ) );
	}

	cfsec::ICFSecISOLangTableObj* CFBamISOLangObj::getISOLangTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOLangTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamISOLangObj::getSchema() {
		return( schema );
	}

	void CFBamISOLangObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecISOLangPKey* CFBamISOLangObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecISOLangPKey();
		}
		return( pKey );
	}

	void CFBamISOLangObj::setPKey( cfsec::CFSecISOLangPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecISOLangPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamISOLangObj::getIsNew() {
		return( isNew );
	}

	void CFBamISOLangObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecISOLangEditObj* CFBamISOLangObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecISOLangObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOLangTableObj()->lockISOLang( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOLangTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecISOLangEditObj*>( edit ) );
	}

	void CFBamISOLangObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecISOLangEditObj* CFBamISOLangObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecISOLangEditObj* CFBamISOLangObj::getISOLangEdit() {
		return( dynamic_cast<cfsec::ICFSecISOLangEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamISOLangObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOLangBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOLangObj::getCreatedAt() {
		return( getISOLangBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamISOLangObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOLangBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOLangObj::getUpdatedAt() {
		return( getISOLangBuff()->getUpdatedAt() );
	}

	void CFBamISOLangObj::copyPKeyToBuff() {
		cfsec::CFSecISOLangPKey* tablePKey = getPKey();
		cfsec::CFSecISOLangBuff* tableBuff = getISOLangEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredISOLangId( tablePKey->getRequiredISOLangId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamISOLangObj::copyBuffToPKey() {
		cfsec::CFSecISOLangPKey* tablePKey = getPKey();
		cfsec::CFSecISOLangBuff* tableBuff = getISOLangBuff();
		tablePKey->setRequiredISOLangId( tableBuff->getRequiredISOLangId() );
	}

}
