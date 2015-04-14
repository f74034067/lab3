Clock:Clock.o labb.o
	g++ -o Clock labb.o Clock.o
Clock.o:Clock.cpp Clock.h
	g++ -c Clock.cpp
labb.o:labb.cpp Clock.h
	g++ -c labb.cpp

