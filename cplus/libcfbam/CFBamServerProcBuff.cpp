// Description: C++18 implementation for a ServerProc buffer object.

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

#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamServerMethodByUNameIdxKey.hpp>
#include <cfbam/CFBamServerMethodByMethTableIdxKey.hpp>
#include <cfbam/CFBamServerMethodByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamServerProcBuff::GENDEFNAME( "ServerProc" );
	const classcode_t CFBamServerProcBuff::CLASS_CODE = 0xa807L;
	const std::string CFBamServerProcBuff::CLASS_NAME( "CFBamServerProcBuff" );
		const std::string CFBamServerProcBuff::COLNAME_DUMMY( "Dummy" );
	const int64_t CFBamServerProcBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamServerProcBuff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamServerProcBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamServerProcBuff::ID_MIN_VALUE = 0LL;
	const std::string::size_type CFBamServerProcBuff::DUMMY_MAX_LEN = 16;

	CFBamServerProcBuff::CFBamServerProcBuff()
	: CFBamServerMethodBuff()
	{
		optionalDummy = NULL;
	}

	CFBamServerProcBuff::CFBamServerProcBuff( const CFBamServerProcBuff& src )
	: CFBamServerMethodBuff()
	{
		optionalDummy = NULL;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredTableId( src.getRequiredTableId() );
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
		if( src.isOptionalSuffixNull() ) {
			setOptionalSuffixNull();
		}
		else {
			setOptionalSuffixValue( src.getOptionalSuffixValue() );
		}
		setRequiredIsInstanceMethod( src.getRequiredIsInstanceMethod() );
		setRequiredIsServerOnly( src.getRequiredIsServerOnly() );
		setRequiredJMethodBody( src.getRequiredJMethodBody() );
		setRequiredCppMethodBody( src.getRequiredCppMethodBody() );
		setRequiredCsMethodBody( src.getRequiredCsMethodBody() );
		if( src.isOptionalDummyNull() ) {
			setOptionalDummyNull();
		}
		else {
			setOptionalDummyValue( src.getOptionalDummyValue() );
		}
	}

	CFBamServerProcBuff::~CFBamServerProcBuff() {
		if( optionalDummy != NULL ) {
			delete optionalDummy;
			optionalDummy = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFBamServerProcBuff::clone() {
		CFBamServerProcBuff* copy = new CFBamServerProcBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamServerProcBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamServerProcBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamServerProcBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamServerMethodBuff::implementsClassCode( argClassCode ) );
		}
	}

	const bool CFBamServerProcBuff::isOptionalDummyNull() const {
		return( optionalDummy == NULL );
	}

	const std::string& CFBamServerProcBuff::getOptionalDummyValue() const {
		static const std::string S_ProcName( "getOptionalDummyValue" );
		if( optionalDummy == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalDummy );
	}

	const std::string* CFBamServerProcBuff::getOptionalDummyReference() const {
		return( optionalDummy );
	}

	void CFBamServerProcBuff::setOptionalDummyNull() {
		if( optionalDummy != NULL ) {
			delete optionalDummy;
			optionalDummy = NULL;
		}
	}

	void CFBamServerProcBuff::setOptionalDummyValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalDummyValue" );
		if( value.length() > CFBamServerProcBuff::DUMMY_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamServerProcBuff::DUMMY_MAX_LEN );
		}
		if( optionalDummy != NULL ) {
			delete optionalDummy;
			optionalDummy = NULL;
		}
		optionalDummy = new std::string( value );
	}

	size_t CFBamServerProcBuff::hashCode() const {
		size_t hashCode = CFBamServerMethodBuff::hashCode();
		if( ! isOptionalDummyNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalDummyValue() );
		}
		return( hashCode );
	}

	CFBamServerProcBuff CFBamServerProcBuff::operator =( cfbam::CFBamServerProcBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredTableId( src.getRequiredTableId() );
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
		if( src.isOptionalSuffixNull() ) {
			setOptionalSuffixNull();
		}
		else {
			setOptionalSuffixValue( src.getOptionalSuffixValue() );
		}
		setRequiredIsInstanceMethod( src.getRequiredIsInstanceMethod() );
		setRequiredIsServerOnly( src.getRequiredIsServerOnly() );
		setRequiredJMethodBody( src.getRequiredJMethodBody() );
		setRequiredCppMethodBody( src.getRequiredCppMethodBody() );
		setRequiredCsMethodBody( src.getRequiredCsMethodBody() );
		if( src.isOptionalDummyNull() ) {
			setOptionalDummyNull();
		}
		else {
			setOptionalDummyValue( src.getOptionalDummyValue() );
		}
		return( *this );
	}

	CFBamServerProcBuff CFBamServerProcBuff::operator =( cfbam::CFBamServerProcHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredTableId( src.getRequiredTableId() );
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
		if( src.isOptionalSuffixNull() ) {
			setOptionalSuffixNull();
		}
		else {
			setOptionalSuffixValue( src.getOptionalSuffixValue() );
		}
		setRequiredIsInstanceMethod( src.getRequiredIsInstanceMethod() );
		setRequiredIsServerOnly( src.getRequiredIsServerOnly() );
		setRequiredJMethodBody( src.getRequiredJMethodBody() );
		setRequiredCppMethodBody( src.getRequiredCppMethodBody() );
		setRequiredCsMethodBody( src.getRequiredCsMethodBody() );
		if( src.isOptionalDummyNull() ) {
			setOptionalDummyNull();
		}
		else {
			setOptionalDummyValue( src.getOptionalDummyValue() );
		}
		return( *this );
	}

	bool CFBamServerProcBuff::operator <( const CFBamScopePKey& rhs ) {
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

	bool CFBamServerProcBuff::operator <( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamServerProcBuff::operator <( const CFBamServerProcHBuff& rhs ) {
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
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool CFBamServerProcBuff::operator <( const CFBamServerProcBuff& rhs ) {
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
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool CFBamServerProcBuff::operator <=( const CFBamScopePKey& rhs ) {
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

	bool CFBamServerProcBuff::operator <=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamServerProcBuff::operator <=( const CFBamServerProcHBuff& rhs ) {
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
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( true );
	}

	bool CFBamServerProcBuff::operator <=( const CFBamServerProcBuff& rhs ) {
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
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( true );
	}

	bool CFBamServerProcBuff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamServerProcBuff::operator ==( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamServerProcBuff::operator ==( const CFBamServerProcHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( ! rhs.isOptionalSuffixNull() ) {
				if( getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		if( getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		if( getRequiredJMethodBody() != rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		if( getRequiredCppMethodBody() != rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		if( getRequiredCsMethodBody() != rhs.getRequiredCsMethodBody() ) {
			return( false );
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
		return( true );
	}

	bool CFBamServerProcBuff::operator ==( const CFBamServerProcBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( ! rhs.isOptionalSuffixNull() ) {
				if( getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		if( getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		if( getRequiredJMethodBody() != rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		if( getRequiredCppMethodBody() != rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		if( getRequiredCsMethodBody() != rhs.getRequiredCsMethodBody() ) {
			return( false );
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
		return( true );
	}

	bool CFBamServerProcBuff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamServerProcBuff::operator !=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamServerProcBuff::operator !=( const CFBamServerProcHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() != rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() != rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() != rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool CFBamServerProcBuff::operator !=( const CFBamServerProcBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() != rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() != rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() != rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool CFBamServerProcBuff::operator >=( const CFBamScopePKey& rhs ) {
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

	bool CFBamServerProcBuff::operator >=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamServerProcBuff::operator >=( const CFBamServerProcHBuff& rhs ) {
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
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( true );
	}

	bool CFBamServerProcBuff::operator >=( const CFBamServerProcBuff& rhs ) {
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
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( true );
	}

	bool CFBamServerProcBuff::operator >( const CFBamScopePKey& rhs ) {
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

	bool CFBamServerProcBuff::operator >( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamServerProcBuff::operator >( const CFBamServerProcHBuff& rhs ) {
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
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool CFBamServerProcBuff::operator >( const CFBamServerProcBuff& rhs ) {
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
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
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
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	std::string CFBamServerProcBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServerProcBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_IsInstanceMethod( "IsInstanceMethod" );
		static const std::string S_IsServerOnly( "IsServerOnly" );
		static const std::string S_JMethodBody( "JMethodBody" );
		static const std::string S_CppMethodBody( "CppMethodBody" );
		static const std::string S_CsMethodBody( "CsMethodBody" );
		static const std::string S_Dummy( "Dummy" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, getRequiredTableId() ) );
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
		if( ! isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsInstanceMethod, getRequiredIsInstanceMethod() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsServerOnly, getRequiredIsServerOnly() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMethodBody, getRequiredJMethodBody() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMethodBody, getRequiredCppMethodBody() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMethodBody, getRequiredCsMethodBody() ) );
		if( ! isOptionalDummyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Dummy, getOptionalDummyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs ) {
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
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( lhs.getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( lhs.getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs ) {
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
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( lhs.getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( lhs.getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool operator <=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs ) {
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
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( lhs.getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( lhs.getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( true );
	}

	bool operator <=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs ) {
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
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( lhs.getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( lhs.getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( ! rhs.isOptionalSuffixNull() ) {
				if( lhs.getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		if( lhs.getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		if( lhs.getRequiredJMethodBody() != rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		if( lhs.getRequiredCppMethodBody() != rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		if( lhs.getRequiredCsMethodBody() != rhs.getRequiredCsMethodBody() ) {
			return( false );
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
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( ! rhs.isOptionalSuffixNull() ) {
				if( lhs.getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		if( lhs.getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		if( lhs.getRequiredJMethodBody() != rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		if( lhs.getRequiredCppMethodBody() != rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		if( lhs.getRequiredCsMethodBody() != rhs.getRequiredCsMethodBody() ) {
			return( false );
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
		return( true );
	}

	bool operator !=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() != rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() != rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() != rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool operator !=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() != rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() != rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() != rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() != rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() != rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool operator >=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs ) {
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
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( lhs.getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( lhs.getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( true );
	}

	bool operator >=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs ) {
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
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( lhs.getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( lhs.getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( true );
	}

	bool operator >(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs ) {
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
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( lhs.getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( lhs.getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}

	bool operator >(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs ) {
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
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
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
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredIsInstanceMethod() < rhs.getRequiredIsInstanceMethod() ) {
			return( false );
		}
		else if( lhs.getRequiredIsInstanceMethod() > rhs.getRequiredIsInstanceMethod() ) {
			return( true );
		}
		if( lhs.getRequiredIsServerOnly() < rhs.getRequiredIsServerOnly() ) {
			return( false );
		}
		else if( lhs.getRequiredIsServerOnly() > rhs.getRequiredIsServerOnly() ) {
			return( true );
		}
		if( lhs.getRequiredJMethodBody() < rhs.getRequiredJMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredJMethodBody() > rhs.getRequiredJMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCppMethodBody() < rhs.getRequiredCppMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCppMethodBody() > rhs.getRequiredCppMethodBody() ) {
			return( true );
		}
		if( lhs.getRequiredCsMethodBody() < rhs.getRequiredCsMethodBody() ) {
			return( false );
		}
		else if( lhs.getRequiredCsMethodBody() > rhs.getRequiredCsMethodBody() ) {
			return( true );
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
		return( false );
	}
}

