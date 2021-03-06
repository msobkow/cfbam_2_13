// Description: C++18 base object instance implementation for CFBam ISOCtryLang.

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
#include <cfbamobj/CFBamISOCtryLangObj.hpp>

namespace cfbam {

	const std::string CFBamISOCtryLangObj::CLASS_NAME( "CFBamISOCtryLangObj" );
	const classcode_t CFBamISOCtryLangObj::CLASS_CODE = 0xa006L;

	int32_t CFBamISOCtryLangObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int16_t CFBamISOCtryLangObj::getRequiredISOCtryId() {
		return( getPKey()->getRequiredISOCtryId() );
	}

	const int16_t* CFBamISOCtryLangObj::getRequiredISOCtryIdReference() {
		return( getPKey()->getRequiredISOCtryIdReference() );
	}

	const int16_t CFBamISOCtryLangObj::getRequiredISOLangId() {
		return( getPKey()->getRequiredISOLangId() );
	}

	const int16_t* CFBamISOCtryLangObj::getRequiredISOLangIdReference() {
		return( getPKey()->getRequiredISOLangIdReference() );
	}


	cfsec::ICFSecISOCtryObj* CFBamISOCtryLangObj::getRequiredContainerCtry( bool forceRead ) {
		cfsec::ICFSecISOCtryObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryTableObj()->readISOCtryByIdIdx( getPKey()->getRequiredISOCtryId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecISOLangObj* CFBamISOCtryLangObj::getRequiredParentLang( bool forceRead ) {
		cfsec::ICFSecISOLangObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOLangTableObj()->readISOLangByIdIdx( getPKey()->getRequiredISOLangId(), forceRead );
		}
		return( retobj );
	}

	CFBamISOCtryLangObj::CFBamISOCtryLangObj()
	: ICFBamISOCtryLangObj(),
	  ICFSecISOCtryLangObj(),
	  ICFIntISOCtryLangObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamISOCtryLangObj::CFBamISOCtryLangObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamISOCtryLangObj(),
	  ICFSecISOCtryLangObj(),
	  ICFIntISOCtryLangObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamISOCtryLangObj::~CFBamISOCtryLangObj() {
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

	cfsec::CFSecISOCtryLangBuff* CFBamISOCtryLangObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecISOCtryLangBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOCtryLang()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredISOCtryId(),
						getPKey()->getRequiredISOLangId() );
			}
		}
		return( buff );
	}

	void CFBamISOCtryLangObj::setBuff( cfsec::CFSecISOCtryLangBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamISOCtryLangObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamISOCtryLangObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamISOCtryLangObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecISOCtryLangBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamISOCtryLangObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamISOCtryLangObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ISOCtryId( "ISOCtryId" );
		static const std::string S_ISOLangId( "ISOLangId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamISOCtryLangObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamISOCtryLangObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamISOCtryLangObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamISOCtryLangObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamISOCtryLangObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOCtryId, CFBamISOCtryLangObj::getRequiredISOCtryId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOLangId, CFBamISOCtryLangObj::getRequiredISOLangId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamISOCtryLangObj::getObjName() {
		std::string objName( CLASS_NAME );
		int16_t val = getRequiredISOLangId();
		objName = cflib::CFLibXmlUtil::formatInt16( val );
		return( objName );
	}

	const std::string CFBamISOCtryLangObj::getGenDefName() {
		return( cfsec::CFSecISOCtryLangBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryLangObj::getScope() {
		cfsec::ICFSecISOCtryObj* scope = getRequiredContainerCtry();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryLangObj::getObjScope() {
		cfsec::ICFSecISOCtryObj* scope = getRequiredContainerCtry();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryLangObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamISOCtryLangObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryLangObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamISOCtryLangObj::getObjQualifiedName() {
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

	std::string CFBamISOCtryLangObj::getObjFullName() {
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

	cfsec::ICFSecISOCtryLangObj* CFBamISOCtryLangObj::realize() {
		cfsec::ICFSecISOCtryLangObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryLangTableObj()->realizeISOCtryLang(
			(cfsec::ICFSecISOCtryLangObj*)this );
		return( dynamic_cast<cfsec::ICFSecISOCtryLangObj*>( retobj ) );
	}

	cfsec::ICFSecISOCtryLangObj* CFBamISOCtryLangObj::read( bool forceRead ) {
		cfsec::ICFSecISOCtryLangObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryLangTableObj()->readISOCtryLangByIdIdx( getISOCtryLangBuff()->getRequiredISOCtryId(),
		getISOCtryLangBuff()->getRequiredISOLangId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecISOCtryLangObj*>( retobj ) );
	}

	cfsec::ICFSecISOCtryLangTableObj* CFBamISOCtryLangObj::getISOCtryLangTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryLangTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamISOCtryLangObj::getSchema() {
		return( schema );
	}

	void CFBamISOCtryLangObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecISOCtryLangPKey* CFBamISOCtryLangObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecISOCtryLangPKey();
		}
		return( pKey );
	}

	void CFBamISOCtryLangObj::setPKey( cfsec::CFSecISOCtryLangPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecISOCtryLangPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamISOCtryLangObj::getIsNew() {
		return( isNew );
	}

	void CFBamISOCtryLangObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecISOCtryLangEditObj* CFBamISOCtryLangObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecISOCtryLangObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryLangTableObj()->lockISOCtryLang( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryLangTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecISOCtryLangEditObj*>( edit ) );
	}

	void CFBamISOCtryLangObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecISOCtryLangEditObj* CFBamISOCtryLangObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecISOCtryLangEditObj* CFBamISOCtryLangObj::getISOCtryLangEdit() {
		return( dynamic_cast<cfsec::ICFSecISOCtryLangEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCtryLangObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCtryLangBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCtryLangObj::getCreatedAt() {
		return( getISOCtryLangBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCtryLangObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCtryLangBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCtryLangObj::getUpdatedAt() {
		return( getISOCtryLangBuff()->getUpdatedAt() );
	}

	void CFBamISOCtryLangObj::copyPKeyToBuff() {
		cfsec::CFSecISOCtryLangPKey* tablePKey = getPKey();
		cfsec::CFSecISOCtryLangBuff* tableBuff = getISOCtryLangEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredISOCtryId( tablePKey->getRequiredISOCtryId() );
			tableBuff->setRequiredISOLangId( tablePKey->getRequiredISOLangId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamISOCtryLangObj::copyBuffToPKey() {
		cfsec::CFSecISOCtryLangPKey* tablePKey = getPKey();
		cfsec::CFSecISOCtryLangBuff* tableBuff = getISOCtryLangBuff();
		tablePKey->setRequiredISOCtryId( tableBuff->getRequiredISOCtryId() );
		tablePKey->setRequiredISOLangId( tableBuff->getRequiredISOLangId() );
	}

}
