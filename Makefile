#Test makefile
CPP = g++ 
CPPFLAGS = -Wall -ggdb -O0

AR = ar
RANLIB = ranlib

OUTPUT = test

all:: $(OUTPUT)

for_static = test1.o
static_lib.a: $(for_static)
	$(AR) qc $@ $(for_static)
	$(RANLIB) $@
	
$(OUTPUT): static_lib.a test.o main.o
	$(CPP) ${CPPFLAGS} test.o main.o -o $(OUTPUT) static_lib.a
	
%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@
	
clean:
	rm -f $(OUTPUT)
	rm -f *.o
	rm -f *.a