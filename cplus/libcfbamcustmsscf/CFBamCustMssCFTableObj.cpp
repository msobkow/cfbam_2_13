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

namespace cfbam {

	const std::string CFBamCustMssCFTableObj::CLASS_NAME( "CFBamCustMssCFTableObj" );

	CFBamCustMssCFTableObj::CFBamCustMssCFTableObj() {
	}

	CFBamCustMssCFTableObj::~CFBamCustMssCFTableObj() {
	}

	std::vector<cfbam::ICFBamId16GenObj*> CFBamCustMssCFTableObj::getId16Generators( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamId16GenObj*> list;
		std::vector<cfbam::ICFBamValueObj*> childrenColumns = tableDef->getOptionalComponentsColumns();
		cfbam::ICFBamAtomObj* atomDef = NULL;
		for( auto iterChildrenColumns = childrenColumns.begin(); iterChildrenColumns != childrenColumns.end(); iterChildrenColumns++ ) {
			cflib::ICFLibAnyObj* colDef = *iterChildrenColumns;
			if( colDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( dynamic_cast<cfbam::ICFBamTableColObj*>( colDef )->getRequiredParentDataType() );
			}
			else if( colDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( colDef );
			}
			if( atomDef != NULL ) {
				if( atomDef->implementsClassCode( cfbam::CFBamId16GenBuff::CLASS_CODE ) ) {
					list.push_back( dynamic_cast<cfbam::ICFBamId16GenObj*>( atomDef ) );
				}
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamId32GenObj*> CFBamCustMssCFTableObj::getId32Generators( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamId32GenObj*> list;
		std::vector<cfbam::ICFBamValueObj*> childrenColumns = tableDef->getOptionalComponentsColumns();
		for( auto iterChildrenColumns = childrenColumns.begin(); iterChildrenColumns != childrenColumns.end(); iterChildrenColumns++ ) {
			cfbam::ICFBamAtomObj* atomDef = NULL;
			cflib::ICFLibAnyObj* colDef = *iterChildrenColumns;
			if( colDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( dynamic_cast<cfbam::ICFBamTableColObj*>( colDef )->getRequiredParentDataType() );
			}
			else if( colDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( colDef );
			}
			if( atomDef != NULL ) {
				if( atomDef->implementsClassCode( cfbam::CFBamId32GenBuff::CLASS_CODE ) ) {
					list.push_back( dynamic_cast<cfbam::ICFBamId32GenObj*>( atomDef ) );
				}
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamId64GenObj*> CFBamCustMssCFTableObj::getId64Generators( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamId64GenObj*> list;
		std::vector<cfbam::ICFBamValueObj*> childrenColumns = tableDef->getOptionalComponentsColumns();
		for( auto iterChildrenColumns = childrenColumns.begin(); iterChildrenColumns != childrenColumns.end(); iterChildrenColumns++ ) {
			cfbam::ICFBamAtomObj* atomDef = NULL;
			cflib::ICFLibAnyObj* colDef = *iterChildrenColumns;
			if( colDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( dynamic_cast<cfbam::ICFBamTableColObj*>( colDef )->getRequiredParentDataType() );
			}
			else if( colDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( colDef );
			}
			if( atomDef != NULL ) {
				if( atomDef->implementsClassCode( cfbam::CFBamId64GenBuff::CLASS_CODE ) ) {
					list.push_back( dynamic_cast<cfbam::ICFBamId64GenObj*>( atomDef ) );
				}
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamId16GenObj*> CFBamCustMssCFTableObj::getDispensedId16Generators( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamId16GenObj*> list;
		int64_t tenantId = tableDef->getRequiredTenantId();
		int64_t id = tableDef->getRequiredId();
		std::vector<cfbam::ICFBamId16GenObj*> dispensed = tableDef->getSchema()->getId16GenTableObj()->readId16GenByDispIdx( &tenantId, &id );
		for( auto iterDispensed = dispensed.begin(); iterDispensed != dispensed.end(); iterDispensed++ ) {
			list.push_back( dynamic_cast<cfbam::ICFBamId16GenObj*>( *iterDispensed ) );
		}
		return( list );
	}

	std::vector<cfbam::ICFBamId32GenObj*> CFBamCustMssCFTableObj::getDispensedId32Generators( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamId32GenObj*> list;
		int64_t tenantId = tableDef->getRequiredTenantId();
		int64_t id = tableDef->getRequiredId();
		std::vector<cfbam::ICFBamId32GenObj*> dispensed = tableDef->getSchema()->getId32GenTableObj()->readId32GenByDispIdx( &tenantId, &id );
		for( auto iterDispensed = dispensed.begin(); iterDispensed != dispensed.end(); iterDispensed++ ) {
			list.push_back( dynamic_cast<cfbam::ICFBamId32GenObj*>( *iterDispensed ) );
		}
		return( list );
	}

	std::vector<cfbam::ICFBamId64GenObj*> CFBamCustMssCFTableObj::getDispensedId64Generators( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamId64GenObj*> list;
		int64_t tenantId = tableDef->getRequiredTenantId();
		int64_t id = tableDef->getRequiredId();
		std::vector<cfbam::ICFBamId64GenObj*> dispensed = tableDef->getSchema()->getId64GenTableObj()->readId64GenByDispIdx( &tenantId, &id );
		for( auto iterDispensed = dispensed.begin(); iterDispensed != dispensed.end(); iterDispensed++ ) {
			list.push_back( dynamic_cast<cfbam::ICFBamId64GenObj*>( *iterDispensed ) );
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamCustMssCFTableObj::getOnlyOwnerRelations( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* relationDef = NULL;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = tableDef->getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) {
				list.push_back( relationDef );
			}
		}

		cfbam::ICFBamRelationObj* superClass = getSuperClassRelation( tableDef );
		while( superClass != NULL ) {
			tableDef = superClass->getRequiredLookupToTable();
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
				relationDef = *iterChildrenRelations;
				if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) {
					list.push_back( relationDef );
				}
			}
			superClass = getSuperClassRelation( tableDef );
		}

		childrenRelations = tableDef->getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) {
				list.push_back( relationDef );
			}
		}

		superClass = getSuperClassRelation( tableDef );
		while( superClass != NULL ) {
			tableDef = superClass->getRequiredLookupToTable();
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
				relationDef = *iterChildrenRelations;
				if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) {
					list.push_back( relationDef );
				}
			}
			superClass = getSuperClassRelation( tableDef );
		}

		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamCustMssCFTableObj::getContainerOwnerRelations( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* relationDef = NULL;
		std::string relationTag;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = tableDef->getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
			relationDef = *iterChildrenRelations;
			if( ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner )
			|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Parent )
			|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) )
			{
				list.push_back( relationDef );
			}
		}

		cfbam::ICFBamRelationObj* superClass = getSuperClassRelation( tableDef );
		while( superClass != NULL ) {
			tableDef = superClass->getRequiredLookupToTable();
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
				relationDef = *iterChildrenRelations;
				if( ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner )
				|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Parent )
				|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) )
				{
					list.push_back( relationDef );
				}
			}
			superClass = getSuperClassRelation( tableDef );
		}
		
		return( list );
	}

	cfbam::ICFBamRelationObj* CFBamCustMssCFTableObj::getContainerRelation( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = tableDef->getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) {
				return( relationDef );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamRelationObj* CFBamCustMssCFTableObj::getInheritedContainerRelation( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* inheritedContainerRelation = NULL;
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations;
		while( ( inheritedContainerRelation == NULL ) && ( tableDef != NULL ) ) {
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
				relationDef = *iterChildrenRelations;
				if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) {
					return( relationDef );
				}
			}
			relationDef = getSuperClassRelation( tableDef );
			if( relationDef == NULL ) {
				tableDef = NULL;
			}
			else {
				tableDef = relationDef->getRequiredLookupToTable();
			}
		}
		return( NULL );
	}

	cfbam::ICFBamRelationObj* CFBamCustMssCFTableObj::getOwnerRelation( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = tableDef->getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) {
				return( relationDef );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamRelationObj* CFBamCustMssCFTableObj::getInheritedOwnerRelation( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* inheritedOwnerRelation = NULL;
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations;
		while( ( inheritedOwnerRelation == NULL ) && ( tableDef != NULL ) ) {
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
				relationDef = *iterChildrenRelations;
				if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) {
					return( relationDef );
				}
			}
			relationDef = getSuperClassRelation( tableDef );
			if( relationDef == NULL ) {
				tableDef = NULL;
			}
			else {
				tableDef = relationDef->getRequiredLookupToTable();
			}
		}
		return( NULL );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamCustMssCFTableObj::getOwnerLookupRelations( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = tableDef->getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
			relationDef = *iterChildrenRelations;
			if( ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Parent )
			|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container )
			|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Lookup )
			|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) )
			{
				list.push_back( relationDef );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamCustMssCFTableObj::getOwnerContainerNamedLookupChainRelations( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* relationDef;
		cfbam::ICFBamChainObj* chain;
		cfbam::ICFBamIndexObj* toIndex;
		cfbam::ICFBamTableObj* toTable;
		cfbam::ICFBamIndexObj* lookupIndex;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamChainObj*> componentChains = tableDef->getOptionalComponentsChains();
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = tableDef->getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				;
			}
			else if( ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container )
			|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner )
			|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container )
			|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Parent )
			|| ( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Lookup ) )
			{
				list.push_back( relationDef );
			}
			else {
				if( ! relationDef->getRequiredIsXsdContainer() ) {
					toIndex = relationDef->getRequiredLookupToIndex();
					if( toIndex->getRequiredIsUnique() ) {
						bool referencedByChain = false;
						for( auto iterChain = componentChains.begin(); ( ! referencedByChain ) && ( iterChain != componentChains.end() ); iterChain++ ) {
							chain = *iterChain;
							if( chain->getRequiredLookupPrevRel() == relationDef ) {
								referencedByChain = true;
							}
							else if( chain->getRequiredLookupNextRel() == relationDef ) {
								referencedByChain = true;
							}
						}
						if( referencedByChain ) {
							list.push_back( relationDef );
						}
						else {
							toTable = relationDef->getRequiredLookupToTable();
							lookupIndex = toTable->getOptionalLookupLookupIndex();
							while( ( lookupIndex == NULL ) && ( toTable != NULL ) ) {
								cfbam::ICFBamRelationObj* superRelation = getSuperClassRelation( toTable );
								if( superRelation != NULL ) {
									toTable = superRelation->getRequiredLookupToTable();
									if( toTable != NULL ) {
										lookupIndex = toTable->getOptionalLookupLookupIndex();
									}
								}
								else {
									toTable = NULL;
								}
							}
							if( lookupIndex != NULL ) {
								list.push_back( relationDef );
							}
						}
					}
				}
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamAtomObj*> CFBamCustMssCFTableObj::getChildrenAtoms( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamValueObj* colDef;
		std::vector<cfbam::ICFBamAtomObj*> list;
		std::vector<cfbam::ICFBamValueObj*> childrenColumns = tableDef->getOptionalComponentsColumns();
		for( auto iterChildrenColumns = childrenColumns.begin(); iterChildrenColumns != childrenColumns.end(); iterChildrenColumns++ ) {
			colDef = *iterChildrenColumns;
			if( colDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				list.push_back( dynamic_cast<cfbam::ICFBamAtomObj*>( colDef ) );
			}
		}
		return( list );
	}

	cfbam::ICFBamRelationObj* CFBamCustMssCFTableObj::getSuperClassRelation( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = tableDef->getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				return( relationDef );
			}
		}
		return( NULL );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamCustMssCFTableObj::getSubClassRelations( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* reverseRelation;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> reverseRelations = tableDef->getOptionalChildrenReverseRelations();
		for( auto iterReverseRelations = reverseRelations.begin(); iterReverseRelations != reverseRelations.end(); iterReverseRelations++ ) {
			reverseRelation = *iterReverseRelations;
			if( reverseRelation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				list.push_back( reverseRelation );
			}
		}
		return( list );
	}

	cfbam::ICFBamIndexObj* CFBamCustMssCFTableObj::getPrimaryKeyIndex( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamIndexObj* primaryIndex = tableDef->getOptionalLookupPrimaryIndex();
		return( primaryIndex );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamCustMssCFTableObj::getFactoryOwnerRelations( cfbam::ICFBamTableObj* tableDef ) {
		cfbam::ICFBamRelationObj* ownerRelation;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> ownerRelations = getContainerOwnerRelations( tableDef );
		for( auto iterOwnerRelations = ownerRelations.begin(); iterOwnerRelations != ownerRelations.end(); iterOwnerRelations++ ) {
			ownerRelation = *iterOwnerRelations;
			if( ownerRelation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				list.push_back( ownerRelation );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamCustMssCFTableObj::getInheritedIndexes( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamIndexObj*> list;
		cfbam::ICFBamRelationObj* superClassRelation = getSuperClassRelation( tableDef );
		if( superClassRelation != NULL ) {
			std::vector<cfbam::ICFBamIndexObj*> superClassInheritedIndexes = getInheritedIndexes( superClassRelation->getRequiredLookupToTable() );
			for( auto iterSuperClassInheritedIndexes = superClassInheritedIndexes.begin(); iterSuperClassInheritedIndexes != superClassInheritedIndexes.end(); iterSuperClassInheritedIndexes++ ) {
				list.push_back( *iterSuperClassInheritedIndexes );
			}
			std::vector<cfbam::ICFBamIndexObj*> myIndexes = getChildrenIndexes( tableDef );
			for( auto iterMyIndexes = myIndexes.begin(); iterMyIndexes != myIndexes.end(); iterMyIndexes++ ) {
				list.push_back( *iterMyIndexes );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamCustMssCFTableObj::getChildrenIndexes( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamIndexObj*> indexes = tableDef->getOptionalComponentsIndex();
		std::vector<cfbam::ICFBamIndexObj*> list;
		for( auto iter = indexes.begin(); iter != indexes.end(); iter++ ) {
			list.push_back( *iter );
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamCustMssCFTableObj::getInheritedRelations( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamRelationObj*> list;
		cfbam::ICFBamRelationObj* superClassRelation = getSuperClassRelation( tableDef );
		if( superClassRelation != NULL ) {
			std::vector<cfbam::ICFBamRelationObj*> superClassInheritedRelations = getInheritedRelations( superClassRelation->getRequiredLookupToTable() );
			for( auto iter = superClassInheritedRelations.begin(); iter != superClassInheritedRelations.end(); iter++ ) {
				list.push_back( *iter );
			}
			std::vector<cfbam::ICFBamRelationObj*> myRelations = getChildrenRelations( tableDef );
			for( auto iterMyRelations = myRelations.begin(); iterMyRelations != myRelations.end(); iterMyRelations++ ) {
				list.push_back( *iterMyRelations );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamCustMssCFTableObj::getChildrenRelations( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations;
		std::vector<cfbam::ICFBamRelationObj*> cltn = tableDef->getOptionalComponentsRelation();
		for( auto iter = cltn.begin(); iter != cltn.end(); iter++ ) {
			childrenRelations.push_back( *iter );
		}
		return( childrenRelations );
	}

	std::vector<cfbam::ICFBamValueObj*> CFBamCustMssCFTableObj::getTableIdGenerators( cfbam::ICFBamTableObj* tableDef ) {
		std::vector<cfbam::ICFBamValueObj*> list;
		std::vector<cfbam::ICFBamId16GenObj*> id16Generators = getId16Generators( tableDef );
		for( auto iterId16Generators = id16Generators.begin(); iterId16Generators != id16Generators.end(); iterId16Generators++ ) {
			list.push_back( *iterId16Generators );
		}
		std::vector<cfbam::ICFBamId32GenObj*> id32Generators = getId32Generators( tableDef );
		for( auto iterId32Generators = id32Generators.begin(); iterId32Generators != id32Generators.end(); iterId32Generators++ ) {
			list.push_back( *iterId32Generators );
		}
		std::vector<cfbam::ICFBamId64GenObj*> id64Generators = getId64Generators( tableDef );
		for( auto iterId64Generators = id64Generators.begin(); iterId64Generators != id64Generators.end(); iterId64Generators++ ) {
			list.push_back( *iterId64Generators );
		}
		return( list );
	}
}
