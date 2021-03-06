#pragma once

// Description: C++18 edit object instance specification for CFBam Id32Gen.

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

	class CFBamId32GenEditObj
	: public CFBamInt32TypeEditObj,
	  public virtual ICFBamId32GenEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFBamId32GenEditObj( cfbam::ICFBamId32GenObj* argOrig );
		virtual ~CFBamId32GenEditObj();

		virtual const std::string& getClassName() const;

		virtual const classcode_t getClassCode() const;
		virtual bool implementsClassCode( const classcode_t value ) const;
		virtual std::string toString();

		virtual const std::string getGenDefName();

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

		virtual cfbam::ICFBamId32GenTableObj* getId32GenTable();

		virtual cfbam::ICFBamId32GenEditObj* getId32GenEdit();

		virtual ICFBamValueEditObj* beginEdit();

		virtual cfbam::ICFBamId32GenObj* getOrigAsId32Gen();

		virtual cfbam::CFBamValueBuff* getBuff();
		virtual void setBuff( cfbam::CFBamValueBuff* value );

		inline cfbam::CFBamId32GenBuff* getId32GenBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamId32GenBuff*>( buff ) );
		};

		inline cfbam::CFBamId32GenBuff* getId32GenEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamId32GenBuff*>( buff ) );
		};

		virtual bool isOptionalDispenserTenantIdNull();
		virtual const int64_t getOptionalDispenserTenantIdValue();
		virtual const int64_t* getOptionalDispenserTenantIdReference();

		virtual bool isOptionalDispenserIdNull();
		virtual const int64_t getOptionalDispenserIdValue();
		virtual const int64_t* getOptionalDispenserIdReference();

		virtual const int16_t getRequiredSlice();
		virtual const int16_t* getRequiredSliceReference();
		virtual void setRequiredSlice( const int16_t value );

		virtual const int32_t getRequiredBlockSize();
		virtual const int32_t* getRequiredBlockSizeReference();
		virtual void setRequiredBlockSize( const int32_t value );

		virtual cfbam::ICFBamTableObj* getOptionalLookupDispenser( bool forceRead = false );
		virtual void setOptionalLookupDispenser( cfbam::ICFBamTableObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
