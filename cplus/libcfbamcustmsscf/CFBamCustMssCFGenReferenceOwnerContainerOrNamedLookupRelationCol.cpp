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
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::CLASS_NAME( "CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol" );
	const std::string CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::S_GenContextGenDefFromCol( "genContext.GenDef.FromCol" );
	const std::string CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::S_GenContextGenDefLookupColumn( "genContext.GenDef.LookupColumn" );
	const std::string CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::S_DerefRelationCol( "derefContainerOrNamedLookupRelationCol( genContext.genDef )" );
	const std::string CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::S_ClassAtomOrTableCol( "ICFBamAtomObj, ICFBamTableColObj" );
	const std::string CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::S_ClassList( "ICFBamAtomObj, ICFBamTableColObj, ICFBamIndexColObj, ICFBamRelationColObj" );

	CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol()
	: cfcore::MssCFGenReferenceObj()
	{
	}

	CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenReferenceObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Id16Gen" )
	{
	}

	CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::~CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol() {
	}

	cfbam::ICFBamRelationColObj* CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::derefContainerOrNamedLookupRelationCol( cflib::ICFLibAnyObj* genDef ) {
		static const std::string S_ProcName( "derefColumnOrNamedLookupRelationCol" );

		cflib::ICFLibAnyObj* focusDef;
		cfbam::ICFBamTableObj* tableDef;

		if( genDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			cfbam::ICFBamAtomObj* atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( genDef );
			cflib::ICFLibAnyObj* atomScopeDef = atomDef->getObjScope();
			tableDef = dynamic_cast<ICFBamTableObj*>( atomScopeDef );
			focusDef = genDef;
		}
		else if( genDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamTableColObj* tableColDef = dynamic_cast<cfbam::ICFBamTableColObj*>( genDef );
			cflib::ICFLibAnyObj* tableColScopeDef = tableColDef->getObjScope();
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( tableColScopeDef );
			focusDef = genDef;
		}
		else if( genDef->implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamIndexColObj* indexColDef = dynamic_cast<cfbam::ICFBamIndexColObj*>( genDef );
			focusDef = indexColDef->getRequiredLookupColumn();
			if( focusDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamAtomObj*>( focusDef )->getObjScope() );
			}
			else if( focusDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamTableColObj*>( focusDef )->getObjScope() );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_GenContextGenDefLookupColumn,
					genDef,
					S_ClassAtomOrTableCol );
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamRelationColObj* relColDef = dynamic_cast<ICFBamRelationColObj*>( genDef );
			cfbam::ICFBamIndexColObj* indexCol = relColDef->getRequiredLookupFromCol();
			cflib::ICFLibAnyObj* columnDef = indexCol->getRequiredLookupColumn();
			if( columnDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( columnDef->getObjScope() );
			}
			else if( columnDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( columnDef->getObjScope() );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_GenContextGenDefFromCol,
					genDef,
					S_ClassAtomOrTableCol );
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ClassList );
		}

		std::vector<cfbam::ICFBamRelationObj*> containerNamedLookupRelations = cfbam::CFBamCustMssCFTableObj::getOwnerContainerNamedLookupChainRelations( tableDef );
		if( containerNamedLookupRelations.empty() ) {
			return( NULL );
		}

		cfbam::ICFBamRelationObj* ownerRelation;
		cfbam::ICFBamRelationColObj* ownerRelationCol;
		cfbam::ICFBamIndexColObj* indexCol;
		std::vector<cfbam::ICFBamRelationColObj*> ownerRelationCols;

		for( auto iterOwner = containerNamedLookupRelations.begin(); iterOwner != containerNamedLookupRelations.end(); iterOwner ++ ) {
			ownerRelation = *iterOwner;
			ownerRelationCols = ownerRelation->getOptionalComponentsColumns();
			for( auto iterCols = ownerRelationCols.begin(); iterCols != ownerRelationCols.end(); iterCols ++ ) {
				ownerRelationCol = *iterCols;
				indexCol = ownerRelationCol->getRequiredLookupFromCol();
				if( indexCol->getRequiredLookupColumn() == focusDef ) {
					return( ownerRelationCol );
				}
			}
		}

		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol::dereference( cfcore::MssCFGenContext* genContext ) {
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

		cfbam::ICFBamRelationColObj* deref = derefContainerOrNamedLookupRelationCol( genDef );
		if( deref != NULL ) {
			return( deref );
		}
		else {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_DerefRelationCol );
		}
	}
}
