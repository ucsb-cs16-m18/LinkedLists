#CXX=g++
CXX=clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES = test

COMMON_OBJECT_FILES = strFuncs.o linkedListFuncs.o tddFuncs.o recLinkedListFuncs.o

all: ${BINARIES}

runtest: ${BINARIES}
	./test

test: test.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean: 
	/bin/rm/ -f ${BINARIES} *.o
