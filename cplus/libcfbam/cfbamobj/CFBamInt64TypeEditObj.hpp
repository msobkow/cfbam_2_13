#pragma once

// Description: C++18 edit object instance specification for CFBam Int64Type.

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

	class CFBamInt64TypeEditObj
	: public CFBamInt64DefEditObj,
	  public virtual ICFBamInt64TypeEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFBamInt64TypeEditObj( cfbam::ICFBamInt64TypeObj* argOrig );
		virtual ~CFBamInt64TypeEditObj();

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

		virtual ICFBamValueObj* realize();

		virtual cfbam::ICFBamValueObj* moveUp();

		virtual cfbam::ICFBamValueObj* moveDown();

		virtual ICFBamValueObj* create();

		virtual ICFBamValueEditObj* update();

		virtual ICFBamValueEditObj* deleteInstance();

		virtual cfbam::ICFBamInt64TypeTableObj* getInt64TypeTable();

		virtual cfbam::ICFBamInt64TypeEditObj* getInt64TypeEdit();

		virtual ICFBamValueEditObj* beginEdit();

		virtual cfbam::ICFBamInt64TypeObj* getOrigAsInt64Type();

		virtual cfbam::CFBamValueBuff* getBuff();
		virtual void setBuff( cfbam::CFBamValueBuff* value );

		inline cfbam::CFBamInt64TypeBuff* getInt64TypeBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamInt64TypeBuff*>( buff ) );
		};

		inline cfbam::CFBamInt64TypeBuff* getInt64TypeEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamInt64TypeBuff*>( buff ) );
		};

		virtual const int64_t getRequiredSchemaDefId();
		virtual const int64_t* getRequiredSchemaDefIdReference();

		virtual void setRequiredContainerScope( cfbam::ICFBamScopeObj* value );

		virtual cfbam::ICFBamSchemaDefObj* getRequiredContainerSchemaDef( bool forceRead = false );
		virtual void setRequiredContainerSchemaDef( cfbam::ICFBamSchemaDefObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
