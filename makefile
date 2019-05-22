all: bin/geomH

bin/geomH: build/main.o build/test.o 
	g++ build/main.o build/test.o -o bin/geomH -Wall -Werror

build/main.o: main.cpp
	g++ -c main.cpp -Wall -Werror -o build/main.o

build/test.o: src/test.cpp
	g++ -c src/test.cpp -Wall -Werror -o build/test.o
 
clean:
	rm -rf *.o geomH
