CXXFLAGS=-I.
CPPS=$(shell echo *.cpp)
OBJS=$(patsubst %.cpp,%.o,$(CPPS))

all: objs
	echo ${CPPS}

objs: ${OBJS}

