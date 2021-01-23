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
 *	Contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */

#include <cfbamcustmsscf/CFBamCustMssCFAnyObj.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFAnyObj::CLASS_NAME( "CFBamCustMssCFAnyObj" );
	const std::string CFBamCustMssCFAnyObj::S_CurDef( "curDef" );

	CFBamCustMssCFAnyObj::CFBamCustMssCFAnyObj() {
	}

	CFBamCustMssCFAnyObj::~CFBamCustMssCFAnyObj() {
	}

	cfbam::ICFBamSchemaDefObj* CFBamCustMssCFAnyObj::getDefSchema( cflib::ICFLibAnyObj* anyDef ) {
		static const std::string S_ProcName( "getDefSchema" );
		cflib::ICFLibAnyObj* curDef = anyDef;
		cfbam::ICFBamSchemaDefObj* defSchema;
		if( curDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_CurDef );
		}
		else if( curDef->implementsClassCode( cfbam::CFBamValueBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamValueObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
		}
		else if( curDef->implementsClassCode( cfbam::CFBamChainBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamChainObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamDelDepBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamDelDepObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamEnumTagBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamEnumTagObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamIndexColObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamIndexBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamIndexObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamParamBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamParamObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamPopDepBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamPopDepObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamRelationColObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamRelationObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamServerMethodBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamServerMethodObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else if( curDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			defSchema = dynamic_cast<cfbam::ICFBamTableObj*>( curDef )->getOptionalLookupDefSchema();
		}
		else {
			defSchema = NULL;
		}

		cfbam::ICFBamSchemaDefObj* topSchema = NULL;
		cfbam::ICFBamSchemaDefObj* firstSchemaEncountered = NULL;
		cfbam::ICFBamSchemaDefObj* lastInterruptedSchema = NULL;
		if( defSchema != NULL ) {
			firstSchemaEncountered = defSchema;
			curDef = defSchema;
		}
		else {
			for( curDef = anyDef; curDef != NULL; curDef = curDef->getObjScope() ) {
				if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
					if( lastInterruptedSchema == NULL ) {
						firstSchemaEncountered = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
					}
					topSchema = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
					lastInterruptedSchema = topSchema;
				}
				else {
					lastInterruptedSchema = NULL;
				}
			}

			if( topSchema != NULL ) {
				defSchema = firstSchemaEncountered;
				curDef = defSchema;
			}
		}
		return( defSchema );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFAnyObj::getDefProject( cflib::ICFLibAnyObj* anyDef ) {
		static const std::string S_ProcName( "getDefProject" );
		cflib::ICFLibAnyObj* curDef = anyDef;
		cfbam::ICFBamSchemaDefObj* defSchema;

		if( curDef != NULL ) {
			defSchema = getDefSchema( curDef );
		}
		else {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_CurDef );
		}

		if( defSchema != NULL ) {
			curDef = defSchema;
		}
 
		for( ; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}

		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFAnyObj::getProject( cflib::ICFLibAnyObj* anyDef ) {
		cfbam::ICFBamSchemaDefObj* topSchema = NULL;
		cfbam::ICFBamSchemaDefObj* firstSchemaEncountered = NULL;
		cfbam::ICFBamSchemaDefObj* lastInterruptedSchema = NULL;
		cflib::ICFLibAnyObj* curDef;
		for( curDef = anyDef; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				if( lastInterruptedSchema == NULL ) {
					firstSchemaEncountered = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
				}
				topSchema = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
				lastInterruptedSchema = topSchema;
			}
			else {
				lastInterruptedSchema = NULL;
			}
		}

		if( topSchema != NULL ) {
			curDef = firstSchemaEncountered;
		}
		else {
			curDef = anyDef;
		}

		for( ; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamSchemaDefObj* CFBamCustMssCFAnyObj::getTopSchema( cflib::ICFLibAnyObj* anyDef ) {
		cfbam::ICFBamSchemaDefObj* topSchema = NULL;
		cflib::ICFLibAnyObj* curDef;
		for( curDef = anyDef; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				topSchema = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
			}
		}
		return( topSchema );
	}

	cfbam::ICFBamTopDomainObj* CFBamCustMssCFAnyObj::getTopDomain( cflib::ICFLibAnyObj* anyDef ) {
		static const std::string S_ProcName( "getTopDomain" );
		cflib::ICFLibAnyObj* curDef = anyDef;
		cfbam::ICFBamSchemaDefObj* defSchema;
		if( curDef != NULL ) {
			defSchema = getDefSchema( curDef );
		}
		else {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_CurDef );
		}

		if( defSchema != NULL ) {
			curDef = defSchema;
		}

		for( ; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntTopDomainBuff::CLASS_CODE ) )
			{
				return( dynamic_cast<cfbam::ICFBamTopDomainObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) )
			{
				return( NULL );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamSchemaDefObj* CFBamCustMssCFAnyObj::getSchema( cflib::ICFLibAnyObj* anyDef ) {
		for( cflib::ICFLibAnyObj* curDef = anyDef; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				return( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef ) );
			}
			else if( curDef->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFAnyObj::getVersionLeaf( cflib::ICFLibAnyObj* anyDef ) {
		static const std::string S_ProcName( "getVersionLeaf" );
		cflib::ICFLibAnyObj* curDef = anyDef;
		cfbam::ICFBamSchemaDefObj* defSchema;
		if( curDef != NULL ) {
			if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				defSchema = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
			}
			else {
				defSchema = getDefSchema( curDef );
			}
		}
		else {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_CurDef );
		}

		   		if( defSchema != NULL ) {
			curDef = defSchema;
		}

		for( ; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( NULL );
			}
			else if( curDef->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	std::string CFBamCustMssCFAnyObj::getVersionString( cflib::ICFLibAnyObj* anyDef ) {
		static const std::string S_ProcName( "getVersionString" );
		static const std::string S_Dash( "-" );
		cflib::ICFLibAnyObj* curDef = anyDef;
		cfbam::ICFBamSchemaDefObj* defSchema;
		if( curDef != NULL ) {
			if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				defSchema = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
			}
			else {
				defSchema = getDefSchema( curDef );
			}
		}
		else {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_CurDef );
		}

		if( defSchema != NULL ) {
			curDef = defSchema;
		}

		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* versionLeafDef = getVersionLeaf( curDef );
		std::vector<std::string> invertedNodeNames;
		while( versionLeafDef != NULL ) {
			invertedNodeNames.push_back( versionLeafDef->getObjName() );
			scopeDef = versionLeafDef->getObjScope();
			if( scopeDef == NULL ) {
				versionLeafDef = NULL;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE )) {
				versionLeafDef = dynamic_cast<cfbam::ICFBamMinorVersionObj*>( scopeDef );
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE )) {
				versionLeafDef = dynamic_cast<cfbam::ICFBamMajorVersionObj*>( scopeDef );
			}
			else {
				versionLeafDef = NULL;
			}
		}

		std::string ret;
		if( ! invertedNodeNames.empty() ) {
			auto curs = invertedNodeNames.end();
			do {
				curs --;
				if( ! ret.empty() ) {
					ret.append( S_Dash );
				}
				ret.append( *curs );
			} while( curs != invertedNodeNames.begin() );
		}

		return( ret );
	}

	std::string CFBamCustMssCFAnyObj::getPackedVersionString( cflib::ICFLibAnyObj* anyDef ) {
		static const std::string S_ProcName( "getPackedVersionString" );
		cflib::ICFLibAnyObj* curDef = anyDef;
		cfbam::ICFBamSchemaDefObj* defSchema;
		if( curDef != NULL ) {
			defSchema = getDefSchema( curDef );
		}
		else {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_CurDef );
		}

		if( defSchema != NULL ) {
			curDef = defSchema;
		}

		cflib::ICFLibAnyObj* scopeDef;
		cflib::ICFLibAnyObj* versionLeafDef = getVersionLeaf( curDef );
		std::vector<std::string> invertedNodeNames;
		while( versionLeafDef != NULL ) {
			invertedNodeNames.push_back( versionLeafDef->getObjName() );
			scopeDef = versionLeafDef->getObjScope();
			if( scopeDef == NULL ) {
				versionLeafDef = NULL;
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE )) {
				versionLeafDef = dynamic_cast<cfbam::ICFBamMinorVersionObj*>( scopeDef );
			}
			else if( scopeDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE )) {
				versionLeafDef = dynamic_cast<cfbam::ICFBamMajorVersionObj*>( scopeDef );
			}
			else {
				versionLeafDef = NULL;
			}
		}

		std::string ret;
		if( ! invertedNodeNames.empty() ) {
			auto curs = invertedNodeNames.end();
			do {
				curs --;
				ret.append( *curs );
			} while( curs != invertedNodeNames.begin() );
		}

		return( ret );
	}

	std::string CFBamCustMssCFAnyObj::getFullName( cflib::ICFLibAnyObj* anyDef ) {
		static const std::string S_Dot( "." );
		std::string ret = anyDef->getObjName();
		cflib::ICFLibAnyObj* scopeDef = anyDef->getObjScope();
		while( ( scopeDef != NULL ) && ! scopeDef->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
			ret = scopeDef->getObjName() + S_Dot + ret;
			scopeDef = scopeDef->getObjScope();
		}
		return( ret );
	}

	std::string CFBamCustMssCFAnyObj::getPackageName( cflib::ICFLibAnyObj* anyDef ) {
		cflib::ICFLibAnyObj* pkg = getPackage( anyDef );
		std::string ret = pkg->getObjName();
		return( ret );
	}

	std::string CFBamCustMssCFAnyObj::getModelName( cflib::ICFLibAnyObj* anyDef ) {
		static const std::string S_Dot( "." );
		std::string ret = anyDef->getObjName();
		cflib::ICFLibAnyObj* scopeDef = anyDef->getObjScope();
		while( ( scopeDef != NULL ) && ! scopeDef->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
			ret = scopeDef->getObjName() + S_Dot + ret;
			scopeDef = scopeDef->getObjScope();
		}
		return( ret );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFAnyObj::getDefPackage( cflib::ICFLibAnyObj* anyDef ) {
		static const std::string S_ProcName( "getDefPackage" );
		cflib::ICFLibAnyObj* curDef = anyDef;
		cfbam::ICFBamSchemaDefObj* defSchema;
		if( curDef != NULL ) {
			defSchema = getDefSchema( curDef );
		}
		else {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_CurDef );
		}

		if( defSchema != NULL ) {
			curDef = defSchema;
		}

		cflib::ICFLibAnyObj* scopeDef;

		for( ; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFAnyObj::getPackage( cflib::ICFLibAnyObj* anyDef ) {
		cfbam::ICFBamSchemaDefObj* topSchema = NULL;
		cfbam::ICFBamSchemaDefObj* firstSchemaEncountered = NULL;
		cfbam::ICFBamSchemaDefObj* lastInterruptedSchema = NULL;
		for( cflib::ICFLibAnyObj* curDef = anyDef; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				if( lastInterruptedSchema == NULL ) {
					firstSchemaEncountered = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
				}
				topSchema = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( curDef );
				lastInterruptedSchema = topSchema;
			}
			else {
				lastInterruptedSchema = NULL;
			}
		}

		cflib::ICFLibAnyObj* curDef;
		if( topSchema != NULL ) {
			curDef = firstSchemaEncountered;
		}
		else {
			curDef = anyDef;
		}

		for( ; curDef != NULL; curDef = curDef->getObjScope() ) {
			if( curDef->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				return( curDef );
			}
			else if( curDef->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) {
				return( NULL );
			}
		}
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFAnyObj::getDefByModelName(
		cfbam::ICFBamScopeObj* modelScope,
		const std::string& modelName )
	{
		static const std::string S_ProcName( "getDefByModelName" );

		std::string thisName;
		std::string remainder;
		size_t idxDot = modelName.find_first_of( '.' );
		if( idxDot > 0 ) {
			thisName = modelName.substr( 0, idxDot );
			remainder = modelName.substr( idxDot + 1, modelName.length() - ( idxDot + 1 ) );
		}
		else {
			thisName = modelName;
			remainder = "";
		}

		cflib::ICFLibAnyObj* resolved = modelScope->getNamedObject( thisName );
		if( resolved == NULL ) {
			static const std::string S_CouldNotResolve( "Could not resolve \"" );
			static const std::string S_InScope( "\" in scope \"" );
			static const std::string S_EndMsg( "\"" );
			std::string S_Msg( S_CouldNotResolve + thisName + S_InScope + getFullName( modelScope ) + S_EndMsg );
			throw new cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		if( remainder.length() > 0 ) {
			resolved = getDefByModelName( dynamic_cast<cfbam::ICFBamScopeObj*>( resolved ), remainder );
		}

		return( resolved );
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFAnyObj::getDefByGlobalName(
		cfbam::ICFBamScopeObj* modelScope,
		const std::string& globalName )
	{
		static const std::string S_ProcName( "getDefByGlobalName" );
		static const std::string S_GlobalName( "globalName" );

		if( globalName.length() <= 0 ) {
			throw new cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 2, S_GlobalName );
		}

		cfbam::ICFBamScopeObj* searchScope = modelScope;
		while( ( searchScope != NULL )
			&& ( ! searchScope->implementsClassCode( cfsec::CFSecTenantBuff::CLASS_CODE ) ) )
		{
			searchScope = dynamic_cast<cfbam::ICFBamScopeObj*>( searchScope->getObjScope() );
		}
		if( searchScope == NULL ) {
			static const std::string S_Msg( "Could not chain scope to a Tenant definition" );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		cflib::ICFLibAnyObj* searchDef = searchScope;
		cflib::ICFLibAnyObj* foundNext;
		std::string remainingName = globalName;
		std::string nextName;
		std::string nowRemaining;
		while( remainingName.length() > 0 ) {
			size_t nextDot = remainingName.find_first_of('.');
			if( nextDot > 0 ) {
				nextName = remainingName.substr( 0, nextDot );
				nowRemaining = remainingName.substr( nextDot + 1 );
			}
			else {
				nextName = remainingName;
				nowRemaining = "";
			}
			foundNext = searchDef->getNamedObject( nextName );
			if( foundNext == NULL ) {
				static const std::string S_MsgCouldNotResolve( "Could not resolve name part " );
				static const std::string S_OfGlobalName( " of global name \"" );
				static const std::string S_In( "\" in " );
				static const std::string S_Space( " " );
				std::string S_Msg( S_MsgCouldNotResolve + nextName + S_OfGlobalName + globalName + S_In + searchDef->getClassName() + S_Space + searchDef->getObjName() );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
			}
			searchDef = foundNext;
			remainingName = nowRemaining;
		}
		return( searchDef );
	}
}
