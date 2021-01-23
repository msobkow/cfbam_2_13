#pragma once

// Description: C++18 edit object instance specification for CFBam TableCol.

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

	class CFBamTableColEditObj
	: public CFBamValueEditObj,
	  public virtual ICFBamTableColEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFBamTableColEditObj( cfbam::ICFBamTableColObj* argOrig );
		virtual ~CFBamTableColEditObj();

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

		virtual cfbam::ICFBamTableColTableObj* getTableColTable();

		virtual cfbam::ICFBamTableColEditObj* getTableColEdit();

		virtual ICFBamValueEditObj* beginEdit();

		virtual cfbam::ICFBamTableColObj* getOrigAsTableCol();

		virtual cfbam::CFBamValueBuff* getBuff();
		virtual void setBuff( cfbam::CFBamValueBuff* value );

		inline cfbam::CFBamTableColBuff* getTableColBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamTableColBuff*>( buff ) );
		};

		inline cfbam::CFBamTableColBuff* getTableColEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamTableColBuff*>( buff ) );
		};

		virtual const int64_t getRequiredTableId();
		virtual const int64_t* getRequiredTableIdReference();

		virtual bool isOptionalDbNameNull();
		virtual const std::string& getOptionalDbNameValue();
		virtual const std::string* getOptionalDbNameReference();
		virtual void setOptionalDbNameNull();
		virtual void setOptionalDbNameValue( const std::string& value );

		virtual bool isOptionalDataTenantIdNull();
		virtual const int64_t getOptionalDataTenantIdValue();
		virtual const int64_t* getOptionalDataTenantIdReference();

		virtual bool isOptionalDataIdNull();
		virtual const int64_t getOptionalDataIdValue();
		virtual const int64_t* getOptionalDataIdReference();

		virtual bool isOptionalXmlElementNameNull();
		virtual const std::string& getOptionalXmlElementNameValue();
		virtual const std::string* getOptionalXmlElementNameReference();
		virtual void setOptionalXmlElementNameNull();
		virtual void setOptionalXmlElementNameValue( const std::string& value );

		virtual void setRequiredContainerScope( cfbam::ICFBamScopeObj* value );

		virtual cfbam::ICFBamTableObj* getRequiredContainerTable( bool forceRead = false );
		virtual void setRequiredContainerTable( cfbam::ICFBamTableObj* value );

		virtual cfbam::ICFBamValueObj* getRequiredParentDataType( bool forceRead = false );
		virtual void setRequiredParentDataType( cfbam::ICFBamValueObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
