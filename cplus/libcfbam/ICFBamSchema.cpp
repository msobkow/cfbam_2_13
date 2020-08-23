// Description: C++18 interface implementation for a CFBam schema.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */


#include <uuid/uuid.h>

#include <array>
#include <cassert>
#include <cstddef>
#include <chrono>
#include <ctime>
#include <functional>
#include <list>
#include <string>

#include <cflib/ICFLibPublic.hpp>

#include <cfsec/ICFSecSchema.hpp>
#include <cfint/ICFIntSchema.hpp>


#include <cflib/ICFLibPublic.hpp>

using namespace std;


#include <cfsec/ICFSecSchema.hpp>
#include <cfint/ICFIntSchema.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	const std::string ICFBamSchema::CLASS_NAME( "ICFBamSchema" );

	ICFBamSchema::ICFBamSchema()
	: cfsec::ICFSecSchema(),
	  cfint::ICFIntSchema()
	{
	}

	ICFBamSchema::~ICFBamSchema() {
	}

	ICFBamSchema::LoaderBehaviourEnum* ICFBamSchema::parseLoaderBehaviourEnum( const std::string* value ) {
		ICFBamSchema::LoaderBehaviourEnum* retval = parseLoaderBehaviourEnum( CLASS_NAME, value );
		return( retval );
	}

	ICFBamSchema::LoaderBehaviourEnum* ICFBamSchema::parseLoaderBehaviourEnum( const std::string& fieldOrClassName, const std::string* value ) {
		static std::map<std::string,ICFBamSchema::LoaderBehaviourEnum>* lookupLoaderBehaviourEnum = NULL;
		static const std::string S_ProcName( "parseLoaderBehaviourEnum" );
		static const std::string S_Value( "value" );
		static const std::string S_Msg( "Could not resolve key" );
		if( lookupLoaderBehaviourEnum == NULL ) {
			std::map<std::string,ICFBamSchema::LoaderBehaviourEnum>* newMap = new std::map<std::string,ICFBamSchema::LoaderBehaviourEnum>();
			newMap->insert( std::map<std::string,ICFBamSchema::LoaderBehaviourEnum>::value_type( std::string( "Insert" ), ICFBamSchema::LoaderBehaviourEnum::Insert ) );
			newMap->insert( std::map<std::string,ICFBamSchema::LoaderBehaviourEnum>::value_type( std::string( "Update" ), ICFBamSchema::LoaderBehaviourEnum::Update ) );
			newMap->insert( std::map<std::string,ICFBamSchema::LoaderBehaviourEnum>::value_type( std::string( "Replace" ), ICFBamSchema::LoaderBehaviourEnum::Replace ) );
			lookupLoaderBehaviourEnum = newMap;
		}
		ICFBamSchema::LoaderBehaviourEnum* retval;
		if( ( value == NULL ) || ( value->length() <= 0 ) ) {
			retval = NULL;
		}
		else {
			std::map<std::string,ICFBamSchema::LoaderBehaviourEnum>::iterator search = lookupLoaderBehaviourEnum->find( *value );
			if( search == lookupLoaderBehaviourEnum->end() ) {
				throw cflib::CFLibInvalidArgumentException( fieldOrClassName,
					S_ProcName,
					1,
					S_Value,
					S_Msg );
			}
			retval = &search->second;
		}
		return( retval );
	}

	const std::string* ICFBamSchema::toLoaderBehaviourEnumString( const ICFBamSchema::LoaderBehaviourEnum value ) {
		static std::map<ICFBamSchema::LoaderBehaviourEnum,std::string>* tostringLoaderBehaviourEnum = NULL;
		static const std::string S_ProcName( "toLoaderBehaviourEnumString" );
		static const std::string S_Value( "value" );
		static const std::string S_Msg( "Could not resolve LoaderBehaviourEnum value" );
		if( tostringLoaderBehaviourEnum == NULL ) {
			std::map<LoaderBehaviourEnum,std::string>* newMap = new std::map<LoaderBehaviourEnum,std::string>();
			newMap->insert( std::map<ICFBamSchema::LoaderBehaviourEnum,std::string>::value_type( ICFBamSchema::LoaderBehaviourEnum::Insert, std::string( "Insert" ) ) );
			newMap->insert( std::map<ICFBamSchema::LoaderBehaviourEnum,std::string>::value_type( ICFBamSchema::LoaderBehaviourEnum::Update, std::string( "Update" ) ) );
			newMap->insert( std::map<ICFBamSchema::LoaderBehaviourEnum,std::string>::value_type( ICFBamSchema::LoaderBehaviourEnum::Replace, std::string( "Replace" ) ) );
			tostringLoaderBehaviourEnum = newMap;
			newMap = NULL;
		}
		const std::string* retval;
		std::map<ICFBamSchema::LoaderBehaviourEnum,std::string>::iterator search = tostringLoaderBehaviourEnum->find( value );
		if( search == tostringLoaderBehaviourEnum->end() ) {
			throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_Value,
				S_Msg );
		}
		retval = &(search->second);
		return( retval );
	}

	const ICFBamSchema::LoaderBehaviourEnum ICFBamSchema::ordinalToLoaderBehaviourEnum( const std::string& fieldOrClassName, const int16_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::LoaderBehaviourEnum* retval = ordinalToLoaderBehaviourEnum( fieldOrClassName, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::LoaderBehaviourEnum* ICFBamSchema::ordinalToLoaderBehaviourEnum( const std::string& fieldOrClassName, const int16_t* value ) {
		const ICFBamSchema::LoaderBehaviourEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			int32_t ivalue = *value;
			retval = ordinalToLoaderBehaviourEnum( fieldOrClassName, &ivalue );
		}
		return( retval );
	}

	const ICFBamSchema::LoaderBehaviourEnum ICFBamSchema::ordinalToLoaderBehaviourEnum( const int16_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::LoaderBehaviourEnum* retval = ordinalToLoaderBehaviourEnum( CLASS_NAME, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::LoaderBehaviourEnum* ICFBamSchema::ordinalToLoaderBehaviourEnum( const int16_t* value ) {
		const ICFBamSchema::LoaderBehaviourEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			int32_t ivalue = *value;
			retval = ordinalToLoaderBehaviourEnum( CLASS_NAME, &ivalue );
		}
		return( retval );
	}

	const ICFBamSchema::LoaderBehaviourEnum ICFBamSchema::ordinalToLoaderBehaviourEnum( const int32_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::LoaderBehaviourEnum* retval = ordinalToLoaderBehaviourEnum( CLASS_NAME, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::LoaderBehaviourEnum ICFBamSchema::ordinalToLoaderBehaviourEnum( const std::string& fieldOrClassName, const int32_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::LoaderBehaviourEnum* retval = ordinalToLoaderBehaviourEnum( fieldOrClassName, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::LoaderBehaviourEnum* ICFBamSchema::ordinalToLoaderBehaviourEnum( const int32_t* value ) {
	const ICFBamSchema::LoaderBehaviourEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			retval = ordinalToLoaderBehaviourEnum( CLASS_NAME, value );
		}
		return( retval );
	}

	const ICFBamSchema::LoaderBehaviourEnum* ICFBamSchema::ordinalToLoaderBehaviourEnum( const std::string& fieldOrClassName, const int32_t* value ) {
		static std::map<const int32_t,ICFBamSchema::LoaderBehaviourEnum>* lookupOrdinalLoaderBehaviourEnum = NULL;
		static const std::string S_ProcName( "ordinalToLoaderBehaviourEnum" );
		static const std::string S_Value( "value" );
		static const std::string S_Msg( "Could not resolve key" );
		if( lookupOrdinalLoaderBehaviourEnum == NULL ) {
			std::map<const int32_t,ICFBamSchema::LoaderBehaviourEnum>* newMap = new std::map<const int32_t,ICFBamSchema::LoaderBehaviourEnum>();
			newMap->insert( std::map<int32_t,ICFBamSchema::LoaderBehaviourEnum>::value_type( (int32_t)ICFBamSchema::LoaderBehaviourEnum::Insert, ICFBamSchema::LoaderBehaviourEnum::Insert ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::LoaderBehaviourEnum>::value_type( (int32_t)ICFBamSchema::LoaderBehaviourEnum::Update, ICFBamSchema::LoaderBehaviourEnum::Update ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::LoaderBehaviourEnum>::value_type( (int32_t)ICFBamSchema::LoaderBehaviourEnum::Replace, ICFBamSchema::LoaderBehaviourEnum::Replace ) );
			lookupOrdinalLoaderBehaviourEnum = newMap;
		}
		const ICFBamSchema::LoaderBehaviourEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			std::map<const int32_t,ICFBamSchema::LoaderBehaviourEnum>::iterator search = lookupOrdinalLoaderBehaviourEnum->find( *value );
			if( search == lookupOrdinalLoaderBehaviourEnum->end() ) {
				throw cflib::CFLibInvalidArgumentException( fieldOrClassName,
					S_ProcName,
					1,
					S_Value,
					S_Msg );
			}
			retval = &search->second;
		}
		return( retval );
	}

	ICFBamSchema::RelationTypeEnum* ICFBamSchema::parseRelationTypeEnum( const std::string* value ) {
		ICFBamSchema::RelationTypeEnum* retval = parseRelationTypeEnum( CLASS_NAME, value );
		return( retval );
	}

	ICFBamSchema::RelationTypeEnum* ICFBamSchema::parseRelationTypeEnum( const std::string& fieldOrClassName, const std::string* value ) {
		static std::map<std::string,ICFBamSchema::RelationTypeEnum>* lookupRelationTypeEnum = NULL;
		static const std::string S_ProcName( "parseRelationTypeEnum" );
		static const std::string S_Value( "value" );
		static const std::string S_Msg( "Could not resolve key" );
		if( lookupRelationTypeEnum == NULL ) {
			std::map<std::string,ICFBamSchema::RelationTypeEnum>* newMap = new std::map<std::string,ICFBamSchema::RelationTypeEnum>();
			newMap->insert( std::map<std::string,ICFBamSchema::RelationTypeEnum>::value_type( std::string( "Unknown" ), ICFBamSchema::RelationTypeEnum::Unknown ) );
			newMap->insert( std::map<std::string,ICFBamSchema::RelationTypeEnum>::value_type( std::string( "Lookup" ), ICFBamSchema::RelationTypeEnum::Lookup ) );
			newMap->insert( std::map<std::string,ICFBamSchema::RelationTypeEnum>::value_type( std::string( "Superclass" ), ICFBamSchema::RelationTypeEnum::Superclass ) );
			newMap->insert( std::map<std::string,ICFBamSchema::RelationTypeEnum>::value_type( std::string( "Container" ), ICFBamSchema::RelationTypeEnum::Container ) );
			newMap->insert( std::map<std::string,ICFBamSchema::RelationTypeEnum>::value_type( std::string( "Components" ), ICFBamSchema::RelationTypeEnum::Components ) );
			newMap->insert( std::map<std::string,ICFBamSchema::RelationTypeEnum>::value_type( std::string( "Owner" ), ICFBamSchema::RelationTypeEnum::Owner ) );
			newMap->insert( std::map<std::string,ICFBamSchema::RelationTypeEnum>::value_type( std::string( "Parent" ), ICFBamSchema::RelationTypeEnum::Parent ) );
			newMap->insert( std::map<std::string,ICFBamSchema::RelationTypeEnum>::value_type( std::string( "Children" ), ICFBamSchema::RelationTypeEnum::Children ) );
			lookupRelationTypeEnum = newMap;
		}
		ICFBamSchema::RelationTypeEnum* retval;
		if( ( value == NULL ) || ( value->length() <= 0 ) ) {
			retval = NULL;
		}
		else {
			std::map<std::string,ICFBamSchema::RelationTypeEnum>::iterator search = lookupRelationTypeEnum->find( *value );
			if( search == lookupRelationTypeEnum->end() ) {
				throw cflib::CFLibInvalidArgumentException( fieldOrClassName,
					S_ProcName,
					1,
					S_Value,
					S_Msg );
			}
			retval = &search->second;
		}
		return( retval );
	}

	const std::string* ICFBamSchema::toRelationTypeEnumString( const ICFBamSchema::RelationTypeEnum value ) {
		static std::map<ICFBamSchema::RelationTypeEnum,std::string>* tostringRelationTypeEnum = NULL;
		static const std::string S_ProcName( "toRelationTypeEnumString" );
		static const std::string S_Value( "value" );
		static const std::string S_Msg( "Could not resolve RelationTypeEnum value" );
		if( tostringRelationTypeEnum == NULL ) {
			std::map<RelationTypeEnum,std::string>* newMap = new std::map<RelationTypeEnum,std::string>();
			newMap->insert( std::map<ICFBamSchema::RelationTypeEnum,std::string>::value_type( ICFBamSchema::RelationTypeEnum::Unknown, std::string( "Unknown" ) ) );
			newMap->insert( std::map<ICFBamSchema::RelationTypeEnum,std::string>::value_type( ICFBamSchema::RelationTypeEnum::Lookup, std::string( "Lookup" ) ) );
			newMap->insert( std::map<ICFBamSchema::RelationTypeEnum,std::string>::value_type( ICFBamSchema::RelationTypeEnum::Superclass, std::string( "Superclass" ) ) );
			newMap->insert( std::map<ICFBamSchema::RelationTypeEnum,std::string>::value_type( ICFBamSchema::RelationTypeEnum::Container, std::string( "Container" ) ) );
			newMap->insert( std::map<ICFBamSchema::RelationTypeEnum,std::string>::value_type( ICFBamSchema::RelationTypeEnum::Components, std::string( "Components" ) ) );
			newMap->insert( std::map<ICFBamSchema::RelationTypeEnum,std::string>::value_type( ICFBamSchema::RelationTypeEnum::Owner, std::string( "Owner" ) ) );
			newMap->insert( std::map<ICFBamSchema::RelationTypeEnum,std::string>::value_type( ICFBamSchema::RelationTypeEnum::Parent, std::string( "Parent" ) ) );
			newMap->insert( std::map<ICFBamSchema::RelationTypeEnum,std::string>::value_type( ICFBamSchema::RelationTypeEnum::Children, std::string( "Children" ) ) );
			tostringRelationTypeEnum = newMap;
			newMap = NULL;
		}
		const std::string* retval;
		std::map<ICFBamSchema::RelationTypeEnum,std::string>::iterator search = tostringRelationTypeEnum->find( value );
		if( search == tostringRelationTypeEnum->end() ) {
			throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_Value,
				S_Msg );
		}
		retval = &(search->second);
		return( retval );
	}

	const ICFBamSchema::RelationTypeEnum ICFBamSchema::ordinalToRelationTypeEnum( const std::string& fieldOrClassName, const int16_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::RelationTypeEnum* retval = ordinalToRelationTypeEnum( fieldOrClassName, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::RelationTypeEnum* ICFBamSchema::ordinalToRelationTypeEnum( const std::string& fieldOrClassName, const int16_t* value ) {
		const ICFBamSchema::RelationTypeEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			int32_t ivalue = *value;
			retval = ordinalToRelationTypeEnum( fieldOrClassName, &ivalue );
		}
		return( retval );
	}

	const ICFBamSchema::RelationTypeEnum ICFBamSchema::ordinalToRelationTypeEnum( const int16_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::RelationTypeEnum* retval = ordinalToRelationTypeEnum( CLASS_NAME, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::RelationTypeEnum* ICFBamSchema::ordinalToRelationTypeEnum( const int16_t* value ) {
		const ICFBamSchema::RelationTypeEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			int32_t ivalue = *value;
			retval = ordinalToRelationTypeEnum( CLASS_NAME, &ivalue );
		}
		return( retval );
	}

	const ICFBamSchema::RelationTypeEnum ICFBamSchema::ordinalToRelationTypeEnum( const int32_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::RelationTypeEnum* retval = ordinalToRelationTypeEnum( CLASS_NAME, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::RelationTypeEnum ICFBamSchema::ordinalToRelationTypeEnum( const std::string& fieldOrClassName, const int32_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::RelationTypeEnum* retval = ordinalToRelationTypeEnum( fieldOrClassName, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::RelationTypeEnum* ICFBamSchema::ordinalToRelationTypeEnum( const int32_t* value ) {
	const ICFBamSchema::RelationTypeEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			retval = ordinalToRelationTypeEnum( CLASS_NAME, value );
		}
		return( retval );
	}

	const ICFBamSchema::RelationTypeEnum* ICFBamSchema::ordinalToRelationTypeEnum( const std::string& fieldOrClassName, const int32_t* value ) {
		static std::map<const int32_t,ICFBamSchema::RelationTypeEnum>* lookupOrdinalRelationTypeEnum = NULL;
		static const std::string S_ProcName( "ordinalToRelationTypeEnum" );
		static const std::string S_Value( "value" );
		static const std::string S_Msg( "Could not resolve key" );
		if( lookupOrdinalRelationTypeEnum == NULL ) {
			std::map<const int32_t,ICFBamSchema::RelationTypeEnum>* newMap = new std::map<const int32_t,ICFBamSchema::RelationTypeEnum>();
			newMap->insert( std::map<int32_t,ICFBamSchema::RelationTypeEnum>::value_type( (int32_t)ICFBamSchema::RelationTypeEnum::Unknown, ICFBamSchema::RelationTypeEnum::Unknown ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::RelationTypeEnum>::value_type( (int32_t)ICFBamSchema::RelationTypeEnum::Lookup, ICFBamSchema::RelationTypeEnum::Lookup ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::RelationTypeEnum>::value_type( (int32_t)ICFBamSchema::RelationTypeEnum::Superclass, ICFBamSchema::RelationTypeEnum::Superclass ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::RelationTypeEnum>::value_type( (int32_t)ICFBamSchema::RelationTypeEnum::Container, ICFBamSchema::RelationTypeEnum::Container ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::RelationTypeEnum>::value_type( (int32_t)ICFBamSchema::RelationTypeEnum::Components, ICFBamSchema::RelationTypeEnum::Components ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::RelationTypeEnum>::value_type( (int32_t)ICFBamSchema::RelationTypeEnum::Owner, ICFBamSchema::RelationTypeEnum::Owner ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::RelationTypeEnum>::value_type( (int32_t)ICFBamSchema::RelationTypeEnum::Parent, ICFBamSchema::RelationTypeEnum::Parent ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::RelationTypeEnum>::value_type( (int32_t)ICFBamSchema::RelationTypeEnum::Children, ICFBamSchema::RelationTypeEnum::Children ) );
			lookupOrdinalRelationTypeEnum = newMap;
		}
		const ICFBamSchema::RelationTypeEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			std::map<const int32_t,ICFBamSchema::RelationTypeEnum>::iterator search = lookupOrdinalRelationTypeEnum->find( *value );
			if( search == lookupOrdinalRelationTypeEnum->end() ) {
				throw cflib::CFLibInvalidArgumentException( fieldOrClassName,
					S_ProcName,
					1,
					S_Value,
					S_Msg );
			}
			retval = &search->second;
		}
		return( retval );
	}

	ICFBamSchema::SecScopeEnum* ICFBamSchema::parseSecScopeEnum( const std::string* value ) {
		ICFBamSchema::SecScopeEnum* retval = parseSecScopeEnum( CLASS_NAME, value );
		return( retval );
	}

	ICFBamSchema::SecScopeEnum* ICFBamSchema::parseSecScopeEnum( const std::string& fieldOrClassName, const std::string* value ) {
		static std::map<std::string,ICFBamSchema::SecScopeEnum>* lookupSecScopeEnum = NULL;
		static const std::string S_ProcName( "parseSecScopeEnum" );
		static const std::string S_Value( "value" );
		static const std::string S_Msg( "Could not resolve key" );
		if( lookupSecScopeEnum == NULL ) {
			std::map<std::string,ICFBamSchema::SecScopeEnum>* newMap = new std::map<std::string,ICFBamSchema::SecScopeEnum>();
			newMap->insert( std::map<std::string,ICFBamSchema::SecScopeEnum>::value_type( std::string( "None" ), ICFBamSchema::SecScopeEnum::None ) );
			newMap->insert( std::map<std::string,ICFBamSchema::SecScopeEnum>::value_type( std::string( "System" ), ICFBamSchema::SecScopeEnum::System ) );
			newMap->insert( std::map<std::string,ICFBamSchema::SecScopeEnum>::value_type( std::string( "Cluster" ), ICFBamSchema::SecScopeEnum::Cluster ) );
			newMap->insert( std::map<std::string,ICFBamSchema::SecScopeEnum>::value_type( std::string( "Tenant" ), ICFBamSchema::SecScopeEnum::Tenant ) );
			lookupSecScopeEnum = newMap;
		}
		ICFBamSchema::SecScopeEnum* retval;
		if( ( value == NULL ) || ( value->length() <= 0 ) ) {
			retval = NULL;
		}
		else {
			std::map<std::string,ICFBamSchema::SecScopeEnum>::iterator search = lookupSecScopeEnum->find( *value );
			if( search == lookupSecScopeEnum->end() ) {
				throw cflib::CFLibInvalidArgumentException( fieldOrClassName,
					S_ProcName,
					1,
					S_Value,
					S_Msg );
			}
			retval = &search->second;
		}
		return( retval );
	}

	const std::string* ICFBamSchema::toSecScopeEnumString( const ICFBamSchema::SecScopeEnum value ) {
		static std::map<ICFBamSchema::SecScopeEnum,std::string>* tostringSecScopeEnum = NULL;
		static const std::string S_ProcName( "toSecScopeEnumString" );
		static const std::string S_Value( "value" );
		static const std::string S_Msg( "Could not resolve SecScopeEnum value" );
		if( tostringSecScopeEnum == NULL ) {
			std::map<SecScopeEnum,std::string>* newMap = new std::map<SecScopeEnum,std::string>();
			newMap->insert( std::map<ICFBamSchema::SecScopeEnum,std::string>::value_type( ICFBamSchema::SecScopeEnum::None, std::string( "None" ) ) );
			newMap->insert( std::map<ICFBamSchema::SecScopeEnum,std::string>::value_type( ICFBamSchema::SecScopeEnum::System, std::string( "System" ) ) );
			newMap->insert( std::map<ICFBamSchema::SecScopeEnum,std::string>::value_type( ICFBamSchema::SecScopeEnum::Cluster, std::string( "Cluster" ) ) );
			newMap->insert( std::map<ICFBamSchema::SecScopeEnum,std::string>::value_type( ICFBamSchema::SecScopeEnum::Tenant, std::string( "Tenant" ) ) );
			tostringSecScopeEnum = newMap;
			newMap = NULL;
		}
		const std::string* retval;
		std::map<ICFBamSchema::SecScopeEnum,std::string>::iterator search = tostringSecScopeEnum->find( value );
		if( search == tostringSecScopeEnum->end() ) {
			throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_Value,
				S_Msg );
		}
		retval = &(search->second);
		return( retval );
	}

	const ICFBamSchema::SecScopeEnum ICFBamSchema::ordinalToSecScopeEnum( const std::string& fieldOrClassName, const int16_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::SecScopeEnum* retval = ordinalToSecScopeEnum( fieldOrClassName, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::SecScopeEnum* ICFBamSchema::ordinalToSecScopeEnum( const std::string& fieldOrClassName, const int16_t* value ) {
		const ICFBamSchema::SecScopeEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			int32_t ivalue = *value;
			retval = ordinalToSecScopeEnum( fieldOrClassName, &ivalue );
		}
		return( retval );
	}

	const ICFBamSchema::SecScopeEnum ICFBamSchema::ordinalToSecScopeEnum( const int16_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::SecScopeEnum* retval = ordinalToSecScopeEnum( CLASS_NAME, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::SecScopeEnum* ICFBamSchema::ordinalToSecScopeEnum( const int16_t* value ) {
		const ICFBamSchema::SecScopeEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			int32_t ivalue = *value;
			retval = ordinalToSecScopeEnum( CLASS_NAME, &ivalue );
		}
		return( retval );
	}

	const ICFBamSchema::SecScopeEnum ICFBamSchema::ordinalToSecScopeEnum( const int32_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::SecScopeEnum* retval = ordinalToSecScopeEnum( CLASS_NAME, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::SecScopeEnum ICFBamSchema::ordinalToSecScopeEnum( const std::string& fieldOrClassName, const int32_t value ) {
		int32_t ivalue = value;
		const ICFBamSchema::SecScopeEnum* retval = ordinalToSecScopeEnum( fieldOrClassName, &ivalue );
		return( *retval );
	}

	const ICFBamSchema::SecScopeEnum* ICFBamSchema::ordinalToSecScopeEnum( const int32_t* value ) {
	const ICFBamSchema::SecScopeEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			retval = ordinalToSecScopeEnum( CLASS_NAME, value );
		}
		return( retval );
	}

	const ICFBamSchema::SecScopeEnum* ICFBamSchema::ordinalToSecScopeEnum( const std::string& fieldOrClassName, const int32_t* value ) {
		static std::map<const int32_t,ICFBamSchema::SecScopeEnum>* lookupOrdinalSecScopeEnum = NULL;
		static const std::string S_ProcName( "ordinalToSecScopeEnum" );
		static const std::string S_Value( "value" );
		static const std::string S_Msg( "Could not resolve key" );
		if( lookupOrdinalSecScopeEnum == NULL ) {
			std::map<const int32_t,ICFBamSchema::SecScopeEnum>* newMap = new std::map<const int32_t,ICFBamSchema::SecScopeEnum>();
			newMap->insert( std::map<int32_t,ICFBamSchema::SecScopeEnum>::value_type( (int32_t)ICFBamSchema::SecScopeEnum::None, ICFBamSchema::SecScopeEnum::None ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::SecScopeEnum>::value_type( (int32_t)ICFBamSchema::SecScopeEnum::System, ICFBamSchema::SecScopeEnum::System ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::SecScopeEnum>::value_type( (int32_t)ICFBamSchema::SecScopeEnum::Cluster, ICFBamSchema::SecScopeEnum::Cluster ) );
			newMap->insert( std::map<int32_t,ICFBamSchema::SecScopeEnum>::value_type( (int32_t)ICFBamSchema::SecScopeEnum::Tenant, ICFBamSchema::SecScopeEnum::Tenant ) );
			lookupOrdinalSecScopeEnum = newMap;
		}
		const ICFBamSchema::SecScopeEnum* retval;
		if( value == NULL ) {
			retval = NULL;
		}
		else {
			std::map<const int32_t,ICFBamSchema::SecScopeEnum>::iterator search = lookupOrdinalSecScopeEnum->find( *value );
			if( search == lookupOrdinalSecScopeEnum->end() ) {
				throw cflib::CFLibInvalidArgumentException( fieldOrClassName,
					S_ProcName,
					1,
					S_Value,
					S_Msg );
			}
			retval = &search->second;
		}
		return( retval );
	}

}
