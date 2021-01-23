// Description: C++18 base object instance implementation for CFBam ISOCtryCcy.

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
#include <cfbamobj/CFBamISOCtryCcyObj.hpp>

namespace cfbam {

	const std::string CFBamISOCtryCcyObj::CLASS_NAME( "CFBamISOCtryCcyObj" );
	const classcode_t CFBamISOCtryCcyObj::CLASS_CODE = 0xa005L;

	int32_t CFBamISOCtryCcyObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int16_t CFBamISOCtryCcyObj::getRequiredISOCtryId() {
		return( getPKey()->getRequiredISOCtryId() );
	}

	const int16_t* CFBamISOCtryCcyObj::getRequiredISOCtryIdReference() {
		return( getPKey()->getRequiredISOCtryIdReference() );
	}

	const int16_t CFBamISOCtryCcyObj::getRequiredISOCcyId() {
		return( getPKey()->getRequiredISOCcyId() );
	}

	const int16_t* CFBamISOCtryCcyObj::getRequiredISOCcyIdReference() {
		return( getPKey()->getRequiredISOCcyIdReference() );
	}


	cfsec::ICFSecISOCtryObj* CFBamISOCtryCcyObj::getRequiredContainerCtry( bool forceRead ) {
		cfsec::ICFSecISOCtryObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryTableObj()->readISOCtryByIdIdx( getPKey()->getRequiredISOCtryId(), forceRead );
		}
		return( retobj );
	}

	cfsec::ICFSecISOCcyObj* CFBamISOCtryCcyObj::getRequiredParentCcy( bool forceRead ) {
		cfsec::ICFSecISOCcyObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCcyTableObj()->readISOCcyByIdIdx( getPKey()->getRequiredISOCcyId(), forceRead );
		}
		return( retobj );
	}

	CFBamISOCtryCcyObj::CFBamISOCtryCcyObj()
	: ICFBamISOCtryCcyObj(),
	  ICFSecISOCtryCcyObj(),
	  ICFIntISOCtryCcyObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamISOCtryCcyObj::CFBamISOCtryCcyObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamISOCtryCcyObj(),
	  ICFSecISOCtryCcyObj(),
	  ICFIntISOCtryCcyObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamISOCtryCcyObj::~CFBamISOCtryCcyObj() {
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

	cfsec::CFSecISOCtryCcyBuff* CFBamISOCtryCcyObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecISOCtryCcyBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOCtryCcy()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredISOCtryId(),
						getPKey()->getRequiredISOCcyId() );
			}
		}
		return( buff );
	}

	void CFBamISOCtryCcyObj::setBuff( cfsec::CFSecISOCtryCcyBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamISOCtryCcyObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamISOCtryCcyObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamISOCtryCcyObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamISOCtryCcyObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamISOCtryCcyObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ISOCtryId( "ISOCtryId" );
		static const std::string S_ISOCcyId( "ISOCcyId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamISOCtryCcyObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamISOCtryCcyObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamISOCtryCcyObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamISOCtryCcyObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamISOCtryCcyObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOCtryId, CFBamISOCtryCcyObj::getRequiredISOCtryId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOCcyId, CFBamISOCtryCcyObj::getRequiredISOCcyId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamISOCtryCcyObj::getObjName() {
		std::string objName( CLASS_NAME );
		int16_t val = getRequiredISOCcyId();
		objName = cflib::CFLibXmlUtil::formatInt16( val );
		return( objName );
	}

	const std::string CFBamISOCtryCcyObj::getGenDefName() {
		return( cfsec::CFSecISOCtryCcyBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryCcyObj::getScope() {
		cfsec::ICFSecISOCtryObj* scope = getRequiredContainerCtry();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryCcyObj::getObjScope() {
		cfsec::ICFSecISOCtryObj* scope = getRequiredContainerCtry();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryCcyObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamISOCtryCcyObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamISOCtryCcyObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamISOCtryCcyObj::getObjQualifiedName() {
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

	std::string CFBamISOCtryCcyObj::getObjFullName() {
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

	cfsec::ICFSecISOCtryCcyObj* CFBamISOCtryCcyObj::realize() {
		cfsec::ICFSecISOCtryCcyObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryCcyTableObj()->realizeISOCtryCcy(
			(cfsec::ICFSecISOCtryCcyObj*)this );
		return( dynamic_cast<cfsec::ICFSecISOCtryCcyObj*>( retobj ) );
	}

	cfsec::ICFSecISOCtryCcyObj* CFBamISOCtryCcyObj::read( bool forceRead ) {
		cfsec::ICFSecISOCtryCcyObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryCcyTableObj()->readISOCtryCcyByIdIdx( getISOCtryCcyBuff()->getRequiredISOCtryId(),
		getISOCtryCcyBuff()->getRequiredISOCcyId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecISOCtryCcyObj*>( retobj ) );
	}

	cfsec::ICFSecISOCtryCcyTableObj* CFBamISOCtryCcyObj::getISOCtryCcyTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryCcyTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamISOCtryCcyObj::getSchema() {
		return( schema );
	}

	void CFBamISOCtryCcyObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecISOCtryCcyPKey* CFBamISOCtryCcyObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecISOCtryCcyPKey();
		}
		return( pKey );
	}

	void CFBamISOCtryCcyObj::setPKey( cfsec::CFSecISOCtryCcyPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecISOCtryCcyPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamISOCtryCcyObj::getIsNew() {
		return( isNew );
	}

	void CFBamISOCtryCcyObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecISOCtryCcyEditObj* CFBamISOCtryCcyObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecISOCtryCcyObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryCcyTableObj()->lockISOCtryCcy( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOCtryCcyTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecISOCtryCcyEditObj*>( edit ) );
	}

	void CFBamISOCtryCcyObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecISOCtryCcyEditObj* CFBamISOCtryCcyObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecISOCtryCcyEditObj* CFBamISOCtryCcyObj::getISOCtryCcyEdit() {
		return( dynamic_cast<cfsec::ICFSecISOCtryCcyEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCtryCcyObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCtryCcyBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCtryCcyObj::getCreatedAt() {
		return( getISOCtryCcyBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCtryCcyObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCtryCcyBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCtryCcyObj::getUpdatedAt() {
		return( getISOCtryCcyBuff()->getUpdatedAt() );
	}

	void CFBamISOCtryCcyObj::copyPKeyToBuff() {
		cfsec::CFSecISOCtryCcyPKey* tablePKey = getPKey();
		cfsec::CFSecISOCtryCcyBuff* tableBuff = getISOCtryCcyEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredISOCtryId( tablePKey->getRequiredISOCtryId() );
			tableBuff->setRequiredISOCcyId( tablePKey->getRequiredISOCcyId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamISOCtryCcyObj::copyBuffToPKey() {
		cfsec::CFSecISOCtryCcyPKey* tablePKey = getPKey();
		cfsec::CFSecISOCtryCcyBuff* tableBuff = getISOCtryCcyBuff();
		tablePKey->setRequiredISOCtryId( tableBuff->getRequiredISOCtryId() );
		tablePKey->setRequiredISOCcyId( tableBuff->getRequiredISOCcyId() );
	}

}
