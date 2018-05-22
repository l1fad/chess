CXX = gcc
CFLAGS = $(CXX) -c -Wall -Werror
OBJECTS = build/chess.o build/init.o build/visual.o
.PHONY: all clean

all: bin build bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog

build/chess.o: src/chess.c src/head.h
	$(CFLAGS) src/chess.c -o build/chess.o

build/init.o: src/init.c src/head.h
	$(CFLAGS) src/init.c -o build/init.o

build/visual.o: src/visual.c src/head.h
	$(CFLAGS) src/visual.c -o build/visual.o

bin:
	mkdir bin
build:
	mkdir build
clean:
	-rm -rf build/*.o bin/*
