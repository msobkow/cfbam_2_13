// Description: C++18 base object instance implementation for CFBam ISOTZone.

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
#include <cfbamobj/CFBamISOTZoneObj.hpp>

namespace cfbam {

	const std::string CFBamISOTZoneObj::CLASS_NAME( "CFBamISOTZoneObj" );
	const classcode_t CFBamISOTZoneObj::CLASS_CODE = 0xa008L;

	int32_t CFBamISOTZoneObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int16_t CFBamISOTZoneObj::getRequiredISOTZoneId() {
		return( getPKey()->getRequiredISOTZoneId() );
	}

	const int16_t* CFBamISOTZoneObj::getRequiredISOTZoneIdReference() {
		return( getPKey()->getRequiredISOTZoneIdReference() );
	}

	const std::string& CFBamISOTZoneObj::getRequiredIso8601() {
		return( getISOTZoneBuff()->getRequiredIso8601() );
	}

	const std::string* CFBamISOTZoneObj::getRequiredIso8601Reference() {
		return( getISOTZoneBuff()->getRequiredIso8601Reference() );
	}

	const std::string& CFBamISOTZoneObj::getRequiredTZName() {
		return( getISOTZoneBuff()->getRequiredTZName() );
	}

	const std::string* CFBamISOTZoneObj::getRequiredTZNameReference() {
		return( getISOTZoneBuff()->getRequiredTZNameReference() );
	}

	const int16_t CFBamISOTZoneObj::getRequiredTZHourOffset() {
		return( getISOTZoneBuff()->getRequiredTZHourOffset() );
	}

	const int16_t* CFBamISOTZoneObj::getRequiredTZHourOffsetReference() {
		return( getISOTZoneBuff()->getRequiredTZHourOffsetReference() );
	}

	const int16_t CFBamISOTZoneObj::getRequiredTZMinOffset() {
		return( getISOTZoneBuff()->getRequiredTZMinOffset() );
	}

	const int16_t* CFBamISOTZoneObj::getRequiredTZMinOffsetReference() {
		return( getISOTZoneBuff()->getRequiredTZMinOffsetReference() );
	}

	const std::string& CFBamISOTZoneObj::getRequiredDescription() {
		return( getISOTZoneBuff()->getRequiredDescription() );
	}

	const std::string* CFBamISOTZoneObj::getRequiredDescriptionReference() {
		return( getISOTZoneBuff()->getRequiredDescriptionReference() );
	}

	const bool CFBamISOTZoneObj::getRequiredVisible() {
		return( getISOTZoneBuff()->getRequiredVisible() );
	}

	const bool* CFBamISOTZoneObj::getRequiredVisibleReference() {
		return( getISOTZoneBuff()->getRequiredVisibleReference() );
	}


	CFBamISOTZoneObj::CFBamISOTZoneObj()
	: ICFBamISOTZoneObj(),
	  ICFSecISOTZoneObj(),
	  ICFIntISOTZoneObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamISOTZoneObj::CFBamISOTZoneObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamISOTZoneObj(),
	  ICFSecISOTZoneObj(),
	  ICFIntISOTZoneObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamISOTZoneObj::~CFBamISOTZoneObj() {
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

	cfsec::CFSecISOTZoneBuff* CFBamISOTZoneObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecISOTZoneBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableISOTZone()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredISOTZoneId() );
			}
		}
		return( buff );
	}

	void CFBamISOTZoneObj::setBuff( cfsec::CFSecISOTZoneBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamISOTZoneObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamISOTZoneObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamISOTZoneObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamISOTZoneObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamISOTZoneObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ISOTZoneId( "ISOTZoneId" );
		static const std::string S_Iso8601( "Iso8601" );
		static const std::string S_TZName( "TZName" );
		static const std::string S_TZHourOffset( "TZHourOffset" );
		static const std::string S_TZMinOffset( "TZMinOffset" );
		static const std::string S_Description( "Description" );
		static const std::string S_Visible( "Visible" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamISOTZoneObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamISOTZoneObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamISOTZoneObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamISOTZoneObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamISOTZoneObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOTZoneId, CFBamISOTZoneObj::getRequiredISOTZoneId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Iso8601, CFBamISOTZoneObj::getRequiredIso8601() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TZName, CFBamISOTZoneObj::getRequiredTZName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_TZHourOffset, CFBamISOTZoneObj::getRequiredTZHourOffset() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_TZMinOffset, CFBamISOTZoneObj::getRequiredTZMinOffset() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamISOTZoneObj::getRequiredDescription() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_Visible, CFBamISOTZoneObj::getRequiredVisible() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamISOTZoneObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredTZName() );
		return( objName );
	}

	const std::string CFBamISOTZoneObj::getGenDefName() {
		return( cfsec::CFSecISOTZoneBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamISOTZoneObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamISOTZoneObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamISOTZoneObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamISOTZoneObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamISOTZoneObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamISOTZoneObj::getObjQualifiedName() {
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

	std::string CFBamISOTZoneObj::getObjFullName() {
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

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneObj::realize() {
		cfsec::ICFSecISOTZoneObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOTZoneTableObj()->realizeISOTZone(
			(cfsec::ICFSecISOTZoneObj*)this );
		return( dynamic_cast<cfsec::ICFSecISOTZoneObj*>( retobj ) );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneObj::read( bool forceRead ) {
		cfsec::ICFSecISOTZoneObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOTZoneTableObj()->readISOTZoneByIdIdx( getISOTZoneBuff()->getRequiredISOTZoneId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecISOTZoneObj*>( retobj ) );
	}

	cfsec::ICFSecISOTZoneTableObj* CFBamISOTZoneObj::getISOTZoneTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOTZoneTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamISOTZoneObj::getSchema() {
		return( schema );
	}

	void CFBamISOTZoneObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecISOTZonePKey* CFBamISOTZoneObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecISOTZonePKey();
		}
		return( pKey );
	}

	void CFBamISOTZoneObj::setPKey( cfsec::CFSecISOTZonePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecISOTZonePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamISOTZoneObj::getIsNew() {
		return( isNew );
	}

	void CFBamISOTZoneObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecISOTZoneEditObj* CFBamISOTZoneObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecISOTZoneObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOTZoneTableObj()->lockISOTZone( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getISOTZoneTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecISOTZoneEditObj*>( edit ) );
	}

	void CFBamISOTZoneObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecISOTZoneEditObj* CFBamISOTZoneObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecISOTZoneEditObj* CFBamISOTZoneObj::getISOTZoneEdit() {
		return( dynamic_cast<cfsec::ICFSecISOTZoneEditObj*>( edit ) );
	}

	cfsec::ICFSecSecUserObj* CFBamISOTZoneObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOTZoneBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOTZoneObj::getCreatedAt() {
		return( getISOTZoneBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamISOTZoneObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOTZoneBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOTZoneObj::getUpdatedAt() {
		return( getISOTZoneBuff()->getUpdatedAt() );
	}

	void CFBamISOTZoneObj::copyPKeyToBuff() {
		cfsec::CFSecISOTZonePKey* tablePKey = getPKey();
		cfsec::CFSecISOTZoneBuff* tableBuff = getISOTZoneEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredISOTZoneId( tablePKey->getRequiredISOTZoneId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamISOTZoneObj::copyBuffToPKey() {
		cfsec::CFSecISOTZonePKey* tablePKey = getPKey();
		cfsec::CFSecISOTZoneBuff* tableBuff = getISOTZoneBuff();
		tablePKey->setRequiredISOTZoneId( tableBuff->getRequiredISOTZoneId() );
	}

}
