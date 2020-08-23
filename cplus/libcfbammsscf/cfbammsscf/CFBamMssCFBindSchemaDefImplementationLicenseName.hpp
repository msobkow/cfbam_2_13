
// Description: C++18 MssCF Binding for SchemaDef Column ImplementationLicenseName.

/*
 *	com.github.msobkow.CFBam
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
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>
#include <msscf/MssCFPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>

namespace cfbam {

	/**
	 *	CFBamMssCFBindSchemaDefImplementationLicenseName binds SchemaDef.ImplementationLicenseName
	 *	as an instance of MssCFGenBindObj.
	 */
	class CFBamMssCFBindSchemaDefImplementationLicenseName : public cfcore::MssCFGenBindObj
	{
		public:
			static const std::string CLASS_NAME;

			CFBamMssCFBindSchemaDefImplementationLicenseName();
			CFBamMssCFBindSchemaDefImplementationLicenseName( cfcore::MssCFEngine* argEngine );
			virtual ~CFBamMssCFBindSchemaDefImplementationLicenseName();

			virtual std::string expandBody( cfcore::MssCFGenContext* genContext );
	};
}
