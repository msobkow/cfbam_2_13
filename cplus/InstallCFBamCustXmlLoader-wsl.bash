#!/bin/bash
#
#	com.github.msobkow.CFBam
#
#	Copyright (c) 2020 Mark Stephen Sobkow
#	
#	Licensed under the Apache License, Version 2.0 (the "License");
#	you may not use this file except in compliance with the License.
#	You may obtain a copy of the License at
#	
#	    http://www.apache.org/licenses/LICENSE-2.0
#	
#	Unless required by applicable law or agreed to in writing, software
#	distributed under the License is distributed on an "AS IS" BASIS,
#	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#	See the License for the specific language governing permissions and
#	limitations under the License.
#
MAJOR_VERSION=2
MINOR_VERSION=13
pushd libcfbamcustxmlloader
	sudo make install
	sudo chmod 755 /usr/include/msobkow/2.0.13/cfbamcustxmlloader
	sudo sh -c "cd /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfbamcustxmlloader && chmod 644 *.hpp"
	#sudo chmod 755 /usr/bin/msobkow/2.0.13/*cfbamcustxmlloader
	sudo chmod 755 /usr/lib/*cfbamcustxmlloader.la
	sudo chmod 755 /usr/lib/*cfbamcustxmlloader.so*
	sudo chmod 755 /usr/share/msobkow/2.0.13/xsd
	sudo chmod 644 /usr/share/msobkow/2.0.13/xsd/cfbam*.xsd
	sudo ldconfig
popd
