TARGET = test
LIBS += -ljack
DEFINES += __UNIX_JACK__
# Detect jack_port_set_name deprecation via error
QMAKE_CXXFLAGS_WARN_ON += -Werror -Wdeprecated-declarations
SOURCES = $$PWD/../../common/test.cpp