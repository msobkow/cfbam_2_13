// Description: C++18 implementation of a ServerListFunc history buffer object.

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

#include <cfbam/CFBamHPKey.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamServerListFuncBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamServerListFuncHBuff.hpp>
#include <cfbam/CFBamServerListFuncByRetTblIdxKey.hpp>

namespace cfbam {

	const std::string CFBamServerListFuncHBuff::CLASS_NAME( "CFBamServerListFuncHBuff" );
	CFBamServerListFuncHBuff::CFBamServerListFuncHBuff()
	: cfbam::CFBamServerMethodHBuff() {
		optionalRetTenantId.setNull();
		optionalRetTableId.setNull();
	}

	CFBamServerListFuncHBuff::CFBamServerListFuncHBuff( const CFBamServerListFuncHBuff& src )
	: cfbam::CFBamServerMethodHBuff() {
		optionalRetTenantId.setNull();
		optionalRetTableId.setNull();
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
		if( src.isOptionalRetTenantIdNull() ) {
			setOptionalRetTenantIdNull();
		}
		else {
			setOptionalRetTenantIdValue( src.getOptionalRetTenantIdValue() );
		}
		if( src.isOptionalRetTableIdNull() ) {
			setOptionalRetTableIdNull();
		}
		else {
			setOptionalRetTableIdValue( src.getOptionalRetTableIdValue() );
		}
	}

	CFBamServerListFuncHBuff::~CFBamServerListFuncHBuff() {
	}

	cflib::ICFLibCloneableObj* CFBamServerListFuncHBuff::clone() {
		CFBamServerListFuncHBuff* copy = new CFBamServerListFuncHBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const int64_t CFBamServerListFuncHBuff::getOptionalRetTenantIdValue() const {
		return( optionalRetTenantId.getValue() );
	}

	const int64_t* CFBamServerListFuncHBuff::getOptionalRetTenantIdReference() const {
		return( optionalRetTenantId.getReference() );
	}

	const bool CFBamServerListFuncHBuff::isOptionalRetTenantIdNull() const {
		return( optionalRetTenantId.isNull() );
	}

	void CFBamServerListFuncHBuff::setOptionalRetTenantIdNull() {
		optionalRetTenantId.setNull();
	}

	void CFBamServerListFuncHBuff::setOptionalRetTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRetTenantIdValue" );
		if( value < cfbam::CFBamServerListFuncBuff::RETTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamServerListFuncBuff::RETTENANTID_MIN_VALUE );
		}
		optionalRetTenantId.setValue( value );
	}

	const int64_t CFBamServerListFuncHBuff::getOptionalRetTableIdValue() const {
		return( optionalRetTableId.getValue() );
	}

	const int64_t* CFBamServerListFuncHBuff::getOptionalRetTableIdReference() const {
		return( optionalRetTableId.getReference() );
	}

	const bool CFBamServerListFuncHBuff::isOptionalRetTableIdNull() const {
		return( optionalRetTableId.isNull() );
	}

	void CFBamServerListFuncHBuff::setOptionalRetTableIdNull() {
		optionalRetTableId.setNull();
	}

	void CFBamServerListFuncHBuff::setOptionalRetTableIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRetTableIdValue" );
		if( value < cfbam::CFBamServerListFuncBuff::RETTABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamServerListFuncBuff::RETTABLEID_MIN_VALUE );
		}
		optionalRetTableId.setValue( value );
	}

	size_t CFBamServerListFuncHBuff::hashCode() const {
		size_t hashCode = cfbam::CFBamServerListFuncHBuff::hashCode();
		if( ! isOptionalRetTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRetTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalRetTableIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRetTableIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFBamServerListFuncHBuff CFBamServerListFuncHBuff::operator =( cfbam::CFBamServerListFuncBuff& src ) {
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
		if( src.isOptionalRetTenantIdNull() ) {
			setOptionalRetTenantIdNull();
		}
		else {
			setOptionalRetTenantIdValue( src.getOptionalRetTenantIdValue() );
		}
		if( src.isOptionalRetTableIdNull() ) {
			setOptionalRetTableIdNull();
		}
		else {
			setOptionalRetTableIdValue( src.getOptionalRetTableIdValue() );
		}
		return( *this );
	}

	CFBamServerListFuncHBuff CFBamServerListFuncHBuff::operator =( cfbam::CFBamServerListFuncHBuff& src ) {
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
		if( src.isOptionalRetTenantIdNull() ) {
			setOptionalRetTenantIdNull();
		}
		else {
			setOptionalRetTenantIdValue( src.getOptionalRetTenantIdValue() );
		}
		if( src.isOptionalRetTableIdNull() ) {
			setOptionalRetTableIdNull();
		}
		else {
			setOptionalRetTableIdValue( src.getOptionalRetTableIdValue() );
		}
		return( *this );
	}

	bool CFBamServerListFuncHBuff::operator <( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator <( const CFBamScopePKey& rhs ) {
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

	bool CFBamServerListFuncHBuff::operator <( const CFBamScopeHPKey& rhs ) {
		if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() >= rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() <= rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() >= rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() <= rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool CFBamServerListFuncHBuff::operator <( const CFBamServerListFuncHBuff& rhs ) {
		if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() >= rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() <= rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() >= rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() <= rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator <( const CFBamServerListFuncBuff& rhs ) {
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator <=( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator <=( const CFBamScopePKey& rhs ) {
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

	bool CFBamServerListFuncHBuff::operator <=( const CFBamScopeHPKey& rhs ) {
		if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool CFBamServerListFuncHBuff::operator <=( const CFBamServerListFuncHBuff& rhs ) {
		if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator <=( const CFBamServerListFuncBuff& rhs ) {
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator ==( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator ==( const CFBamScopeHPKey& rhs ) {
		if( getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator ==( const CFBamServerListFuncHBuff& rhs ) {
		if( getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator ==( const CFBamServerListFuncBuff& rhs ) {
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator !=( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator !=( const CFBamScopeHPKey& rhs ) {
		if( getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() != rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() != rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( true );
			}
		}
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator !=( const CFBamServerListFuncHBuff& rhs ) {
		if( getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() != rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() != rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( true );
			}
		}
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator !=( const CFBamServerListFuncBuff& rhs ) {
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator >=( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator >=( const CFBamScopePKey& rhs ) {
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

	bool CFBamServerListFuncHBuff::operator >=( const CFBamScopeHPKey& rhs ) {
		if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool CFBamServerListFuncHBuff::operator >=( const CFBamServerListFuncHBuff& rhs ) {
		if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator >=( const CFBamServerListFuncBuff& rhs ) {
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncHBuff::operator >( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator >( const CFBamScopePKey& rhs ) {
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

	bool CFBamServerListFuncHBuff::operator >( const CFBamScopeHPKey& rhs ) {
		if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool CFBamServerListFuncHBuff::operator >( const CFBamServerListFuncHBuff& rhs ) {
		if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamServerListFuncHBuff::operator >( const CFBamServerListFuncBuff& rhs ) {
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
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFBamServerListFuncHBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServerListFuncHBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_AuditClusterId( "AuditClusterId" );
		static const std::string S_AuditStamp( "AuditStamp" );
		static const std::string S_AuditActionId( "AuditActionId" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_AuditSessionId( "AuditSessionId" );
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
		static const std::string S_RetTenantId( "RetTenantId" );
		static const std::string S_RetTableId( "RetTableId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_AuditClusterId, auditClusterId ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_AuditClusterId, auditStamp ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_AuditActionId, auditActionId ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_AuditSessionId, auditSessionId ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
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
		if( ! isOptionalRetTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RetTenantId, getOptionalRetTenantIdValue() ) );
		}
		if( ! isOptionalRetTableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RetTableId, getOptionalRetTableIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool operator <(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool operator <=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( true );
			}
		}
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( true );
			}
		}
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool operator >=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool operator >(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamServerListFuncHBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
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
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

