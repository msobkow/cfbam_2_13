// Description: C++18 base object instance implementation for CFBam SysCluster.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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
#include <cfbamobj/CFBamSysClusterObj.hpp>

namespace cfbam {

	const std::string CFBamSysClusterObj::CLASS_NAME( "CFBamSysClusterObj" );
	const classcode_t CFBamSysClusterObj::CLASS_CODE = 0xa014L;

	int32_t CFBamSysClusterObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int32_t CFBamSysClusterObj::getRequiredSingletonId() {
		return( getPKey()->getRequiredSingletonId() );
	}

	const int32_t* CFBamSysClusterObj::getRequiredSingletonIdReference() {
		return( getPKey()->getRequiredSingletonIdReference() );
	}

	const int64_t CFBamSysClusterObj::getRequiredClusterId() {
		return( getSysClusterBuff()->getRequiredClusterId() );
	}

	const int64_t* CFBamSysClusterObj::getRequiredClusterIdReference() {
		return( getSysClusterBuff()->getRequiredClusterIdReference() );
	}


	cfsec::ICFSecClusterObj* CFBamSysClusterObj::getRequiredContainerCluster( bool forceRead ) {
		cfsec::ICFSecClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getSysClusterBuff()->getRequiredClusterId(), forceRead );
		}
		return( retobj );
	}

	CFBamSysClusterObj::CFBamSysClusterObj()
	: ICFBamSysClusterObj(),
	  ICFSecSysClusterObj(),
	  ICFIntSysClusterObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamSysClusterObj::CFBamSysClusterObj( cfsec::ICFSecSchemaObj* argSchema )
	: ICFBamSysClusterObj(),
	  ICFSecSysClusterObj(),
	  ICFIntSysClusterObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFBamSysClusterObj::~CFBamSysClusterObj() {
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

	cfsec::CFSecSysClusterBuff* CFBamSysClusterObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfsec::CFSecSysClusterBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSysCluster()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredSingletonId() );
			}
		}
		return( buff );
	}

	void CFBamSysClusterObj::setBuff( cfsec::CFSecSysClusterBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamSysClusterObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamSysClusterObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamSysClusterObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfsec::CFSecSysClusterBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFBamSysClusterObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSysClusterObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_SingletonId( "SingletonId" );
		static const std::string S_ClusterId( "ClusterId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamSysClusterObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SingletonId, CFBamSysClusterObj::getRequiredSingletonId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFBamSysClusterObj::getRequiredClusterId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamSysClusterObj::getObjName() {
		std::string objName( CLASS_NAME );
		int32_t val = getRequiredSingletonId();
		objName = cflib::CFLibXmlUtil::formatInt32( val );
		return( objName );
	}

	const std::string CFBamSysClusterObj::getGenDefName() {
		return( cfsec::CFSecSysClusterBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSysClusterObj::getScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSysClusterObj::getObjScope() {
		cfsec::ICFSecClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSysClusterObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSysClusterObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSysClusterObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamSysClusterObj::getObjQualifiedName() {
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

	std::string CFBamSysClusterObj::getObjFullName() {
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

	cfsec::ICFSecSysClusterObj* CFBamSysClusterObj::realize() {
		cfsec::ICFSecSysClusterObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSysClusterTableObj()->realizeSysCluster(
			(cfsec::ICFSecSysClusterObj*)this );
		return( dynamic_cast<cfsec::ICFSecSysClusterObj*>( retobj ) );
	}

	cfsec::ICFSecSysClusterObj* CFBamSysClusterObj::read( bool forceRead ) {
		cfsec::ICFSecSysClusterObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSysClusterTableObj()->readSysClusterByIdIdx( getSysClusterBuff()->getRequiredSingletonId(), forceRead );
		return( dynamic_cast<cfsec::ICFSecSysClusterObj*>( retobj ) );
	}

	cfsec::ICFSecSysClusterTableObj* CFBamSysClusterObj::getSysClusterTable() {
		return( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSysClusterTableObj() );
	}

	cfsec::ICFSecSchemaObj* CFBamSysClusterObj::getSchema() {
		return( schema );
	}

	void CFBamSysClusterObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = value;
	}

	cfsec::CFSecSysClusterPKey* CFBamSysClusterObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfsec::CFSecSysClusterPKey();
		}
		return( pKey );
	}

	void CFBamSysClusterObj::setPKey( cfsec::CFSecSysClusterPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfsec::CFSecSysClusterPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFBamSysClusterObj::getIsNew() {
		return( isNew );
	}

	void CFBamSysClusterObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfsec::ICFSecSysClusterEditObj* CFBamSysClusterObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfsec::ICFSecSysClusterObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSysClusterTableObj()->lockSysCluster( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSysClusterTableObj()->newEditInstance( this );
		return( dynamic_cast<cfsec::ICFSecSysClusterEditObj*>( edit ) );
	}

	void CFBamSysClusterObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfsec::ICFSecSysClusterEditObj* CFBamSysClusterObj::getEdit() {
		return( edit );
	}

	cfsec::ICFSecSysClusterEditObj* CFBamSysClusterObj::getSysClusterEdit() {
		return( dynamic_cast<cfsec::ICFSecSysClusterEditObj*>( edit ) );
	}

	void CFBamSysClusterObj::copyPKeyToBuff() {
		cfsec::CFSecSysClusterPKey* tablePKey = getPKey();
		cfsec::CFSecSysClusterBuff* tableBuff = getSysClusterEditBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredSingletonId( tablePKey->getRequiredSingletonId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFBamSysClusterObj::copyBuffToPKey() {
		cfsec::CFSecSysClusterPKey* tablePKey = getPKey();
		cfsec::CFSecSysClusterBuff* tableBuff = getSysClusterBuff();
		tablePKey->setRequiredSingletonId( tableBuff->getRequiredSingletonId() );
	}

}
