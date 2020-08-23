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
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <msscf/MssCFPublic.hpp>

namespace cfbam {

	class CFBamCustMssCFEngine;

	class CFBamCustMssCFGelCompiler : public cfcore::MssCFGelCompiler {

		public:
			static const std::string CLASS_NAME;
			static const std::string _BUILTIN_PROJECTNAME;
			static const std::string _BUILTIN_JAVAPACKAGE;
			static const std::string _BUILTIN_JAVADEFPACKAGE;
			static const std::string _BUILTIN_GENPACKAGE;
			static const std::string _BUILTIN_GENBASEPACKAGE;
			static const std::string _BUILTIN_GENFULLPACKAGE;
			static const std::string _BUILTIN_GENPACKAGEDIR;
			static const std::string _BUILTIN_GENPACKAGEFULLDIR;
			static const std::string _BUILTIN_CODEFACTORYVERSION;

		protected:
			static std::string codeFactoryVersion;

		public:
			CFBamCustMssCFGelCompiler( cfbam::CFBamCustMssCFEngine* engine );
			virtual ~CFBamCustMssCFGelCompiler();

			static void setCodeFactoryVersion( const std::string& value );
			static const std::string& getCodeFactoryVersion();

		protected:

			virtual cfcore::ICFGenKbGelInstructionObj* compileMacro( const std::string& macro );

			class MssCFBuiltinCodeFactoryVersion
			: public cfcore::CFGenKbGelBuiltinObj
			{
				public:
					static const std::string CLASS_NAME;
					MssCFBuiltinCodeFactoryVersion( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinCodeFactoryVersion();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};

			class MssCFBuiltinProjectName
			: public cfcore::CFGenKbGelBuiltinObj
			{
				public:
					static const std::string CLASS_NAME;
					MssCFBuiltinProjectName( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinProjectName();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};

			class MssCFBuiltinDefProjectName
			: public cfcore::CFGenKbGelBuiltinObj
			{
					static const std::string CLASS_NAME;
					MssCFBuiltinDefProjectName( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinDefProjectName();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};

			class MssCFBuiltinJavaDefPackage
			: public cfcore::CFGenKbGelBuiltinObj
			{
				public:
					static const std::string CLASS_NAME;
					MssCFBuiltinJavaDefPackage( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinJavaDefPackage();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};

			class MssCFBuiltinJavaPackage
			: public cfcore::CFGenKbGelBuiltinObj
			{
				public:
					static const std::string CLASS_NAME;
					MssCFBuiltinJavaPackage( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinJavaPackage();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenPackage
			: public cfcore::CFGenKbGelBuiltinObj
			{
				public:
					static const std::string CLASS_NAME;
					MssCFBuiltinGenPackage( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinGenPackage();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenBasePackage
			: public cfcore::CFGenKbGelBuiltinObj
			{
				public:
					static const std::string CLASS_NAME;
					MssCFBuiltinGenBasePackage( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinGenBasePackage();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenFullPackage
			: public cfcore::CFGenKbGelBuiltinObj
			{
				public:
					static const std::string CLASS_NAME;
					MssCFBuiltinGenFullPackage( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinGenFullPackage();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenPackageDir
			: public cfcore::CFGenKbGelBuiltinObj
			{
				public:
					static const std::string CLASS_NAME;
					MssCFBuiltinGenPackageDir( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinGenPackageDir();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};

			class MssCFBuiltinGenPackageFullDir
			: public cfcore::CFGenKbGelBuiltinObj
			{
				public:
					static const std::string CLASS_NAME;
					MssCFBuiltinGenPackageFullDir( cfcore::ICFGenKbSchemaObj* schema );
					virtual ~MssCFBuiltinGenPackageFullDir();
					virtual std::string expand( cfcore::MssCFGenContext* genContext );
			};
	};
}
