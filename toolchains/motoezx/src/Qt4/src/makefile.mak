#############################################################################
# Makefile for building libQtGui.so
# Generated by tmake at 17:27, 2010/08/27
#     Project: libQtGui.so
#    Template: app
#############################################################################

####### Compiler, tools and options

CC	=	arm-linux-gcc
CXX	=	arm-linux-g++
CFLAGS	=	-pipe -Wall -W -O2 -mcpu=iwmmxt -mtune=iwmmxt -DNO_DEBUG
CXXFLAGS=	-pipe -DQWS -fpic -fno-exceptions -fno-rtti -Wall -W -O2 -mcpu=iwmmxt -mtune=iwmmxt -DNO_DEBUG
INCPATH	=	-I$(ARM_DEV_DIR)/include -I$(QTDIR)/include -I$(QTDIR)/include/qt -I$(QTDIR)/include/ezx \
	-I$(QTDIR)/include/Qt4 -I$(QTDIR)/include/Qt4/Qt -I$(QTDIR)/include/Qt4/QtGui -I$(QTDIR)/include/tapi -I$(QTDIR)/include/qt-ext
LINK	=	arm-linux-g++
LFLAGS	=	-shared -Wl,-rpath-link,$(QTDIR)/lib/ezx/lib,-rpath-link,$(QTDIR)/lib/ezx/lib/inputmethods
LIBS	=	$(SUBLIBS) -L$(ARM_DEV_DIR)/lib -L$(QTDIR)/lib -L$(QTDIR)/lib/ezx/lib -ldl -lqte-mt -lpthread -lezxappbase -lezxappsdk -lezxopenwindow -lipp-miscGen -lipp-jp -lezxjpeg -lezxpm
MOC	=	$(EZXDIR)/bin/moc
UIC	=	$(EZXDIR)/bin/uic

TAR	=	tar -cf
GZIP	=	gzip -9f

####### Files

HEADERS =	corelib/global/qglobal_x.h \
		gui/kernel/qapplication_x.h
SOURCES =	gui/kernel/qapplication_x.cpp
OBJECTS =	gui/kernel/qapplication_x.o
INTERFACES =	
UICDECLS =	
UICIMPLS =	
SRCMOC	=	gui/kernel/moc_qapplication_x.cpp
OBJMOC	=	gui/kernel/moc_qapplication_x.o
DIST	=	
TARGET	=	libQtGui.so
INTERFACE_DECL_PATH = .

####### Implicit rules

.SUFFIXES: .cpp .cxx .cc .C .c

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules


all: $(TARGET)

$(TARGET): $(UICDECLS) $(OBJECTS) $(OBJMOC) 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJMOC) $(LIBS)

moc: $(SRCMOC)

dist:
	$(TAR) libQtGui.so.tar  $(SOURCES) $(HEADERS) $(INTERFACES) $(DIST)
	$(GZIP) libQtGui.so.tar

clean:
	-rm -f $(OBJECTS) $(OBJMOC) $(SRCMOC) $(UICIMPLS) $(UICDECLS) $(TARGET)
	-rm -f *~ core

####### Sub-libraries


###### Combined headers


####### Compile

gui/kernel/qapplication_x.o: gui/kernel/qapplication_x.cpp \
		gui/kernel/qapplication_x.h

gui/kernel/moc_qapplication_x.o: gui/kernel/moc_qapplication_x.cpp \
		gui/kernel/qapplication_x.h

gui/kernel/moc_qapplication_x.cpp: gui/kernel/qapplication_x.h
	$(MOC) gui/kernel/qapplication_x.h -o gui/kernel/moc_qapplication_x.cpp
