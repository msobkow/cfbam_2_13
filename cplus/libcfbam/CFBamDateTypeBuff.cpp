// Description: C++18 implementation for a DateType buffer object.

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

using namespace std;

#include <cfbam/ICFBamPublic.hpp>

#include <cfbam/CFBamValueByUNameIdxKey.hpp>
#include <cfbam/CFBamValueByValTentIdxKey.hpp>
#include <cfbam/CFBamValueByScopeIdxKey.hpp>
#include <cfbam/CFBamValueByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamValueByPrevIdxKey.hpp>
#include <cfbam/CFBamValueByNextIdxKey.hpp>
#include <cfbam/CFBamValueByContPrevIdxKey.hpp>
#include <cfbam/CFBamValueByContNextIdxKey.hpp>
#include <cfbam/CFBamDateTypeBySchemaIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamDateTypeBuff::GENDEFNAME( "DateType" );
	const classcode_t CFBamDateTypeBuff::CLASS_CODE = 0xa816L;
	const std::string CFBamDateTypeBuff::CLASS_NAME( "CFBamDateTypeBuff" );
		const std::string CFBamDateTypeBuff::COLNAME_SCHEMADEFID( "SchemaDefId" );
	const int64_t CFBamDateTypeBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamDateTypeBuff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamDateTypeBuff::SCHEMADEFID_INIT_VALUE = 0LL;
	const int64_t CFBamDateTypeBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamDateTypeBuff::ID_MIN_VALUE = 0LL;
	const int64_t CFBamDateTypeBuff::SCHEMADEFID_MIN_VALUE = 0LL;

	CFBamDateTypeBuff::CFBamDateTypeBuff()
	: CFBamDateDefBuff()
	{
		requiredSchemaDefId = cfbam::CFBamDateTypeBuff::SCHEMADEFID_INIT_VALUE;
	}

	CFBamDateTypeBuff::CFBamDateTypeBuff( const CFBamDateTypeBuff& src )
	: CFBamDateDefBuff()
	{
		requiredSchemaDefId = cfbam::CFBamDateTypeBuff::SCHEMADEFID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredScopeId( src.getRequiredScopeId() );
		if( src.isOptionalDefSchemaTenantIdNull() ) {
			setOptionalDefSchemaTenantIdNull();
		}
		else {
			setOptionalDefSchemaTenantIdValue( src.getOptionalDefSchemaTenantIdValue() );
		}
		if( src.isOptionalDefSchemaIdNull() ) {
			setOptionalDefSchemaIdNull();
		}
		else {
			setOptionalDefSchemaIdValue( src.getOptionalDefSchemaIdValue() );
		}
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalShortNameNull() ) {
			setOptionalShortNameNull();
		}
		else {
			setOptionalShortNameValue( src.getOptionalShortNameValue() );
		}
		if( src.isOptionalLabelNull() ) {
			setOptionalLabelNull();
		}
		else {
			setOptionalLabelValue( src.getOptionalLabelValue() );
		}
		if( src.isOptionalShortDescriptionNull() ) {
			setOptionalShortDescriptionNull();
		}
		else {
			setOptionalShortDescriptionValue( src.getOptionalShortDescriptionValue() );
		}
		if( src.isOptionalDescriptionNull() ) {
			setOptionalDescriptionNull();
		}
		else {
			setOptionalDescriptionValue( src.getOptionalDescriptionValue() );
		}
		if( src.isOptionalDefaultXmlValueNull() ) {
			setOptionalDefaultXmlValueNull();
		}
		else {
			setOptionalDefaultXmlValueValue( src.getOptionalDefaultXmlValueValue() );
		}
		setRequiredIsNullable( src.getRequiredIsNullable() );
		if( src.isOptionalGenerateIdNull() ) {
			setOptionalGenerateIdNull();
		}
		else {
			setOptionalGenerateIdValue( src.getOptionalGenerateIdValue() );
		}
		setRequiredImplementsPolymorph( src.getRequiredImplementsPolymorph() );
		if( src.isOptionalPrevTenantIdNull() ) {
			setOptionalPrevTenantIdNull();
		}
		else {
			setOptionalPrevTenantIdValue( src.getOptionalPrevTenantIdValue() );
		}
		if( src.isOptionalPrevIdNull() ) {
			setOptionalPrevIdNull();
		}
		else {
			setOptionalPrevIdValue( src.getOptionalPrevIdValue() );
		}
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
		if( src.isOptionalDbNameNull() ) {
			setOptionalDbNameNull();
		}
		else {
			setOptionalDbNameValue( src.getOptionalDbNameValue() );
		}
		if( src.isOptionalDummyNull() ) {
			setOptionalDummyNull();
		}
		else {
			setOptionalDummyValue( src.getOptionalDummyValue() );
		}
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
	}

	CFBamDateTypeBuff::~CFBamDateTypeBuff() {
	}

	cflib::ICFLibCloneableObj* CFBamDateTypeBuff::clone() {
		CFBamDateTypeBuff* copy = new CFBamDateTypeBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamDateTypeBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDateTypeBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamDateTypeBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamDateDefBuff::implementsClassCode( argClassCode ) );
		}
	}

	const int64_t CFBamDateTypeBuff::getRequiredSchemaDefId() const {
		return( requiredSchemaDefId );
	}

	const int64_t* CFBamDateTypeBuff::getRequiredSchemaDefIdReference() const {
		return( &requiredSchemaDefId );
	}

	void CFBamDateTypeBuff::setRequiredSchemaDefId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSchemaDefId" );
		if( value < cfbam::CFBamDateTypeBuff::SCHEMADEFID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDateTypeBuff::SCHEMADEFID_MIN_VALUE );
		}
		requiredSchemaDefId = value;
	}

	size_t CFBamDateTypeBuff::hashCode() const {
		size_t hashCode = CFBamDateDefBuff::hashCode();
		hashCode = hashCode + (int)( getRequiredSchemaDefId() );
		return( hashCode );
	}

	CFBamDateTypeBuff CFBamDateTypeBuff::operator =( cfbam::CFBamDateTypeBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredScopeId( src.getRequiredScopeId() );
		if( src.isOptionalDefSchemaTenantIdNull() ) {
			setOptionalDefSchemaTenantIdNull();
		}
		else {
			setOptionalDefSchemaTenantIdValue( src.getOptionalDefSchemaTenantIdValue() );
		}
		if( src.isOptionalDefSchemaIdNull() ) {
			setOptionalDefSchemaIdNull();
		}
		else {
			setOptionalDefSchemaIdValue( src.getOptionalDefSchemaIdValue() );
		}
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalShortNameNull() ) {
			setOptionalShortNameNull();
		}
		else {
			setOptionalShortNameValue( src.getOptionalShortNameValue() );
		}
		if( src.isOptionalLabelNull() ) {
			setOptionalLabelNull();
		}
		else {
			setOptionalLabelValue( src.getOptionalLabelValue() );
		}
		if( src.isOptionalShortDescriptionNull() ) {
			setOptionalShortDescriptionNull();
		}
		else {
			setOptionalShortDescriptionValue( src.getOptionalShortDescriptionValue() );
		}
		if( src.isOptionalDescriptionNull() ) {
			setOptionalDescriptionNull();
		}
		else {
			setOptionalDescriptionValue( src.getOptionalDescriptionValue() );
		}
		if( src.isOptionalDefaultXmlValueNull() ) {
			setOptionalDefaultXmlValueNull();
		}
		else {
			setOptionalDefaultXmlValueValue( src.getOptionalDefaultXmlValueValue() );
		}
		setRequiredIsNullable( src.getRequiredIsNullable() );
		if( src.isOptionalGenerateIdNull() ) {
			setOptionalGenerateIdNull();
		}
		else {
			setOptionalGenerateIdValue( src.getOptionalGenerateIdValue() );
		}
		setRequiredImplementsPolymorph( src.getRequiredImplementsPolymorph() );
		if( src.isOptionalPrevTenantIdNull() ) {
			setOptionalPrevTenantIdNull();
		}
		else {
			setOptionalPrevTenantIdValue( src.getOptionalPrevTenantIdValue() );
		}
		if( src.isOptionalPrevIdNull() ) {
			setOptionalPrevIdNull();
		}
		else {
			setOptionalPrevIdValue( src.getOptionalPrevIdValue() );
		}
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
		if( src.isOptionalDbNameNull() ) {
			setOptionalDbNameNull();
		}
		else {
			setOptionalDbNameValue( src.getOptionalDbNameValue() );
		}
		if( src.isOptionalDummyNull() ) {
			setOptionalDummyNull();
		}
		else {
			setOptionalDummyValue( src.getOptionalDummyValue() );
		}
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

	CFBamDateTypeBuff CFBamDateTypeBuff::operator =( cfbam::CFBamDateTypeHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredScopeId( src.getRequiredScopeId() );
		if( src.isOptionalDefSchemaTenantIdNull() ) {
			setOptionalDefSchemaTenantIdNull();
		}
		else {
			setOptionalDefSchemaTenantIdValue( src.getOptionalDefSchemaTenantIdValue() );
		}
		if( src.isOptionalDefSchemaIdNull() ) {
			setOptionalDefSchemaIdNull();
		}
		else {
			setOptionalDefSchemaIdValue( src.getOptionalDefSchemaIdValue() );
		}
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalShortNameNull() ) {
			setOptionalShortNameNull();
		}
		else {
			setOptionalShortNameValue( src.getOptionalShortNameValue() );
		}
		if( src.isOptionalLabelNull() ) {
			setOptionalLabelNull();
		}
		else {
			setOptionalLabelValue( src.getOptionalLabelValue() );
		}
		if( src.isOptionalShortDescriptionNull() ) {
			setOptionalShortDescriptionNull();
		}
		else {
			setOptionalShortDescriptionValue( src.getOptionalShortDescriptionValue() );
		}
		if( src.isOptionalDescriptionNull() ) {
			setOptionalDescriptionNull();
		}
		else {
			setOptionalDescriptionValue( src.getOptionalDescriptionValue() );
		}
		if( src.isOptionalDefaultXmlValueNull() ) {
			setOptionalDefaultXmlValueNull();
		}
		else {
			setOptionalDefaultXmlValueValue( src.getOptionalDefaultXmlValueValue() );
		}
		setRequiredIsNullable( src.getRequiredIsNullable() );
		if( src.isOptionalGenerateIdNull() ) {
			setOptionalGenerateIdNull();
		}
		else {
			setOptionalGenerateIdValue( src.getOptionalGenerateIdValue() );
		}
		setRequiredImplementsPolymorph( src.getRequiredImplementsPolymorph() );
		if( src.isOptionalPrevTenantIdNull() ) {
			setOptionalPrevTenantIdNull();
		}
		else {
			setOptionalPrevTenantIdValue( src.getOptionalPrevTenantIdValue() );
		}
		if( src.isOptionalPrevIdNull() ) {
			setOptionalPrevIdNull();
		}
		else {
			setOptionalPrevIdValue( src.getOptionalPrevIdValue() );
		}
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
		if( src.isOptionalDbNameNull() ) {
			setOptionalDbNameNull();
		}
		else {
			setOptionalDbNameValue( src.getOptionalDbNameValue() );
		}
		if( src.isOptionalDummyNull() ) {
			setOptionalDummyNull();
		}
		else {
			setOptionalDummyValue( src.getOptionalDummyValue() );
		}
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

	bool CFBamDateTypeBuff::operator <( const CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator <( const CFBamValuePKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator <( const CFBamValueHPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator <( const CFBamDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
			if( getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
			if( getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
			if( getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator <( const CFBamDateTypeBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
			if( getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
			if( getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
			if( getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator <=( const CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator <=( const CFBamValuePKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator <=( const CFBamValueHPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator <=( const CFBamDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
			if( getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
			if( getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
			if( getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator <=( const CFBamDateTypeBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
			if( getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
			if( getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
			if( getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator ==( const CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator ==( const CFBamValuePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator ==( const CFBamValueHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator ==( const CFBamDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! isOptionalShortNameNull() ) {
			if( ! rhs.isOptionalShortNameNull() ) {
				if( getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( ! rhs.isOptionalLabelNull() ) {
				if( getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				if( getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( ! rhs.isOptionalDescriptionNull() ) {
				if( getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				if( getOptionalDefaultXmlValueValue() != rhs.getOptionalDefaultXmlValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( getRequiredIsNullable() != rhs.getRequiredIsNullable() ) {
			return( false );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				if( getOptionalGenerateIdValue() != rhs.getOptionalGenerateIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( getRequiredImplementsPolymorph() != rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( ! rhs.isOptionalDbNameNull() ) {
				if( getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( ! rhs.isOptionalDummyNull() ) {
				if( getOptionalDummyValue() != rhs.getOptionalDummyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator ==( const CFBamDateTypeBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! isOptionalShortNameNull() ) {
			if( ! rhs.isOptionalShortNameNull() ) {
				if( getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( ! rhs.isOptionalLabelNull() ) {
				if( getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				if( getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( ! rhs.isOptionalDescriptionNull() ) {
				if( getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				if( getOptionalDefaultXmlValueValue() != rhs.getOptionalDefaultXmlValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( getRequiredIsNullable() != rhs.getRequiredIsNullable() ) {
			return( false );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				if( getOptionalGenerateIdValue() != rhs.getOptionalGenerateIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( getRequiredImplementsPolymorph() != rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( ! rhs.isOptionalDbNameNull() ) {
				if( getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( ! rhs.isOptionalDummyNull() ) {
				if( getOptionalDummyValue() != rhs.getOptionalDummyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator !=( const CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator !=( const CFBamValuePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator !=( const CFBamValueHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator !=( const CFBamDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( getOptionalDefaultXmlValueValue() != rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( getRequiredIsNullable() != rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( getOptionalGenerateIdValue() != rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( getRequiredImplementsPolymorph() != rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( getOptionalDummyValue() != rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator !=( const CFBamDateTypeBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( getOptionalDefaultXmlValueValue() != rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( getRequiredIsNullable() != rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( getOptionalGenerateIdValue() != rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( getRequiredImplementsPolymorph() != rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( getOptionalDummyValue() != rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator >=( const CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator >=( const CFBamValuePKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator >=( const CFBamValueHPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator >=( const CFBamDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator >=( const CFBamDateTypeBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDateTypeBuff::operator >( const CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator >( const CFBamValuePKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator >( const CFBamValueHPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator >( const CFBamDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDateTypeBuff::operator >( const CFBamDateTypeBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	std::string CFBamDateTypeBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDateTypeBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ScopeId( "ScopeId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_DefaultXmlValue( "DefaultXmlValue" );
		static const std::string S_IsNullable( "IsNullable" );
		static const std::string S_GenerateId( "GenerateId" );
		static const std::string S_ImplementsPolymorph( "ImplementsPolymorph" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_Dummy( "Dummy" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ScopeId, getRequiredScopeId() ) );
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		if( ! isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, getOptionalShortNameValue() ) );
		}
		if( ! isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, getOptionalLabelValue() ) );
		}
		if( ! isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, getOptionalShortDescriptionValue() ) );
		}
		if( ! isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, getOptionalDescriptionValue() ) );
		}
		if( ! isOptionalDefaultXmlValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefaultXmlValue, getOptionalDefaultXmlValueValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsNullable, getRequiredIsNullable() ) );
		if( ! isOptionalGenerateIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_GenerateId, getOptionalGenerateIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_ImplementsPolymorph, getRequiredImplementsPolymorph() ) );
		if( ! isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, getOptionalPrevTenantIdValue() ) );
		}
		if( ! isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, getOptionalPrevIdValue() ) );
		}
		if( ! isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, getOptionalNextTenantIdValue() ) );
		}
		if( ! isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, getOptionalNextIdValue() ) );
		}
		if( ! isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, getOptionalDbNameValue() ) );
		}
		if( ! isOptionalDummyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Dummy, getOptionalDummyValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, getRequiredSchemaDefId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( lhs.getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( lhs.getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
			if( lhs.getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( lhs.getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( lhs.getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
			if( lhs.getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( lhs.getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( lhs.getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
			if( lhs.getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( lhs.getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( lhs.getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( false );
			}
			if( lhs.getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( ! rhs.isOptionalShortNameNull() ) {
				if( lhs.getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( ! rhs.isOptionalLabelNull() ) {
				if( lhs.getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				if( lhs.getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( ! rhs.isOptionalDescriptionNull() ) {
				if( lhs.getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				if( lhs.getOptionalDefaultXmlValueValue() != rhs.getOptionalDefaultXmlValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsNullable() != rhs.getRequiredIsNullable() ) {
			return( false );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				if( lhs.getOptionalGenerateIdValue() != rhs.getOptionalGenerateIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() != rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( ! rhs.isOptionalDbNameNull() ) {
				if( lhs.getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( ! rhs.isOptionalDummyNull() ) {
				if( lhs.getOptionalDummyValue() != rhs.getOptionalDummyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( ! rhs.isOptionalShortNameNull() ) {
				if( lhs.getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( ! rhs.isOptionalLabelNull() ) {
				if( lhs.getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				if( lhs.getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( ! rhs.isOptionalDescriptionNull() ) {
				if( lhs.getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				if( lhs.getOptionalDefaultXmlValueValue() != rhs.getOptionalDefaultXmlValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsNullable() != rhs.getRequiredIsNullable() ) {
			return( false );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				if( lhs.getOptionalGenerateIdValue() != rhs.getOptionalGenerateIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() != rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( ! rhs.isOptionalDbNameNull() ) {
				if( lhs.getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( ! rhs.isOptionalDummyNull() ) {
				if( lhs.getOptionalDummyValue() != rhs.getOptionalDummyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultXmlValueValue() != rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsNullable() != rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGenerateIdValue() != rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() != rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( lhs.getOptionalDummyValue() != rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultXmlValueValue() != rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsNullable() != rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGenerateIdValue() != rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() != rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( lhs.getOptionalDummyValue() != rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( lhs.getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( lhs.getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( lhs.getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( lhs.getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( lhs.getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( lhs.getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( lhs.getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( lhs.getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( lhs.getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDateTypeBuff& lhs, const cfbam::CFBamDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultXmlValueNull() ) {
			if( rhs.isOptionalDefaultXmlValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultXmlValueValue() < rhs.getOptionalDefaultXmlValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultXmlValueValue() > rhs.getOptionalDefaultXmlValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultXmlValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsNullable() < rhs.getRequiredIsNullable() ) {
			return( false );
		}
		else if( lhs.getRequiredIsNullable() > rhs.getRequiredIsNullable() ) {
			return( true );
		}
		if( ! lhs.isOptionalGenerateIdNull() ) {
			if( rhs.isOptionalGenerateIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGenerateIdValue() < rhs.getOptionalGenerateIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateIdValue() > rhs.getOptionalGenerateIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredImplementsPolymorph() < rhs.getRequiredImplementsPolymorph() ) {
			return( false );
		}
		else if( lhs.getRequiredImplementsPolymorph() > rhs.getRequiredImplementsPolymorph() ) {
			return( true );
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDummyNull() ) {
			if( rhs.isOptionalDummyNull() ) {
				return( true );
			}
			if( lhs.getOptionalDummyValue() < rhs.getOptionalDummyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDummyValue() > rhs.getOptionalDummyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDummyNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}
}

