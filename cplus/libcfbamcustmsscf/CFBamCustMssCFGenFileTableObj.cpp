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

#include <cfbamcustmsscf/CFBamCustMssCFGenFileObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenFileTableObj.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenFileTableObj::CLASS_NAME( "CFBamCustMssCFFileTableObj" );

	CFBamCustMssCFGenFileTableObj::CFBamCustMssCFGenFileTableObj()
	: cfcore::MssCFGenFileTableObj()
	{
	}

	CFBamCustMssCFGenFileTableObj::CFBamCustMssCFGenFileTableObj( cfcore::MssCFEngine* engine )
	: cfcore::MssCFGenFileTableObj( engine )
	{
	}

	CFBamCustMssCFGenFileTableObj::~CFBamCustMssCFGenFileTableObj() {
	}

	cfcore::ICFGenKbGenFileObj* CFBamCustMssCFGenFileTableObj::newInstance() {
		CFBamCustMssCFGenFileObj* obj = new CFBamCustMssCFGenFileObj( dynamic_cast<cfcore::MssCFEngine*>( schema ) );
		return( dynamic_cast<cfcore::MssCFGenFileObj*>( obj ) );
	}
}
