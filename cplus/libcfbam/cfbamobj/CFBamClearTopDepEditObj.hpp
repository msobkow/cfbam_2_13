#pragma once

// Description: C++18 edit object instance specification for CFBam ClearTopDep.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
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

	class CFBamClearTopDepEditObj
	: public CFBamClearDepEditObj,
	  public virtual ICFBamClearTopDepEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFBamClearTopDepEditObj( cfbam::ICFBamClearTopDepObj* argOrig );
		virtual ~CFBamClearTopDepEditObj();

		virtual const std::string& getClassName() const;

		virtual const classcode_t getClassCode() const;
		virtual bool implementsClassCode( const classcode_t value ) const;
		virtual std::string toString();

		virtual const std::string getGenDefName();

		virtual cflib::ICFLibAnyObj* getScope();
		virtual cflib::ICFLibAnyObj* getObjScope();

		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClass );

		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClass, const std::string& objName );

		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName );

		virtual std::string getObjQualifiedName();

		virtual std::string getObjFullName();

		virtual ICFBamScopeObj* realize();

		virtual cfbam::ICFBamClearTopDepObj* moveUp();

		virtual cfbam::ICFBamClearTopDepObj* moveDown();

		virtual ICFBamScopeObj* create();

		virtual ICFBamScopeEditObj* update();

		virtual ICFBamScopeEditObj* deleteInstance();

		virtual cfbam::ICFBamClearTopDepTableObj* getClearTopDepTable();

		virtual cfbam::ICFBamClearTopDepEditObj* getClearTopDepEdit();

		virtual ICFBamScopeEditObj* beginEdit();

		virtual cfbam::ICFBamClearTopDepObj* getOrigAsClearTopDep();

		virtual cfbam::CFBamScopeBuff* getBuff();
		virtual void setBuff( cfbam::CFBamScopeBuff* value );

		inline cfbam::CFBamClearTopDepBuff* getClearTopDepBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamClearTopDepBuff*>( buff ) );
		};

		inline cfbam::CFBamClearTopDepBuff* getClearTopDepEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamClearTopDepBuff*>( buff ) );
		};

		virtual const int64_t getRequiredTableTenantId();
		virtual const int64_t* getRequiredTableTenantIdReference();

		virtual const int64_t getRequiredTableId();
		virtual const int64_t* getRequiredTableIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual bool isOptionalPrevTenantIdNull();
		virtual const int64_t getOptionalPrevTenantIdValue();
		virtual const int64_t* getOptionalPrevTenantIdReference();

		virtual bool isOptionalPrevIdNull();
		virtual const int64_t getOptionalPrevIdValue();
		virtual const int64_t* getOptionalPrevIdReference();

		virtual bool isOptionalNextTenantIdNull();
		virtual const int64_t getOptionalNextTenantIdValue();
		virtual const int64_t* getOptionalNextTenantIdReference();

		virtual bool isOptionalNextIdNull();
		virtual const int64_t getOptionalNextIdValue();
		virtual const int64_t* getOptionalNextIdReference();

		virtual cfbam::ICFBamTableObj* getRequiredContainerTable( bool forceRead = false );
		virtual void setRequiredContainerTable( cfbam::ICFBamTableObj* value );

		virtual std::vector<cfbam::ICFBamClearSubDep1Obj*> getOptionalComponentsClearDep( bool forceRead = false );

		virtual cfbam::ICFBamClearTopDepObj* getOptionalLookupPrev( bool forceRead = false );
		virtual void setOptionalLookupPrev( cfbam::ICFBamClearTopDepObj* value );

		virtual cfbam::ICFBamClearTopDepObj* getOptionalLookupNext( bool forceRead = false );
		virtual void setOptionalLookupNext( cfbam::ICFBamClearTopDepObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
