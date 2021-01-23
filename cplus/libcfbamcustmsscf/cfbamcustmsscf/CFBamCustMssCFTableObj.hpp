#pragma once

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
 *	Contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <msscf/MssCFPublic.hpp>

namespace cfbam {

	class CFBamCustMssCFTableObj {

		public:
			static const std::string CLASS_NAME;

		public:
			CFBamCustMssCFTableObj();
			virtual ~CFBamCustMssCFTableObj();

			static std::vector<cfbam::ICFBamId16GenObj*> getId16Generators( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamId32GenObj*> getId32Generators( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamId64GenObj*> getId64Generators( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamId16GenObj*> getDispensedId16Generators( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamId32GenObj*> getDispensedId32Generators( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamId64GenObj*> getDispensedId64Generators( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamRelationObj*> getOnlyOwnerRelations( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamRelationObj*> getContainerOwnerRelations( cfbam::ICFBamTableObj* tableDef );
			static cfbam::ICFBamRelationObj* getContainerRelation( cfbam::ICFBamTableObj* tableDef );
			static cfbam::ICFBamRelationObj* getInheritedContainerRelation( cfbam::ICFBamTableObj* tableDef );
			static cfbam::ICFBamRelationObj* getOwnerRelation( cfbam::ICFBamTableObj* tableDef );
			static cfbam::ICFBamRelationObj* getInheritedOwnerRelation( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamRelationObj*> getOwnerLookupRelations( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamRelationObj*> getOwnerContainerNamedLookupChainRelations( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamAtomObj*> getChildrenAtoms( cfbam::ICFBamTableObj* tableDef );
			static cfbam::ICFBamRelationObj* getSuperClassRelation( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamRelationObj*> getSubClassRelations( cfbam::ICFBamTableObj* tableDef );
			static cfbam::ICFBamIndexObj* getPrimaryKeyIndex( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamRelationObj*> getFactoryOwnerRelations( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamIndexObj*> getInheritedIndexes( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamIndexObj*> getChildrenIndexes( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamRelationObj*> getInheritedRelations( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamRelationObj*> getChildrenRelations( cfbam::ICFBamTableObj* tableDef );
			static std::vector<cfbam::ICFBamValueObj*> getTableIdGenerators( cfbam::ICFBamTableObj* tableDef );
	};
}
