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

#include <cfbamcustmsscf/CFBamCustMssCFPrefs.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFPrefs::CLASS_NAME( "CFBamCustMssCFPrefs" );
	const std::string CFBamCustMssCFPrefs::DIRSEP( "/" );
	const std::string CFBamCustMssCFPrefs::DOLLAR( "$" );
	const std::string CFBamCustMssCFPrefs::FILENAME_MSSCFRC( ".msscfclirc" );
	const std::string CFBamCustMssCFPrefs::ENVAR_USER( "USER" );
	const std::string CFBamCustMssCFPrefs::ENVAR_HOME( "HOME" );
	const std::string CFBamCustMssCFPrefs::MSSCF_HOME( "MSSCF_HOME" );
	const std::string CFBamCustMssCFPrefs::PROPNAME_ROOTGENDIR( "msscf.rootgendir" );
	const std::string CFBamCustMssCFPrefs::PROPNAME_MODELDIR( "msscf.modeldir" );
	const std::string CFBamCustMssCFPrefs::PROPNAME_CARTRIDGEDIR( "msscf.cartridgedir" );

	CFBamCustMssCFPrefs::CFBamCustMssCFPrefs() {
		UserName = NULL;
		HomeDirName = NULL;
		MssCFHome = NULL;
		RootGenDir = NULL;
	}

	CFBamCustMssCFPrefs::~CFBamCustMssCFPrefs() {
		if( RootGenDir != NULL ) {
			delete RootGenDir;
			RootGenDir = NULL;
		}
		if( MssCFHome != NULL ) {
			delete MssCFHome;
			MssCFHome = NULL;
		}
		if( HomeDirName != NULL ) {
			delete HomeDirName;
			HomeDirName = NULL;
		}
		if( UserName != NULL ) {
			delete UserName;
			UserName = NULL;
		}
	}

	const std::string& CFBamCustMssCFPrefs::getUserName( cflib::ICFLibMessageLog* log ) {
		static const std::string S_ProcName( "getUserName" );
		static const std::string S_EnvarNotSet( " environment variable not set" );
		static const std::string S_Log( "log" );
		if( log == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Log );
		}
		if( UserName == NULL ) {
			char* evar = getenv( ENVAR_USER.c_str() );
			if( evar == NULL ) {
				log->message( ENVAR_USER + S_EnvarNotSet );
				UserName = new std::string( DOLLAR + ENVAR_USER );
			}
			else {
				UserName = new std::string( evar );
			}
		}
		return( *UserName );
	}

	const std::string& CFBamCustMssCFPrefs::getHomeDirName( cflib::ICFLibMessageLog* log ) {
		static const std::string S_ProcName( "getHomeDirName" );
		static const std::string S_EnvarNotSet( " environment variable not set" );
		static const std::string S_Log( "log" );
		if( log == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Log );
		}
		if( HomeDirName == NULL ) {
			char* evar = getenv( ENVAR_HOME.c_str() );
			if( evar == NULL ) {
				log->message( ENVAR_HOME + S_EnvarNotSet );
				HomeDirName = new std::string( DOLLAR + ENVAR_HOME );
			}
			else {
				HomeDirName = new std::string( evar );
			}
		}
		return( *HomeDirName );
	}

	const std::string& CFBamCustMssCFPrefs::getMssCFHome( cflib::ICFLibMessageLog* log ) {
		static const std::string S_ProcName( "getMssCFHome" );
		static const std::string S_Msscf( "msscf" );
		static const std::string S_EnvarNotSet( " environment variable not set, using $HOME/msscf" );
		static const std::string S_Log( "log" );
		if( log == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Log );
		}
		if( MssCFHome == NULL ) {
			char* evar = getenv( MSSCF_HOME.c_str() );
			if( evar == NULL ) {
				log->message( MSSCF_HOME + S_EnvarNotSet );
				MssCFHome = new std::string( getHomeDirName( log ) + DIRSEP + S_Msscf );
			}
			else {
				MssCFHome = new std::string( evar );
			}
		}
		return( *MssCFHome );
	}

	const std::string& CFBamCustMssCFPrefs::getRootGenDir( cflib::ICFLibMessageLog* log ) {
		static const std::string S_ProcName( "getRootGenDir" );
		static const std::string S_MssCFHomeNotSet( "MSSCF_HOME environment variable not set" );
		static const std::string S_Log( "log" );
		if( log == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Log );
		}
		if( RootGenDir == NULL ) {
			RootGenDir = new std::string( getMssCFHome( log ) + DIRSEP );
		}
		return( *RootGenDir );
	}

	void CFBamCustMssCFPrefs::setRootGenDir( const std::string& value ) {
		static const std::string S_ProcName( "setRootGenDir" );
		static const std::string S_Value( "value" );
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_Value );
		}
		if( RootGenDir != NULL ) {
			delete RootGenDir;
			RootGenDir = NULL;
		}
		RootGenDir = new std::string( value );
	}

	const std::vector<std::string>& CFBamCustMssCFPrefs::getModelPath() {
		return( ModelPath );
	}

	void CFBamCustMssCFPrefs::addModelPath( const std::string& value ) {
		static const std::string S_ProcName( "addModelPath" );
		static const std::string S_Value( "value" );
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_Value );
		}
		for( auto curs = ModelPath.begin(); curs != ModelPath.end(); curs ++ ) {
			if( value == *curs ) {
				return;
			}
		}
		ModelPath.push_back( value );
	}

	const std::vector<std::string>& CFBamCustMssCFPrefs::getCartridgePath() {
		return( CartridgePath );
	}

	void CFBamCustMssCFPrefs::addCartridgePath( const std::string& value ) {
		static const std::string S_ProcName( "addCartridgePath" );
		static const std::string S_Value( "value" );
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_Value );
		}
		for( auto curs = CartridgePath.begin(); curs != CartridgePath.end(); curs ++ ) {
			if( value == *curs ) {
				return;
			}
		}
		CartridgePath.push_back( value );
	}

	void CFBamCustMssCFPrefs::reset( cflib::ICFLibMessageLog* log ) {
		static const std::string S_ProcName( "reset" );
		static const std::string S_Log( "log" );
		static const std::string S_Msscf( "msscf" );
		if( log == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Log );
		}
		if( RootGenDir != NULL ) {
			delete RootGenDir;
			RootGenDir = NULL;
		}
		if( HomeDirName != NULL ) {
			delete HomeDirName;
			HomeDirName = NULL;
		}
		if( UserName != NULL ) {
			delete UserName;
			UserName = NULL;
		}
		ModelPath.clear();
		CartridgePath.clear();
		getUserName( log );
		setRootGenDir( getHomeDirName( log ) + DIRSEP + S_Msscf );
		addModelPath( getRootGenDir( log ) + DIRSEP + "msscf_2_12/java/model-2.13" );
		addCartridgePath( getRootGenDir( log ) + DIRSEP + "msscf_2_12/java/cartridge-2.13" );
	}

	bool CFBamCustMssCFPrefs::loadPreferences( cflib::ICFLibMessageLog* log ) {
		static const std::string S_ProcName( "loadPreferences" );
		static const std::string S_UnrecognizedTag( "Attribute tag not recognized" );
		static const std::string S_MissingTags( "One or more tags are missing" );
		static const std::string S_Log( "log" );
		static const std::string S_MsgLoading( "Loading user preferences..." );

		if( log == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Log );
		}

		log->message( S_MsgLoading );
		log->indent();

		std::string prefsFileName( getHomeDirName( log ) + DIRSEP + FILENAME_MSSCFRC );

		std::basic_ifstream<char> file;
		file.open( prefsFileName, std::_Ios_Openmode::_S_in );
		if( ! file.is_open() ) {
			static const std::string S_CouldNotOpen( "Could not open \"" );
			static const std::string S_ForReading( "\" for reading" );
			log->message( S_CouldNotOpen + prefsFileName + S_ForReading );
			log->dedent();
			return( false );
		}

		if( RootGenDir != NULL ) {
			delete RootGenDir;
			RootGenDir = NULL;
		}
		ModelPath.clear();
		CartridgePath.clear();

		std::string line;
		std::string::size_type posEquals;
		std::string tag;
		std::string value;
		int32_t* iValue;
		size_t lenTag;
		size_t lenModelDir = PROPNAME_MODELDIR.length();
		size_t lenCartridgeDir = PROPNAME_CARTRIDGEDIR.length();

		while( getline( file, line ) ) {
			if( line.length() > 0 ) {
				if( line.at( 0 ) != '#' ) {
					posEquals = line.find( '=' );
					if( posEquals <= 0 ) {
						return( false );
					}
					tag = line.substr( 0, posEquals );
					lenTag = tag.length();
					value = line.substr( posEquals + 1 );
					if( tag == PROPNAME_ROOTGENDIR ) {
						setRootGenDir( value );
					}
					else if( ( lenTag >= lenModelDir ) && ( PROPNAME_MODELDIR == tag.substr( 0, lenModelDir ) ) ) {
						ModelPath.push_back( value );
					}
					else if( ( lenTag >= lenCartridgeDir ) && ( PROPNAME_CARTRIDGEDIR == tag.substr( 0, lenCartridgeDir ) ) ) {
						CartridgePath.push_back( value );
					}
					else {
						file.close();
						log->dedent();
						throw cflib::CFLibRuntimeException( CLASS_NAME,
							S_ProcName,
							S_UnrecognizedTag );
					}
				}
			}
		}

		file.close();

		log->dedent();

		if( ( RootGenDir == NULL ) || ( CartridgePath.size() == 0 ) || ( ModelPath.size() == 0 ) ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_MissingTags );
		}

		return( true );
	}

	bool CFBamCustMssCFPrefs::savePreferences( cflib::ICFLibMessageLog* log ) {
		static const std::string S_ProcName( "savePreferences" );
		static const std::string S_UnrecognizedTag( "Attribute tag not recognized" );
		static const std::string S_MissingTags( "One or more tags are missing" );
		static const std::string S_Log( "log" );
		static const std::string S_MsgSaving( "Saving user preferences..." );
		static const std::string S_Equal( "=" );
		static const std::string S_Newline( "\n" );
		static const std::string S_MissingAttributes( "One or more attributes have not been set" );

		if( log == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Log );
		}

		if( ( RootGenDir == NULL ) || ( ModelPath.size() == 0 ) || ( CartridgePath.size() == 0 ) ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MissingAttributes );
		}

		log->message( S_MsgSaving );
		log->indent();

		std::string prefsFileName( getHomeDirName( log ) + DIRSEP + FILENAME_MSSCFRC );

		std::basic_ofstream<char> file;
		file.open( prefsFileName, std::_Ios_Openmode::_S_trunc );
		if( ! file.is_open() ) {
			static const std::string S_CouldNotOpen( "Could not open \"" );
			static const std::string S_ForWriting( "\" for writing" );
			log->message( S_CouldNotOpen + prefsFileName + S_ForWriting );
			log->dedent();
			return( false );
		}

		std::string line;
		std::chrono::system_clock::time_point* timestamp = cflib::CFLib::getUTCTimestamp();

		line.append( "# " );
		line.append( cflib::CFLibXmlUtil::formatTimestamp( *timestamp ) );
		line.append( S_Newline );
		file.write( line.data(), line.length() );

		delete timestamp;
		timestamp = NULL;

		line.clear();
		line.append( PROPNAME_ROOTGENDIR );
		line.append( S_Equal );
		line.append( getRootGenDir( log ) );
		line.append( S_Newline );
		file.write( line.data(), line.length() );

		size_t idx = 0;
		for( auto curs = CartridgePath.begin(); curs != CartridgePath.end(); curs ++ ) {
			line.clear();
			line.append( PROPNAME_CARTRIDGEDIR );
			if( idx != 0 ) {
				line.append( std::to_string( idx ) );
			}
			line.append( S_Equal );
			line.append( *curs );
			line.append( S_Newline );
			file.write( line.data(), line.length() );
			idx ++;
		}

		idx = 0;
		for( auto curs = ModelPath.begin(); curs != ModelPath.end(); curs ++ ) {
			line.clear();
			line.append( PROPNAME_MODELDIR );
			if( idx != 0 ) {
				line.append( std::to_string( idx ) );
			}
			line.append( S_Equal );
			line.append( *curs );
			line.append( S_Newline );
			file.write( line.data(), line.length() );
			idx ++;
		}

		file.close();

		log->dedent();

		return( true );
	}

}
