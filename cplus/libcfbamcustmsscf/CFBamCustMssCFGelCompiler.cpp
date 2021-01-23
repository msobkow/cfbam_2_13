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

#include <cfbamcustmsscf/CFBamCustMssCFGelCompiler.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFAnyObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenContext.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenContextFactory.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGelCompiler::CLASS_NAME( "CFBamCustMssCFGelCompiler" );
	const std::string CFBamCustMssCFGelCompiler::_BUILTIN_PROJECTNAME( "ProjectName" );
	const std::string CFBamCustMssCFGelCompiler::_BUILTIN_JAVAPACKAGE( "JavaPackage" );
	const std::string CFBamCustMssCFGelCompiler::_BUILTIN_JAVADEFPACKAGE( "JavaDefPackage" );
	const std::string CFBamCustMssCFGelCompiler::_BUILTIN_GENPACKAGE( "GenPackage" );
	const std::string CFBamCustMssCFGelCompiler::_BUILTIN_GENBASEPACKAGE( "GenBasePackage" );
	const std::string CFBamCustMssCFGelCompiler::_BUILTIN_GENFULLPACKAGE( "GenFullPackage" );
	const std::string CFBamCustMssCFGelCompiler::_BUILTIN_GENPACKAGEDIR( "GenPackageDir" );
	const std::string CFBamCustMssCFGelCompiler::_BUILTIN_GENPACKAGEFULLDIR( "GenPackageFullDir" );
	const std::string CFBamCustMssCFGelCompiler::_BUILTIN_CODEFACTORYVERSION( "CodeFactoryVersion" );
	std::string CFBamCustMssCFGelCompiler::codeFactoryVersion = CFBamCustMssCFEngine::LinkVersion;

	CFBamCustMssCFGelCompiler::CFBamCustMssCFGelCompiler( cfbam::CFBamCustMssCFEngine* engine )
	: cfcore::MssCFGelCompiler( dynamic_cast<cfcore::MssCFEngine*>( engine ) )
	{
	}

	CFBamCustMssCFGelCompiler::~CFBamCustMssCFGelCompiler() {
	}

	void CFBamCustMssCFGelCompiler::setCodeFactoryVersion( const std::string& value ) {
		static const std::string S_ProcName( "setCodeFactoryVersion" );
		static const std::string S_Value( "value" );
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_Value );
		}
		codeFactoryVersion = value;
	}

	const std::string& CFBamCustMssCFGelCompiler::getCodeFactoryVersion() {
		return( codeFactoryVersion );
	}

	cfcore::ICFGenKbGelInstructionObj* CFBamCustMssCFGelCompiler::compileMacro( const std::string& macro ) {
		bool noSuperCompiler = true;
		cfcore::ICFGenKbGelInstructionObj* ret = NULL;
		if( macro.length() == 0 ) {
			ret = cfcore::MssCFGelCompiler::compileMacro( macro );
			noSuperCompiler = false;
		}
		else if( macro == _BUILTIN_CODEFACTORYVERSION ) {
			cfcore::ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinCodeFactoryVersion( getGenEngine() ); 
			cfcore::ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_PROJECTNAME ) {
			cfcore::ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinProjectName( getGenEngine() ); 
			cfcore::ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_JAVAPACKAGE ) {
			cfcore::ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinJavaPackage( getGenEngine() ); 
			cfcore::ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_JAVADEFPACKAGE ) {
			cfcore::ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinJavaDefPackage( getGenEngine() ); 
			cfcore::ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENPACKAGE ) {
			cfcore::ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenPackage( getGenEngine() ); 
			cfcore::ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENBASEPACKAGE ) {
			cfcore::ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenBasePackage( getGenEngine() ); 
			cfcore::ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENFULLPACKAGE ) {
			cfcore::ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenFullPackage( getGenEngine() ); 
			cfcore::ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENPACKAGEDIR ) {
			cfcore::ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenPackageDir( getGenEngine() ); 
			cfcore::ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENPACKAGEFULLDIR ) {
			cfcore::ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenPackageFullDir( getGenEngine() ); 
			cfcore::ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else {
			ret = cfcore::MssCFGelCompiler::compileMacro( macro );
			noSuperCompiler = false;
		}
		return( ret );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinCodeFactoryVersion::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinCodeFactoryVersion" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinCodeFactoryVersion::MssCFBuiltinCodeFactoryVersion( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinCodeFactoryVersion::~MssCFBuiltinCodeFactoryVersion() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinCodeFactoryVersion::expand( cfcore::MssCFGenContext* genContext ) {
		std::string retval = CFBamCustMssCFGelCompiler::getCodeFactoryVersion();
		if( retval.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( retval );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinProjectName::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinProjectName" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinProjectName::MssCFBuiltinProjectName( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinProjectName::~MssCFBuiltinProjectName() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinProjectName::expand( cfcore::MssCFGenContext* genContext ) {
		std::string retval;
		cflib::ICFLibAnyObj* anobj = genContext->getGenDef();
		cfbam::ICFBamSchemaDefObj* schema = CFBamCustMssCFAnyObj::getSchema( anobj );
		cflib::ICFLibAnyObj* project = CFBamCustMssCFAnyObj::getProject( schema );
		if( ( project != NULL ) && ( project->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) ) {
			retval = project->getObjName();
		}
		else if( ( project != NULL ) && ( project->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) ) {
			retval = project->getObjName();
		}
		else {
			retval = schema->getObjName();
		}
		if( retval.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( retval );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinDefProjectName::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinDefProjectName" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinDefProjectName::MssCFBuiltinDefProjectName( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinDefProjectName::~MssCFBuiltinDefProjectName() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinDefProjectName::expand( cfcore::MssCFGenContext* genContext ) {
		std::string retval;
		cflib::ICFLibAnyObj* anobj = genContext->getGenDef();
		cflib::ICFLibAnyObj* project = CFBamCustMssCFAnyObj::getDefProject( anobj );
		if( ( project != NULL ) && ( project->implementsClassCode( cfint::CFIntTopProjectBuff::CLASS_CODE ) ) ) {
			retval = project->getObjName();
		}
		else if( ( project != NULL ) && ( project->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) ) {
			retval = project->getObjName();
		}
		if( retval.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( retval );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinJavaDefPackage::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinJavaDefPackage" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinJavaDefPackage::MssCFBuiltinJavaDefPackage( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinJavaDefPackage::~MssCFBuiltinJavaDefPackage() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinJavaDefPackage::expand( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_Dot( "." );
		static const std::string S_DotV( ".v" );
		std::string ret;
		cflib::ICFLibAnyObj* genObj;
		cfcore::MssCFGenContext* fileContext = genContext->getGenFileContext();
		if( fileContext != NULL ) {
			genObj = dynamic_cast<cflib::ICFLibAnyObj*>( fileContext->getGenDef() );
		}
		else {
			genObj = dynamic_cast<cflib::ICFLibAnyObj*>( genContext->getGenDef() );
		}

		if( genObj != NULL ) {
			cflib::ICFLibAnyObj* projectDef = CFBamCustMssCFAnyObj::getDefProject( genObj );
			if( projectDef != NULL ) {
				std::string projectDotName = CFBamCustMssCFAnyObj::getModelName( projectDef );
				std::string versionString = CFBamCustMssCFAnyObj::getVersionString( genObj );
				if( versionString.length() > 0 ) {
					std::replace( versionString.begin(), versionString.end(), '-', '_' );
					switch( versionString[ 0 ] ) {
						case '0':
						case '1':
						case '2':
						case '3':
						case '4':
						case '5':
						case '6':
						case '7':
						case '8':
						case '9':
							ret = projectDotName + S_DotV + versionString;
							break;
						default:
							ret = projectDotName + S_Dot + versionString;
							break;
					}
				}
				else {
					ret = projectDotName;
				}
			}
		}
		if( ret.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( ret );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinJavaPackage::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinJavaPackage" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinJavaPackage::MssCFBuiltinJavaPackage( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinJavaPackage::~MssCFBuiltinJavaPackage() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinJavaPackage::expand( cfcore::MssCFGenContext* genContext ) {
		std::string ret;
		cfbam::ICFBamSchemaDefObj* manufacturingSchema = dynamic_cast<CFBamCustMssCFGenContext*>( genContext )->getManufacturingSchema();
		cflib::ICFLibAnyObj* projectDef = CFBamCustMssCFAnyObj::getProject( manufacturingSchema );
		if( projectDef != NULL ) {
			ret = CFBamCustMssCFAnyObj::getModelName( projectDef );
		}
		if( ret.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( ret );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackage::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackage" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackage::MssCFBuiltinGenPackage( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackage::~MssCFBuiltinGenPackage() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackage::expand( cfcore::MssCFGenContext* genContext ) {
		std::string ret;
		cfcore::MssCFGenContext* fileContext = genContext->getGenFileContext();
		if( fileContext != NULL ) {
			cflib::ICFLibAnyObj* tmp = dynamic_cast<cflib::ICFLibAnyObj*>( fileContext->getGenDef() );
			if( tmp != NULL ) {
				cflib::ICFLibAnyObj* pkg = CFBamCustMssCFAnyObj::getPackage( tmp );
				if( pkg != NULL ) {
					ret = CFBamCustMssCFAnyObj::getModelName( pkg );
				}
			}
		}
		if( ret.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( ret );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenBasePackage::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinGenBasePackage" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenBasePackage::MssCFBuiltinGenBasePackage( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenBasePackage::~MssCFBuiltinGenBasePackage() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenBasePackage::expand( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_Dot( "." );
		std::string ret;
		cfcore::MssCFGenContext* fileContext = genContext->getGenFileContext();
		if( fileContext != NULL ) {
			cflib::ICFLibAnyObj* tmp = dynamic_cast<cflib::ICFLibAnyObj*>( fileContext->getGenDef() );
			if( tmp != NULL ) {
				cflib::ICFLibAnyObj* pkg = CFBamCustMssCFAnyObj::getPackage( tmp );
				if( pkg != NULL ) {
					std::string pkgName = CFBamCustMssCFAnyObj::getModelName( pkg );
					if( pkgName.length() > 0 ) {
						std::string basePackageName = genContext->getGenBasePackageName();
						if( basePackageName.length() > 0 ) {
							ret = pkgName + S_Dot + basePackageName;
						}
						else {
							ret = pkgName;
						}
					}
				}
			}
		}
		if( ret.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( ret );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenFullPackage::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinGenFullPackage" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenFullPackage::MssCFBuiltinGenFullPackage( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenFullPackage::~MssCFBuiltinGenFullPackage() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenFullPackage::expand( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand() " );
		static const std::string S_ModelName( "getModelName()" );
		static const std::string S_FullName( "getFullName()" );
		static const std::string S_Dot( "." );
		std::string ret;
		cflib::ICFLibAnyObj* genDef;
		cfcore::MssCFGenContext* fileContext = genContext->getGenFileContext();
		if( fileContext != NULL ) {
			genDef = dynamic_cast<cflib::ICFLibAnyObj*>( fileContext->getGenDef() );
		}
		else {
			genDef = dynamic_cast<cflib::ICFLibAnyObj*>( genContext->getGenDef() );
		}
		cflib::ICFLibAnyObj* pkg = CFBamCustMssCFAnyObj::getPackage( genDef );
		if( pkg != NULL ) {
			std::string pkgName = CFBamCustMssCFAnyObj::getFullName( pkg );
			if( pkgName.length() <= 0 ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 0, S_FullName );
			}
			std::string basePackageName = genContext->getGenBasePackageName();
			if( basePackageName.length() > 0 ) {
				std::string subPackageName = genContext->getGenSubPackageName();
				if( subPackageName.length() > 0 ) {
					ret = pkgName + S_Dot + basePackageName + S_Dot + subPackageName;
				}
				else {
					ret = pkgName + S_Dot + basePackageName;
				}
			}
			else {
				ret = pkgName;
			}
		}
		if( ret.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( ret );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageDir::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageDir" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageDir::MssCFBuiltinGenPackageDir( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageDir::~MssCFBuiltinGenPackageDir() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageDir::expand( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_Dot( "." );
		std::string ret;
		cfcore::MssCFGenContext* fileContext = genContext->getGenFileContext();
		if( fileContext != NULL ) {
			std::string basePackageName = genContext->getGenBasePackageName();
			if( basePackageName.length() > 0 ) {
				std::string subPackageName = genContext->getGenSubPackageName();
				if( subPackageName.length() > 0 ) {
					std::string sourceBundle = genContext->getSourceBundle();
					if( sourceBundle.length() > 0 ) {
						ret = sourceBundle + S_Dot + basePackageName + S_Dot + subPackageName;
						std::replace( ret.begin(), ret.end(), '.', '/' );
					}
					else {
						ret = basePackageName + S_Dot + subPackageName;
						std::replace( ret.begin(), ret.end(), '.', '/' );
					}
				}
				else {
					std::string sourceBundle = genContext->getSourceBundle();
					if( sourceBundle.length() > 0 ) {
						ret = sourceBundle + S_Dot + basePackageName;
						std::replace( ret.begin(), ret.end(), '.', '/' );
					}
					else {
						ret = basePackageName;
						std::replace( ret.begin(), ret.end(), '.', '/' );
					}
				}
			}
		}
		if( ret.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( ret );
	}

	const std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageFullDir::CLASS_NAME( "CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageFullDir" );

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageFullDir::MssCFBuiltinGenPackageFullDir( cfcore::ICFGenKbSchemaObj* schema )
	: CFGenKbGelBuiltinObj( schema )
	{
	}

	CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageFullDir::~MssCFBuiltinGenPackageFullDir() {
	}

	std::string CFBamCustMssCFGelCompiler::MssCFBuiltinGenPackageFullDir::expand( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_Dot( "." );
		static const std::string S_FileSep( "/" );
		std::string ret;
		cfcore::MssCFGenContext* fileContext = genContext->getGenFileContext();
		if( fileContext != NULL ) {
			cflib::ICFLibAnyObj* tmp = dynamic_cast<cflib::ICFLibAnyObj*>( fileContext->getGenDef() );
			if( tmp != NULL ) {
				cflib::ICFLibAnyObj* pkg = CFBamCustMssCFAnyObj::getPackage( tmp );
				if( pkg != NULL ) {
					std::string pkgDir = CFBamCustMssCFAnyObj::getModelName( pkg );
					if( pkgDir.length() > 0 ) {
						if( tmp->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
							std::string tmpObjName = tmp->getObjName();
							std::for_each( tmpObjName.begin(), tmpObjName.end(), [](char & c) {
								c = ::tolower(c);
							});
							pkgDir = ret + S_Dot + tmpObjName;
						}
						std::string rootGenDir = genContext->getRootGenDir();
						ret = rootGenDir + S_FileSep + pkgDir;
					}
				}
			}
		}
		if( ret.length() > 0 ) {
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}
		return( ret );
	}

}
