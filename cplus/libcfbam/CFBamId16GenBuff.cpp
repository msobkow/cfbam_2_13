// Description: C++18 implementation for a Id16Gen buffer object.

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
#include <cfbam/CFBamInt16TypeBySchemaIdxKey.hpp>
#include <cfbam/CFBamId16GenByDispIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamId16GenBuff::GENDEFNAME( "Id16Gen" );
	const classcode_t CFBamId16GenBuff::CLASS_CODE = 0xa859L;
	const std::string CFBamId16GenBuff::CLASS_NAME( "CFBamId16GenBuff" );
		const std::string CFBamId16GenBuff::COLNAME_DISPENSERTENANTID( "DispenserTenantId" );
		const std::string CFBamId16GenBuff::COLNAME_DISPENSERID( "DispenserId" );
		const std::string CFBamId16GenBuff::COLNAME_SLICE( "Slice" );
		const std::string CFBamId16GenBuff::COLNAME_BLOCKSIZE( "BlockSize" );
	const int64_t CFBamId16GenBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamId16GenBuff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamId16GenBuff::DISPENSERTENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamId16GenBuff::DISPENSERID_INIT_VALUE = 0LL;
	const int16_t CFBamId16GenBuff::SLICE_INIT_VALUE = (int16_t)0;
	const int16_t CFBamId16GenBuff::BLOCKSIZE_INIT_VALUE = (int16_t)1;
	const int64_t CFBamId16GenBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamId16GenBuff::ID_MIN_VALUE = 0LL;
	const int64_t CFBamId16GenBuff::DISPENSERTENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamId16GenBuff::DISPENSERID_MIN_VALUE = 0LL;
	const int16_t CFBamId16GenBuff::SLICE_MIN_VALUE = (int16_t)0;
	const int16_t CFBamId16GenBuff::BLOCKSIZE_MIN_VALUE = (int16_t)1;
	const int16_t CFBamId16GenBuff::SLICE_MAX_VALUE = (int16_t)32767;
	const int16_t CFBamId16GenBuff::BLOCKSIZE_MAX_VALUE = (int16_t)32767;

	CFBamId16GenBuff::CFBamId16GenBuff()
	: CFBamInt16TypeBuff()
	{
		optionalDispenserTenantId.setNull();
		optionalDispenserId.setNull();
		requiredSlice = cfbam::CFBamId16GenBuff::SLICE_INIT_VALUE;
		requiredBlockSize = cfbam::CFBamId16GenBuff::BLOCKSIZE_INIT_VALUE;
	}

	CFBamId16GenBuff::CFBamId16GenBuff( const CFBamId16GenBuff& src )
	: CFBamInt16TypeBuff()
	{
		optionalDispenserTenantId.setNull();
		optionalDispenserId.setNull();
		requiredSlice = cfbam::CFBamId16GenBuff::SLICE_INIT_VALUE;
		requiredBlockSize = cfbam::CFBamId16GenBuff::BLOCKSIZE_INIT_VALUE;
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
		if( src.isOptionalInitValueNull() ) {
			setOptionalInitValueNull();
		}
		else {
			setOptionalInitValueValue( src.getOptionalInitValueValue() );
		}
		if( src.isOptionalMinValueNull() ) {
			setOptionalMinValueNull();
		}
		else {
			setOptionalMinValueValue( src.getOptionalMinValueValue() );
		}
		if( src.isOptionalMaxValueNull() ) {
			setOptionalMaxValueNull();
		}
		else {
			setOptionalMaxValueValue( src.getOptionalMaxValueValue() );
		}
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		if( src.isOptionalDispenserTenantIdNull() ) {
			setOptionalDispenserTenantIdNull();
		}
		else {
			setOptionalDispenserTenantIdValue( src.getOptionalDispenserTenantIdValue() );
		}
		if( src.isOptionalDispenserIdNull() ) {
			setOptionalDispenserIdNull();
		}
		else {
			setOptionalDispenserIdValue( src.getOptionalDispenserIdValue() );
		}
		setRequiredSlice( src.getRequiredSlice() );
		setRequiredBlockSize( src.getRequiredBlockSize() );
	}

	CFBamId16GenBuff::~CFBamId16GenBuff() {
	}

	cflib::ICFLibCloneableObj* CFBamId16GenBuff::clone() {
		CFBamId16GenBuff* copy = new CFBamId16GenBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamId16GenBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamId16GenBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamId16GenBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamInt16TypeBuff::implementsClassCode( argClassCode ) );
		}
	}

	const bool CFBamId16GenBuff::isOptionalDispenserTenantIdNull() const {
		return( optionalDispenserTenantId.isNull() );
	}

	const int64_t CFBamId16GenBuff::getOptionalDispenserTenantIdValue() const {
		return( optionalDispenserTenantId.getValue() );
	}

	const int64_t* CFBamId16GenBuff::getOptionalDispenserTenantIdReference() const {
		return( optionalDispenserTenantId.getReference() );
	}

	void CFBamId16GenBuff::setOptionalDispenserTenantIdNull() {
		optionalDispenserTenantId.setNull();
	}

	void CFBamId16GenBuff::setOptionalDispenserTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDispenserTenantIdValue" );
		if( value < cfbam::CFBamId16GenBuff::DISPENSERTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId16GenBuff::DISPENSERTENANTID_MIN_VALUE );
		}
		optionalDispenserTenantId.setValue( value );
	}

	const bool CFBamId16GenBuff::isOptionalDispenserIdNull() const {
		return( optionalDispenserId.isNull() );
	}

	const int64_t CFBamId16GenBuff::getOptionalDispenserIdValue() const {
		return( optionalDispenserId.getValue() );
	}

	const int64_t* CFBamId16GenBuff::getOptionalDispenserIdReference() const {
		return( optionalDispenserId.getReference() );
	}

	void CFBamId16GenBuff::setOptionalDispenserIdNull() {
		optionalDispenserId.setNull();
	}

	void CFBamId16GenBuff::setOptionalDispenserIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDispenserIdValue" );
		if( value < cfbam::CFBamId16GenBuff::DISPENSERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId16GenBuff::DISPENSERID_MIN_VALUE );
		}
		optionalDispenserId.setValue( value );
	}

	const int16_t CFBamId16GenBuff::getRequiredSlice() const {
		return( requiredSlice );
	}

	const int16_t* CFBamId16GenBuff::getRequiredSliceReference() const {
		return( &requiredSlice );
	}

	void CFBamId16GenBuff::setRequiredSlice( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredSlice" );
		if( value < cfbam::CFBamId16GenBuff::SLICE_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId16GenBuff::SLICE_MIN_VALUE );
		}
		if( value > cfbam::CFBamId16GenBuff::SLICE_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId16GenBuff::SLICE_MAX_VALUE );
		}
		requiredSlice = value;
	}

	const int16_t CFBamId16GenBuff::getRequiredBlockSize() const {
		return( requiredBlockSize );
	}

	const int16_t* CFBamId16GenBuff::getRequiredBlockSizeReference() const {
		return( &requiredBlockSize );
	}

	void CFBamId16GenBuff::setRequiredBlockSize( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredBlockSize" );
		if( value < cfbam::CFBamId16GenBuff::BLOCKSIZE_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId16GenBuff::BLOCKSIZE_MIN_VALUE );
		}
		if( value > cfbam::CFBamId16GenBuff::BLOCKSIZE_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId16GenBuff::BLOCKSIZE_MAX_VALUE );
		}
		requiredBlockSize = value;
	}

	size_t CFBamId16GenBuff::hashCode() const {
		size_t hashCode = CFBamInt16TypeBuff::hashCode();
		if( ! isOptionalDispenserTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDispenserTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalDispenserIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDispenserIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		hashCode = ( hashCode * 0x10000 ) + getRequiredSlice();
		hashCode = ( hashCode * 0x10000 ) + getRequiredBlockSize();
		return( hashCode );
	}

	CFBamId16GenBuff CFBamId16GenBuff::operator =( cfbam::CFBamId16GenBuff& src ) {
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
		if( src.isOptionalInitValueNull() ) {
			setOptionalInitValueNull();
		}
		else {
			setOptionalInitValueValue( src.getOptionalInitValueValue() );
		}
		if( src.isOptionalMinValueNull() ) {
			setOptionalMinValueNull();
		}
		else {
			setOptionalMinValueValue( src.getOptionalMinValueValue() );
		}
		if( src.isOptionalMaxValueNull() ) {
			setOptionalMaxValueNull();
		}
		else {
			setOptionalMaxValueValue( src.getOptionalMaxValueValue() );
		}
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		if( src.isOptionalDispenserTenantIdNull() ) {
			setOptionalDispenserTenantIdNull();
		}
		else {
			setOptionalDispenserTenantIdValue( src.getOptionalDispenserTenantIdValue() );
		}
		if( src.isOptionalDispenserIdNull() ) {
			setOptionalDispenserIdNull();
		}
		else {
			setOptionalDispenserIdValue( src.getOptionalDispenserIdValue() );
		}
		setRequiredSlice( src.getRequiredSlice() );
		setRequiredBlockSize( src.getRequiredBlockSize() );
		return( *this );
	}

	CFBamId16GenBuff CFBamId16GenBuff::operator =( cfbam::CFBamId16GenHBuff& src ) {
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
		if( src.isOptionalInitValueNull() ) {
			setOptionalInitValueNull();
		}
		else {
			setOptionalInitValueValue( src.getOptionalInitValueValue() );
		}
		if( src.isOptionalMinValueNull() ) {
			setOptionalMinValueNull();
		}
		else {
			setOptionalMinValueValue( src.getOptionalMinValueValue() );
		}
		if( src.isOptionalMaxValueNull() ) {
			setOptionalMaxValueNull();
		}
		else {
			setOptionalMaxValueValue( src.getOptionalMaxValueValue() );
		}
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		if( src.isOptionalDispenserTenantIdNull() ) {
			setOptionalDispenserTenantIdNull();
		}
		else {
			setOptionalDispenserTenantIdValue( src.getOptionalDispenserTenantIdValue() );
		}
		if( src.isOptionalDispenserIdNull() ) {
			setOptionalDispenserIdNull();
		}
		else {
			setOptionalDispenserIdValue( src.getOptionalDispenserIdValue() );
		}
		setRequiredSlice( src.getRequiredSlice() );
		setRequiredBlockSize( src.getRequiredBlockSize() );
		return( *this );
	}

	bool CFBamId16GenBuff::operator <( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator <( const CFBamValuePKey& rhs ) {
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

	bool CFBamId16GenBuff::operator <( const CFBamValueHPKey& rhs ) {
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

	bool CFBamId16GenBuff::operator <( const CFBamId16GenHBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
			if( getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
			if( getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
			if( getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator <( const CFBamId16GenBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
			if( getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
			if( getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
			if( getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator <=( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator <=( const CFBamValuePKey& rhs ) {
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

	bool CFBamId16GenBuff::operator <=( const CFBamValueHPKey& rhs ) {
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

	bool CFBamId16GenBuff::operator <=( const CFBamId16GenHBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
			if( getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
			if( getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
			if( getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator <=( const CFBamId16GenBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
			if( getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
			if( getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
			if( getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator ==( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator ==( const CFBamValuePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator ==( const CFBamValueHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator ==( const CFBamId16GenHBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( ! rhs.isOptionalInitValueNull() ) {
				if( getOptionalInitValueValue() != rhs.getOptionalInitValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( ! rhs.isOptionalMinValueNull() ) {
				if( getOptionalMinValueValue() != rhs.getOptionalMinValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( ! rhs.isOptionalMaxValueNull() ) {
				if( getOptionalMaxValueValue() != rhs.getOptionalMaxValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( getRequiredSlice() != rhs.getRequiredSlice() ) {
			return( false );
		}
		if( getRequiredBlockSize() != rhs.getRequiredBlockSize() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator ==( const CFBamId16GenBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( ! rhs.isOptionalInitValueNull() ) {
				if( getOptionalInitValueValue() != rhs.getOptionalInitValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( ! rhs.isOptionalMinValueNull() ) {
				if( getOptionalMinValueValue() != rhs.getOptionalMinValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( ! rhs.isOptionalMaxValueNull() ) {
				if( getOptionalMaxValueValue() != rhs.getOptionalMaxValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( getRequiredSlice() != rhs.getRequiredSlice() ) {
			return( false );
		}
		if( getRequiredBlockSize() != rhs.getRequiredBlockSize() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator !=( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator !=( const CFBamValuePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator !=( const CFBamValueHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator !=( const CFBamId16GenHBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( getOptionalInitValueValue() != rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( getOptionalMinValueValue() != rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( getOptionalMaxValueValue() != rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSlice() != rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() != rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator !=( const CFBamId16GenBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( getOptionalInitValueValue() != rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( getOptionalMinValueValue() != rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( getOptionalMaxValueValue() != rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( getRequiredSlice() != rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() != rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator >=( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator >=( const CFBamValuePKey& rhs ) {
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

	bool CFBamId16GenBuff::operator >=( const CFBamValueHPKey& rhs ) {
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

	bool CFBamId16GenBuff::operator >=( const CFBamId16GenHBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator >=( const CFBamId16GenBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamId16GenBuff::operator >( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator >( const CFBamValuePKey& rhs ) {
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

	bool CFBamId16GenBuff::operator >( const CFBamValueHPKey& rhs ) {
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

	bool CFBamId16GenBuff::operator >( const CFBamId16GenHBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
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
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamId16GenBuff::operator >( const CFBamId16GenBuff& rhs ) {
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
		if( ! isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
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
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( true );
		}
		if( getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	std::string CFBamId16GenBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamId16GenBuff" );
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
		static const std::string S_InitValue( "InitValue" );
		static const std::string S_MinValue( "MinValue" );
		static const std::string S_MaxValue( "MaxValue" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
		static const std::string S_DispenserTenantId( "DispenserTenantId" );
		static const std::string S_DispenserId( "DispenserId" );
		static const std::string S_Slice( "Slice" );
		static const std::string S_BlockSize( "BlockSize" );
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
		if( ! isOptionalInitValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_InitValue, getOptionalInitValueValue() ) );
		}
		if( ! isOptionalMinValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_MinValue, getOptionalMinValueValue() ) );
		}
		if( ! isOptionalMaxValueNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_MaxValue, getOptionalMaxValueValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, getRequiredSchemaDefId() ) );
		if( ! isOptionalDispenserTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserTenantId, getOptionalDispenserTenantIdValue() ) );
		}
		if( ! isOptionalDispenserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserId, getOptionalDispenserIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Slice, getRequiredSlice() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_BlockSize, getRequiredBlockSize() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( lhs.getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( lhs.getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( lhs.getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( lhs.getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( lhs.getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( lhs.getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
			if( lhs.getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( lhs.getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( lhs.getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( ! rhs.isOptionalInitValueNull() ) {
				if( lhs.getOptionalInitValueValue() != rhs.getOptionalInitValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( ! rhs.isOptionalMinValueNull() ) {
				if( lhs.getOptionalMinValueValue() != rhs.getOptionalMinValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( ! rhs.isOptionalMaxValueNull() ) {
				if( lhs.getOptionalMaxValueValue() != rhs.getOptionalMaxValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSlice() != rhs.getRequiredSlice() ) {
			return( false );
		}
		if( lhs.getRequiredBlockSize() != rhs.getRequiredBlockSize() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( ! rhs.isOptionalInitValueNull() ) {
				if( lhs.getOptionalInitValueValue() != rhs.getOptionalInitValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( ! rhs.isOptionalMinValueNull() ) {
				if( lhs.getOptionalMinValueValue() != rhs.getOptionalMinValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( ! rhs.isOptionalMaxValueNull() ) {
				if( lhs.getOptionalMaxValueValue() != rhs.getOptionalMaxValueValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSlice() != rhs.getRequiredSlice() ) {
			return( false );
		}
		if( lhs.getRequiredBlockSize() != rhs.getRequiredBlockSize() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalInitValueValue() != rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMinValueValue() != rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMaxValueValue() != rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSlice() != rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() != rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalInitValueValue() != rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMinValueValue() != rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMaxValueValue() != rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredSlice() != rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() != rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( lhs.getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( lhs.getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( lhs.getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( lhs.getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValuePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( lhs.getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( lhs.getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamId16GenBuff& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
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
		if( ! lhs.isOptionalInitValueNull() ) {
			if( rhs.isOptionalInitValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalInitValueValue() < rhs.getOptionalInitValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalInitValueValue() > rhs.getOptionalInitValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalInitValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMinValueNull() ) {
			if( rhs.isOptionalMinValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMinValueValue() < rhs.getOptionalMinValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMinValueValue() > rhs.getOptionalMinValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMinValueNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalMaxValueNull() ) {
			if( rhs.isOptionalMaxValueNull() ) {
				return( true );
			}
			if( lhs.getOptionalMaxValueValue() < rhs.getOptionalMaxValueValue() ) {
				return( false );
			}
			else if( lhs.getOptionalMaxValueValue() > rhs.getOptionalMaxValueValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalMaxValueNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredSlice() < rhs.getRequiredSlice() ) {
			return( false );
		}
		else if( lhs.getRequiredSlice() > rhs.getRequiredSlice() ) {
			return( true );
		}
		if( lhs.getRequiredBlockSize() < rhs.getRequiredBlockSize() ) {
			return( false );
		}
		else if( lhs.getRequiredBlockSize() > rhs.getRequiredBlockSize() ) {
			return( true );
		}
		return( false );
	}
}

