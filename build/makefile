all: geomH

geomH: main.o test.o 
	g++ main.o test.o -o geomH

main.o: main.cpp
	g++ -c main.cpp

test.o: test.cpp
	g++ -c src/test.cpp

clean:
	rm -rf *.o geomH
