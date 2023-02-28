all: build run clean

build:
	gcc -c ./src/tree.c -o ./obj/tree.o && \
	gcc -Wall --std=c99 main.c ./obj/*.o -o ./bin/main

run:
	./bin/main

clean:
	rm -rf ./bin/*
	rm -rf ./obj/*