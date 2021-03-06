// Description: Java 11 Instance Edit Object interface for CFBam DoubleDef.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
 *	
 *		This file is part of MSS Code Factory.
 *	
 *		MSS Code Factory is available under dual commercial license from Mark Stephen
 *		Sobkow, or under the terms of the GNU General Public License, Version 3
 *		or later.
 *	
 *	    MSS Code Factory is free software: you can redistribute it and/or modify
 *	    it under the terms of the GNU General Public License as published by
 *	    the Free Software Foundation, either version 3 of the License, or
 *	    (at your option) any later version.
 *	
 *	    MSS Code Factory is distributed in the hope that it will be useful,
 *	    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	    GNU General Public License for more details.
 *	
 *	    You should have received a copy of the GNU General Public License
 *	    along with MSS Code Factory.  If not, see <https://www.gnu.org/licenses/>.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

package org.msscf.msscf.v2_13.cfbam.CFBamObj;

import java.math.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;
import org.msscf.msscf.v2_13.cfsec.CFSecObj.*;
import org.msscf.msscf.v2_13.cfint.CFIntObj.*;
import org.msscf.msscf.v2_13.cfbam.CFBam.*;

public interface ICFBamDoubleDefEditObj
	extends ICFBamDoubleDefObj,
		ICFBamAtomEditObj
{
	/*
	 *	Get the original for this edition cast as the specified type.
	 *
	 *	@return The original, non-modifiable instance cast to a ICFBamDoubleDefObj.
	 */
	ICFBamDoubleDefObj getOrigAsDoubleDef();

	/**
	 *	Get the optional Double attribute InitValue.
	 *
	 *	@return	The Double value of the attribute InitValue.
	 */
	Double getOptionalInitValue();

	/**
	 *	Set the optional Double attribute InitValue.
	 *
	 *	@param	value	the Double value of the attribute InitValue.
	 */
	void setOptionalInitValue( Double value );

	/**
	 *	Get the optional Double attribute MinValue.
	 *
	 *	@return	The Double value of the attribute MinValue.
	 */
	Double getOptionalMinValue();

	/**
	 *	Set the optional Double attribute MinValue.
	 *
	 *	@param	value	the Double value of the attribute MinValue.
	 */
	void setOptionalMinValue( Double value );

	/**
	 *	Get the optional Double attribute MaxValue.
	 *
	 *	@return	The Double value of the attribute MaxValue.
	 */
	Double getOptionalMaxValue();

	/**
	 *	Set the optional Double attribute MaxValue.
	 *
	 *	@param	value	the Double value of the attribute MaxValue.
	 */
	void setOptionalMaxValue( Double value );
}
