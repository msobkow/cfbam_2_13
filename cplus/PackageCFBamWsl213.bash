#!/bin/bash
Revision=$1
if [ "$Revision" == "" ]; then
	echo "ERROR: Revision (argument 1) not specified" 1>&2
else
	export Revision
	cd $MSSCFHOME/cfbam_2_13/cplus
	if [ ! -d ../installer ]; then
		mkdir ../installer
	fi
	chmod 755 ../installer
	ZipFile="../installer/cfbam_2_13_${Revision}-GPLv3-wsl-debug-installer.zip"
	export ZipFile
	rm -f ${ZipFile}
	rm -Rf cfbam-2.13.${Revision}-wsl
	mkdir cfbam-2.13.${Revision}-wsl
	chmod 755 cfbam-2.13.${Revision}-wsl
	echo "Preparing cfbam-2.13.${Revision}-wsl ..."
	pushd cfbam-2.13.${Revision}-wsl
		cp ../gpl-3.0.txt ../LICENSE .
		git log 2>&1 >ChangeLog
		mkdir bin
		chmod 755 bin
		mkdir bin/msobkow
		chmod 755 bin/msobkow
		mkdir bin/msobkow/2.0.13
		chmod 755 bin/msobkow/2.0.13
		cp ../gpl-3.0.txt ../LICENSE bin/msobkow/2.0.13
		chmod 644 bin/msobkow/2.0.13/*
		cp /usr/bin/msobkow/2.0.13/cfbam* bin/msobkow/2.0.13
		chmod 755 bin/msobkow/2.0.13/cfbam*
		mkdir lib
		chmod 755 lib
		cp /usr/lib/libcfbam.la /usr/lib/libcfbam.so.2.0.13 lib
		cp /usr/lib/libcfbamsaxloader.la /usr/lib/libcfbamsaxloader.so.2.0.13 lib
		cp /usr/lib/libcfbamram.la /usr/lib/libcfbamram.so.2.0.13 lib
		cp /usr/lib/libcfbammsscf.la /usr/lib/libcfbammsscf.so.2.0.13 lib
		cp /usr/lib/libcfbamcustmsscf.la /usr/lib/libcfbamcustmsscf.so.2.0.13 lib
		cp /usr/lib/libcfbamcustxmlloader.la /usr/lib/libcfbamcustxmlloader.so.2.0.13 lib
		chmod 755 lib/*.so.*
		chmod 644 lib/*.la
		strip bin/msobkow/2.0.13/*cf* lib/*.so.*
		mkdir include
		chmod 755 include
		mkdir include/msobkow
		chmod 755 include/msobkow
		mkdir include/msobkow/2.0.13
		chmod 755 include/msobkow/2.0.13
		cp ../gpl-3.0.txt ../LICENSE include/msobkow/2.0.13
		chmod 644 include/msobkow/2.0.13/*
		mkdir include/msobkow/2.0.13/cfbam
		chmod 755 include/msobkow/2.0.13/cfbam
		cp /usr/include/msobkow/2.0.13/cfbam/*.hpp include/msobkow/2.0.13/cfbam
		chmod 644 include/msobkow/2.0.13/cfbam*/*.hpp
		mkdir include/msobkow/2.0.13/cfbamsaxloader
		chmod 755 include/msobkow/2.0.13/cfbamsaxloader
		cp /usr/include/msobkow/2.0.13/cfbamsaxloader/*.hpp include/msobkow/2.0.13/cfbamsaxloader
		chmod 644 include/msobkow/2.0.13/cfbamsaxloader*/*.hpp
		mkdir include/msobkow/2.0.13/cfbamram
		chmod 755 include/msobkow/2.0.13/cfbamram
		cp /usr/include/msobkow/2.0.13/cfbamram/*.hpp include/msobkow/2.0.13/cfbamram
		chmod 644 include/msobkow/2.0.13/cfbamram*/*.hpp
		mkdir include/msobkow/2.0.13/cfbammsscf
		chmod 755 include/msobkow/2.0.13/cfbammsscf
		cp /usr/include/msobkow/2.0.13/cfbammsscf/*.hpp include/msobkow/2.0.13/cfbammsscf
		chmod 644 include/msobkow/2.0.13/cfbammsscf*/*.hpp
		mkdir include/msobkow/2.0.13/cfbamcustmsscf
		chmod 755 include/msobkow/2.0.13/cfbamcustmsscf
		cp /usr/include/msobkow/2.0.13/cfbamcustmsscf/*.hpp include/msobkow/2.0.13/cfbamcustmsscf
		chmod 644 include/msobkow/2.0.13/cfbamcustmsscf*/*.hpp
		mkdir include/msobkow/2.0.13/cfbamcustxmlloader
		chmod 755 include/msobkow/2.0.13/cfbamcustxmlloader
		cp /usr/include/msobkow/2.0.13/cfbamcustxmlloader/*.hpp include/msobkow/2.0.13/cfbamcustxmlloader
		chmod 644 include/msobkow/2.0.13/cfbamcustxmlloader*/*.hpp
		mkdir share
		chmod 755 share
		mkdir share/msobkow
		chmod 755 share/msobkow
		mkdir share/msobkow/2.0.13
		chmod 755 share/msobkow/2.0.13
		cp ../gpl-3.0.txt ../LICENSE share/msobkow/2.0.13
		chmod 644 share/msobkow/2.0.13/*
		mkdir share/msobkow/2.0.13/xsd
		chmod 755 share/msobkow/2.0.13/xsd
		cp /usr/share/msobkow/2.0.13/xsd/cfbam*.xsd share/msobkow/2.0.13/xsd
		chmod 644 share/msobkow/2.0.13/xsd/*.xsd
	popd
	echo "Packaging cfbam-2.13.${Revision}-wsl ..."
	zip -q9r ${ZipFile} cfbam-2.13.${Revision}-wsl
	rm -Rf cfbam-2.13.${Revision}-wsl
	echo "Packaged ${ZipFile}"
	ls -l ${ZipFile}
fi
