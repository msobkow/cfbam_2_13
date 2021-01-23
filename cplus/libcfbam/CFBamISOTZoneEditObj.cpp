// Description: C++18 edit object instance implementation for CFBam ISOTZone.

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
#include <cfbamobj/CFBamISOTZoneEditObj.hpp>


namespace cfbam {

	const std::string CFBamISOTZoneEditObj::CLASS_NAME( "CFBamISOTZoneEditObj" );

	CFBamISOTZoneEditObj::CFBamISOTZoneEditObj( cfsec::ICFSecISOTZoneObj* argOrig )
	: ICFBamISOTZoneEditObj(),
	  ICFSecISOTZoneEditObj(),
	  ICFIntISOTZoneEditObj()
	{
		static const std::string S_ProcName( "CFBamISOTZoneEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecISOTZoneBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( origBuff->clone() );
	}

	CFBamISOTZoneEditObj::~CFBamISOTZoneEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamISOTZoneEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamISOTZoneEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOTZoneBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOTZoneEditObj::getCreatedAt() {
		return( getISOTZoneBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamISOTZoneEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOTZoneBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOTZoneEditObj::getUpdatedAt() {
		return( getISOTZoneBuff()->getUpdatedAt() );
	}

	void CFBamISOTZoneEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getISOTZoneEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamISOTZoneEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getISOTZoneEditBuff()->setCreatedAt( value );
	}

	void CFBamISOTZoneEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getISOTZoneEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamISOTZoneEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getISOTZoneEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamISOTZoneEditObj::getClassCode() const {
		return( cfsec::CFSecISOTZoneBuff::CLASS_CODE );
	}

	bool CFBamISOTZoneEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamISOTZoneEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamISOTZoneEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamISOTZoneEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamISOTZoneEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamISOTZoneEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamISOTZoneEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamISOTZoneEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOTZoneId, CFBamISOTZoneEditObj::getRequiredISOTZoneId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Iso8601, CFBamISOTZoneEditObj::getRequiredIso8601() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TZName, CFBamISOTZoneEditObj::getRequiredTZName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_TZHourOffset, CFBamISOTZoneEditObj::getRequiredTZHourOffset() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_TZMinOffset, CFBamISOTZoneEditObj::getRequiredTZMinOffset() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamISOTZoneEditObj::getRequiredDescription() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_Visible, CFBamISOTZoneEditObj::getRequiredVisible() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamISOTZoneEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamISOTZoneEditObj::setRequiredRevision( int32_t value ) {
		getISOTZoneEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamISOTZoneEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredTZName() );
		return( objName );
	}

	const std::string CFBamISOTZoneEditObj::getGenDefName() {
		return( cfsec::CFSecISOTZoneBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamISOTZoneEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamISOTZoneEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamISOTZoneEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamISOTZoneEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamISOTZoneEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamISOTZoneEditObj::getObjQualifiedName() {
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

	std::string CFBamISOTZoneEditObj::getObjFullName() {
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

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecISOTZoneObj* retobj = getSchema()->getISOTZoneTableObj()->realizeISOTZone( dynamic_cast<cfsec::ICFSecISOTZoneObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneEditObj::read( bool forceRead ) {
		cfsec::ICFSecISOTZoneObj* retval = getOrigAsISOTZone()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneEditObj::create() {
		cfsec::ICFSecISOTZoneObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsISOTZone()->getSchema() )->getISOTZoneTableObj()->createISOTZone( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecISOTZoneEditObj* CFBamISOTZoneEditObj::update() {
		getSchema()->getISOTZoneTableObj()->updateISOTZone( this );
		return( NULL );
	}

	cfsec::ICFSecISOTZoneEditObj* CFBamISOTZoneEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getISOTZoneTableObj()->deleteISOTZone( this );
		return( NULL );
	}

	cfsec::ICFSecISOTZoneTableObj* CFBamISOTZoneEditObj::getISOTZoneTable() {
		return( orig->getSchema()->getISOTZoneTableObj() );
	}

	cfsec::ICFSecISOTZoneEditObj* CFBamISOTZoneEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecISOTZoneEditObj* CFBamISOTZoneEditObj::getISOTZoneEdit() {
		return( (cfsec::ICFSecISOTZoneEditObj*)this );
	}

	cfsec::ICFSecISOTZoneEditObj* CFBamISOTZoneEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamISOTZoneEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecISOTZoneObj* CFBamISOTZoneEditObj::getOrigAsISOTZone() {
		return( dynamic_cast<cfsec::ICFSecISOTZoneObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamISOTZoneEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecISOTZoneBuff* CFBamISOTZoneEditObj::getBuff() {
		return( buff );
	}

	void CFBamISOTZoneEditObj::setBuff( cfsec::CFSecISOTZoneBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecISOTZonePKey* CFBamISOTZoneEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamISOTZoneEditObj::setPKey( cfsec::CFSecISOTZonePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamISOTZoneEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamISOTZoneEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int16_t CFBamISOTZoneEditObj::getRequiredISOTZoneId() {
		return( getPKey()->getRequiredISOTZoneId() );
	}

	const int16_t* CFBamISOTZoneEditObj::getRequiredISOTZoneIdReference() {
		return( getPKey()->getRequiredISOTZoneIdReference() );
	}

	const std::string& CFBamISOTZoneEditObj::getRequiredIso8601() {
		return( getISOTZoneBuff()->getRequiredIso8601() );
	}

	const std::string* CFBamISOTZoneEditObj::getRequiredIso8601Reference() {
		return( getISOTZoneBuff()->getRequiredIso8601Reference() );
	}

	void CFBamISOTZoneEditObj::setRequiredIso8601( const std::string& value ) {
		if( getISOTZoneBuff()->getRequiredIso8601() != value ) {
			getISOTZoneEditBuff()->setRequiredIso8601( value );
		}
	}

	const std::string& CFBamISOTZoneEditObj::getRequiredTZName() {
		return( getISOTZoneBuff()->getRequiredTZName() );
	}

	const std::string* CFBamISOTZoneEditObj::getRequiredTZNameReference() {
		return( getISOTZoneBuff()->getRequiredTZNameReference() );
	}

	void CFBamISOTZoneEditObj::setRequiredTZName( const std::string& value ) {
		if( getISOTZoneBuff()->getRequiredTZName() != value ) {
			getISOTZoneEditBuff()->setRequiredTZName( value );
		}
	}

	const int16_t CFBamISOTZoneEditObj::getRequiredTZHourOffset() {
		return( getISOTZoneBuff()->getRequiredTZHourOffset() );
	}

	const int16_t* CFBamISOTZoneEditObj::getRequiredTZHourOffsetReference() {
		return( getISOTZoneBuff()->getRequiredTZHourOffsetReference() );
	}

	void CFBamISOTZoneEditObj::setRequiredTZHourOffset( const int16_t value ) {
		if( getISOTZoneBuff()->getRequiredTZHourOffset() != value ) {
			getISOTZoneEditBuff()->setRequiredTZHourOffset( value );
		}
	}

	const int16_t CFBamISOTZoneEditObj::getRequiredTZMinOffset() {
		return( getISOTZoneBuff()->getRequiredTZMinOffset() );
	}

	const int16_t* CFBamISOTZoneEditObj::getRequiredTZMinOffsetReference() {
		return( getISOTZoneBuff()->getRequiredTZMinOffsetReference() );
	}

	void CFBamISOTZoneEditObj::setRequiredTZMinOffset( const int16_t value ) {
		if( getISOTZoneBuff()->getRequiredTZMinOffset() != value ) {
			getISOTZoneEditBuff()->setRequiredTZMinOffset( value );
		}
	}

	const std::string& CFBamISOTZoneEditObj::getRequiredDescription() {
		return( getISOTZoneBuff()->getRequiredDescription() );
	}

	const std::string* CFBamISOTZoneEditObj::getRequiredDescriptionReference() {
		return( getISOTZoneBuff()->getRequiredDescriptionReference() );
	}

	void CFBamISOTZoneEditObj::setRequiredDescription( const std::string& value ) {
		if( getISOTZoneBuff()->getRequiredDescription() != value ) {
			getISOTZoneEditBuff()->setRequiredDescription( value );
		}
	}

	const bool CFBamISOTZoneEditObj::getRequiredVisible() {
		return( getISOTZoneBuff()->getRequiredVisible() );
	}

	const bool* CFBamISOTZoneEditObj::getRequiredVisibleReference() {
		return( getISOTZoneBuff()->getRequiredVisibleReference() );
	}

	void CFBamISOTZoneEditObj::setRequiredVisible( const bool value ) {
		if( getISOTZoneBuff()->getRequiredVisible() != value ) {
			getISOTZoneEditBuff()->setRequiredVisible( value );
		}
	}

	void CFBamISOTZoneEditObj::copyPKeyToBuff() {
		cfsec::CFSecISOTZonePKey* tablePKey = getPKey();
		cfsec::CFSecISOTZoneBuff* tableBuff = getISOTZoneEditBuff();
		tableBuff->setRequiredISOTZoneId( tablePKey->getRequiredISOTZoneId() );
	}

	void CFBamISOTZoneEditObj::copyBuffToPKey() {
		cfsec::CFSecISOTZonePKey* tablePKey = getPKey();
		cfsec::CFSecISOTZoneBuff* tableBuff = getISOTZoneBuff();
		tablePKey->setRequiredISOTZoneId( tableBuff->getRequiredISOTZoneId() );
	}

	void CFBamISOTZoneEditObj::copyBuffToOrig() {
		cfsec::CFSecISOTZoneBuff* origBuff = getOrigAsISOTZone()->getISOTZoneEditBuff();
		cfsec::CFSecISOTZoneBuff* myBuff = getISOTZoneBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamISOTZoneEditObj::copyOrigToBuff() {
		cfsec::CFSecISOTZoneBuff* origBuff = getOrigAsISOTZone()->getISOTZoneBuff();
		cfsec::CFSecISOTZoneBuff* myBuff = getISOTZoneEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
