CCFLAGS=-Wall -O0 -g 
CCSTATICFLAGS=${CCFLAGS} -rdynamic
CCDYNAMICFLAGS=${CCFLAGS} -fPIC 
LDFLAGS=
LDSTATICFLAGS=${LDFLAGS} -ldl -lpopt
LDDYNAMICFLAGS=${LDFLAGS} -shared
TARBALL=dlopen/dlopen.tar

OBJECTS=example.o time.o stat.o

all: program example.so time.so stat.so

%.o: %.c
	${CC} ${CCDYNAMICFLAGS} -c -o $@ $<

program.o: program.c
	${CC} ${CCSTATICFLAGS} -c -o $@ $<

%.so: %.o
	${CC} ${LDDYNAMICFLAGS} -o $@ $<

program: program.o
	${CC} -o $@ $< ${LDSTATICFLAGS} 

test: all
	LD_LIBRARY_PATH=`pwd` ./program -v -m stat -u ~/.zshrc

dist: clean
	(cd ..; tar cvf ${TARBALL} dlopen/*.c dlopen/Makefile; gzip --best --force --verbose ${TARBALL})

clean: 
	-rm -f *.o *.so program

.SECONDARY: ${OBJECTS}


