// Description: C++18 MSS Code Factory library implementation for CFBam Custom MssCF.

/*
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
 */

#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFTableColObj.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFTableColObj::CLASS_NAME( "CFBamCustMssCFTableColObj" );

	CFBamCustMssCFTableColObj::CFBamCustMssCFTableColObj() {
	}

	CFBamCustMssCFTableColObj::~CFBamCustMssCFTableColObj() {
	}

	cfbam::ICFBamRelationObj* CFBamCustMssCFTableColObj::getIdGenResolverRelation( cfbam::ICFBamTableColObj* tableColDef ) {
		static const std::string S_ProcName( "getIdGenResolverRelation" );
		static const std::string S_TableColDef( "tableColDef" );

		if( tableColDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_TableColDef );
		}

		// Determine the target dispenser table

		cfbam::ICFBamTableObj* dispenserDef = NULL;
		cfbam::ICFBamValueObj* valueDef = tableColDef->getRequiredParentDataType();
		if( valueDef->implementsClassCode( cfbam::CFBamId16GenBuff::CLASS_CODE ) ) {
			dispenserDef = dynamic_cast<cfbam::ICFBamId16GenObj*>( valueDef )->getOptionalLookupDispenser();
		}
		else if( valueDef->implementsClassCode( cfbam::CFBamId32GenBuff::CLASS_CODE ) ) {
			dispenserDef = dynamic_cast<cfbam::ICFBamId32GenObj*>( valueDef )->getOptionalLookupDispenser();
		}
		else if( valueDef->implementsClassCode( cfbam::CFBamId64GenBuff::CLASS_CODE ) ) {
			dispenserDef = dynamic_cast<cfbam::ICFBamId64GenObj*>( valueDef )->getOptionalLookupDispenser();
		}

		// If there is no dispenser table, we have nothing to resolve
		if( dispenserDef == NULL ) {
			static const std::string S_MsgNoDispenserSpecified( "No dispenser specified for tableColDef \"" );
			static const std::string S_EndMsg( "\"!" );
			std::string S_Msg( S_MsgNoDispenserSpecified + tableColDef->getRequiredName() + S_EndMsg );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		cfbam::ICFBamTableObj* tableDef = tableColDef->getRequiredContainerTable();
		cfbam::ICFBamRelationObj* superClassRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( tableDef );

		cfbam::ICFBamRelationObj* ownerRelation;
		cfbam::ICFBamTableObj* ownedByTable;
		std::vector<ICFBamRelationObj*> ownerRelations;
		bool ownerDerivesFromDispenser;

		/*
		 *	Build a list of candidate relations which reference a ToTableDef that
		 *	derives from the dispenser table definition.
		 */
		std::vector<cfbam::ICFBamRelationObj*> candidates;
		while( tableDef != NULL ) {
			ownerRelations = CFBamCustMssCFTableObj::getContainerOwnerRelations( tableDef );
			for( auto iterRelations = ownerRelations.begin(); iterRelations != ownerRelations.end(); iterRelations++ ) {
				ownerRelation = *iterRelations;
				ownedByTable = ownerRelation->getRequiredLookupToIndex()->getRequiredContainerTable();
				ownerDerivesFromDispenser = false;
				while( ( ! ownerDerivesFromDispenser ) && ( ownedByTable != NULL ) ) {
					if( ownedByTable == dispenserDef ) {
						ownerDerivesFromDispenser = true;
					}
					else {
						superClassRelation = CFBamCustMssCFTableObj::getSuperClassRelation( ownedByTable );
						if( superClassRelation != NULL ) {
							ownedByTable = superClassRelation->getRequiredLookupToIndex()->getRequiredContainerTable();
						}
						else {
							ownedByTable = NULL;
						}
					}
				}
				if( ownerDerivesFromDispenser ) {
					candidates.push_back( ownerRelation );
				}
			}

			superClassRelation = CFBamCustMssCFTableObj::getSuperClassRelation( tableDef );
			if( superClassRelation != NULL ) {
				tableDef = superClassRelation->getRequiredLookupToIndex()->getRequiredContainerTable();
			}
			else {
				tableDef = NULL;
			}
		}

		if( candidates.empty() ) {
			static const std::string S_Msg( "Could not find any candidate owner relations" );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		auto last = candidates.end();
		last --;
		cfbam::ICFBamRelationObj* idGenResolverRelation = *last;

		return( idGenResolverRelation );
	}
}
