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
let Revision=$1
MAJOR_VERSION=2
MINOR_VERSION=13
rm -f libcfbamcustxmlloader*.gz *.deb *.build *.dsc *.log *.changes ex.cmd
pushd libcfbamcustxmlloader
	if [ -f Makefile ]; then
		make distclean
	fi
popd
echo ":1,\$s:[0-9][0-9][0-9][0-9][0-9]:${Revision}:g" >ex.cmd
echo ":wq" >> ex.cmd
#ex libcfbamcustxmlloader/CFBamCustXmlLoaderEngine.cpp < ex.cmd
ex libcfbamcustxmlloader/configure.ac < ex.cmd
ex libcfbamcustxmlloader/Makefile.am < ex.cmd
ex libcfbamcustxmlloader/ChangeLog < ex.cmd
rm ex.cmd
pushd libcfbamcustxmlloader
	if [ ! -d /usr/bin/msobkow ]; then
		sudo mkdir /usr/include/msobkow
	fi
	sudo chmod 755 /usr/bin/msobkow
	if [ ! -d /usr/bin/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION} ]; then
		sudo mkdir /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	fi
	sudo chmod 755 /usr/bin/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	if [ ! -d /usr/include/msobkow ]; then
		sudo mkdir /usr/include/msobkow
	fi
	sudo chmod 755 /usr/include/msobkow
	if [ ! -d /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION} ]; then
		sudo mkdir /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	fi
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	if [ ! -d /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfbamcustxmlloader ]; then
		sudo mkdir /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfbamcustxmlloader
	fi
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfbamcustxmlloader
	autoreconf -fi
	aclocal
	autoconf
	automake
	./configure --prefix=/usr --disable-static CFLAGS='-g3 -Og -D_DEBUG' CXXFLAGS='-g3 -Og -std=c++1z -D_DEBUG -I/usr/include/msobkow/${MAJOR_VERSION).0.${MINOR_VERSION} -I/usr/include/msobkow/${MAJOR_VERSION).0.${MINOR_VERSION} '
	#./configure --prefix=/usr --disable-static CFLAGS='-O2 -DNDEBUG' CXXFLAGS='-O2 -std=c++1z -DNDEBUG -I/usr/include/msobkow/${MAJOR_VERSION).0.${MINOR_VERSION} -I/usr/include/msobkow/${MAJOR_VERSION).0.${MINOR_VERSION} '
	make clean
	time make
	sudo make install
	sudo rm -Rf /usr/include/cfbam*
	sudo chmod 755 /usr/include/msobkow
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	sudo chmod 755 /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfbamcustxmlloader
	sudo sh -c "cd /usr/include/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/cfbamcustxmlloader && chmod 644 *.hpp"
	#sudo chmod 755 /usr/bin/*cfbam*msscf
	sudo chmod 755 /usr/lib/*cfbamcustxmlloader.la
	sudo chmod 755 /usr/lib/*cfbamcustxmlloader.so*
	sudo chmod 755 /usr/share/msobkow
	sudo chmod 755 /usr/share/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}
	sudo chmod 755 /usr/share/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/xsd
	sudo chmod 644 /usr/share/msobkow/${MAJOR_VERSION}.0.${MINOR_VERSION}/xsd/*cfbam*.xsd
	sudo ldconfig
popd
