/*
 *	CFBamCustMssCF
 *
 *	MSS Code Factory CFBam 2.13 CustMssCF
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	This file is part of MSS Code Factory.
 *	
 *	MSS Code Factory is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *	
 *	MSS Code Factory is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *	
 *	You should have received a copy of the GNU General Public License
 *	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceClusterIdColumn.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenReferenceClusterIdColumn::CLASS_NAME( "CFBamCustMssCFGenReferenceClusterIdColumn" );
	const std::string CFBamCustMssCFGenReferenceClusterIdColumn::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenReferenceClusterIdColumn::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenReferenceClusterIdColumn::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenReferenceClusterIdColumn::S_Cluster( "Cluster" );
	const std::string CFBamCustMssCFGenReferenceClusterIdColumn::S_CannotDereferenceClusterOfCluster( "Cannot dereference a Cluster from a Cluster" );
	const std::string CFBamCustMssCFGenReferenceClusterIdColumn::S_ResolveClusterId( "resolveClusterId( genContext.genDef )" );

	CFBamCustMssCFGenReferenceClusterIdColumn::CFBamCustMssCFGenReferenceClusterIdColumn()
	: cfcore::MssCFGenReferenceObj()
	{
	}

	CFBamCustMssCFGenReferenceClusterIdColumn::CFBamCustMssCFGenReferenceClusterIdColumn(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenReferenceObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Id16Gen" )
	{
	}

	CFBamCustMssCFGenReferenceClusterIdColumn::~CFBamCustMssCFGenReferenceClusterIdColumn() {
	}

	cfbam::ICFBamValueObj* CFBamCustMssCFGenReferenceClusterIdColumn::resolveClusterId( cflib::ICFLibAnyObj* genDef ) {
		static const std::string S_ProcName( "resolveClusterId" );

		cfbam::ICFBamValueObj* retValue = NULL;

		if( ! genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamTableObj );
		}

		cfbam::ICFBamTableObj* tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );

		cfbam::ICFBamRelationObj* rel;
		cfbam::ICFBamSchema::RelationTypeEnum reltype;
		cfbam::ICFBamRelationObj* candidateRelation;
		std::vector<cfbam::ICFBamRelationObj*> relations;

		while( ( retValue == NULL ) && ( tableDef != NULL ) ) {

			if( tableDef->getRequiredName() == S_Cluster ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_CannotDereferenceClusterOfCluster );
			}

			relations = tableDef->getOptionalComponentsRelation();
			for( auto iterRelations = relations.begin(); iterRelations != relations.end(); iterRelations ++ ) {

				rel = *iterRelations;
				reltype = rel->getRequiredRelationType();

				if( reltype == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) {
					candidateRelation = rel;
				}
				else if( reltype == cfbam::ICFBamSchema::RelationTypeEnum::Container ) {
					candidateRelation = rel;
				}
				else {
					candidateRelation = NULL;
				}

				if( candidateRelation != NULL ) {
					cfbam::ICFBamTableObj* targetTable = candidateRelation->getRequiredLookupToTable();
					if( targetTable->getRequiredName() != S_Cluster ) {
						candidateRelation = NULL;
					}
				}

				if( candidateRelation != NULL ) {
					cfbam::ICFBamRelationColObj* relcol = *(candidateRelation->getOptionalComponentsColumns().begin());
					cfbam::ICFBamIndexColObj* indexcol = relcol->getRequiredLookupFromCol();
					retValue = indexcol->getRequiredLookupColumn();
				}
			}

			rel = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( tableDef );
			if( rel != NULL ) {
				tableDef = rel->getRequiredLookupToTable();
			}
			else {
				tableDef = NULL;
			}
		}

		return( retValue );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFGenReferenceClusterIdColumn::dereference( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "dereference" );

		cflib::ICFLibAnyObj* genDef;

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}

		genDef = genContext->getGenDef();
		if( genDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GenContextGenDef );
		}

		cfbam::ICFBamValueObj* deref = resolveClusterId( genDef );
		if( deref != NULL ) {
			return( deref );
		}
		else {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_ResolveClusterId );
		}
	}
}
