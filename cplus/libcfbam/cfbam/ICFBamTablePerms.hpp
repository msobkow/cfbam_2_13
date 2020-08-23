#pragma once

// Description: C++18 CFBam Table Permissions Interface.

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

#include <uuid/uuid.h>

#include <array>
#include <cassert>
#include <cstddef>
#include <chrono>
#include <ctime>
#include <functional>
#include <list>
#include <string>

#include <cfsec/ICFSecTablePerms.hpp>
#include <cfint/ICFIntTablePerms.hpp>

namespace cfbam {

	class CFBamAuthorization;

	class ICFBamTablePerms
	: public virtual cfsec::ICFSecTablePerms,
	  public virtual cfint::ICFIntTablePerms
	{
	public:
		ICFBamTablePerms();
		virtual ~ICFBamTablePerms();

		virtual bool allowCreateAtom( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadAtom( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateAtom( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteAtom( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateBlobCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadBlobCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateBlobCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteBlobCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateBlobDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadBlobDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateBlobDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteBlobDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateBlobType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadBlobType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateBlobType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteBlobType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateBoolCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadBoolCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateBoolCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteBoolCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateBoolDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadBoolDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateBoolDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteBoolDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateBoolType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadBoolType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateBoolType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteBoolType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateChain( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadChain( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateChain( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteChain( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateClearDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadClearDep( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateClearDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteClearDep( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateClearSubDep1( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadClearSubDep1( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateClearSubDep1( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteClearSubDep1( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateClearSubDep2( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadClearSubDep2( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateClearSubDep2( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteClearSubDep2( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateClearSubDep3( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadClearSubDep3( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateClearSubDep3( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteClearSubDep3( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateClearTopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadClearTopDep( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateClearTopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteClearTopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDateCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDateCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDateCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDateCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDateDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDateDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDateDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDateDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDateType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDateType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDateType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDateType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDelDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDelDep( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDelDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDelDep( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDelSubDep1( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDelSubDep1( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDelSubDep1( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDelSubDep1( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDelSubDep2( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDelSubDep2( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDelSubDep2( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDelSubDep2( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDelSubDep3( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDelSubDep3( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDelSubDep3( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDelSubDep3( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDelTopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDelTopDep( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDelTopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDelTopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDoubleCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDoubleCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDoubleCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDoubleCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDoubleDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDoubleDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDoubleDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDoubleDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateDoubleType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadDoubleType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateDoubleType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteDoubleType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateEnumDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadEnumDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateEnumDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteEnumDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateEnumTag( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadEnumTag( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateEnumTag( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteEnumTag( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateEnumType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadEnumType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateEnumType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteEnumType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateFloatCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadFloatCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateFloatCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteFloatCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateFloatDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadFloatDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateFloatDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteFloatDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateFloatType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadFloatType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateFloatType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteFloatType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateId16Gen( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadId16Gen( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateId16Gen( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteId16Gen( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateId32Gen( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadId32Gen( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateId32Gen( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteId32Gen( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateId64Gen( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadId64Gen( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateId64Gen( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteId64Gen( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateIndex( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadIndex( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateIndex( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteIndex( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateIndexCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadIndexCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateIndexCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteIndexCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateInt16Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadInt16Col( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateInt16Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteInt16Col( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateInt16Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadInt16Def( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateInt16Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteInt16Def( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateInt16Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadInt16Type( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateInt16Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteInt16Type( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateInt32Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadInt32Col( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateInt32Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteInt32Col( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateInt32Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadInt32Def( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateInt32Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteInt32Def( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateInt32Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadInt32Type( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateInt32Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteInt32Type( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateInt64Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadInt64Col( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateInt64Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteInt64Col( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateInt64Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadInt64Def( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateInt64Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteInt64Def( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateInt64Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadInt64Type( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateInt64Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteInt64Type( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateNmTokenCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadNmTokenCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateNmTokenCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteNmTokenCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateNmTokenDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadNmTokenDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateNmTokenDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteNmTokenDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateNmTokenType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadNmTokenType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateNmTokenType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteNmTokenType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateNmTokensCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadNmTokensCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateNmTokensCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteNmTokensCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateNmTokensDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadNmTokensDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateNmTokensDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteNmTokensDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateNmTokensType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadNmTokensType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateNmTokensType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteNmTokensType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateNumberCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadNumberCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateNumberCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteNumberCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateNumberDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadNumberDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateNumberDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteNumberDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateNumberType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadNumberType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateNumberType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteNumberType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateParam( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadParam( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateParam( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteParam( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreatePopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadPopDep( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdatePopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeletePopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreatePopSubDep1( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadPopSubDep1( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdatePopSubDep1( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeletePopSubDep1( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreatePopSubDep2( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadPopSubDep2( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdatePopSubDep2( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeletePopSubDep2( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreatePopSubDep3( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadPopSubDep3( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdatePopSubDep3( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeletePopSubDep3( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreatePopTopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadPopTopDep( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdatePopTopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeletePopTopDep( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateRelation( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadRelation( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateRelation( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteRelation( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateRelationCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadRelationCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateRelationCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteRelationCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateSchemaDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadSchemaDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateSchemaDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSchemaDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateSchemaRef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadSchemaRef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateSchemaRef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteSchemaRef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateScope( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadScope( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateScope( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteScope( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateServerListFunc( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadServerListFunc( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateServerListFunc( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteServerListFunc( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateServerMethod( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadServerMethod( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateServerMethod( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteServerMethod( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateServerObjFunc( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadServerObjFunc( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateServerObjFunc( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteServerObjFunc( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateServerProc( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadServerProc( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateServerProc( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteServerProc( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateStringCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadStringCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateStringCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteStringCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateStringDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadStringDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateStringDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteStringDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateStringType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadStringType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateStringType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteStringType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTZDateCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTZDateCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTZDateCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTZDateCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTZDateDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTZDateDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTZDateDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTZDateDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTZDateType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTZDateType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTZDateType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTZDateType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTZTimeCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTZTimeCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTZTimeCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTZTimeCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTZTimeDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTZTimeDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTZTimeDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTZTimeDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTZTimeType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTZTimeType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTZTimeType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTZTimeType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTZTimestampCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTZTimestampCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTZTimestampCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTZTimestampCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTZTimestampDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTZTimestampDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTZTimestampDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTZTimestampDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTZTimestampType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTZTimestampType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTZTimestampType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTZTimestampType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTable( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTable( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTable( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTable( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTableCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTableCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTableCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTableCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTextCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTextCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTextCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTextCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTextDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTextDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTextDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTextDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTextType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTextType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTextType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTextType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTimeCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTimeCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTimeCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTimeCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTimeDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTimeDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTimeDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTimeDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTimeType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTimeType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTimeType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTimeType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTimestampCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTimestampCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTimestampCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTimestampCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTimestampDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTimestampDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTimestampDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTimestampDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTimestampType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTimestampType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTimestampType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTimestampType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTokenCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTokenCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTokenCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTokenCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTokenDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTokenDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTokenDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTokenDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateTokenType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadTokenType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateTokenType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteTokenType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUInt16Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUInt16Col( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUInt16Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUInt16Col( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUInt16Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUInt16Def( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUInt16Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUInt16Def( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUInt16Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUInt16Type( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUInt16Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUInt16Type( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUInt32Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUInt32Col( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUInt32Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUInt32Col( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUInt32Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUInt32Def( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUInt32Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUInt32Def( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUInt32Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUInt32Type( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUInt32Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUInt32Type( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUInt64Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUInt64Col( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUInt64Col( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUInt64Col( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUInt64Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUInt64Def( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUInt64Def( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUInt64Def( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUInt64Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUInt64Type( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUInt64Type( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUInt64Type( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUuidCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUuidCol( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUuidCol( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUuidCol( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUuidDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUuidDef( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUuidDef( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUuidDef( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUuidGen( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUuidGen( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUuidGen( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUuidGen( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateUuidType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadUuidType( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateUuidType( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteUuidType( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual bool allowCreateValue( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowReadValue( const cfsec::CFSecAuthorization Authorization ) = 0;
		virtual bool allowUpdateValue( const cfsec::CFSecAuthorization* Authorization ) = 0;
		virtual bool allowDeleteValue( const cfsec::CFSecAuthorization* Authorization ) = 0;
	};
}
