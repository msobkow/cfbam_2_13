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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindBaseModelAtomClass.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindBaseModelAtomClass::CLASS_NAME( "CFBamMssCFBindBaseModelAtomClass" );
	const std::string CFBamCustMssCFGenBindBaseModelAtomClass::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindBaseModelAtomClass::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindBaseModelAtomClass::S_InstanceOf( "Instance of " );
	const std::string CFBamCustMssCFGenBindBaseModelAtomClass::S_NotRecognized( " is not recognized" );
	const std::string CFBamCustMssCFGenBindBaseModelAtomClass::S_TableColGetRequiredParentDataType( "TableColDef.getRequiredParentDataType()" );
	const std::string CFBamCustMssCFGenBindBaseModelAtomClass::S_NotSupported( " does not derive from a supported definition class" );
	const std::string CFBamCustMssCFGenBindBaseModelAtomClass::S_IndexColGetRequiredLookupColumn( "IndexColDef.getRequiredLookupColumn()" );

	CFBamCustMssCFGenBindBaseModelAtomClass::CFBamCustMssCFGenBindBaseModelAtomClass()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindBaseModelAtomClass::CFBamCustMssCFGenBindBaseModelAtomClass(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindBaseModelAtomClass::~CFBamCustMssCFGenBindBaseModelAtomClass()
	{
	}

	std::string CFBamCustMssCFGenBindBaseModelAtomClass::expandBody( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expandBody" );
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

		std::string ret = recurseExpandBody( genDef );
		if( ret.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}

		return( ret );
	}

	std::string CFBamCustMssCFGenBindBaseModelAtomClass::recurseExpandBody( cflib::ICFLibAnyObj* genDef ) {
		static const std::string S_ProcName( "recurseExpandBody" );

		std::string ret;
		
		if( genDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			if( genDef->implementsClassCode( cfbam::CFBamBlobDefBuff::CLASS_CODE ) ) {
				ret = "BlobDef";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamBoolDefBuff::CLASS_CODE ) ) {
				ret = "BoolDef";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamId16GenBuff::CLASS_CODE )) {
				ret = "Id16Gen";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamId32GenBuff::CLASS_CODE )) {
				ret = "Id32Gen";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamId64GenBuff::CLASS_CODE )) {
				ret = "Id64Gen";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamUuidGenBuff::CLASS_CODE )) {
				ret = "UuidGen";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamEnumDefBuff::CLASS_CODE )) {
				ret = "EnumDef";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamUInt16DefBuff::CLASS_CODE )) {
				ret = "UInt16Def";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamUInt32DefBuff::CLASS_CODE )) {
				ret = "UInt32Def";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamUInt64DefBuff::CLASS_CODE )) {
				ret = "UInt64Def";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamInt16DefBuff::CLASS_CODE )) {
				ret = "Int16Def";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamInt32DefBuff::CLASS_CODE ) ) {
				ret = "Int32Def";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamInt64DefBuff::CLASS_CODE ) ) {
				ret = "Int64Def";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamFloatDefBuff::CLASS_CODE ) ) {
				ret = "FloatDef";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamDoubleDefBuff::CLASS_CODE ) ) {
				ret = "DoubleDef";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamNumberDefBuff::CLASS_CODE ) ) {
				ret = "NumberDef";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamNmTokensDefBuff::CLASS_CODE ))
			{
				ret = "NmTokensDef";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamNmTokenDefBuff::CLASS_CODE )) {
				ret = "NmTokenDef";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamTokenDefBuff::CLASS_CODE )) {
				ret = "TokenDef";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamStringDefBuff::CLASS_CODE )) {
				ret = "StringDef";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamTextDefBuff::CLASS_CODE ) ) {
				ret = "TextDef";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamDateDefBuff::CLASS_CODE ) ) {
				ret = "DateDef";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamTimeDefBuff::CLASS_CODE ) ) {
				ret = "TimeDef";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamTimestampDefBuff::CLASS_CODE ) ) {
				ret = "TimestampDef";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamTZDateDefBuff::CLASS_CODE )) {
				ret = "TZDateDef";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamTZTimeDefBuff::CLASS_CODE )) {
				ret = "TZTimeDef";
			}
			else if (genDef->implementsClassCode( cfbam::CFBamTZTimestampDefBuff::CLASS_CODE )) {
				ret = "TZTimestampDef";
			}
			else if( genDef->implementsClassCode( cfbam::CFBamUuidDefBuff::CLASS_CODE ) ) {
				ret = "UuidDef";
			}
			else {
				std::string S_Msg( S_InstanceOf + genDef->getClassName() + S_NotRecognized );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg );
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			cflib::ICFLibAnyObj* dataDef = dynamic_cast<cfbam::ICFBamTableColObj*>( genDef )->getRequiredParentDataType();
			if( dataDef == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_TableColGetRequiredParentDataType );
			}
			ret = recurseExpandBody( dataDef );
		}
		else if( genDef->implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			cflib::ICFLibAnyObj* dataDef = dynamic_cast<cfbam::ICFBamIndexColObj*>( genDef )->getRequiredLookupColumn();
			if( dataDef == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_IndexColGetRequiredLookupColumn );
			}
			ret = recurseExpandBody(dataDef);
		}
		else {
			std::string S_Msg( S_InstanceOf + genDef->getClassName() + S_NotSupported );
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg );
		}

		return( ret );
	}	
}
