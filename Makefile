CXX=g++
CXXFLAGS=-std=c++98 -pedantic -Wall -Werror -g ‘pkg-config pugixml --cflags‘
LDFLAGS=
LDLIBS=‘pkg-config pugixml --libs-only-L‘ ‘pkg-config pugixml --libs-only-l‘
RM=rm -fv
.PHONY: all clean

all: mrp.out
%.o: %.cpp %.h
	 $(CXX) $(CXXFLAGS)  -c -o $@ $^
mrp.out: mrp.cpp str_to_long_error.o str_to_int_error.o str_to_float_error.o silver.o refinery.o metal.o gold.o copper.o
	 $(CXX) $(CXXFLAGS)  -c -o $@ $^ $(LDLIBS)
clean:
	 $(RM) *.o *.out
