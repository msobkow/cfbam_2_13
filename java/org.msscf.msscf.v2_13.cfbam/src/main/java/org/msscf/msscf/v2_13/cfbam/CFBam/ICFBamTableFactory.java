
// Description: Java 11 Factory interface for Table.

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

package org.msscf.msscf.v2_13.cfbam.CFBam;

import java.lang.reflect.*;
import java.net.*;
import java.rmi.*;
import java.sql.*;
import java.text.*;
import java.util.*;
import org.msscf.msscf.v2_13.cflib.CFLib.*;
import org.msscf.msscf.v2_13.cfsec.CFSec.*;
import org.msscf.msscf.v2_13.cfint.CFInt.*;

/*
 *	CFBamTableFactory interface for Table
 */
public interface ICFBamTableFactory
{

	/**
	 *	Allocate a SchemaDefIdx key over Table instances.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableBySchemaDefIdxKey newSchemaDefIdxKey();

	/**
	 *	Allocate a DefSchemaIdx key over Table instances.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableByDefSchemaIdxKey newDefSchemaIdxKey();

	/**
	 *	Allocate a UNameIdx key over Table instances.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableByUNameIdxKey newUNameIdxKey();

	/**
	 *	Allocate a SchemaCdIdx key over Table instances.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableBySchemaCdIdxKey newSchemaCdIdxKey();

	/**
	 *	Allocate a PrimaryIndexIdx key over Table instances.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableByPrimaryIndexIdxKey newPrimaryIndexIdxKey();

	/**
	 *	Allocate a LookupIndexIdx key over Table instances.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableByLookupIndexIdxKey newLookupIndexIdxKey();

	/**
	 *	Allocate a AltIndexIdx key over Table instances.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableByAltIndexIdxKey newAltIndexIdxKey();

	/**
	 *	Allocate a QualTableIdx key over Table instances.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableByQualTableIdxKey newQualTableIdxKey();

	/**
	 *	Allocate a Table instance buffer.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableBuff newBuff();

	/**
	 *	Allocate a Table history instance buffer.
	 *
	 *	@return	The new instance.
	 */
	CFBamTableHBuff newHBuff();

}
