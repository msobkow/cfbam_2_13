#pragma once

// Description: C++18 XML Custom SAX XML Parser for Business Application Model 2.13 files

/*
 *	MSS Code Factory CFBam 2.13 CustXmlLoader
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

namespace cfsec {
	class ICFSecClusterObj;
	class ICFSecTenantObj;
	class ICFSecSecUserObj;
	class ICFSecSecSessionObj;
}

namespace cfbam {

	class CFBamCustXmlLoader;
	class CFBamCustMssCFEngine;

	class CFBamCustXmlLdr
	{
	protected:
		cflib::ICFLibMessageLog* log;
		cfbam::CFBamCustXmlLoader* saxLoader;
		std::string* clusterName;
		cfsec::ICFSecClusterObj* clusterObj;
		std::string* tenantName;
		cfsec::ICFSecTenantObj* tenantObj;
		std::string* secUserName;
		cfsec::ICFSecSecUserObj* secUserObj;
		cfsec::ICFSecSecSessionObj* secSessionObj;
		cfbam::CFBamCustMssCFEngine* bamEngine;

	public:
		const static std::string CLASS_NAME;
		const static std::string S_SYSTEM;
		const static std::string S_UnhandledException;

		CFBamCustXmlLdr();
		virtual ~CFBamCustXmlLdr();

		CFBamCustXmlLdr( cfbam::CFBamCustMssCFEngine* engine, cflib::ICFLibMessageLog* messageLog );


		void setSaxLoader( cfbam::CFBamCustXmlLoader* value );
		CFBamCustXmlLoader* getSaxLoader();


		void setClusterName( const std::string& value );
		const std::string& getClusterName() const;
		cfsec::ICFSecClusterObj* getClusterObj();


		void setTenantName( const std::string& value );
		const std::string& getTenantName() const;
		cfsec::ICFSecTenantObj* getTenantObj();


		void setSecUserName( const std::string& value );
		const std::string& getSecUserName() const;
		cfsec::ICFSecSecUserObj* getSecUserObj();


		cfsec::ICFSecSecSessionObj* getSecSessionObj();


		static void applyLoaderOptions( cfbam::CFBamCustXmlLoader* loader, const std::string& loaderOptions );

		virtual void evaluateRemainingArgs( size_t argc, char* argv[], size_t consumed );

	};
}
