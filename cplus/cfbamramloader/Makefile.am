MAJOR_VERSION=2

MINOR_VERSION=13

BUILD_NUMBER=11195

RELEASE=$(MAJOR_VERSION).$(MINOR_VERSION).$(BUILD_NUMBER)

SUB_RELEASE=$(MAJOR_VERSION).$(MINOR_VERSION)

MAIN_RELEASE=$(MAJOR_VERSION)

DEPDIR=debug

LT_OBJDIR=.libs

BIN=$(prefix)/bin/msscf/$(MAJOR_VERSION).0.$(MINOR_VERSION)

bindir=$(prefix)/bin/msscf/$(MAJOR_VERSION).0.$(MINOR_VERSION)

bin_PROGRAMS = cfbamramloader

cfbamramloader_SOURCES = cfbamramloader.cpp CFBamRamLdr.cpp

cfbamramloader_LDFLAGS= -lmpfr -lxerces-c -luuid -l:libcflib.so.$(MAJOR_VERSION).0.$(MINOR_VERSION) -l:libcfbam.so.$(MAJOR_VERSION).0.$(MINOR_VERSION) -l:libcfbamsaxloader.so.$(MAJOR_VERSION).0.$(MINOR_VERSION) -l:libcfsec.so.$(MAJOR_VERSION).0.$(MINOR_VERSION) -l:libcfsecsaxloader.so.$(MAJOR_VERSION).0.$(MINOR_VERSION) -l:libcfint.so.$(MAJOR_VERSION).0.$(MINOR_VERSION) -l:libcfintsaxloader.so.$(MAJOR_VERSION).0.$(MINOR_VERSION) -l:libcfbamram.so.$(MAJOR_VERSION).0.$(MINOR_VERSION) -lstdc++fs

cfbamramloader_CXXFLAGS= -I$(top_srcdir) -I$(prefix)/include/msscf/$(MAJOR_VERSION).0.$(MINOR_VERSION) -I$(prefix)/include/msscf/$(MAJOR_VERSION).0.$(MINOR_VERSION)

ACLOCAL_AMFLAGS= -Im4
