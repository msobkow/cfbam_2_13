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
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <xercesc/sax2/Attributes.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoader.hpp>

namespace cfbam {

	class CFBamCustXmlLoaderSchemaRefHandler
	: public cflib::CFLibXmlCoreElementHandler
	{
	public:
		const static std::string CLASS_NAME;
		const static std::string S_True;
		const static std::string S_False;
		const static std::string S_Yes;
		const static std::string S_No;
		const static std::string S_0;
		const static std::string S_1;
		CFBamCustXmlLoaderSchemaRefHandler( cfbam::CFBamCustXmlLoader* saxLoader );
		virtual ~CFBamCustXmlLoaderSchemaRefHandler();

		virtual void startElement (
			const XMLCh* const uri,
			const XMLCh* const localname,
			const XMLCh* const qname,
			const xercesc::Attributes& attrs );

		virtual void endElement (
			const XMLCh* const uri,
			const XMLCh* const localname,
			const XMLCh* const qname );

	protected:
		void importMergeSchema( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeSchemaTables( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeSchemaTypes( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeSchemaTableColumns( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeSchemaTableIndexes( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		cfbam::ICFBamIndexObj* importMergeIndex( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamIndexObj* srcIndex );
		void importMergeSchemaTableResolvePrimaryIndexes( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeSchemaTableResolveLookupIndexes( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeSchemaTableRelations( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		cfbam::ICFBamRelationObj* importMergeRelation( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamRelationObj* srcRelation );
		void importMergeSchemaTableResolveNarrowedRelations( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeSchemaTableTableChains( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeTableChains( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamTableObj* srcTable );
		void importMergeSchemaTableRelationPopDeps( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeRelationPopDeps( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamRelationObj* srcRelation );
		void importMergeSchemaTableTableClearDeps( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeTableClearDeps( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamTableObj* srcTable );
		void importMergeSchemaTableTableDelDeps( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		void importMergeTableDelDeps( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamTableObj* srcTable );
		void importMergeSchemaTableServerMethods( cfbam::ICFBamSchemaDefObj* dst, cfbam::ICFBamSchemaDefObj* src );
		cfbam::ICFBamServerMethodObj* importMergeServerMethod( cfbam::ICFBamTableObj* origDstTable, cfbam::ICFBamServerMethodObj* srcServerMethod );
	};
}
