#pragma once

// Description: C++18 edit object instance specification for CFBam ServiceType.

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
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>

namespace cfbam {

	class CFBamServiceTypeEditObj
	: public virtual ICFBamServiceTypeEditObj,
	  public virtual cfsec::ICFSecServiceTypeEditObj,
	  public virtual cfint::ICFIntServiceTypeEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfsec::ICFSecServiceTypeObj* orig;
		cfsec::CFSecServiceTypeBuff* buff;
		cfsec::ICFSecSecUserObj* createdBy = NULL;
		cfsec::ICFSecSecUserObj* updatedBy = NULL;
	public:
		CFBamServiceTypeEditObj( cfsec::ICFSecServiceTypeObj* argOrig );
		virtual ~CFBamServiceTypeEditObj();

		virtual const std::string& getClassName() const;

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );
		virtual cfsec::ICFSecSecUserObj* getCreatedBy();
		virtual const std::chrono::system_clock::time_point& getCreatedAt();
		virtual cfsec::ICFSecSecUserObj* getUpdatedBy();
		virtual const std::chrono::system_clock::time_point& getUpdatedAt();

		virtual void setCreatedBy( cfsec::ICFSecSecUserObj* value );
		virtual void setCreatedAt( const std::chrono::system_clock::time_point& value );
		virtual void setUpdatedBy( cfsec::ICFSecSecUserObj* value );
		virtual void setUpdatedAt( const std::chrono::system_clock::time_point& value );

		virtual const classcode_t getClassCode() const;
		virtual bool implementsClassCode( const classcode_t value ) const;
		virtual std::string toString();

		virtual std::string getObjName();

		virtual const std::string getGenDefName();

		virtual cflib::ICFLibAnyObj* getScope();
		virtual cflib::ICFLibAnyObj* getObjScope();

		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClass );

		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClass, const std::string& objName );

		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName );

		virtual std::string getObjQualifiedName();

		virtual std::string getObjFullName();

		virtual ICFSecServiceTypeObj* realize();

		virtual cfsec::ICFSecServiceTypeObj* read( bool forceRead = false );

		virtual ICFSecServiceTypeObj* create();

		virtual ICFSecServiceTypeEditObj* update();

		virtual ICFSecServiceTypeEditObj* deleteInstance();

		virtual cfsec::ICFSecServiceTypeTableObj* getServiceTypeTable();

		virtual cfsec::ICFSecServiceTypeEditObj* getEdit();

		virtual cfsec::ICFSecServiceTypeEditObj* getServiceTypeEdit();

		virtual ICFSecServiceTypeEditObj* beginEdit();

		virtual void endEdit();

		virtual cfsec::ICFSecServiceTypeObj* getOrig();

		virtual cfsec::ICFSecServiceTypeObj* getOrigAsServiceType();

		virtual cfsec::ICFSecSchemaObj* getSchema();

		virtual cfsec::CFSecServiceTypeBuff* getBuff();
		virtual void setBuff( cfsec::CFSecServiceTypeBuff* value );

		inline cfsec::CFSecServiceTypeBuff* getServiceTypeBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfsec::CFSecServiceTypeBuff*>( buff ) );
		};

		inline cfsec::CFSecServiceTypeBuff* getServiceTypeEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfsec::CFSecServiceTypeBuff*>( buff ) );
		};

		virtual cfsec::CFSecServiceTypePKey* getPKey();
		virtual void setPKey( cfsec::CFSecServiceTypePKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int32_t getRequiredServiceTypeId();
		virtual const int32_t* getRequiredServiceTypeIdReference();

		virtual const std::string& getRequiredDescription();
		virtual const std::string* getRequiredDescriptionReference();
		virtual void setRequiredDescription( const std::string& value );

		virtual std::vector<cfsec::ICFSecServiceObj*> getOptionalChildrenDeployed( bool forceRead = false );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
