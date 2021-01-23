#pragma once

// Description: C++18 interface for a CFBam schema.

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


#include <uuid/uuid.h>

#include <array>
#include <cassert>
#include <cstddef>
#include <chrono>
#include <ctime>
#include <functional>
#include <list>
#include <string>

#include <cflib/ICFLibPublic.hpp>

#include <cfsec/CFSecAuthorization.hpp>
#include <cfsec/ICFSecSchema.hpp>
#include <cfint/ICFIntSchema.hpp>
#include <cfbam/CFBamConfigurationFile.hpp>
#include <cfbam/ICFBamTablePerms.hpp>

#include <cfsec/ICFSecPublic.hpp>
#include <cfint/ICFIntPublic.hpp>
namespace cfbam {

	class CFBamChainPKey;
	class CFBamEnumTagPKey;
	class CFBamIndexColPKey;
	class CFBamParamPKey;
	class CFBamRelationColPKey;
	class CFBamScopePKey;
	class CFBamValuePKey;

	class CFBamAtomHPKey;
	class CFBamBlobColHPKey;
	class CFBamBlobDefHPKey;
	class CFBamBlobTypeHPKey;
	class CFBamBoolColHPKey;
	class CFBamBoolDefHPKey;
	class CFBamBoolTypeHPKey;
	class CFBamChainHPKey;
	class CFBamClearDepHPKey;
	class CFBamClearSubDep1HPKey;
	class CFBamClearSubDep2HPKey;
	class CFBamClearSubDep3HPKey;
	class CFBamClearTopDepHPKey;
	class CFBamDateColHPKey;
	class CFBamDateDefHPKey;
	class CFBamDateTypeHPKey;
	class CFBamDelDepHPKey;
	class CFBamDelSubDep1HPKey;
	class CFBamDelSubDep2HPKey;
	class CFBamDelSubDep3HPKey;
	class CFBamDelTopDepHPKey;
	class CFBamDoubleColHPKey;
	class CFBamDoubleDefHPKey;
	class CFBamDoubleTypeHPKey;
	class CFBamEnumDefHPKey;
	class CFBamEnumTagHPKey;
	class CFBamEnumTypeHPKey;
	class CFBamFloatColHPKey;
	class CFBamFloatDefHPKey;
	class CFBamFloatTypeHPKey;
	class CFBamId16GenHPKey;
	class CFBamId32GenHPKey;
	class CFBamId64GenHPKey;
	class CFBamIndexHPKey;
	class CFBamIndexColHPKey;
	class CFBamInt16ColHPKey;
	class CFBamInt16DefHPKey;
	class CFBamInt16TypeHPKey;
	class CFBamInt32ColHPKey;
	class CFBamInt32DefHPKey;
	class CFBamInt32TypeHPKey;
	class CFBamInt64ColHPKey;
	class CFBamInt64DefHPKey;
	class CFBamInt64TypeHPKey;
	class CFBamNmTokenColHPKey;
	class CFBamNmTokenDefHPKey;
	class CFBamNmTokenTypeHPKey;
	class CFBamNmTokensColHPKey;
	class CFBamNmTokensDefHPKey;
	class CFBamNmTokensTypeHPKey;
	class CFBamNumberColHPKey;
	class CFBamNumberDefHPKey;
	class CFBamNumberTypeHPKey;
	class CFBamParamHPKey;
	class CFBamPopDepHPKey;
	class CFBamPopSubDep1HPKey;
	class CFBamPopSubDep2HPKey;
	class CFBamPopSubDep3HPKey;
	class CFBamPopTopDepHPKey;
	class CFBamRelationHPKey;
	class CFBamRelationColHPKey;
	class CFBamSchemaDefHPKey;
	class CFBamSchemaRefHPKey;
	class CFBamScopeHPKey;
	class CFBamServerListFuncHPKey;
	class CFBamServerMethodHPKey;
	class CFBamServerObjFuncHPKey;
	class CFBamServerProcHPKey;
	class CFBamStringColHPKey;
	class CFBamStringDefHPKey;
	class CFBamStringTypeHPKey;
	class CFBamTZDateColHPKey;
	class CFBamTZDateDefHPKey;
	class CFBamTZDateTypeHPKey;
	class CFBamTZTimeColHPKey;
	class CFBamTZTimeDefHPKey;
	class CFBamTZTimeTypeHPKey;
	class CFBamTZTimestampColHPKey;
	class CFBamTZTimestampDefHPKey;
	class CFBamTZTimestampTypeHPKey;
	class CFBamTableHPKey;
	class CFBamTableColHPKey;
	class CFBamTextColHPKey;
	class CFBamTextDefHPKey;
	class CFBamTextTypeHPKey;
	class CFBamTimeColHPKey;
	class CFBamTimeDefHPKey;
	class CFBamTimeTypeHPKey;
	class CFBamTimestampColHPKey;
	class CFBamTimestampDefHPKey;
	class CFBamTimestampTypeHPKey;
	class CFBamTokenColHPKey;
	class CFBamTokenDefHPKey;
	class CFBamTokenTypeHPKey;
	class CFBamUInt16ColHPKey;
	class CFBamUInt16DefHPKey;
	class CFBamUInt16TypeHPKey;
	class CFBamUInt32ColHPKey;
	class CFBamUInt32DefHPKey;
	class CFBamUInt32TypeHPKey;
	class CFBamUInt64ColHPKey;
	class CFBamUInt64DefHPKey;
	class CFBamUInt64TypeHPKey;
	class CFBamUuidColHPKey;
	class CFBamUuidDefHPKey;
	class CFBamUuidGenHPKey;
	class CFBamUuidTypeHPKey;
	class CFBamValueHPKey;

	class CFBamAtomBuff;
	class CFBamBlobColBuff;
	class CFBamBlobDefBuff;
	class CFBamBlobTypeBuff;
	class CFBamBoolColBuff;
	class CFBamBoolDefBuff;
	class CFBamBoolTypeBuff;
	class CFBamChainBuff;
	class CFBamClearDepBuff;
	class CFBamClearSubDep1Buff;
	class CFBamClearSubDep2Buff;
	class CFBamClearSubDep3Buff;
	class CFBamClearTopDepBuff;
	class CFBamDateColBuff;
	class CFBamDateDefBuff;
	class CFBamDateTypeBuff;
	class CFBamDelDepBuff;
	class CFBamDelSubDep1Buff;
	class CFBamDelSubDep2Buff;
	class CFBamDelSubDep3Buff;
	class CFBamDelTopDepBuff;
	class CFBamDoubleColBuff;
	class CFBamDoubleDefBuff;
	class CFBamDoubleTypeBuff;
	class CFBamEnumDefBuff;
	class CFBamEnumTagBuff;
	class CFBamEnumTypeBuff;
	class CFBamFloatColBuff;
	class CFBamFloatDefBuff;
	class CFBamFloatTypeBuff;
	class CFBamId16GenBuff;
	class CFBamId32GenBuff;
	class CFBamId64GenBuff;
	class CFBamIndexBuff;
	class CFBamIndexColBuff;
	class CFBamInt16ColBuff;
	class CFBamInt16DefBuff;
	class CFBamInt16TypeBuff;
	class CFBamInt32ColBuff;
	class CFBamInt32DefBuff;
	class CFBamInt32TypeBuff;
	class CFBamInt64ColBuff;
	class CFBamInt64DefBuff;
	class CFBamInt64TypeBuff;
	class CFBamNmTokenColBuff;
	class CFBamNmTokenDefBuff;
	class CFBamNmTokenTypeBuff;
	class CFBamNmTokensColBuff;
	class CFBamNmTokensDefBuff;
	class CFBamNmTokensTypeBuff;
	class CFBamNumberColBuff;
	class CFBamNumberDefBuff;
	class CFBamNumberTypeBuff;
	class CFBamParamBuff;
	class CFBamPopDepBuff;
	class CFBamPopSubDep1Buff;
	class CFBamPopSubDep2Buff;
	class CFBamPopSubDep3Buff;
	class CFBamPopTopDepBuff;
	class CFBamRelationBuff;
	class CFBamRelationColBuff;
	class CFBamSchemaDefBuff;
	class CFBamSchemaRefBuff;
	class CFBamScopeBuff;
	class CFBamServerListFuncBuff;
	class CFBamServerMethodBuff;
	class CFBamServerObjFuncBuff;
	class CFBamServerProcBuff;
	class CFBamStringColBuff;
	class CFBamStringDefBuff;
	class CFBamStringTypeBuff;
	class CFBamTZDateColBuff;
	class CFBamTZDateDefBuff;
	class CFBamTZDateTypeBuff;
	class CFBamTZTimeColBuff;
	class CFBamTZTimeDefBuff;
	class CFBamTZTimeTypeBuff;
	class CFBamTZTimestampColBuff;
	class CFBamTZTimestampDefBuff;
	class CFBamTZTimestampTypeBuff;
	class CFBamTableBuff;
	class CFBamTableColBuff;
	class CFBamTextColBuff;
	class CFBamTextDefBuff;
	class CFBamTextTypeBuff;
	class CFBamTimeColBuff;
	class CFBamTimeDefBuff;
	class CFBamTimeTypeBuff;
	class CFBamTimestampColBuff;
	class CFBamTimestampDefBuff;
	class CFBamTimestampTypeBuff;
	class CFBamTokenColBuff;
	class CFBamTokenDefBuff;
	class CFBamTokenTypeBuff;
	class CFBamUInt16ColBuff;
	class CFBamUInt16DefBuff;
	class CFBamUInt16TypeBuff;
	class CFBamUInt32ColBuff;
	class CFBamUInt32DefBuff;
	class CFBamUInt32TypeBuff;
	class CFBamUInt64ColBuff;
	class CFBamUInt64DefBuff;
	class CFBamUInt64TypeBuff;
	class CFBamUuidColBuff;
	class CFBamUuidDefBuff;
	class CFBamUuidGenBuff;
	class CFBamUuidTypeBuff;
	class CFBamValueBuff;

	class CFBamAtomHBuff;
	class CFBamBlobColHBuff;
	class CFBamBlobDefHBuff;
	class CFBamBlobTypeHBuff;
	class CFBamBoolColHBuff;
	class CFBamBoolDefHBuff;
	class CFBamBoolTypeHBuff;
	class CFBamChainHBuff;
	class CFBamClearDepHBuff;
	class CFBamClearSubDep1HBuff;
	class CFBamClearSubDep2HBuff;
	class CFBamClearSubDep3HBuff;
	class CFBamClearTopDepHBuff;
	class CFBamDateColHBuff;
	class CFBamDateDefHBuff;
	class CFBamDateTypeHBuff;
	class CFBamDelDepHBuff;
	class CFBamDelSubDep1HBuff;
	class CFBamDelSubDep2HBuff;
	class CFBamDelSubDep3HBuff;
	class CFBamDelTopDepHBuff;
	class CFBamDoubleColHBuff;
	class CFBamDoubleDefHBuff;
	class CFBamDoubleTypeHBuff;
	class CFBamEnumDefHBuff;
	class CFBamEnumTagHBuff;
	class CFBamEnumTypeHBuff;
	class CFBamFloatColHBuff;
	class CFBamFloatDefHBuff;
	class CFBamFloatTypeHBuff;
	class CFBamId16GenHBuff;
	class CFBamId32GenHBuff;
	class CFBamId64GenHBuff;
	class CFBamIndexHBuff;
	class CFBamIndexColHBuff;
	class CFBamInt16ColHBuff;
	class CFBamInt16DefHBuff;
	class CFBamInt16TypeHBuff;
	class CFBamInt32ColHBuff;
	class CFBamInt32DefHBuff;
	class CFBamInt32TypeHBuff;
	class CFBamInt64ColHBuff;
	class CFBamInt64DefHBuff;
	class CFBamInt64TypeHBuff;
	class CFBamNmTokenColHBuff;
	class CFBamNmTokenDefHBuff;
	class CFBamNmTokenTypeHBuff;
	class CFBamNmTokensColHBuff;
	class CFBamNmTokensDefHBuff;
	class CFBamNmTokensTypeHBuff;
	class CFBamNumberColHBuff;
	class CFBamNumberDefHBuff;
	class CFBamNumberTypeHBuff;
	class CFBamParamHBuff;
	class CFBamPopDepHBuff;
	class CFBamPopSubDep1HBuff;
	class CFBamPopSubDep2HBuff;
	class CFBamPopSubDep3HBuff;
	class CFBamPopTopDepHBuff;
	class CFBamRelationHBuff;
	class CFBamRelationColHBuff;
	class CFBamSchemaDefHBuff;
	class CFBamSchemaRefHBuff;
	class CFBamScopeHBuff;
	class CFBamServerListFuncHBuff;
	class CFBamServerMethodHBuff;
	class CFBamServerObjFuncHBuff;
	class CFBamServerProcHBuff;
	class CFBamStringColHBuff;
	class CFBamStringDefHBuff;
	class CFBamStringTypeHBuff;
	class CFBamTZDateColHBuff;
	class CFBamTZDateDefHBuff;
	class CFBamTZDateTypeHBuff;
	class CFBamTZTimeColHBuff;
	class CFBamTZTimeDefHBuff;
	class CFBamTZTimeTypeHBuff;
	class CFBamTZTimestampColHBuff;
	class CFBamTZTimestampDefHBuff;
	class CFBamTZTimestampTypeHBuff;
	class CFBamTableHBuff;
	class CFBamTableColHBuff;
	class CFBamTextColHBuff;
	class CFBamTextDefHBuff;
	class CFBamTextTypeHBuff;
	class CFBamTimeColHBuff;
	class CFBamTimeDefHBuff;
	class CFBamTimeTypeHBuff;
	class CFBamTimestampColHBuff;
	class CFBamTimestampDefHBuff;
	class CFBamTimestampTypeHBuff;
	class CFBamTokenColHBuff;
	class CFBamTokenDefHBuff;
	class CFBamTokenTypeHBuff;
	class CFBamUInt16ColHBuff;
	class CFBamUInt16DefHBuff;
	class CFBamUInt16TypeHBuff;
	class CFBamUInt32ColHBuff;
	class CFBamUInt32DefHBuff;
	class CFBamUInt32TypeHBuff;
	class CFBamUInt64ColHBuff;
	class CFBamUInt64DefHBuff;
	class CFBamUInt64TypeHBuff;
	class CFBamUuidColHBuff;
	class CFBamUuidDefHBuff;
	class CFBamUuidGenHBuff;
	class CFBamUuidTypeHBuff;
	class CFBamValueHBuff;

	class ICFBamAtomTable;
	class ICFBamBlobColTable;
	class ICFBamBlobDefTable;
	class ICFBamBlobTypeTable;
	class ICFBamBoolColTable;
	class ICFBamBoolDefTable;
	class ICFBamBoolTypeTable;
	class ICFBamChainTable;
	class ICFBamClearDepTable;
	class ICFBamClearSubDep1Table;
	class ICFBamClearSubDep2Table;
	class ICFBamClearSubDep3Table;
	class ICFBamClearTopDepTable;
	class ICFBamClusterTable;
	class ICFBamDateColTable;
	class ICFBamDateDefTable;
	class ICFBamDateTypeTable;
	class ICFBamDelDepTable;
	class ICFBamDelSubDep1Table;
	class ICFBamDelSubDep2Table;
	class ICFBamDelSubDep3Table;
	class ICFBamDelTopDepTable;
	class ICFBamDoubleColTable;
	class ICFBamDoubleDefTable;
	class ICFBamDoubleTypeTable;
	class ICFBamEnumDefTable;
	class ICFBamEnumTagTable;
	class ICFBamEnumTypeTable;
	class ICFBamFloatColTable;
	class ICFBamFloatDefTable;
	class ICFBamFloatTypeTable;
	class ICFBamHostNodeTable;
	class ICFBamISOCcyTable;
	class ICFBamISOCtryTable;
	class ICFBamISOCtryCcyTable;
	class ICFBamISOCtryLangTable;
	class ICFBamISOLangTable;
	class ICFBamISOTZoneTable;
	class ICFBamId16GenTable;
	class ICFBamId32GenTable;
	class ICFBamId64GenTable;
	class ICFBamIndexTable;
	class ICFBamIndexColTable;
	class ICFBamInt16ColTable;
	class ICFBamInt16DefTable;
	class ICFBamInt16TypeTable;
	class ICFBamInt32ColTable;
	class ICFBamInt32DefTable;
	class ICFBamInt32TypeTable;
	class ICFBamInt64ColTable;
	class ICFBamInt64DefTable;
	class ICFBamInt64TypeTable;
	class ICFBamLicenseTable;
	class ICFBamMajorVersionTable;
	class ICFBamMimeTypeTable;
	class ICFBamMinorVersionTable;
	class ICFBamNmTokenColTable;
	class ICFBamNmTokenDefTable;
	class ICFBamNmTokenTypeTable;
	class ICFBamNmTokensColTable;
	class ICFBamNmTokensDefTable;
	class ICFBamNmTokensTypeTable;
	class ICFBamNumberColTable;
	class ICFBamNumberDefTable;
	class ICFBamNumberTypeTable;
	class ICFBamParamTable;
	class ICFBamPopDepTable;
	class ICFBamPopSubDep1Table;
	class ICFBamPopSubDep2Table;
	class ICFBamPopSubDep3Table;
	class ICFBamPopTopDepTable;
	class ICFBamRelationTable;
	class ICFBamRelationColTable;
	class ICFBamSchemaDefTable;
	class ICFBamSchemaRefTable;
	class ICFBamScopeTable;
	class ICFBamSecAppTable;
	class ICFBamSecDeviceTable;
	class ICFBamSecFormTable;
	class ICFBamSecGroupTable;
	class ICFBamSecGroupFormTable;
	class ICFBamSecGrpIncTable;
	class ICFBamSecGrpMembTable;
	class ICFBamSecSessionTable;
	class ICFBamSecUserTable;
	class ICFBamServerListFuncTable;
	class ICFBamServerMethodTable;
	class ICFBamServerObjFuncTable;
	class ICFBamServerProcTable;
	class ICFBamServiceTable;
	class ICFBamServiceTypeTable;
	class ICFBamStringColTable;
	class ICFBamStringDefTable;
	class ICFBamStringTypeTable;
	class ICFBamSubProjectTable;
	class ICFBamSysClusterTable;
	class ICFBamTSecGroupTable;
	class ICFBamTSecGrpIncTable;
	class ICFBamTSecGrpMembTable;
	class ICFBamTZDateColTable;
	class ICFBamTZDateDefTable;
	class ICFBamTZDateTypeTable;
	class ICFBamTZTimeColTable;
	class ICFBamTZTimeDefTable;
	class ICFBamTZTimeTypeTable;
	class ICFBamTZTimestampColTable;
	class ICFBamTZTimestampDefTable;
	class ICFBamTZTimestampTypeTable;
	class ICFBamTableTable;
	class ICFBamTableColTable;
	class ICFBamTenantTable;
	class ICFBamTextColTable;
	class ICFBamTextDefTable;
	class ICFBamTextTypeTable;
	class ICFBamTimeColTable;
	class ICFBamTimeDefTable;
	class ICFBamTimeTypeTable;
	class ICFBamTimestampColTable;
	class ICFBamTimestampDefTable;
	class ICFBamTimestampTypeTable;
	class ICFBamTldTable;
	class ICFBamTokenColTable;
	class ICFBamTokenDefTable;
	class ICFBamTokenTypeTable;
	class ICFBamTopDomainTable;
	class ICFBamTopProjectTable;
	class ICFBamUInt16ColTable;
	class ICFBamUInt16DefTable;
	class ICFBamUInt16TypeTable;
	class ICFBamUInt32ColTable;
	class ICFBamUInt32DefTable;
	class ICFBamUInt32TypeTable;
	class ICFBamUInt64ColTable;
	class ICFBamUInt64DefTable;
	class ICFBamUInt64TypeTable;
	class ICFBamURLProtocolTable;
	class ICFBamUuidColTable;
	class ICFBamUuidDefTable;
	class ICFBamUuidGenTable;
	class ICFBamUuidTypeTable;
	class ICFBamValueTable;
}


namespace cfbam {

	class ICFBamSchema
	: public virtual cfsec::ICFSecSchema,
	  public virtual cfint::ICFIntSchema
	{
	public:
		static const std::string CLASS_NAME;
		enum LoaderBehaviourEnum {
			Insert,
			Update,
			Replace
		};

		enum RelationTypeEnum {
			Unknown,
			Lookup,
			Superclass,
			Container,
			Components,
			Owner,
			Parent,
			Children
		};

		enum SecScopeEnum {
			None,
			System,
			Cluster,
			Tenant
		};


	public:
		ICFBamSchema();
		virtual ~ICFBamSchema();

		static LoaderBehaviourEnum* parseLoaderBehaviourEnum( const std::string* value );
		static LoaderBehaviourEnum* parseLoaderBehaviourEnum( const std::string& fieldOrClassName, const std::string* value );
		static const std::string* toLoaderBehaviourEnumString( const LoaderBehaviourEnum value );

		static const LoaderBehaviourEnum ordinalToLoaderBehaviourEnum( const std::string& fieldOrClassName, const int16_t value );
		static const LoaderBehaviourEnum* ordinalToLoaderBehaviourEnum( const std::string& fieldOrClassName, const int16_t* value );
		static const LoaderBehaviourEnum ordinalToLoaderBehaviourEnum( const int16_t value );
		static const LoaderBehaviourEnum* ordinalToLoaderBehaviourEnum( const int16_t* value );
		static const LoaderBehaviourEnum ordinalToLoaderBehaviourEnum( const int32_t value );
		static const LoaderBehaviourEnum* ordinalToLoaderBehaviourEnum( const int32_t* value );
		static const LoaderBehaviourEnum ordinalToLoaderBehaviourEnum( const std::string& fieldOrClassName, const int32_t value );
		static const LoaderBehaviourEnum* ordinalToLoaderBehaviourEnum( const std::string& fieldOrClassName, const int32_t* value );

		static RelationTypeEnum* parseRelationTypeEnum( const std::string* value );
		static RelationTypeEnum* parseRelationTypeEnum( const std::string& fieldOrClassName, const std::string* value );
		static const std::string* toRelationTypeEnumString( const RelationTypeEnum value );

		static const RelationTypeEnum ordinalToRelationTypeEnum( const std::string& fieldOrClassName, const int16_t value );
		static const RelationTypeEnum* ordinalToRelationTypeEnum( const std::string& fieldOrClassName, const int16_t* value );
		static const RelationTypeEnum ordinalToRelationTypeEnum( const int16_t value );
		static const RelationTypeEnum* ordinalToRelationTypeEnum( const int16_t* value );
		static const RelationTypeEnum ordinalToRelationTypeEnum( const int32_t value );
		static const RelationTypeEnum* ordinalToRelationTypeEnum( const int32_t* value );
		static const RelationTypeEnum ordinalToRelationTypeEnum( const std::string& fieldOrClassName, const int32_t value );
		static const RelationTypeEnum* ordinalToRelationTypeEnum( const std::string& fieldOrClassName, const int32_t* value );

		static SecScopeEnum* parseSecScopeEnum( const std::string* value );
		static SecScopeEnum* parseSecScopeEnum( const std::string& fieldOrClassName, const std::string* value );
		static const std::string* toSecScopeEnumString( const SecScopeEnum value );

		static const SecScopeEnum ordinalToSecScopeEnum( const std::string& fieldOrClassName, const int16_t value );
		static const SecScopeEnum* ordinalToSecScopeEnum( const std::string& fieldOrClassName, const int16_t* value );
		static const SecScopeEnum ordinalToSecScopeEnum( const int16_t value );
		static const SecScopeEnum* ordinalToSecScopeEnum( const int16_t* value );
		static const SecScopeEnum ordinalToSecScopeEnum( const int32_t value );
		static const SecScopeEnum* ordinalToSecScopeEnum( const int32_t* value );
		static const SecScopeEnum ordinalToSecScopeEnum( const std::string& fieldOrClassName, const int32_t value );
		static const SecScopeEnum* ordinalToSecScopeEnum( const std::string& fieldOrClassName, const int32_t* value );

		virtual cfsec::CFSecConfigurationFile* getConfigurationFile() const = 0;
		virtual void setConfigurationFile( cfsec::CFSecConfigurationFile* value ) = 0;

		virtual const std::string* getJndiName() const = 0;
		virtual void setJndiName( const std::string& value ) = 0;

		virtual bool isConnected() = 0;
		virtual bool connect() = 0;
		virtual bool connect( const std::string& username, const std::string& password ) = 0;
		virtual bool connect( const std::string& loginId, const std::string& password, const std::string& clusterName, const std::string& tenantName ) = 0;
		virtual void disconnect( bool doCommit ) = 0;
		virtual void logout( cfsec::CFSecAuthorization* auth ) = 0;

		virtual std::string fileImport( const cfsec::CFSecAuthorization* auth, const std::string& fileName, const std::string& fileContent ) = 0;

		virtual ICFSecSchema* newSchema() = 0;

		virtual int16_t nextISOCcyIdGen() = 0;

		virtual int16_t nextISOCtryIdGen() = 0;

		virtual int16_t nextISOLangIdGen() = 0;

		virtual int16_t nextISOTZoneIdGen() = 0;

		virtual int32_t nextServiceTypeIdGen() = 0;

		virtual int32_t nextMimeTypeIdGen() = 0;

		virtual int32_t nextURLProtocolIdGen() = 0;

		virtual int64_t nextClusterIdGen() = 0;

		virtual int64_t nextTenantIdGen() = 0;

		virtual cfbam::ICFBamAtomTable* getTableAtom() = 0;

		virtual cfbam::ICFBamBlobColTable* getTableBlobCol() = 0;

		virtual cfbam::ICFBamBlobDefTable* getTableBlobDef() = 0;

		virtual cfbam::ICFBamBlobTypeTable* getTableBlobType() = 0;

		virtual cfbam::ICFBamBoolColTable* getTableBoolCol() = 0;

		virtual cfbam::ICFBamBoolDefTable* getTableBoolDef() = 0;

		virtual cfbam::ICFBamBoolTypeTable* getTableBoolType() = 0;

		virtual cfbam::ICFBamChainTable* getTableChain() = 0;

		virtual cfbam::ICFBamClearDepTable* getTableClearDep() = 0;

		virtual cfbam::ICFBamClearSubDep1Table* getTableClearSubDep1() = 0;

		virtual cfbam::ICFBamClearSubDep2Table* getTableClearSubDep2() = 0;

		virtual cfbam::ICFBamClearSubDep3Table* getTableClearSubDep3() = 0;

		virtual cfbam::ICFBamClearTopDepTable* getTableClearTopDep() = 0;

		virtual cfsec::ICFSecClusterTable* getTableCluster() = 0;

		virtual cfbam::ICFBamDateColTable* getTableDateCol() = 0;

		virtual cfbam::ICFBamDateDefTable* getTableDateDef() = 0;

		virtual cfbam::ICFBamDateTypeTable* getTableDateType() = 0;

		virtual cfbam::ICFBamDelDepTable* getTableDelDep() = 0;

		virtual cfbam::ICFBamDelSubDep1Table* getTableDelSubDep1() = 0;

		virtual cfbam::ICFBamDelSubDep2Table* getTableDelSubDep2() = 0;

		virtual cfbam::ICFBamDelSubDep3Table* getTableDelSubDep3() = 0;

		virtual cfbam::ICFBamDelTopDepTable* getTableDelTopDep() = 0;

		virtual cfbam::ICFBamDoubleColTable* getTableDoubleCol() = 0;

		virtual cfbam::ICFBamDoubleDefTable* getTableDoubleDef() = 0;

		virtual cfbam::ICFBamDoubleTypeTable* getTableDoubleType() = 0;

		virtual cfbam::ICFBamEnumDefTable* getTableEnumDef() = 0;

		virtual cfbam::ICFBamEnumTagTable* getTableEnumTag() = 0;

		virtual cfbam::ICFBamEnumTypeTable* getTableEnumType() = 0;

		virtual cfbam::ICFBamFloatColTable* getTableFloatCol() = 0;

		virtual cfbam::ICFBamFloatDefTable* getTableFloatDef() = 0;

		virtual cfbam::ICFBamFloatTypeTable* getTableFloatType() = 0;

		virtual cfsec::ICFSecHostNodeTable* getTableHostNode() = 0;

		virtual cfsec::ICFSecISOCcyTable* getTableISOCcy() = 0;

		virtual cfsec::ICFSecISOCtryTable* getTableISOCtry() = 0;

		virtual cfsec::ICFSecISOCtryCcyTable* getTableISOCtryCcy() = 0;

		virtual cfsec::ICFSecISOCtryLangTable* getTableISOCtryLang() = 0;

		virtual cfsec::ICFSecISOLangTable* getTableISOLang() = 0;

		virtual cfsec::ICFSecISOTZoneTable* getTableISOTZone() = 0;

		virtual cfbam::ICFBamId16GenTable* getTableId16Gen() = 0;

		virtual cfbam::ICFBamId32GenTable* getTableId32Gen() = 0;

		virtual cfbam::ICFBamId64GenTable* getTableId64Gen() = 0;

		virtual cfbam::ICFBamIndexTable* getTableIndex() = 0;

		virtual cfbam::ICFBamIndexColTable* getTableIndexCol() = 0;

		virtual cfbam::ICFBamInt16ColTable* getTableInt16Col() = 0;

		virtual cfbam::ICFBamInt16DefTable* getTableInt16Def() = 0;

		virtual cfbam::ICFBamInt16TypeTable* getTableInt16Type() = 0;

		virtual cfbam::ICFBamInt32ColTable* getTableInt32Col() = 0;

		virtual cfbam::ICFBamInt32DefTable* getTableInt32Def() = 0;

		virtual cfbam::ICFBamInt32TypeTable* getTableInt32Type() = 0;

		virtual cfbam::ICFBamInt64ColTable* getTableInt64Col() = 0;

		virtual cfbam::ICFBamInt64DefTable* getTableInt64Def() = 0;

		virtual cfbam::ICFBamInt64TypeTable* getTableInt64Type() = 0;

		virtual cfint::ICFIntLicenseTable* getTableLicense() = 0;

		virtual cfint::ICFIntMajorVersionTable* getTableMajorVersion() = 0;

		virtual cfint::ICFIntMimeTypeTable* getTableMimeType() = 0;

		virtual cfint::ICFIntMinorVersionTable* getTableMinorVersion() = 0;

		virtual cfbam::ICFBamNmTokenColTable* getTableNmTokenCol() = 0;

		virtual cfbam::ICFBamNmTokenDefTable* getTableNmTokenDef() = 0;

		virtual cfbam::ICFBamNmTokenTypeTable* getTableNmTokenType() = 0;

		virtual cfbam::ICFBamNmTokensColTable* getTableNmTokensCol() = 0;

		virtual cfbam::ICFBamNmTokensDefTable* getTableNmTokensDef() = 0;

		virtual cfbam::ICFBamNmTokensTypeTable* getTableNmTokensType() = 0;

		virtual cfbam::ICFBamNumberColTable* getTableNumberCol() = 0;

		virtual cfbam::ICFBamNumberDefTable* getTableNumberDef() = 0;

		virtual cfbam::ICFBamNumberTypeTable* getTableNumberType() = 0;

		virtual cfbam::ICFBamParamTable* getTableParam() = 0;

		virtual cfbam::ICFBamPopDepTable* getTablePopDep() = 0;

		virtual cfbam::ICFBamPopSubDep1Table* getTablePopSubDep1() = 0;

		virtual cfbam::ICFBamPopSubDep2Table* getTablePopSubDep2() = 0;

		virtual cfbam::ICFBamPopSubDep3Table* getTablePopSubDep3() = 0;

		virtual cfbam::ICFBamPopTopDepTable* getTablePopTopDep() = 0;

		virtual cfbam::ICFBamRelationTable* getTableRelation() = 0;

		virtual cfbam::ICFBamRelationColTable* getTableRelationCol() = 0;

		virtual cfbam::ICFBamSchemaDefTable* getTableSchemaDef() = 0;

		virtual cfbam::ICFBamSchemaRefTable* getTableSchemaRef() = 0;

		virtual cfbam::ICFBamScopeTable* getTableScope() = 0;

		virtual cfsec::ICFSecSecAppTable* getTableSecApp() = 0;

		virtual cfsec::ICFSecSecDeviceTable* getTableSecDevice() = 0;

		virtual cfsec::ICFSecSecFormTable* getTableSecForm() = 0;

		virtual cfsec::ICFSecSecGroupTable* getTableSecGroup() = 0;

		virtual cfsec::ICFSecSecGroupFormTable* getTableSecGroupForm() = 0;

		virtual cfsec::ICFSecSecGrpIncTable* getTableSecGrpInc() = 0;

		virtual cfsec::ICFSecSecGrpMembTable* getTableSecGrpMemb() = 0;

		virtual cfsec::ICFSecSecSessionTable* getTableSecSession() = 0;

		virtual cfsec::ICFSecSecUserTable* getTableSecUser() = 0;

		virtual cfbam::ICFBamServerListFuncTable* getTableServerListFunc() = 0;

		virtual cfbam::ICFBamServerMethodTable* getTableServerMethod() = 0;

		virtual cfbam::ICFBamServerObjFuncTable* getTableServerObjFunc() = 0;

		virtual cfbam::ICFBamServerProcTable* getTableServerProc() = 0;

		virtual cfsec::ICFSecServiceTable* getTableService() = 0;

		virtual cfsec::ICFSecServiceTypeTable* getTableServiceType() = 0;

		virtual cfbam::ICFBamStringColTable* getTableStringCol() = 0;

		virtual cfbam::ICFBamStringDefTable* getTableStringDef() = 0;

		virtual cfbam::ICFBamStringTypeTable* getTableStringType() = 0;

		virtual cfint::ICFIntSubProjectTable* getTableSubProject() = 0;

		virtual cfsec::ICFSecSysClusterTable* getTableSysCluster() = 0;

		virtual cfsec::ICFSecTSecGroupTable* getTableTSecGroup() = 0;

		virtual cfsec::ICFSecTSecGrpIncTable* getTableTSecGrpInc() = 0;

		virtual cfsec::ICFSecTSecGrpMembTable* getTableTSecGrpMemb() = 0;

		virtual cfbam::ICFBamTZDateColTable* getTableTZDateCol() = 0;

		virtual cfbam::ICFBamTZDateDefTable* getTableTZDateDef() = 0;

		virtual cfbam::ICFBamTZDateTypeTable* getTableTZDateType() = 0;

		virtual cfbam::ICFBamTZTimeColTable* getTableTZTimeCol() = 0;

		virtual cfbam::ICFBamTZTimeDefTable* getTableTZTimeDef() = 0;

		virtual cfbam::ICFBamTZTimeTypeTable* getTableTZTimeType() = 0;

		virtual cfbam::ICFBamTZTimestampColTable* getTableTZTimestampCol() = 0;

		virtual cfbam::ICFBamTZTimestampDefTable* getTableTZTimestampDef() = 0;

		virtual cfbam::ICFBamTZTimestampTypeTable* getTableTZTimestampType() = 0;

		virtual cfbam::ICFBamTableTable* getTableTable() = 0;

		virtual cfbam::ICFBamTableColTable* getTableTableCol() = 0;

		virtual cfsec::ICFSecTenantTable* getTableTenant() = 0;

		virtual cfbam::ICFBamTextColTable* getTableTextCol() = 0;

		virtual cfbam::ICFBamTextDefTable* getTableTextDef() = 0;

		virtual cfbam::ICFBamTextTypeTable* getTableTextType() = 0;

		virtual cfbam::ICFBamTimeColTable* getTableTimeCol() = 0;

		virtual cfbam::ICFBamTimeDefTable* getTableTimeDef() = 0;

		virtual cfbam::ICFBamTimeTypeTable* getTableTimeType() = 0;

		virtual cfbam::ICFBamTimestampColTable* getTableTimestampCol() = 0;

		virtual cfbam::ICFBamTimestampDefTable* getTableTimestampDef() = 0;

		virtual cfbam::ICFBamTimestampTypeTable* getTableTimestampType() = 0;

		virtual cfint::ICFIntTldTable* getTableTld() = 0;

		virtual cfbam::ICFBamTokenColTable* getTableTokenCol() = 0;

		virtual cfbam::ICFBamTokenDefTable* getTableTokenDef() = 0;

		virtual cfbam::ICFBamTokenTypeTable* getTableTokenType() = 0;

		virtual cfint::ICFIntTopDomainTable* getTableTopDomain() = 0;

		virtual cfint::ICFIntTopProjectTable* getTableTopProject() = 0;

		virtual cfbam::ICFBamUInt16ColTable* getTableUInt16Col() = 0;

		virtual cfbam::ICFBamUInt16DefTable* getTableUInt16Def() = 0;

		virtual cfbam::ICFBamUInt16TypeTable* getTableUInt16Type() = 0;

		virtual cfbam::ICFBamUInt32ColTable* getTableUInt32Col() = 0;

		virtual cfbam::ICFBamUInt32DefTable* getTableUInt32Def() = 0;

		virtual cfbam::ICFBamUInt32TypeTable* getTableUInt32Type() = 0;

		virtual cfbam::ICFBamUInt64ColTable* getTableUInt64Col() = 0;

		virtual cfbam::ICFBamUInt64DefTable* getTableUInt64Def() = 0;

		virtual cfbam::ICFBamUInt64TypeTable* getTableUInt64Type() = 0;

		virtual cfint::ICFIntURLProtocolTable* getTableURLProtocol() = 0;

		virtual cfbam::ICFBamUuidColTable* getTableUuidCol() = 0;

		virtual cfbam::ICFBamUuidDefTable* getTableUuidDef() = 0;

		virtual cfbam::ICFBamUuidGenTable* getTableUuidGen() = 0;

		virtual cfbam::ICFBamUuidTypeTable* getTableUuidType() = 0;

		virtual cfbam::ICFBamValueTable* getTableValue() = 0;

		virtual bool isTransactionOpen() const = 0;
		virtual bool beginTransaction() = 0;
		virtual void commit() = 0;
		virtual void rollback() = 0;

		virtual cfsec::ICFSecTablePerms* getTablePerms() = 0;
		virtual void setTablePerms( cfsec::ICFSecTablePerms* value ) = 0;

		virtual void releasePreparedStatements() = 0;

		virtual const std::string* getDbSchemaName() const = 0;
		virtual const std::string* getLowerDbSchemaName() const = 0;

		virtual void setDbSchemaName( const std::string& argDbSchemaName ) = 0;
;
	};
}
