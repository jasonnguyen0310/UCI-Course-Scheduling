output: Schedule.o main.o
	g++ Schedule.o main.o -o a.out

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

Schedule.o: Schedule.cpp
	g++ -std=c++17 -c Schedule.cpp Schedule.hpp

clean:
	rm *.o a.out