#pragma once

// Description: C++18 edit object instance specification for CFBam PopSubDep1.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
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
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>

namespace cfbam {

	class CFBamPopSubDep1EditObj
	: public CFBamPopDepEditObj,
	  public virtual ICFBamPopSubDep1EditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFBamPopSubDep1EditObj( cfbam::ICFBamPopSubDep1Obj* argOrig );
		virtual ~CFBamPopSubDep1EditObj();

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

		virtual ICFBamScopeObj* create();

		virtual ICFBamScopeEditObj* update();

		virtual ICFBamScopeEditObj* deleteInstance();

		virtual cfbam::ICFBamPopSubDep1TableObj* getPopSubDep1Table();

		virtual cfbam::ICFBamPopSubDep1EditObj* getPopSubDep1Edit();

		virtual ICFBamScopeEditObj* beginEdit();

		virtual cfbam::ICFBamPopSubDep1Obj* getOrigAsPopSubDep1();

		virtual cfbam::CFBamScopeBuff* getBuff();
		virtual void setBuff( cfbam::CFBamScopeBuff* value );

		inline cfbam::CFBamPopSubDep1Buff* getPopSubDep1Buff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamPopSubDep1Buff*>( buff ) );
		};

		inline cfbam::CFBamPopSubDep1Buff* getPopSubDep1EditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff ) );
		};

		virtual const int64_t getRequiredPopTopDepTenantId();
		virtual const int64_t* getRequiredPopTopDepTenantIdReference();

		virtual const int64_t getRequiredPopTopDepId();
		virtual const int64_t* getRequiredPopTopDepIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual cfbam::ICFBamPopTopDepObj* getRequiredContainerContPopTopDep( bool forceRead = false );
		virtual void setRequiredContainerContPopTopDep( cfbam::ICFBamPopTopDepObj* value );

		virtual std::vector<cfbam::ICFBamPopSubDep2Obj*> getOptionalComponentsPopDep( bool forceRead = false );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
