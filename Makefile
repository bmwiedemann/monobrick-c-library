CXXFLAGS=-I.
CPPS=$(shell echo *.cpp)
OBJS=$(patsubst %.cpp,%.o,$(CPPS))

all: libmonobrick.a

libmonobrick.a: objs
	${AR} rvs $@ ${OBJS}

objs: ${OBJS}

