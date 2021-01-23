#pragma once

// Description: C++18 edit object instance specification for CFBam SchemaRef.

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

	class CFBamSchemaRefEditObj
	: public CFBamScopeEditObj,
	  public virtual ICFBamSchemaRefEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFBamSchemaRefEditObj( cfbam::ICFBamSchemaRefObj* argOrig );
		virtual ~CFBamSchemaRefEditObj();

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

		virtual cfbam::ICFBamSchemaRefObj* moveUp();

		virtual cfbam::ICFBamSchemaRefObj* moveDown();

		virtual ICFBamScopeObj* create();

		virtual ICFBamScopeEditObj* update();

		virtual ICFBamScopeEditObj* deleteInstance();

		virtual cfbam::ICFBamSchemaRefTableObj* getSchemaRefTable();

		virtual cfbam::ICFBamSchemaRefEditObj* getSchemaRefEdit();

		virtual ICFBamScopeEditObj* beginEdit();

		virtual cfbam::ICFBamSchemaRefObj* getOrigAsSchemaRef();

		virtual cfbam::CFBamScopeBuff* getBuff();
		virtual void setBuff( cfbam::CFBamScopeBuff* value );

		inline cfbam::CFBamSchemaRefBuff* getSchemaRefBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamSchemaRefBuff*>( buff ) );
		};

		inline cfbam::CFBamSchemaRefBuff* getSchemaRefEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff ) );
		};

		virtual const int64_t getRequiredSchemaId();
		virtual const int64_t* getRequiredSchemaIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual const std::string& getRequiredRefModelName();
		virtual const std::string* getRequiredRefModelNameReference();
		virtual void setRequiredRefModelName( const std::string& value );

		virtual const std::string& getRequiredIncludeRoot();
		virtual const std::string* getRequiredIncludeRootReference();
		virtual void setRequiredIncludeRoot( const std::string& value );

		virtual bool isOptionalRefSchemaTenantIdNull();
		virtual const int64_t getOptionalRefSchemaTenantIdValue();
		virtual const int64_t* getOptionalRefSchemaTenantIdReference();

		virtual bool isOptionalRefSchemaIdNull();
		virtual const int64_t getOptionalRefSchemaIdValue();
		virtual const int64_t* getOptionalRefSchemaIdReference();

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

		virtual cfbam::ICFBamSchemaDefObj* getRequiredContainerSchema( bool forceRead = false );
		virtual void setRequiredContainerSchema( cfbam::ICFBamSchemaDefObj* value );

		virtual cfbam::ICFBamSchemaDefObj* getOptionalLookupRefSchema( bool forceRead = false );
		virtual void setOptionalLookupRefSchema( cfbam::ICFBamSchemaDefObj* value );

		virtual cfbam::ICFBamSchemaRefObj* getOptionalLookupPrev( bool forceRead = false );
		virtual void setOptionalLookupPrev( cfbam::ICFBamSchemaRefObj* value );

		virtual cfbam::ICFBamSchemaRefObj* getOptionalLookupNext( bool forceRead = false );
		virtual void setOptionalLookupNext( cfbam::ICFBamSchemaRefObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
