all: ssr.exe

ssr.exe: main.o
	g++ -o ssr.exe main.o

main.o: main.cpp 
	g++ -o main.o -c main.cpp -W -Wall -ansi -pedantic

clean:
	rm -rf *.o

mrproper: clean
	rm -rf ssr.exe
			