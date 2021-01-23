#pragma once

// Description: C++18 edit object instance specification for CFBam Relation.

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

	class CFBamRelationEditObj
	: public CFBamScopeEditObj,
	  public virtual ICFBamRelationEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFBamRelationEditObj( cfbam::ICFBamRelationObj* argOrig );
		virtual ~CFBamRelationEditObj();

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

		virtual cfbam::ICFBamRelationTableObj* getRelationTable();

		virtual cfbam::ICFBamRelationEditObj* getRelationEdit();

		virtual ICFBamScopeEditObj* beginEdit();

		virtual cfbam::ICFBamRelationObj* getOrigAsRelation();

		virtual cfbam::CFBamScopeBuff* getBuff();
		virtual void setBuff( cfbam::CFBamScopeBuff* value );

		inline cfbam::CFBamRelationBuff* getRelationBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamRelationBuff*>( buff ) );
		};

		inline cfbam::CFBamRelationBuff* getRelationEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamRelationBuff*>( buff ) );
		};

		virtual const int64_t getRequiredTableId();
		virtual const int64_t* getRequiredTableIdReference();

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

		virtual const cfbam::ICFBamSchema::RelationTypeEnum getRequiredRelationType();
		virtual const cfbam::ICFBamSchema::RelationTypeEnum* getRequiredRelationTypeReference();
		virtual void setRequiredRelationType( const cfbam::ICFBamSchema::RelationTypeEnum value );

		virtual bool isOptionalDbNameNull();
		virtual const std::string& getOptionalDbNameValue();
		virtual const std::string* getOptionalDbNameReference();
		virtual void setOptionalDbNameNull();
		virtual void setOptionalDbNameValue( const std::string& value );

		virtual bool isOptionalSuffixNull();
		virtual const std::string& getOptionalSuffixValue();
		virtual const std::string* getOptionalSuffixReference();
		virtual void setOptionalSuffixNull();
		virtual void setOptionalSuffixValue( const std::string& value );

		virtual const int64_t getRequiredFromIndexId();
		virtual const int64_t* getRequiredFromIndexIdReference();

		virtual const int64_t getRequiredToTableId();
		virtual const int64_t* getRequiredToTableIdReference();

		virtual const int64_t getRequiredToIndexId();
		virtual const int64_t* getRequiredToIndexIdReference();

		virtual const bool getRequiredIsRequired();
		virtual const bool* getRequiredIsRequiredReference();
		virtual void setRequiredIsRequired( const bool value );

		virtual const bool getRequiredIsXsdContainer();
		virtual const bool* getRequiredIsXsdContainerReference();
		virtual void setRequiredIsXsdContainer( const bool value );

		virtual const bool getRequiredIsLateResolver();
		virtual const bool* getRequiredIsLateResolverReference();
		virtual void setRequiredIsLateResolver( const bool value );

		virtual const bool getRequiredAllowAddendum();
		virtual const bool* getRequiredAllowAddendumReference();
		virtual void setRequiredAllowAddendum( const bool value );

		virtual bool isOptionalNarrowedTenantIdNull();
		virtual const int64_t getOptionalNarrowedTenantIdValue();
		virtual const int64_t* getOptionalNarrowedTenantIdReference();

		virtual bool isOptionalNarrowedIdNull();
		virtual const int64_t getOptionalNarrowedIdValue();
		virtual const int64_t* getOptionalNarrowedIdReference();

		virtual cfbam::ICFBamSchemaDefObj* getOptionalLookupDefSchema( bool forceRead = false );
		virtual void setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value );

		virtual cfbam::ICFBamTableObj* getRequiredContainerFromTable( bool forceRead = false );
		virtual void setRequiredContainerFromTable( cfbam::ICFBamTableObj* value );

		virtual std::vector<cfbam::ICFBamRelationColObj*> getOptionalComponentsColumns( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamPopTopDepObj*> getOptionalComponentsPopDep( bool forceRead = false );

		virtual cfsec::ICFSecTenantObj* getRequiredOwnerRelTenant( bool forceRead = false );
		virtual void setRequiredOwnerRelTenant( cfsec::ICFSecTenantObj* value );

		virtual cfbam::ICFBamIndexObj* getRequiredLookupFromIndex( bool forceRead = false );
		virtual void setRequiredLookupFromIndex( cfbam::ICFBamIndexObj* value );

		virtual cfbam::ICFBamTableObj* getRequiredLookupToTable( bool forceRead = false );
		virtual void setRequiredLookupToTable( cfbam::ICFBamTableObj* value );

		virtual cfbam::ICFBamIndexObj* getRequiredLookupToIndex( bool forceRead = false );
		virtual void setRequiredLookupToIndex( cfbam::ICFBamIndexObj* value );

		virtual cfbam::ICFBamRelationObj* getOptionalLookupNarrowed( bool forceRead = false );
		virtual void setOptionalLookupNarrowed( cfbam::ICFBamRelationObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		protected:
			virtual std::string getVersionStringForVersion( cflib::ICFLibAnyObj* value );
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
