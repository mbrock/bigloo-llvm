#*=====================================================================*/
#*    serrano/prgm/project/bigloo/api/gstreamer/src/Makefile           */
#*    -------------------------------------------------------------    */
#*    Author      :  Manuel Serrano                                    */
#*    Creation    :  Wed Apr  1 18:45:46 1998                          */
#*    Last change :  Fri Aug  6 08:09:24 2010 (serrano)                */
#*    -------------------------------------------------------------    */
#*    The makefile to build the library.                               */
#*=====================================================================*/

#*---------------------------------------------------------------------*/
#*    Standard Gstreamer configuration                                 */
#*---------------------------------------------------------------------*/
include ../../../Makefile.config
include ../../../Makefile.misc

#*---------------------------------------------------------------------*/
#*    Compilers, Tools and Destinations                                */
#*---------------------------------------------------------------------*/
# the library name
API	= gstreamer
# Directories
BIGLOO_SRC_DIR 	= Llib
C_SRC_DIR 	= Clib
PLUGIN_SRC_DIR 	= Plugin
MISC_SRC_DIR 	= Misc
# Where to store the library class files
PBASE		= bigloo.$(API)
CLASS_DIR	= objs/class_s/bigloo/$(API)
CLASS_EDIR	= objs/class_es/bigloo/$(API)
DOTNET_OBJ_DIR	= objs/dotnet_s
DOTNET_OBJ_EDIR	= objs/dotnet_es
# The Bigloo compiler
BIGLOO		= $(BGLBUILDBIGLOO)
AFILE		= $(BGLBUILDBINDIR)/$(AFILE_EXE)
JFILE		= $(BGLBUILDBINDIR)/$(JFILE_EXE)
DEPEND		= $(BGLBUILDBINDIR)/$(BDEPEND_EXE)
BTAGS		= $(BGLBUILDBINDIR)/$(BTAGS_EXE)
BTAGS		= $(BGLBUILDBINDIR)/$(BTAGS_EXE)
CIGLOO		= $(BGLBUILDBINDIR)/cigloo
# Bigloo compilation options
BAPIFLAGS	= $(BFLAGS) \
                  -I Llib -lib-dir $(BOOTLIBDIR) \
                  -srfi $(API) \
                  -unsafe -safee \
                  -copt "$(GSTREAMERCFLAGS)"
CAPIFLAGS       = $(GSTREAMERCFLAGS) $(CGCTHREADFLAGS)
# Flags to build a heap
BHEAPFLAGS	= -unsafe -q -mkaddheap -mkaddlib -L $(BOOTLIBDIR) -I Llib \
                  -heap-library $(API) -srfi $(API)
# C flags
CEFLAGS		= $(GSTREAMERCFLAGS)

# Additional pthread lib for C
ifeq "$(GSTREAMERLIBS) " " "
EXTRALIBS	= 
else
EXTRALIBS	= $(GSTREAMERLIBS)
endif

#*---------------------------------------------------------------------*/
#*    Scheme extended objects                                          */
#*---------------------------------------------------------------------*/
_BGL_OBJECTS	= gstbin gstbus gstbuffer gstcaps gstelement \
                  gstelementfactory gstghostpad gstmessage gstobject \
                  gstpipeline gstpluginfeature gstregistry gstpad \
                  gstpadtemplate gstplugin gstreamer gsterror \
                  gststructure gsttypefind gstparse \
                  gstplugin_bglports \
                  gstmm_music

ifeq "$(GSTREAMERLIBS) " " "
_C_OBJECTS	= 
else
_C_OBJECTS	= bglgst bglgst_thread
_PLUGIN_OBJECTS	= bglgst_portsrc bglgst_portsink bglgst_port
endif
_JAVA_CLASSES	= 
_DOTNET_OBJ	= 

_OBJECTS	= $(_C_OBJECTS) $(_PLUGIN_OBJECTS) $(_BGL_OBJECTS)
OBJECTS		= $(_OBJECTS:%=objs/%.o)

EOBJECTS	= objs/make_lib.o

BGL_CLASSES	= $(_BGL_OBJECTS:%=$(CLASS_DIR)/%.class)
BGL_ECLASSES	= $(CLASS_EDIR)/make_lib.class

JAVA_CLASSES	= $(_JAVA_CLASSES:%=$(CLASS_DIR)/%.class)
JAVA_CLASSES_SRC= $(_JAVA_CLASSES:%=$(CLASS_DIR)/%.java)

BGL_DOTNET_OBJ	= $(_BGL_OBJECTS:%=$(DOTNET_OBJ_DIR)/%.obj)
DOTNET_OBJ	= $(_DOTNET_OBJ:%=$(DOTNET_OBJ_DIR)/%.obj)
BGL_DOTNET_EOBJ	= $(DOTNET_OBJ_EDIR)/make_lib.obj

DOTNET_OBJ_SRC	= $(_DOTNET_OBJ:%=$(DOTNET_OBJ_DIR)/%.cs)

_WIN32_SRC	= 

_BGL_SOURCES	= $(_BGL_OBJECTS:%=$(BIGLOO_SRC_DIR)/%.scm)
_C_SOURCES	= $(_C_OBJECTS:%=$(C_SRC_DIR)/%.c)
_PLUGIN_SOURCES	= $(_PLUGIN_OBJECTS:%=$(PLUGIN_SRC_DIR)/%.c)
_JAVA_SOURCES	= $(_JAVA_CLASSES:%=$(JAVA_SRC_DIR)/%.java)
_DOTNET_SOURCES	= $(_DOTNET_OBJ:%=$(DOTNET_SRC_DIR)/%.cs)
_WIN32_SOURCES	= $(_WIN32_SRC:%=$(WIN32_SRC_DIR)/%)

SOURCES		= $(_BGL_SOURCES) \
                  $(_C_SOURCES) \
                  $(_PLUGIN_SOURCES) \
                  $(_JAVA_SOURCES) \
                  $(_DOTNET_SOURCES)
INCLUDES	= $(BIGLOO_SRC_DIR)/gst.sch

#*---------------------------------------------------------------------*/
#*    Sources                                                          */
#*---------------------------------------------------------------------*/
POPULATION	= $(SOURCES) $(INCLUDES) $(_WIN32_SOURCES) \
		  $(C_SRC_DIR)/bglgst.h \
		  $(C_SRC_DIR)/bglgst_plugin.h \
		  $(C_SRC_DIR)/bglgst_config.h.in \
		  $(PLUGIN_SRC_DIR)/gstbigloo.h \
		  $(PLUGIN_SRC_DIR)/bglgst_port.h \
		  $(MISC_SRC_DIR)/make_lib.scm \
                  $(MISC_SRC_DIR)/$(API).init.in \
                  Makefile

#*---------------------------------------------------------------------*/
#*    all                                                              */
#*---------------------------------------------------------------------*/
.PHONY: c jvm dotnet build-c build-jvm build-dotnet

all: 
	@ if [ "$(NATIVEBACKEND)" = "yes" ]; then \
             $(MAKE) build-c; \
	  fi

c: build-c
build-c: api-c

jvm: build-jvm
build-jvm:

dotnet: build-dotnet
build-dotnet:

$(MISC_SRC_DIR)/$(API).init: $(MISC_SRC_DIR)/$(API).init.in
	@ echo "*** ERROR: $@ is out of date (older than $?)"
	@ echo "You need to re-configure \"(cd ..; ./configure --bootconfig)\""
	@ exit 1

#*---------------------------------------------------------------------*/
#*    $(C_SRC_DIR)/bglgst_config.h.in ...                              */
#*---------------------------------------------------------------------*/
$(C_SRC_DIR)/bglgst_config.h.in: $(C_SRC_DIR)/bglgst_config.h
	@ echo "*** ERROR: $@ is out of date (older than $?)"
	@ echo "You need to re-configure \"(cd ..; ./configure --bootconfig)\""
	@ exit 1

#*---------------------------------------------------------------------*/
#*    Manual dependencies                                              */
#*---------------------------------------------------------------------*/
$(BIGLOO_SRC_DIR)/gstreamer.sch: $(C_SRC_DIR)/bglgst.h
	($(CIGLOO) -ident-style=scheme $< | grep -v 'obj->void' > $@) || \
         ($(RM) $@; exit 1)

#*---------------------------------------------------------------------*/
#*    Debugging stuff (not used anywhere)                              */
#*---------------------------------------------------------------------*/
gstobject.h: Llib/gstobject.scm
	$(BIGLOO) $(EFLAGS) $(BAPIFLAGS) -copt $(CPICFLAGS) -copt "-I$(C_SRC_DIR)" -copt "$(CEFLAGS)" $< -o $@ -hgen

#*---------------------------------------------------------------------*/
#*    pop ...                                                          */
#*---------------------------------------------------------------------*/
pop:
	@ echo $(POPULATION:%=$(API)/src/%)

#*---------------------------------------------------------------------*/
#*    clean                                                            */
#*---------------------------------------------------------------------*/
clean: api-clean

cleanall: api-cleanall

distclean: cleanall

#*---------------------------------------------------------------------*/
#*    Common API rules                                                 */
#*---------------------------------------------------------------------*/
include ../../Makefile.api

#*---------------------------------------------------------------------*/
#*    The implicit rules                                               */
#*---------------------------------------------------------------------*/
objs/%.o: $(PLUGIN_SRC_DIR)/%.c
	$(CC) $(CEFLAGS) $(CAPIFLAGS) $(CFLAGS) $(CPICFLAGS) $(CGCTHREADFLAGS) -I. -I $(BOOTLIBDIR) $(GCINCLUDE) -I $(PLUGIN_SRC_DIR) -I $(C_SRC_DIR) $< -o $@ -c

#bdepend start (don't edit)
#*---------------------------------------------------------------------*/
#*    Dependencies ...                                                 */
#*---------------------------------------------------------------------*/
objs/gstreamer.o Llib/gstreamer.class:

#bdepend stop
