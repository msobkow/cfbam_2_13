#pragma once

// Description: C++18 specification for a Table buffer object.

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

#include <cfbam/CFBamScopeBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamTableHBuff;
	class CFBamTableBySchemaDefIdxKey;
	class CFBamTableByDefSchemaIdxKey;
	class CFBamTableByUNameIdxKey;
	class CFBamTableBySchemaCdIdxKey;
	class CFBamTableByPrimaryIndexIdxKey;
	class CFBamTableByLookupIndexIdxKey;
	class CFBamTableByAltIndexIdxKey;
	class CFBamTableByQualTableIdxKey;

	class CFBamTableBuff : public CFBamScopeBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_SCHEMADEFID;
		static const std::string COLNAME_DEFSCHEMATENANTID;
		static const std::string COLNAME_DEFSCHEMAID;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_DBNAME;
		static const std::string COLNAME_SHORTNAME;
		static const std::string COLNAME_LABEL;
		static const std::string COLNAME_SHORTDESCRIPTION;
		static const std::string COLNAME_DESCRIPTION;
		static const std::string COLNAME_PAGEDATA;
		static const std::string COLNAME_PRIMARYINDEXTENANTID;
		static const std::string COLNAME_PRIMARYINDEXID;
		static const std::string COLNAME_TABLECLASSCODE;
		static const std::string COLNAME_LOOKUPINDEXTENANTID;
		static const std::string COLNAME_LOOKUPINDEXID;
		static const std::string COLNAME_ALTINDEXTENANTID;
		static const std::string COLNAME_ALTINDEXID;
		static const std::string COLNAME_QUALIFYINGTENANTID;
		static const std::string COLNAME_QUALIFYINGTABLEID;
		static const std::string COLNAME_ISINSTANTIABLE;
		static const std::string COLNAME_HASHISTORY;
		static const std::string COLNAME_HASAUDITCOLUMNS;
		static const std::string COLNAME_ISMUTABLE;
		static const std::string COLNAME_ISSERVERONLY;
		static const std::string COLNAME_LOADERBEHAVIOUR;
		static const std::string COLNAME_SECSCOPE;
		static const std::string COLNAME_JOBJMEMBERS;
		static const std::string COLNAME_JOBJINTERFACE;
		static const std::string COLNAME_JOBJIMPORT;
		static const std::string COLNAME_JOBJIMPLEMENTATION;
		static const std::string COLNAME_JEDITOBJMEMBERS;
		static const std::string COLNAME_JEDITOBJINTERFACE;
		static const std::string COLNAME_JEDITOBJIMPORT;
		static const std::string COLNAME_JEDITOBJIMPLEMENTATION;
		static const std::string COLNAME_JTABLEIMPORT;
		static const std::string COLNAME_JTABLEMEMBERS;
		static const std::string COLNAME_JTABLEINTERFACE;
		static const std::string COLNAME_JTABLEIMPLEMENTATION;
		static const std::string COLNAME_JTABLEOBJIMPORT;
		static const std::string COLNAME_JTABLEOBJMEMBERS;
		static const std::string COLNAME_JTABLEOBJINTERFACE;
		static const std::string COLNAME_JTABLEOBJIMPLEMENTATION;
		static const std::string COLNAME_JDB2LUWTABLEIMPORT;
		static const std::string COLNAME_JDB2LUWTABLEMEMBERS;
		static const std::string COLNAME_JDB2LUWTABLEIMPLEMENTATION;
		static const std::string COLNAME_JMSSQLTABLEIMPORT;
		static const std::string COLNAME_JMSSQLTABLEMEMBERS;
		static const std::string COLNAME_JMSSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_JMYSQLTABLEIMPORT;
		static const std::string COLNAME_JMYSQLTABLEMEMBERS;
		static const std::string COLNAME_JMYSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_JORACLETABLEIMPORT;
		static const std::string COLNAME_JORACLETABLEMEMBERS;
		static const std::string COLNAME_JORACLETABLEIMPLEMENTATION;
		static const std::string COLNAME_JPGSQLTABLEIMPORT;
		static const std::string COLNAME_JPGSQLTABLEMEMBERS;
		static const std::string COLNAME_JPGSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_JRAMTABLEIMPORT;
		static const std::string COLNAME_JRAMTABLEMEMBERS;
		static const std::string COLNAME_JRAMTABLEIMPLEMENTATION;
		static const std::string COLNAME_JSAXLOADERIMPORT;
		static const std::string COLNAME_JSAXLOADERSTARTELEMENT;
		static const std::string COLNAME_JSAXLOADERENDELEMENT;
		static const std::string COLNAME_JXMSGTABLEIMPORT;
		static const std::string COLNAME_JXMSGTABLEFORMATTERS;
		static const std::string COLNAME_JXMSGRQSTTABLEIMPORT;
		static const std::string COLNAME_JXMSGRSPNTABLEIMPORT;
		static const std::string COLNAME_JXMSGCLIENTTABLEIMPORT;
		static const std::string COLNAME_JXMSGRQSTTABLEBODY;
		static const std::string COLNAME_JXMSGRSPNTABLEBODY;
		static const std::string COLNAME_JXMSGCLIENTTABLEBODY;
		static const std::string COLNAME_CPPOBJMEMBERS;
		static const std::string COLNAME_CPPOBJINTERFACE;
		static const std::string COLNAME_CPPOBJINCLUDE;
		static const std::string COLNAME_CPPOBJIMPLEMENTATION;
		static const std::string COLNAME_CPPEDITOBJMEMBERS;
		static const std::string COLNAME_CPPEDITOBJINTERFACE;
		static const std::string COLNAME_CPPEDITOBJINCLUDE;
		static const std::string COLNAME_CPPEDITOBJIMPLEMENTATION;
		static const std::string COLNAME_CPPTABLEINCLUDE;
		static const std::string COLNAME_CPPTABLEMEMBERS;
		static const std::string COLNAME_CPPTABLEINTERFACE;
		static const std::string COLNAME_CPPTABLEIMPLEMENTATION;
		static const std::string COLNAME_CPPTABLEOBJINCLUDE;
		static const std::string COLNAME_CPPTABLEOBJMEMBERS;
		static const std::string COLNAME_CPPTABLEOBJINTERFACE;
		static const std::string COLNAME_CPPTABLEOBJIMPLEMENTATION;
		static const std::string COLNAME_CPPDB2LUWTABLEINCLUDE;
		static const std::string COLNAME_CPPDB2LUWTABLEMEMBERS;
		static const std::string COLNAME_CPPDB2LUWTABLEIMPLEMENTATION;
		static const std::string COLNAME_CPPMSSQLTABLEINCLUDE;
		static const std::string COLNAME_CPPMSSQLTABLEMEMBERS;
		static const std::string COLNAME_CPPMSSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_CPPMYSQLTABLEINCLUDE;
		static const std::string COLNAME_CPPMYSQLTABLEMEMBERS;
		static const std::string COLNAME_CPPMYSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_CPPORACLETABLEINCLUDE;
		static const std::string COLNAME_CPPORACLETABLEMEMBERS;
		static const std::string COLNAME_CPPORACLETABLEIMPLEMENTATION;
		static const std::string COLNAME_CPPPGSQLTABLEINCLUDE;
		static const std::string COLNAME_CPPPGSQLTABLEMEMBERS;
		static const std::string COLNAME_CPPPGSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_CPPRAMTABLEINCLUDE;
		static const std::string COLNAME_CPPRAMTABLEMEMBERS;
		static const std::string COLNAME_CPPRAMTABLEIMPLEMENTATION;
		static const std::string COLNAME_CPPSAXLOADERINCLUDE;
		static const std::string COLNAME_CPPSAXLOADERSTARTELEMENT;
		static const std::string COLNAME_CPPSAXLOADERENDELEMENT;
		static const std::string COLNAME_CPPXMSGTABLEINCLUDE;
		static const std::string COLNAME_CPPXMSGTABLEFORMATTERS;
		static const std::string COLNAME_CPPXMSGRQSTTABLEINCLUDE;
		static const std::string COLNAME_CPPXMSGRSPNTABLEINCLUDE;
		static const std::string COLNAME_CPPXMSGCLIENTTABLEINCLUDE;
		static const std::string COLNAME_CPPXMSGRQSTTABLEBODY;
		static const std::string COLNAME_CPPXMSGRSPNTABLEBODY;
		static const std::string COLNAME_CPPXMSGCLIENTTABLEBODY;
		static const std::string COLNAME_HPPOBJMEMBERS;
		static const std::string COLNAME_HPPOBJINTERFACE;
		static const std::string COLNAME_HPPOBJINCLUDE;
		static const std::string COLNAME_HPPOBJIMPLEMENTATION;
		static const std::string COLNAME_HPPEDITOBJMEMBERS;
		static const std::string COLNAME_HPPEDITOBJINTERFACE;
		static const std::string COLNAME_HPPEDITOBJINCLUDE;
		static const std::string COLNAME_HPPEDITOBJIMPLEMENTATION;
		static const std::string COLNAME_HPPTABLEINCLUDE;
		static const std::string COLNAME_HPPTABLEMEMBERS;
		static const std::string COLNAME_HPPTABLEINTERFACE;
		static const std::string COLNAME_HPPTABLEIMPLEMENTATION;
		static const std::string COLNAME_HPPTABLEOBJINCLUDE;
		static const std::string COLNAME_HPPTABLEOBJMEMBERS;
		static const std::string COLNAME_HPPTABLEOBJINTERFACE;
		static const std::string COLNAME_HPPTABLEOBJIMPLEMENTATION;
		static const std::string COLNAME_HPPDB2LUWTABLEINCLUDE;
		static const std::string COLNAME_HPPDB2LUWTABLEMEMBERS;
		static const std::string COLNAME_HPPDB2LUWTABLEIMPLEMENTATION;
		static const std::string COLNAME_HPPMSSQLTABLEINCLUDE;
		static const std::string COLNAME_HPPMSSQLTABLEMEMBERS;
		static const std::string COLNAME_HPPMSSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_HPPMYSQLTABLEINCLUDE;
		static const std::string COLNAME_HPPMYSQLTABLEMEMBERS;
		static const std::string COLNAME_HPPMYSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_HPPORACLETABLEINCLUDE;
		static const std::string COLNAME_HPPORACLETABLEMEMBERS;
		static const std::string COLNAME_HPPORACLETABLEIMPLEMENTATION;
		static const std::string COLNAME_HPPPGSQLTABLEINCLUDE;
		static const std::string COLNAME_HPPPGSQLTABLEMEMBERS;
		static const std::string COLNAME_HPPPGSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_HPPRAMTABLEINCLUDE;
		static const std::string COLNAME_HPPRAMTABLEMEMBERS;
		static const std::string COLNAME_HPPRAMTABLEIMPLEMENTATION;
		static const std::string COLNAME_HPPSAXLOADERINCLUDE;
		static const std::string COLNAME_HPPSAXLOADERSTARTELEMENT;
		static const std::string COLNAME_HPPSAXLOADERENDELEMENT;
		static const std::string COLNAME_HPPXMSGTABLEINCLUDE;
		static const std::string COLNAME_HPPXMSGTABLEFORMATTERS;
		static const std::string COLNAME_HPPXMSGRQSTTABLEINCLUDE;
		static const std::string COLNAME_HPPXMSGRSPNTABLEINCLUDE;
		static const std::string COLNAME_HPPXMSGCLIENTTABLEINCLUDE;
		static const std::string COLNAME_HPPXMSGRQSTTABLEBODY;
		static const std::string COLNAME_HPPXMSGRSPNTABLEBODY;
		static const std::string COLNAME_HPPXMSGCLIENTTABLEBODY;
		static const std::string COLNAME_CSOBJMEMBERS;
		static const std::string COLNAME_CSOBJINTERFACE;
		static const std::string COLNAME_CSOBJUSING;
		static const std::string COLNAME_CSOBJIMPLEMENTATION;
		static const std::string COLNAME_CSEDITOBJMEMBERS;
		static const std::string COLNAME_CSEDITOBJINTERFACE;
		static const std::string COLNAME_CSEDITOBJUSING;
		static const std::string COLNAME_CSEDITOBJIMPLEMENTATION;
		static const std::string COLNAME_CSTABLEUSING;
		static const std::string COLNAME_CSTABLEMEMBERS;
		static const std::string COLNAME_CSTABLEINTERFACE;
		static const std::string COLNAME_CSTABLEIMPLEMENTATION;
		static const std::string COLNAME_CSTABLEOBJUSING;
		static const std::string COLNAME_CSTABLEOBJMEMBERS;
		static const std::string COLNAME_CSTABLEOBJINTERFACE;
		static const std::string COLNAME_CSTABLEOBJIMPLEMENTATION;
		static const std::string COLNAME_CSDB2LUWTABLEUSING;
		static const std::string COLNAME_CSDB2LUWTABLEMEMBERS;
		static const std::string COLNAME_CSDB2LUWTABLEIMPLEMENTATION;
		static const std::string COLNAME_CSMSSQLTABLEUSING;
		static const std::string COLNAME_CSMSSQLTABLEMEMBERS;
		static const std::string COLNAME_CSMSSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_CSMYSQLTABLEUSING;
		static const std::string COLNAME_CSMYSQLTABLEMEMBERS;
		static const std::string COLNAME_CSMYSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_CSORACLETABLEUSING;
		static const std::string COLNAME_CSORACLETABLEMEMBERS;
		static const std::string COLNAME_CSORACLETABLEIMPLEMENTATION;
		static const std::string COLNAME_CSPGSQLTABLEUSING;
		static const std::string COLNAME_CSPGSQLTABLEMEMBERS;
		static const std::string COLNAME_CSPGSQLTABLEIMPLEMENTATION;
		static const std::string COLNAME_CSRAMTABLEUSING;
		static const std::string COLNAME_CSRAMTABLEMEMBERS;
		static const std::string COLNAME_CSRAMTABLEIMPLEMENTATION;
		static const std::string COLNAME_CSSAXLOADERUSING;
		static const std::string COLNAME_CSSAXLOADERSTARTELEMENT;
		static const std::string COLNAME_CSSAXLOADERENDELEMENT;
		static const std::string COLNAME_CSXMSGTABLEUSING;
		static const std::string COLNAME_CSXMSGTABLEFORMATTERS;
		static const std::string COLNAME_CSXMSGRQSTTABLEUSING;
		static const std::string COLNAME_CSXMSGRSPNTABLEUSING;
		static const std::string COLNAME_CSXMSGCLIENTTABLEUSING;
		static const std::string COLNAME_CSXMSGRQSTTABLEBODY;
		static const std::string COLNAME_CSXMSGRSPNTABLEBODY;
		static const std::string COLNAME_CSXMSGCLIENTTABLEBODY;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t SCHEMADEFID_INIT_VALUE;
		static const int64_t DEFSCHEMATENANTID_INIT_VALUE;
		static const int64_t DEFSCHEMAID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const bool PAGEDATA_INIT_VALUE;
		static const int64_t PRIMARYINDEXTENANTID_INIT_VALUE;
		static const int64_t PRIMARYINDEXID_INIT_VALUE;
		static const std::string TABLECLASSCODE_INIT_VALUE;
		static const int64_t LOOKUPINDEXTENANTID_INIT_VALUE;
		static const int64_t LOOKUPINDEXID_INIT_VALUE;
		static const int64_t ALTINDEXTENANTID_INIT_VALUE;
		static const int64_t ALTINDEXID_INIT_VALUE;
		static const int64_t QUALIFYINGTENANTID_INIT_VALUE;
		static const int64_t QUALIFYINGTABLEID_INIT_VALUE;
		static const bool ISINSTANTIABLE_INIT_VALUE;
		static const bool HASHISTORY_INIT_VALUE;
		static const bool HASAUDITCOLUMNS_INIT_VALUE;
		static const bool ISMUTABLE_INIT_VALUE;
		static const bool ISSERVERONLY_INIT_VALUE;
		static const cfbam::ICFBamSchema::LoaderBehaviourEnum LOADERBEHAVIOUR_INIT_VALUE;
		static const cfbam::ICFBamSchema::SecScopeEnum SECSCOPE_INIT_VALUE;
		static const std::string JOBJMEMBERS_INIT_VALUE;
		static const std::string JOBJINTERFACE_INIT_VALUE;
		static const std::string JOBJIMPORT_INIT_VALUE;
		static const std::string JOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string JEDITOBJMEMBERS_INIT_VALUE;
		static const std::string JEDITOBJINTERFACE_INIT_VALUE;
		static const std::string JEDITOBJIMPORT_INIT_VALUE;
		static const std::string JEDITOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string JTABLEIMPORT_INIT_VALUE;
		static const std::string JTABLEMEMBERS_INIT_VALUE;
		static const std::string JTABLEINTERFACE_INIT_VALUE;
		static const std::string JTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string JTABLEOBJIMPORT_INIT_VALUE;
		static const std::string JTABLEOBJMEMBERS_INIT_VALUE;
		static const std::string JTABLEOBJINTERFACE_INIT_VALUE;
		static const std::string JTABLEOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string JDB2LUWTABLEIMPORT_INIT_VALUE;
		static const std::string JDB2LUWTABLEMEMBERS_INIT_VALUE;
		static const std::string JDB2LUWTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string JMSSQLTABLEIMPORT_INIT_VALUE;
		static const std::string JMSSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string JMSSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string JMYSQLTABLEIMPORT_INIT_VALUE;
		static const std::string JMYSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string JMYSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string JORACLETABLEIMPORT_INIT_VALUE;
		static const std::string JORACLETABLEMEMBERS_INIT_VALUE;
		static const std::string JORACLETABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string JPGSQLTABLEIMPORT_INIT_VALUE;
		static const std::string JPGSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string JPGSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string JRAMTABLEIMPORT_INIT_VALUE;
		static const std::string JRAMTABLEMEMBERS_INIT_VALUE;
		static const std::string JRAMTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string JSAXLOADERIMPORT_INIT_VALUE;
		static const std::string JSAXLOADERSTARTELEMENT_INIT_VALUE;
		static const std::string JSAXLOADERENDELEMENT_INIT_VALUE;
		static const std::string JXMSGTABLEIMPORT_INIT_VALUE;
		static const std::string JXMSGTABLEFORMATTERS_INIT_VALUE;
		static const std::string JXMSGRQSTTABLEIMPORT_INIT_VALUE;
		static const std::string JXMSGRSPNTABLEIMPORT_INIT_VALUE;
		static const std::string JXMSGCLIENTTABLEIMPORT_INIT_VALUE;
		static const std::string JXMSGRQSTTABLEBODY_INIT_VALUE;
		static const std::string JXMSGRSPNTABLEBODY_INIT_VALUE;
		static const std::string JXMSGCLIENTTABLEBODY_INIT_VALUE;
		static const std::string CPPOBJMEMBERS_INIT_VALUE;
		static const std::string CPPOBJINTERFACE_INIT_VALUE;
		static const std::string CPPOBJINCLUDE_INIT_VALUE;
		static const std::string CPPOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPEDITOBJMEMBERS_INIT_VALUE;
		static const std::string CPPEDITOBJINTERFACE_INIT_VALUE;
		static const std::string CPPEDITOBJINCLUDE_INIT_VALUE;
		static const std::string CPPEDITOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPTABLEMEMBERS_INIT_VALUE;
		static const std::string CPPTABLEINTERFACE_INIT_VALUE;
		static const std::string CPPTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPTABLEOBJINCLUDE_INIT_VALUE;
		static const std::string CPPTABLEOBJMEMBERS_INIT_VALUE;
		static const std::string CPPTABLEOBJINTERFACE_INIT_VALUE;
		static const std::string CPPTABLEOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPDB2LUWTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPDB2LUWTABLEMEMBERS_INIT_VALUE;
		static const std::string CPPDB2LUWTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPMSSQLTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPMSSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string CPPMSSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPMYSQLTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPMYSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string CPPMYSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPORACLETABLEINCLUDE_INIT_VALUE;
		static const std::string CPPORACLETABLEMEMBERS_INIT_VALUE;
		static const std::string CPPORACLETABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPPGSQLTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPPGSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string CPPPGSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPRAMTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPRAMTABLEMEMBERS_INIT_VALUE;
		static const std::string CPPRAMTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CPPSAXLOADERINCLUDE_INIT_VALUE;
		static const std::string CPPSAXLOADERSTARTELEMENT_INIT_VALUE;
		static const std::string CPPSAXLOADERENDELEMENT_INIT_VALUE;
		static const std::string CPPXMSGTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPXMSGTABLEFORMATTERS_INIT_VALUE;
		static const std::string CPPXMSGRQSTTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPXMSGRSPNTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPXMSGCLIENTTABLEINCLUDE_INIT_VALUE;
		static const std::string CPPXMSGRQSTTABLEBODY_INIT_VALUE;
		static const std::string CPPXMSGRSPNTABLEBODY_INIT_VALUE;
		static const std::string CPPXMSGCLIENTTABLEBODY_INIT_VALUE;
		static const std::string HPPOBJMEMBERS_INIT_VALUE;
		static const std::string HPPOBJINTERFACE_INIT_VALUE;
		static const std::string HPPOBJINCLUDE_INIT_VALUE;
		static const std::string HPPOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPEDITOBJMEMBERS_INIT_VALUE;
		static const std::string HPPEDITOBJINTERFACE_INIT_VALUE;
		static const std::string HPPEDITOBJINCLUDE_INIT_VALUE;
		static const std::string HPPEDITOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPTABLEMEMBERS_INIT_VALUE;
		static const std::string HPPTABLEINTERFACE_INIT_VALUE;
		static const std::string HPPTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPTABLEOBJINCLUDE_INIT_VALUE;
		static const std::string HPPTABLEOBJMEMBERS_INIT_VALUE;
		static const std::string HPPTABLEOBJINTERFACE_INIT_VALUE;
		static const std::string HPPTABLEOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPDB2LUWTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPDB2LUWTABLEMEMBERS_INIT_VALUE;
		static const std::string HPPDB2LUWTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPMSSQLTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPMSSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string HPPMSSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPMYSQLTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPMYSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string HPPMYSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPORACLETABLEINCLUDE_INIT_VALUE;
		static const std::string HPPORACLETABLEMEMBERS_INIT_VALUE;
		static const std::string HPPORACLETABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPPGSQLTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPPGSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string HPPPGSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPRAMTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPRAMTABLEMEMBERS_INIT_VALUE;
		static const std::string HPPRAMTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string HPPSAXLOADERINCLUDE_INIT_VALUE;
		static const std::string HPPSAXLOADERSTARTELEMENT_INIT_VALUE;
		static const std::string HPPSAXLOADERENDELEMENT_INIT_VALUE;
		static const std::string HPPXMSGTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPXMSGTABLEFORMATTERS_INIT_VALUE;
		static const std::string HPPXMSGRQSTTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPXMSGRSPNTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPXMSGCLIENTTABLEINCLUDE_INIT_VALUE;
		static const std::string HPPXMSGRQSTTABLEBODY_INIT_VALUE;
		static const std::string HPPXMSGRSPNTABLEBODY_INIT_VALUE;
		static const std::string HPPXMSGCLIENTTABLEBODY_INIT_VALUE;
		static const std::string CSOBJMEMBERS_INIT_VALUE;
		static const std::string CSOBJINTERFACE_INIT_VALUE;
		static const std::string CSOBJUSING_INIT_VALUE;
		static const std::string CSOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string CSEDITOBJMEMBERS_INIT_VALUE;
		static const std::string CSEDITOBJINTERFACE_INIT_VALUE;
		static const std::string CSEDITOBJUSING_INIT_VALUE;
		static const std::string CSEDITOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string CSTABLEUSING_INIT_VALUE;
		static const std::string CSTABLEMEMBERS_INIT_VALUE;
		static const std::string CSTABLEINTERFACE_INIT_VALUE;
		static const std::string CSTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CSTABLEOBJUSING_INIT_VALUE;
		static const std::string CSTABLEOBJMEMBERS_INIT_VALUE;
		static const std::string CSTABLEOBJINTERFACE_INIT_VALUE;
		static const std::string CSTABLEOBJIMPLEMENTATION_INIT_VALUE;
		static const std::string CSDB2LUWTABLEUSING_INIT_VALUE;
		static const std::string CSDB2LUWTABLEMEMBERS_INIT_VALUE;
		static const std::string CSDB2LUWTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CSMSSQLTABLEUSING_INIT_VALUE;
		static const std::string CSMSSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string CSMSSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CSMYSQLTABLEUSING_INIT_VALUE;
		static const std::string CSMYSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string CSMYSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CSORACLETABLEUSING_INIT_VALUE;
		static const std::string CSORACLETABLEMEMBERS_INIT_VALUE;
		static const std::string CSORACLETABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CSPGSQLTABLEUSING_INIT_VALUE;
		static const std::string CSPGSQLTABLEMEMBERS_INIT_VALUE;
		static const std::string CSPGSQLTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CSRAMTABLEUSING_INIT_VALUE;
		static const std::string CSRAMTABLEMEMBERS_INIT_VALUE;
		static const std::string CSRAMTABLEIMPLEMENTATION_INIT_VALUE;
		static const std::string CSSAXLOADERUSING_INIT_VALUE;
		static const std::string CSSAXLOADERSTARTELEMENT_INIT_VALUE;
		static const std::string CSSAXLOADERENDELEMENT_INIT_VALUE;
		static const std::string CSXMSGTABLEUSING_INIT_VALUE;
		static const std::string CSXMSGTABLEFORMATTERS_INIT_VALUE;
		static const std::string CSXMSGRQSTTABLEUSING_INIT_VALUE;
		static const std::string CSXMSGRSPNTABLEUSING_INIT_VALUE;
		static const std::string CSXMSGCLIENTTABLEUSING_INIT_VALUE;
		static const std::string CSXMSGRQSTTABLEBODY_INIT_VALUE;
		static const std::string CSXMSGRSPNTABLEBODY_INIT_VALUE;
		static const std::string CSXMSGCLIENTTABLEBODY_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t SCHEMADEFID_MIN_VALUE;
		static const int64_t DEFSCHEMATENANTID_MIN_VALUE;
		static const int64_t DEFSCHEMAID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t PRIMARYINDEXTENANTID_MIN_VALUE;
		static const int64_t PRIMARYINDEXID_MIN_VALUE;
		static const int64_t LOOKUPINDEXTENANTID_MIN_VALUE;
		static const int64_t LOOKUPINDEXID_MIN_VALUE;
		static const int64_t ALTINDEXTENANTID_MIN_VALUE;
		static const int64_t ALTINDEXID_MIN_VALUE;
		static const int64_t QUALIFYINGTENANTID_MIN_VALUE;
		static const int64_t QUALIFYINGTABLEID_MIN_VALUE;
		static const cfbam::ICFBamSchema::LoaderBehaviourEnum LOADERBEHAVIOUR_MIN_VALUE;
		static const cfbam::ICFBamSchema::SecScopeEnum SECSCOPE_MIN_VALUE;
		static const cfbam::ICFBamSchema::LoaderBehaviourEnum LOADERBEHAVIOUR_MAX_VALUE;
		static const cfbam::ICFBamSchema::SecScopeEnum SECSCOPE_MAX_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
		static const std::string::size_type DBNAME_MAX_LEN;
		static const std::string::size_type SHORTNAME_MAX_LEN;
		static const std::string::size_type LABEL_MAX_LEN;
		static const std::string::size_type SHORTDESCRIPTION_MAX_LEN;
		static const std::string::size_type DESCRIPTION_MAX_LEN;
		static const std::string::size_type TABLECLASSCODE_MAX_LEN;
		static const std::string::size_type JOBJMEMBERS_MAX_LEN;
		static const std::string::size_type JOBJINTERFACE_MAX_LEN;
		static const std::string::size_type JOBJIMPORT_MAX_LEN;
		static const std::string::size_type JOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JEDITOBJMEMBERS_MAX_LEN;
		static const std::string::size_type JEDITOBJINTERFACE_MAX_LEN;
		static const std::string::size_type JEDITOBJIMPORT_MAX_LEN;
		static const std::string::size_type JEDITOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type JTABLEINTERFACE_MAX_LEN;
		static const std::string::size_type JTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JTABLEOBJIMPORT_MAX_LEN;
		static const std::string::size_type JTABLEOBJMEMBERS_MAX_LEN;
		static const std::string::size_type JTABLEOBJINTERFACE_MAX_LEN;
		static const std::string::size_type JTABLEOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JDB2LUWTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JDB2LUWTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type JDB2LUWTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JMSSQLTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JMSSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type JMSSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JMYSQLTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JMYSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type JMYSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JORACLETABLEIMPORT_MAX_LEN;
		static const std::string::size_type JORACLETABLEMEMBERS_MAX_LEN;
		static const std::string::size_type JORACLETABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JPGSQLTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JPGSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type JPGSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JRAMTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JRAMTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type JRAMTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type JSAXLOADERIMPORT_MAX_LEN;
		static const std::string::size_type JSAXLOADERSTARTELEMENT_MAX_LEN;
		static const std::string::size_type JSAXLOADERENDELEMENT_MAX_LEN;
		static const std::string::size_type JXMSGTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JXMSGTABLEFORMATTERS_MAX_LEN;
		static const std::string::size_type JXMSGRQSTTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JXMSGRSPNTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JXMSGCLIENTTABLEIMPORT_MAX_LEN;
		static const std::string::size_type JXMSGRQSTTABLEBODY_MAX_LEN;
		static const std::string::size_type JXMSGRSPNTABLEBODY_MAX_LEN;
		static const std::string::size_type JXMSGCLIENTTABLEBODY_MAX_LEN;
		static const std::string::size_type CPPOBJMEMBERS_MAX_LEN;
		static const std::string::size_type CPPOBJINTERFACE_MAX_LEN;
		static const std::string::size_type CPPOBJINCLUDE_MAX_LEN;
		static const std::string::size_type CPPOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPEDITOBJMEMBERS_MAX_LEN;
		static const std::string::size_type CPPEDITOBJINTERFACE_MAX_LEN;
		static const std::string::size_type CPPEDITOBJINCLUDE_MAX_LEN;
		static const std::string::size_type CPPEDITOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CPPTABLEINTERFACE_MAX_LEN;
		static const std::string::size_type CPPTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPTABLEOBJINCLUDE_MAX_LEN;
		static const std::string::size_type CPPTABLEOBJMEMBERS_MAX_LEN;
		static const std::string::size_type CPPTABLEOBJINTERFACE_MAX_LEN;
		static const std::string::size_type CPPTABLEOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPDB2LUWTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPDB2LUWTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CPPDB2LUWTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPMSSQLTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPMSSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CPPMSSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPMYSQLTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPMYSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CPPMYSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPORACLETABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPORACLETABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CPPORACLETABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPPGSQLTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPPGSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CPPPGSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPRAMTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPRAMTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CPPRAMTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CPPSAXLOADERINCLUDE_MAX_LEN;
		static const std::string::size_type CPPSAXLOADERSTARTELEMENT_MAX_LEN;
		static const std::string::size_type CPPSAXLOADERENDELEMENT_MAX_LEN;
		static const std::string::size_type CPPXMSGTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPXMSGTABLEFORMATTERS_MAX_LEN;
		static const std::string::size_type CPPXMSGRQSTTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPXMSGRSPNTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPXMSGCLIENTTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type CPPXMSGRQSTTABLEBODY_MAX_LEN;
		static const std::string::size_type CPPXMSGRSPNTABLEBODY_MAX_LEN;
		static const std::string::size_type CPPXMSGCLIENTTABLEBODY_MAX_LEN;
		static const std::string::size_type HPPOBJMEMBERS_MAX_LEN;
		static const std::string::size_type HPPOBJINTERFACE_MAX_LEN;
		static const std::string::size_type HPPOBJINCLUDE_MAX_LEN;
		static const std::string::size_type HPPOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPEDITOBJMEMBERS_MAX_LEN;
		static const std::string::size_type HPPEDITOBJINTERFACE_MAX_LEN;
		static const std::string::size_type HPPEDITOBJINCLUDE_MAX_LEN;
		static const std::string::size_type HPPEDITOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type HPPTABLEINTERFACE_MAX_LEN;
		static const std::string::size_type HPPTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPTABLEOBJINCLUDE_MAX_LEN;
		static const std::string::size_type HPPTABLEOBJMEMBERS_MAX_LEN;
		static const std::string::size_type HPPTABLEOBJINTERFACE_MAX_LEN;
		static const std::string::size_type HPPTABLEOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPDB2LUWTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPDB2LUWTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type HPPDB2LUWTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPMSSQLTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPMSSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type HPPMSSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPMYSQLTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPMYSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type HPPMYSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPORACLETABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPORACLETABLEMEMBERS_MAX_LEN;
		static const std::string::size_type HPPORACLETABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPPGSQLTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPPGSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type HPPPGSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPRAMTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPRAMTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type HPPRAMTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type HPPSAXLOADERINCLUDE_MAX_LEN;
		static const std::string::size_type HPPSAXLOADERSTARTELEMENT_MAX_LEN;
		static const std::string::size_type HPPSAXLOADERENDELEMENT_MAX_LEN;
		static const std::string::size_type HPPXMSGTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPXMSGTABLEFORMATTERS_MAX_LEN;
		static const std::string::size_type HPPXMSGRQSTTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPXMSGRSPNTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPXMSGCLIENTTABLEINCLUDE_MAX_LEN;
		static const std::string::size_type HPPXMSGRQSTTABLEBODY_MAX_LEN;
		static const std::string::size_type HPPXMSGRSPNTABLEBODY_MAX_LEN;
		static const std::string::size_type HPPXMSGCLIENTTABLEBODY_MAX_LEN;
		static const std::string::size_type CSOBJMEMBERS_MAX_LEN;
		static const std::string::size_type CSOBJINTERFACE_MAX_LEN;
		static const std::string::size_type CSOBJUSING_MAX_LEN;
		static const std::string::size_type CSOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSEDITOBJMEMBERS_MAX_LEN;
		static const std::string::size_type CSEDITOBJINTERFACE_MAX_LEN;
		static const std::string::size_type CSEDITOBJUSING_MAX_LEN;
		static const std::string::size_type CSEDITOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSTABLEUSING_MAX_LEN;
		static const std::string::size_type CSTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CSTABLEINTERFACE_MAX_LEN;
		static const std::string::size_type CSTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSTABLEOBJUSING_MAX_LEN;
		static const std::string::size_type CSTABLEOBJMEMBERS_MAX_LEN;
		static const std::string::size_type CSTABLEOBJINTERFACE_MAX_LEN;
		static const std::string::size_type CSTABLEOBJIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSDB2LUWTABLEUSING_MAX_LEN;
		static const std::string::size_type CSDB2LUWTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CSDB2LUWTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSMSSQLTABLEUSING_MAX_LEN;
		static const std::string::size_type CSMSSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CSMSSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSMYSQLTABLEUSING_MAX_LEN;
		static const std::string::size_type CSMYSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CSMYSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSORACLETABLEUSING_MAX_LEN;
		static const std::string::size_type CSORACLETABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CSORACLETABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSPGSQLTABLEUSING_MAX_LEN;
		static const std::string::size_type CSPGSQLTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CSPGSQLTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSRAMTABLEUSING_MAX_LEN;
		static const std::string::size_type CSRAMTABLEMEMBERS_MAX_LEN;
		static const std::string::size_type CSRAMTABLEIMPLEMENTATION_MAX_LEN;
		static const std::string::size_type CSSAXLOADERUSING_MAX_LEN;
		static const std::string::size_type CSSAXLOADERSTARTELEMENT_MAX_LEN;
		static const std::string::size_type CSSAXLOADERENDELEMENT_MAX_LEN;
		static const std::string::size_type CSXMSGTABLEUSING_MAX_LEN;
		static const std::string::size_type CSXMSGTABLEFORMATTERS_MAX_LEN;
		static const std::string::size_type CSXMSGRQSTTABLEUSING_MAX_LEN;
		static const std::string::size_type CSXMSGRSPNTABLEUSING_MAX_LEN;
		static const std::string::size_type CSXMSGCLIENTTABLEUSING_MAX_LEN;
		static const std::string::size_type CSXMSGRQSTTABLEBODY_MAX_LEN;
		static const std::string::size_type CSXMSGRSPNTABLEBODY_MAX_LEN;
		static const std::string::size_type CSXMSGCLIENTTABLEBODY_MAX_LEN;
	protected:
		int64_t requiredSchemaDefId;
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
		std::string* requiredName;
		std::string* optionalDbName;
		std::string* optionalShortName;
		std::string* optionalLabel;
		std::string* optionalShortDescription;
		std::string* optionalDescription;
		bool requiredPageData;
		cflib::CFLibNullableInt64 optionalPrimaryIndexTenantId;
		cflib::CFLibNullableInt64 optionalPrimaryIndexId;
		std::string* requiredTableClassCode;
		cflib::CFLibNullableInt64 optionalLookupIndexTenantId;
		cflib::CFLibNullableInt64 optionalLookupIndexId;
		cflib::CFLibNullableInt64 optionalAltIndexTenantId;
		cflib::CFLibNullableInt64 optionalAltIndexId;
		cflib::CFLibNullableInt64 optionalQualifyingTenantId;
		cflib::CFLibNullableInt64 optionalQualifyingTableId;
		bool requiredIsInstantiable;
		bool requiredHasHistory;
		bool requiredHasAuditColumns;
		bool requiredIsMutable;
		bool requiredIsServerOnly;
		cfbam::ICFBamSchema::LoaderBehaviourEnum requiredLoaderBehaviour;
		cfbam::ICFBamSchema::SecScopeEnum requiredSecScope;
		std::string* optionalJObjMembers;
		std::string* optionalJObjInterface;
		std::string* optionalJObjImport;
		std::string* optionalJObjImplementation;
		std::string* optionalJEditObjMembers;
		std::string* optionalJEditObjInterface;
		std::string* optionalJEditObjImport;
		std::string* optionalJEditObjImplementation;
		std::string* optionalJTableImport;
		std::string* optionalJTableMembers;
		std::string* optionalJTableInterface;
		std::string* optionalJTableImplementation;
		std::string* optionalJTableObjImport;
		std::string* optionalJTableObjMembers;
		std::string* optionalJTableObjInterface;
		std::string* optionalJTableObjImplementation;
		std::string* optionalJDb2LUWTableImport;
		std::string* optionalJDb2LUWTableMembers;
		std::string* optionalJDb2LUWTableImplementation;
		std::string* optionalJMSSqlTableImport;
		std::string* optionalJMSSqlTableMembers;
		std::string* optionalJMSSqlTableImplementation;
		std::string* optionalJMySqlTableImport;
		std::string* optionalJMySqlTableMembers;
		std::string* optionalJMySqlTableImplementation;
		std::string* optionalJOracleTableImport;
		std::string* optionalJOracleTableMembers;
		std::string* optionalJOracleTableImplementation;
		std::string* optionalJPgSqlTableImport;
		std::string* optionalJPgSqlTableMembers;
		std::string* optionalJPgSqlTableImplementation;
		std::string* optionalJRamTableImport;
		std::string* optionalJRamTableMembers;
		std::string* optionalJRamTableImplementation;
		std::string* optionalJSaxLoaderImport;
		std::string* optionalJSaxLoaderStartElement;
		std::string* optionalJSaxLoaderEndElement;
		std::string* optionalJXMsgTableImport;
		std::string* optionalJXMsgTableFormatters;
		std::string* optionalJXMsgRqstTableImport;
		std::string* optionalJXMsgRspnTableImport;
		std::string* optionalJXMsgClientTableImport;
		std::string* optionalJXMsgRqstTableBody;
		std::string* optionalJXMsgRspnTableBody;
		std::string* optionalJXMsgClientTableBody;
		std::string* optionalCppObjMembers;
		std::string* optionalCppObjInterface;
		std::string* optionalCppObjInclude;
		std::string* optionalCppObjImplementation;
		std::string* optionalCppEditObjMembers;
		std::string* optionalCppEditObjInterface;
		std::string* optionalCppEditObjInclude;
		std::string* optionalCppEditObjImplementation;
		std::string* optionalCppTableInclude;
		std::string* optionalCppTableMembers;
		std::string* optionalCppTableInterface;
		std::string* optionalCppTableImplementation;
		std::string* optionalCppTableObjInclude;
		std::string* optionalCppTableObjMembers;
		std::string* optionalCppTableObjInterface;
		std::string* optionalCppTableObjImplementation;
		std::string* optionalCppDb2LUWTableInclude;
		std::string* optionalCppDb2LUWTableMembers;
		std::string* optionalCppDb2LUWTableImplementation;
		std::string* optionalCppMSSqlTableInclude;
		std::string* optionalCppMSSqlTableMembers;
		std::string* optionalCppMSSqlTableImplementation;
		std::string* optionalCppMySqlTableInclude;
		std::string* optionalCppMySqlTableMembers;
		std::string* optionalCppMySqlTableImplementation;
		std::string* optionalCppOracleTableInclude;
		std::string* optionalCppOracleTableMembers;
		std::string* optionalCppOracleTableImplementation;
		std::string* optionalCppPgSqlTableInclude;
		std::string* optionalCppPgSqlTableMembers;
		std::string* optionalCppPgSqlTableImplementation;
		std::string* optionalCppRamTableInclude;
		std::string* optionalCppRamTableMembers;
		std::string* optionalCppRamTableImplementation;
		std::string* optionalCppSaxLoaderInclude;
		std::string* optionalCppSaxLoaderStartElement;
		std::string* optionalCppSaxLoaderEndElement;
		std::string* optionalCppXMsgTableInclude;
		std::string* optionalCppXMsgTableFormatters;
		std::string* optionalCppXMsgRqstTableInclude;
		std::string* optionalCppXMsgRspnTableInclude;
		std::string* optionalCppXMsgClientTableInclude;
		std::string* optionalCppXMsgRqstTableBody;
		std::string* optionalCppXMsgRspnTableBody;
		std::string* optionalCppXMsgClientTableBody;
		std::string* optionalHppObjMembers;
		std::string* optionalHppObjInterface;
		std::string* optionalHppObjInclude;
		std::string* optionalHppObjImplementation;
		std::string* optionalHppEditObjMembers;
		std::string* optionalHppEditObjInterface;
		std::string* optionalHppEditObjInclude;
		std::string* optionalHppEditObjImplementation;
		std::string* optionalHppTableInclude;
		std::string* optionalHppTableMembers;
		std::string* optionalHppTableInterface;
		std::string* optionalHppTableImplementation;
		std::string* optionalHppTableObjInclude;
		std::string* optionalHppTableObjMembers;
		std::string* optionalHppTableObjInterface;
		std::string* optionalHppTableObjImplementation;
		std::string* optionalHppDb2LUWTableInclude;
		std::string* optionalHppDb2LUWTableMembers;
		std::string* optionalHppDb2LUWTableImplementation;
		std::string* optionalHppMSSqlTableInclude;
		std::string* optionalHppMSSqlTableMembers;
		std::string* optionalHppMSSqlTableImplementation;
		std::string* optionalHppMySqlTableInclude;
		std::string* optionalHppMySqlTableMembers;
		std::string* optionalHppMySqlTableImplementation;
		std::string* optionalHppOracleTableInclude;
		std::string* optionalHppOracleTableMembers;
		std::string* optionalHppOracleTableImplementation;
		std::string* optionalHppPgSqlTableInclude;
		std::string* optionalHppPgSqlTableMembers;
		std::string* optionalHppPgSqlTableImplementation;
		std::string* optionalHppRamTableInclude;
		std::string* optionalHppRamTableMembers;
		std::string* optionalHppRamTableImplementation;
		std::string* optionalHppSaxLoaderInclude;
		std::string* optionalHppSaxLoaderStartElement;
		std::string* optionalHppSaxLoaderEndElement;
		std::string* optionalHppXMsgTableInclude;
		std::string* optionalHppXMsgTableFormatters;
		std::string* optionalHppXMsgRqstTableInclude;
		std::string* optionalHppXMsgRspnTableInclude;
		std::string* optionalHppXMsgClientTableInclude;
		std::string* optionalHppXMsgRqstTableBody;
		std::string* optionalHppXMsgRspnTableBody;
		std::string* optionalHppXMsgClientTableBody;
		std::string* optionalCsObjMembers;
		std::string* optionalCsObjInterface;
		std::string* optionalCsObjUsing;
		std::string* optionalCsObjImplementation;
		std::string* optionalCsEditObjMembers;
		std::string* optionalCsEditObjInterface;
		std::string* optionalCsEditObjUsing;
		std::string* optionalCsEditObjImplementation;
		std::string* optionalCsTableUsing;
		std::string* optionalCsTableMembers;
		std::string* optionalCsTableInterface;
		std::string* optionalCsTableImplementation;
		std::string* optionalCsTableObjUsing;
		std::string* optionalCsTableObjMembers;
		std::string* optionalCsTableObjInterface;
		std::string* optionalCsTableObjImplementation;
		std::string* optionalCsDb2LUWTableUsing;
		std::string* optionalCsDb2LUWTableMembers;
		std::string* optionalCsDb2LUWTableImplementation;
		std::string* optionalCsMSSqlTableUsing;
		std::string* optionalCsMSSqlTableMembers;
		std::string* optionalCsMSSqlTableImplementation;
		std::string* optionalCsMySqlTableUsing;
		std::string* optionalCsMySqlTableMembers;
		std::string* optionalCsMySqlTableImplementation;
		std::string* optionalCsOracleTableUsing;
		std::string* optionalCsOracleTableMembers;
		std::string* optionalCsOracleTableImplementation;
		std::string* optionalCsPgSqlTableUsing;
		std::string* optionalCsPgSqlTableMembers;
		std::string* optionalCsPgSqlTableImplementation;
		std::string* optionalCsRamTableUsing;
		std::string* optionalCsRamTableMembers;
		std::string* optionalCsRamTableImplementation;
		std::string* optionalCsSaxLoaderUsing;
		std::string* optionalCsSaxLoaderStartElement;
		std::string* optionalCsSaxLoaderEndElement;
		std::string* optionalCsXMsgTableUsing;
		std::string* optionalCsXMsgTableFormatters;
		std::string* optionalCsXMsgRqstTableUsing;
		std::string* optionalCsXMsgRspnTableUsing;
		std::string* optionalCsXMsgClientTableUsing;
		std::string* optionalCsXMsgRqstTableBody;
		std::string* optionalCsXMsgRspnTableBody;
		std::string* optionalCsXMsgClientTableBody;
	public:
		CFBamTableBuff();
		CFBamTableBuff( const CFBamTableBuff& src );
		virtual ~CFBamTableBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredSchemaDefId() const;
		virtual const int64_t* getRequiredSchemaDefIdReference() const;
		virtual void setRequiredSchemaDefId( const int64_t value );

		virtual const int64_t getOptionalDefSchemaTenantIdValue() const;
		virtual const int64_t* getOptionalDefSchemaTenantIdReference() const;
		virtual const bool isOptionalDefSchemaTenantIdNull() const;
		virtual void setOptionalDefSchemaTenantIdNull();
		virtual void setOptionalDefSchemaTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalDefSchemaIdValue() const;
		virtual const int64_t* getOptionalDefSchemaIdReference() const;
		virtual const bool isOptionalDefSchemaIdNull() const;
		virtual void setOptionalDefSchemaIdNull();
		virtual void setOptionalDefSchemaIdValue( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual const std::string& getOptionalDbNameValue() const;
		virtual const std::string* getOptionalDbNameReference() const;
		virtual const bool isOptionalDbNameNull() const;
		virtual void setOptionalDbNameNull();
		virtual void setOptionalDbNameValue( const std::string& value );

		virtual const std::string& getOptionalShortNameValue() const;
		virtual const std::string* getOptionalShortNameReference() const;
		virtual const bool isOptionalShortNameNull() const;
		virtual void setOptionalShortNameNull();
		virtual void setOptionalShortNameValue( const std::string& value );

		virtual const std::string& getOptionalLabelValue() const;
		virtual const std::string* getOptionalLabelReference() const;
		virtual const bool isOptionalLabelNull() const;
		virtual void setOptionalLabelNull();
		virtual void setOptionalLabelValue( const std::string& value );

		virtual const std::string& getOptionalShortDescriptionValue() const;
		virtual const std::string* getOptionalShortDescriptionReference() const;
		virtual const bool isOptionalShortDescriptionNull() const;
		virtual void setOptionalShortDescriptionNull();
		virtual void setOptionalShortDescriptionValue( const std::string& value );

		virtual const std::string& getOptionalDescriptionValue() const;
		virtual const std::string* getOptionalDescriptionReference() const;
		virtual const bool isOptionalDescriptionNull() const;
		virtual void setOptionalDescriptionNull();
		virtual void setOptionalDescriptionValue( const std::string& value );

		virtual const bool getRequiredPageData() const;
		virtual const bool* getRequiredPageDataReference() const;
		virtual void setRequiredPageData( const bool value );

		virtual const int64_t getOptionalPrimaryIndexTenantIdValue() const;
		virtual const int64_t* getOptionalPrimaryIndexTenantIdReference() const;
		virtual const bool isOptionalPrimaryIndexTenantIdNull() const;
		virtual void setOptionalPrimaryIndexTenantIdNull();
		virtual void setOptionalPrimaryIndexTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalPrimaryIndexIdValue() const;
		virtual const int64_t* getOptionalPrimaryIndexIdReference() const;
		virtual const bool isOptionalPrimaryIndexIdNull() const;
		virtual void setOptionalPrimaryIndexIdNull();
		virtual void setOptionalPrimaryIndexIdValue( const int64_t value );

		virtual const std::string& getRequiredTableClassCode() const;
		virtual const std::string* getRequiredTableClassCodeReference() const;
		virtual void setRequiredTableClassCode( const std::string& value );

		virtual const int64_t getOptionalLookupIndexTenantIdValue() const;
		virtual const int64_t* getOptionalLookupIndexTenantIdReference() const;
		virtual const bool isOptionalLookupIndexTenantIdNull() const;
		virtual void setOptionalLookupIndexTenantIdNull();
		virtual void setOptionalLookupIndexTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalLookupIndexIdValue() const;
		virtual const int64_t* getOptionalLookupIndexIdReference() const;
		virtual const bool isOptionalLookupIndexIdNull() const;
		virtual void setOptionalLookupIndexIdNull();
		virtual void setOptionalLookupIndexIdValue( const int64_t value );

		virtual const int64_t getOptionalAltIndexTenantIdValue() const;
		virtual const int64_t* getOptionalAltIndexTenantIdReference() const;
		virtual const bool isOptionalAltIndexTenantIdNull() const;
		virtual void setOptionalAltIndexTenantIdNull();
		virtual void setOptionalAltIndexTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalAltIndexIdValue() const;
		virtual const int64_t* getOptionalAltIndexIdReference() const;
		virtual const bool isOptionalAltIndexIdNull() const;
		virtual void setOptionalAltIndexIdNull();
		virtual void setOptionalAltIndexIdValue( const int64_t value );

		virtual const int64_t getOptionalQualifyingTenantIdValue() const;
		virtual const int64_t* getOptionalQualifyingTenantIdReference() const;
		virtual const bool isOptionalQualifyingTenantIdNull() const;
		virtual void setOptionalQualifyingTenantIdNull();
		virtual void setOptionalQualifyingTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalQualifyingTableIdValue() const;
		virtual const int64_t* getOptionalQualifyingTableIdReference() const;
		virtual const bool isOptionalQualifyingTableIdNull() const;
		virtual void setOptionalQualifyingTableIdNull();
		virtual void setOptionalQualifyingTableIdValue( const int64_t value );

		virtual const bool getRequiredIsInstantiable() const;
		virtual const bool* getRequiredIsInstantiableReference() const;
		virtual void setRequiredIsInstantiable( const bool value );

		virtual const bool getRequiredHasHistory() const;
		virtual const bool* getRequiredHasHistoryReference() const;
		virtual void setRequiredHasHistory( const bool value );

		virtual const bool getRequiredHasAuditColumns() const;
		virtual const bool* getRequiredHasAuditColumnsReference() const;
		virtual void setRequiredHasAuditColumns( const bool value );

		virtual const bool getRequiredIsMutable() const;
		virtual const bool* getRequiredIsMutableReference() const;
		virtual void setRequiredIsMutable( const bool value );

		virtual const bool getRequiredIsServerOnly() const;
		virtual const bool* getRequiredIsServerOnlyReference() const;
		virtual void setRequiredIsServerOnly( const bool value );

		virtual const cfbam::ICFBamSchema::LoaderBehaviourEnum getRequiredLoaderBehaviour() const;
		virtual const cfbam::ICFBamSchema::LoaderBehaviourEnum* getRequiredLoaderBehaviourReference() const;
		virtual void setRequiredLoaderBehaviour( const cfbam::ICFBamSchema::LoaderBehaviourEnum value );

		virtual const cfbam::ICFBamSchema::SecScopeEnum getRequiredSecScope() const;
		virtual const cfbam::ICFBamSchema::SecScopeEnum* getRequiredSecScopeReference() const;
		virtual void setRequiredSecScope( const cfbam::ICFBamSchema::SecScopeEnum value );

		virtual const std::string& getOptionalJObjMembersValue() const;
		virtual const std::string* getOptionalJObjMembersReference() const;
		virtual const bool isOptionalJObjMembersNull() const;
		virtual void setOptionalJObjMembersNull();
		virtual void setOptionalJObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJObjInterfaceValue() const;
		virtual const std::string* getOptionalJObjInterfaceReference() const;
		virtual const bool isOptionalJObjInterfaceNull() const;
		virtual void setOptionalJObjInterfaceNull();
		virtual void setOptionalJObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalJObjImportValue() const;
		virtual const std::string* getOptionalJObjImportReference() const;
		virtual const bool isOptionalJObjImportNull() const;
		virtual void setOptionalJObjImportNull();
		virtual void setOptionalJObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJObjImplementationValue() const;
		virtual const std::string* getOptionalJObjImplementationReference() const;
		virtual const bool isOptionalJObjImplementationNull() const;
		virtual void setOptionalJObjImplementationNull();
		virtual void setOptionalJObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJEditObjMembersValue() const;
		virtual const std::string* getOptionalJEditObjMembersReference() const;
		virtual const bool isOptionalJEditObjMembersNull() const;
		virtual void setOptionalJEditObjMembersNull();
		virtual void setOptionalJEditObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJEditObjInterfaceValue() const;
		virtual const std::string* getOptionalJEditObjInterfaceReference() const;
		virtual const bool isOptionalJEditObjInterfaceNull() const;
		virtual void setOptionalJEditObjInterfaceNull();
		virtual void setOptionalJEditObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalJEditObjImportValue() const;
		virtual const std::string* getOptionalJEditObjImportReference() const;
		virtual const bool isOptionalJEditObjImportNull() const;
		virtual void setOptionalJEditObjImportNull();
		virtual void setOptionalJEditObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJEditObjImplementationValue() const;
		virtual const std::string* getOptionalJEditObjImplementationReference() const;
		virtual const bool isOptionalJEditObjImplementationNull() const;
		virtual void setOptionalJEditObjImplementationNull();
		virtual void setOptionalJEditObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJTableImportValue() const;
		virtual const std::string* getOptionalJTableImportReference() const;
		virtual const bool isOptionalJTableImportNull() const;
		virtual void setOptionalJTableImportNull();
		virtual void setOptionalJTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJTableMembersValue() const;
		virtual const std::string* getOptionalJTableMembersReference() const;
		virtual const bool isOptionalJTableMembersNull() const;
		virtual void setOptionalJTableMembersNull();
		virtual void setOptionalJTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalJTableInterfaceValue() const;
		virtual const std::string* getOptionalJTableInterfaceReference() const;
		virtual const bool isOptionalJTableInterfaceNull() const;
		virtual void setOptionalJTableInterfaceNull();
		virtual void setOptionalJTableInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalJTableImplementationValue() const;
		virtual const std::string* getOptionalJTableImplementationReference() const;
		virtual const bool isOptionalJTableImplementationNull() const;
		virtual void setOptionalJTableImplementationNull();
		virtual void setOptionalJTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJTableObjImportValue() const;
		virtual const std::string* getOptionalJTableObjImportReference() const;
		virtual const bool isOptionalJTableObjImportNull() const;
		virtual void setOptionalJTableObjImportNull();
		virtual void setOptionalJTableObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJTableObjMembersValue() const;
		virtual const std::string* getOptionalJTableObjMembersReference() const;
		virtual const bool isOptionalJTableObjMembersNull() const;
		virtual void setOptionalJTableObjMembersNull();
		virtual void setOptionalJTableObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJTableObjInterfaceValue() const;
		virtual const std::string* getOptionalJTableObjInterfaceReference() const;
		virtual const bool isOptionalJTableObjInterfaceNull() const;
		virtual void setOptionalJTableObjInterfaceNull();
		virtual void setOptionalJTableObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalJTableObjImplementationValue() const;
		virtual const std::string* getOptionalJTableObjImplementationReference() const;
		virtual const bool isOptionalJTableObjImplementationNull() const;
		virtual void setOptionalJTableObjImplementationNull();
		virtual void setOptionalJTableObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJDb2LUWTableImportValue() const;
		virtual const std::string* getOptionalJDb2LUWTableImportReference() const;
		virtual const bool isOptionalJDb2LUWTableImportNull() const;
		virtual void setOptionalJDb2LUWTableImportNull();
		virtual void setOptionalJDb2LUWTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJDb2LUWTableMembersValue() const;
		virtual const std::string* getOptionalJDb2LUWTableMembersReference() const;
		virtual const bool isOptionalJDb2LUWTableMembersNull() const;
		virtual void setOptionalJDb2LUWTableMembersNull();
		virtual void setOptionalJDb2LUWTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalJDb2LUWTableImplementationValue() const;
		virtual const std::string* getOptionalJDb2LUWTableImplementationReference() const;
		virtual const bool isOptionalJDb2LUWTableImplementationNull() const;
		virtual void setOptionalJDb2LUWTableImplementationNull();
		virtual void setOptionalJDb2LUWTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJMSSqlTableImportValue() const;
		virtual const std::string* getOptionalJMSSqlTableImportReference() const;
		virtual const bool isOptionalJMSSqlTableImportNull() const;
		virtual void setOptionalJMSSqlTableImportNull();
		virtual void setOptionalJMSSqlTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJMSSqlTableMembersValue() const;
		virtual const std::string* getOptionalJMSSqlTableMembersReference() const;
		virtual const bool isOptionalJMSSqlTableMembersNull() const;
		virtual void setOptionalJMSSqlTableMembersNull();
		virtual void setOptionalJMSSqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalJMSSqlTableImplementationValue() const;
		virtual const std::string* getOptionalJMSSqlTableImplementationReference() const;
		virtual const bool isOptionalJMSSqlTableImplementationNull() const;
		virtual void setOptionalJMSSqlTableImplementationNull();
		virtual void setOptionalJMSSqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJMySqlTableImportValue() const;
		virtual const std::string* getOptionalJMySqlTableImportReference() const;
		virtual const bool isOptionalJMySqlTableImportNull() const;
		virtual void setOptionalJMySqlTableImportNull();
		virtual void setOptionalJMySqlTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJMySqlTableMembersValue() const;
		virtual const std::string* getOptionalJMySqlTableMembersReference() const;
		virtual const bool isOptionalJMySqlTableMembersNull() const;
		virtual void setOptionalJMySqlTableMembersNull();
		virtual void setOptionalJMySqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalJMySqlTableImplementationValue() const;
		virtual const std::string* getOptionalJMySqlTableImplementationReference() const;
		virtual const bool isOptionalJMySqlTableImplementationNull() const;
		virtual void setOptionalJMySqlTableImplementationNull();
		virtual void setOptionalJMySqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJOracleTableImportValue() const;
		virtual const std::string* getOptionalJOracleTableImportReference() const;
		virtual const bool isOptionalJOracleTableImportNull() const;
		virtual void setOptionalJOracleTableImportNull();
		virtual void setOptionalJOracleTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJOracleTableMembersValue() const;
		virtual const std::string* getOptionalJOracleTableMembersReference() const;
		virtual const bool isOptionalJOracleTableMembersNull() const;
		virtual void setOptionalJOracleTableMembersNull();
		virtual void setOptionalJOracleTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalJOracleTableImplementationValue() const;
		virtual const std::string* getOptionalJOracleTableImplementationReference() const;
		virtual const bool isOptionalJOracleTableImplementationNull() const;
		virtual void setOptionalJOracleTableImplementationNull();
		virtual void setOptionalJOracleTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJPgSqlTableImportValue() const;
		virtual const std::string* getOptionalJPgSqlTableImportReference() const;
		virtual const bool isOptionalJPgSqlTableImportNull() const;
		virtual void setOptionalJPgSqlTableImportNull();
		virtual void setOptionalJPgSqlTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJPgSqlTableMembersValue() const;
		virtual const std::string* getOptionalJPgSqlTableMembersReference() const;
		virtual const bool isOptionalJPgSqlTableMembersNull() const;
		virtual void setOptionalJPgSqlTableMembersNull();
		virtual void setOptionalJPgSqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalJPgSqlTableImplementationValue() const;
		virtual const std::string* getOptionalJPgSqlTableImplementationReference() const;
		virtual const bool isOptionalJPgSqlTableImplementationNull() const;
		virtual void setOptionalJPgSqlTableImplementationNull();
		virtual void setOptionalJPgSqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJRamTableImportValue() const;
		virtual const std::string* getOptionalJRamTableImportReference() const;
		virtual const bool isOptionalJRamTableImportNull() const;
		virtual void setOptionalJRamTableImportNull();
		virtual void setOptionalJRamTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJRamTableMembersValue() const;
		virtual const std::string* getOptionalJRamTableMembersReference() const;
		virtual const bool isOptionalJRamTableMembersNull() const;
		virtual void setOptionalJRamTableMembersNull();
		virtual void setOptionalJRamTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalJRamTableImplementationValue() const;
		virtual const std::string* getOptionalJRamTableImplementationReference() const;
		virtual const bool isOptionalJRamTableImplementationNull() const;
		virtual void setOptionalJRamTableImplementationNull();
		virtual void setOptionalJRamTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJSaxLoaderImportValue() const;
		virtual const std::string* getOptionalJSaxLoaderImportReference() const;
		virtual const bool isOptionalJSaxLoaderImportNull() const;
		virtual void setOptionalJSaxLoaderImportNull();
		virtual void setOptionalJSaxLoaderImportValue( const std::string& value );

		virtual const std::string& getOptionalJSaxLoaderStartElementValue() const;
		virtual const std::string* getOptionalJSaxLoaderStartElementReference() const;
		virtual const bool isOptionalJSaxLoaderStartElementNull() const;
		virtual void setOptionalJSaxLoaderStartElementNull();
		virtual void setOptionalJSaxLoaderStartElementValue( const std::string& value );

		virtual const std::string& getOptionalJSaxLoaderEndElementValue() const;
		virtual const std::string* getOptionalJSaxLoaderEndElementReference() const;
		virtual const bool isOptionalJSaxLoaderEndElementNull() const;
		virtual void setOptionalJSaxLoaderEndElementNull();
		virtual void setOptionalJSaxLoaderEndElementValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgTableImportValue() const;
		virtual const std::string* getOptionalJXMsgTableImportReference() const;
		virtual const bool isOptionalJXMsgTableImportNull() const;
		virtual void setOptionalJXMsgTableImportNull();
		virtual void setOptionalJXMsgTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgTableFormattersValue() const;
		virtual const std::string* getOptionalJXMsgTableFormattersReference() const;
		virtual const bool isOptionalJXMsgTableFormattersNull() const;
		virtual void setOptionalJXMsgTableFormattersNull();
		virtual void setOptionalJXMsgTableFormattersValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRqstTableImportValue() const;
		virtual const std::string* getOptionalJXMsgRqstTableImportReference() const;
		virtual const bool isOptionalJXMsgRqstTableImportNull() const;
		virtual void setOptionalJXMsgRqstTableImportNull();
		virtual void setOptionalJXMsgRqstTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRspnTableImportValue() const;
		virtual const std::string* getOptionalJXMsgRspnTableImportReference() const;
		virtual const bool isOptionalJXMsgRspnTableImportNull() const;
		virtual void setOptionalJXMsgRspnTableImportNull();
		virtual void setOptionalJXMsgRspnTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgClientTableImportValue() const;
		virtual const std::string* getOptionalJXMsgClientTableImportReference() const;
		virtual const bool isOptionalJXMsgClientTableImportNull() const;
		virtual void setOptionalJXMsgClientTableImportNull();
		virtual void setOptionalJXMsgClientTableImportValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRqstTableBodyValue() const;
		virtual const std::string* getOptionalJXMsgRqstTableBodyReference() const;
		virtual const bool isOptionalJXMsgRqstTableBodyNull() const;
		virtual void setOptionalJXMsgRqstTableBodyNull();
		virtual void setOptionalJXMsgRqstTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRspnTableBodyValue() const;
		virtual const std::string* getOptionalJXMsgRspnTableBodyReference() const;
		virtual const bool isOptionalJXMsgRspnTableBodyNull() const;
		virtual void setOptionalJXMsgRspnTableBodyNull();
		virtual void setOptionalJXMsgRspnTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgClientTableBodyValue() const;
		virtual const std::string* getOptionalJXMsgClientTableBodyReference() const;
		virtual const bool isOptionalJXMsgClientTableBodyNull() const;
		virtual void setOptionalJXMsgClientTableBodyNull();
		virtual void setOptionalJXMsgClientTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalCppObjMembersValue() const;
		virtual const std::string* getOptionalCppObjMembersReference() const;
		virtual const bool isOptionalCppObjMembersNull() const;
		virtual void setOptionalCppObjMembersNull();
		virtual void setOptionalCppObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppObjInterfaceValue() const;
		virtual const std::string* getOptionalCppObjInterfaceReference() const;
		virtual const bool isOptionalCppObjInterfaceNull() const;
		virtual void setOptionalCppObjInterfaceNull();
		virtual void setOptionalCppObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCppObjIncludeValue() const;
		virtual const std::string* getOptionalCppObjIncludeReference() const;
		virtual const bool isOptionalCppObjIncludeNull() const;
		virtual void setOptionalCppObjIncludeNull();
		virtual void setOptionalCppObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppObjImplementationValue() const;
		virtual const std::string* getOptionalCppObjImplementationReference() const;
		virtual const bool isOptionalCppObjImplementationNull() const;
		virtual void setOptionalCppObjImplementationNull();
		virtual void setOptionalCppObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppEditObjMembersValue() const;
		virtual const std::string* getOptionalCppEditObjMembersReference() const;
		virtual const bool isOptionalCppEditObjMembersNull() const;
		virtual void setOptionalCppEditObjMembersNull();
		virtual void setOptionalCppEditObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppEditObjInterfaceValue() const;
		virtual const std::string* getOptionalCppEditObjInterfaceReference() const;
		virtual const bool isOptionalCppEditObjInterfaceNull() const;
		virtual void setOptionalCppEditObjInterfaceNull();
		virtual void setOptionalCppEditObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCppEditObjIncludeValue() const;
		virtual const std::string* getOptionalCppEditObjIncludeReference() const;
		virtual const bool isOptionalCppEditObjIncludeNull() const;
		virtual void setOptionalCppEditObjIncludeNull();
		virtual void setOptionalCppEditObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppEditObjImplementationValue() const;
		virtual const std::string* getOptionalCppEditObjImplementationReference() const;
		virtual const bool isOptionalCppEditObjImplementationNull() const;
		virtual void setOptionalCppEditObjImplementationNull();
		virtual void setOptionalCppEditObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppTableIncludeValue() const;
		virtual const std::string* getOptionalCppTableIncludeReference() const;
		virtual const bool isOptionalCppTableIncludeNull() const;
		virtual void setOptionalCppTableIncludeNull();
		virtual void setOptionalCppTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppTableMembersValue() const;
		virtual const std::string* getOptionalCppTableMembersReference() const;
		virtual const bool isOptionalCppTableMembersNull() const;
		virtual void setOptionalCppTableMembersNull();
		virtual void setOptionalCppTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppTableInterfaceValue() const;
		virtual const std::string* getOptionalCppTableInterfaceReference() const;
		virtual const bool isOptionalCppTableInterfaceNull() const;
		virtual void setOptionalCppTableInterfaceNull();
		virtual void setOptionalCppTableInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCppTableImplementationValue() const;
		virtual const std::string* getOptionalCppTableImplementationReference() const;
		virtual const bool isOptionalCppTableImplementationNull() const;
		virtual void setOptionalCppTableImplementationNull();
		virtual void setOptionalCppTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppTableObjIncludeValue() const;
		virtual const std::string* getOptionalCppTableObjIncludeReference() const;
		virtual const bool isOptionalCppTableObjIncludeNull() const;
		virtual void setOptionalCppTableObjIncludeNull();
		virtual void setOptionalCppTableObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppTableObjMembersValue() const;
		virtual const std::string* getOptionalCppTableObjMembersReference() const;
		virtual const bool isOptionalCppTableObjMembersNull() const;
		virtual void setOptionalCppTableObjMembersNull();
		virtual void setOptionalCppTableObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppTableObjInterfaceValue() const;
		virtual const std::string* getOptionalCppTableObjInterfaceReference() const;
		virtual const bool isOptionalCppTableObjInterfaceNull() const;
		virtual void setOptionalCppTableObjInterfaceNull();
		virtual void setOptionalCppTableObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCppTableObjImplementationValue() const;
		virtual const std::string* getOptionalCppTableObjImplementationReference() const;
		virtual const bool isOptionalCppTableObjImplementationNull() const;
		virtual void setOptionalCppTableObjImplementationNull();
		virtual void setOptionalCppTableObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppDb2LUWTableIncludeValue() const;
		virtual const std::string* getOptionalCppDb2LUWTableIncludeReference() const;
		virtual const bool isOptionalCppDb2LUWTableIncludeNull() const;
		virtual void setOptionalCppDb2LUWTableIncludeNull();
		virtual void setOptionalCppDb2LUWTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppDb2LUWTableMembersValue() const;
		virtual const std::string* getOptionalCppDb2LUWTableMembersReference() const;
		virtual const bool isOptionalCppDb2LUWTableMembersNull() const;
		virtual void setOptionalCppDb2LUWTableMembersNull();
		virtual void setOptionalCppDb2LUWTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppDb2LUWTableImplementationValue() const;
		virtual const std::string* getOptionalCppDb2LUWTableImplementationReference() const;
		virtual const bool isOptionalCppDb2LUWTableImplementationNull() const;
		virtual void setOptionalCppDb2LUWTableImplementationNull();
		virtual void setOptionalCppDb2LUWTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppMSSqlTableIncludeValue() const;
		virtual const std::string* getOptionalCppMSSqlTableIncludeReference() const;
		virtual const bool isOptionalCppMSSqlTableIncludeNull() const;
		virtual void setOptionalCppMSSqlTableIncludeNull();
		virtual void setOptionalCppMSSqlTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppMSSqlTableMembersValue() const;
		virtual const std::string* getOptionalCppMSSqlTableMembersReference() const;
		virtual const bool isOptionalCppMSSqlTableMembersNull() const;
		virtual void setOptionalCppMSSqlTableMembersNull();
		virtual void setOptionalCppMSSqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppMSSqlTableImplementationValue() const;
		virtual const std::string* getOptionalCppMSSqlTableImplementationReference() const;
		virtual const bool isOptionalCppMSSqlTableImplementationNull() const;
		virtual void setOptionalCppMSSqlTableImplementationNull();
		virtual void setOptionalCppMSSqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppMySqlTableIncludeValue() const;
		virtual const std::string* getOptionalCppMySqlTableIncludeReference() const;
		virtual const bool isOptionalCppMySqlTableIncludeNull() const;
		virtual void setOptionalCppMySqlTableIncludeNull();
		virtual void setOptionalCppMySqlTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppMySqlTableMembersValue() const;
		virtual const std::string* getOptionalCppMySqlTableMembersReference() const;
		virtual const bool isOptionalCppMySqlTableMembersNull() const;
		virtual void setOptionalCppMySqlTableMembersNull();
		virtual void setOptionalCppMySqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppMySqlTableImplementationValue() const;
		virtual const std::string* getOptionalCppMySqlTableImplementationReference() const;
		virtual const bool isOptionalCppMySqlTableImplementationNull() const;
		virtual void setOptionalCppMySqlTableImplementationNull();
		virtual void setOptionalCppMySqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppOracleTableIncludeValue() const;
		virtual const std::string* getOptionalCppOracleTableIncludeReference() const;
		virtual const bool isOptionalCppOracleTableIncludeNull() const;
		virtual void setOptionalCppOracleTableIncludeNull();
		virtual void setOptionalCppOracleTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppOracleTableMembersValue() const;
		virtual const std::string* getOptionalCppOracleTableMembersReference() const;
		virtual const bool isOptionalCppOracleTableMembersNull() const;
		virtual void setOptionalCppOracleTableMembersNull();
		virtual void setOptionalCppOracleTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppOracleTableImplementationValue() const;
		virtual const std::string* getOptionalCppOracleTableImplementationReference() const;
		virtual const bool isOptionalCppOracleTableImplementationNull() const;
		virtual void setOptionalCppOracleTableImplementationNull();
		virtual void setOptionalCppOracleTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppPgSqlTableIncludeValue() const;
		virtual const std::string* getOptionalCppPgSqlTableIncludeReference() const;
		virtual const bool isOptionalCppPgSqlTableIncludeNull() const;
		virtual void setOptionalCppPgSqlTableIncludeNull();
		virtual void setOptionalCppPgSqlTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppPgSqlTableMembersValue() const;
		virtual const std::string* getOptionalCppPgSqlTableMembersReference() const;
		virtual const bool isOptionalCppPgSqlTableMembersNull() const;
		virtual void setOptionalCppPgSqlTableMembersNull();
		virtual void setOptionalCppPgSqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppPgSqlTableImplementationValue() const;
		virtual const std::string* getOptionalCppPgSqlTableImplementationReference() const;
		virtual const bool isOptionalCppPgSqlTableImplementationNull() const;
		virtual void setOptionalCppPgSqlTableImplementationNull();
		virtual void setOptionalCppPgSqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppRamTableIncludeValue() const;
		virtual const std::string* getOptionalCppRamTableIncludeReference() const;
		virtual const bool isOptionalCppRamTableIncludeNull() const;
		virtual void setOptionalCppRamTableIncludeNull();
		virtual void setOptionalCppRamTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppRamTableMembersValue() const;
		virtual const std::string* getOptionalCppRamTableMembersReference() const;
		virtual const bool isOptionalCppRamTableMembersNull() const;
		virtual void setOptionalCppRamTableMembersNull();
		virtual void setOptionalCppRamTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppRamTableImplementationValue() const;
		virtual const std::string* getOptionalCppRamTableImplementationReference() const;
		virtual const bool isOptionalCppRamTableImplementationNull() const;
		virtual void setOptionalCppRamTableImplementationNull();
		virtual void setOptionalCppRamTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppSaxLoaderIncludeValue() const;
		virtual const std::string* getOptionalCppSaxLoaderIncludeReference() const;
		virtual const bool isOptionalCppSaxLoaderIncludeNull() const;
		virtual void setOptionalCppSaxLoaderIncludeNull();
		virtual void setOptionalCppSaxLoaderIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppSaxLoaderStartElementValue() const;
		virtual const std::string* getOptionalCppSaxLoaderStartElementReference() const;
		virtual const bool isOptionalCppSaxLoaderStartElementNull() const;
		virtual void setOptionalCppSaxLoaderStartElementNull();
		virtual void setOptionalCppSaxLoaderStartElementValue( const std::string& value );

		virtual const std::string& getOptionalCppSaxLoaderEndElementValue() const;
		virtual const std::string* getOptionalCppSaxLoaderEndElementReference() const;
		virtual const bool isOptionalCppSaxLoaderEndElementNull() const;
		virtual void setOptionalCppSaxLoaderEndElementNull();
		virtual void setOptionalCppSaxLoaderEndElementValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgTableIncludeValue() const;
		virtual const std::string* getOptionalCppXMsgTableIncludeReference() const;
		virtual const bool isOptionalCppXMsgTableIncludeNull() const;
		virtual void setOptionalCppXMsgTableIncludeNull();
		virtual void setOptionalCppXMsgTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgTableFormattersValue() const;
		virtual const std::string* getOptionalCppXMsgTableFormattersReference() const;
		virtual const bool isOptionalCppXMsgTableFormattersNull() const;
		virtual void setOptionalCppXMsgTableFormattersNull();
		virtual void setOptionalCppXMsgTableFormattersValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRqstTableIncludeValue() const;
		virtual const std::string* getOptionalCppXMsgRqstTableIncludeReference() const;
		virtual const bool isOptionalCppXMsgRqstTableIncludeNull() const;
		virtual void setOptionalCppXMsgRqstTableIncludeNull();
		virtual void setOptionalCppXMsgRqstTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRspnTableIncludeValue() const;
		virtual const std::string* getOptionalCppXMsgRspnTableIncludeReference() const;
		virtual const bool isOptionalCppXMsgRspnTableIncludeNull() const;
		virtual void setOptionalCppXMsgRspnTableIncludeNull();
		virtual void setOptionalCppXMsgRspnTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgClientTableIncludeValue() const;
		virtual const std::string* getOptionalCppXMsgClientTableIncludeReference() const;
		virtual const bool isOptionalCppXMsgClientTableIncludeNull() const;
		virtual void setOptionalCppXMsgClientTableIncludeNull();
		virtual void setOptionalCppXMsgClientTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRqstTableBodyValue() const;
		virtual const std::string* getOptionalCppXMsgRqstTableBodyReference() const;
		virtual const bool isOptionalCppXMsgRqstTableBodyNull() const;
		virtual void setOptionalCppXMsgRqstTableBodyNull();
		virtual void setOptionalCppXMsgRqstTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRspnTableBodyValue() const;
		virtual const std::string* getOptionalCppXMsgRspnTableBodyReference() const;
		virtual const bool isOptionalCppXMsgRspnTableBodyNull() const;
		virtual void setOptionalCppXMsgRspnTableBodyNull();
		virtual void setOptionalCppXMsgRspnTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgClientTableBodyValue() const;
		virtual const std::string* getOptionalCppXMsgClientTableBodyReference() const;
		virtual const bool isOptionalCppXMsgClientTableBodyNull() const;
		virtual void setOptionalCppXMsgClientTableBodyNull();
		virtual void setOptionalCppXMsgClientTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalHppObjMembersValue() const;
		virtual const std::string* getOptionalHppObjMembersReference() const;
		virtual const bool isOptionalHppObjMembersNull() const;
		virtual void setOptionalHppObjMembersNull();
		virtual void setOptionalHppObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppObjInterfaceValue() const;
		virtual const std::string* getOptionalHppObjInterfaceReference() const;
		virtual const bool isOptionalHppObjInterfaceNull() const;
		virtual void setOptionalHppObjInterfaceNull();
		virtual void setOptionalHppObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalHppObjIncludeValue() const;
		virtual const std::string* getOptionalHppObjIncludeReference() const;
		virtual const bool isOptionalHppObjIncludeNull() const;
		virtual void setOptionalHppObjIncludeNull();
		virtual void setOptionalHppObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppObjImplementationValue() const;
		virtual const std::string* getOptionalHppObjImplementationReference() const;
		virtual const bool isOptionalHppObjImplementationNull() const;
		virtual void setOptionalHppObjImplementationNull();
		virtual void setOptionalHppObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppEditObjMembersValue() const;
		virtual const std::string* getOptionalHppEditObjMembersReference() const;
		virtual const bool isOptionalHppEditObjMembersNull() const;
		virtual void setOptionalHppEditObjMembersNull();
		virtual void setOptionalHppEditObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppEditObjInterfaceValue() const;
		virtual const std::string* getOptionalHppEditObjInterfaceReference() const;
		virtual const bool isOptionalHppEditObjInterfaceNull() const;
		virtual void setOptionalHppEditObjInterfaceNull();
		virtual void setOptionalHppEditObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalHppEditObjIncludeValue() const;
		virtual const std::string* getOptionalHppEditObjIncludeReference() const;
		virtual const bool isOptionalHppEditObjIncludeNull() const;
		virtual void setOptionalHppEditObjIncludeNull();
		virtual void setOptionalHppEditObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppEditObjImplementationValue() const;
		virtual const std::string* getOptionalHppEditObjImplementationReference() const;
		virtual const bool isOptionalHppEditObjImplementationNull() const;
		virtual void setOptionalHppEditObjImplementationNull();
		virtual void setOptionalHppEditObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppTableIncludeValue() const;
		virtual const std::string* getOptionalHppTableIncludeReference() const;
		virtual const bool isOptionalHppTableIncludeNull() const;
		virtual void setOptionalHppTableIncludeNull();
		virtual void setOptionalHppTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppTableMembersValue() const;
		virtual const std::string* getOptionalHppTableMembersReference() const;
		virtual const bool isOptionalHppTableMembersNull() const;
		virtual void setOptionalHppTableMembersNull();
		virtual void setOptionalHppTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppTableInterfaceValue() const;
		virtual const std::string* getOptionalHppTableInterfaceReference() const;
		virtual const bool isOptionalHppTableInterfaceNull() const;
		virtual void setOptionalHppTableInterfaceNull();
		virtual void setOptionalHppTableInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalHppTableImplementationValue() const;
		virtual const std::string* getOptionalHppTableImplementationReference() const;
		virtual const bool isOptionalHppTableImplementationNull() const;
		virtual void setOptionalHppTableImplementationNull();
		virtual void setOptionalHppTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppTableObjIncludeValue() const;
		virtual const std::string* getOptionalHppTableObjIncludeReference() const;
		virtual const bool isOptionalHppTableObjIncludeNull() const;
		virtual void setOptionalHppTableObjIncludeNull();
		virtual void setOptionalHppTableObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppTableObjMembersValue() const;
		virtual const std::string* getOptionalHppTableObjMembersReference() const;
		virtual const bool isOptionalHppTableObjMembersNull() const;
		virtual void setOptionalHppTableObjMembersNull();
		virtual void setOptionalHppTableObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppTableObjInterfaceValue() const;
		virtual const std::string* getOptionalHppTableObjInterfaceReference() const;
		virtual const bool isOptionalHppTableObjInterfaceNull() const;
		virtual void setOptionalHppTableObjInterfaceNull();
		virtual void setOptionalHppTableObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalHppTableObjImplementationValue() const;
		virtual const std::string* getOptionalHppTableObjImplementationReference() const;
		virtual const bool isOptionalHppTableObjImplementationNull() const;
		virtual void setOptionalHppTableObjImplementationNull();
		virtual void setOptionalHppTableObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppDb2LUWTableIncludeValue() const;
		virtual const std::string* getOptionalHppDb2LUWTableIncludeReference() const;
		virtual const bool isOptionalHppDb2LUWTableIncludeNull() const;
		virtual void setOptionalHppDb2LUWTableIncludeNull();
		virtual void setOptionalHppDb2LUWTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppDb2LUWTableMembersValue() const;
		virtual const std::string* getOptionalHppDb2LUWTableMembersReference() const;
		virtual const bool isOptionalHppDb2LUWTableMembersNull() const;
		virtual void setOptionalHppDb2LUWTableMembersNull();
		virtual void setOptionalHppDb2LUWTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppDb2LUWTableImplementationValue() const;
		virtual const std::string* getOptionalHppDb2LUWTableImplementationReference() const;
		virtual const bool isOptionalHppDb2LUWTableImplementationNull() const;
		virtual void setOptionalHppDb2LUWTableImplementationNull();
		virtual void setOptionalHppDb2LUWTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppMSSqlTableIncludeValue() const;
		virtual const std::string* getOptionalHppMSSqlTableIncludeReference() const;
		virtual const bool isOptionalHppMSSqlTableIncludeNull() const;
		virtual void setOptionalHppMSSqlTableIncludeNull();
		virtual void setOptionalHppMSSqlTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppMSSqlTableMembersValue() const;
		virtual const std::string* getOptionalHppMSSqlTableMembersReference() const;
		virtual const bool isOptionalHppMSSqlTableMembersNull() const;
		virtual void setOptionalHppMSSqlTableMembersNull();
		virtual void setOptionalHppMSSqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppMSSqlTableImplementationValue() const;
		virtual const std::string* getOptionalHppMSSqlTableImplementationReference() const;
		virtual const bool isOptionalHppMSSqlTableImplementationNull() const;
		virtual void setOptionalHppMSSqlTableImplementationNull();
		virtual void setOptionalHppMSSqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppMySqlTableIncludeValue() const;
		virtual const std::string* getOptionalHppMySqlTableIncludeReference() const;
		virtual const bool isOptionalHppMySqlTableIncludeNull() const;
		virtual void setOptionalHppMySqlTableIncludeNull();
		virtual void setOptionalHppMySqlTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppMySqlTableMembersValue() const;
		virtual const std::string* getOptionalHppMySqlTableMembersReference() const;
		virtual const bool isOptionalHppMySqlTableMembersNull() const;
		virtual void setOptionalHppMySqlTableMembersNull();
		virtual void setOptionalHppMySqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppMySqlTableImplementationValue() const;
		virtual const std::string* getOptionalHppMySqlTableImplementationReference() const;
		virtual const bool isOptionalHppMySqlTableImplementationNull() const;
		virtual void setOptionalHppMySqlTableImplementationNull();
		virtual void setOptionalHppMySqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppOracleTableIncludeValue() const;
		virtual const std::string* getOptionalHppOracleTableIncludeReference() const;
		virtual const bool isOptionalHppOracleTableIncludeNull() const;
		virtual void setOptionalHppOracleTableIncludeNull();
		virtual void setOptionalHppOracleTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppOracleTableMembersValue() const;
		virtual const std::string* getOptionalHppOracleTableMembersReference() const;
		virtual const bool isOptionalHppOracleTableMembersNull() const;
		virtual void setOptionalHppOracleTableMembersNull();
		virtual void setOptionalHppOracleTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppOracleTableImplementationValue() const;
		virtual const std::string* getOptionalHppOracleTableImplementationReference() const;
		virtual const bool isOptionalHppOracleTableImplementationNull() const;
		virtual void setOptionalHppOracleTableImplementationNull();
		virtual void setOptionalHppOracleTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppPgSqlTableIncludeValue() const;
		virtual const std::string* getOptionalHppPgSqlTableIncludeReference() const;
		virtual const bool isOptionalHppPgSqlTableIncludeNull() const;
		virtual void setOptionalHppPgSqlTableIncludeNull();
		virtual void setOptionalHppPgSqlTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppPgSqlTableMembersValue() const;
		virtual const std::string* getOptionalHppPgSqlTableMembersReference() const;
		virtual const bool isOptionalHppPgSqlTableMembersNull() const;
		virtual void setOptionalHppPgSqlTableMembersNull();
		virtual void setOptionalHppPgSqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppPgSqlTableImplementationValue() const;
		virtual const std::string* getOptionalHppPgSqlTableImplementationReference() const;
		virtual const bool isOptionalHppPgSqlTableImplementationNull() const;
		virtual void setOptionalHppPgSqlTableImplementationNull();
		virtual void setOptionalHppPgSqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppRamTableIncludeValue() const;
		virtual const std::string* getOptionalHppRamTableIncludeReference() const;
		virtual const bool isOptionalHppRamTableIncludeNull() const;
		virtual void setOptionalHppRamTableIncludeNull();
		virtual void setOptionalHppRamTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppRamTableMembersValue() const;
		virtual const std::string* getOptionalHppRamTableMembersReference() const;
		virtual const bool isOptionalHppRamTableMembersNull() const;
		virtual void setOptionalHppRamTableMembersNull();
		virtual void setOptionalHppRamTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppRamTableImplementationValue() const;
		virtual const std::string* getOptionalHppRamTableImplementationReference() const;
		virtual const bool isOptionalHppRamTableImplementationNull() const;
		virtual void setOptionalHppRamTableImplementationNull();
		virtual void setOptionalHppRamTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppSaxLoaderIncludeValue() const;
		virtual const std::string* getOptionalHppSaxLoaderIncludeReference() const;
		virtual const bool isOptionalHppSaxLoaderIncludeNull() const;
		virtual void setOptionalHppSaxLoaderIncludeNull();
		virtual void setOptionalHppSaxLoaderIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppSaxLoaderStartElementValue() const;
		virtual const std::string* getOptionalHppSaxLoaderStartElementReference() const;
		virtual const bool isOptionalHppSaxLoaderStartElementNull() const;
		virtual void setOptionalHppSaxLoaderStartElementNull();
		virtual void setOptionalHppSaxLoaderStartElementValue( const std::string& value );

		virtual const std::string& getOptionalHppSaxLoaderEndElementValue() const;
		virtual const std::string* getOptionalHppSaxLoaderEndElementReference() const;
		virtual const bool isOptionalHppSaxLoaderEndElementNull() const;
		virtual void setOptionalHppSaxLoaderEndElementNull();
		virtual void setOptionalHppSaxLoaderEndElementValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgTableIncludeValue() const;
		virtual const std::string* getOptionalHppXMsgTableIncludeReference() const;
		virtual const bool isOptionalHppXMsgTableIncludeNull() const;
		virtual void setOptionalHppXMsgTableIncludeNull();
		virtual void setOptionalHppXMsgTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgTableFormattersValue() const;
		virtual const std::string* getOptionalHppXMsgTableFormattersReference() const;
		virtual const bool isOptionalHppXMsgTableFormattersNull() const;
		virtual void setOptionalHppXMsgTableFormattersNull();
		virtual void setOptionalHppXMsgTableFormattersValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRqstTableIncludeValue() const;
		virtual const std::string* getOptionalHppXMsgRqstTableIncludeReference() const;
		virtual const bool isOptionalHppXMsgRqstTableIncludeNull() const;
		virtual void setOptionalHppXMsgRqstTableIncludeNull();
		virtual void setOptionalHppXMsgRqstTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRspnTableIncludeValue() const;
		virtual const std::string* getOptionalHppXMsgRspnTableIncludeReference() const;
		virtual const bool isOptionalHppXMsgRspnTableIncludeNull() const;
		virtual void setOptionalHppXMsgRspnTableIncludeNull();
		virtual void setOptionalHppXMsgRspnTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgClientTableIncludeValue() const;
		virtual const std::string* getOptionalHppXMsgClientTableIncludeReference() const;
		virtual const bool isOptionalHppXMsgClientTableIncludeNull() const;
		virtual void setOptionalHppXMsgClientTableIncludeNull();
		virtual void setOptionalHppXMsgClientTableIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRqstTableBodyValue() const;
		virtual const std::string* getOptionalHppXMsgRqstTableBodyReference() const;
		virtual const bool isOptionalHppXMsgRqstTableBodyNull() const;
		virtual void setOptionalHppXMsgRqstTableBodyNull();
		virtual void setOptionalHppXMsgRqstTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRspnTableBodyValue() const;
		virtual const std::string* getOptionalHppXMsgRspnTableBodyReference() const;
		virtual const bool isOptionalHppXMsgRspnTableBodyNull() const;
		virtual void setOptionalHppXMsgRspnTableBodyNull();
		virtual void setOptionalHppXMsgRspnTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgClientTableBodyValue() const;
		virtual const std::string* getOptionalHppXMsgClientTableBodyReference() const;
		virtual const bool isOptionalHppXMsgClientTableBodyNull() const;
		virtual void setOptionalHppXMsgClientTableBodyNull();
		virtual void setOptionalHppXMsgClientTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalCsObjMembersValue() const;
		virtual const std::string* getOptionalCsObjMembersReference() const;
		virtual const bool isOptionalCsObjMembersNull() const;
		virtual void setOptionalCsObjMembersNull();
		virtual void setOptionalCsObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsObjInterfaceValue() const;
		virtual const std::string* getOptionalCsObjInterfaceReference() const;
		virtual const bool isOptionalCsObjInterfaceNull() const;
		virtual void setOptionalCsObjInterfaceNull();
		virtual void setOptionalCsObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCsObjUsingValue() const;
		virtual const std::string* getOptionalCsObjUsingReference() const;
		virtual const bool isOptionalCsObjUsingNull() const;
		virtual void setOptionalCsObjUsingNull();
		virtual void setOptionalCsObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsObjImplementationValue() const;
		virtual const std::string* getOptionalCsObjImplementationReference() const;
		virtual const bool isOptionalCsObjImplementationNull() const;
		virtual void setOptionalCsObjImplementationNull();
		virtual void setOptionalCsObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsEditObjMembersValue() const;
		virtual const std::string* getOptionalCsEditObjMembersReference() const;
		virtual const bool isOptionalCsEditObjMembersNull() const;
		virtual void setOptionalCsEditObjMembersNull();
		virtual void setOptionalCsEditObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsEditObjInterfaceValue() const;
		virtual const std::string* getOptionalCsEditObjInterfaceReference() const;
		virtual const bool isOptionalCsEditObjInterfaceNull() const;
		virtual void setOptionalCsEditObjInterfaceNull();
		virtual void setOptionalCsEditObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCsEditObjUsingValue() const;
		virtual const std::string* getOptionalCsEditObjUsingReference() const;
		virtual const bool isOptionalCsEditObjUsingNull() const;
		virtual void setOptionalCsEditObjUsingNull();
		virtual void setOptionalCsEditObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsEditObjImplementationValue() const;
		virtual const std::string* getOptionalCsEditObjImplementationReference() const;
		virtual const bool isOptionalCsEditObjImplementationNull() const;
		virtual void setOptionalCsEditObjImplementationNull();
		virtual void setOptionalCsEditObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsTableUsingValue() const;
		virtual const std::string* getOptionalCsTableUsingReference() const;
		virtual const bool isOptionalCsTableUsingNull() const;
		virtual void setOptionalCsTableUsingNull();
		virtual void setOptionalCsTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsTableMembersValue() const;
		virtual const std::string* getOptionalCsTableMembersReference() const;
		virtual const bool isOptionalCsTableMembersNull() const;
		virtual void setOptionalCsTableMembersNull();
		virtual void setOptionalCsTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsTableInterfaceValue() const;
		virtual const std::string* getOptionalCsTableInterfaceReference() const;
		virtual const bool isOptionalCsTableInterfaceNull() const;
		virtual void setOptionalCsTableInterfaceNull();
		virtual void setOptionalCsTableInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCsTableImplementationValue() const;
		virtual const std::string* getOptionalCsTableImplementationReference() const;
		virtual const bool isOptionalCsTableImplementationNull() const;
		virtual void setOptionalCsTableImplementationNull();
		virtual void setOptionalCsTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsTableObjUsingValue() const;
		virtual const std::string* getOptionalCsTableObjUsingReference() const;
		virtual const bool isOptionalCsTableObjUsingNull() const;
		virtual void setOptionalCsTableObjUsingNull();
		virtual void setOptionalCsTableObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsTableObjMembersValue() const;
		virtual const std::string* getOptionalCsTableObjMembersReference() const;
		virtual const bool isOptionalCsTableObjMembersNull() const;
		virtual void setOptionalCsTableObjMembersNull();
		virtual void setOptionalCsTableObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsTableObjInterfaceValue() const;
		virtual const std::string* getOptionalCsTableObjInterfaceReference() const;
		virtual const bool isOptionalCsTableObjInterfaceNull() const;
		virtual void setOptionalCsTableObjInterfaceNull();
		virtual void setOptionalCsTableObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCsTableObjImplementationValue() const;
		virtual const std::string* getOptionalCsTableObjImplementationReference() const;
		virtual const bool isOptionalCsTableObjImplementationNull() const;
		virtual void setOptionalCsTableObjImplementationNull();
		virtual void setOptionalCsTableObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsDb2LUWTableUsingValue() const;
		virtual const std::string* getOptionalCsDb2LUWTableUsingReference() const;
		virtual const bool isOptionalCsDb2LUWTableUsingNull() const;
		virtual void setOptionalCsDb2LUWTableUsingNull();
		virtual void setOptionalCsDb2LUWTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsDb2LUWTableMembersValue() const;
		virtual const std::string* getOptionalCsDb2LUWTableMembersReference() const;
		virtual const bool isOptionalCsDb2LUWTableMembersNull() const;
		virtual void setOptionalCsDb2LUWTableMembersNull();
		virtual void setOptionalCsDb2LUWTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsDb2LUWTableImplementationValue() const;
		virtual const std::string* getOptionalCsDb2LUWTableImplementationReference() const;
		virtual const bool isOptionalCsDb2LUWTableImplementationNull() const;
		virtual void setOptionalCsDb2LUWTableImplementationNull();
		virtual void setOptionalCsDb2LUWTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsMSSqlTableUsingValue() const;
		virtual const std::string* getOptionalCsMSSqlTableUsingReference() const;
		virtual const bool isOptionalCsMSSqlTableUsingNull() const;
		virtual void setOptionalCsMSSqlTableUsingNull();
		virtual void setOptionalCsMSSqlTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsMSSqlTableMembersValue() const;
		virtual const std::string* getOptionalCsMSSqlTableMembersReference() const;
		virtual const bool isOptionalCsMSSqlTableMembersNull() const;
		virtual void setOptionalCsMSSqlTableMembersNull();
		virtual void setOptionalCsMSSqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsMSSqlTableImplementationValue() const;
		virtual const std::string* getOptionalCsMSSqlTableImplementationReference() const;
		virtual const bool isOptionalCsMSSqlTableImplementationNull() const;
		virtual void setOptionalCsMSSqlTableImplementationNull();
		virtual void setOptionalCsMSSqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsMySqlTableUsingValue() const;
		virtual const std::string* getOptionalCsMySqlTableUsingReference() const;
		virtual const bool isOptionalCsMySqlTableUsingNull() const;
		virtual void setOptionalCsMySqlTableUsingNull();
		virtual void setOptionalCsMySqlTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsMySqlTableMembersValue() const;
		virtual const std::string* getOptionalCsMySqlTableMembersReference() const;
		virtual const bool isOptionalCsMySqlTableMembersNull() const;
		virtual void setOptionalCsMySqlTableMembersNull();
		virtual void setOptionalCsMySqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsMySqlTableImplementationValue() const;
		virtual const std::string* getOptionalCsMySqlTableImplementationReference() const;
		virtual const bool isOptionalCsMySqlTableImplementationNull() const;
		virtual void setOptionalCsMySqlTableImplementationNull();
		virtual void setOptionalCsMySqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsOracleTableUsingValue() const;
		virtual const std::string* getOptionalCsOracleTableUsingReference() const;
		virtual const bool isOptionalCsOracleTableUsingNull() const;
		virtual void setOptionalCsOracleTableUsingNull();
		virtual void setOptionalCsOracleTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsOracleTableMembersValue() const;
		virtual const std::string* getOptionalCsOracleTableMembersReference() const;
		virtual const bool isOptionalCsOracleTableMembersNull() const;
		virtual void setOptionalCsOracleTableMembersNull();
		virtual void setOptionalCsOracleTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsOracleTableImplementationValue() const;
		virtual const std::string* getOptionalCsOracleTableImplementationReference() const;
		virtual const bool isOptionalCsOracleTableImplementationNull() const;
		virtual void setOptionalCsOracleTableImplementationNull();
		virtual void setOptionalCsOracleTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsPgSqlTableUsingValue() const;
		virtual const std::string* getOptionalCsPgSqlTableUsingReference() const;
		virtual const bool isOptionalCsPgSqlTableUsingNull() const;
		virtual void setOptionalCsPgSqlTableUsingNull();
		virtual void setOptionalCsPgSqlTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsPgSqlTableMembersValue() const;
		virtual const std::string* getOptionalCsPgSqlTableMembersReference() const;
		virtual const bool isOptionalCsPgSqlTableMembersNull() const;
		virtual void setOptionalCsPgSqlTableMembersNull();
		virtual void setOptionalCsPgSqlTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsPgSqlTableImplementationValue() const;
		virtual const std::string* getOptionalCsPgSqlTableImplementationReference() const;
		virtual const bool isOptionalCsPgSqlTableImplementationNull() const;
		virtual void setOptionalCsPgSqlTableImplementationNull();
		virtual void setOptionalCsPgSqlTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsRamTableUsingValue() const;
		virtual const std::string* getOptionalCsRamTableUsingReference() const;
		virtual const bool isOptionalCsRamTableUsingNull() const;
		virtual void setOptionalCsRamTableUsingNull();
		virtual void setOptionalCsRamTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsRamTableMembersValue() const;
		virtual const std::string* getOptionalCsRamTableMembersReference() const;
		virtual const bool isOptionalCsRamTableMembersNull() const;
		virtual void setOptionalCsRamTableMembersNull();
		virtual void setOptionalCsRamTableMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsRamTableImplementationValue() const;
		virtual const std::string* getOptionalCsRamTableImplementationReference() const;
		virtual const bool isOptionalCsRamTableImplementationNull() const;
		virtual void setOptionalCsRamTableImplementationNull();
		virtual void setOptionalCsRamTableImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsSaxLoaderUsingValue() const;
		virtual const std::string* getOptionalCsSaxLoaderUsingReference() const;
		virtual const bool isOptionalCsSaxLoaderUsingNull() const;
		virtual void setOptionalCsSaxLoaderUsingNull();
		virtual void setOptionalCsSaxLoaderUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsSaxLoaderStartElementValue() const;
		virtual const std::string* getOptionalCsSaxLoaderStartElementReference() const;
		virtual const bool isOptionalCsSaxLoaderStartElementNull() const;
		virtual void setOptionalCsSaxLoaderStartElementNull();
		virtual void setOptionalCsSaxLoaderStartElementValue( const std::string& value );

		virtual const std::string& getOptionalCsSaxLoaderEndElementValue() const;
		virtual const std::string* getOptionalCsSaxLoaderEndElementReference() const;
		virtual const bool isOptionalCsSaxLoaderEndElementNull() const;
		virtual void setOptionalCsSaxLoaderEndElementNull();
		virtual void setOptionalCsSaxLoaderEndElementValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgTableUsingValue() const;
		virtual const std::string* getOptionalCsXMsgTableUsingReference() const;
		virtual const bool isOptionalCsXMsgTableUsingNull() const;
		virtual void setOptionalCsXMsgTableUsingNull();
		virtual void setOptionalCsXMsgTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgTableFormattersValue() const;
		virtual const std::string* getOptionalCsXMsgTableFormattersReference() const;
		virtual const bool isOptionalCsXMsgTableFormattersNull() const;
		virtual void setOptionalCsXMsgTableFormattersNull();
		virtual void setOptionalCsXMsgTableFormattersValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRqstTableUsingValue() const;
		virtual const std::string* getOptionalCsXMsgRqstTableUsingReference() const;
		virtual const bool isOptionalCsXMsgRqstTableUsingNull() const;
		virtual void setOptionalCsXMsgRqstTableUsingNull();
		virtual void setOptionalCsXMsgRqstTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRspnTableUsingValue() const;
		virtual const std::string* getOptionalCsXMsgRspnTableUsingReference() const;
		virtual const bool isOptionalCsXMsgRspnTableUsingNull() const;
		virtual void setOptionalCsXMsgRspnTableUsingNull();
		virtual void setOptionalCsXMsgRspnTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgClientTableUsingValue() const;
		virtual const std::string* getOptionalCsXMsgClientTableUsingReference() const;
		virtual const bool isOptionalCsXMsgClientTableUsingNull() const;
		virtual void setOptionalCsXMsgClientTableUsingNull();
		virtual void setOptionalCsXMsgClientTableUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRqstTableBodyValue() const;
		virtual const std::string* getOptionalCsXMsgRqstTableBodyReference() const;
		virtual const bool isOptionalCsXMsgRqstTableBodyNull() const;
		virtual void setOptionalCsXMsgRqstTableBodyNull();
		virtual void setOptionalCsXMsgRqstTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRspnTableBodyValue() const;
		virtual const std::string* getOptionalCsXMsgRspnTableBodyReference() const;
		virtual const bool isOptionalCsXMsgRspnTableBodyNull() const;
		virtual void setOptionalCsXMsgRspnTableBodyNull();
		virtual void setOptionalCsXMsgRspnTableBodyValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgClientTableBodyValue() const;
		virtual const std::string* getOptionalCsXMsgClientTableBodyReference() const;
		virtual const bool isOptionalCsXMsgClientTableBodyNull() const;
		virtual void setOptionalCsXMsgClientTableBodyNull();
		virtual void setOptionalCsXMsgClientTableBodyValue( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamTableBySchemaDefIdxKey& rhs );
		bool operator <( const CFBamTableByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamTableByUNameIdxKey& rhs );
		bool operator <( const CFBamTableBySchemaCdIdxKey& rhs );
		bool operator <( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator <( const CFBamTableByLookupIndexIdxKey& rhs );
		bool operator <( const CFBamTableByAltIndexIdxKey& rhs );
		bool operator <( const CFBamTableByQualTableIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamTableHBuff& rhs );
		bool operator <( const CFBamTableBuff& rhs );

		bool operator <=( const CFBamTableBySchemaDefIdxKey& rhs );
		bool operator <=( const CFBamTableByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamTableByUNameIdxKey& rhs );
		bool operator <=( const CFBamTableBySchemaCdIdxKey& rhs );
		bool operator <=( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator <=( const CFBamTableByLookupIndexIdxKey& rhs );
		bool operator <=( const CFBamTableByAltIndexIdxKey& rhs );
		bool operator <=( const CFBamTableByQualTableIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamTableHBuff& rhs );
		bool operator <=( const CFBamTableBuff& rhs );

		bool operator ==( const CFBamTableBySchemaDefIdxKey& rhs );
		bool operator ==( const CFBamTableByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamTableByUNameIdxKey& rhs );
		bool operator ==( const CFBamTableBySchemaCdIdxKey& rhs );
		bool operator ==( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator ==( const CFBamTableByLookupIndexIdxKey& rhs );
		bool operator ==( const CFBamTableByAltIndexIdxKey& rhs );
		bool operator ==( const CFBamTableByQualTableIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamTableHBuff& rhs );
		bool operator ==( const CFBamTableBuff& rhs );

		bool operator !=( const CFBamTableBySchemaDefIdxKey& rhs );
		bool operator !=( const CFBamTableByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamTableByUNameIdxKey& rhs );
		bool operator !=( const CFBamTableBySchemaCdIdxKey& rhs );
		bool operator !=( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator !=( const CFBamTableByLookupIndexIdxKey& rhs );
		bool operator !=( const CFBamTableByAltIndexIdxKey& rhs );
		bool operator !=( const CFBamTableByQualTableIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamTableHBuff& rhs );
		bool operator !=( const CFBamTableBuff& rhs );

		bool operator >=( const CFBamTableBySchemaDefIdxKey& rhs );
		bool operator >=( const CFBamTableByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamTableByUNameIdxKey& rhs );
		bool operator >=( const CFBamTableBySchemaCdIdxKey& rhs );
		bool operator >=( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator >=( const CFBamTableByLookupIndexIdxKey& rhs );
		bool operator >=( const CFBamTableByAltIndexIdxKey& rhs );
		bool operator >=( const CFBamTableByQualTableIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamTableHBuff& rhs );
		bool operator >=( const CFBamTableBuff& rhs );

		bool operator >( const CFBamTableBySchemaDefIdxKey& rhs );
		bool operator >( const CFBamTableByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamTableByUNameIdxKey& rhs );
		bool operator >( const CFBamTableBySchemaCdIdxKey& rhs );
		bool operator >( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator >( const CFBamTableByLookupIndexIdxKey& rhs );
		bool operator >( const CFBamTableByAltIndexIdxKey& rhs );
		bool operator >( const CFBamTableByQualTableIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamTableHBuff& rhs );
		bool operator >( const CFBamTableBuff& rhs );
		cfbam::CFBamTableBuff operator =( cfbam::CFBamTableBuff& src );
		cfbam::CFBamTableBuff operator =( cfbam::CFBamTableHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator <(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator <=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator ==(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator !=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator >=(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByDefSchemaIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator >(const  cfbam::CFBamTableBuff& lhs, const cfbam::CFBamTableBuff& rhs );

	template<> struct hash<cfbam::CFBamTableBuff> {
		typedef cfbam::CFBamTableBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

