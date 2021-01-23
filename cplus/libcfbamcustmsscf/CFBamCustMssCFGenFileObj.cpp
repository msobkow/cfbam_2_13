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

#include <cfbamcustmsscf/CFBamCustMssCFGenFileObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFAnyObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenContext.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenFileObj::CLASS_NAME( "CFBamCustMssCFGenFileObj" );

	CFBamCustMssCFGenFileObj::CFBamCustMssCFGenFileObj()
	: cfcore::MssCFGenFileObj()
	{
	}

	CFBamCustMssCFGenFileObj::CFBamCustMssCFGenFileObj( cfcore::MssCFEngine* engine )
	: cfcore::MssCFGenFileObj( engine )
	{
	}

	CFBamCustMssCFGenFileObj::~CFBamCustMssCFGenFileObj() {
	}

	std::string CFBamCustMssCFGenFileObj::evaluateProjectDirName( cfcore::MssCFGenContext* genContext, cflib::ICFLibAnyObj* genDef ) {
		static const std::string S_ProcName( "evaluateProjectDirName" );
		static const std::string S_Under( "_" );
		static const std::string S_DQuoteCommaSpaceDQuote( "\", \"" );
		static const std::string S_Empty( "" );
		static const std::string S_DQuoteCloseParen( "\" )" );

		cflib::ICFLibAnyObj* project;
		cflib::ICFLibAnyObj* topproject;
		cflib::ICFLibAnyObj* subproject;
		cflib::ICFLibAnyObj* version;
		std::string projectDirName;
		cfbam::ICFBamSchemaDefObj* manufacturingSchema = dynamic_cast<cfbam::CFBamCustMssCFGenContext*>( genContext )->getManufacturingSchema();
		cflib::ICFLibAnyObj* anyObj = NULL;
		if( manufacturingSchema != NULL ) {
			anyObj = manufacturingSchema;
		}
		else {
			anyObj = genDef;
		}
		
		project = cfbam::CFBamCustMssCFAnyObj::getProject( anyObj );
		if( project == NULL ) {
			topproject = NULL;
			subproject = NULL;
			static const std::string S_MsgCouldNotGetProject( "Could not get Project for generating GenFile( \"" );
			std::string S_Msg( S_MsgCouldNotGetProject
				+ getRequiredLookupToolSet()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ ((getOptionalLookupScopeDef() != NULL)
					? getOptionalLookupScopeDef()->getRequiredName()
					: S_Empty )
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredLookupGenDef()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredName()
				+ S_DQuoteCloseParen );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}
		else {
			if( project->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				subproject = dynamic_cast<cfint::ICFIntSubProjectObj*>( project );
				topproject = dynamic_cast<cfint::ICFIntTopProjectObj*>( subproject->getObjScope() );
			}
			else if( project->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) {
				topproject = dynamic_cast<cfint::ICFIntTopProjectObj*>( project );
				subproject = NULL;
			}
			else {
				topproject = NULL;
				subproject = NULL;
			}
		}

		if( topproject == NULL ) {
			static const std::string S_MsgCouldNotDetermineTopProject( "Could not determine TopProject for generating GenFile( \"" );
			std::string S_Msg( S_MsgCouldNotDetermineTopProject
				+ getRequiredLookupToolSet()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ ((getOptionalLookupScopeDef() != NULL)
					? getOptionalLookupScopeDef()->getRequiredName()
					: S_Empty )
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredLookupGenDef()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredName()
				+ S_DQuoteCloseParen );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		if( subproject == NULL ) {
			std::string S_Msg( "Could not determine SubProject for generating GenFile( \""
				+ getRequiredLookupToolSet()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ ((getOptionalLookupScopeDef() != NULL)
					? getOptionalLookupScopeDef()->getRequiredName()
					: S_Empty )
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredLookupGenDef()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredName()
				+ S_DQuoteCloseParen );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		version = cfbam::CFBamCustMssCFAnyObj::getVersionLeaf( anyObj );

		cfint::ICFIntMajorVersionObj* majorVersion;
		cfint::ICFIntMinorVersionObj* minorVersion;

		if( version->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
			majorVersion = dynamic_cast<cfint::ICFIntMajorVersionObj*>( version );
			minorVersion = NULL;
		}
		else if( version->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
			minorVersion = dynamic_cast<cfint::ICFIntMinorVersionObj*>( version );
			majorVersion = dynamic_cast<cfint::ICFIntMajorVersionObj*>( version->getObjScope() );
		}
		else {
			minorVersion = NULL;
			majorVersion = NULL;
		}

		if( majorVersion == NULL ) {
			std::string S_Msg( "Could not determine MajorVersion for generating GenFile( \""
				+ getRequiredLookupToolSet()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ ((getOptionalLookupScopeDef() != NULL)
					? getOptionalLookupScopeDef()->getRequiredName()
					: S_Empty )
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredLookupGenDef()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredName()
				+ S_DQuoteCloseParen );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		if( minorVersion == NULL ) {
			std::string S_Msg( "Could not determine MinorVersion for generating GenFile( \""
				+ getRequiredLookupToolSet()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ ((getOptionalLookupScopeDef() != NULL)
					? getOptionalLookupScopeDef()->getRequiredName()
					: S_Empty )
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredLookupGenDef()->getRequiredName()
				+ S_DQuoteCommaSpaceDQuote
				+ getRequiredName()
				+ S_DQuoteCloseParen );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		std::string lowerObjName = subproject->getObjName();
		std::for_each( lowerObjName.begin(), lowerObjName.end(), []( char &c ) {
			c = ::tolower( c );
		});

		projectDirName = lowerObjName + S_Under + majorVersion->getObjName() + S_Under + minorVersion->getObjName();

		return( projectDirName );
	}
}
