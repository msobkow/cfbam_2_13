// Description: C++18 edit object instance implementation for CFBam ISOCcy.

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
#include <cfbamobj/CFBamISOCcyObj.hpp>
#include <cfbamobj/CFBamISOCcyEditObj.hpp>


namespace cfbam {

	const std::string CFBamISOCcyEditObj::CLASS_NAME( "CFBamISOCcyEditObj" );

	CFBamISOCcyEditObj::CFBamISOCcyEditObj( cfsec::ICFSecISOCcyObj* argOrig )
	: ICFBamISOCcyEditObj(),
	  ICFSecISOCcyEditObj(),
	  ICFIntISOCcyEditObj()
	{
		static const std::string S_ProcName( "CFBamISOCcyEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfsec::CFSecISOCcyBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( origBuff->clone() );
	}

	CFBamISOCcyEditObj::~CFBamISOCcyEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFBamISOCcyEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCcyEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCcyBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCcyEditObj::getCreatedAt() {
		return( getISOCcyBuff()->getCreatedAt() );
	}

	cfsec::ICFSecSecUserObj* CFBamISOCcyEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfbam::ICFBamSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getISOCcyBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFBamISOCcyEditObj::getUpdatedAt() {
		return( getISOCcyBuff()->getUpdatedAt() );
	}

	void CFBamISOCcyEditObj::setCreatedBy( cfsec::ICFSecSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getISOCcyEditBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamISOCcyEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getISOCcyEditBuff()->setCreatedAt( value );
	}

	void CFBamISOCcyEditObj::setUpdatedBy( cfsec::ICFSecSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getISOCcyEditBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFBamISOCcyEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getISOCcyEditBuff()->setUpdatedAt( value );
	}

	const classcode_t CFBamISOCcyEditObj::getClassCode() const {
		return( cfsec::CFSecISOCcyBuff::CLASS_CODE );
	}

	bool CFBamISOCcyEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecISOCcyBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamISOCcyEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamISOCcyEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ISOCcyId( "ISOCcyId" );
		static const std::string S_ISOCode( "ISOCode" );
		static const std::string S_Name( "Name" );
		static const std::string S_UnitSymbol( "UnitSymbol" );
		static const std::string S_Precis( "Precis" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamISOCcyEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamISOCcyEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamISOCcyEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamISOCcyEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamISOCcyEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ISOCcyId, CFBamISOCcyEditObj::getRequiredISOCcyId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ISOCode, CFBamISOCcyEditObj::getRequiredISOCode() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamISOCcyEditObj::getRequiredName() ) );
		if( ! CFBamISOCcyEditObj::isOptionalUnitSymbolNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UnitSymbol, CFBamISOCcyEditObj::getOptionalUnitSymbolValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Precis, CFBamISOCcyEditObj::getRequiredPrecis() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFBamISOCcyEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFBamISOCcyEditObj::setRequiredRevision( int32_t value ) {
		getISOCcyEditBuff()->setRequiredRevision( value );
	}

	std::string CFBamISOCcyEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredISOCode() );
		return( objName );
	}

	const std::string CFBamISOCcyEditObj::getGenDefName() {
		return( cfsec::CFSecISOCcyBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamISOCcyEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamISOCcyEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamISOCcyEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamISOCcyEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamISOCcyEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamISOCcyEditObj::getObjQualifiedName() {
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

	std::string CFBamISOCcyEditObj::getObjFullName() {
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

	cfsec::ICFSecISOCcyObj* CFBamISOCcyEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfsec::ICFSecISOCcyObj* retobj = getSchema()->getISOCcyTableObj()->realizeISOCcy( dynamic_cast<cfsec::ICFSecISOCcyObj*>( this ) );
		return( retobj );
	}

	cfsec::ICFSecISOCcyObj* CFBamISOCcyEditObj::read( bool forceRead ) {
		cfsec::ICFSecISOCcyObj* retval = getOrigAsISOCcy()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfsec::ICFSecISOCcyObj* CFBamISOCcyEditObj::create() {
		cfsec::ICFSecISOCcyObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsISOCcy()->getSchema() )->getISOCcyTableObj()->createISOCcy( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfsec::ICFSecISOCcyEditObj* CFBamISOCcyEditObj::update() {
		getSchema()->getISOCcyTableObj()->updateISOCcy( this );
		return( NULL );
	}

	cfsec::ICFSecISOCcyEditObj* CFBamISOCcyEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getISOCcyTableObj()->deleteISOCcy( this );
		return( NULL );
	}

	cfsec::ICFSecISOCcyTableObj* CFBamISOCcyEditObj::getISOCcyTable() {
		return( orig->getSchema()->getISOCcyTableObj() );
	}

	cfsec::ICFSecISOCcyEditObj* CFBamISOCcyEditObj::getEdit() {
		return( this );
	}

	cfsec::ICFSecISOCcyEditObj* CFBamISOCcyEditObj::getISOCcyEdit() {
		return( (cfsec::ICFSecISOCcyEditObj*)this );
	}

	cfsec::ICFSecISOCcyEditObj* CFBamISOCcyEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFBamISOCcyEditObj::endEdit() {
		orig->endEdit();
	}

	cfsec::ICFSecISOCcyObj* CFBamISOCcyEditObj::getOrig() {
		return( orig );
	}

	cfsec::ICFSecISOCcyObj* CFBamISOCcyEditObj::getOrigAsISOCcy() {
		return( dynamic_cast<cfsec::ICFSecISOCcyObj*>( orig ) );
	}

	cfsec::ICFSecSchemaObj* CFBamISOCcyEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfsec::CFSecISOCcyBuff* CFBamISOCcyEditObj::getBuff() {
		return( buff );
	}

	void CFBamISOCcyEditObj::setBuff( cfsec::CFSecISOCcyBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfsec::CFSecISOCcyPKey* CFBamISOCcyEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFBamISOCcyEditObj::setPKey( cfsec::CFSecISOCcyPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFBamISOCcyEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFBamISOCcyEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int16_t CFBamISOCcyEditObj::getRequiredISOCcyId() {
		return( getPKey()->getRequiredISOCcyId() );
	}

	const int16_t* CFBamISOCcyEditObj::getRequiredISOCcyIdReference() {
		return( getPKey()->getRequiredISOCcyIdReference() );
	}

	const std::string& CFBamISOCcyEditObj::getRequiredISOCode() {
		return( getISOCcyBuff()->getRequiredISOCode() );
	}

	const std::string* CFBamISOCcyEditObj::getRequiredISOCodeReference() {
		return( getISOCcyBuff()->getRequiredISOCodeReference() );
	}

	void CFBamISOCcyEditObj::setRequiredISOCode( const std::string& value ) {
		if( getISOCcyBuff()->getRequiredISOCode() != value ) {
			getISOCcyEditBuff()->setRequiredISOCode( value );
		}
	}

	const std::string& CFBamISOCcyEditObj::getRequiredName() {
		return( getISOCcyBuff()->getRequiredName() );
	}

	const std::string* CFBamISOCcyEditObj::getRequiredNameReference() {
		return( getISOCcyBuff()->getRequiredNameReference() );
	}

	void CFBamISOCcyEditObj::setRequiredName( const std::string& value ) {
		if( getISOCcyBuff()->getRequiredName() != value ) {
			getISOCcyEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamISOCcyEditObj::isOptionalUnitSymbolNull() {
		return( getISOCcyBuff()->isOptionalUnitSymbolNull() );
	}

	const std::string& CFBamISOCcyEditObj::getOptionalUnitSymbolValue() {
		return( getISOCcyBuff()->getOptionalUnitSymbolValue() );
	}

	const std::string* CFBamISOCcyEditObj::getOptionalUnitSymbolReference() {
		return( getISOCcyBuff()->getOptionalUnitSymbolReference() );
	}

	void CFBamISOCcyEditObj::setOptionalUnitSymbolNull() {
		if( ! getISOCcyBuff()->isOptionalUnitSymbolNull() ) {
			getISOCcyEditBuff()->setOptionalUnitSymbolNull();
		}
	}

	void CFBamISOCcyEditObj::setOptionalUnitSymbolValue( const std::string& value ) {
		if( getISOCcyBuff()->isOptionalUnitSymbolNull() ) {
			getISOCcyEditBuff()->setOptionalUnitSymbolValue( value );
		}
		else if( getISOCcyBuff()->getOptionalUnitSymbolValue() != value ) {
			getISOCcyEditBuff()->setOptionalUnitSymbolValue( value );
		}
	}

	const int16_t CFBamISOCcyEditObj::getRequiredPrecis() {
		return( getISOCcyBuff()->getRequiredPrecis() );
	}

	const int16_t* CFBamISOCcyEditObj::getRequiredPrecisReference() {
		return( getISOCcyBuff()->getRequiredPrecisReference() );
	}

	void CFBamISOCcyEditObj::setRequiredPrecis( const int16_t value ) {
		if( getISOCcyBuff()->getRequiredPrecis() != value ) {
			getISOCcyEditBuff()->setRequiredPrecis( value );
		}
	}

	std::vector<cfsec::ICFSecISOCtryCcyObj*> CFBamISOCcyEditObj::getOptionalChildrenCtry( bool forceRead ) {
		std::vector<cfsec::ICFSecISOCtryCcyObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsISOCcy()->getSchema() )->getISOCtryCcyTableObj()->readISOCtryCcyByCcyIdx( getPKey()->getRequiredISOCcyId(),
			forceRead );
		return( retval );
	}

	void CFBamISOCcyEditObj::copyPKeyToBuff() {
		cfsec::CFSecISOCcyPKey* tablePKey = getPKey();
		cfsec::CFSecISOCcyBuff* tableBuff = getISOCcyEditBuff();
		tableBuff->setRequiredISOCcyId( tablePKey->getRequiredISOCcyId() );
	}

	void CFBamISOCcyEditObj::copyBuffToPKey() {
		cfsec::CFSecISOCcyPKey* tablePKey = getPKey();
		cfsec::CFSecISOCcyBuff* tableBuff = getISOCcyBuff();
		tablePKey->setRequiredISOCcyId( tableBuff->getRequiredISOCcyId() );
	}

	void CFBamISOCcyEditObj::copyBuffToOrig() {
		cfsec::CFSecISOCcyBuff* origBuff = getOrigAsISOCcy()->getISOCcyEditBuff();
		cfsec::CFSecISOCcyBuff* myBuff = getISOCcyBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamISOCcyEditObj::copyOrigToBuff() {
		cfsec::CFSecISOCcyBuff* origBuff = getOrigAsISOCcy()->getISOCcyBuff();
		cfsec::CFSecISOCcyBuff* myBuff = getISOCcyEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
