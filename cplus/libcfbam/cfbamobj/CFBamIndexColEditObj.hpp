#pragma once

// Description: C++18 edit object instance specification for CFBam IndexCol.

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

	class CFBamIndexColEditObj
	: public virtual ICFBamIndexColEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfbam::ICFBamIndexColObj* orig;
		cfbam::CFBamIndexColBuff* buff;
		cfsec::ICFSecSecUserObj* createdBy = NULL;
		cfsec::ICFSecSecUserObj* updatedBy = NULL;
	public:
		CFBamIndexColEditObj( cfbam::ICFBamIndexColObj* argOrig );
		virtual ~CFBamIndexColEditObj();

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

		virtual ICFBamIndexColObj* realize();

		virtual cfbam::ICFBamIndexColObj* read( bool forceRead = false );

		virtual cfbam::ICFBamIndexColObj* moveUp();

		virtual cfbam::ICFBamIndexColObj* moveDown();

		virtual ICFBamIndexColObj* create();

		virtual ICFBamIndexColEditObj* update();

		virtual ICFBamIndexColEditObj* deleteInstance();

		virtual cfbam::ICFBamIndexColTableObj* getIndexColTable();

		virtual cfbam::ICFBamIndexColEditObj* getEdit();

		virtual cfbam::ICFBamIndexColEditObj* getIndexColEdit();

		virtual ICFBamIndexColEditObj* beginEdit();

		virtual void endEdit();

		virtual cfbam::ICFBamIndexColObj* getOrig();

		virtual cfbam::ICFBamIndexColObj* getOrigAsIndexCol();

		virtual cfbam::ICFBamSchemaObj* getSchema();

		virtual cfbam::CFBamIndexColBuff* getBuff();
		virtual void setBuff( cfbam::CFBamIndexColBuff* value );

		inline cfbam::CFBamIndexColBuff* getIndexColBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamIndexColBuff*>( buff ) );
		};

		inline cfbam::CFBamIndexColBuff* getIndexColEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff ) );
		};

		virtual cfbam::CFBamIndexColPKey* getPKey();
		virtual void setPKey( cfbam::CFBamIndexColPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredTenantId();
		virtual const int64_t* getRequiredTenantIdReference();

		virtual const int64_t getRequiredIndexId();
		virtual const int64_t* getRequiredIndexIdReference();

		virtual const int64_t getRequiredId();
		virtual const int64_t* getRequiredIdReference();

		virtual bool isOptionalDefSchemaTenantIdNull();
		virtual const int64_t getOptionalDefSchemaTenantIdValue();
		virtual const int64_t* getOptionalDefSchemaTenantIdReference();

		virtual bool isOptionalDefSchemaIdNull();
		virtual const int64_t getOptionalDefSchemaIdValue();
		virtual const int64_t* getOptionalDefSchemaIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual bool isOptionalShortNameNull();
		virtual const std::string& getOptionalShortNameValue();
		virtual const std::string* getOptionalShortNameReference();
		virtual void setOptionalShortNameNull();
		virtual void setOptionalShortNameValue( const std::string& value );

		virtual bool isOptionalLabelNull();
		virtual const std::string& getOptionalLabelValue();
		virtual const std::string* getOptionalLabelReference();
		virtual void setOptionalLabelNull();
		virtual void setOptionalLabelValue( const std::string& value );

		virtual bool isOptionalShortDescriptionNull();
		virtual const std::string& getOptionalShortDescriptionValue();
		virtual const std::string* getOptionalShortDescriptionReference();
		virtual void setOptionalShortDescriptionNull();
		virtual void setOptionalShortDescriptionValue( const std::string& value );

		virtual bool isOptionalDescriptionNull();
		virtual const std::string& getOptionalDescriptionValue();
		virtual const std::string* getOptionalDescriptionReference();
		virtual void setOptionalDescriptionNull();
		virtual void setOptionalDescriptionValue( const std::string& value );

		virtual const int64_t getRequiredColumnId();
		virtual const int64_t* getRequiredColumnIdReference();

		virtual const bool getRequiredIsAscending();
		virtual const bool* getRequiredIsAscendingReference();
		virtual void setRequiredIsAscending( const bool value );

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

		virtual cfsec::ICFSecTenantObj* getRequiredOwnerTenant( bool forceRead = false );
		virtual void setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value );

		virtual cfbam::ICFBamIndexObj* getRequiredContainerIndex( bool forceRead = false );
		virtual void setRequiredContainerIndex( cfbam::ICFBamIndexObj* value );

		virtual cfbam::ICFBamSchemaDefObj* getOptionalLookupDefSchema( bool forceRead = false );
		virtual void setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value );

		virtual std::vector<cfbam::ICFBamRelationColObj*> getOptionalChildrenRefRelFromCol( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamRelationColObj*> getOptionalChildrenRefRelToCol( bool forceRead = false );

		virtual cfbam::ICFBamIndexColObj* getOptionalLookupPrev( bool forceRead = false );
		virtual void setOptionalLookupPrev( cfbam::ICFBamIndexColObj* value );

		virtual cfbam::ICFBamIndexColObj* getOptionalLookupNext( bool forceRead = false );
		virtual void setOptionalLookupNext( cfbam::ICFBamIndexColObj* value );

		virtual cfbam::ICFBamValueObj* getRequiredLookupColumn( bool forceRead = false );
		virtual void setRequiredLookupColumn( cfbam::ICFBamValueObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
