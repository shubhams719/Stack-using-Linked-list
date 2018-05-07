link : link.o main.o
	g++ -o link link.o main.o

link.o : link.cpp 
	 g++ -o link.o -c link.cpp

main.o : main.cpp link.h
	 g++ -o main.o -c main.cpp
