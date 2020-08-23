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
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceObjNameColumn.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenReferenceObjNameColumn::CLASS_NAME( "CFBamCustMssCFGenReferenceObjNameColumn" );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_IndexColDefContainerIndex( "IndexColDef.getRequiredContainerIndex()" );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_SupportedClasses( "ICFBamTableObj, ICFBamAtomObj, ICFBamTableColObj, ICFBamIndexObj, ICFBamIndexColObj" );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_CouldNotLocateCurrentTable( "Could not locate current table for genContext.getGenDef()<" );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_RAngle( ">" );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_Name( "Name" );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_CurrentTableDef( "Current TableDef " );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_EmptyLookupIndex( " LookupIndex has no columns" );
	const std::string CFBamCustMssCFGenReferenceObjNameColumn::S_DoesNotSpecifyOption( " does not specify a LookupIndex, have a Name column, or specify a PrimaryIndex" );

	CFBamCustMssCFGenReferenceObjNameColumn::CFBamCustMssCFGenReferenceObjNameColumn()
	: cfcore::MssCFGenReferenceObj()
	{
	}

	CFBamCustMssCFGenReferenceObjNameColumn::CFBamCustMssCFGenReferenceObjNameColumn(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenReferenceObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Id16Gen" )
	{
	}

	CFBamCustMssCFGenReferenceObjNameColumn::~CFBamCustMssCFGenReferenceObjNameColumn() {
	}

	static bool icmpChar( const char& c1, const char& c2 ) {
		if( c1 == c2 ) {
			return( true );
		}
		else if( std::toupper( c1 ) == std::toupper( c2 ) ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	static bool icmpString( const std::string& str1, const std::string& str2 ) {
		return( ( str1.size() == str2.size() )
			&& std::equal( str1.begin(), str1.end(), str2.begin(), &icmpChar ) );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFGenReferenceObjNameColumn::dereference( cfcore::MssCFGenContext* genContext ) {
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

		cfbam::ICFBamTableObj* curTable = NULL;

		if( genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			curTable = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );
		}
		else if( genDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			cflib::ICFLibAnyObj* atomScope = dynamic_cast<cfbam::ICFBamAtomObj*>( genDef )->getRequiredContainerScope();
			if( ( atomScope != NULL ) && ( atomScope->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) ) {
				curTable = dynamic_cast<cfbam::ICFBamTableObj*>( atomScope );
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			curTable = dynamic_cast<cfbam::ICFBamTableColObj*>( genDef )->getRequiredContainerTable();
		}
		else if( genDef->implementsClassCode( cfbam::CFBamIndexBuff::CLASS_CODE ) ) {
			curTable = dynamic_cast<cfbam::ICFBamIndexObj*>( genDef )->getRequiredContainerTable();
		}
		else if( genDef->implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamIndexObj* colIndex = dynamic_cast<cfbam::ICFBamIndexColObj*>( genDef )->getRequiredContainerIndex();
			if( colIndex == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_IndexColDefContainerIndex );
			}
			curTable = colIndex->getRequiredContainerTable();
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_SupportedClasses );
		}

		if( curTable == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateCurrentTable + genDef->getClassName() + S_RAngle );
		}

		cfbam::ICFBamIndexObj* lookupIndex = NULL;
		cfbam::ICFBamRelationObj* superClassRelation;
		cfbam::ICFBamTableObj* startTable = curTable;

		while( ( lookupIndex == NULL ) && ( curTable != NULL ) ) {
			lookupIndex = curTable->getOptionalLookupLookupIndex();
			if( lookupIndex == NULL ) {
				superClassRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( curTable );
				if( superClassRelation != NULL ) {
					curTable = superClassRelation->getRequiredLookupToTable();
				}
				else {
					curTable = NULL;
				}
			}
		}

		cfbam::ICFBamValueObj* nameCol = NULL;

		if( lookupIndex != NULL ) {
			std::vector<cfbam::ICFBamIndexColObj*> cols = lookupIndex->getOptionalComponentsColumns();
			if( cols.empty() ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_CurrentTableDef + startTable->getObjFullName() + S_EmptyLookupIndex );
			}
			else {
				nameCol = cols.back()->getRequiredLookupColumn();
			}
		}

		if( nameCol == NULL ) {
			// Try to find a column named "Name" in the table
			curTable = startTable;
			std::vector<cfbam::ICFBamValueObj*> cols;
			cfbam::ICFBamValueObj* cur;
			while( ( nameCol == NULL ) && ( curTable != NULL ) ) {
				cols = curTable->getOptionalComponentsColumns();
				for( auto iter = cols.begin(); ( nameCol == NULL ) && ( iter != cols.end() ); iter ++ ) {
					cur = *iter;
					if( icmpString( S_Name, cur->getRequiredName() ) ) {
						nameCol = cur;
					}
				}
				if( nameCol == NULL ) {
					superClassRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( curTable );
					if( superClassRelation != NULL ) {
						curTable = superClassRelation->getRequiredLookupToTable();
					}
					else {
						curTable = NULL;
					}
				}
			}
		}

		if( nameCol == NULL ) {
			// Use the last column of the primary key
			cfbam::ICFBamIndexObj* pkey = startTable->getOptionalLookupPrimaryIndex();
			if( pkey != NULL ) {
				std::vector<cfbam::ICFBamIndexColObj*> cols = pkey->getOptionalComponentsColumns();
				if( cols.empty() ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						S_CurrentTableDef + startTable->getObjFullName() + S_DoesNotSpecifyOption );
				}
				else {
					nameCol = cols.back()->getRequiredLookupColumn();
				}
			}
		}

		if( nameCol == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_CurrentTableDef + startTable->getObjFullName() + S_DoesNotSpecifyOption );
		}

		return( nameCol );
	}
}
