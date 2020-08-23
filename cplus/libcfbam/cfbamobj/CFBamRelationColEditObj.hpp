#pragma once

// Description: C++18 edit object instance specification for CFBam RelationCol.

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

	class CFBamRelationColEditObj
	: public virtual ICFBamRelationColEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cfbam::ICFBamRelationColObj* orig;
		cfbam::CFBamRelationColBuff* buff;
		cfsec::ICFSecSecUserObj* createdBy = NULL;
		cfsec::ICFSecSecUserObj* updatedBy = NULL;
	public:
		CFBamRelationColEditObj( cfbam::ICFBamRelationColObj* argOrig );
		virtual ~CFBamRelationColEditObj();

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

		virtual ICFBamRelationColObj* realize();

		virtual cfbam::ICFBamRelationColObj* read( bool forceRead = false );

		virtual cfbam::ICFBamRelationColObj* moveUp();

		virtual cfbam::ICFBamRelationColObj* moveDown();

		virtual ICFBamRelationColObj* create();

		virtual ICFBamRelationColEditObj* update();

		virtual ICFBamRelationColEditObj* deleteInstance();

		virtual cfbam::ICFBamRelationColTableObj* getRelationColTable();

		virtual cfbam::ICFBamRelationColEditObj* getEdit();

		virtual cfbam::ICFBamRelationColEditObj* getRelationColEdit();

		virtual ICFBamRelationColEditObj* beginEdit();

		virtual void endEdit();

		virtual cfbam::ICFBamRelationColObj* getOrig();

		virtual cfbam::ICFBamRelationColObj* getOrigAsRelationCol();

		virtual cfbam::ICFBamSchemaObj* getSchema();

		virtual cfbam::CFBamRelationColBuff* getBuff();
		virtual void setBuff( cfbam::CFBamRelationColBuff* value );

		inline cfbam::CFBamRelationColBuff* getRelationColBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamRelationColBuff*>( buff ) );
		};

		inline cfbam::CFBamRelationColBuff* getRelationColEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff ) );
		};

		virtual cfbam::CFBamRelationColPKey* getPKey();
		virtual void setPKey( cfbam::CFBamRelationColPKey* value );

		virtual bool getIsNew();
		virtual void setIsNew( bool value );

		virtual const int64_t getRequiredTenantId();
		virtual const int64_t* getRequiredTenantIdReference();

		virtual const int64_t getRequiredRelationId();
		virtual const int64_t* getRequiredRelationIdReference();

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

		virtual const int64_t getRequiredFromColId();
		virtual const int64_t* getRequiredFromColIdReference();

		virtual const int64_t getRequiredToColId();
		virtual const int64_t* getRequiredToColIdReference();

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

		virtual cfbam::ICFBamRelationObj* getRequiredContainerRelation( bool forceRead = false );
		virtual void setRequiredContainerRelation( cfbam::ICFBamRelationObj* value );

		virtual cfsec::ICFSecTenantObj* getRequiredOwnerTenant( bool forceRead = false );
		virtual void setRequiredOwnerTenant( cfsec::ICFSecTenantObj* value );

		virtual cfbam::ICFBamSchemaDefObj* getOptionalLookupDefSchema( bool forceRead = false );
		virtual void setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value );

		virtual cfbam::ICFBamRelationColObj* getOptionalLookupPrev( bool forceRead = false );
		virtual void setOptionalLookupPrev( cfbam::ICFBamRelationColObj* value );

		virtual cfbam::ICFBamRelationColObj* getOptionalLookupNext( bool forceRead = false );
		virtual void setOptionalLookupNext( cfbam::ICFBamRelationColObj* value );

		virtual cfbam::ICFBamIndexColObj* getRequiredLookupFromCol( bool forceRead = false );
		virtual void setRequiredLookupFromCol( cfbam::ICFBamIndexColObj* value );

		virtual cfbam::ICFBamIndexColObj* getRequiredLookupToCol( bool forceRead = false );
		virtual void setRequiredLookupToCol( cfbam::ICFBamIndexColObj* value );

		virtual void copyPKeyToBuff();

		virtual void copyBuffToPKey();

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		protected:
			virtual std::string getVersionStringForVersion( cflib::ICFLibAnyObj* obj );
		public:
			virtual cfbam::ICFBamSubProjectObj* getProject();
			virtual cfbam::ICFBamTopDomainObj* getCompany();
			virtual cfbam::ICFBamSchemaDefObj* getSchemaDef();
			virtual cfbam::ICFBamMinorVersionObj* getVersion();
			virtual std::string getVersionString();
			virtual std::string getPackedVersionString();
			virtual bool isColumnInOwnerRelation();

	};
}
