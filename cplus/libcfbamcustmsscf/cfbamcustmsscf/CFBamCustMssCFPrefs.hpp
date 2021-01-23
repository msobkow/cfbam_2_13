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
#include <msscf/MssCFPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>

namespace cfbam {

	class CFBamCustMssCFPrefs {

		public:
			static const std::string CLASS_NAME;
			static const std::string DIRSEP;
			static const std::string DOLLAR;
			static const std::string FILENAME_MSSCFRC;
			static const std::string ENVAR_USER;
			static const std::string ENVAR_HOME;
			static const std::string MSSCF_HOME;
			static const std::string PROPNAME_ROOTGENDIR;
			static const std::string PROPNAME_MODELDIR;
			static const std::string PROPNAME_CARTRIDGEDIR;

		protected:
			std::string* UserName;
			std::string* HomeDirName;
			std::string* MssCFHome;
			std::string* RootGenDir;
			std::vector<std::string> ModelPath;
			std::vector<std::string> CartridgePath;

		public:
			CFBamCustMssCFPrefs();
			~CFBamCustMssCFPrefs();

			const std::string& getUserName( cflib::ICFLibMessageLog* log );
			const std::string& getHomeDirName( cflib::ICFLibMessageLog* log );
			const std::string& getMssCFHome( cflib::ICFLibMessageLog* log );

			const std::string& getRootGenDir( cflib::ICFLibMessageLog* log );
			void setRootGenDir( const std::string& value );

			const std::vector<std::string>& getModelPath();
			void addModelPath( const std::string& value );

			const std::vector<std::string>& getCartridgePath();
			void addCartridgePath( const std::string& value );

			void reset( cflib::ICFLibMessageLog* log );

			bool loadPreferences( cflib::ICFLibMessageLog* log );
			bool savePreferences( cflib::ICFLibMessageLog* log );
	};
}
