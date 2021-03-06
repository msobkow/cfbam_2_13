// Description: C++18 base object instance implementation for CFBam URLProtocol.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFInt 2.13 Internet Essentials
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
#include <cfbamobj/CFBamURLProtocolObj.hpp>

namespace cfbam {

	const std::string CFBamURLProtocolObj::CLASS_NAME( "CFBamURLProtocolObj" );
	const classcode_t CFBamURLProtocolObj::CLASS_CODE = 0xa109L;

	int32_t CFBamURLProtocolObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int32_t CFBamURLProtocolObj::getRequiredURLProtocolId() {
		return( getPKey()->getRequiredURLProtocolId() );
	}

	const int32_t* CFBamURLProtocolObj::getRequiredURLProtocolIdReference() {
		return( getPKey()->getRequiredURLProtocolIdReference() );
	}

	const std::string& CFBamURLProtocolObj::getRequiredName() {
		return( getURLProtocolBuff()->getRequiredName() );
	}

	const std::string* CFBamURLProtocolObj::getRequiredNameReference() {
		return( getURLProtocolBuff()->getRequiredNameReference() );
	}

	const std::string& CFBamURLProtocolObj::getRequiredDescription() {
		return( getURLProtocolBuff()->getRequiredDescription() );
	}

	const std::string* CFBamURLProtocolObj::getRequiredDescriptionReference() {
		return( getURLProtocolBuff()->getRequiredDescriptionReference() );
	}

	const bool CFBamURLProtocolObj::getRequiredIsSecure() {
		return( getURLProtocolBuff()->getRequiredIsSecure() );
	}

	const bool* CFBamURLProtocolObj::getRequiredIsSecureReference() {
		return( getURLProtocolBuff()->getRequiredIsSecureReference() );
	}


	CFBamURLProtocolObj::CFBamURLProtocolObj()
	: ICFBamURLProtocolObj(),
	  ICFIntURLProtocolObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamURLProtocolObj::CFBamURLProtocolObj( cfint::ICFIntSchemaObj* argSchema )
	: ICFBamURLProtocolObj(),
	  ICFIntURLProtocolObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamURLProtocolObj::~CFBamURLProtocolObj() {
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

	cfint::CFIntURLProtocolBuff* CFBamURLProtocolObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfint::CFIntURLProtocolBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableURLProtocol()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredURLProtocolId() );
			}
		}
		return( buff );
	}

	void CFBamURLProtocolObj::setBuff( cfint::CFIntURLProtocolBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamURLProtocolObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamURLProtocolObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamURLProtocolObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamURLProtocolObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamURLProtocolObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_URLProtocolId( "URLProtocolId" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		static const std::string S_IsSecure( "IsSecure" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamURLProtocolObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamURLProtocolObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamURLProtocolObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamURLProtocolObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamURLProtocolObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_URLProtocolId, CFBamURLProtocolObj::getRequiredURLProtocolId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamURLProtocolObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamURLProtocolObj::getRequiredDescription() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsSecure, CFBamURLProtocolObj::getRequiredIsSecure() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamURLProtocolObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamURLProtocolObj::getGenDefName() {
		return( cfint::CFIntURLProtocolBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamURLProtocolObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamURLProtocolObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamURLProtocolObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamURLProtocolObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamURLProtocolObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamURLProtocolObj::getObjQualifiedName() {
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

	std::string CFBamURLProtocolObj::getObjFullName() {
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

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolObj::realize() {
		cfint::ICFIntURLProtocolObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getURLProtocolTableObj()->realizeURLProtocol(
			(cfint::ICFIntURLProtocolObj*)this );
		return( dynamic_cast<cfint::ICFIntURLProtocolObj*>( retobj ) );
	}

	cfint::ICFIntURLProtocolObj* CFBamURLProtocolObj::read( bool forceRead ) {
		cfint::ICFIntURLProtocolObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getURLProtocolTableObj()->readURLProtocolByIdIdx( getURLProtocolBuff()->getRequiredURLProtocolId(), forceRead );
		return( dynamic_cast<cfint::ICFIntURLProtocolObj*>( retobj ) );
	}

	cfint::ICFIntURLProtocolTableObj* CFBamURLProtocolObj::getURLProtocolTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getURLProtocolTableObj() );
	}

	cfint::ICFIntSchemaObj* CFBamURLProtocolObj::getSchema() {
		return( schema );
	}

	void CFBamURLProtocolObj::setSchema( cfint::ICFIntSchemaObj* value ) {
		schema = value;
	}

	cfint::CFIntURLProtocolPKey* CFBamURLProtocolObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfint::CFIntURLProtocolPKey();
		}
		return( pKey );
	}

	void CFBamURLProtocolObj::setPKey( cfint::CFIntURLProtocolPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfint::CFIntURLProtocolPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamURLProtocolObj::getIsNew() {
		return( isNew );
	}

	void CFBamURLProtocolObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfint::ICFIntURLProtocolEditObj* CFBamURLProtocolObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfint::ICFIntURLProtocolObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getURLProtocolTableObj()->lockURLProtocol( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getURLProtocolTableObj()->newEditInstance( this );
		return( dynamic_cast<cfint::ICFIntURLProtocolEditObj*>( edit ) );
	}

	void CFBamURLProtocolObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfint::ICFIntURLProtocolEditObj* CFBamURLProtocolObj::getEdit() {
		return( edit );
	}

	cfint::ICFIntURLProtocolEditObj* CFBamURLProtocolObj::getURLProtocolEdit() {
		return( dynamic_cast<cfint::ICFIntURLProtocolEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamURLProtocolObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getURLProtocolBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamURLProtocolObj::getCreatedAt() {
		return( getURLProtocolBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamURLProtocolObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getURLProtocolBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamURLProtocolObj::getUpdatedAt() {
		return( getURLProtocolBuff()->getUpdatedAt() );
	}

	void CFBamURLProtocolObj::copyPKeyToBuff() {
		cfint::CFIntURLProtocolPKey* tablePKey = getPKey();
		cfint::CFIntURLProtocolBuff* tableBuff = getURLProtocolEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredURLProtocolId( tablePKey->getRequiredURLProtocolId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamURLProtocolObj::copyBuffToPKey() {
		cfint::CFIntURLProtocolPKey* tablePKey = getPKey();
		cfint::CFIntURLProtocolBuff* tableBuff = getURLProtocolBuff();
		tablePKey->setRequiredURLProtocolId( tableBuff->getRequiredURLProtocolId() );
	}

}
